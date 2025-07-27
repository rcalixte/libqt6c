#include "libqabstracttextdocumentlayout.hpp"
#include "libqchar.hpp"
#include "libqcoreevent.hpp"
#include "libqfont.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpagedpaintdevice.hpp"
#include "libqpainter.hpp"
#include "libqrect.hpp"
#include "libqregularexpression.hpp"
#include "libqsize.hpp"
#include "libqtextobject.hpp"
#include "libqtextcursor.hpp"
#include "libqtextformat.hpp"
#include "libqtextoption.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqtextdocument.hpp"
#include "libqtextdocument.h"

void q_abstractundoitem_undo(void* self) {
    QAbstractUndoItem_Undo((QAbstractUndoItem*)self);
}

void q_abstractundoitem_redo(void* self) {
    QAbstractUndoItem_Redo((QAbstractUndoItem*)self);
}

void q_abstractundoitem_operator_assign(void* self, void* param1) {
    QAbstractUndoItem_OperatorAssign((QAbstractUndoItem*)self, (QAbstractUndoItem*)param1);
}

void q_abstractundoitem_delete(void* self) {
    QAbstractUndoItem_Delete((QAbstractUndoItem*)(self));
}

QTextDocument* q_textdocument_new() {
    return QTextDocument_new();
}

QTextDocument* q_textdocument_new2(const char* text) {
    return QTextDocument_new2(qstring(text));
}

QTextDocument* q_textdocument_new3(void* parent) {
    return QTextDocument_new3((QObject*)parent);
}

QTextDocument* q_textdocument_new4(const char* text, void* parent) {
    return QTextDocument_new4(qstring(text), (QObject*)parent);
}

const QMetaObject* q_textdocument_meta_object(void* self) {
    return QTextDocument_MetaObject((QTextDocument*)self);
}

void* q_textdocument_metacast(void* self, const char* param1) {
    return QTextDocument_Metacast((QTextDocument*)self, param1);
}

int32_t q_textdocument_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextDocument_Metacall((QTextDocument*)self, param1, param2, param3);
}

void q_textdocument_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTextDocument_OnMetacall((QTextDocument*)self, (intptr_t)slot);
}

int32_t q_textdocument_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextDocument_QBaseMetacall((QTextDocument*)self, param1, param2, param3);
}

const char* q_textdocument_tr(const char* s) {
    libqt_string _str = QTextDocument_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTextDocument* q_textdocument_clone(void* self) {
    return QTextDocument_Clone((QTextDocument*)self);
}

bool q_textdocument_is_empty(void* self) {
    return QTextDocument_IsEmpty((QTextDocument*)self);
}

void q_textdocument_clear(void* self) {
    QTextDocument_Clear((QTextDocument*)self);
}

void q_textdocument_on_clear(void* self, void (*slot)()) {
    QTextDocument_OnClear((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_qbase_clear(void* self) {
    QTextDocument_QBaseClear((QTextDocument*)self);
}

void q_textdocument_set_undo_redo_enabled(void* self, bool enable) {
    QTextDocument_SetUndoRedoEnabled((QTextDocument*)self, enable);
}

bool q_textdocument_is_undo_redo_enabled(void* self) {
    return QTextDocument_IsUndoRedoEnabled((QTextDocument*)self);
}

bool q_textdocument_is_undo_available(void* self) {
    return QTextDocument_IsUndoAvailable((QTextDocument*)self);
}

bool q_textdocument_is_redo_available(void* self) {
    return QTextDocument_IsRedoAvailable((QTextDocument*)self);
}

int32_t q_textdocument_available_undo_steps(void* self) {
    return QTextDocument_AvailableUndoSteps((QTextDocument*)self);
}

int32_t q_textdocument_available_redo_steps(void* self) {
    return QTextDocument_AvailableRedoSteps((QTextDocument*)self);
}

int32_t q_textdocument_revision(void* self) {
    return QTextDocument_Revision((QTextDocument*)self);
}

void q_textdocument_set_document_layout(void* self, void* layout) {
    QTextDocument_SetDocumentLayout((QTextDocument*)self, (QAbstractTextDocumentLayout*)layout);
}

QAbstractTextDocumentLayout* q_textdocument_document_layout(void* self) {
    return QTextDocument_DocumentLayout((QTextDocument*)self);
}

void q_textdocument_set_meta_information(void* self, int64_t info, const char* param2) {
    QTextDocument_SetMetaInformation((QTextDocument*)self, info, qstring(param2));
}

const char* q_textdocument_meta_information(void* self, int64_t info) {
    libqt_string _str = QTextDocument_MetaInformation((QTextDocument*)self, info);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textdocument_to_html(void* self) {
    libqt_string _str = QTextDocument_ToHtml((QTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textdocument_set_html(void* self, const char* html) {
    QTextDocument_SetHtml((QTextDocument*)self, qstring(html));
}

const char* q_textdocument_to_markdown(void* self) {
    libqt_string _str = QTextDocument_ToMarkdown((QTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textdocument_set_markdown(void* self, const char* markdown) {
    QTextDocument_SetMarkdown((QTextDocument*)self, qstring(markdown));
}

const char* q_textdocument_to_raw_text(void* self) {
    libqt_string _str = QTextDocument_ToRawText((QTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textdocument_to_plain_text(void* self) {
    libqt_string _str = QTextDocument_ToPlainText((QTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textdocument_set_plain_text(void* self, const char* text) {
    QTextDocument_SetPlainText((QTextDocument*)self, qstring(text));
}

QChar* q_textdocument_character_at(void* self, int pos) {
    return QTextDocument_CharacterAt((QTextDocument*)self, pos);
}

QTextCursor* q_textdocument_find(void* self, const char* subString) {
    return QTextDocument_Find((QTextDocument*)self, qstring(subString));
}

QTextCursor* q_textdocument_find2(void* self, const char* subString, void* cursor) {
    return QTextDocument_Find2((QTextDocument*)self, qstring(subString), (QTextCursor*)cursor);
}

QTextCursor* q_textdocument_find3(void* self, void* expr) {
    return QTextDocument_Find3((QTextDocument*)self, (QRegularExpression*)expr);
}

QTextCursor* q_textdocument_find4(void* self, void* expr, void* cursor) {
    return QTextDocument_Find4((QTextDocument*)self, (QRegularExpression*)expr, (QTextCursor*)cursor);
}

QTextFrame* q_textdocument_frame_at(void* self, int pos) {
    return QTextDocument_FrameAt((QTextDocument*)self, pos);
}

QTextFrame* q_textdocument_root_frame(void* self) {
    return QTextDocument_RootFrame((QTextDocument*)self);
}

QTextObject* q_textdocument_object(void* self, int objectIndex) {
    return QTextDocument_Object((QTextDocument*)self, objectIndex);
}

QTextObject* q_textdocument_object_for_format(void* self, void* param1) {
    return QTextDocument_ObjectForFormat((QTextDocument*)self, (QTextFormat*)param1);
}

QTextBlock* q_textdocument_find_block(void* self, int pos) {
    return QTextDocument_FindBlock((QTextDocument*)self, pos);
}

QTextBlock* q_textdocument_find_block_by_number(void* self, int blockNumber) {
    return QTextDocument_FindBlockByNumber((QTextDocument*)self, blockNumber);
}

QTextBlock* q_textdocument_find_block_by_line_number(void* self, int blockNumber) {
    return QTextDocument_FindBlockByLineNumber((QTextDocument*)self, blockNumber);
}

QTextBlock* q_textdocument_begin(void* self) {
    return QTextDocument_Begin((QTextDocument*)self);
}

QTextBlock* q_textdocument_end(void* self) {
    return QTextDocument_End((QTextDocument*)self);
}

QTextBlock* q_textdocument_first_block(void* self) {
    return QTextDocument_FirstBlock((QTextDocument*)self);
}

QTextBlock* q_textdocument_last_block(void* self) {
    return QTextDocument_LastBlock((QTextDocument*)self);
}

void q_textdocument_set_page_size(void* self, void* size) {
    QTextDocument_SetPageSize((QTextDocument*)self, (QSizeF*)size);
}

QSizeF* q_textdocument_page_size(void* self) {
    return QTextDocument_PageSize((QTextDocument*)self);
}

void q_textdocument_set_default_font(void* self, void* font) {
    QTextDocument_SetDefaultFont((QTextDocument*)self, (QFont*)font);
}

QFont* q_textdocument_default_font(void* self) {
    return QTextDocument_DefaultFont((QTextDocument*)self);
}

void q_textdocument_set_super_script_baseline(void* self, double baseline) {
    QTextDocument_SetSuperScriptBaseline((QTextDocument*)self, baseline);
}

double q_textdocument_super_script_baseline(void* self) {
    return QTextDocument_SuperScriptBaseline((QTextDocument*)self);
}

void q_textdocument_set_sub_script_baseline(void* self, double baseline) {
    QTextDocument_SetSubScriptBaseline((QTextDocument*)self, baseline);
}

double q_textdocument_sub_script_baseline(void* self) {
    return QTextDocument_SubScriptBaseline((QTextDocument*)self);
}

void q_textdocument_set_baseline_offset(void* self, double baseline) {
    QTextDocument_SetBaselineOffset((QTextDocument*)self, baseline);
}

double q_textdocument_baseline_offset(void* self) {
    return QTextDocument_BaselineOffset((QTextDocument*)self);
}

int32_t q_textdocument_page_count(void* self) {
    return QTextDocument_PageCount((QTextDocument*)self);
}

bool q_textdocument_is_modified(void* self) {
    return QTextDocument_IsModified((QTextDocument*)self);
}

void q_textdocument_print(void* self, void* printer) {
    QTextDocument_Print((QTextDocument*)self, (QPagedPaintDevice*)printer);
}

QVariant* q_textdocument_resource(void* self, int typeVal, void* name) {
    return QTextDocument_Resource((QTextDocument*)self, typeVal, (QUrl*)name);
}

void q_textdocument_add_resource(void* self, int typeVal, void* name, void* resource) {
    QTextDocument_AddResource((QTextDocument*)self, typeVal, (QUrl*)name, (QVariant*)resource);
}

libqt_list /* of QTextFormat* */ q_textdocument_all_formats(void* self) {
    libqt_list _arr = QTextDocument_AllFormats((QTextDocument*)self);
    return _arr;
}

void q_textdocument_mark_contents_dirty(void* self, int from, int length) {
    QTextDocument_MarkContentsDirty((QTextDocument*)self, from, length);
}

void q_textdocument_set_use_design_metrics(void* self, bool b) {
    QTextDocument_SetUseDesignMetrics((QTextDocument*)self, b);
}

bool q_textdocument_use_design_metrics(void* self) {
    return QTextDocument_UseDesignMetrics((QTextDocument*)self);
}

void q_textdocument_set_layout_enabled(void* self, bool b) {
    QTextDocument_SetLayoutEnabled((QTextDocument*)self, b);
}

bool q_textdocument_is_layout_enabled(void* self) {
    return QTextDocument_IsLayoutEnabled((QTextDocument*)self);
}

void q_textdocument_draw_contents(void* self, void* painter) {
    QTextDocument_DrawContents((QTextDocument*)self, (QPainter*)painter);
}

void q_textdocument_set_text_width(void* self, double width) {
    QTextDocument_SetTextWidth((QTextDocument*)self, width);
}

double q_textdocument_text_width(void* self) {
    return QTextDocument_TextWidth((QTextDocument*)self);
}

double q_textdocument_ideal_width(void* self) {
    return QTextDocument_IdealWidth((QTextDocument*)self);
}

double q_textdocument_indent_width(void* self) {
    return QTextDocument_IndentWidth((QTextDocument*)self);
}

void q_textdocument_set_indent_width(void* self, double width) {
    QTextDocument_SetIndentWidth((QTextDocument*)self, width);
}

double q_textdocument_document_margin(void* self) {
    return QTextDocument_DocumentMargin((QTextDocument*)self);
}

void q_textdocument_set_document_margin(void* self, double margin) {
    QTextDocument_SetDocumentMargin((QTextDocument*)self, margin);
}

void q_textdocument_adjust_size(void* self) {
    QTextDocument_AdjustSize((QTextDocument*)self);
}

QSizeF* q_textdocument_size(void* self) {
    return QTextDocument_Size((QTextDocument*)self);
}

int32_t q_textdocument_block_count(void* self) {
    return QTextDocument_BlockCount((QTextDocument*)self);
}

int32_t q_textdocument_line_count(void* self) {
    return QTextDocument_LineCount((QTextDocument*)self);
}

int32_t q_textdocument_character_count(void* self) {
    return QTextDocument_CharacterCount((QTextDocument*)self);
}

void q_textdocument_set_default_style_sheet(void* self, const char* sheet) {
    QTextDocument_SetDefaultStyleSheet((QTextDocument*)self, qstring(sheet));
}

const char* q_textdocument_default_style_sheet(void* self) {
    libqt_string _str = QTextDocument_DefaultStyleSheet((QTextDocument*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textdocument_undo(void* self, void* cursor) {
    QTextDocument_Undo((QTextDocument*)self, (QTextCursor*)cursor);
}

void q_textdocument_redo(void* self, void* cursor) {
    QTextDocument_Redo((QTextDocument*)self, (QTextCursor*)cursor);
}

void q_textdocument_clear_undo_redo_stacks(void* self) {
    QTextDocument_ClearUndoRedoStacks((QTextDocument*)self);
}

int32_t q_textdocument_maximum_block_count(void* self) {
    return QTextDocument_MaximumBlockCount((QTextDocument*)self);
}

void q_textdocument_set_maximum_block_count(void* self, int maximum) {
    QTextDocument_SetMaximumBlockCount((QTextDocument*)self, maximum);
}

QTextOption* q_textdocument_default_text_option(void* self) {
    return QTextDocument_DefaultTextOption((QTextDocument*)self);
}

void q_textdocument_set_default_text_option(void* self, void* option) {
    QTextDocument_SetDefaultTextOption((QTextDocument*)self, (QTextOption*)option);
}

QUrl* q_textdocument_base_url(void* self) {
    return QTextDocument_BaseUrl((QTextDocument*)self);
}

void q_textdocument_set_base_url(void* self, void* url) {
    QTextDocument_SetBaseUrl((QTextDocument*)self, (QUrl*)url);
}

int64_t q_textdocument_default_cursor_move_style(void* self) {
    return QTextDocument_DefaultCursorMoveStyle((QTextDocument*)self);
}

void q_textdocument_set_default_cursor_move_style(void* self, int64_t style) {
    QTextDocument_SetDefaultCursorMoveStyle((QTextDocument*)self, style);
}

void q_textdocument_contents_change(void* self, int from, int charsRemoved, int charsAdded) {
    QTextDocument_ContentsChange((QTextDocument*)self, from, charsRemoved, charsAdded);
}

void q_textdocument_on_contents_change(void* self, void (*slot)(void*, int, int, int)) {
    QTextDocument_Connect_ContentsChange((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_contents_changed(void* self) {
    QTextDocument_ContentsChanged((QTextDocument*)self);
}

void q_textdocument_on_contents_changed(void* self, void (*slot)(void*)) {
    QTextDocument_Connect_ContentsChanged((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_undo_available(void* self, bool param1) {
    QTextDocument_UndoAvailable((QTextDocument*)self, param1);
}

void q_textdocument_on_undo_available(void* self, void (*slot)(void*, bool)) {
    QTextDocument_Connect_UndoAvailable((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_redo_available(void* self, bool param1) {
    QTextDocument_RedoAvailable((QTextDocument*)self, param1);
}

void q_textdocument_on_redo_available(void* self, void (*slot)(void*, bool)) {
    QTextDocument_Connect_RedoAvailable((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_undo_command_added(void* self) {
    QTextDocument_UndoCommandAdded((QTextDocument*)self);
}

void q_textdocument_on_undo_command_added(void* self, void (*slot)(void*)) {
    QTextDocument_Connect_UndoCommandAdded((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_modification_changed(void* self, bool m) {
    QTextDocument_ModificationChanged((QTextDocument*)self, m);
}

void q_textdocument_on_modification_changed(void* self, void (*slot)(void*, bool)) {
    QTextDocument_Connect_ModificationChanged((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_cursor_position_changed(void* self, void* cursor) {
    QTextDocument_CursorPositionChanged((QTextDocument*)self, (QTextCursor*)cursor);
}

void q_textdocument_on_cursor_position_changed(void* self, void (*slot)(void*, void*)) {
    QTextDocument_Connect_CursorPositionChanged((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_block_count_changed(void* self, int newBlockCount) {
    QTextDocument_BlockCountChanged((QTextDocument*)self, newBlockCount);
}

void q_textdocument_on_block_count_changed(void* self, void (*slot)(void*, int)) {
    QTextDocument_Connect_BlockCountChanged((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_base_url_changed(void* self, void* url) {
    QTextDocument_BaseUrlChanged((QTextDocument*)self, (QUrl*)url);
}

void q_textdocument_on_base_url_changed(void* self, void (*slot)(void*, void*)) {
    QTextDocument_Connect_BaseUrlChanged((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_document_layout_changed(void* self) {
    QTextDocument_DocumentLayoutChanged((QTextDocument*)self);
}

void q_textdocument_on_document_layout_changed(void* self, void (*slot)(void*)) {
    QTextDocument_Connect_DocumentLayoutChanged((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_undo2(void* self) {
    QTextDocument_Undo2((QTextDocument*)self);
}

void q_textdocument_redo2(void* self) {
    QTextDocument_Redo2((QTextDocument*)self);
}

void q_textdocument_append_undo_item(void* self, void* param1) {
    QTextDocument_AppendUndoItem((QTextDocument*)self, (QAbstractUndoItem*)param1);
}

void q_textdocument_set_modified(void* self) {
    QTextDocument_SetModified((QTextDocument*)self);
}

QTextObject* q_textdocument_create_object(void* self, void* f) {
    return QTextDocument_CreateObject((QTextDocument*)self, (QTextFormat*)f);
}

void q_textdocument_on_create_object(void* self, QTextObject* (*slot)(void*, void*)) {
    QTextDocument_OnCreateObject((QTextDocument*)self, (intptr_t)slot);
}

QTextObject* q_textdocument_qbase_create_object(void* self, void* f) {
    return QTextDocument_QBaseCreateObject((QTextDocument*)self, (QTextFormat*)f);
}

QVariant* q_textdocument_load_resource(void* self, int typeVal, void* name) {
    return QTextDocument_LoadResource((QTextDocument*)self, typeVal, (QUrl*)name);
}

void q_textdocument_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*)) {
    QTextDocument_OnLoadResource((QTextDocument*)self, (intptr_t)slot);
}

QVariant* q_textdocument_qbase_load_resource(void* self, int typeVal, void* name) {
    return QTextDocument_QBaseLoadResource((QTextDocument*)self, typeVal, (QUrl*)name);
}

const char* q_textdocument_tr2(const char* s, const char* c) {
    libqt_string _str = QTextDocument_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textdocument_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextDocument_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTextDocument* q_textdocument_clone1(void* self, void* parent) {
    return QTextDocument_Clone1((QTextDocument*)self, (QObject*)parent);
}

const char* q_textdocument_to_markdown1(void* self, int64_t features) {
    libqt_string _str = QTextDocument_ToMarkdown1((QTextDocument*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textdocument_set_markdown2(void* self, const char* markdown, int64_t features) {
    QTextDocument_SetMarkdown2((QTextDocument*)self, qstring(markdown), features);
}

QTextCursor* q_textdocument_find22(void* self, const char* subString, int from) {
    return QTextDocument_Find22((QTextDocument*)self, qstring(subString), from);
}

QTextCursor* q_textdocument_find32(void* self, const char* subString, int from, int64_t options) {
    return QTextDocument_Find32((QTextDocument*)self, qstring(subString), from, options);
}

QTextCursor* q_textdocument_find33(void* self, const char* subString, void* cursor, int64_t options) {
    return QTextDocument_Find33((QTextDocument*)self, qstring(subString), (QTextCursor*)cursor, options);
}

QTextCursor* q_textdocument_find23(void* self, void* expr, int from) {
    return QTextDocument_Find23((QTextDocument*)self, (QRegularExpression*)expr, from);
}

QTextCursor* q_textdocument_find34(void* self, void* expr, int from, int64_t options) {
    return QTextDocument_Find34((QTextDocument*)self, (QRegularExpression*)expr, from, options);
}

QTextCursor* q_textdocument_find35(void* self, void* expr, void* cursor, int64_t options) {
    return QTextDocument_Find35((QTextDocument*)self, (QRegularExpression*)expr, (QTextCursor*)cursor, options);
}

void q_textdocument_draw_contents2(void* self, void* painter, void* rect) {
    QTextDocument_DrawContents2((QTextDocument*)self, (QPainter*)painter, (QRectF*)rect);
}

void q_textdocument_clear_undo_redo_stacks1(void* self, int64_t historyToClear) {
    QTextDocument_ClearUndoRedoStacks1((QTextDocument*)self, historyToClear);
}

void q_textdocument_set_modified1(void* self, bool m) {
    QTextDocument_SetModified1((QTextDocument*)self, m);
}

const char* q_textdocument_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textdocument_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_textdocument_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_textdocument_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_textdocument_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_textdocument_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_textdocument_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_textdocument_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_textdocument_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_textdocument_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_textdocument_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_textdocument_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_textdocument_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_textdocument_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_textdocument_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_textdocument_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_textdocument_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_textdocument_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_textdocument_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_textdocument_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_textdocument_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_textdocument_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_textdocument_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_textdocument_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_textdocument_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_textdocument_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_textdocument_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_textdocument_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_textdocument_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_textdocument_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_textdocument_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_textdocument_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_textdocument_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_textdocument_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_textdocument_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_textdocument_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_textdocument_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_textdocument_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_textdocument_event(void* self, void* event) {
    return QTextDocument_Event((QTextDocument*)self, (QEvent*)event);
}

bool q_textdocument_qbase_event(void* self, void* event) {
    return QTextDocument_QBaseEvent((QTextDocument*)self, (QEvent*)event);
}

void q_textdocument_on_event(void* self, bool (*slot)(void*, void*)) {
    QTextDocument_OnEvent((QTextDocument*)self, (intptr_t)slot);
}

bool q_textdocument_event_filter(void* self, void* watched, void* event) {
    return QTextDocument_EventFilter((QTextDocument*)self, (QObject*)watched, (QEvent*)event);
}

bool q_textdocument_qbase_event_filter(void* self, void* watched, void* event) {
    return QTextDocument_QBaseEventFilter((QTextDocument*)self, (QObject*)watched, (QEvent*)event);
}

void q_textdocument_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTextDocument_OnEventFilter((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_timer_event(void* self, void* event) {
    QTextDocument_TimerEvent((QTextDocument*)self, (QTimerEvent*)event);
}

void q_textdocument_qbase_timer_event(void* self, void* event) {
    QTextDocument_QBaseTimerEvent((QTextDocument*)self, (QTimerEvent*)event);
}

void q_textdocument_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTextDocument_OnTimerEvent((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_child_event(void* self, void* event) {
    QTextDocument_ChildEvent((QTextDocument*)self, (QChildEvent*)event);
}

void q_textdocument_qbase_child_event(void* self, void* event) {
    QTextDocument_QBaseChildEvent((QTextDocument*)self, (QChildEvent*)event);
}

void q_textdocument_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTextDocument_OnChildEvent((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_custom_event(void* self, void* event) {
    QTextDocument_CustomEvent((QTextDocument*)self, (QEvent*)event);
}

void q_textdocument_qbase_custom_event(void* self, void* event) {
    QTextDocument_QBaseCustomEvent((QTextDocument*)self, (QEvent*)event);
}

void q_textdocument_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTextDocument_OnCustomEvent((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_connect_notify(void* self, void* signal) {
    QTextDocument_ConnectNotify((QTextDocument*)self, (QMetaMethod*)signal);
}

void q_textdocument_qbase_connect_notify(void* self, void* signal) {
    QTextDocument_QBaseConnectNotify((QTextDocument*)self, (QMetaMethod*)signal);
}

void q_textdocument_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTextDocument_OnConnectNotify((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_disconnect_notify(void* self, void* signal) {
    QTextDocument_DisconnectNotify((QTextDocument*)self, (QMetaMethod*)signal);
}

void q_textdocument_qbase_disconnect_notify(void* self, void* signal) {
    QTextDocument_QBaseDisconnectNotify((QTextDocument*)self, (QMetaMethod*)signal);
}

void q_textdocument_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTextDocument_OnDisconnectNotify((QTextDocument*)self, (intptr_t)slot);
}

QObject* q_textdocument_sender(void* self) {
    return QTextDocument_Sender((QTextDocument*)self);
}

QObject* q_textdocument_qbase_sender(void* self) {
    return QTextDocument_QBaseSender((QTextDocument*)self);
}

void q_textdocument_on_sender(void* self, QObject* (*slot)()) {
    QTextDocument_OnSender((QTextDocument*)self, (intptr_t)slot);
}

int32_t q_textdocument_sender_signal_index(void* self) {
    return QTextDocument_SenderSignalIndex((QTextDocument*)self);
}

int32_t q_textdocument_qbase_sender_signal_index(void* self) {
    return QTextDocument_QBaseSenderSignalIndex((QTextDocument*)self);
}

void q_textdocument_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTextDocument_OnSenderSignalIndex((QTextDocument*)self, (intptr_t)slot);
}

int32_t q_textdocument_receivers(void* self, const char* signal) {
    return QTextDocument_Receivers((QTextDocument*)self, signal);
}

int32_t q_textdocument_qbase_receivers(void* self, const char* signal) {
    return QTextDocument_QBaseReceivers((QTextDocument*)self, signal);
}

void q_textdocument_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTextDocument_OnReceivers((QTextDocument*)self, (intptr_t)slot);
}

bool q_textdocument_is_signal_connected(void* self, void* signal) {
    return QTextDocument_IsSignalConnected((QTextDocument*)self, (QMetaMethod*)signal);
}

bool q_textdocument_qbase_is_signal_connected(void* self, void* signal) {
    return QTextDocument_QBaseIsSignalConnected((QTextDocument*)self, (QMetaMethod*)signal);
}

void q_textdocument_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTextDocument_OnIsSignalConnected((QTextDocument*)self, (intptr_t)slot);
}

void q_textdocument_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_textdocument_delete(void* self) {
    QTextDocument_Delete((QTextDocument*)(self));
}
