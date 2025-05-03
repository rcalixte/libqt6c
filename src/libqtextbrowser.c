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
#include "libqtextedit.hpp"
#include "libqthread.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqtextbrowser.hpp"
#include "libqtextbrowser.h"

QTextBrowser* q_textbrowser_new(void* parent) {
    return QTextBrowser_new((QWidget*)parent);
}

QTextBrowser* q_textbrowser_new2() {
    return QTextBrowser_new2();
}

QMetaObject* q_textbrowser_meta_object(void* self) {
    return QTextBrowser_MetaObject((QTextBrowser*)self);
}

void* q_textbrowser_metacast(void* self, const char* param1) {
    return QTextBrowser_Metacast((QTextBrowser*)self, param1);
}

int32_t q_textbrowser_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextBrowser_Metacall((QTextBrowser*)self, param1, param2, param3);
}

void q_textbrowser_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTextBrowser_OnMetacall((QTextBrowser*)self, (intptr_t)slot);
}

int32_t q_textbrowser_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextBrowser_QBaseMetacall((QTextBrowser*)self, param1, param2, param3);
}

const char* q_textbrowser_tr(const char* s) {
    libqt_string _str = QTextBrowser_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_textbrowser_source(void* self) {
    return QTextBrowser_Source((QTextBrowser*)self);
}

int64_t q_textbrowser_source_type(void* self) {
    return QTextBrowser_SourceType((QTextBrowser*)self);
}

const char** q_textbrowser_search_paths(void* self) {
    libqt_list _arr = QTextBrowser_SearchPaths((QTextBrowser*)self);
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

void q_textbrowser_set_search_paths(void* self, const char* paths[]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = malloc(paths_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < paths_len; ++_i) {
        paths_qstr[_i] = qstring(paths[_i]);
    }
    libqt_list paths_list = qstrlist(paths_qstr, paths_len);
    QTextBrowser_SetSearchPaths((QTextBrowser*)self, paths_list);
}

QVariant* q_textbrowser_load_resource(void* self, int typeVal, void* name) {
    return QTextBrowser_LoadResource((QTextBrowser*)self, typeVal, (QUrl*)name);
}

void q_textbrowser_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*)) {
    QTextBrowser_OnLoadResource((QTextBrowser*)self, (intptr_t)slot);
}

QVariant* q_textbrowser_qbase_load_resource(void* self, int typeVal, void* name) {
    return QTextBrowser_QBaseLoadResource((QTextBrowser*)self, typeVal, (QUrl*)name);
}

bool q_textbrowser_is_backward_available(void* self) {
    return QTextBrowser_IsBackwardAvailable((QTextBrowser*)self);
}

bool q_textbrowser_is_forward_available(void* self) {
    return QTextBrowser_IsForwardAvailable((QTextBrowser*)self);
}

void q_textbrowser_clear_history(void* self) {
    QTextBrowser_ClearHistory((QTextBrowser*)self);
}

const char* q_textbrowser_history_title(void* self, int param1) {
    libqt_string _str = QTextBrowser_HistoryTitle((QTextBrowser*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_textbrowser_history_url(void* self, int param1) {
    return QTextBrowser_HistoryUrl((QTextBrowser*)self, param1);
}

int32_t q_textbrowser_backward_history_count(void* self) {
    return QTextBrowser_BackwardHistoryCount((QTextBrowser*)self);
}

int32_t q_textbrowser_forward_history_count(void* self) {
    return QTextBrowser_ForwardHistoryCount((QTextBrowser*)self);
}

bool q_textbrowser_open_external_links(void* self) {
    return QTextBrowser_OpenExternalLinks((QTextBrowser*)self);
}

void q_textbrowser_set_open_external_links(void* self, bool open) {
    QTextBrowser_SetOpenExternalLinks((QTextBrowser*)self, open);
}

bool q_textbrowser_open_links(void* self) {
    return QTextBrowser_OpenLinks((QTextBrowser*)self);
}

void q_textbrowser_set_open_links(void* self, bool open) {
    QTextBrowser_SetOpenLinks((QTextBrowser*)self, open);
}

void q_textbrowser_set_source(void* self, void* name) {
    QTextBrowser_SetSource((QTextBrowser*)self, (QUrl*)name);
}

void q_textbrowser_backward(void* self) {
    QTextBrowser_Backward((QTextBrowser*)self);
}

void q_textbrowser_on_backward(void* self, void (*slot)()) {
    QTextBrowser_OnBackward((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_backward(void* self) {
    QTextBrowser_QBaseBackward((QTextBrowser*)self);
}

void q_textbrowser_forward(void* self) {
    QTextBrowser_Forward((QTextBrowser*)self);
}

void q_textbrowser_on_forward(void* self, void (*slot)()) {
    QTextBrowser_OnForward((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_forward(void* self) {
    QTextBrowser_QBaseForward((QTextBrowser*)self);
}

void q_textbrowser_home(void* self) {
    QTextBrowser_Home((QTextBrowser*)self);
}

void q_textbrowser_on_home(void* self, void (*slot)()) {
    QTextBrowser_OnHome((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_home(void* self) {
    QTextBrowser_QBaseHome((QTextBrowser*)self);
}

void q_textbrowser_reload(void* self) {
    QTextBrowser_Reload((QTextBrowser*)self);
}

void q_textbrowser_on_reload(void* self, void (*slot)()) {
    QTextBrowser_OnReload((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_reload(void* self) {
    QTextBrowser_QBaseReload((QTextBrowser*)self);
}

void q_textbrowser_backward_available(void* self, bool param1) {
    QTextBrowser_BackwardAvailable((QTextBrowser*)self, param1);
}

void q_textbrowser_on_backward_available(void* self, void (*slot)(void*, bool)) {
    QTextBrowser_Connect_BackwardAvailable((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_forward_available(void* self, bool param1) {
    QTextBrowser_ForwardAvailable((QTextBrowser*)self, param1);
}

void q_textbrowser_on_forward_available(void* self, void (*slot)(void*, bool)) {
    QTextBrowser_Connect_ForwardAvailable((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_history_changed(void* self) {
    QTextBrowser_HistoryChanged((QTextBrowser*)self);
}

void q_textbrowser_on_history_changed(void* self, void (*slot)(void*)) {
    QTextBrowser_Connect_HistoryChanged((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_source_changed(void* self, void* param1) {
    QTextBrowser_SourceChanged((QTextBrowser*)self, (QUrl*)param1);
}

void q_textbrowser_on_source_changed(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_Connect_SourceChanged((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_highlighted(void* self, void* param1) {
    QTextBrowser_Highlighted((QTextBrowser*)self, (QUrl*)param1);
}

void q_textbrowser_on_highlighted(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_Connect_Highlighted((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_anchor_clicked(void* self, void* param1) {
    QTextBrowser_AnchorClicked((QTextBrowser*)self, (QUrl*)param1);
}

void q_textbrowser_on_anchor_clicked(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_Connect_AnchorClicked((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_event(void* self, void* e) {
    return QTextBrowser_Event((QTextBrowser*)self, (QEvent*)e);
}

void q_textbrowser_on_event(void* self, bool (*slot)(void*, void*)) {
    QTextBrowser_OnEvent((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_qbase_event(void* self, void* e) {
    return QTextBrowser_QBaseEvent((QTextBrowser*)self, (QEvent*)e);
}

void q_textbrowser_key_press_event(void* self, void* ev) {
    QTextBrowser_KeyPressEvent((QTextBrowser*)self, (QKeyEvent*)ev);
}

void q_textbrowser_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnKeyPressEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_key_press_event(void* self, void* ev) {
    QTextBrowser_QBaseKeyPressEvent((QTextBrowser*)self, (QKeyEvent*)ev);
}

void q_textbrowser_mouse_move_event(void* self, void* ev) {
    QTextBrowser_MouseMoveEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

void q_textbrowser_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnMouseMoveEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_mouse_move_event(void* self, void* ev) {
    QTextBrowser_QBaseMouseMoveEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

void q_textbrowser_mouse_press_event(void* self, void* ev) {
    QTextBrowser_MousePressEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

void q_textbrowser_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnMousePressEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_mouse_press_event(void* self, void* ev) {
    QTextBrowser_QBaseMousePressEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

void q_textbrowser_mouse_release_event(void* self, void* ev) {
    QTextBrowser_MouseReleaseEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

void q_textbrowser_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnMouseReleaseEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_mouse_release_event(void* self, void* ev) {
    QTextBrowser_QBaseMouseReleaseEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

void q_textbrowser_focus_out_event(void* self, void* ev) {
    QTextBrowser_FocusOutEvent((QTextBrowser*)self, (QFocusEvent*)ev);
}

void q_textbrowser_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnFocusOutEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_focus_out_event(void* self, void* ev) {
    QTextBrowser_QBaseFocusOutEvent((QTextBrowser*)self, (QFocusEvent*)ev);
}

bool q_textbrowser_focus_next_prev_child(void* self, bool next) {
    return QTextBrowser_FocusNextPrevChild((QTextBrowser*)self, next);
}

void q_textbrowser_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTextBrowser_OnFocusNextPrevChild((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_qbase_focus_next_prev_child(void* self, bool next) {
    return QTextBrowser_QBaseFocusNextPrevChild((QTextBrowser*)self, next);
}

void q_textbrowser_paint_event(void* self, void* e) {
    QTextBrowser_PaintEvent((QTextBrowser*)self, (QPaintEvent*)e);
}

void q_textbrowser_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnPaintEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_paint_event(void* self, void* e) {
    QTextBrowser_QBasePaintEvent((QTextBrowser*)self, (QPaintEvent*)e);
}

void q_textbrowser_do_set_source(void* self, void* name, int64_t typeVal) {
    QTextBrowser_DoSetSource((QTextBrowser*)self, (QUrl*)name, typeVal);
}

void q_textbrowser_on_do_set_source(void* self, void (*slot)(void*, void*, int64_t)) {
    QTextBrowser_OnDoSetSource((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_qbase_do_set_source(void* self, void* name, int64_t typeVal) {
    QTextBrowser_QBaseDoSetSource((QTextBrowser*)self, (QUrl*)name, typeVal);
}

const char* q_textbrowser_tr2(const char* s, const char* c) {
    libqt_string _str = QTextBrowser_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textbrowser_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextBrowser_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_source2(void* self, void* name, int64_t typeVal) {
    QTextBrowser_SetSource2((QTextBrowser*)self, (QUrl*)name, typeVal);
}

void q_textbrowser_set_document(void* self, void* document) {
    QTextEdit_SetDocument((QTextEdit*)self, (QTextDocument*)document);
}

QTextDocument* q_textbrowser_document(void* self) {
    return QTextEdit_Document((QTextEdit*)self);
}

void q_textbrowser_set_placeholder_text(void* self, const char* placeholderText) {
    QTextEdit_SetPlaceholderText((QTextEdit*)self, qstring(placeholderText));
}

const char* q_textbrowser_placeholder_text(void* self) {
    libqt_string _str = QTextEdit_PlaceholderText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_text_cursor(void* self, void* cursor) {
    QTextEdit_SetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

QTextCursor* q_textbrowser_text_cursor(void* self) {
    return QTextEdit_TextCursor((QTextEdit*)self);
}

bool q_textbrowser_is_read_only(void* self) {
    return QTextEdit_IsReadOnly((QTextEdit*)self);
}

void q_textbrowser_set_read_only(void* self, bool ro) {
    QTextEdit_SetReadOnly((QTextEdit*)self, ro);
}

void q_textbrowser_set_text_interaction_flags(void* self, int64_t flags) {
    QTextEdit_SetTextInteractionFlags((QTextEdit*)self, flags);
}

int64_t q_textbrowser_text_interaction_flags(void* self) {
    return QTextEdit_TextInteractionFlags((QTextEdit*)self);
}

double q_textbrowser_font_point_size(void* self) {
    return QTextEdit_FontPointSize((QTextEdit*)self);
}

const char* q_textbrowser_font_family(void* self) {
    libqt_string _str = QTextEdit_FontFamily((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_textbrowser_font_weight(void* self) {
    return QTextEdit_FontWeight((QTextEdit*)self);
}

bool q_textbrowser_font_underline(void* self) {
    return QTextEdit_FontUnderline((QTextEdit*)self);
}

bool q_textbrowser_font_italic(void* self) {
    return QTextEdit_FontItalic((QTextEdit*)self);
}

QColor* q_textbrowser_text_color(void* self) {
    return QTextEdit_TextColor((QTextEdit*)self);
}

QColor* q_textbrowser_text_background_color(void* self) {
    return QTextEdit_TextBackgroundColor((QTextEdit*)self);
}

QFont* q_textbrowser_current_font(void* self) {
    return QTextEdit_CurrentFont((QTextEdit*)self);
}

int64_t q_textbrowser_alignment(void* self) {
    return QTextEdit_Alignment((QTextEdit*)self);
}

void q_textbrowser_merge_current_char_format(void* self, void* modifier) {
    QTextEdit_MergeCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)modifier);
}

void q_textbrowser_set_current_char_format(void* self, void* format) {
    QTextEdit_SetCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)format);
}

QTextCharFormat* q_textbrowser_current_char_format(void* self) {
    return QTextEdit_CurrentCharFormat((QTextEdit*)self);
}

int64_t q_textbrowser_auto_formatting(void* self) {
    return QTextEdit_AutoFormatting((QTextEdit*)self);
}

void q_textbrowser_set_auto_formatting(void* self, int64_t features) {
    QTextEdit_SetAutoFormatting((QTextEdit*)self, features);
}

bool q_textbrowser_tab_changes_focus(void* self) {
    return QTextEdit_TabChangesFocus((QTextEdit*)self);
}

void q_textbrowser_set_tab_changes_focus(void* self, bool b) {
    QTextEdit_SetTabChangesFocus((QTextEdit*)self, b);
}

void q_textbrowser_set_document_title(void* self, const char* title) {
    QTextEdit_SetDocumentTitle((QTextEdit*)self, qstring(title));
}

const char* q_textbrowser_document_title(void* self) {
    libqt_string _str = QTextEdit_DocumentTitle((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_textbrowser_is_undo_redo_enabled(void* self) {
    return QTextEdit_IsUndoRedoEnabled((QTextEdit*)self);
}

void q_textbrowser_set_undo_redo_enabled(void* self, bool enable) {
    QTextEdit_SetUndoRedoEnabled((QTextEdit*)self, enable);
}

int64_t q_textbrowser_line_wrap_mode(void* self) {
    return QTextEdit_LineWrapMode((QTextEdit*)self);
}

void q_textbrowser_set_line_wrap_mode(void* self, int64_t mode) {
    QTextEdit_SetLineWrapMode((QTextEdit*)self, mode);
}

int32_t q_textbrowser_line_wrap_column_or_width(void* self) {
    return QTextEdit_LineWrapColumnOrWidth((QTextEdit*)self);
}

void q_textbrowser_set_line_wrap_column_or_width(void* self, int w) {
    QTextEdit_SetLineWrapColumnOrWidth((QTextEdit*)self, w);
}

int64_t q_textbrowser_word_wrap_mode(void* self) {
    return QTextEdit_WordWrapMode((QTextEdit*)self);
}

void q_textbrowser_set_word_wrap_mode(void* self, int64_t policy) {
    QTextEdit_SetWordWrapMode((QTextEdit*)self, policy);
}

bool q_textbrowser_find(void* self, const char* exp) {
    return QTextEdit_Find((QTextEdit*)self, qstring(exp));
}

bool q_textbrowser_find_with_exp(void* self, void* exp) {
    return QTextEdit_FindWithExp((QTextEdit*)self, (QRegularExpression*)exp);
}

const char* q_textbrowser_to_plain_text(void* self) {
    libqt_string _str = QTextEdit_ToPlainText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textbrowser_to_html(void* self) {
    libqt_string _str = QTextEdit_ToHtml((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textbrowser_to_markdown(void* self) {
    libqt_string _str = QTextEdit_ToMarkdown((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_ensure_cursor_visible(void* self) {
    QTextEdit_EnsureCursorVisible((QTextEdit*)self);
}

QMenu* q_textbrowser_create_standard_context_menu(void* self) {
    return QTextEdit_CreateStandardContextMenu((QTextEdit*)self);
}

QMenu* q_textbrowser_create_standard_context_menu_with_position(void* self, void* position) {
    return QTextEdit_CreateStandardContextMenuWithPosition((QTextEdit*)self, (QPoint*)position);
}

QTextCursor* q_textbrowser_cursor_for_position(void* self, void* pos) {
    return QTextEdit_CursorForPosition((QTextEdit*)self, (QPoint*)pos);
}

QRect* q_textbrowser_cursor_rect(void* self, void* cursor) {
    return QTextEdit_CursorRect((QTextEdit*)self, (QTextCursor*)cursor);
}

QRect* q_textbrowser_cursor_rect2(void* self) {
    return QTextEdit_CursorRect2((QTextEdit*)self);
}

const char* q_textbrowser_anchor_at(void* self, void* pos) {
    libqt_string _str = QTextEdit_AnchorAt((QTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_textbrowser_overwrite_mode(void* self) {
    return QTextEdit_OverwriteMode((QTextEdit*)self);
}

void q_textbrowser_set_overwrite_mode(void* self, bool overwrite) {
    QTextEdit_SetOverwriteMode((QTextEdit*)self, overwrite);
}

double q_textbrowser_tab_stop_distance(void* self) {
    return QTextEdit_TabStopDistance((QTextEdit*)self);
}

void q_textbrowser_set_tab_stop_distance(void* self, double distance) {
    QTextEdit_SetTabStopDistance((QTextEdit*)self, distance);
}

int32_t q_textbrowser_cursor_width(void* self) {
    return QTextEdit_CursorWidth((QTextEdit*)self);
}

void q_textbrowser_set_cursor_width(void* self, int width) {
    QTextEdit_SetCursorWidth((QTextEdit*)self, width);
}

bool q_textbrowser_accept_rich_text(void* self) {
    return QTextEdit_AcceptRichText((QTextEdit*)self);
}

void q_textbrowser_set_accept_rich_text(void* self, bool accept) {
    QTextEdit_SetAcceptRichText((QTextEdit*)self, accept);
}

void q_textbrowser_set_extra_selections(void* self, void* selections[]) {
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

libqt_list /* of QTextEdit__ExtraSelection* */ q_textbrowser_extra_selections(void* self) {
    libqt_list _arr = QTextEdit_ExtraSelections((QTextEdit*)self);
    return _arr;
}

void q_textbrowser_move_cursor(void* self, int64_t operation) {
    QTextEdit_MoveCursor((QTextEdit*)self, operation);
}

bool q_textbrowser_can_paste(void* self) {
    return QTextEdit_CanPaste((QTextEdit*)self);
}

void q_textbrowser_print(void* self, void* printer) {
    QTextEdit_Print((QTextEdit*)self, (QPagedPaintDevice*)printer);
}

QVariant* q_textbrowser_input_method_query2(void* self, int64_t query, void* argument) {
    return QTextEdit_InputMethodQuery2((QTextEdit*)self, query, (QVariant*)argument);
}

void q_textbrowser_set_font_point_size(void* self, double s) {
    QTextEdit_SetFontPointSize((QTextEdit*)self, s);
}

void q_textbrowser_set_font_family(void* self, const char* fontFamily) {
    QTextEdit_SetFontFamily((QTextEdit*)self, qstring(fontFamily));
}

void q_textbrowser_set_font_weight(void* self, int w) {
    QTextEdit_SetFontWeight((QTextEdit*)self, w);
}

void q_textbrowser_set_font_underline(void* self, bool b) {
    QTextEdit_SetFontUnderline((QTextEdit*)self, b);
}

void q_textbrowser_set_font_italic(void* self, bool b) {
    QTextEdit_SetFontItalic((QTextEdit*)self, b);
}

void q_textbrowser_set_text_color(void* self, void* c) {
    QTextEdit_SetTextColor((QTextEdit*)self, (QColor*)c);
}

void q_textbrowser_set_text_background_color(void* self, void* c) {
    QTextEdit_SetTextBackgroundColor((QTextEdit*)self, (QColor*)c);
}

void q_textbrowser_set_current_font(void* self, void* f) {
    QTextEdit_SetCurrentFont((QTextEdit*)self, (QFont*)f);
}

void q_textbrowser_set_alignment(void* self, int64_t a) {
    QTextEdit_SetAlignment((QTextEdit*)self, a);
}

void q_textbrowser_set_plain_text(void* self, const char* text) {
    QTextEdit_SetPlainText((QTextEdit*)self, qstring(text));
}

void q_textbrowser_set_html(void* self, const char* text) {
    QTextEdit_SetHtml((QTextEdit*)self, qstring(text));
}

void q_textbrowser_set_markdown(void* self, const char* markdown) {
    QTextEdit_SetMarkdown((QTextEdit*)self, qstring(markdown));
}

void q_textbrowser_set_text(void* self, const char* text) {
    QTextEdit_SetText((QTextEdit*)self, qstring(text));
}

void q_textbrowser_cut(void* self) {
    QTextEdit_Cut((QTextEdit*)self);
}

void q_textbrowser_copy(void* self) {
    QTextEdit_Copy((QTextEdit*)self);
}

void q_textbrowser_paste(void* self) {
    QTextEdit_Paste((QTextEdit*)self);
}

void q_textbrowser_undo(void* self) {
    QTextEdit_Undo((QTextEdit*)self);
}

void q_textbrowser_redo(void* self) {
    QTextEdit_Redo((QTextEdit*)self);
}

void q_textbrowser_clear(void* self) {
    QTextEdit_Clear((QTextEdit*)self);
}

void q_textbrowser_select_all(void* self) {
    QTextEdit_SelectAll((QTextEdit*)self);
}

void q_textbrowser_insert_plain_text(void* self, const char* text) {
    QTextEdit_InsertPlainText((QTextEdit*)self, qstring(text));
}

void q_textbrowser_insert_html(void* self, const char* text) {
    QTextEdit_InsertHtml((QTextEdit*)self, qstring(text));
}

void q_textbrowser_append(void* self, const char* text) {
    QTextEdit_Append((QTextEdit*)self, qstring(text));
}

void q_textbrowser_scroll_to_anchor(void* self, const char* name) {
    QTextEdit_ScrollToAnchor((QTextEdit*)self, qstring(name));
}

void q_textbrowser_zoom_in(void* self) {
    QTextEdit_ZoomIn((QTextEdit*)self);
}

void q_textbrowser_zoom_out(void* self) {
    QTextEdit_ZoomOut((QTextEdit*)self);
}

void q_textbrowser_text_changed(void* self) {
    QTextEdit_TextChanged((QTextEdit*)self);
}

void q_textbrowser_on_text_changed(void* self, void (*slot)(void*)) {
    QTextEdit_Connect_TextChanged((QTextEdit*)self, (intptr_t)slot);
}

void q_textbrowser_undo_available(void* self, bool b) {
    QTextEdit_UndoAvailable((QTextEdit*)self, b);
}

void q_textbrowser_on_undo_available(void* self, void (*slot)(void*, bool)) {
    QTextEdit_Connect_UndoAvailable((QTextEdit*)self, (intptr_t)slot);
}

void q_textbrowser_redo_available(void* self, bool b) {
    QTextEdit_RedoAvailable((QTextEdit*)self, b);
}

void q_textbrowser_on_redo_available(void* self, void (*slot)(void*, bool)) {
    QTextEdit_Connect_RedoAvailable((QTextEdit*)self, (intptr_t)slot);
}

void q_textbrowser_current_char_format_changed(void* self, void* format) {
    QTextEdit_CurrentCharFormatChanged((QTextEdit*)self, (QTextCharFormat*)format);
}

void q_textbrowser_on_current_char_format_changed(void* self, void (*slot)(void*, void*)) {
    QTextEdit_Connect_CurrentCharFormatChanged((QTextEdit*)self, (intptr_t)slot);
}

void q_textbrowser_copy_available(void* self, bool b) {
    QTextEdit_CopyAvailable((QTextEdit*)self, b);
}

void q_textbrowser_on_copy_available(void* self, void (*slot)(void*, bool)) {
    QTextEdit_Connect_CopyAvailable((QTextEdit*)self, (intptr_t)slot);
}

void q_textbrowser_selection_changed(void* self) {
    QTextEdit_SelectionChanged((QTextEdit*)self);
}

void q_textbrowser_on_selection_changed(void* self, void (*slot)(void*)) {
    QTextEdit_Connect_SelectionChanged((QTextEdit*)self, (intptr_t)slot);
}

void q_textbrowser_cursor_position_changed(void* self) {
    QTextEdit_CursorPositionChanged((QTextEdit*)self);
}

void q_textbrowser_on_cursor_position_changed(void* self, void (*slot)(void*)) {
    QTextEdit_Connect_CursorPositionChanged((QTextEdit*)self, (intptr_t)slot);
}

bool q_textbrowser_find2(void* self, const char* exp, int64_t options) {
    return QTextEdit_Find2((QTextEdit*)self, qstring(exp), options);
}

bool q_textbrowser_find22(void* self, void* exp, int64_t options) {
    return QTextEdit_Find22((QTextEdit*)self, (QRegularExpression*)exp, options);
}

const char* q_textbrowser_to_markdown1(void* self, int64_t features) {
    libqt_string _str = QTextEdit_ToMarkdown1((QTextEdit*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_move_cursor2(void* self, int64_t operation, int64_t mode) {
    QTextEdit_MoveCursor2((QTextEdit*)self, operation, mode);
}

void q_textbrowser_zoom_in1(void* self, int range) {
    QTextEdit_ZoomIn1((QTextEdit*)self, range);
}

void q_textbrowser_zoom_out1(void* self, int range) {
    QTextEdit_ZoomOut1((QTextEdit*)self, range);
}

int64_t q_textbrowser_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_textbrowser_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_textbrowser_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_textbrowser_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int64_t q_textbrowser_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_textbrowser_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_textbrowser_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_textbrowser_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_textbrowser_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_textbrowser_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_textbrowser_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_textbrowser_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_textbrowser_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_textbrowser_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_textbrowser_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int64_t q_textbrowser_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_textbrowser_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_textbrowser_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_textbrowser_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_textbrowser_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_textbrowser_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_textbrowser_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_textbrowser_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_textbrowser_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_textbrowser_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_textbrowser_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_textbrowser_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_textbrowser_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_textbrowser_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_textbrowser_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_textbrowser_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_textbrowser_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_textbrowser_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_textbrowser_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_textbrowser_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_textbrowser_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_textbrowser_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_textbrowser_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_textbrowser_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_textbrowser_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_textbrowser_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_textbrowser_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_textbrowser_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_textbrowser_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_textbrowser_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_textbrowser_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_textbrowser_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_textbrowser_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_textbrowser_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_textbrowser_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_textbrowser_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_textbrowser_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_textbrowser_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_textbrowser_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_textbrowser_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_textbrowser_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_textbrowser_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_textbrowser_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_textbrowser_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_textbrowser_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_textbrowser_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_textbrowser_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_textbrowser_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_textbrowser_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_textbrowser_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_textbrowser_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_textbrowser_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_textbrowser_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_textbrowser_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_textbrowser_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_textbrowser_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_textbrowser_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_textbrowser_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_textbrowser_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_textbrowser_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_textbrowser_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_textbrowser_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_textbrowser_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_textbrowser_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_textbrowser_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_textbrowser_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_textbrowser_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_textbrowser_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_textbrowser_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_textbrowser_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_textbrowser_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_textbrowser_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_textbrowser_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_textbrowser_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_textbrowser_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_textbrowser_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_textbrowser_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_textbrowser_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_textbrowser_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_textbrowser_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_textbrowser_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_textbrowser_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_textbrowser_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_textbrowser_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_textbrowser_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_textbrowser_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_textbrowser_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_textbrowser_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_textbrowser_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_textbrowser_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_textbrowser_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_textbrowser_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_textbrowser_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_textbrowser_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_textbrowser_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_textbrowser_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_textbrowser_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_textbrowser_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_textbrowser_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_textbrowser_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_textbrowser_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_textbrowser_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_textbrowser_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_textbrowser_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_textbrowser_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_textbrowser_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_textbrowser_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_textbrowser_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_textbrowser_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_textbrowser_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_textbrowser_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_textbrowser_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_textbrowser_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_textbrowser_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_textbrowser_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textbrowser_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_textbrowser_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_textbrowser_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_textbrowser_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_textbrowser_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_textbrowser_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_textbrowser_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_textbrowser_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_textbrowser_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_textbrowser_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_textbrowser_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_textbrowser_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_textbrowser_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_textbrowser_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textbrowser_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_textbrowser_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_textbrowser_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_textbrowser_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_textbrowser_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_textbrowser_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_textbrowser_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_textbrowser_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_textbrowser_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_textbrowser_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_textbrowser_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_textbrowser_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_textbrowser_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_textbrowser_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_textbrowser_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_textbrowser_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_textbrowser_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_textbrowser_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_textbrowser_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_textbrowser_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_textbrowser_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_textbrowser_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_textbrowser_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_textbrowser_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_textbrowser_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_textbrowser_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_textbrowser_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_textbrowser_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_textbrowser_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_textbrowser_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_textbrowser_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_textbrowser_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_textbrowser_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_textbrowser_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_textbrowser_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_textbrowser_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_textbrowser_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_textbrowser_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_textbrowser_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_textbrowser_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_textbrowser_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_textbrowser_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_textbrowser_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_textbrowser_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_textbrowser_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_textbrowser_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_textbrowser_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_textbrowser_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_textbrowser_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_textbrowser_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_textbrowser_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_textbrowser_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_textbrowser_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_textbrowser_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_textbrowser_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_textbrowser_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_textbrowser_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_textbrowser_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_textbrowser_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_textbrowser_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_textbrowser_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_textbrowser_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_textbrowser_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_textbrowser_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_textbrowser_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_textbrowser_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_textbrowser_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_textbrowser_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_textbrowser_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_textbrowser_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_textbrowser_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_textbrowser_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_textbrowser_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_textbrowser_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_textbrowser_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_textbrowser_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_textbrowser_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_textbrowser_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_textbrowser_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_textbrowser_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_textbrowser_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_textbrowser_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_textbrowser_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_textbrowser_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_textbrowser_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_textbrowser_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_textbrowser_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_textbrowser_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_textbrowser_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_textbrowser_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_textbrowser_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_textbrowser_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_textbrowser_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_textbrowser_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_textbrowser_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_textbrowser_add_actions(void* self, void* actions[]) {
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

void q_textbrowser_insert_actions(void* self, void* before, void* actions[]) {
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

void q_textbrowser_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_textbrowser_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_textbrowser_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_textbrowser_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_textbrowser_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_textbrowser_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_textbrowser_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_textbrowser_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_textbrowser_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_textbrowser_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_textbrowser_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_textbrowser_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_textbrowser_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_textbrowser_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_textbrowser_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_textbrowser_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_textbrowser_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_textbrowser_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_textbrowser_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_textbrowser_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_textbrowser_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_textbrowser_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_textbrowser_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_textbrowser_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_textbrowser_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_textbrowser_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_textbrowser_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_textbrowser_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_textbrowser_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_textbrowser_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_textbrowser_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_textbrowser_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_textbrowser_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_textbrowser_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_textbrowser_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_textbrowser_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_textbrowser_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_textbrowser_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_textbrowser_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_textbrowser_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_textbrowser_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_textbrowser_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_textbrowser_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_textbrowser_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_textbrowser_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_textbrowser_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_textbrowser_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_textbrowser_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_textbrowser_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_textbrowser_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_textbrowser_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_textbrowser_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textbrowser_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_textbrowser_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_textbrowser_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_textbrowser_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_textbrowser_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_textbrowser_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_textbrowser_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_textbrowser_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_textbrowser_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_textbrowser_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_textbrowser_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_textbrowser_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_textbrowser_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_textbrowser_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_textbrowser_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_textbrowser_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_textbrowser_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_textbrowser_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_textbrowser_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_textbrowser_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_textbrowser_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_textbrowser_dynamic_property_names(void* self) {
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

QBindingStorage* q_textbrowser_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_textbrowser_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_textbrowser_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_textbrowser_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_textbrowser_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_textbrowser_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_textbrowser_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_textbrowser_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_textbrowser_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_textbrowser_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_textbrowser_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_textbrowser_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_textbrowser_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_textbrowser_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_textbrowser_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_textbrowser_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_textbrowser_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_textbrowser_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_textbrowser_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_textbrowser_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_textbrowser_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_textbrowser_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_textbrowser_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_textbrowser_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

QVariant* q_textbrowser_input_method_query(void* self, int64_t property) {
    return QTextBrowser_InputMethodQuery((QTextBrowser*)self, property);
}

QVariant* q_textbrowser_qbase_input_method_query(void* self, int64_t property) {
    return QTextBrowser_QBaseInputMethodQuery((QTextBrowser*)self, property);
}

void q_textbrowser_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTextBrowser_OnInputMethodQuery((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_timer_event(void* self, void* e) {
    QTextBrowser_TimerEvent((QTextBrowser*)self, (QTimerEvent*)e);
}

void q_textbrowser_qbase_timer_event(void* self, void* e) {
    QTextBrowser_QBaseTimerEvent((QTextBrowser*)self, (QTimerEvent*)e);
}

void q_textbrowser_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnTimerEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_key_release_event(void* self, void* e) {
    QTextBrowser_KeyReleaseEvent((QTextBrowser*)self, (QKeyEvent*)e);
}

void q_textbrowser_qbase_key_release_event(void* self, void* e) {
    QTextBrowser_QBaseKeyReleaseEvent((QTextBrowser*)self, (QKeyEvent*)e);
}

void q_textbrowser_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnKeyReleaseEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_resize_event(void* self, void* e) {
    QTextBrowser_ResizeEvent((QTextBrowser*)self, (QResizeEvent*)e);
}

void q_textbrowser_qbase_resize_event(void* self, void* e) {
    QTextBrowser_QBaseResizeEvent((QTextBrowser*)self, (QResizeEvent*)e);
}

void q_textbrowser_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnResizeEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_mouse_double_click_event(void* self, void* e) {
    QTextBrowser_MouseDoubleClickEvent((QTextBrowser*)self, (QMouseEvent*)e);
}

void q_textbrowser_qbase_mouse_double_click_event(void* self, void* e) {
    QTextBrowser_QBaseMouseDoubleClickEvent((QTextBrowser*)self, (QMouseEvent*)e);
}

void q_textbrowser_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnMouseDoubleClickEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_context_menu_event(void* self, void* e) {
    QTextBrowser_ContextMenuEvent((QTextBrowser*)self, (QContextMenuEvent*)e);
}

void q_textbrowser_qbase_context_menu_event(void* self, void* e) {
    QTextBrowser_QBaseContextMenuEvent((QTextBrowser*)self, (QContextMenuEvent*)e);
}

void q_textbrowser_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnContextMenuEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_drag_enter_event(void* self, void* e) {
    QTextBrowser_DragEnterEvent((QTextBrowser*)self, (QDragEnterEvent*)e);
}

void q_textbrowser_qbase_drag_enter_event(void* self, void* e) {
    QTextBrowser_QBaseDragEnterEvent((QTextBrowser*)self, (QDragEnterEvent*)e);
}

void q_textbrowser_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDragEnterEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_drag_leave_event(void* self, void* e) {
    QTextBrowser_DragLeaveEvent((QTextBrowser*)self, (QDragLeaveEvent*)e);
}

void q_textbrowser_qbase_drag_leave_event(void* self, void* e) {
    QTextBrowser_QBaseDragLeaveEvent((QTextBrowser*)self, (QDragLeaveEvent*)e);
}

void q_textbrowser_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDragLeaveEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_drag_move_event(void* self, void* e) {
    QTextBrowser_DragMoveEvent((QTextBrowser*)self, (QDragMoveEvent*)e);
}

void q_textbrowser_qbase_drag_move_event(void* self, void* e) {
    QTextBrowser_QBaseDragMoveEvent((QTextBrowser*)self, (QDragMoveEvent*)e);
}

void q_textbrowser_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDragMoveEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_drop_event(void* self, void* e) {
    QTextBrowser_DropEvent((QTextBrowser*)self, (QDropEvent*)e);
}

void q_textbrowser_qbase_drop_event(void* self, void* e) {
    QTextBrowser_QBaseDropEvent((QTextBrowser*)self, (QDropEvent*)e);
}

void q_textbrowser_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDropEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_focus_in_event(void* self, void* e) {
    QTextBrowser_FocusInEvent((QTextBrowser*)self, (QFocusEvent*)e);
}

void q_textbrowser_qbase_focus_in_event(void* self, void* e) {
    QTextBrowser_QBaseFocusInEvent((QTextBrowser*)self, (QFocusEvent*)e);
}

void q_textbrowser_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnFocusInEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_show_event(void* self, void* param1) {
    QTextBrowser_ShowEvent((QTextBrowser*)self, (QShowEvent*)param1);
}

void q_textbrowser_qbase_show_event(void* self, void* param1) {
    QTextBrowser_QBaseShowEvent((QTextBrowser*)self, (QShowEvent*)param1);
}

void q_textbrowser_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnShowEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_change_event(void* self, void* e) {
    QTextBrowser_ChangeEvent((QTextBrowser*)self, (QEvent*)e);
}

void q_textbrowser_qbase_change_event(void* self, void* e) {
    QTextBrowser_QBaseChangeEvent((QTextBrowser*)self, (QEvent*)e);
}

void q_textbrowser_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnChangeEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_wheel_event(void* self, void* e) {
    QTextBrowser_WheelEvent((QTextBrowser*)self, (QWheelEvent*)e);
}

void q_textbrowser_qbase_wheel_event(void* self, void* e) {
    QTextBrowser_QBaseWheelEvent((QTextBrowser*)self, (QWheelEvent*)e);
}

void q_textbrowser_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnWheelEvent((QTextBrowser*)self, (intptr_t)slot);
}

QMimeData* q_textbrowser_create_mime_data_from_selection(void* self) {
    return QTextBrowser_CreateMimeDataFromSelection((QTextBrowser*)self);
}

QMimeData* q_textbrowser_qbase_create_mime_data_from_selection(void* self) {
    return QTextBrowser_QBaseCreateMimeDataFromSelection((QTextBrowser*)self);
}

void q_textbrowser_on_create_mime_data_from_selection(void* self, QMimeData* (*slot)()) {
    QTextBrowser_OnCreateMimeDataFromSelection((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_can_insert_from_mime_data(void* self, void* source) {
    return QTextBrowser_CanInsertFromMimeData((QTextBrowser*)self, (QMimeData*)source);
}

bool q_textbrowser_qbase_can_insert_from_mime_data(void* self, void* source) {
    return QTextBrowser_QBaseCanInsertFromMimeData((QTextBrowser*)self, (QMimeData*)source);
}

void q_textbrowser_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*)) {
    QTextBrowser_OnCanInsertFromMimeData((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_insert_from_mime_data(void* self, void* source) {
    QTextBrowser_InsertFromMimeData((QTextBrowser*)self, (QMimeData*)source);
}

void q_textbrowser_qbase_insert_from_mime_data(void* self, void* source) {
    QTextBrowser_QBaseInsertFromMimeData((QTextBrowser*)self, (QMimeData*)source);
}

void q_textbrowser_on_insert_from_mime_data(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnInsertFromMimeData((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_input_method_event(void* self, void* param1) {
    QTextBrowser_InputMethodEvent((QTextBrowser*)self, (QInputMethodEvent*)param1);
}

void q_textbrowser_qbase_input_method_event(void* self, void* param1) {
    QTextBrowser_QBaseInputMethodEvent((QTextBrowser*)self, (QInputMethodEvent*)param1);
}

void q_textbrowser_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnInputMethodEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_scroll_contents_by(void* self, int dx, int dy) {
    QTextBrowser_ScrollContentsBy((QTextBrowser*)self, dx, dy);
}

void q_textbrowser_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTextBrowser_QBaseScrollContentsBy((QTextBrowser*)self, dx, dy);
}

void q_textbrowser_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QTextBrowser_OnScrollContentsBy((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_do_set_text_cursor(void* self, void* cursor) {
    QTextBrowser_DoSetTextCursor((QTextBrowser*)self, (QTextCursor*)cursor);
}

void q_textbrowser_qbase_do_set_text_cursor(void* self, void* cursor) {
    QTextBrowser_QBaseDoSetTextCursor((QTextBrowser*)self, (QTextCursor*)cursor);
}

void q_textbrowser_on_do_set_text_cursor(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDoSetTextCursor((QTextBrowser*)self, (intptr_t)slot);
}

QSize* q_textbrowser_minimum_size_hint(void* self) {
    return QTextBrowser_MinimumSizeHint((QTextBrowser*)self);
}

QSize* q_textbrowser_qbase_minimum_size_hint(void* self) {
    return QTextBrowser_QBaseMinimumSizeHint((QTextBrowser*)self);
}

void q_textbrowser_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTextBrowser_OnMinimumSizeHint((QTextBrowser*)self, (intptr_t)slot);
}

QSize* q_textbrowser_size_hint(void* self) {
    return QTextBrowser_SizeHint((QTextBrowser*)self);
}

QSize* q_textbrowser_qbase_size_hint(void* self) {
    return QTextBrowser_QBaseSizeHint((QTextBrowser*)self);
}

void q_textbrowser_on_size_hint(void* self, QSize* (*slot)()) {
    QTextBrowser_OnSizeHint((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_setup_viewport(void* self, void* viewport) {
    QTextBrowser_SetupViewport((QTextBrowser*)self, (QWidget*)viewport);
}

void q_textbrowser_qbase_setup_viewport(void* self, void* viewport) {
    QTextBrowser_QBaseSetupViewport((QTextBrowser*)self, (QWidget*)viewport);
}

void q_textbrowser_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnSetupViewport((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_event_filter(void* self, void* param1, void* param2) {
    return QTextBrowser_EventFilter((QTextBrowser*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_textbrowser_qbase_event_filter(void* self, void* param1, void* param2) {
    return QTextBrowser_QBaseEventFilter((QTextBrowser*)self, (QObject*)param1, (QEvent*)param2);
}

void q_textbrowser_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTextBrowser_OnEventFilter((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_viewport_event(void* self, void* param1) {
    return QTextBrowser_ViewportEvent((QTextBrowser*)self, (QEvent*)param1);
}

bool q_textbrowser_qbase_viewport_event(void* self, void* param1) {
    return QTextBrowser_QBaseViewportEvent((QTextBrowser*)self, (QEvent*)param1);
}

void q_textbrowser_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QTextBrowser_OnViewportEvent((QTextBrowser*)self, (intptr_t)slot);
}

QSize* q_textbrowser_viewport_size_hint(void* self) {
    return QTextBrowser_ViewportSizeHint((QTextBrowser*)self);
}

QSize* q_textbrowser_qbase_viewport_size_hint(void* self) {
    return QTextBrowser_QBaseViewportSizeHint((QTextBrowser*)self);
}

void q_textbrowser_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QTextBrowser_OnViewportSizeHint((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_init_style_option(void* self, void* option) {
    QTextBrowser_InitStyleOption((QTextBrowser*)self, (QStyleOptionFrame*)option);
}

void q_textbrowser_qbase_init_style_option(void* self, void* option) {
    QTextBrowser_QBaseInitStyleOption((QTextBrowser*)self, (QStyleOptionFrame*)option);
}

void q_textbrowser_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnInitStyleOption((QTextBrowser*)self, (intptr_t)slot);
}

int32_t q_textbrowser_dev_type(void* self) {
    return QTextBrowser_DevType((QTextBrowser*)self);
}

int32_t q_textbrowser_qbase_dev_type(void* self) {
    return QTextBrowser_QBaseDevType((QTextBrowser*)self);
}

void q_textbrowser_on_dev_type(void* self, int32_t (*slot)()) {
    QTextBrowser_OnDevType((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_set_visible(void* self, bool visible) {
    QTextBrowser_SetVisible((QTextBrowser*)self, visible);
}

void q_textbrowser_qbase_set_visible(void* self, bool visible) {
    QTextBrowser_QBaseSetVisible((QTextBrowser*)self, visible);
}

void q_textbrowser_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTextBrowser_OnSetVisible((QTextBrowser*)self, (intptr_t)slot);
}

int32_t q_textbrowser_height_for_width(void* self, int param1) {
    return QTextBrowser_HeightForWidth((QTextBrowser*)self, param1);
}

int32_t q_textbrowser_qbase_height_for_width(void* self, int param1) {
    return QTextBrowser_QBaseHeightForWidth((QTextBrowser*)self, param1);
}

void q_textbrowser_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTextBrowser_OnHeightForWidth((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_has_height_for_width(void* self) {
    return QTextBrowser_HasHeightForWidth((QTextBrowser*)self);
}

bool q_textbrowser_qbase_has_height_for_width(void* self) {
    return QTextBrowser_QBaseHasHeightForWidth((QTextBrowser*)self);
}

void q_textbrowser_on_has_height_for_width(void* self, bool (*slot)()) {
    QTextBrowser_OnHasHeightForWidth((QTextBrowser*)self, (intptr_t)slot);
}

QPaintEngine* q_textbrowser_paint_engine(void* self) {
    return QTextBrowser_PaintEngine((QTextBrowser*)self);
}

QPaintEngine* q_textbrowser_qbase_paint_engine(void* self) {
    return QTextBrowser_QBasePaintEngine((QTextBrowser*)self);
}

void q_textbrowser_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTextBrowser_OnPaintEngine((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_enter_event(void* self, void* event) {
    QTextBrowser_EnterEvent((QTextBrowser*)self, (QEnterEvent*)event);
}

void q_textbrowser_qbase_enter_event(void* self, void* event) {
    QTextBrowser_QBaseEnterEvent((QTextBrowser*)self, (QEnterEvent*)event);
}

void q_textbrowser_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnEnterEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_leave_event(void* self, void* event) {
    QTextBrowser_LeaveEvent((QTextBrowser*)self, (QEvent*)event);
}

void q_textbrowser_qbase_leave_event(void* self, void* event) {
    QTextBrowser_QBaseLeaveEvent((QTextBrowser*)self, (QEvent*)event);
}

void q_textbrowser_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnLeaveEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_move_event(void* self, void* event) {
    QTextBrowser_MoveEvent((QTextBrowser*)self, (QMoveEvent*)event);
}

void q_textbrowser_qbase_move_event(void* self, void* event) {
    QTextBrowser_QBaseMoveEvent((QTextBrowser*)self, (QMoveEvent*)event);
}

void q_textbrowser_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnMoveEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_close_event(void* self, void* event) {
    QTextBrowser_CloseEvent((QTextBrowser*)self, (QCloseEvent*)event);
}

void q_textbrowser_qbase_close_event(void* self, void* event) {
    QTextBrowser_QBaseCloseEvent((QTextBrowser*)self, (QCloseEvent*)event);
}

void q_textbrowser_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnCloseEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_tablet_event(void* self, void* event) {
    QTextBrowser_TabletEvent((QTextBrowser*)self, (QTabletEvent*)event);
}

void q_textbrowser_qbase_tablet_event(void* self, void* event) {
    QTextBrowser_QBaseTabletEvent((QTextBrowser*)self, (QTabletEvent*)event);
}

void q_textbrowser_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnTabletEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_action_event(void* self, void* event) {
    QTextBrowser_ActionEvent((QTextBrowser*)self, (QActionEvent*)event);
}

void q_textbrowser_qbase_action_event(void* self, void* event) {
    QTextBrowser_QBaseActionEvent((QTextBrowser*)self, (QActionEvent*)event);
}

void q_textbrowser_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnActionEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_hide_event(void* self, void* event) {
    QTextBrowser_HideEvent((QTextBrowser*)self, (QHideEvent*)event);
}

void q_textbrowser_qbase_hide_event(void* self, void* event) {
    QTextBrowser_QBaseHideEvent((QTextBrowser*)self, (QHideEvent*)event);
}

void q_textbrowser_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnHideEvent((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTextBrowser_NativeEvent((QTextBrowser*)self, qstring(eventType), message, result);
}

bool q_textbrowser_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTextBrowser_QBaseNativeEvent((QTextBrowser*)self, qstring(eventType), message, result);
}

void q_textbrowser_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTextBrowser_OnNativeEvent((QTextBrowser*)self, (intptr_t)slot);
}

int32_t q_textbrowser_metric(void* self, int64_t param1) {
    return QTextBrowser_Metric((QTextBrowser*)self, param1);
}

int32_t q_textbrowser_qbase_metric(void* self, int64_t param1) {
    return QTextBrowser_QBaseMetric((QTextBrowser*)self, param1);
}

void q_textbrowser_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTextBrowser_OnMetric((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_init_painter(void* self, void* painter) {
    QTextBrowser_InitPainter((QTextBrowser*)self, (QPainter*)painter);
}

void q_textbrowser_qbase_init_painter(void* self, void* painter) {
    QTextBrowser_QBaseInitPainter((QTextBrowser*)self, (QPainter*)painter);
}

void q_textbrowser_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnInitPainter((QTextBrowser*)self, (intptr_t)slot);
}

QPaintDevice* q_textbrowser_redirected(void* self, void* offset) {
    return QTextBrowser_Redirected((QTextBrowser*)self, (QPoint*)offset);
}

QPaintDevice* q_textbrowser_qbase_redirected(void* self, void* offset) {
    return QTextBrowser_QBaseRedirected((QTextBrowser*)self, (QPoint*)offset);
}

void q_textbrowser_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTextBrowser_OnRedirected((QTextBrowser*)self, (intptr_t)slot);
}

QPainter* q_textbrowser_shared_painter(void* self) {
    return QTextBrowser_SharedPainter((QTextBrowser*)self);
}

QPainter* q_textbrowser_qbase_shared_painter(void* self) {
    return QTextBrowser_QBaseSharedPainter((QTextBrowser*)self);
}

void q_textbrowser_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTextBrowser_OnSharedPainter((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_child_event(void* self, void* event) {
    QTextBrowser_ChildEvent((QTextBrowser*)self, (QChildEvent*)event);
}

void q_textbrowser_qbase_child_event(void* self, void* event) {
    QTextBrowser_QBaseChildEvent((QTextBrowser*)self, (QChildEvent*)event);
}

void q_textbrowser_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnChildEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_custom_event(void* self, void* event) {
    QTextBrowser_CustomEvent((QTextBrowser*)self, (QEvent*)event);
}

void q_textbrowser_qbase_custom_event(void* self, void* event) {
    QTextBrowser_QBaseCustomEvent((QTextBrowser*)self, (QEvent*)event);
}

void q_textbrowser_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnCustomEvent((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_connect_notify(void* self, void* signal) {
    QTextBrowser_ConnectNotify((QTextBrowser*)self, (QMetaMethod*)signal);
}

void q_textbrowser_qbase_connect_notify(void* self, void* signal) {
    QTextBrowser_QBaseConnectNotify((QTextBrowser*)self, (QMetaMethod*)signal);
}

void q_textbrowser_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnConnectNotify((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_disconnect_notify(void* self, void* signal) {
    QTextBrowser_DisconnectNotify((QTextBrowser*)self, (QMetaMethod*)signal);
}

void q_textbrowser_qbase_disconnect_notify(void* self, void* signal) {
    QTextBrowser_QBaseDisconnectNotify((QTextBrowser*)self, (QMetaMethod*)signal);
}

void q_textbrowser_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDisconnectNotify((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_zoom_in_f(void* self, float range) {
    QTextBrowser_ZoomInF((QTextBrowser*)self, range);
}

void q_textbrowser_qbase_zoom_in_f(void* self, float range) {
    QTextBrowser_QBaseZoomInF((QTextBrowser*)self, range);
}

void q_textbrowser_on_zoom_in_f(void* self, void (*slot)(void*, float)) {
    QTextBrowser_OnZoomInF((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTextBrowser_SetViewportMargins((QTextBrowser*)self, left, top, right, bottom);
}

void q_textbrowser_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTextBrowser_QBaseSetViewportMargins((QTextBrowser*)self, left, top, right, bottom);
}

void q_textbrowser_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QTextBrowser_OnSetViewportMargins((QTextBrowser*)self, (intptr_t)slot);
}

QMargins* q_textbrowser_viewport_margins(void* self) {
    return QTextBrowser_ViewportMargins((QTextBrowser*)self);
}

QMargins* q_textbrowser_qbase_viewport_margins(void* self) {
    return QTextBrowser_QBaseViewportMargins((QTextBrowser*)self);
}

void q_textbrowser_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QTextBrowser_OnViewportMargins((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_draw_frame(void* self, void* param1) {
    QTextBrowser_DrawFrame((QTextBrowser*)self, (QPainter*)param1);
}

void q_textbrowser_qbase_draw_frame(void* self, void* param1) {
    QTextBrowser_QBaseDrawFrame((QTextBrowser*)self, (QPainter*)param1);
}

void q_textbrowser_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDrawFrame((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_update_micro_focus(void* self) {
    QTextBrowser_UpdateMicroFocus((QTextBrowser*)self);
}

void q_textbrowser_qbase_update_micro_focus(void* self) {
    QTextBrowser_QBaseUpdateMicroFocus((QTextBrowser*)self);
}

void q_textbrowser_on_update_micro_focus(void* self, void (*slot)()) {
    QTextBrowser_OnUpdateMicroFocus((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_create(void* self) {
    QTextBrowser_Create((QTextBrowser*)self);
}

void q_textbrowser_qbase_create(void* self) {
    QTextBrowser_QBaseCreate((QTextBrowser*)self);
}

void q_textbrowser_on_create(void* self, void (*slot)()) {
    QTextBrowser_OnCreate((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_destroy(void* self) {
    QTextBrowser_Destroy((QTextBrowser*)self);
}

void q_textbrowser_qbase_destroy(void* self) {
    QTextBrowser_QBaseDestroy((QTextBrowser*)self);
}

void q_textbrowser_on_destroy(void* self, void (*slot)()) {
    QTextBrowser_OnDestroy((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_focus_next_child(void* self) {
    return QTextBrowser_FocusNextChild((QTextBrowser*)self);
}

bool q_textbrowser_qbase_focus_next_child(void* self) {
    return QTextBrowser_QBaseFocusNextChild((QTextBrowser*)self);
}

void q_textbrowser_on_focus_next_child(void* self, bool (*slot)()) {
    QTextBrowser_OnFocusNextChild((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_focus_previous_child(void* self) {
    return QTextBrowser_FocusPreviousChild((QTextBrowser*)self);
}

bool q_textbrowser_qbase_focus_previous_child(void* self) {
    return QTextBrowser_QBaseFocusPreviousChild((QTextBrowser*)self);
}

void q_textbrowser_on_focus_previous_child(void* self, bool (*slot)()) {
    QTextBrowser_OnFocusPreviousChild((QTextBrowser*)self, (intptr_t)slot);
}

QObject* q_textbrowser_sender(void* self) {
    return QTextBrowser_Sender((QTextBrowser*)self);
}

QObject* q_textbrowser_qbase_sender(void* self) {
    return QTextBrowser_QBaseSender((QTextBrowser*)self);
}

void q_textbrowser_on_sender(void* self, QObject* (*slot)()) {
    QTextBrowser_OnSender((QTextBrowser*)self, (intptr_t)slot);
}

int32_t q_textbrowser_sender_signal_index(void* self) {
    return QTextBrowser_SenderSignalIndex((QTextBrowser*)self);
}

int32_t q_textbrowser_qbase_sender_signal_index(void* self) {
    return QTextBrowser_QBaseSenderSignalIndex((QTextBrowser*)self);
}

void q_textbrowser_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTextBrowser_OnSenderSignalIndex((QTextBrowser*)self, (intptr_t)slot);
}

int32_t q_textbrowser_receivers(void* self, const char* signal) {
    return QTextBrowser_Receivers((QTextBrowser*)self, signal);
}

int32_t q_textbrowser_qbase_receivers(void* self, const char* signal) {
    return QTextBrowser_QBaseReceivers((QTextBrowser*)self, signal);
}

void q_textbrowser_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTextBrowser_OnReceivers((QTextBrowser*)self, (intptr_t)slot);
}

bool q_textbrowser_is_signal_connected(void* self, void* signal) {
    return QTextBrowser_IsSignalConnected((QTextBrowser*)self, (QMetaMethod*)signal);
}

bool q_textbrowser_qbase_is_signal_connected(void* self, void* signal) {
    return QTextBrowser_QBaseIsSignalConnected((QTextBrowser*)self, (QMetaMethod*)signal);
}

void q_textbrowser_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTextBrowser_OnIsSignalConnected((QTextBrowser*)self, (intptr_t)slot);
}

void q_textbrowser_delete(void* self) {
    QTextBrowser_Delete((QTextBrowser*)(self));
}
