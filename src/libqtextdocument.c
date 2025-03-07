#include "libqabstracttextdocumentlayout.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqchar.hpp"
#include "libqevent.hpp"
#include "libqfont.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpagedpaintdevice.hpp"
#include "libqpainter.hpp"
#include "libqrect.hpp"
#include "libqregularexpression.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqtextobject.hpp"
#include "libqtextcursor.hpp"
#include "libqtextformat.hpp"
#include "libqtextoption.hpp"
#include "libqthread.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqtextdocument.hpp"
#include "libqtextdocument.h"

/// https://doc.qt.io/qt-6/qabstractundoitem.html

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#undo)
///
/// ``` QAbstractUndoItem* self ```
void q_abstractundoitem_undo(void* self) {
    QAbstractUndoItem_Undo((QAbstractUndoItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#redo)
///
/// ``` QAbstractUndoItem* self ```
void q_abstractundoitem_redo(void* self) {
    QAbstractUndoItem_Redo((QAbstractUndoItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#operator=)
///
/// ``` QAbstractUndoItem* self, QAbstractUndoItem* param1 ```
void q_abstractundoitem_operator_assign(void* self, void* param1) {
    QAbstractUndoItem_OperatorAssign((QAbstractUndoItem*)self, (QAbstractUndoItem*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractUndoItem* self ```
void q_abstractundoitem_delete(void* self) {
    QAbstractUndoItem_Delete((QAbstractUndoItem*)(self));
}

/// https://doc.qt.io/qt-6/qtextdocument.html

/// q_textdocument_new constructs a new QTextDocument object.
///
///
QTextDocument* q_textdocument_new() {
    return QTextDocument_new();
}

/// q_textdocument_new2 constructs a new QTextDocument object.
///
/// ``` const char* text ```
QTextDocument* q_textdocument_new2(const char* text) {
    return QTextDocument_new2(qstring(text));
}

/// q_textdocument_new3 constructs a new QTextDocument object.
///
/// ``` QObject* parent ```
QTextDocument* q_textdocument_new3(void* parent) {
    return QTextDocument_new3((QObject*)parent);
}

/// q_textdocument_new4 constructs a new QTextDocument object.
///
/// ``` const char* text, QObject* parent ```
QTextDocument* q_textdocument_new4(const char* text, void* parent) {
    return QTextDocument_new4(qstring(text), (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextDocument* self ```
QMetaObject* q_textdocument_meta_object(void* self) {
    return QTextDocument_MetaObject((QTextDocument*)self);
}

/// ``` QTextDocument* self, const char* param1 ```
void* q_textdocument_metacast(void* self, const char* param1) {
    return QTextDocument_Metacast((QTextDocument*)self, param1);
}

/// ``` QTextDocument* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textdocument_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextDocument_Metacall((QTextDocument*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTextDocument* self, int32_t (*slot)(QTextDocument*, enum QMetaObject__Call, int, void*) ```
void q_textdocument_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTextDocument_OnMetacall((QTextDocument*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextDocument* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textdocument_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextDocument_QBaseMetacall((QTextDocument*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_textdocument_tr(const char* s) {
    libqt_string _str = QTextDocument_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clone)
///
/// ``` QTextDocument* self ```
QTextDocument* q_textdocument_clone(void* self) {
    return QTextDocument_Clone((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isEmpty)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_empty(void* self) {
    return QTextDocument_IsEmpty((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
///
/// ``` QTextDocument* self ```
void q_textdocument_clear(void* self) {
    QTextDocument_Clear((QTextDocument*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTextDocument* self, void (*slot)() ```
void q_textdocument_on_clear(void* self, void (*slot)()) {
    QTextDocument_OnClear((QTextDocument*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextDocument* self ```
void q_textdocument_qbase_clear(void* self) {
    QTextDocument_QBaseClear((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setUndoRedoEnabled)
///
/// ``` QTextDocument* self, bool enable ```
void q_textdocument_set_undo_redo_enabled(void* self, bool enable) {
    QTextDocument_SetUndoRedoEnabled((QTextDocument*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isUndoRedoEnabled)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_undo_redo_enabled(void* self) {
    return QTextDocument_IsUndoRedoEnabled((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isUndoAvailable)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_undo_available(void* self) {
    return QTextDocument_IsUndoAvailable((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isRedoAvailable)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_redo_available(void* self) {
    return QTextDocument_IsRedoAvailable((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#availableUndoSteps)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_available_undo_steps(void* self) {
    return QTextDocument_AvailableUndoSteps((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#availableRedoSteps)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_available_redo_steps(void* self) {
    return QTextDocument_AvailableRedoSteps((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#revision)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_revision(void* self) {
    return QTextDocument_Revision((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentLayout)
///
/// ``` QTextDocument* self, QAbstractTextDocumentLayout* layout ```
void q_textdocument_set_document_layout(void* self, void* layout) {
    QTextDocument_SetDocumentLayout((QTextDocument*)self, (QAbstractTextDocumentLayout*)layout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayout)
///
/// ``` QTextDocument* self ```
QAbstractTextDocumentLayout* q_textdocument_document_layout(void* self) {
    return QTextDocument_DocumentLayout((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMetaInformation)
///
/// ``` QTextDocument* self, enum QTextDocument__MetaInformation info, const char* param2 ```
void q_textdocument_set_meta_information(void* self, int64_t info, const char* param2) {
    QTextDocument_SetMetaInformation((QTextDocument*)self, info, qstring(param2));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#metaInformation)
///
/// ``` QTextDocument* self, enum QTextDocument__MetaInformation info ```
const char* q_textdocument_meta_information(void* self, int64_t info) {
    libqt_string _str = QTextDocument_MetaInformation((QTextDocument*)self, info);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toHtml)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_to_html(void* self) {
    libqt_string _str = QTextDocument_ToHtml((QTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setHtml)
///
/// ``` QTextDocument* self, const char* html ```
void q_textdocument_set_html(void* self, const char* html) {
    QTextDocument_SetHtml((QTextDocument*)self, qstring(html));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_to_markdown(void* self) {
    libqt_string _str = QTextDocument_ToMarkdown((QTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
///
/// ``` QTextDocument* self, const char* markdown ```
void q_textdocument_set_markdown(void* self, const char* markdown) {
    QTextDocument_SetMarkdown((QTextDocument*)self, qstring(markdown));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toRawText)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_to_raw_text(void* self) {
    libqt_string _str = QTextDocument_ToRawText((QTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toPlainText)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_to_plain_text(void* self) {
    libqt_string _str = QTextDocument_ToPlainText((QTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setPlainText)
///
/// ``` QTextDocument* self, const char* text ```
void q_textdocument_set_plain_text(void* self, const char* text) {
    QTextDocument_SetPlainText((QTextDocument*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#characterAt)
///
/// ``` QTextDocument* self, int pos ```
QChar* q_textdocument_character_at(void* self, int pos) {
    return QTextDocument_CharacterAt((QTextDocument*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, const char* subString ```
QTextCursor* q_textdocument_find(void* self, const char* subString) {
    return QTextDocument_Find((QTextDocument*)self, qstring(subString));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, const char* subString, QTextCursor* cursor ```
QTextCursor* q_textdocument_find2(void* self, const char* subString, void* cursor) {
    return QTextDocument_Find2((QTextDocument*)self, qstring(subString), (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, QRegularExpression* expr ```
QTextCursor* q_textdocument_find_with_expr(void* self, void* expr) {
    return QTextDocument_FindWithExpr((QTextDocument*)self, (QRegularExpression*)expr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor ```
QTextCursor* q_textdocument_find3(void* self, void* expr, void* cursor) {
    return QTextDocument_Find3((QTextDocument*)self, (QRegularExpression*)expr, (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#frameAt)
///
/// ``` QTextDocument* self, int pos ```
QTextFrame* q_textdocument_frame_at(void* self, int pos) {
    return QTextDocument_FrameAt((QTextDocument*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#rootFrame)
///
/// ``` QTextDocument* self ```
QTextFrame* q_textdocument_root_frame(void* self) {
    return QTextDocument_RootFrame((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#object)
///
/// ``` QTextDocument* self, int objectIndex ```
QTextObject* q_textdocument_object(void* self, int objectIndex) {
    return QTextDocument_Object((QTextDocument*)self, objectIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#objectForFormat)
///
/// ``` QTextDocument* self, QTextFormat* param1 ```
QTextObject* q_textdocument_object_for_format(void* self, void* param1) {
    return QTextDocument_ObjectForFormat((QTextDocument*)self, (QTextFormat*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlock)
///
/// ``` QTextDocument* self, int pos ```
QTextBlock* q_textdocument_find_block(void* self, int pos) {
    return QTextDocument_FindBlock((QTextDocument*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByNumber)
///
/// ``` QTextDocument* self, int blockNumber ```
QTextBlock* q_textdocument_find_block_by_number(void* self, int blockNumber) {
    return QTextDocument_FindBlockByNumber((QTextDocument*)self, blockNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByLineNumber)
///
/// ``` QTextDocument* self, int blockNumber ```
QTextBlock* q_textdocument_find_block_by_line_number(void* self, int blockNumber) {
    return QTextDocument_FindBlockByLineNumber((QTextDocument*)self, blockNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#begin)
///
/// ``` QTextDocument* self ```
QTextBlock* q_textdocument_begin(void* self) {
    return QTextDocument_Begin((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#end)
///
/// ``` QTextDocument* self ```
QTextBlock* q_textdocument_end(void* self) {
    return QTextDocument_End((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#firstBlock)
///
/// ``` QTextDocument* self ```
QTextBlock* q_textdocument_first_block(void* self) {
    return QTextDocument_FirstBlock((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#lastBlock)
///
/// ``` QTextDocument* self ```
QTextBlock* q_textdocument_last_block(void* self) {
    return QTextDocument_LastBlock((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setPageSize)
///
/// ``` QTextDocument* self, QSizeF* size ```
void q_textdocument_set_page_size(void* self, void* size) {
    QTextDocument_SetPageSize((QTextDocument*)self, (QSizeF*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#pageSize)
///
/// ``` QTextDocument* self ```
QSizeF* q_textdocument_page_size(void* self) {
    return QTextDocument_PageSize((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultFont)
///
/// ``` QTextDocument* self, QFont* font ```
void q_textdocument_set_default_font(void* self, void* font) {
    QTextDocument_SetDefaultFont((QTextDocument*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultFont)
///
/// ``` QTextDocument* self ```
QFont* q_textdocument_default_font(void* self) {
    return QTextDocument_DefaultFont((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setSuperScriptBaseline)
///
/// ``` QTextDocument* self, double baseline ```
void q_textdocument_set_super_script_baseline(void* self, double baseline) {
    QTextDocument_SetSuperScriptBaseline((QTextDocument*)self, baseline);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#superScriptBaseline)
///
/// ``` QTextDocument* self ```
double q_textdocument_super_script_baseline(void* self) {
    return QTextDocument_SuperScriptBaseline((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setSubScriptBaseline)
///
/// ``` QTextDocument* self, double baseline ```
void q_textdocument_set_sub_script_baseline(void* self, double baseline) {
    QTextDocument_SetSubScriptBaseline((QTextDocument*)self, baseline);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#subScriptBaseline)
///
/// ``` QTextDocument* self ```
double q_textdocument_sub_script_baseline(void* self) {
    return QTextDocument_SubScriptBaseline((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setBaselineOffset)
///
/// ``` QTextDocument* self, double baseline ```
void q_textdocument_set_baseline_offset(void* self, double baseline) {
    QTextDocument_SetBaselineOffset((QTextDocument*)self, baseline);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baselineOffset)
///
/// ``` QTextDocument* self ```
double q_textdocument_baseline_offset(void* self) {
    return QTextDocument_BaselineOffset((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#pageCount)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_page_count(void* self) {
    return QTextDocument_PageCount((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isModified)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_modified(void* self) {
    return QTextDocument_IsModified((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#print)
///
/// ``` QTextDocument* self, QPagedPaintDevice* printer ```
void q_textdocument_print(void* self, void* printer) {
    QTextDocument_Print((QTextDocument*)self, (QPagedPaintDevice*)printer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#resource)
///
/// ``` QTextDocument* self, int typeVal, QUrl* name ```
QVariant* q_textdocument_resource(void* self, int typeVal, void* name) {
    return QTextDocument_Resource((QTextDocument*)self, typeVal, (QUrl*)name);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#addResource)
///
/// ``` QTextDocument* self, int typeVal, QUrl* name, QVariant* resource ```
void q_textdocument_add_resource(void* self, int typeVal, void* name, void* resource) {
    QTextDocument_AddResource((QTextDocument*)self, typeVal, (QUrl*)name, (QVariant*)resource);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#allFormats)
///
/// ``` QTextDocument* self ```
libqt_list /* of QTextFormat* */ q_textdocument_all_formats(void* self) {
    libqt_list _arr = QTextDocument_AllFormats((QTextDocument*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#markContentsDirty)
///
/// ``` QTextDocument* self, int from, int length ```
void q_textdocument_mark_contents_dirty(void* self, int from, int length) {
    QTextDocument_MarkContentsDirty((QTextDocument*)self, from, length);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setUseDesignMetrics)
///
/// ``` QTextDocument* self, bool b ```
void q_textdocument_set_use_design_metrics(void* self, bool b) {
    QTextDocument_SetUseDesignMetrics((QTextDocument*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#useDesignMetrics)
///
/// ``` QTextDocument* self ```
bool q_textdocument_use_design_metrics(void* self) {
    return QTextDocument_UseDesignMetrics((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setLayoutEnabled)
///
/// ``` QTextDocument* self, bool b ```
void q_textdocument_set_layout_enabled(void* self, bool b) {
    QTextDocument_SetLayoutEnabled((QTextDocument*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isLayoutEnabled)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_layout_enabled(void* self) {
    return QTextDocument_IsLayoutEnabled((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
///
/// ``` QTextDocument* self, QPainter* painter ```
void q_textdocument_draw_contents(void* self, void* painter) {
    QTextDocument_DrawContents((QTextDocument*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setTextWidth)
///
/// ``` QTextDocument* self, double width ```
void q_textdocument_set_text_width(void* self, double width) {
    QTextDocument_SetTextWidth((QTextDocument*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#textWidth)
///
/// ``` QTextDocument* self ```
double q_textdocument_text_width(void* self) {
    return QTextDocument_TextWidth((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#idealWidth)
///
/// ``` QTextDocument* self ```
double q_textdocument_ideal_width(void* self) {
    return QTextDocument_IdealWidth((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#indentWidth)
///
/// ``` QTextDocument* self ```
double q_textdocument_indent_width(void* self) {
    return QTextDocument_IndentWidth((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setIndentWidth)
///
/// ``` QTextDocument* self, double width ```
void q_textdocument_set_indent_width(void* self, double width) {
    QTextDocument_SetIndentWidth((QTextDocument*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentMargin)
///
/// ``` QTextDocument* self ```
double q_textdocument_document_margin(void* self) {
    return QTextDocument_DocumentMargin((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentMargin)
///
/// ``` QTextDocument* self, double margin ```
void q_textdocument_set_document_margin(void* self, double margin) {
    QTextDocument_SetDocumentMargin((QTextDocument*)self, margin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#adjustSize)
///
/// ``` QTextDocument* self ```
void q_textdocument_adjust_size(void* self) {
    QTextDocument_AdjustSize((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#size)
///
/// ``` QTextDocument* self ```
QSizeF* q_textdocument_size(void* self) {
    return QTextDocument_Size((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCount)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_block_count(void* self) {
    return QTextDocument_BlockCount((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#lineCount)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_line_count(void* self) {
    return QTextDocument_LineCount((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#characterCount)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_character_count(void* self) {
    return QTextDocument_CharacterCount((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultStyleSheet)
///
/// ``` QTextDocument* self, const char* sheet ```
void q_textdocument_set_default_style_sheet(void* self, const char* sheet) {
    QTextDocument_SetDefaultStyleSheet((QTextDocument*)self, qstring(sheet));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultStyleSheet)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_default_style_sheet(void* self) {
    libqt_string _str = QTextDocument_DefaultStyleSheet((QTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undo)
///
/// ``` QTextDocument* self, QTextCursor* cursor ```
void q_textdocument_undo(void* self, void* cursor) {
    QTextDocument_Undo((QTextDocument*)self, (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redo)
///
/// ``` QTextDocument* self, QTextCursor* cursor ```
void q_textdocument_redo(void* self, void* cursor) {
    QTextDocument_Redo((QTextDocument*)self, (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
///
/// ``` QTextDocument* self ```
void q_textdocument_clear_undo_redo_stacks(void* self) {
    QTextDocument_ClearUndoRedoStacks((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#maximumBlockCount)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_maximum_block_count(void* self) {
    return QTextDocument_MaximumBlockCount((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMaximumBlockCount)
///
/// ``` QTextDocument* self, int maximum ```
void q_textdocument_set_maximum_block_count(void* self, int maximum) {
    QTextDocument_SetMaximumBlockCount((QTextDocument*)self, maximum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultTextOption)
///
/// ``` QTextDocument* self ```
QTextOption* q_textdocument_default_text_option(void* self) {
    return QTextDocument_DefaultTextOption((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultTextOption)
///
/// ``` QTextDocument* self, QTextOption* option ```
void q_textdocument_set_default_text_option(void* self, void* option) {
    QTextDocument_SetDefaultTextOption((QTextDocument*)self, (QTextOption*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrl)
///
/// ``` QTextDocument* self ```
QUrl* q_textdocument_base_url(void* self) {
    return QTextDocument_BaseUrl((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setBaseUrl)
///
/// ``` QTextDocument* self, QUrl* url ```
void q_textdocument_set_base_url(void* self, void* url) {
    QTextDocument_SetBaseUrl((QTextDocument*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultCursorMoveStyle)
///
/// ``` QTextDocument* self ```
int64_t q_textdocument_default_cursor_move_style(void* self) {
    return QTextDocument_DefaultCursorMoveStyle((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultCursorMoveStyle)
///
/// ``` QTextDocument* self, enum Qt__CursorMoveStyle style ```
void q_textdocument_set_default_cursor_move_style(void* self, int64_t style) {
    QTextDocument_SetDefaultCursorMoveStyle((QTextDocument*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
///
/// ``` QTextDocument* self, int from, int charsRemoved, int charsAdded ```
void q_textdocument_contents_change(void* self, int from, int charsRemoved, int charsAdded) {
    QTextDocument_ContentsChange((QTextDocument*)self, from, charsRemoved, charsAdded);
}

/// ``` QTextDocument* self, void (*slot)(QTextDocument*, int, int, int) ```
void q_textdocument_on_contents_change(void* self, void (*slot)(void*, int, int, int)) {
    QTextDocument_Connect_ContentsChange((QTextDocument*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
///
/// ``` QTextDocument* self ```
void q_textdocument_contents_changed(void* self) {
    QTextDocument_ContentsChanged((QTextDocument*)self);
}

/// ``` QTextDocument* self, void (*slot)(QTextDocument*) ```
void q_textdocument_on_contents_changed(void* self, void (*slot)(void*)) {
    QTextDocument_Connect_ContentsChanged((QTextDocument*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
///
/// ``` QTextDocument* self, bool param1 ```
void q_textdocument_undo_available(void* self, bool param1) {
    QTextDocument_UndoAvailable((QTextDocument*)self, param1);
}

/// ``` QTextDocument* self, void (*slot)(QTextDocument*, bool) ```
void q_textdocument_on_undo_available(void* self, void (*slot)(void*, bool)) {
    QTextDocument_Connect_UndoAvailable((QTextDocument*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
///
/// ``` QTextDocument* self, bool param1 ```
void q_textdocument_redo_available(void* self, bool param1) {
    QTextDocument_RedoAvailable((QTextDocument*)self, param1);
}

/// ``` QTextDocument* self, void (*slot)(QTextDocument*, bool) ```
void q_textdocument_on_redo_available(void* self, void (*slot)(void*, bool)) {
    QTextDocument_Connect_RedoAvailable((QTextDocument*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
///
/// ``` QTextDocument* self ```
void q_textdocument_undo_command_added(void* self) {
    QTextDocument_UndoCommandAdded((QTextDocument*)self);
}

/// ``` QTextDocument* self, void (*slot)(QTextDocument*) ```
void q_textdocument_on_undo_command_added(void* self, void (*slot)(void*)) {
    QTextDocument_Connect_UndoCommandAdded((QTextDocument*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
///
/// ``` QTextDocument* self, bool m ```
void q_textdocument_modification_changed(void* self, bool m) {
    QTextDocument_ModificationChanged((QTextDocument*)self, m);
}

/// ``` QTextDocument* self, void (*slot)(QTextDocument*, bool) ```
void q_textdocument_on_modification_changed(void* self, void (*slot)(void*, bool)) {
    QTextDocument_Connect_ModificationChanged((QTextDocument*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
///
/// ``` QTextDocument* self, QTextCursor* cursor ```
void q_textdocument_cursor_position_changed(void* self, void* cursor) {
    QTextDocument_CursorPositionChanged((QTextDocument*)self, (QTextCursor*)cursor);
}

/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QTextCursor*) ```
void q_textdocument_on_cursor_position_changed(void* self, void (*slot)(void*, void*)) {
    QTextDocument_Connect_CursorPositionChanged((QTextDocument*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
///
/// ``` QTextDocument* self, int newBlockCount ```
void q_textdocument_block_count_changed(void* self, int newBlockCount) {
    QTextDocument_BlockCountChanged((QTextDocument*)self, newBlockCount);
}

/// ``` QTextDocument* self, void (*slot)(QTextDocument*, int) ```
void q_textdocument_on_block_count_changed(void* self, void (*slot)(void*, int)) {
    QTextDocument_Connect_BlockCountChanged((QTextDocument*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
///
/// ``` QTextDocument* self, QUrl* url ```
void q_textdocument_base_url_changed(void* self, void* url) {
    QTextDocument_BaseUrlChanged((QTextDocument*)self, (QUrl*)url);
}

/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QUrl*) ```
void q_textdocument_on_base_url_changed(void* self, void (*slot)(void*, void*)) {
    QTextDocument_Connect_BaseUrlChanged((QTextDocument*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
///
/// ``` QTextDocument* self ```
void q_textdocument_document_layout_changed(void* self) {
    QTextDocument_DocumentLayoutChanged((QTextDocument*)self);
}

/// ``` QTextDocument* self, void (*slot)(QTextDocument*) ```
void q_textdocument_on_document_layout_changed(void* self, void (*slot)(void*)) {
    QTextDocument_Connect_DocumentLayoutChanged((QTextDocument*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undo)
///
/// ``` QTextDocument* self ```
void q_textdocument_undo2(void* self) {
    QTextDocument_Undo2((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redo)
///
/// ``` QTextDocument* self ```
void q_textdocument_redo2(void* self) {
    QTextDocument_Redo2((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#appendUndoItem)
///
/// ``` QTextDocument* self, QAbstractUndoItem* param1 ```
void q_textdocument_append_undo_item(void* self, void* param1) {
    QTextDocument_AppendUndoItem((QTextDocument*)self, (QAbstractUndoItem*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
///
/// ``` QTextDocument* self ```
void q_textdocument_set_modified(void* self) {
    QTextDocument_SetModified((QTextDocument*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
///
/// ``` QTextDocument* self, QTextFormat* f ```
QTextObject* q_textdocument_create_object(void* self, void* f) {
    return QTextDocument_CreateObject((QTextDocument*)self, (QTextFormat*)f);
}

/// Allows for overriding the related default method
///
/// ``` QTextDocument* self, QTextObject* (*slot)(QTextDocument*, QTextFormat*) ```
void q_textdocument_on_create_object(void* self, QTextObject* (*slot)(void*, void*)) {
    QTextDocument_OnCreateObject((QTextDocument*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextDocument* self, QTextFormat* f ```
QTextObject* q_textdocument_qbase_create_object(void* self, void* f) {
    return QTextDocument_QBaseCreateObject((QTextDocument*)self, (QTextFormat*)f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
///
/// ``` QTextDocument* self, int typeVal, QUrl* name ```
QVariant* q_textdocument_load_resource(void* self, int typeVal, void* name) {
    return QTextDocument_LoadResource((QTextDocument*)self, typeVal, (QUrl*)name);
}

/// Allows for overriding the related default method
///
/// ``` QTextDocument* self, QVariant* (*slot)(QTextDocument*, int, QUrl*) ```
void q_textdocument_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*)) {
    QTextDocument_OnLoadResource((QTextDocument*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextDocument* self, int typeVal, QUrl* name ```
QVariant* q_textdocument_qbase_load_resource(void* self, int typeVal, void* name) {
    return QTextDocument_QBaseLoadResource((QTextDocument*)self, typeVal, (QUrl*)name);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_textdocument_tr2(const char* s, const char* c) {
    libqt_string _str = QTextDocument_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_textdocument_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextDocument_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clone)
///
/// ``` QTextDocument* self, QObject* parent ```
QTextDocument* q_textdocument_clone1(void* self, void* parent) {
    return QTextDocument_Clone1((QTextDocument*)self, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
///
/// ``` QTextDocument* self, int features ```
const char* q_textdocument_to_markdown1(void* self, int64_t features) {
    libqt_string _str = QTextDocument_ToMarkdown1((QTextDocument*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
///
/// ``` QTextDocument* self, const char* markdown, int features ```
void q_textdocument_set_markdown2(void* self, const char* markdown, int64_t features) {
    QTextDocument_SetMarkdown2((QTextDocument*)self, qstring(markdown), features);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, const char* subString, int from ```
QTextCursor* q_textdocument_find22(void* self, const char* subString, int from) {
    return QTextDocument_Find22((QTextDocument*)self, qstring(subString), from);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, const char* subString, int from, int options ```
QTextCursor* q_textdocument_find32(void* self, const char* subString, int from, int64_t options) {
    return QTextDocument_Find32((QTextDocument*)self, qstring(subString), from, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, const char* subString, QTextCursor* cursor, int options ```
QTextCursor* q_textdocument_find33(void* self, const char* subString, void* cursor, int64_t options) {
    return QTextDocument_Find33((QTextDocument*)self, qstring(subString), (QTextCursor*)cursor, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, QRegularExpression* expr, int from ```
QTextCursor* q_textdocument_find23(void* self, void* expr, int from) {
    return QTextDocument_Find23((QTextDocument*)self, (QRegularExpression*)expr, from);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, QRegularExpression* expr, int from, int options ```
QTextCursor* q_textdocument_find34(void* self, void* expr, int from, int64_t options) {
    return QTextDocument_Find34((QTextDocument*)self, (QRegularExpression*)expr, from, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor, int options ```
QTextCursor* q_textdocument_find35(void* self, void* expr, void* cursor, int64_t options) {
    return QTextDocument_Find35((QTextDocument*)self, (QRegularExpression*)expr, (QTextCursor*)cursor, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
///
/// ``` QTextDocument* self, QPainter* painter, QRectF* rect ```
void q_textdocument_draw_contents2(void* self, void* painter, void* rect) {
    QTextDocument_DrawContents2((QTextDocument*)self, (QPainter*)painter, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
///
/// ``` QTextDocument* self, enum QTextDocument__Stacks historyToClear ```
void q_textdocument_clear_undo_redo_stacks1(void* self, int64_t historyToClear) {
    QTextDocument_ClearUndoRedoStacks1((QTextDocument*)self, historyToClear);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
///
/// ``` QTextDocument* self, bool m ```
void q_textdocument_set_modified1(void* self, bool m) {
    QTextDocument_SetModified1((QTextDocument*)self, m);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextDocument* self, const char* name ```
void q_textdocument_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextDocument* self ```
bool q_textdocument_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextDocument* self, bool b ```
bool q_textdocument_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextDocument* self ```
QThread* q_textdocument_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextDocument* self, QThread* thread ```
void q_textdocument_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextDocument* self, int interval ```
int32_t q_textdocument_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextDocument* self, int id ```
void q_textdocument_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextDocument* self ```
libqt_list /* of QObject* */ q_textdocument_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTextDocument* self, QObject* parent ```
void q_textdocument_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextDocument* self, QObject* filterObj ```
void q_textdocument_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextDocument* self, QObject* obj ```
void q_textdocument_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_textdocument_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextDocument* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_textdocument_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_textdocument_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_textdocument_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextDocument* self ```
void q_textdocument_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextDocument* self ```
void q_textdocument_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextDocument* self, const char* name, QVariant* value ```
bool q_textdocument_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextDocument* self, const char* name ```
QVariant* q_textdocument_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextDocument* self ```
const char** q_textdocument_dynamic_property_names(void* self) {
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
/// ``` QTextDocument* self ```
QBindingStorage* q_textdocument_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextDocument* self ```
QBindingStorage* q_textdocument_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextDocument* self ```
void q_textdocument_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTextDocument* self, void (*slot)(QObject*) ```
void q_textdocument_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextDocument* self ```
QObject* q_textdocument_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextDocument* self, const char* classname ```
bool q_textdocument_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextDocument* self ```
void q_textdocument_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextDocument* self, int interval, enum Qt__TimerType timerType ```
int32_t q_textdocument_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textdocument_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextDocument* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textdocument_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextDocument* self, QObject* param1 ```
void q_textdocument_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTextDocument* self, void (*slot)(QObject*, QObject*) ```
void q_textdocument_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QEvent* event ```
bool q_textdocument_event(void* self, void* event) {
    return QTextDocument_Event((QTextDocument*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QEvent* event ```
bool q_textdocument_qbase_event(void* self, void* event) {
    return QTextDocument_QBaseEvent((QTextDocument*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, bool (*slot)(QTextDocument*, QEvent*) ```
void q_textdocument_on_event(void* self, bool (*slot)(void*, void*)) {
    QTextDocument_OnEvent((QTextDocument*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QObject* watched, QEvent* event ```
bool q_textdocument_event_filter(void* self, void* watched, void* event) {
    return QTextDocument_EventFilter((QTextDocument*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QObject* watched, QEvent* event ```
bool q_textdocument_qbase_event_filter(void* self, void* watched, void* event) {
    return QTextDocument_QBaseEventFilter((QTextDocument*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, bool (*slot)(QTextDocument*, QObject*, QEvent*) ```
void q_textdocument_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTextDocument_OnEventFilter((QTextDocument*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QTimerEvent* event ```
void q_textdocument_timer_event(void* self, void* event) {
    QTextDocument_TimerEvent((QTextDocument*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QTimerEvent* event ```
void q_textdocument_qbase_timer_event(void* self, void* event) {
    QTextDocument_QBaseTimerEvent((QTextDocument*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QTimerEvent*) ```
void q_textdocument_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTextDocument_OnTimerEvent((QTextDocument*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QChildEvent* event ```
void q_textdocument_child_event(void* self, void* event) {
    QTextDocument_ChildEvent((QTextDocument*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QChildEvent* event ```
void q_textdocument_qbase_child_event(void* self, void* event) {
    QTextDocument_QBaseChildEvent((QTextDocument*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QChildEvent*) ```
void q_textdocument_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTextDocument_OnChildEvent((QTextDocument*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QEvent* event ```
void q_textdocument_custom_event(void* self, void* event) {
    QTextDocument_CustomEvent((QTextDocument*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QEvent* event ```
void q_textdocument_qbase_custom_event(void* self, void* event) {
    QTextDocument_QBaseCustomEvent((QTextDocument*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QEvent*) ```
void q_textdocument_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTextDocument_OnCustomEvent((QTextDocument*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
void q_textdocument_connect_notify(void* self, void* signal) {
    QTextDocument_ConnectNotify((QTextDocument*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
void q_textdocument_qbase_connect_notify(void* self, void* signal) {
    QTextDocument_QBaseConnectNotify((QTextDocument*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QMetaMethod*) ```
void q_textdocument_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTextDocument_OnConnectNotify((QTextDocument*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
void q_textdocument_disconnect_notify(void* self, void* signal) {
    QTextDocument_DisconnectNotify((QTextDocument*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
void q_textdocument_qbase_disconnect_notify(void* self, void* signal) {
    QTextDocument_QBaseDisconnectNotify((QTextDocument*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QMetaMethod*) ```
void q_textdocument_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTextDocument_OnDisconnectNotify((QTextDocument*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self ```
QObject* q_textdocument_sender(void* self) {
    return QTextDocument_Sender((QTextDocument*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self ```
QObject* q_textdocument_qbase_sender(void* self) {
    return QTextDocument_QBaseSender((QTextDocument*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, QObject* (*slot)() ```
void q_textdocument_on_sender(void* self, QObject* (*slot)()) {
    QTextDocument_OnSender((QTextDocument*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_sender_signal_index(void* self) {
    return QTextDocument_SenderSignalIndex((QTextDocument*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_qbase_sender_signal_index(void* self) {
    return QTextDocument_QBaseSenderSignalIndex((QTextDocument*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, int32_t (*slot)() ```
void q_textdocument_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTextDocument_OnSenderSignalIndex((QTextDocument*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, const char* signal ```
int32_t q_textdocument_receivers(void* self, const char* signal) {
    return QTextDocument_Receivers((QTextDocument*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, const char* signal ```
int32_t q_textdocument_qbase_receivers(void* self, const char* signal) {
    return QTextDocument_QBaseReceivers((QTextDocument*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, int32_t (*slot)(QTextDocument*, const char*) ```
void q_textdocument_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTextDocument_OnReceivers((QTextDocument*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
bool q_textdocument_is_signal_connected(void* self, void* signal) {
    return QTextDocument_IsSignalConnected((QTextDocument*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
bool q_textdocument_qbase_is_signal_connected(void* self, void* signal) {
    return QTextDocument_QBaseIsSignalConnected((QTextDocument*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, bool (*slot)(QTextDocument*, QMetaMethod*) ```
void q_textdocument_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTextDocument_OnIsSignalConnected((QTextDocument*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTextDocument* self ```
void q_textdocument_delete(void* self) {
    QTextDocument_Delete((QTextDocument*)(self));
}