#include "libqabstractscrollarea.hpp"
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
#include "libqtextformat.hpp"
#include "libqtextcursor.hpp"
#include "libqtextdocument.hpp"
#include "libqthread.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqtextedit.hpp"
#include "libqtextedit.h"

/// https://doc.qt.io/qt-6/qtextedit.html

/// q_textedit_new constructs a new QTextEdit object.
///
/// ``` QWidget* parent ```
QTextEdit* q_textedit_new(void* parent) {
    return QTextEdit_new((QWidget*)parent);
}

/// q_textedit_new2 constructs a new QTextEdit object.
///
///
QTextEdit* q_textedit_new2() {
    return QTextEdit_new2();
}

/// q_textedit_new3 constructs a new QTextEdit object.
///
/// ``` const char* text ```
QTextEdit* q_textedit_new3(const char* text) {
    return QTextEdit_new3(qstring(text));
}

/// q_textedit_new4 constructs a new QTextEdit object.
///
/// ``` const char* text, QWidget* parent ```
QTextEdit* q_textedit_new4(const char* text, void* parent) {
    return QTextEdit_new4(qstring(text), (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextEdit* self ```
QMetaObject* q_textedit_meta_object(void* self) {
    return QTextEdit_MetaObject((QTextEdit*)self);
}

/// ``` QTextEdit* self, const char* param1 ```
void* q_textedit_metacast(void* self, const char* param1) {
    return QTextEdit_Metacast((QTextEdit*)self, param1);
}

/// ``` QTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textedit_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextEdit_Metacall((QTextEdit*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, int32_t (*slot)(QTextEdit*, enum QMetaObject__Call, int, void*) ```
void q_textedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTextEdit_OnMetacall((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextEdit_QBaseMetacall((QTextEdit*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_textedit_tr(const char* s) {
    libqt_string _str = QTextEdit_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
///
/// ``` QTextEdit* self, QTextDocument* document ```
void q_textedit_set_document(void* self, void* document) {
    QTextEdit_SetDocument((QTextEdit*)self, (QTextDocument*)document);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#document)
///
/// ``` QTextEdit* self ```
QTextDocument* q_textedit_document(void* self) {
    return QTextEdit_Document((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
///
/// ``` QTextEdit* self, const char* placeholderText ```
void q_textedit_set_placeholder_text(void* self, const char* placeholderText) {
    QTextEdit_SetPlaceholderText((QTextEdit*)self, qstring(placeholderText));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
///
/// ``` QTextEdit* self ```
const char* q_textedit_placeholder_text(void* self) {
    libqt_string _str = QTextEdit_PlaceholderText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
///
/// ``` QTextEdit* self, QTextCursor* cursor ```
void q_textedit_set_text_cursor(void* self, void* cursor) {
    QTextEdit_SetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
///
/// ``` QTextEdit* self ```
QTextCursor* q_textedit_text_cursor(void* self) {
    return QTextEdit_TextCursor((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_read_only(void* self) {
    return QTextEdit_IsReadOnly((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setReadOnly)
///
/// ``` QTextEdit* self, bool ro ```
void q_textedit_set_read_only(void* self, bool ro) {
    QTextEdit_SetReadOnly((QTextEdit*)self, ro);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
///
/// ``` QTextEdit* self, int flags ```
void q_textedit_set_text_interaction_flags(void* self, int64_t flags) {
    QTextEdit_SetTextInteractionFlags((QTextEdit*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_text_interaction_flags(void* self) {
    return QTextEdit_TextInteractionFlags((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
///
/// ``` QTextEdit* self ```
double q_textedit_font_point_size(void* self) {
    return QTextEdit_FontPointSize((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
///
/// ``` QTextEdit* self ```
const char* q_textedit_font_family(void* self) {
    libqt_string _str = QTextEdit_FontFamily((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_font_weight(void* self) {
    return QTextEdit_FontWeight((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
///
/// ``` QTextEdit* self ```
bool q_textedit_font_underline(void* self) {
    return QTextEdit_FontUnderline((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
///
/// ``` QTextEdit* self ```
bool q_textedit_font_italic(void* self) {
    return QTextEdit_FontItalic((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textColor)
///
/// ``` QTextEdit* self ```
QColor* q_textedit_text_color(void* self) {
    return QTextEdit_TextColor((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
///
/// ``` QTextEdit* self ```
QColor* q_textedit_text_background_color(void* self) {
    return QTextEdit_TextBackgroundColor((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
///
/// ``` QTextEdit* self ```
QFont* q_textedit_current_font(void* self) {
    return QTextEdit_CurrentFont((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#alignment)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_alignment(void* self) {
    return QTextEdit_Alignment((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
///
/// ``` QTextEdit* self, QTextCharFormat* modifier ```
void q_textedit_merge_current_char_format(void* self, void* modifier) {
    QTextEdit_MergeCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)modifier);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
///
/// ``` QTextEdit* self, QTextCharFormat* format ```
void q_textedit_set_current_char_format(void* self, void* format) {
    QTextEdit_SetCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
///
/// ``` QTextEdit* self ```
QTextCharFormat* q_textedit_current_char_format(void* self) {
    return QTextEdit_CurrentCharFormat((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_auto_formatting(void* self) {
    return QTextEdit_AutoFormatting((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
///
/// ``` QTextEdit* self, int features ```
void q_textedit_set_auto_formatting(void* self, int64_t features) {
    QTextEdit_SetAutoFormatting((QTextEdit*)self, features);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
///
/// ``` QTextEdit* self ```
bool q_textedit_tab_changes_focus(void* self) {
    return QTextEdit_TabChangesFocus((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_set_tab_changes_focus(void* self, bool b) {
    QTextEdit_SetTabChangesFocus((QTextEdit*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
///
/// ``` QTextEdit* self, const char* title ```
void q_textedit_set_document_title(void* self, const char* title) {
    QTextEdit_SetDocumentTitle((QTextEdit*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
///
/// ``` QTextEdit* self ```
const char* q_textedit_document_title(void* self) {
    libqt_string _str = QTextEdit_DocumentTitle((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_undo_redo_enabled(void* self) {
    return QTextEdit_IsUndoRedoEnabled((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
///
/// ``` QTextEdit* self, bool enable ```
void q_textedit_set_undo_redo_enabled(void* self, bool enable) {
    QTextEdit_SetUndoRedoEnabled((QTextEdit*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_line_wrap_mode(void* self) {
    return QTextEdit_LineWrapMode((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
///
/// ``` QTextEdit* self, enum QTextEdit__LineWrapMode mode ```
void q_textedit_set_line_wrap_mode(void* self, int64_t mode) {
    QTextEdit_SetLineWrapMode((QTextEdit*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_line_wrap_column_or_width(void* self) {
    return QTextEdit_LineWrapColumnOrWidth((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
///
/// ``` QTextEdit* self, int w ```
void q_textedit_set_line_wrap_column_or_width(void* self, int w) {
    QTextEdit_SetLineWrapColumnOrWidth((QTextEdit*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_word_wrap_mode(void* self) {
    return QTextEdit_WordWrapMode((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
///
/// ``` QTextEdit* self, enum QTextOption__WrapMode policy ```
void q_textedit_set_word_wrap_mode(void* self, int64_t policy) {
    QTextEdit_SetWordWrapMode((QTextEdit*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextEdit* self, const char* exp ```
bool q_textedit_find(void* self, const char* exp) {
    return QTextEdit_Find((QTextEdit*)self, qstring(exp));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextEdit* self, QRegularExpression* exp ```
bool q_textedit_find_with_exp(void* self, void* exp) {
    return QTextEdit_FindWithExp((QTextEdit*)self, (QRegularExpression*)exp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
///
/// ``` QTextEdit* self ```
const char* q_textedit_to_plain_text(void* self) {
    libqt_string _str = QTextEdit_ToPlainText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
///
/// ``` QTextEdit* self ```
const char* q_textedit_to_html(void* self) {
    libqt_string _str = QTextEdit_ToHtml((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// ``` QTextEdit* self ```
const char* q_textedit_to_markdown(void* self) {
    libqt_string _str = QTextEdit_ToMarkdown((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
///
/// ``` QTextEdit* self ```
void q_textedit_ensure_cursor_visible(void* self) {
    QTextEdit_EnsureCursorVisible((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// ``` QTextEdit* self, int typeVal, QUrl* name ```
QVariant* q_textedit_load_resource(void* self, int typeVal, void* name) {
    return QTextEdit_LoadResource((QTextEdit*)self, typeVal, (QUrl*)name);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, QVariant* (*slot)(QTextEdit*, int, QUrl*) ```
void q_textedit_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*)) {
    QTextEdit_OnLoadResource((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, int typeVal, QUrl* name ```
QVariant* q_textedit_qbase_load_resource(void* self, int typeVal, void* name) {
    return QTextEdit_QBaseLoadResource((QTextEdit*)self, typeVal, (QUrl*)name);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// ``` QTextEdit* self ```
QMenu* q_textedit_create_standard_context_menu(void* self) {
    return QTextEdit_CreateStandardContextMenu((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// ``` QTextEdit* self, QPoint* position ```
QMenu* q_textedit_create_standard_context_menu_with_position(void* self, void* position) {
    return QTextEdit_CreateStandardContextMenuWithPosition((QTextEdit*)self, (QPoint*)position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
///
/// ``` QTextEdit* self, QPoint* pos ```
QTextCursor* q_textedit_cursor_for_position(void* self, void* pos) {
    return QTextEdit_CursorForPosition((QTextEdit*)self, (QPoint*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// ``` QTextEdit* self, QTextCursor* cursor ```
QRect* q_textedit_cursor_rect(void* self, void* cursor) {
    return QTextEdit_CursorRect((QTextEdit*)self, (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_cursor_rect2(void* self) {
    return QTextEdit_CursorRect2((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
///
/// ``` QTextEdit* self, QPoint* pos ```
const char* q_textedit_anchor_at(void* self, void* pos) {
    libqt_string _str = QTextEdit_AnchorAt((QTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
///
/// ``` QTextEdit* self ```
bool q_textedit_overwrite_mode(void* self) {
    return QTextEdit_OverwriteMode((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
///
/// ``` QTextEdit* self, bool overwrite ```
void q_textedit_set_overwrite_mode(void* self, bool overwrite) {
    QTextEdit_SetOverwriteMode((QTextEdit*)self, overwrite);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
///
/// ``` QTextEdit* self ```
double q_textedit_tab_stop_distance(void* self) {
    return QTextEdit_TabStopDistance((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
///
/// ``` QTextEdit* self, double distance ```
void q_textedit_set_tab_stop_distance(void* self, double distance) {
    QTextEdit_SetTabStopDistance((QTextEdit*)self, distance);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_cursor_width(void* self) {
    return QTextEdit_CursorWidth((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
///
/// ``` QTextEdit* self, int width ```
void q_textedit_set_cursor_width(void* self, int width) {
    QTextEdit_SetCursorWidth((QTextEdit*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
///
/// ``` QTextEdit* self ```
bool q_textedit_accept_rich_text(void* self) {
    return QTextEdit_AcceptRichText((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
///
/// ``` QTextEdit* self, bool accept ```
void q_textedit_set_accept_rich_text(void* self, bool accept) {
    QTextEdit_SetAcceptRichText((QTextEdit*)self, accept);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
///
/// ``` QTextEdit* self, QTextEdit__ExtraSelection* selections[] ```
void q_textedit_set_extra_selections(void* self, void* selections[]) {
    QTextEdit__ExtraSelection** selections_arr = (QTextEdit__ExtraSelection**)selections;
    size_t selections_len = 0;
    while (selections_arr[selections_len] != NULL) {
        selections_len++;
    }
    libqt_list selections_list = {
        .len = selections_len,
        .data = {(QTextEdit__ExtraSelection*)selections},
    };
    QTextEdit_SetExtraSelections((QTextEdit*)self, selections_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
///
/// ``` QTextEdit* self ```
libqt_list /* of QTextEdit__ExtraSelection* */ q_textedit_extra_selections(void* self) {
    libqt_list _arr = QTextEdit_ExtraSelections((QTextEdit*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// ``` QTextEdit* self, enum QTextCursor__MoveOperation operation ```
void q_textedit_move_cursor(void* self, int64_t operation) {
    QTextEdit_MoveCursor((QTextEdit*)self, operation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
///
/// ``` QTextEdit* self ```
bool q_textedit_can_paste(void* self) {
    return QTextEdit_CanPaste((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#print)
///
/// ``` QTextEdit* self, QPagedPaintDevice* printer ```
void q_textedit_print(void* self, void* printer) {
    QTextEdit_Print((QTextEdit*)self, (QPagedPaintDevice*)printer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// ``` QTextEdit* self, enum Qt__InputMethodQuery property ```
QVariant* q_textedit_input_method_query(void* self, int64_t property) {
    return QTextEdit_InputMethodQuery((QTextEdit*)self, property);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, QVariant* (*slot)(QTextEdit*, enum Qt__InputMethodQuery) ```
void q_textedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTextEdit_OnInputMethodQuery((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, enum Qt__InputMethodQuery property ```
QVariant* q_textedit_qbase_input_method_query(void* self, int64_t property) {
    return QTextEdit_QBaseInputMethodQuery((QTextEdit*)self, property);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// ``` QTextEdit* self, enum Qt__InputMethodQuery query, QVariant* argument ```
QVariant* q_textedit_input_method_query2(void* self, int64_t query, void* argument) {
    return QTextEdit_InputMethodQuery2((QTextEdit*)self, query, (QVariant*)argument);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
///
/// ``` QTextEdit* self, double s ```
void q_textedit_set_font_point_size(void* self, double s) {
    QTextEdit_SetFontPointSize((QTextEdit*)self, s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
///
/// ``` QTextEdit* self, const char* fontFamily ```
void q_textedit_set_font_family(void* self, const char* fontFamily) {
    QTextEdit_SetFontFamily((QTextEdit*)self, qstring(fontFamily));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
///
/// ``` QTextEdit* self, int w ```
void q_textedit_set_font_weight(void* self, int w) {
    QTextEdit_SetFontWeight((QTextEdit*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_set_font_underline(void* self, bool b) {
    QTextEdit_SetFontUnderline((QTextEdit*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_set_font_italic(void* self, bool b) {
    QTextEdit_SetFontItalic((QTextEdit*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
///
/// ``` QTextEdit* self, QColor* c ```
void q_textedit_set_text_color(void* self, void* c) {
    QTextEdit_SetTextColor((QTextEdit*)self, (QColor*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
///
/// ``` QTextEdit* self, QColor* c ```
void q_textedit_set_text_background_color(void* self, void* c) {
    QTextEdit_SetTextBackgroundColor((QTextEdit*)self, (QColor*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
///
/// ``` QTextEdit* self, QFont* f ```
void q_textedit_set_current_font(void* self, void* f) {
    QTextEdit_SetCurrentFont((QTextEdit*)self, (QFont*)f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
///
/// ``` QTextEdit* self, int a ```
void q_textedit_set_alignment(void* self, int64_t a) {
    QTextEdit_SetAlignment((QTextEdit*)self, a);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_set_plain_text(void* self, const char* text) {
    QTextEdit_SetPlainText((QTextEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_set_html(void* self, const char* text) {
    QTextEdit_SetHtml((QTextEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
///
/// ``` QTextEdit* self, const char* markdown ```
void q_textedit_set_markdown(void* self, const char* markdown) {
    QTextEdit_SetMarkdown((QTextEdit*)self, qstring(markdown));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setText)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_set_text(void* self, const char* text) {
    QTextEdit_SetText((QTextEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cut)
///
/// ``` QTextEdit* self ```
void q_textedit_cut(void* self) {
    QTextEdit_Cut((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copy)
///
/// ``` QTextEdit* self ```
void q_textedit_copy(void* self) {
    QTextEdit_Copy((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paste)
///
/// ``` QTextEdit* self ```
void q_textedit_paste(void* self) {
    QTextEdit_Paste((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undo)
///
/// ``` QTextEdit* self ```
void q_textedit_undo(void* self) {
    QTextEdit_Undo((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redo)
///
/// ``` QTextEdit* self ```
void q_textedit_redo(void* self) {
    QTextEdit_Redo((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#clear)
///
/// ``` QTextEdit* self ```
void q_textedit_clear(void* self) {
    QTextEdit_Clear((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
///
/// ``` QTextEdit* self ```
void q_textedit_select_all(void* self) {
    QTextEdit_SelectAll((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_insert_plain_text(void* self, const char* text) {
    QTextEdit_InsertPlainText((QTextEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_insert_html(void* self, const char* text) {
    QTextEdit_InsertHtml((QTextEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#append)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_append(void* self, const char* text) {
    QTextEdit_Append((QTextEdit*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
///
/// ``` QTextEdit* self, const char* name ```
void q_textedit_scroll_to_anchor(void* self, const char* name) {
    QTextEdit_ScrollToAnchor((QTextEdit*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// ``` QTextEdit* self ```
void q_textedit_zoom_in(void* self) {
    QTextEdit_ZoomIn((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// ``` QTextEdit* self ```
void q_textedit_zoom_out(void* self) {
    QTextEdit_ZoomOut((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// ``` QTextEdit* self ```
void q_textedit_text_changed(void* self) {
    QTextEdit_TextChanged((QTextEdit*)self);
}

/// ``` QTextEdit* self, void (*slot)(QTextEdit*) ```
void q_textedit_on_text_changed(void* self, void (*slot)(void*)) {
    QTextEdit_Connect_TextChanged((QTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_undo_available(void* self, bool b) {
    QTextEdit_UndoAvailable((QTextEdit*)self, b);
}

/// ``` QTextEdit* self, void (*slot)(QTextEdit*, bool) ```
void q_textedit_on_undo_available(void* self, void (*slot)(void*, bool)) {
    QTextEdit_Connect_UndoAvailable((QTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_redo_available(void* self, bool b) {
    QTextEdit_RedoAvailable((QTextEdit*)self, b);
}

/// ``` QTextEdit* self, void (*slot)(QTextEdit*, bool) ```
void q_textedit_on_redo_available(void* self, void (*slot)(void*, bool)) {
    QTextEdit_Connect_RedoAvailable((QTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// ``` QTextEdit* self, QTextCharFormat* format ```
void q_textedit_current_char_format_changed(void* self, void* format) {
    QTextEdit_CurrentCharFormatChanged((QTextEdit*)self, (QTextCharFormat*)format);
}

/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QTextCharFormat*) ```
void q_textedit_on_current_char_format_changed(void* self, void (*slot)(void*, void*)) {
    QTextEdit_Connect_CurrentCharFormatChanged((QTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_copy_available(void* self, bool b) {
    QTextEdit_CopyAvailable((QTextEdit*)self, b);
}

/// ``` QTextEdit* self, void (*slot)(QTextEdit*, bool) ```
void q_textedit_on_copy_available(void* self, void (*slot)(void*, bool)) {
    QTextEdit_Connect_CopyAvailable((QTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// ``` QTextEdit* self ```
void q_textedit_selection_changed(void* self) {
    QTextEdit_SelectionChanged((QTextEdit*)self);
}

/// ``` QTextEdit* self, void (*slot)(QTextEdit*) ```
void q_textedit_on_selection_changed(void* self, void (*slot)(void*)) {
    QTextEdit_Connect_SelectionChanged((QTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// ``` QTextEdit* self ```
void q_textedit_cursor_position_changed(void* self) {
    QTextEdit_CursorPositionChanged((QTextEdit*)self);
}

/// ``` QTextEdit* self, void (*slot)(QTextEdit*) ```
void q_textedit_on_cursor_position_changed(void* self, void (*slot)(void*)) {
    QTextEdit_Connect_CursorPositionChanged((QTextEdit*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#event)
///
/// ``` QTextEdit* self, QEvent* e ```
bool q_textedit_event(void* self, void* e) {
    return QTextEdit_Event((QTextEdit*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, QEvent*) ```
void q_textedit_on_event(void* self, bool (*slot)(void*, void*)) {
    QTextEdit_OnEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QEvent* e ```
bool q_textedit_qbase_event(void* self, void* e) {
    return QTextEdit_QBaseEvent((QTextEdit*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// ``` QTextEdit* self, QTimerEvent* e ```
void q_textedit_timer_event(void* self, void* e) {
    QTextEdit_TimerEvent((QTextEdit*)self, (QTimerEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QTimerEvent*) ```
void q_textedit_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnTimerEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QTimerEvent* e ```
void q_textedit_qbase_timer_event(void* self, void* e) {
    QTextEdit_QBaseTimerEvent((QTextEdit*)self, (QTimerEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
///
/// ``` QTextEdit* self, QKeyEvent* e ```
void q_textedit_key_press_event(void* self, void* e) {
    QTextEdit_KeyPressEvent((QTextEdit*)self, (QKeyEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QKeyEvent*) ```
void q_textedit_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnKeyPressEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QKeyEvent* e ```
void q_textedit_qbase_key_press_event(void* self, void* e) {
    QTextEdit_QBaseKeyPressEvent((QTextEdit*)self, (QKeyEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// ``` QTextEdit* self, QKeyEvent* e ```
void q_textedit_key_release_event(void* self, void* e) {
    QTextEdit_KeyReleaseEvent((QTextEdit*)self, (QKeyEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QKeyEvent*) ```
void q_textedit_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnKeyReleaseEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QKeyEvent* e ```
void q_textedit_qbase_key_release_event(void* self, void* e) {
    QTextEdit_QBaseKeyReleaseEvent((QTextEdit*)self, (QKeyEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// ``` QTextEdit* self, QResizeEvent* e ```
void q_textedit_resize_event(void* self, void* e) {
    QTextEdit_ResizeEvent((QTextEdit*)self, (QResizeEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QResizeEvent*) ```
void q_textedit_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnResizeEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QResizeEvent* e ```
void q_textedit_qbase_resize_event(void* self, void* e) {
    QTextEdit_QBaseResizeEvent((QTextEdit*)self, (QResizeEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// ``` QTextEdit* self, QPaintEvent* e ```
void q_textedit_paint_event(void* self, void* e) {
    QTextEdit_PaintEvent((QTextEdit*)self, (QPaintEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QPaintEvent*) ```
void q_textedit_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnPaintEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QPaintEvent* e ```
void q_textedit_qbase_paint_event(void* self, void* e) {
    QTextEdit_QBasePaintEvent((QTextEdit*)self, (QPaintEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_mouse_press_event(void* self, void* e) {
    QTextEdit_MousePressEvent((QTextEdit*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMouseEvent*) ```
void q_textedit_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnMousePressEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_qbase_mouse_press_event(void* self, void* e) {
    QTextEdit_QBaseMousePressEvent((QTextEdit*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_mouse_move_event(void* self, void* e) {
    QTextEdit_MouseMoveEvent((QTextEdit*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMouseEvent*) ```
void q_textedit_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnMouseMoveEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_qbase_mouse_move_event(void* self, void* e) {
    QTextEdit_QBaseMouseMoveEvent((QTextEdit*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_mouse_release_event(void* self, void* e) {
    QTextEdit_MouseReleaseEvent((QTextEdit*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMouseEvent*) ```
void q_textedit_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnMouseReleaseEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_qbase_mouse_release_event(void* self, void* e) {
    QTextEdit_QBaseMouseReleaseEvent((QTextEdit*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_mouse_double_click_event(void* self, void* e) {
    QTextEdit_MouseDoubleClickEvent((QTextEdit*)self, (QMouseEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMouseEvent*) ```
void q_textedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnMouseDoubleClickEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_qbase_mouse_double_click_event(void* self, void* e) {
    QTextEdit_QBaseMouseDoubleClickEvent((QTextEdit*)self, (QMouseEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// ``` QTextEdit* self, bool next ```
bool q_textedit_focus_next_prev_child(void* self, bool next) {
    return QTextEdit_FocusNextPrevChild((QTextEdit*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, bool) ```
void q_textedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTextEdit_OnFocusNextPrevChild((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, bool next ```
bool q_textedit_qbase_focus_next_prev_child(void* self, bool next) {
    return QTextEdit_QBaseFocusNextPrevChild((QTextEdit*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// ``` QTextEdit* self, QContextMenuEvent* e ```
void q_textedit_context_menu_event(void* self, void* e) {
    QTextEdit_ContextMenuEvent((QTextEdit*)self, (QContextMenuEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QContextMenuEvent*) ```
void q_textedit_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnContextMenuEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QContextMenuEvent* e ```
void q_textedit_qbase_context_menu_event(void* self, void* e) {
    QTextEdit_QBaseContextMenuEvent((QTextEdit*)self, (QContextMenuEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// ``` QTextEdit* self, QDragEnterEvent* e ```
void q_textedit_drag_enter_event(void* self, void* e) {
    QTextEdit_DragEnterEvent((QTextEdit*)self, (QDragEnterEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QDragEnterEvent*) ```
void q_textedit_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnDragEnterEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QDragEnterEvent* e ```
void q_textedit_qbase_drag_enter_event(void* self, void* e) {
    QTextEdit_QBaseDragEnterEvent((QTextEdit*)self, (QDragEnterEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// ``` QTextEdit* self, QDragLeaveEvent* e ```
void q_textedit_drag_leave_event(void* self, void* e) {
    QTextEdit_DragLeaveEvent((QTextEdit*)self, (QDragLeaveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QDragLeaveEvent*) ```
void q_textedit_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnDragLeaveEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QDragLeaveEvent* e ```
void q_textedit_qbase_drag_leave_event(void* self, void* e) {
    QTextEdit_QBaseDragLeaveEvent((QTextEdit*)self, (QDragLeaveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// ``` QTextEdit* self, QDragMoveEvent* e ```
void q_textedit_drag_move_event(void* self, void* e) {
    QTextEdit_DragMoveEvent((QTextEdit*)self, (QDragMoveEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QDragMoveEvent*) ```
void q_textedit_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnDragMoveEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QDragMoveEvent* e ```
void q_textedit_qbase_drag_move_event(void* self, void* e) {
    QTextEdit_QBaseDragMoveEvent((QTextEdit*)self, (QDragMoveEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// ``` QTextEdit* self, QDropEvent* e ```
void q_textedit_drop_event(void* self, void* e) {
    QTextEdit_DropEvent((QTextEdit*)self, (QDropEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QDropEvent*) ```
void q_textedit_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnDropEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QDropEvent* e ```
void q_textedit_qbase_drop_event(void* self, void* e) {
    QTextEdit_QBaseDropEvent((QTextEdit*)self, (QDropEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// ``` QTextEdit* self, QFocusEvent* e ```
void q_textedit_focus_in_event(void* self, void* e) {
    QTextEdit_FocusInEvent((QTextEdit*)self, (QFocusEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QFocusEvent*) ```
void q_textedit_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnFocusInEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QFocusEvent* e ```
void q_textedit_qbase_focus_in_event(void* self, void* e) {
    QTextEdit_QBaseFocusInEvent((QTextEdit*)self, (QFocusEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// ``` QTextEdit* self, QFocusEvent* e ```
void q_textedit_focus_out_event(void* self, void* e) {
    QTextEdit_FocusOutEvent((QTextEdit*)self, (QFocusEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QFocusEvent*) ```
void q_textedit_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnFocusOutEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QFocusEvent* e ```
void q_textedit_qbase_focus_out_event(void* self, void* e) {
    QTextEdit_QBaseFocusOutEvent((QTextEdit*)self, (QFocusEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// ``` QTextEdit* self, QShowEvent* param1 ```
void q_textedit_show_event(void* self, void* param1) {
    QTextEdit_ShowEvent((QTextEdit*)self, (QShowEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QShowEvent*) ```
void q_textedit_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnShowEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QShowEvent* param1 ```
void q_textedit_qbase_show_event(void* self, void* param1) {
    QTextEdit_QBaseShowEvent((QTextEdit*)self, (QShowEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// ``` QTextEdit* self, QEvent* e ```
void q_textedit_change_event(void* self, void* e) {
    QTextEdit_ChangeEvent((QTextEdit*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QEvent*) ```
void q_textedit_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnChangeEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QEvent* e ```
void q_textedit_qbase_change_event(void* self, void* e) {
    QTextEdit_QBaseChangeEvent((QTextEdit*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// ``` QTextEdit* self, QWheelEvent* e ```
void q_textedit_wheel_event(void* self, void* e) {
    QTextEdit_WheelEvent((QTextEdit*)self, (QWheelEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QWheelEvent*) ```
void q_textedit_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnWheelEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QWheelEvent* e ```
void q_textedit_qbase_wheel_event(void* self, void* e) {
    QTextEdit_QBaseWheelEvent((QTextEdit*)self, (QWheelEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// ``` QTextEdit* self ```
QMimeData* q_textedit_create_mime_data_from_selection(void* self) {
    return QTextEdit_CreateMimeDataFromSelection((QTextEdit*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, QMimeData* (*slot)() ```
void q_textedit_on_create_mime_data_from_selection(void* self, QMimeData* (*slot)()) {
    QTextEdit_OnCreateMimeDataFromSelection((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self ```
QMimeData* q_textedit_qbase_create_mime_data_from_selection(void* self) {
    return QTextEdit_QBaseCreateMimeDataFromSelection((QTextEdit*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// ``` QTextEdit* self, QMimeData* source ```
bool q_textedit_can_insert_from_mime_data(void* self, void* source) {
    return QTextEdit_CanInsertFromMimeData((QTextEdit*)self, (QMimeData*)source);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, QMimeData*) ```
void q_textedit_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*)) {
    QTextEdit_OnCanInsertFromMimeData((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QMimeData* source ```
bool q_textedit_qbase_can_insert_from_mime_data(void* self, void* source) {
    return QTextEdit_QBaseCanInsertFromMimeData((QTextEdit*)self, (QMimeData*)source);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// ``` QTextEdit* self, QMimeData* source ```
void q_textedit_insert_from_mime_data(void* self, void* source) {
    QTextEdit_InsertFromMimeData((QTextEdit*)self, (QMimeData*)source);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMimeData*) ```
void q_textedit_on_insert_from_mime_data(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnInsertFromMimeData((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QMimeData* source ```
void q_textedit_qbase_insert_from_mime_data(void* self, void* source) {
    QTextEdit_QBaseInsertFromMimeData((QTextEdit*)self, (QMimeData*)source);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// ``` QTextEdit* self, QInputMethodEvent* param1 ```
void q_textedit_input_method_event(void* self, void* param1) {
    QTextEdit_InputMethodEvent((QTextEdit*)self, (QInputMethodEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QInputMethodEvent*) ```
void q_textedit_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnInputMethodEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QInputMethodEvent* param1 ```
void q_textedit_qbase_input_method_event(void* self, void* param1) {
    QTextEdit_QBaseInputMethodEvent((QTextEdit*)self, (QInputMethodEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// ``` QTextEdit* self, int dx, int dy ```
void q_textedit_scroll_contents_by(void* self, int dx, int dy) {
    QTextEdit_ScrollContentsBy((QTextEdit*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, int, int) ```
void q_textedit_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QTextEdit_OnScrollContentsBy((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, int dx, int dy ```
void q_textedit_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTextEdit_QBaseScrollContentsBy((QTextEdit*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// ``` QTextEdit* self, QTextCursor* cursor ```
void q_textedit_do_set_text_cursor(void* self, void* cursor) {
    QTextEdit_DoSetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QTextCursor*) ```
void q_textedit_on_do_set_text_cursor(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnDoSetTextCursor((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, QTextCursor* cursor ```
void q_textedit_qbase_do_set_text_cursor(void* self, void* cursor) {
    QTextEdit_QBaseDoSetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// ``` QTextEdit* self, float range ```
void q_textedit_zoom_in_f(void* self, float range) {
    QTextEdit_ZoomInF((QTextEdit*)self, range);
}

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, float) ```
void q_textedit_on_zoom_in_f(void* self, void (*slot)(void*, float)) {
    QTextEdit_OnZoomInF((QTextEdit*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextEdit* self, float range ```
void q_textedit_qbase_zoom_in_f(void* self, float range) {
    QTextEdit_QBaseZoomInF((QTextEdit*)self, range);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_textedit_tr2(const char* s, const char* c) {
    libqt_string _str = QTextEdit_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_textedit_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextEdit_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextEdit* self, const char* exp, int options ```
bool q_textedit_find2(void* self, const char* exp, int64_t options) {
    return QTextEdit_Find2((QTextEdit*)self, qstring(exp), options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextEdit* self, QRegularExpression* exp, int options ```
bool q_textedit_find22(void* self, void* exp, int64_t options) {
    return QTextEdit_Find22((QTextEdit*)self, (QRegularExpression*)exp, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// ``` QTextEdit* self, int features ```
const char* q_textedit_to_markdown1(void* self, int64_t features) {
    libqt_string _str = QTextEdit_ToMarkdown1((QTextEdit*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// ``` QTextEdit* self, enum QTextCursor__MoveOperation operation, enum QTextCursor__MoveMode mode ```
void q_textedit_move_cursor2(void* self, int64_t operation, int64_t mode) {
    QTextEdit_MoveCursor2((QTextEdit*)self, operation, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// ``` QTextEdit* self, int range ```
void q_textedit_zoom_in1(void* self, int range) {
    QTextEdit_ZoomIn1((QTextEdit*)self, range);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// ``` QTextEdit* self, int range ```
void q_textedit_zoom_out1(void* self, int range) {
    QTextEdit_ZoomOut1((QTextEdit*)self, range);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QTextEdit* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_textedit_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QTextEdit* self ```
QScrollBar* q_textedit_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QTextEdit* self, QScrollBar* scrollbar ```
void q_textedit_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QTextEdit* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_textedit_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QTextEdit* self ```
QScrollBar* q_textedit_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QTextEdit* self, QScrollBar* scrollbar ```
void q_textedit_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QTextEdit* self, QWidget* widget ```
void q_textedit_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QTextEdit* self, QWidget* widget, int alignment ```
void q_textedit_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QTextEdit* self, int alignment ```
libqt_list /* of QWidget* */ q_textedit_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QTextEdit* self, QWidget* widget ```
void q_textedit_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QTextEdit* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_textedit_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QTextEdit* self, int frameStyle ```
void q_textedit_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QTextEdit* self, enum QFrame__Shape frameShape ```
void q_textedit_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QTextEdit* self, enum QFrame__Shadow frameShadow ```
void q_textedit_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QTextEdit* self, int lineWidth ```
void q_textedit_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QTextEdit* self, int midLineWidth ```
void q_textedit_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QTextEdit* self, QRect* frameRect ```
void q_textedit_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTextEdit* self ```
uintptr_t q_textedit_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTextEdit* self ```
void q_textedit_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTextEdit* self ```
uintptr_t q_textedit_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTextEdit* self ```
uintptr_t q_textedit_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTextEdit* self ```
QStyle* q_textedit_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTextEdit* self, QStyle* style ```
void q_textedit_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTextEdit* self, enum Qt__WindowModality windowModality ```
void q_textedit_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTextEdit* self, QWidget* param1 ```
bool q_textedit_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTextEdit* self, bool enabled ```
void q_textedit_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTextEdit* self, bool disabled ```
void q_textedit_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTextEdit* self, bool windowModified ```
void q_textedit_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTextEdit* self ```
QPoint* q_textedit_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTextEdit* self ```
QRegion* q_textedit_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTextEdit* self, QSize* minimumSize ```
void q_textedit_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTextEdit* self, int minw, int minh ```
void q_textedit_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTextEdit* self, QSize* maximumSize ```
void q_textedit_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTextEdit* self, int maxw, int maxh ```
void q_textedit_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTextEdit* self, int minw ```
void q_textedit_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTextEdit* self, int minh ```
void q_textedit_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTextEdit* self, int maxw ```
void q_textedit_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTextEdit* self, int maxh ```
void q_textedit_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTextEdit* self, QSize* sizeIncrement ```
void q_textedit_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTextEdit* self, int w, int h ```
void q_textedit_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTextEdit* self, QSize* baseSize ```
void q_textedit_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTextEdit* self, int basew, int baseh ```
void q_textedit_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTextEdit* self, QSize* fixedSize ```
void q_textedit_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTextEdit* self, int w, int h ```
void q_textedit_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTextEdit* self, int w ```
void q_textedit_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTextEdit* self, int h ```
void q_textedit_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTextEdit* self, QPointF* param1 ```
QPointF* q_textedit_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTextEdit* self, QPoint* param1 ```
QPoint* q_textedit_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTextEdit* self, QPointF* param1 ```
QPointF* q_textedit_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTextEdit* self, QPoint* param1 ```
QPoint* q_textedit_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTextEdit* self, QPointF* param1 ```
QPointF* q_textedit_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTextEdit* self, QPoint* param1 ```
QPoint* q_textedit_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTextEdit* self, QPointF* param1 ```
QPointF* q_textedit_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTextEdit* self, QPoint* param1 ```
QPoint* q_textedit_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTextEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_textedit_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTextEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_textedit_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTextEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_textedit_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTextEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_textedit_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTextEdit* self ```
QPalette* q_textedit_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTextEdit* self, QPalette* palette ```
void q_textedit_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTextEdit* self, enum QPalette__ColorRole backgroundRole ```
void q_textedit_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTextEdit* self, enum QPalette__ColorRole foregroundRole ```
void q_textedit_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTextEdit* self ```
QFont* q_textedit_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTextEdit* self, QFont* font ```
void q_textedit_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTextEdit* self ```
QFontMetrics* q_textedit_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTextEdit* self ```
QFontInfo* q_textedit_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTextEdit* self ```
QCursor* q_textedit_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTextEdit* self, QCursor* cursor ```
void q_textedit_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTextEdit* self ```
void q_textedit_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTextEdit* self, bool enable ```
void q_textedit_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTextEdit* self ```
bool q_textedit_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTextEdit* self ```
bool q_textedit_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTextEdit* self, bool enable ```
void q_textedit_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTextEdit* self ```
bool q_textedit_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTextEdit* self, QBitmap* mask ```
void q_textedit_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTextEdit* self, QRegion* mask ```
void q_textedit_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTextEdit* self ```
QRegion* q_textedit_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTextEdit* self ```
void q_textedit_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPaintDevice* target ```
void q_textedit_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPainter* painter ```
void q_textedit_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTextEdit* self ```
QPixmap* q_textedit_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTextEdit* self ```
QGraphicsEffect* q_textedit_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTextEdit* self, QGraphicsEffect* effect ```
void q_textedit_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTextEdit* self, enum Qt__GestureType typeVal ```
void q_textedit_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTextEdit* self, enum Qt__GestureType typeVal ```
void q_textedit_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTextEdit* self, const char* windowTitle ```
void q_textedit_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTextEdit* self, const char* styleSheet ```
void q_textedit_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTextEdit* self ```
const char* q_textedit_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTextEdit* self ```
const char* q_textedit_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTextEdit* self, QIcon* icon ```
void q_textedit_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTextEdit* self ```
QIcon* q_textedit_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTextEdit* self, const char* windowIconText ```
void q_textedit_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTextEdit* self ```
const char* q_textedit_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTextEdit* self, const char* windowRole ```
void q_textedit_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTextEdit* self ```
const char* q_textedit_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTextEdit* self, const char* filePath ```
void q_textedit_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTextEdit* self ```
const char* q_textedit_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTextEdit* self, double level ```
void q_textedit_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTextEdit* self ```
double q_textedit_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTextEdit* self, const char* toolTip ```
void q_textedit_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTextEdit* self ```
const char* q_textedit_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTextEdit* self, int msec ```
void q_textedit_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTextEdit* self, const char* statusTip ```
void q_textedit_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTextEdit* self ```
const char* q_textedit_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTextEdit* self, const char* whatsThis ```
void q_textedit_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTextEdit* self ```
const char* q_textedit_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTextEdit* self ```
const char* q_textedit_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTextEdit* self, const char* name ```
void q_textedit_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTextEdit* self ```
const char* q_textedit_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTextEdit* self, const char* description ```
void q_textedit_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTextEdit* self, enum Qt__LayoutDirection direction ```
void q_textedit_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTextEdit* self ```
void q_textedit_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTextEdit* self, QLocale* locale ```
void q_textedit_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTextEdit* self ```
QLocale* q_textedit_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTextEdit* self ```
void q_textedit_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTextEdit* self ```
void q_textedit_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTextEdit* self ```
void q_textedit_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTextEdit* self ```
void q_textedit_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTextEdit* self, enum Qt__FocusReason reason ```
void q_textedit_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTextEdit* self, enum Qt__FocusPolicy policy ```
void q_textedit_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTextEdit* self ```
bool q_textedit_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_textedit_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTextEdit* self, QWidget* focusProxy ```
void q_textedit_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTextEdit* self, enum Qt__ContextMenuPolicy policy ```
void q_textedit_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTextEdit* self ```
void q_textedit_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTextEdit* self, QCursor* param1 ```
void q_textedit_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTextEdit* self ```
void q_textedit_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTextEdit* self ```
void q_textedit_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTextEdit* self ```
void q_textedit_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTextEdit* self, QKeySequence* key ```
int32_t q_textedit_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTextEdit* self, int id ```
void q_textedit_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTextEdit* self, int id ```
void q_textedit_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTextEdit* self, int id ```
void q_textedit_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_textedit_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_textedit_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTextEdit* self ```
bool q_textedit_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTextEdit* self, bool enable ```
void q_textedit_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTextEdit* self ```
QGraphicsProxyWidget* q_textedit_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextEdit* self ```
void q_textedit_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextEdit* self ```
void q_textedit_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextEdit* self, int x, int y, int w, int h ```
void q_textedit_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextEdit* self, QRect* param1 ```
void q_textedit_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextEdit* self, QRegion* param1 ```
void q_textedit_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextEdit* self, int x, int y, int w, int h ```
void q_textedit_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextEdit* self, QRect* param1 ```
void q_textedit_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextEdit* self, QRegion* param1 ```
void q_textedit_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTextEdit* self, bool hidden ```
void q_textedit_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTextEdit* self ```
void q_textedit_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTextEdit* self ```
void q_textedit_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTextEdit* self ```
void q_textedit_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTextEdit* self ```
void q_textedit_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTextEdit* self ```
void q_textedit_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTextEdit* self ```
void q_textedit_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTextEdit* self ```
bool q_textedit_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTextEdit* self ```
void q_textedit_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTextEdit* self ```
void q_textedit_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTextEdit* self, QWidget* param1 ```
void q_textedit_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTextEdit* self, int x, int y ```
void q_textedit_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTextEdit* self, QPoint* param1 ```
void q_textedit_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTextEdit* self, int w, int h ```
void q_textedit_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTextEdit* self, QSize* param1 ```
void q_textedit_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTextEdit* self, int x, int y, int w, int h ```
void q_textedit_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTextEdit* self, QRect* geometry ```
void q_textedit_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTextEdit* self ```
char* q_textedit_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTextEdit* self, const char* geometry ```
bool q_textedit_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTextEdit* self ```
void q_textedit_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTextEdit* self, QWidget* param1 ```
bool q_textedit_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTextEdit* self, int state ```
void q_textedit_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTextEdit* self, int state ```
void q_textedit_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTextEdit* self ```
QSizePolicy* q_textedit_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTextEdit* self, QSizePolicy* sizePolicy ```
void q_textedit_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTextEdit* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_textedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTextEdit* self ```
QRegion* q_textedit_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTextEdit* self, int left, int top, int right, int bottom ```
void q_textedit_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTextEdit* self, QMargins* margins ```
void q_textedit_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTextEdit* self ```
QMargins* q_textedit_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTextEdit* self ```
QLayout* q_textedit_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTextEdit* self, QLayout* layout ```
void q_textedit_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTextEdit* self ```
void q_textedit_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTextEdit* self, QWidget* parent ```
void q_textedit_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTextEdit* self, QWidget* parent, int f ```
void q_textedit_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTextEdit* self, int dx, int dy ```
void q_textedit_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTextEdit* self, int dx, int dy, QRect* param3 ```
void q_textedit_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTextEdit* self ```
bool q_textedit_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTextEdit* self, bool on ```
void q_textedit_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextEdit* self, QAction* action ```
void q_textedit_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTextEdit* self, QAction* actions[] ```
void q_textedit_add_actions(void* self, void* actions[]) {
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
/// ``` QTextEdit* self, QAction* before, QAction* actions[] ```
void q_textedit_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QTextEdit* self, QAction* before, QAction* action ```
void q_textedit_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTextEdit* self, QAction* action ```
void q_textedit_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTextEdit* self ```
libqt_list /* of QAction* */ q_textedit_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextEdit* self, const char* text ```
QAction* q_textedit_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextEdit* self, QIcon* icon, const char* text ```
QAction* q_textedit_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextEdit* self, const char* text, QKeySequence* shortcut ```
QAction* q_textedit_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextEdit* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_textedit_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTextEdit* self, int typeVal ```
void q_textedit_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTextEdit* self, enum Qt__WindowType param1 ```
void q_textedit_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTextEdit* self, int typeVal ```
void q_textedit_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTextEdit* self, int x, int y ```
QWidget* q_textedit_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTextEdit* self, QPoint* p ```
QWidget* q_textedit_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTextEdit* self, enum Qt__WidgetAttribute param1 ```
void q_textedit_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTextEdit* self, enum Qt__WidgetAttribute param1 ```
bool q_textedit_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTextEdit* self ```
void q_textedit_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTextEdit* self, QWidget* child ```
bool q_textedit_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTextEdit* self ```
bool q_textedit_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTextEdit* self, bool enabled ```
void q_textedit_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTextEdit* self ```
QBackingStore* q_textedit_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTextEdit* self ```
QWindow* q_textedit_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTextEdit* self ```
QScreen* q_textedit_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTextEdit* self, QScreen* screen ```
void q_textedit_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_textedit_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTextEdit* self, const char* title ```
void q_textedit_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QTextEdit* self, void (*slot)(QWidget*, const char*) ```
void q_textedit_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTextEdit* self, QIcon* icon ```
void q_textedit_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QTextEdit* self, void (*slot)(QWidget*, QIcon*) ```
void q_textedit_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTextEdit* self, const char* iconText ```
void q_textedit_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QTextEdit* self, void (*slot)(QWidget*, const char*) ```
void q_textedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTextEdit* self, QPoint* pos ```
void q_textedit_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QTextEdit* self, void (*slot)(QWidget*, QPoint*) ```
void q_textedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTextEdit* self, int hints ```
void q_textedit_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPaintDevice* target, QPoint* targetOffset ```
void q_textedit_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_textedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_textedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPainter* painter, QPoint* targetOffset ```
void q_textedit_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_textedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_textedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTextEdit* self, QRect* rectangle ```
QPixmap* q_textedit_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTextEdit* self, enum Qt__GestureType typeVal, int flags ```
void q_textedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTextEdit* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_textedit_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTextEdit* self, int id, bool enable ```
void q_textedit_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTextEdit* self, int id, bool enable ```
void q_textedit_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTextEdit* self, enum Qt__WindowType param1, bool on ```
void q_textedit_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTextEdit* self, enum Qt__WidgetAttribute param1, bool on ```
void q_textedit_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_textedit_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_textedit_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextEdit* self ```
const char* q_textedit_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextEdit* self, const char* name ```
void q_textedit_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextEdit* self ```
bool q_textedit_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextEdit* self, bool b ```
bool q_textedit_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextEdit* self ```
QThread* q_textedit_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextEdit* self, QThread* thread ```
void q_textedit_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextEdit* self, int interval ```
int32_t q_textedit_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextEdit* self, int id ```
void q_textedit_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextEdit* self ```
libqt_list /* of QObject* */ q_textedit_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextEdit* self, QObject* filterObj ```
void q_textedit_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextEdit* self, QObject* obj ```
void q_textedit_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_textedit_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextEdit* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_textedit_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_textedit_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_textedit_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextEdit* self ```
void q_textedit_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextEdit* self ```
void q_textedit_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextEdit* self, const char* name, QVariant* value ```
bool q_textedit_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextEdit* self, const char* name ```
QVariant* q_textedit_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextEdit* self ```
const char** q_textedit_dynamic_property_names(void* self) {
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
/// ``` QTextEdit* self ```
QBindingStorage* q_textedit_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextEdit* self ```
QBindingStorage* q_textedit_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextEdit* self ```
void q_textedit_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTextEdit* self, void (*slot)(QObject*) ```
void q_textedit_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextEdit* self ```
QObject* q_textedit_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextEdit* self, const char* classname ```
bool q_textedit_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextEdit* self ```
void q_textedit_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextEdit* self, int interval, enum Qt__TimerType timerType ```
int32_t q_textedit_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextEdit* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextEdit* self, QObject* param1 ```
void q_textedit_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTextEdit* self, void (*slot)(QObject*, QObject*) ```
void q_textedit_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTextEdit* self ```
bool q_textedit_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTextEdit* self ```
double q_textedit_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTextEdit* self ```
double q_textedit_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_textedit_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_minimum_size_hint(void* self) {
    return QTextEdit_MinimumSizeHint((QTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_qbase_minimum_size_hint(void* self) {
    return QTextEdit_QBaseMinimumSizeHint((QTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QSize* (*slot)() ```
void q_textedit_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTextEdit_OnMinimumSizeHint((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_size_hint(void* self) {
    return QTextEdit_SizeHint((QTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_qbase_size_hint(void* self) {
    return QTextEdit_QBaseSizeHint((QTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QSize* (*slot)() ```
void q_textedit_on_size_hint(void* self, QSize* (*slot)()) {
    QTextEdit_OnSizeHint((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QWidget* viewport ```
void q_textedit_setup_viewport(void* self, void* viewport) {
    QTextEdit_SetupViewport((QTextEdit*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QWidget* viewport ```
void q_textedit_qbase_setup_viewport(void* self, void* viewport) {
    QTextEdit_QBaseSetupViewport((QTextEdit*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QWidget*) ```
void q_textedit_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnSetupViewport((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QObject* param1, QEvent* param2 ```
bool q_textedit_event_filter(void* self, void* param1, void* param2) {
    return QTextEdit_EventFilter((QTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QObject* param1, QEvent* param2 ```
bool q_textedit_qbase_event_filter(void* self, void* param1, void* param2) {
    return QTextEdit_QBaseEventFilter((QTextEdit*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, QObject*, QEvent*) ```
void q_textedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTextEdit_OnEventFilter((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QEvent* param1 ```
bool q_textedit_viewport_event(void* self, void* param1) {
    return QTextEdit_ViewportEvent((QTextEdit*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QEvent* param1 ```
bool q_textedit_qbase_viewport_event(void* self, void* param1) {
    return QTextEdit_QBaseViewportEvent((QTextEdit*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, QEvent*) ```
void q_textedit_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QTextEdit_OnViewportEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_viewport_size_hint(void* self) {
    return QTextEdit_ViewportSizeHint((QTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_qbase_viewport_size_hint(void* self) {
    return QTextEdit_QBaseViewportSizeHint((QTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QSize* (*slot)() ```
void q_textedit_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QTextEdit_OnViewportSizeHint((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QStyleOptionFrame* option ```
void q_textedit_init_style_option(void* self, void* option) {
    QTextEdit_InitStyleOption((QTextEdit*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QStyleOptionFrame* option ```
void q_textedit_qbase_init_style_option(void* self, void* option) {
    QTextEdit_QBaseInitStyleOption((QTextEdit*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QStyleOptionFrame*) ```
void q_textedit_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnInitStyleOption((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
int32_t q_textedit_dev_type(void* self) {
    return QTextEdit_DevType((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
int32_t q_textedit_qbase_dev_type(void* self) {
    return QTextEdit_QBaseDevType((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, int32_t (*slot)() ```
void q_textedit_on_dev_type(void* self, int32_t (*slot)()) {
    QTextEdit_OnDevType((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, bool visible ```
void q_textedit_set_visible(void* self, bool visible) {
    QTextEdit_SetVisible((QTextEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, bool visible ```
void q_textedit_qbase_set_visible(void* self, bool visible) {
    QTextEdit_QBaseSetVisible((QTextEdit*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, bool) ```
void q_textedit_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTextEdit_OnSetVisible((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, int param1 ```
int32_t q_textedit_height_for_width(void* self, int param1) {
    return QTextEdit_HeightForWidth((QTextEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, int param1 ```
int32_t q_textedit_qbase_height_for_width(void* self, int param1) {
    return QTextEdit_QBaseHeightForWidth((QTextEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, int32_t (*slot)(QTextEdit*, int) ```
void q_textedit_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTextEdit_OnHeightForWidth((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_has_height_for_width(void* self) {
    return QTextEdit_HasHeightForWidth((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_qbase_has_height_for_width(void* self) {
    return QTextEdit_QBaseHasHeightForWidth((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)() ```
void q_textedit_on_has_height_for_width(void* self, bool (*slot)()) {
    QTextEdit_OnHasHeightForWidth((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QPaintEngine* q_textedit_paint_engine(void* self) {
    return QTextEdit_PaintEngine((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QPaintEngine* q_textedit_qbase_paint_engine(void* self) {
    return QTextEdit_QBasePaintEngine((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QPaintEngine* (*slot)() ```
void q_textedit_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTextEdit_OnPaintEngine((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QEnterEvent* event ```
void q_textedit_enter_event(void* self, void* event) {
    QTextEdit_EnterEvent((QTextEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QEnterEvent* event ```
void q_textedit_qbase_enter_event(void* self, void* event) {
    QTextEdit_QBaseEnterEvent((QTextEdit*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QEnterEvent*) ```
void q_textedit_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnEnterEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QEvent* event ```
void q_textedit_leave_event(void* self, void* event) {
    QTextEdit_LeaveEvent((QTextEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QEvent* event ```
void q_textedit_qbase_leave_event(void* self, void* event) {
    QTextEdit_QBaseLeaveEvent((QTextEdit*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QEvent*) ```
void q_textedit_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnLeaveEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QMoveEvent* event ```
void q_textedit_move_event(void* self, void* event) {
    QTextEdit_MoveEvent((QTextEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QMoveEvent* event ```
void q_textedit_qbase_move_event(void* self, void* event) {
    QTextEdit_QBaseMoveEvent((QTextEdit*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMoveEvent*) ```
void q_textedit_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnMoveEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QCloseEvent* event ```
void q_textedit_close_event(void* self, void* event) {
    QTextEdit_CloseEvent((QTextEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QCloseEvent* event ```
void q_textedit_qbase_close_event(void* self, void* event) {
    QTextEdit_QBaseCloseEvent((QTextEdit*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QCloseEvent*) ```
void q_textedit_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnCloseEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QTabletEvent* event ```
void q_textedit_tablet_event(void* self, void* event) {
    QTextEdit_TabletEvent((QTextEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QTabletEvent* event ```
void q_textedit_qbase_tablet_event(void* self, void* event) {
    QTextEdit_QBaseTabletEvent((QTextEdit*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QTabletEvent*) ```
void q_textedit_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnTabletEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QActionEvent* event ```
void q_textedit_action_event(void* self, void* event) {
    QTextEdit_ActionEvent((QTextEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QActionEvent* event ```
void q_textedit_qbase_action_event(void* self, void* event) {
    QTextEdit_QBaseActionEvent((QTextEdit*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QActionEvent*) ```
void q_textedit_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnActionEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QHideEvent* event ```
void q_textedit_hide_event(void* self, void* event) {
    QTextEdit_HideEvent((QTextEdit*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QHideEvent* event ```
void q_textedit_qbase_hide_event(void* self, void* event) {
    QTextEdit_QBaseHideEvent((QTextEdit*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QHideEvent*) ```
void q_textedit_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnHideEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_textedit_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTextEdit_NativeEvent((QTextEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_textedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTextEdit_QBaseNativeEvent((QTextEdit*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, const char*, void*, intptr_t*) ```
void q_textedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTextEdit_OnNativeEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_textedit_metric(void* self, int64_t param1) {
    return QTextEdit_Metric((QTextEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_textedit_qbase_metric(void* self, int64_t param1) {
    return QTextEdit_QBaseMetric((QTextEdit*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, int32_t (*slot)(QTextEdit*, enum QPaintDevice__PaintDeviceMetric) ```
void q_textedit_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTextEdit_OnMetric((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QPainter* painter ```
void q_textedit_init_painter(void* self, void* painter) {
    QTextEdit_InitPainter((QTextEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QPainter* painter ```
void q_textedit_qbase_init_painter(void* self, void* painter) {
    QTextEdit_QBaseInitPainter((QTextEdit*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QPainter*) ```
void q_textedit_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnInitPainter((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QPoint* offset ```
QPaintDevice* q_textedit_redirected(void* self, void* offset) {
    return QTextEdit_Redirected((QTextEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QPoint* offset ```
QPaintDevice* q_textedit_qbase_redirected(void* self, void* offset) {
    return QTextEdit_QBaseRedirected((QTextEdit*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QPaintDevice* (*slot)(QTextEdit*, QPoint*) ```
void q_textedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTextEdit_OnRedirected((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QPainter* q_textedit_shared_painter(void* self) {
    return QTextEdit_SharedPainter((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QPainter* q_textedit_qbase_shared_painter(void* self) {
    return QTextEdit_QBaseSharedPainter((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QPainter* (*slot)() ```
void q_textedit_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTextEdit_OnSharedPainter((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QChildEvent* event ```
void q_textedit_child_event(void* self, void* event) {
    QTextEdit_ChildEvent((QTextEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QChildEvent* event ```
void q_textedit_qbase_child_event(void* self, void* event) {
    QTextEdit_QBaseChildEvent((QTextEdit*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QChildEvent*) ```
void q_textedit_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnChildEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QEvent* event ```
void q_textedit_custom_event(void* self, void* event) {
    QTextEdit_CustomEvent((QTextEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QEvent* event ```
void q_textedit_qbase_custom_event(void* self, void* event) {
    QTextEdit_QBaseCustomEvent((QTextEdit*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QEvent*) ```
void q_textedit_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnCustomEvent((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
void q_textedit_connect_notify(void* self, void* signal) {
    QTextEdit_ConnectNotify((QTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
void q_textedit_qbase_connect_notify(void* self, void* signal) {
    QTextEdit_QBaseConnectNotify((QTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMetaMethod*) ```
void q_textedit_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnConnectNotify((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
void q_textedit_disconnect_notify(void* self, void* signal) {
    QTextEdit_DisconnectNotify((QTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
void q_textedit_qbase_disconnect_notify(void* self, void* signal) {
    QTextEdit_QBaseDisconnectNotify((QTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMetaMethod*) ```
void q_textedit_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnDisconnectNotify((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, int left, int top, int right, int bottom ```
void q_textedit_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTextEdit_SetViewportMargins((QTextEdit*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, int left, int top, int right, int bottom ```
void q_textedit_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTextEdit_QBaseSetViewportMargins((QTextEdit*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, int, int, int, int) ```
void q_textedit_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QTextEdit_OnSetViewportMargins((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QMargins* q_textedit_viewport_margins(void* self) {
    return QTextEdit_ViewportMargins((QTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QMargins* q_textedit_qbase_viewport_margins(void* self) {
    return QTextEdit_QBaseViewportMargins((QTextEdit*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QMargins* (*slot)() ```
void q_textedit_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QTextEdit_OnViewportMargins((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QPainter* param1 ```
void q_textedit_draw_frame(void* self, void* param1) {
    QTextEdit_DrawFrame((QTextEdit*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QPainter* param1 ```
void q_textedit_qbase_draw_frame(void* self, void* param1) {
    QTextEdit_QBaseDrawFrame((QTextEdit*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QPainter*) ```
void q_textedit_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QTextEdit_OnDrawFrame((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_update_micro_focus(void* self) {
    QTextEdit_UpdateMicroFocus((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_qbase_update_micro_focus(void* self) {
    QTextEdit_QBaseUpdateMicroFocus((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)() ```
void q_textedit_on_update_micro_focus(void* self, void (*slot)()) {
    QTextEdit_OnUpdateMicroFocus((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_create(void* self) {
    QTextEdit_Create((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_qbase_create(void* self) {
    QTextEdit_QBaseCreate((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)() ```
void q_textedit_on_create(void* self, void (*slot)()) {
    QTextEdit_OnCreate((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_destroy(void* self) {
    QTextEdit_Destroy((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_qbase_destroy(void* self) {
    QTextEdit_QBaseDestroy((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)() ```
void q_textedit_on_destroy(void* self, void (*slot)()) {
    QTextEdit_OnDestroy((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_focus_next_child(void* self) {
    return QTextEdit_FocusNextChild((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_qbase_focus_next_child(void* self) {
    return QTextEdit_QBaseFocusNextChild((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)() ```
void q_textedit_on_focus_next_child(void* self, bool (*slot)()) {
    QTextEdit_OnFocusNextChild((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_focus_previous_child(void* self) {
    return QTextEdit_FocusPreviousChild((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_qbase_focus_previous_child(void* self) {
    return QTextEdit_QBaseFocusPreviousChild((QTextEdit*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)() ```
void q_textedit_on_focus_previous_child(void* self, bool (*slot)()) {
    QTextEdit_OnFocusPreviousChild((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QObject* q_textedit_sender(void* self) {
    return QTextEdit_Sender((QTextEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QObject* q_textedit_qbase_sender(void* self) {
    return QTextEdit_QBaseSender((QTextEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QObject* (*slot)() ```
void q_textedit_on_sender(void* self, QObject* (*slot)()) {
    QTextEdit_OnSender((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
int32_t q_textedit_sender_signal_index(void* self) {
    return QTextEdit_SenderSignalIndex((QTextEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
int32_t q_textedit_qbase_sender_signal_index(void* self) {
    return QTextEdit_QBaseSenderSignalIndex((QTextEdit*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, int32_t (*slot)() ```
void q_textedit_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTextEdit_OnSenderSignalIndex((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, const char* signal ```
int32_t q_textedit_receivers(void* self, const char* signal) {
    return QTextEdit_Receivers((QTextEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, const char* signal ```
int32_t q_textedit_qbase_receivers(void* self, const char* signal) {
    return QTextEdit_QBaseReceivers((QTextEdit*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, int32_t (*slot)(QTextEdit*, const char*) ```
void q_textedit_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTextEdit_OnReceivers((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
bool q_textedit_is_signal_connected(void* self, void* signal) {
    return QTextEdit_IsSignalConnected((QTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
bool q_textedit_qbase_is_signal_connected(void* self, void* signal) {
    return QTextEdit_QBaseIsSignalConnected((QTextEdit*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, QMetaMethod*) ```
void q_textedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTextEdit_OnIsSignalConnected((QTextEdit*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTextEdit* self ```
void q_textedit_delete(void* self) {
    QTextEdit_Delete((QTextEdit*)(self));
}

/// https://doc.qt.io/qt-6/qtextedit-extraselection.html

/// q_textedit__extraselection_new constructs a new QTextEdit::ExtraSelection object.
///
/// ``` QTextEdit__ExtraSelection* param1 ```
QTextEdit__ExtraSelection* q_textedit__extraselection_new(void* param1) {
    return QTextEdit__ExtraSelection_new((QTextEdit__ExtraSelection*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit__extraselection.html#operator=)
///
/// ``` QTextEdit__ExtraSelection* self, QTextEdit__ExtraSelection* param1 ```
void q_textedit__extraselection_operator_assign(void* self, void* param1) {
    QTextEdit__ExtraSelection_OperatorAssign((QTextEdit__ExtraSelection*)self, (QTextEdit__ExtraSelection*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QTextEdit__ExtraSelection* self ```
void q_textedit__extraselection_delete(void* self) {
    QTextEdit__ExtraSelection_Delete((QTextEdit__ExtraSelection*)(self));
}