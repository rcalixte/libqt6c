#include "../libqabstractscrollarea.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqframe.hpp"
#include "../libqiodevice.hpp"
#include "../libqimage.hpp"
#include "../libqmargins.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libqsciscintillabase.hpp"
#include "../libqcoreevent.hpp"
#include "libqsciscintilla.hpp"
#include "libqsciscintilla.h"

QsciScintilla* q_sciscintilla_new(void* parent) {
    return QsciScintilla_new((QWidget*)parent);
}

QsciScintilla* q_sciscintilla_new2() {
    return QsciScintilla_new2();
}

const QMetaObject* q_sciscintilla_meta_object(void* self) {
    return QsciScintilla_MetaObject((QsciScintilla*)self);
}

void* q_sciscintilla_metacast(void* self, const char* param1) {
    return QsciScintilla_Metacast((QsciScintilla*)self, param1);
}

int32_t q_sciscintilla_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciScintilla_Metacall((QsciScintilla*)self, param1, param2, param3);
}

void q_sciscintilla_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciScintilla_OnMetacall((QsciScintilla*)self, (intptr_t)slot);
}

int32_t q_sciscintilla_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciScintilla_QBaseMetacall((QsciScintilla*)self, param1, param2, param3);
}

const char* q_sciscintilla_tr(const char* s) {
    libqt_string _str = QsciScintilla_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_sciscintilla_api_context(void* self, int pos, int* context_start, int* last_word_start) {
    libqt_list _arr = QsciScintilla_ApiContext((QsciScintilla*)self, pos, context_start, last_word_start);
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

void q_sciscintilla_on_api_context(void* self, const char** (*slot)(void*, int, int*, int*)) {
    QsciScintilla_OnApiContext((QsciScintilla*)self, (intptr_t)slot);
}

const char** q_sciscintilla_qbase_api_context(void* self, int pos, int* context_start, int* last_word_start) {
    libqt_list _arr = QsciScintilla_QBaseApiContext((QsciScintilla*)self, pos, context_start, last_word_start);
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

void q_sciscintilla_annotate(void* self, int line, const char* text, int style) {
    QsciScintilla_Annotate((QsciScintilla*)self, line, qstring(text), style);
}

void q_sciscintilla_annotate2(void* self, int line, const char* text, void* style) {
    QsciScintilla_Annotate2((QsciScintilla*)self, line, qstring(text), (QsciStyle*)style);
}

void q_sciscintilla_annotate3(void* self, int line, void* text) {
    QsciScintilla_Annotate3((QsciScintilla*)self, line, (QsciStyledText*)text);
}

const char* q_sciscintilla_annotation(void* self, int line) {
    libqt_string _str = QsciScintilla_Annotation((QsciScintilla*)self, line);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_sciscintilla_annotation_display(void* self) {
    return QsciScintilla_AnnotationDisplay((QsciScintilla*)self);
}

void q_sciscintilla_clear_annotations(void* self) {
    QsciScintilla_ClearAnnotations((QsciScintilla*)self);
}

bool q_sciscintilla_auto_completion_case_sensitivity(void* self) {
    return QsciScintilla_AutoCompletionCaseSensitivity((QsciScintilla*)self);
}

bool q_sciscintilla_auto_completion_fillups_enabled(void* self) {
    return QsciScintilla_AutoCompletionFillupsEnabled((QsciScintilla*)self);
}

bool q_sciscintilla_auto_completion_replace_word(void* self) {
    return QsciScintilla_AutoCompletionReplaceWord((QsciScintilla*)self);
}

bool q_sciscintilla_auto_completion_show_single(void* self) {
    return QsciScintilla_AutoCompletionShowSingle((QsciScintilla*)self);
}

int64_t q_sciscintilla_auto_completion_source(void* self) {
    return QsciScintilla_AutoCompletionSource((QsciScintilla*)self);
}

int32_t q_sciscintilla_auto_completion_threshold(void* self) {
    return QsciScintilla_AutoCompletionThreshold((QsciScintilla*)self);
}

int64_t q_sciscintilla_auto_completion_use_single(void* self) {
    return QsciScintilla_AutoCompletionUseSingle((QsciScintilla*)self);
}

bool q_sciscintilla_auto_indent(void* self) {
    return QsciScintilla_AutoIndent((QsciScintilla*)self);
}

bool q_sciscintilla_backspace_unindents(void* self) {
    return QsciScintilla_BackspaceUnindents((QsciScintilla*)self);
}

void q_sciscintilla_begin_undo_action(void* self) {
    QsciScintilla_BeginUndoAction((QsciScintilla*)self);
}

int64_t q_sciscintilla_brace_matching(void* self) {
    return QsciScintilla_BraceMatching((QsciScintilla*)self);
}

char* q_sciscintilla_bytes(void* self, int start, int end) {
    libqt_string _str = QsciScintilla_Bytes((QsciScintilla*)self, start, end);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_sciscintilla_call_tips_position(void* self) {
    return QsciScintilla_CallTipsPosition((QsciScintilla*)self);
}

int64_t q_sciscintilla_call_tips_style(void* self) {
    return QsciScintilla_CallTipsStyle((QsciScintilla*)self);
}

int32_t q_sciscintilla_call_tips_visible(void* self) {
    return QsciScintilla_CallTipsVisible((QsciScintilla*)self);
}

void q_sciscintilla_cancel_find(void* self) {
    QsciScintilla_CancelFind((QsciScintilla*)self);
}

void q_sciscintilla_cancel_list(void* self) {
    QsciScintilla_CancelList((QsciScintilla*)self);
}

bool q_sciscintilla_case_sensitive(void* self) {
    return QsciScintilla_CaseSensitive((QsciScintilla*)self);
}

void q_sciscintilla_clear_folds(void* self) {
    QsciScintilla_ClearFolds((QsciScintilla*)self);
}

void q_sciscintilla_clear_indicator_range(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
    QsciScintilla_ClearIndicatorRange((QsciScintilla*)self, lineFrom, indexFrom, lineTo, indexTo, indicatorNumber);
}

void q_sciscintilla_clear_registered_images(void* self) {
    QsciScintilla_ClearRegisteredImages((QsciScintilla*)self);
}

QColor* q_sciscintilla_color(void* self) {
    return QsciScintilla_Color((QsciScintilla*)self);
}

libqt_list /* of int */ q_sciscintilla_contracted_folds(void* self) {
    libqt_list _arr = QsciScintilla_ContractedFolds((QsciScintilla*)self);
    return _arr;
}

void q_sciscintilla_convert_eols(void* self, int64_t mode) {
    QsciScintilla_ConvertEols((QsciScintilla*)self, mode);
}

QMenu* q_sciscintilla_create_standard_context_menu(void* self) {
    return QsciScintilla_CreateStandardContextMenu((QsciScintilla*)self);
}

QsciDocument* q_sciscintilla_document(void* self) {
    return QsciScintilla_Document((QsciScintilla*)self);
}

void q_sciscintilla_end_undo_action(void* self) {
    QsciScintilla_EndUndoAction((QsciScintilla*)self);
}

QColor* q_sciscintilla_edge_color(void* self) {
    return QsciScintilla_EdgeColor((QsciScintilla*)self);
}

int32_t q_sciscintilla_edge_column(void* self) {
    return QsciScintilla_EdgeColumn((QsciScintilla*)self);
}

int64_t q_sciscintilla_edge_mode(void* self) {
    return QsciScintilla_EdgeMode((QsciScintilla*)self);
}

void q_sciscintilla_set_font(void* self, void* f) {
    QsciScintilla_SetFont((QsciScintilla*)self, (QFont*)f);
}

int64_t q_sciscintilla_eol_mode(void* self) {
    return QsciScintilla_EolMode((QsciScintilla*)self);
}

bool q_sciscintilla_eol_visibility(void* self) {
    return QsciScintilla_EolVisibility((QsciScintilla*)self);
}

int32_t q_sciscintilla_extra_ascent(void* self) {
    return QsciScintilla_ExtraAscent((QsciScintilla*)self);
}

int32_t q_sciscintilla_extra_descent(void* self) {
    return QsciScintilla_ExtraDescent((QsciScintilla*)self);
}

void q_sciscintilla_fill_indicator_range(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber) {
    QsciScintilla_FillIndicatorRange((QsciScintilla*)self, lineFrom, indexFrom, lineTo, indexTo, indicatorNumber);
}

bool q_sciscintilla_find_first(void* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
    return QsciScintilla_FindFirst((QsciScintilla*)self, qstring(expr), re, cs, wo, wrap, forward, line, index, show, posix, cxx11);
}

void q_sciscintilla_on_find_first(void* self, bool (*slot)(void*, const char*, bool, bool, bool, bool, bool, int, int, bool, bool, bool)) {
    QsciScintilla_OnFindFirst((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_qbase_find_first(void* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11) {
    return QsciScintilla_QBaseFindFirst((QsciScintilla*)self, qstring(expr), re, cs, wo, wrap, forward, line, index, show, posix, cxx11);
}

bool q_sciscintilla_find_first_in_selection(void* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
    return QsciScintilla_FindFirstInSelection((QsciScintilla*)self, qstring(expr), re, cs, wo, forward, show, posix, cxx11);
}

void q_sciscintilla_on_find_first_in_selection(void* self, bool (*slot)(void*, const char*, bool, bool, bool, bool, bool, bool, bool)) {
    QsciScintilla_OnFindFirstInSelection((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_qbase_find_first_in_selection(void* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11) {
    return QsciScintilla_QBaseFindFirstInSelection((QsciScintilla*)self, qstring(expr), re, cs, wo, forward, show, posix, cxx11);
}

bool q_sciscintilla_find_next(void* self) {
    return QsciScintilla_FindNext((QsciScintilla*)self);
}

void q_sciscintilla_on_find_next(void* self, bool (*slot)()) {
    QsciScintilla_OnFindNext((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_qbase_find_next(void* self) {
    return QsciScintilla_QBaseFindNext((QsciScintilla*)self);
}

bool q_sciscintilla_find_matching_brace(void* self, int64_t* brace, int64_t* other, int64_t mode) {
    return QsciScintilla_FindMatchingBrace((QsciScintilla*)self, brace, other, mode);
}

int32_t q_sciscintilla_first_visible_line(void* self) {
    return QsciScintilla_FirstVisibleLine((QsciScintilla*)self);
}

int64_t q_sciscintilla_folding(void* self) {
    return QsciScintilla_Folding((QsciScintilla*)self);
}

void q_sciscintilla_get_cursor_position(void* self, int* line, int* index) {
    QsciScintilla_GetCursorPosition((QsciScintilla*)self, line, index);
}

void q_sciscintilla_get_selection(void* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo) {
    QsciScintilla_GetSelection((QsciScintilla*)self, lineFrom, indexFrom, lineTo, indexTo);
}

bool q_sciscintilla_has_selected_text(void* self) {
    return QsciScintilla_HasSelectedText((QsciScintilla*)self);
}

int32_t q_sciscintilla_indentation(void* self, int line) {
    return QsciScintilla_Indentation((QsciScintilla*)self, line);
}

bool q_sciscintilla_indentation_guides(void* self) {
    return QsciScintilla_IndentationGuides((QsciScintilla*)self);
}

bool q_sciscintilla_indentations_use_tabs(void* self) {
    return QsciScintilla_IndentationsUseTabs((QsciScintilla*)self);
}

int32_t q_sciscintilla_indentation_width(void* self) {
    return QsciScintilla_IndentationWidth((QsciScintilla*)self);
}

int32_t q_sciscintilla_indicator_define(void* self, int64_t style) {
    return QsciScintilla_IndicatorDefine((QsciScintilla*)self, style);
}

bool q_sciscintilla_indicator_draw_under(void* self, int indicatorNumber) {
    return QsciScintilla_IndicatorDrawUnder((QsciScintilla*)self, indicatorNumber);
}

bool q_sciscintilla_is_call_tip_active(void* self) {
    return QsciScintilla_IsCallTipActive((QsciScintilla*)self);
}

bool q_sciscintilla_is_list_active(void* self) {
    return QsciScintilla_IsListActive((QsciScintilla*)self);
}

bool q_sciscintilla_is_modified(void* self) {
    return QsciScintilla_IsModified((QsciScintilla*)self);
}

bool q_sciscintilla_is_read_only(void* self) {
    return QsciScintilla_IsReadOnly((QsciScintilla*)self);
}

bool q_sciscintilla_is_redo_available(void* self) {
    return QsciScintilla_IsRedoAvailable((QsciScintilla*)self);
}

bool q_sciscintilla_is_undo_available(void* self) {
    return QsciScintilla_IsUndoAvailable((QsciScintilla*)self);
}

bool q_sciscintilla_is_utf8(void* self) {
    return QsciScintilla_IsUtf8((QsciScintilla*)self);
}

bool q_sciscintilla_is_word_character(void* self, char ch) {
    return QsciScintilla_IsWordCharacter((QsciScintilla*)self, ch);
}

int32_t q_sciscintilla_line_at(void* self, void* point) {
    return QsciScintilla_LineAt((QsciScintilla*)self, (QPoint*)point);
}

void q_sciscintilla_line_index_from_position(void* self, int position, int* line, int* index) {
    QsciScintilla_LineIndexFromPosition((QsciScintilla*)self, position, line, index);
}

int32_t q_sciscintilla_line_length(void* self, int line) {
    return QsciScintilla_LineLength((QsciScintilla*)self, line);
}

int32_t q_sciscintilla_lines(void* self) {
    return QsciScintilla_Lines((QsciScintilla*)self);
}

int32_t q_sciscintilla_length(void* self) {
    return QsciScintilla_Length((QsciScintilla*)self);
}

QsciLexer* q_sciscintilla_lexer(void* self) {
    return QsciScintilla_Lexer((QsciScintilla*)self);
}

QColor* q_sciscintilla_margin_background_color(void* self, int margin) {
    return QsciScintilla_MarginBackgroundColor((QsciScintilla*)self, margin);
}

bool q_sciscintilla_margin_line_numbers(void* self, int margin) {
    return QsciScintilla_MarginLineNumbers((QsciScintilla*)self, margin);
}

int32_t q_sciscintilla_margin_marker_mask(void* self, int margin) {
    return QsciScintilla_MarginMarkerMask((QsciScintilla*)self, margin);
}

int32_t q_sciscintilla_margin_options(void* self) {
    return QsciScintilla_MarginOptions((QsciScintilla*)self);
}

bool q_sciscintilla_margin_sensitivity(void* self, int margin) {
    return QsciScintilla_MarginSensitivity((QsciScintilla*)self, margin);
}

int64_t q_sciscintilla_margin_type(void* self, int margin) {
    return QsciScintilla_MarginType((QsciScintilla*)self, margin);
}

int32_t q_sciscintilla_margin_width(void* self, int margin) {
    return QsciScintilla_MarginWidth((QsciScintilla*)self, margin);
}

int32_t q_sciscintilla_margins(void* self) {
    return QsciScintilla_Margins((QsciScintilla*)self);
}

int32_t q_sciscintilla_marker_define(void* self, int64_t sym) {
    return QsciScintilla_MarkerDefine((QsciScintilla*)self, sym);
}

int32_t q_sciscintilla_marker_define2(void* self, char ch) {
    return QsciScintilla_MarkerDefine2((QsciScintilla*)self, ch);
}

int32_t q_sciscintilla_marker_define3(void* self, void* pm) {
    return QsciScintilla_MarkerDefine3((QsciScintilla*)self, (QPixmap*)pm);
}

int32_t q_sciscintilla_marker_define4(void* self, void* im) {
    return QsciScintilla_MarkerDefine4((QsciScintilla*)self, (QImage*)im);
}

int32_t q_sciscintilla_marker_add(void* self, int linenr, int markerNumber) {
    return QsciScintilla_MarkerAdd((QsciScintilla*)self, linenr, markerNumber);
}

uint32_t q_sciscintilla_markers_at_line(void* self, int linenr) {
    return QsciScintilla_MarkersAtLine((QsciScintilla*)self, linenr);
}

void q_sciscintilla_marker_delete(void* self, int linenr) {
    QsciScintilla_MarkerDelete((QsciScintilla*)self, linenr);
}

void q_sciscintilla_marker_delete_all(void* self) {
    QsciScintilla_MarkerDeleteAll((QsciScintilla*)self);
}

void q_sciscintilla_marker_delete_handle(void* self, int mhandle) {
    QsciScintilla_MarkerDeleteHandle((QsciScintilla*)self, mhandle);
}

int32_t q_sciscintilla_marker_line(void* self, int mhandle) {
    return QsciScintilla_MarkerLine((QsciScintilla*)self, mhandle);
}

int32_t q_sciscintilla_marker_find_next(void* self, int linenr, uint32_t mask) {
    return QsciScintilla_MarkerFindNext((QsciScintilla*)self, linenr, mask);
}

int32_t q_sciscintilla_marker_find_previous(void* self, int linenr, uint32_t mask) {
    return QsciScintilla_MarkerFindPrevious((QsciScintilla*)self, linenr, mask);
}

bool q_sciscintilla_overwrite_mode(void* self) {
    return QsciScintilla_OverwriteMode((QsciScintilla*)self);
}

QColor* q_sciscintilla_paper(void* self) {
    return QsciScintilla_Paper((QsciScintilla*)self);
}

int32_t q_sciscintilla_position_from_line_index(void* self, int line, int index) {
    return QsciScintilla_PositionFromLineIndex((QsciScintilla*)self, line, index);
}

bool q_sciscintilla_read(void* self, void* io) {
    return QsciScintilla_Read((QsciScintilla*)self, (QIODevice*)io);
}

void q_sciscintilla_recolor(void* self, int start, int end) {
    QsciScintilla_Recolor((QsciScintilla*)self, start, end);
}

void q_sciscintilla_on_recolor(void* self, void (*slot)(void*, int, int)) {
    QsciScintilla_OnRecolor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_recolor(void* self, int start, int end) {
    QsciScintilla_QBaseRecolor((QsciScintilla*)self, start, end);
}

void q_sciscintilla_register_image(void* self, int id, void* pm) {
    QsciScintilla_RegisterImage((QsciScintilla*)self, id, (QPixmap*)pm);
}

void q_sciscintilla_register_image2(void* self, int id, void* im) {
    QsciScintilla_RegisterImage2((QsciScintilla*)self, id, (QImage*)im);
}

void q_sciscintilla_replace(void* self, const char* replaceStr) {
    QsciScintilla_Replace((QsciScintilla*)self, qstring(replaceStr));
}

void q_sciscintilla_on_replace(void* self, void (*slot)(void*, const char*)) {
    QsciScintilla_OnReplace((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_replace(void* self, const char* replaceStr) {
    QsciScintilla_QBaseReplace((QsciScintilla*)self, qstring(replaceStr));
}

void q_sciscintilla_reset_fold_margin_colors(void* self) {
    QsciScintilla_ResetFoldMarginColors((QsciScintilla*)self);
}

void q_sciscintilla_reset_hotspot_background_color(void* self) {
    QsciScintilla_ResetHotspotBackgroundColor((QsciScintilla*)self);
}

void q_sciscintilla_reset_hotspot_foreground_color(void* self) {
    QsciScintilla_ResetHotspotForegroundColor((QsciScintilla*)self);
}

int32_t q_sciscintilla_scroll_width(void* self) {
    return QsciScintilla_ScrollWidth((QsciScintilla*)self);
}

bool q_sciscintilla_scroll_width_tracking(void* self) {
    return QsciScintilla_ScrollWidthTracking((QsciScintilla*)self);
}

void q_sciscintilla_set_fold_margin_colors(void* self, void* fore, void* back) {
    QsciScintilla_SetFoldMarginColors((QsciScintilla*)self, (QColor*)fore, (QColor*)back);
}

void q_sciscintilla_set_annotation_display(void* self, int64_t display) {
    QsciScintilla_SetAnnotationDisplay((QsciScintilla*)self, display);
}

void q_sciscintilla_set_auto_completion_fillups_enabled(void* self, bool enabled) {
    QsciScintilla_SetAutoCompletionFillupsEnabled((QsciScintilla*)self, enabled);
}

void q_sciscintilla_set_auto_completion_fillups(void* self, const char* fillups) {
    QsciScintilla_SetAutoCompletionFillups((QsciScintilla*)self, fillups);
}

void q_sciscintilla_set_auto_completion_word_separators(void* self, const char* separators[]) {
    size_t separators_len = libqt_strv_length(separators);
    libqt_string* separators_qstr = malloc(separators_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < separators_len; ++_i) {
        separators_qstr[_i] = qstring(separators[_i]);
    }
    libqt_list separators_list = qlist(separators_qstr, separators_len);
    QsciScintilla_SetAutoCompletionWordSeparators((QsciScintilla*)self, separators_list);
}

void q_sciscintilla_set_call_tips_background_color(void* self, void* col) {
    QsciScintilla_SetCallTipsBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_call_tips_foreground_color(void* self, void* col) {
    QsciScintilla_SetCallTipsForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_call_tips_highlight_color(void* self, void* col) {
    QsciScintilla_SetCallTipsHighlightColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_call_tips_position(void* self, int64_t position) {
    QsciScintilla_SetCallTipsPosition((QsciScintilla*)self, position);
}

void q_sciscintilla_set_call_tips_style(void* self, int64_t style) {
    QsciScintilla_SetCallTipsStyle((QsciScintilla*)self, style);
}

void q_sciscintilla_set_call_tips_visible(void* self, int nr) {
    QsciScintilla_SetCallTipsVisible((QsciScintilla*)self, nr);
}

void q_sciscintilla_set_contracted_folds(void* self, libqt_list folds) {
    QsciScintilla_SetContractedFolds((QsciScintilla*)self, folds);
}

void q_sciscintilla_set_document(void* self, void* document) {
    QsciScintilla_SetDocument((QsciScintilla*)self, (QsciDocument*)document);
}

void q_sciscintilla_add_edge_column(void* self, int colnr, void* col) {
    QsciScintilla_AddEdgeColumn((QsciScintilla*)self, colnr, (QColor*)col);
}

void q_sciscintilla_clear_edge_columns(void* self) {
    QsciScintilla_ClearEdgeColumns((QsciScintilla*)self);
}

void q_sciscintilla_set_edge_color(void* self, void* col) {
    QsciScintilla_SetEdgeColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_edge_column(void* self, int colnr) {
    QsciScintilla_SetEdgeColumn((QsciScintilla*)self, colnr);
}

void q_sciscintilla_set_edge_mode(void* self, int64_t mode) {
    QsciScintilla_SetEdgeMode((QsciScintilla*)self, mode);
}

void q_sciscintilla_set_first_visible_line(void* self, int linenr) {
    QsciScintilla_SetFirstVisibleLine((QsciScintilla*)self, linenr);
}

void q_sciscintilla_set_indicator_draw_under(void* self, bool under) {
    QsciScintilla_SetIndicatorDrawUnder((QsciScintilla*)self, under);
}

void q_sciscintilla_set_indicator_foreground_color(void* self, void* col) {
    QsciScintilla_SetIndicatorForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_indicator_hover_foreground_color(void* self, void* col) {
    QsciScintilla_SetIndicatorHoverForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_indicator_hover_style(void* self, int64_t style) {
    QsciScintilla_SetIndicatorHoverStyle((QsciScintilla*)self, style);
}

void q_sciscintilla_set_indicator_outline_color(void* self, void* col) {
    QsciScintilla_SetIndicatorOutlineColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_margin_background_color(void* self, int margin, void* col) {
    QsciScintilla_SetMarginBackgroundColor((QsciScintilla*)self, margin, (QColor*)col);
}

void q_sciscintilla_set_margin_options(void* self, int options) {
    QsciScintilla_SetMarginOptions((QsciScintilla*)self, options);
}

void q_sciscintilla_set_margin_text(void* self, int line, const char* text, int style) {
    QsciScintilla_SetMarginText((QsciScintilla*)self, line, qstring(text), style);
}

void q_sciscintilla_set_margin_text2(void* self, int line, const char* text, void* style) {
    QsciScintilla_SetMarginText2((QsciScintilla*)self, line, qstring(text), (QsciStyle*)style);
}

void q_sciscintilla_set_margin_text3(void* self, int line, void* text) {
    QsciScintilla_SetMarginText3((QsciScintilla*)self, line, (QsciStyledText*)text);
}

void q_sciscintilla_set_margin_type(void* self, int margin, int64_t typeVal) {
    QsciScintilla_SetMarginType((QsciScintilla*)self, margin, typeVal);
}

void q_sciscintilla_clear_margin_text(void* self) {
    QsciScintilla_ClearMarginText((QsciScintilla*)self);
}

void q_sciscintilla_set_margins(void* self, int margins) {
    QsciScintilla_SetMargins((QsciScintilla*)self, margins);
}

void q_sciscintilla_set_marker_background_color(void* self, void* col) {
    QsciScintilla_SetMarkerBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_marker_foreground_color(void* self, void* col) {
    QsciScintilla_SetMarkerForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_matched_brace_background_color(void* self, void* col) {
    QsciScintilla_SetMatchedBraceBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_matched_brace_foreground_color(void* self, void* col) {
    QsciScintilla_SetMatchedBraceForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_matched_brace_indicator(void* self, int indicatorNumber) {
    QsciScintilla_SetMatchedBraceIndicator((QsciScintilla*)self, indicatorNumber);
}

void q_sciscintilla_reset_matched_brace_indicator(void* self) {
    QsciScintilla_ResetMatchedBraceIndicator((QsciScintilla*)self);
}

void q_sciscintilla_set_scroll_width(void* self, int pixelWidth) {
    QsciScintilla_SetScrollWidth((QsciScintilla*)self, pixelWidth);
}

void q_sciscintilla_set_scroll_width_tracking(void* self, bool enabled) {
    QsciScintilla_SetScrollWidthTracking((QsciScintilla*)self, enabled);
}

void q_sciscintilla_set_tab_draw_mode(void* self, int64_t mode) {
    QsciScintilla_SetTabDrawMode((QsciScintilla*)self, mode);
}

void q_sciscintilla_set_unmatched_brace_background_color(void* self, void* col) {
    QsciScintilla_SetUnmatchedBraceBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_unmatched_brace_foreground_color(void* self, void* col) {
    QsciScintilla_SetUnmatchedBraceForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_unmatched_brace_indicator(void* self, int indicatorNumber) {
    QsciScintilla_SetUnmatchedBraceIndicator((QsciScintilla*)self, indicatorNumber);
}

void q_sciscintilla_reset_unmatched_brace_indicator(void* self) {
    QsciScintilla_ResetUnmatchedBraceIndicator((QsciScintilla*)self);
}

void q_sciscintilla_set_wrap_visual_flags(void* self, int64_t endFlag) {
    QsciScintilla_SetWrapVisualFlags((QsciScintilla*)self, endFlag);
}

const char* q_sciscintilla_selected_text(void* self) {
    libqt_string _str = QsciScintilla_SelectedText((QsciScintilla*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sciscintilla_selection_to_eol(void* self) {
    return QsciScintilla_SelectionToEol((QsciScintilla*)self);
}

void q_sciscintilla_set_hotspot_background_color(void* self, void* col) {
    QsciScintilla_SetHotspotBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_hotspot_foreground_color(void* self, void* col) {
    QsciScintilla_SetHotspotForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_hotspot_underline(void* self, bool enable) {
    QsciScintilla_SetHotspotUnderline((QsciScintilla*)self, enable);
}

void q_sciscintilla_set_hotspot_wrap(void* self, bool enable) {
    QsciScintilla_SetHotspotWrap((QsciScintilla*)self, enable);
}

void q_sciscintilla_set_selection_to_eol(void* self, bool filled) {
    QsciScintilla_SetSelectionToEol((QsciScintilla*)self, filled);
}

void q_sciscintilla_set_extra_ascent(void* self, int extra) {
    QsciScintilla_SetExtraAscent((QsciScintilla*)self, extra);
}

void q_sciscintilla_set_extra_descent(void* self, int extra) {
    QsciScintilla_SetExtraDescent((QsciScintilla*)self, extra);
}

void q_sciscintilla_set_overwrite_mode(void* self, bool overwrite) {
    QsciScintilla_SetOverwriteMode((QsciScintilla*)self, overwrite);
}

void q_sciscintilla_set_whitespace_background_color(void* self, void* col) {
    QsciScintilla_SetWhitespaceBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_whitespace_foreground_color(void* self, void* col) {
    QsciScintilla_SetWhitespaceForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_whitespace_size(void* self, int size) {
    QsciScintilla_SetWhitespaceSize((QsciScintilla*)self, size);
}

void q_sciscintilla_set_wrap_indent_mode(void* self, int64_t mode) {
    QsciScintilla_SetWrapIndentMode((QsciScintilla*)self, mode);
}

void q_sciscintilla_show_user_list(void* self, int id, const char* list[]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = malloc(list_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < list_len; ++_i) {
        list_qstr[_i] = qstring(list[_i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    QsciScintilla_ShowUserList((QsciScintilla*)self, id, list_list);
}

QsciCommandSet* q_sciscintilla_standard_commands(void* self) {
    return QsciScintilla_StandardCommands((QsciScintilla*)self);
}

int64_t q_sciscintilla_tab_draw_mode(void* self) {
    return QsciScintilla_TabDrawMode((QsciScintilla*)self);
}

bool q_sciscintilla_tab_indents(void* self) {
    return QsciScintilla_TabIndents((QsciScintilla*)self);
}

int32_t q_sciscintilla_tab_width(void* self) {
    return QsciScintilla_TabWidth((QsciScintilla*)self);
}

const char* q_sciscintilla_text(void* self) {
    libqt_string _str = QsciScintilla_Text((QsciScintilla*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciscintilla_text2(void* self, int line) {
    libqt_string _str = QsciScintilla_Text2((QsciScintilla*)self, line);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciscintilla_text3(void* self, int start, int end) {
    libqt_string _str = QsciScintilla_Text3((QsciScintilla*)self, start, end);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sciscintilla_text_height(void* self, int linenr) {
    return QsciScintilla_TextHeight((QsciScintilla*)self, linenr);
}

int32_t q_sciscintilla_whitespace_size(void* self) {
    return QsciScintilla_WhitespaceSize((QsciScintilla*)self);
}

int64_t q_sciscintilla_whitespace_visibility(void* self) {
    return QsciScintilla_WhitespaceVisibility((QsciScintilla*)self);
}

const char* q_sciscintilla_word_at_line_index(void* self, int line, int index) {
    libqt_string _str = QsciScintilla_WordAtLineIndex((QsciScintilla*)self, line, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciscintilla_word_at_point(void* self, void* point) {
    libqt_string _str = QsciScintilla_WordAtPoint((QsciScintilla*)self, (QPoint*)point);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciscintilla_word_characters(void* self) {
    return QsciScintilla_WordCharacters((QsciScintilla*)self);
}

int64_t q_sciscintilla_wrap_mode(void* self) {
    return QsciScintilla_WrapMode((QsciScintilla*)self);
}

int64_t q_sciscintilla_wrap_indent_mode(void* self) {
    return QsciScintilla_WrapIndentMode((QsciScintilla*)self);
}

bool q_sciscintilla_write(void* self, void* io) {
    return QsciScintilla_Write((QsciScintilla*)self, (QIODevice*)io);
}

void q_sciscintilla_append(void* self, const char* text) {
    QsciScintilla_Append((QsciScintilla*)self, qstring(text));
}

void q_sciscintilla_on_append(void* self, void (*slot)(void*, const char*)) {
    QsciScintilla_OnAppend((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_append(void* self, const char* text) {
    QsciScintilla_QBaseAppend((QsciScintilla*)self, qstring(text));
}

void q_sciscintilla_auto_complete_from_all(void* self) {
    QsciScintilla_AutoCompleteFromAll((QsciScintilla*)self);
}

void q_sciscintilla_on_auto_complete_from_all(void* self, void (*slot)()) {
    QsciScintilla_OnAutoCompleteFromAll((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_auto_complete_from_all(void* self) {
    QsciScintilla_QBaseAutoCompleteFromAll((QsciScintilla*)self);
}

void q_sciscintilla_auto_complete_from_a_p_is(void* self) {
    QsciScintilla_AutoCompleteFromAPIs((QsciScintilla*)self);
}

void q_sciscintilla_on_auto_complete_from_a_p_is(void* self, void (*slot)()) {
    QsciScintilla_OnAutoCompleteFromAPIs((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_auto_complete_from_a_p_is(void* self) {
    QsciScintilla_QBaseAutoCompleteFromAPIs((QsciScintilla*)self);
}

void q_sciscintilla_auto_complete_from_document(void* self) {
    QsciScintilla_AutoCompleteFromDocument((QsciScintilla*)self);
}

void q_sciscintilla_on_auto_complete_from_document(void* self, void (*slot)()) {
    QsciScintilla_OnAutoCompleteFromDocument((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_auto_complete_from_document(void* self) {
    QsciScintilla_QBaseAutoCompleteFromDocument((QsciScintilla*)self);
}

void q_sciscintilla_call_tip(void* self) {
    QsciScintilla_CallTip((QsciScintilla*)self);
}

void q_sciscintilla_on_call_tip(void* self, void (*slot)()) {
    QsciScintilla_OnCallTip((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_call_tip(void* self) {
    QsciScintilla_QBaseCallTip((QsciScintilla*)self);
}

void q_sciscintilla_clear(void* self) {
    QsciScintilla_Clear((QsciScintilla*)self);
}

void q_sciscintilla_on_clear(void* self, void (*slot)()) {
    QsciScintilla_OnClear((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_clear(void* self) {
    QsciScintilla_QBaseClear((QsciScintilla*)self);
}

void q_sciscintilla_copy(void* self) {
    QsciScintilla_Copy((QsciScintilla*)self);
}

void q_sciscintilla_on_copy(void* self, void (*slot)()) {
    QsciScintilla_OnCopy((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_copy(void* self) {
    QsciScintilla_QBaseCopy((QsciScintilla*)self);
}

void q_sciscintilla_cut(void* self) {
    QsciScintilla_Cut((QsciScintilla*)self);
}

void q_sciscintilla_on_cut(void* self, void (*slot)()) {
    QsciScintilla_OnCut((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_cut(void* self) {
    QsciScintilla_QBaseCut((QsciScintilla*)self);
}

void q_sciscintilla_ensure_cursor_visible(void* self) {
    QsciScintilla_EnsureCursorVisible((QsciScintilla*)self);
}

void q_sciscintilla_on_ensure_cursor_visible(void* self, void (*slot)()) {
    QsciScintilla_OnEnsureCursorVisible((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_ensure_cursor_visible(void* self) {
    QsciScintilla_QBaseEnsureCursorVisible((QsciScintilla*)self);
}

void q_sciscintilla_ensure_line_visible(void* self, int line) {
    QsciScintilla_EnsureLineVisible((QsciScintilla*)self, line);
}

void q_sciscintilla_on_ensure_line_visible(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnEnsureLineVisible((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_ensure_line_visible(void* self, int line) {
    QsciScintilla_QBaseEnsureLineVisible((QsciScintilla*)self, line);
}

void q_sciscintilla_fold_all(void* self, bool children) {
    QsciScintilla_FoldAll((QsciScintilla*)self, children);
}

void q_sciscintilla_on_fold_all(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnFoldAll((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_fold_all(void* self, bool children) {
    QsciScintilla_QBaseFoldAll((QsciScintilla*)self, children);
}

void q_sciscintilla_fold_line(void* self, int line) {
    QsciScintilla_FoldLine((QsciScintilla*)self, line);
}

void q_sciscintilla_on_fold_line(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnFoldLine((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_fold_line(void* self, int line) {
    QsciScintilla_QBaseFoldLine((QsciScintilla*)self, line);
}

void q_sciscintilla_indent(void* self, int line) {
    QsciScintilla_Indent((QsciScintilla*)self, line);
}

void q_sciscintilla_on_indent(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnIndent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_indent(void* self, int line) {
    QsciScintilla_QBaseIndent((QsciScintilla*)self, line);
}

void q_sciscintilla_insert(void* self, const char* text) {
    QsciScintilla_Insert((QsciScintilla*)self, qstring(text));
}

void q_sciscintilla_on_insert(void* self, void (*slot)(void*, const char*)) {
    QsciScintilla_OnInsert((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_insert(void* self, const char* text) {
    QsciScintilla_QBaseInsert((QsciScintilla*)self, qstring(text));
}

void q_sciscintilla_insert_at(void* self, const char* text, int line, int index) {
    QsciScintilla_InsertAt((QsciScintilla*)self, qstring(text), line, index);
}

void q_sciscintilla_on_insert_at(void* self, void (*slot)(void*, const char*, int, int)) {
    QsciScintilla_OnInsertAt((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_insert_at(void* self, const char* text, int line, int index) {
    QsciScintilla_QBaseInsertAt((QsciScintilla*)self, qstring(text), line, index);
}

void q_sciscintilla_move_to_matching_brace(void* self) {
    QsciScintilla_MoveToMatchingBrace((QsciScintilla*)self);
}

void q_sciscintilla_on_move_to_matching_brace(void* self, void (*slot)()) {
    QsciScintilla_OnMoveToMatchingBrace((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_move_to_matching_brace(void* self) {
    QsciScintilla_QBaseMoveToMatchingBrace((QsciScintilla*)self);
}

void q_sciscintilla_paste(void* self) {
    QsciScintilla_Paste((QsciScintilla*)self);
}

void q_sciscintilla_on_paste(void* self, void (*slot)()) {
    QsciScintilla_OnPaste((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_paste(void* self) {
    QsciScintilla_QBasePaste((QsciScintilla*)self);
}

void q_sciscintilla_redo(void* self) {
    QsciScintilla_Redo((QsciScintilla*)self);
}

void q_sciscintilla_on_redo(void* self, void (*slot)()) {
    QsciScintilla_OnRedo((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_redo(void* self) {
    QsciScintilla_QBaseRedo((QsciScintilla*)self);
}

void q_sciscintilla_remove_selected_text(void* self) {
    QsciScintilla_RemoveSelectedText((QsciScintilla*)self);
}

void q_sciscintilla_on_remove_selected_text(void* self, void (*slot)()) {
    QsciScintilla_OnRemoveSelectedText((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_remove_selected_text(void* self) {
    QsciScintilla_QBaseRemoveSelectedText((QsciScintilla*)self);
}

void q_sciscintilla_replace_selected_text(void* self, const char* text) {
    QsciScintilla_ReplaceSelectedText((QsciScintilla*)self, qstring(text));
}

void q_sciscintilla_on_replace_selected_text(void* self, void (*slot)(void*, const char*)) {
    QsciScintilla_OnReplaceSelectedText((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_replace_selected_text(void* self, const char* text) {
    QsciScintilla_QBaseReplaceSelectedText((QsciScintilla*)self, qstring(text));
}

void q_sciscintilla_reset_selection_background_color(void* self) {
    QsciScintilla_ResetSelectionBackgroundColor((QsciScintilla*)self);
}

void q_sciscintilla_on_reset_selection_background_color(void* self, void (*slot)()) {
    QsciScintilla_OnResetSelectionBackgroundColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_reset_selection_background_color(void* self) {
    QsciScintilla_QBaseResetSelectionBackgroundColor((QsciScintilla*)self);
}

void q_sciscintilla_reset_selection_foreground_color(void* self) {
    QsciScintilla_ResetSelectionForegroundColor((QsciScintilla*)self);
}

void q_sciscintilla_on_reset_selection_foreground_color(void* self, void (*slot)()) {
    QsciScintilla_OnResetSelectionForegroundColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_reset_selection_foreground_color(void* self) {
    QsciScintilla_QBaseResetSelectionForegroundColor((QsciScintilla*)self);
}

void q_sciscintilla_select_all(void* self, bool selectVal) {
    QsciScintilla_SelectAll((QsciScintilla*)self, selectVal);
}

void q_sciscintilla_on_select_all(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSelectAll((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_select_all(void* self, bool selectVal) {
    QsciScintilla_QBaseSelectAll((QsciScintilla*)self, selectVal);
}

void q_sciscintilla_select_to_matching_brace(void* self) {
    QsciScintilla_SelectToMatchingBrace((QsciScintilla*)self);
}

void q_sciscintilla_on_select_to_matching_brace(void* self, void (*slot)()) {
    QsciScintilla_OnSelectToMatchingBrace((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_select_to_matching_brace(void* self) {
    QsciScintilla_QBaseSelectToMatchingBrace((QsciScintilla*)self);
}

void q_sciscintilla_set_auto_completion_case_sensitivity(void* self, bool cs) {
    QsciScintilla_SetAutoCompletionCaseSensitivity((QsciScintilla*)self, cs);
}

void q_sciscintilla_on_set_auto_completion_case_sensitivity(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetAutoCompletionCaseSensitivity((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_auto_completion_case_sensitivity(void* self, bool cs) {
    QsciScintilla_QBaseSetAutoCompletionCaseSensitivity((QsciScintilla*)self, cs);
}

void q_sciscintilla_set_auto_completion_replace_word(void* self, bool replace) {
    QsciScintilla_SetAutoCompletionReplaceWord((QsciScintilla*)self, replace);
}

void q_sciscintilla_on_set_auto_completion_replace_word(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetAutoCompletionReplaceWord((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_auto_completion_replace_word(void* self, bool replace) {
    QsciScintilla_QBaseSetAutoCompletionReplaceWord((QsciScintilla*)self, replace);
}

void q_sciscintilla_set_auto_completion_show_single(void* self, bool single) {
    QsciScintilla_SetAutoCompletionShowSingle((QsciScintilla*)self, single);
}

void q_sciscintilla_on_set_auto_completion_show_single(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetAutoCompletionShowSingle((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_auto_completion_show_single(void* self, bool single) {
    QsciScintilla_QBaseSetAutoCompletionShowSingle((QsciScintilla*)self, single);
}

void q_sciscintilla_set_auto_completion_source(void* self, int64_t source) {
    QsciScintilla_SetAutoCompletionSource((QsciScintilla*)self, source);
}

void q_sciscintilla_on_set_auto_completion_source(void* self, void (*slot)(void*, int64_t)) {
    QsciScintilla_OnSetAutoCompletionSource((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_auto_completion_source(void* self, int64_t source) {
    QsciScintilla_QBaseSetAutoCompletionSource((QsciScintilla*)self, source);
}

void q_sciscintilla_set_auto_completion_threshold(void* self, int thresh) {
    QsciScintilla_SetAutoCompletionThreshold((QsciScintilla*)self, thresh);
}

void q_sciscintilla_on_set_auto_completion_threshold(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnSetAutoCompletionThreshold((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_auto_completion_threshold(void* self, int thresh) {
    QsciScintilla_QBaseSetAutoCompletionThreshold((QsciScintilla*)self, thresh);
}

void q_sciscintilla_set_auto_completion_use_single(void* self, int64_t single) {
    QsciScintilla_SetAutoCompletionUseSingle((QsciScintilla*)self, single);
}

void q_sciscintilla_on_set_auto_completion_use_single(void* self, void (*slot)(void*, int64_t)) {
    QsciScintilla_OnSetAutoCompletionUseSingle((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_auto_completion_use_single(void* self, int64_t single) {
    QsciScintilla_QBaseSetAutoCompletionUseSingle((QsciScintilla*)self, single);
}

void q_sciscintilla_set_auto_indent(void* self, bool autoindent) {
    QsciScintilla_SetAutoIndent((QsciScintilla*)self, autoindent);
}

void q_sciscintilla_on_set_auto_indent(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetAutoIndent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_auto_indent(void* self, bool autoindent) {
    QsciScintilla_QBaseSetAutoIndent((QsciScintilla*)self, autoindent);
}

void q_sciscintilla_set_brace_matching(void* self, int64_t bm) {
    QsciScintilla_SetBraceMatching((QsciScintilla*)self, bm);
}

void q_sciscintilla_on_set_brace_matching(void* self, void (*slot)(void*, int64_t)) {
    QsciScintilla_OnSetBraceMatching((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_brace_matching(void* self, int64_t bm) {
    QsciScintilla_QBaseSetBraceMatching((QsciScintilla*)self, bm);
}

void q_sciscintilla_set_backspace_unindents(void* self, bool unindent) {
    QsciScintilla_SetBackspaceUnindents((QsciScintilla*)self, unindent);
}

void q_sciscintilla_on_set_backspace_unindents(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetBackspaceUnindents((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_backspace_unindents(void* self, bool unindent) {
    QsciScintilla_QBaseSetBackspaceUnindents((QsciScintilla*)self, unindent);
}

void q_sciscintilla_set_caret_foreground_color(void* self, void* col) {
    QsciScintilla_SetCaretForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_on_set_caret_foreground_color(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetCaretForegroundColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_caret_foreground_color(void* self, void* col) {
    QsciScintilla_QBaseSetCaretForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_caret_line_background_color(void* self, void* col) {
    QsciScintilla_SetCaretLineBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_on_set_caret_line_background_color(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetCaretLineBackgroundColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_caret_line_background_color(void* self, void* col) {
    QsciScintilla_QBaseSetCaretLineBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_caret_line_frame_width(void* self, int width) {
    QsciScintilla_SetCaretLineFrameWidth((QsciScintilla*)self, width);
}

void q_sciscintilla_on_set_caret_line_frame_width(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnSetCaretLineFrameWidth((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_caret_line_frame_width(void* self, int width) {
    QsciScintilla_QBaseSetCaretLineFrameWidth((QsciScintilla*)self, width);
}

void q_sciscintilla_set_caret_line_visible(void* self, bool enable) {
    QsciScintilla_SetCaretLineVisible((QsciScintilla*)self, enable);
}

void q_sciscintilla_on_set_caret_line_visible(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetCaretLineVisible((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_caret_line_visible(void* self, bool enable) {
    QsciScintilla_QBaseSetCaretLineVisible((QsciScintilla*)self, enable);
}

void q_sciscintilla_set_caret_width(void* self, int width) {
    QsciScintilla_SetCaretWidth((QsciScintilla*)self, width);
}

void q_sciscintilla_on_set_caret_width(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnSetCaretWidth((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_caret_width(void* self, int width) {
    QsciScintilla_QBaseSetCaretWidth((QsciScintilla*)self, width);
}

void q_sciscintilla_set_color(void* self, void* c) {
    QsciScintilla_SetColor((QsciScintilla*)self, (QColor*)c);
}

void q_sciscintilla_on_set_color(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_color(void* self, void* c) {
    QsciScintilla_QBaseSetColor((QsciScintilla*)self, (QColor*)c);
}

void q_sciscintilla_set_cursor_position(void* self, int line, int index) {
    QsciScintilla_SetCursorPosition((QsciScintilla*)self, line, index);
}

void q_sciscintilla_on_set_cursor_position(void* self, void (*slot)(void*, int, int)) {
    QsciScintilla_OnSetCursorPosition((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_cursor_position(void* self, int line, int index) {
    QsciScintilla_QBaseSetCursorPosition((QsciScintilla*)self, line, index);
}

void q_sciscintilla_set_eol_mode(void* self, int64_t mode) {
    QsciScintilla_SetEolMode((QsciScintilla*)self, mode);
}

void q_sciscintilla_on_set_eol_mode(void* self, void (*slot)(void*, int64_t)) {
    QsciScintilla_OnSetEolMode((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_eol_mode(void* self, int64_t mode) {
    QsciScintilla_QBaseSetEolMode((QsciScintilla*)self, mode);
}

void q_sciscintilla_set_eol_visibility(void* self, bool visible) {
    QsciScintilla_SetEolVisibility((QsciScintilla*)self, visible);
}

void q_sciscintilla_on_set_eol_visibility(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetEolVisibility((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_eol_visibility(void* self, bool visible) {
    QsciScintilla_QBaseSetEolVisibility((QsciScintilla*)self, visible);
}

void q_sciscintilla_set_folding(void* self, int64_t fold, int margin) {
    QsciScintilla_SetFolding((QsciScintilla*)self, fold, margin);
}

void q_sciscintilla_on_set_folding(void* self, void (*slot)(void*, int64_t, int)) {
    QsciScintilla_OnSetFolding((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_folding(void* self, int64_t fold, int margin) {
    QsciScintilla_QBaseSetFolding((QsciScintilla*)self, fold, margin);
}

void q_sciscintilla_set_indentation(void* self, int line, int indentation) {
    QsciScintilla_SetIndentation((QsciScintilla*)self, line, indentation);
}

void q_sciscintilla_on_set_indentation(void* self, void (*slot)(void*, int, int)) {
    QsciScintilla_OnSetIndentation((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_indentation(void* self, int line, int indentation) {
    QsciScintilla_QBaseSetIndentation((QsciScintilla*)self, line, indentation);
}

void q_sciscintilla_set_indentation_guides(void* self, bool enable) {
    QsciScintilla_SetIndentationGuides((QsciScintilla*)self, enable);
}

void q_sciscintilla_on_set_indentation_guides(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetIndentationGuides((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_indentation_guides(void* self, bool enable) {
    QsciScintilla_QBaseSetIndentationGuides((QsciScintilla*)self, enable);
}

void q_sciscintilla_set_indentation_guides_background_color(void* self, void* col) {
    QsciScintilla_SetIndentationGuidesBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_on_set_indentation_guides_background_color(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetIndentationGuidesBackgroundColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_indentation_guides_background_color(void* self, void* col) {
    QsciScintilla_QBaseSetIndentationGuidesBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_indentation_guides_foreground_color(void* self, void* col) {
    QsciScintilla_SetIndentationGuidesForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_on_set_indentation_guides_foreground_color(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetIndentationGuidesForegroundColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_indentation_guides_foreground_color(void* self, void* col) {
    QsciScintilla_QBaseSetIndentationGuidesForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_indentations_use_tabs(void* self, bool tabs) {
    QsciScintilla_SetIndentationsUseTabs((QsciScintilla*)self, tabs);
}

void q_sciscintilla_on_set_indentations_use_tabs(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetIndentationsUseTabs((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_indentations_use_tabs(void* self, bool tabs) {
    QsciScintilla_QBaseSetIndentationsUseTabs((QsciScintilla*)self, tabs);
}

void q_sciscintilla_set_indentation_width(void* self, int width) {
    QsciScintilla_SetIndentationWidth((QsciScintilla*)self, width);
}

void q_sciscintilla_on_set_indentation_width(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnSetIndentationWidth((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_indentation_width(void* self, int width) {
    QsciScintilla_QBaseSetIndentationWidth((QsciScintilla*)self, width);
}

void q_sciscintilla_set_lexer(void* self, void* lexer) {
    QsciScintilla_SetLexer((QsciScintilla*)self, (QsciLexer*)lexer);
}

void q_sciscintilla_on_set_lexer(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetLexer((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_lexer(void* self, void* lexer) {
    QsciScintilla_QBaseSetLexer((QsciScintilla*)self, (QsciLexer*)lexer);
}

void q_sciscintilla_set_margins_background_color(void* self, void* col) {
    QsciScintilla_SetMarginsBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_on_set_margins_background_color(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetMarginsBackgroundColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_margins_background_color(void* self, void* col) {
    QsciScintilla_QBaseSetMarginsBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_margins_font(void* self, void* f) {
    QsciScintilla_SetMarginsFont((QsciScintilla*)self, (QFont*)f);
}

void q_sciscintilla_on_set_margins_font(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetMarginsFont((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_margins_font(void* self, void* f) {
    QsciScintilla_QBaseSetMarginsFont((QsciScintilla*)self, (QFont*)f);
}

void q_sciscintilla_set_margins_foreground_color(void* self, void* col) {
    QsciScintilla_SetMarginsForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_on_set_margins_foreground_color(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetMarginsForegroundColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_margins_foreground_color(void* self, void* col) {
    QsciScintilla_QBaseSetMarginsForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_margin_line_numbers(void* self, int margin, bool lnrs) {
    QsciScintilla_SetMarginLineNumbers((QsciScintilla*)self, margin, lnrs);
}

void q_sciscintilla_on_set_margin_line_numbers(void* self, void (*slot)(void*, int, bool)) {
    QsciScintilla_OnSetMarginLineNumbers((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_margin_line_numbers(void* self, int margin, bool lnrs) {
    QsciScintilla_QBaseSetMarginLineNumbers((QsciScintilla*)self, margin, lnrs);
}

void q_sciscintilla_set_margin_marker_mask(void* self, int margin, int mask) {
    QsciScintilla_SetMarginMarkerMask((QsciScintilla*)self, margin, mask);
}

void q_sciscintilla_on_set_margin_marker_mask(void* self, void (*slot)(void*, int, int)) {
    QsciScintilla_OnSetMarginMarkerMask((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_margin_marker_mask(void* self, int margin, int mask) {
    QsciScintilla_QBaseSetMarginMarkerMask((QsciScintilla*)self, margin, mask);
}

void q_sciscintilla_set_margin_sensitivity(void* self, int margin, bool sens) {
    QsciScintilla_SetMarginSensitivity((QsciScintilla*)self, margin, sens);
}

void q_sciscintilla_on_set_margin_sensitivity(void* self, void (*slot)(void*, int, bool)) {
    QsciScintilla_OnSetMarginSensitivity((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_margin_sensitivity(void* self, int margin, bool sens) {
    QsciScintilla_QBaseSetMarginSensitivity((QsciScintilla*)self, margin, sens);
}

void q_sciscintilla_set_margin_width(void* self, int margin, int width) {
    QsciScintilla_SetMarginWidth((QsciScintilla*)self, margin, width);
}

void q_sciscintilla_on_set_margin_width(void* self, void (*slot)(void*, int, int)) {
    QsciScintilla_OnSetMarginWidth((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_margin_width(void* self, int margin, int width) {
    QsciScintilla_QBaseSetMarginWidth((QsciScintilla*)self, margin, width);
}

void q_sciscintilla_set_margin_width2(void* self, int margin, const char* s) {
    QsciScintilla_SetMarginWidth2((QsciScintilla*)self, margin, qstring(s));
}

void q_sciscintilla_on_set_margin_width2(void* self, void (*slot)(void*, int, const char*)) {
    QsciScintilla_OnSetMarginWidth2((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_margin_width2(void* self, int margin, const char* s) {
    QsciScintilla_QBaseSetMarginWidth2((QsciScintilla*)self, margin, qstring(s));
}

void q_sciscintilla_set_modified(void* self, bool m) {
    QsciScintilla_SetModified((QsciScintilla*)self, m);
}

void q_sciscintilla_on_set_modified(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetModified((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_modified(void* self, bool m) {
    QsciScintilla_QBaseSetModified((QsciScintilla*)self, m);
}

void q_sciscintilla_set_paper(void* self, void* c) {
    QsciScintilla_SetPaper((QsciScintilla*)self, (QColor*)c);
}

void q_sciscintilla_on_set_paper(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetPaper((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_paper(void* self, void* c) {
    QsciScintilla_QBaseSetPaper((QsciScintilla*)self, (QColor*)c);
}

void q_sciscintilla_set_read_only(void* self, bool ro) {
    QsciScintilla_SetReadOnly((QsciScintilla*)self, ro);
}

void q_sciscintilla_on_set_read_only(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetReadOnly((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_read_only(void* self, bool ro) {
    QsciScintilla_QBaseSetReadOnly((QsciScintilla*)self, ro);
}

void q_sciscintilla_set_selection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
    QsciScintilla_SetSelection((QsciScintilla*)self, lineFrom, indexFrom, lineTo, indexTo);
}

void q_sciscintilla_on_set_selection(void* self, void (*slot)(void*, int, int, int, int)) {
    QsciScintilla_OnSetSelection((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_selection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo) {
    QsciScintilla_QBaseSetSelection((QsciScintilla*)self, lineFrom, indexFrom, lineTo, indexTo);
}

void q_sciscintilla_set_selection_background_color(void* self, void* col) {
    QsciScintilla_SetSelectionBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_on_set_selection_background_color(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetSelectionBackgroundColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_selection_background_color(void* self, void* col) {
    QsciScintilla_QBaseSetSelectionBackgroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_selection_foreground_color(void* self, void* col) {
    QsciScintilla_SetSelectionForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_on_set_selection_foreground_color(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetSelectionForegroundColor((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_selection_foreground_color(void* self, void* col) {
    QsciScintilla_QBaseSetSelectionForegroundColor((QsciScintilla*)self, (QColor*)col);
}

void q_sciscintilla_set_tab_indents(void* self, bool indent) {
    QsciScintilla_SetTabIndents((QsciScintilla*)self, indent);
}

void q_sciscintilla_on_set_tab_indents(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetTabIndents((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_tab_indents(void* self, bool indent) {
    QsciScintilla_QBaseSetTabIndents((QsciScintilla*)self, indent);
}

void q_sciscintilla_set_tab_width(void* self, int width) {
    QsciScintilla_SetTabWidth((QsciScintilla*)self, width);
}

void q_sciscintilla_on_set_tab_width(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnSetTabWidth((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_tab_width(void* self, int width) {
    QsciScintilla_QBaseSetTabWidth((QsciScintilla*)self, width);
}

void q_sciscintilla_set_text(void* self, const char* text) {
    QsciScintilla_SetText((QsciScintilla*)self, qstring(text));
}

void q_sciscintilla_on_set_text(void* self, void (*slot)(void*, const char*)) {
    QsciScintilla_OnSetText((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_text(void* self, const char* text) {
    QsciScintilla_QBaseSetText((QsciScintilla*)self, qstring(text));
}

void q_sciscintilla_set_utf8(void* self, bool cp) {
    QsciScintilla_SetUtf8((QsciScintilla*)self, cp);
}

void q_sciscintilla_on_set_utf8(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetUtf8((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_utf8(void* self, bool cp) {
    QsciScintilla_QBaseSetUtf8((QsciScintilla*)self, cp);
}

void q_sciscintilla_set_whitespace_visibility(void* self, int64_t mode) {
    QsciScintilla_SetWhitespaceVisibility((QsciScintilla*)self, mode);
}

void q_sciscintilla_on_set_whitespace_visibility(void* self, void (*slot)(void*, int64_t)) {
    QsciScintilla_OnSetWhitespaceVisibility((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_whitespace_visibility(void* self, int64_t mode) {
    QsciScintilla_QBaseSetWhitespaceVisibility((QsciScintilla*)self, mode);
}

void q_sciscintilla_set_wrap_mode(void* self, int64_t mode) {
    QsciScintilla_SetWrapMode((QsciScintilla*)self, mode);
}

void q_sciscintilla_on_set_wrap_mode(void* self, void (*slot)(void*, int64_t)) {
    QsciScintilla_OnSetWrapMode((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_set_wrap_mode(void* self, int64_t mode) {
    QsciScintilla_QBaseSetWrapMode((QsciScintilla*)self, mode);
}

void q_sciscintilla_undo(void* self) {
    QsciScintilla_Undo((QsciScintilla*)self);
}

void q_sciscintilla_on_undo(void* self, void (*slot)()) {
    QsciScintilla_OnUndo((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_undo(void* self) {
    QsciScintilla_QBaseUndo((QsciScintilla*)self);
}

void q_sciscintilla_unindent(void* self, int line) {
    QsciScintilla_Unindent((QsciScintilla*)self, line);
}

void q_sciscintilla_on_unindent(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnUnindent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_unindent(void* self, int line) {
    QsciScintilla_QBaseUnindent((QsciScintilla*)self, line);
}

void q_sciscintilla_zoom_in(void* self, int range) {
    QsciScintilla_ZoomIn((QsciScintilla*)self, range);
}

void q_sciscintilla_on_zoom_in(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnZoomIn((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_zoom_in(void* self, int range) {
    QsciScintilla_QBaseZoomIn((QsciScintilla*)self, range);
}

void q_sciscintilla_zoom_in2(void* self) {
    QsciScintilla_ZoomIn2((QsciScintilla*)self);
}

void q_sciscintilla_on_zoom_in2(void* self, void (*slot)()) {
    QsciScintilla_OnZoomIn2((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_zoom_in2(void* self) {
    QsciScintilla_QBaseZoomIn2((QsciScintilla*)self);
}

void q_sciscintilla_zoom_out(void* self, int range) {
    QsciScintilla_ZoomOut((QsciScintilla*)self, range);
}

void q_sciscintilla_on_zoom_out(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnZoomOut((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_zoom_out(void* self, int range) {
    QsciScintilla_QBaseZoomOut((QsciScintilla*)self, range);
}

void q_sciscintilla_zoom_out2(void* self) {
    QsciScintilla_ZoomOut2((QsciScintilla*)self);
}

void q_sciscintilla_on_zoom_out2(void* self, void (*slot)()) {
    QsciScintilla_OnZoomOut2((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_zoom_out2(void* self) {
    QsciScintilla_QBaseZoomOut2((QsciScintilla*)self);
}

void q_sciscintilla_zoom_to(void* self, int size) {
    QsciScintilla_ZoomTo((QsciScintilla*)self, size);
}

void q_sciscintilla_on_zoom_to(void* self, void (*slot)(void*, int)) {
    QsciScintilla_OnZoomTo((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_zoom_to(void* self, int size) {
    QsciScintilla_QBaseZoomTo((QsciScintilla*)self, size);
}

void q_sciscintilla_cursor_position_changed(void* self, int line, int index) {
    QsciScintilla_CursorPositionChanged((QsciScintilla*)self, line, index);
}

void q_sciscintilla_on_cursor_position_changed(void* self, void (*slot)(void*, int, int)) {
    QsciScintilla_Connect_CursorPositionChanged((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_copy_available(void* self, bool yes) {
    QsciScintilla_CopyAvailable((QsciScintilla*)self, yes);
}

void q_sciscintilla_on_copy_available(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_Connect_CopyAvailable((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_indicator_clicked(void* self, int line, int index, int64_t state) {
    QsciScintilla_IndicatorClicked((QsciScintilla*)self, line, index, state);
}

void q_sciscintilla_on_indicator_clicked(void* self, void (*slot)(void*, int, int, int64_t)) {
    QsciScintilla_Connect_IndicatorClicked((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_indicator_released(void* self, int line, int index, int64_t state) {
    QsciScintilla_IndicatorReleased((QsciScintilla*)self, line, index, state);
}

void q_sciscintilla_on_indicator_released(void* self, void (*slot)(void*, int, int, int64_t)) {
    QsciScintilla_Connect_IndicatorReleased((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_lines_changed(void* self) {
    QsciScintilla_LinesChanged((QsciScintilla*)self);
}

void q_sciscintilla_on_lines_changed(void* self, void (*slot)(void*)) {
    QsciScintilla_Connect_LinesChanged((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_margin_clicked(void* self, int margin, int line, int64_t state) {
    QsciScintilla_MarginClicked((QsciScintilla*)self, margin, line, state);
}

void q_sciscintilla_on_margin_clicked(void* self, void (*slot)(void*, int, int, int64_t)) {
    QsciScintilla_Connect_MarginClicked((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_margin_right_clicked(void* self, int margin, int line, int64_t state) {
    QsciScintilla_MarginRightClicked((QsciScintilla*)self, margin, line, state);
}

void q_sciscintilla_on_margin_right_clicked(void* self, void (*slot)(void*, int, int, int64_t)) {
    QsciScintilla_Connect_MarginRightClicked((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_modification_attempted(void* self) {
    QsciScintilla_ModificationAttempted((QsciScintilla*)self);
}

void q_sciscintilla_on_modification_attempted(void* self, void (*slot)(void*)) {
    QsciScintilla_Connect_ModificationAttempted((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_modification_changed(void* self, bool m) {
    QsciScintilla_ModificationChanged((QsciScintilla*)self, m);
}

void q_sciscintilla_on_modification_changed(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_Connect_ModificationChanged((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_selection_changed(void* self) {
    QsciScintilla_SelectionChanged((QsciScintilla*)self);
}

void q_sciscintilla_on_selection_changed(void* self, void (*slot)(void*)) {
    QsciScintilla_Connect_SelectionChanged((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_text_changed(void* self) {
    QsciScintilla_TextChanged((QsciScintilla*)self);
}

void q_sciscintilla_on_text_changed(void* self, void (*slot)(void*)) {
    QsciScintilla_Connect_TextChanged((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_user_list_activated(void* self, int id, const char* stringVal) {
    QsciScintilla_UserListActivated((QsciScintilla*)self, id, qstring(stringVal));
}

void q_sciscintilla_on_user_list_activated(void* self, void (*slot)(void*, int, const char*)) {
    QsciScintilla_Connect_UserListActivated((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_event(void* self, void* e) {
    return QsciScintilla_Event((QsciScintilla*)self, (QEvent*)e);
}

void q_sciscintilla_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciScintilla_OnEvent((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_qbase_event(void* self, void* e) {
    return QsciScintilla_QBaseEvent((QsciScintilla*)self, (QEvent*)e);
}

void q_sciscintilla_change_event(void* self, void* e) {
    QsciScintilla_ChangeEvent((QsciScintilla*)self, (QEvent*)e);
}

void q_sciscintilla_on_change_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnChangeEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_change_event(void* self, void* e) {
    QsciScintilla_QBaseChangeEvent((QsciScintilla*)self, (QEvent*)e);
}

void q_sciscintilla_context_menu_event(void* self, void* e) {
    QsciScintilla_ContextMenuEvent((QsciScintilla*)self, (QContextMenuEvent*)e);
}

void q_sciscintilla_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnContextMenuEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_context_menu_event(void* self, void* e) {
    QsciScintilla_QBaseContextMenuEvent((QsciScintilla*)self, (QContextMenuEvent*)e);
}

void q_sciscintilla_wheel_event(void* self, void* e) {
    QsciScintilla_WheelEvent((QsciScintilla*)self, (QWheelEvent*)e);
}

void q_sciscintilla_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnWheelEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_qbase_wheel_event(void* self, void* e) {
    QsciScintilla_QBaseWheelEvent((QsciScintilla*)self, (QWheelEvent*)e);
}

const char* q_sciscintilla_tr2(const char* s, const char* c) {
    libqt_string _str = QsciScintilla_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciscintilla_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciScintilla_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_clear_annotations1(void* self, int line) {
    QsciScintilla_ClearAnnotations1((QsciScintilla*)self, line);
}

int32_t q_sciscintilla_indicator_define2(void* self, int64_t style, int indicatorNumber) {
    return QsciScintilla_IndicatorDefine2((QsciScintilla*)self, style, indicatorNumber);
}

int32_t q_sciscintilla_marker_define22(void* self, int64_t sym, int markerNumber) {
    return QsciScintilla_MarkerDefine22((QsciScintilla*)self, sym, markerNumber);
}

int32_t q_sciscintilla_marker_define23(void* self, char ch, int markerNumber) {
    return QsciScintilla_MarkerDefine23((QsciScintilla*)self, ch, markerNumber);
}

int32_t q_sciscintilla_marker_define24(void* self, void* pm, int markerNumber) {
    return QsciScintilla_MarkerDefine24((QsciScintilla*)self, (QPixmap*)pm, markerNumber);
}

int32_t q_sciscintilla_marker_define25(void* self, void* im, int markerNumber) {
    return QsciScintilla_MarkerDefine25((QsciScintilla*)self, (QImage*)im, markerNumber);
}

void q_sciscintilla_marker_delete2(void* self, int linenr, int markerNumber) {
    QsciScintilla_MarkerDelete2((QsciScintilla*)self, linenr, markerNumber);
}

void q_sciscintilla_marker_delete_all1(void* self, int markerNumber) {
    QsciScintilla_MarkerDeleteAll1((QsciScintilla*)self, markerNumber);
}

void q_sciscintilla_set_indicator_draw_under2(void* self, bool under, int indicatorNumber) {
    QsciScintilla_SetIndicatorDrawUnder2((QsciScintilla*)self, under, indicatorNumber);
}

void q_sciscintilla_set_indicator_foreground_color2(void* self, void* col, int indicatorNumber) {
    QsciScintilla_SetIndicatorForegroundColor2((QsciScintilla*)self, (QColor*)col, indicatorNumber);
}

void q_sciscintilla_set_indicator_hover_foreground_color2(void* self, void* col, int indicatorNumber) {
    QsciScintilla_SetIndicatorHoverForegroundColor2((QsciScintilla*)self, (QColor*)col, indicatorNumber);
}

void q_sciscintilla_set_indicator_hover_style2(void* self, int64_t style, int indicatorNumber) {
    QsciScintilla_SetIndicatorHoverStyle2((QsciScintilla*)self, style, indicatorNumber);
}

void q_sciscintilla_set_indicator_outline_color2(void* self, void* col, int indicatorNumber) {
    QsciScintilla_SetIndicatorOutlineColor2((QsciScintilla*)self, (QColor*)col, indicatorNumber);
}

void q_sciscintilla_clear_margin_text1(void* self, int line) {
    QsciScintilla_ClearMarginText1((QsciScintilla*)self, line);
}

void q_sciscintilla_set_marker_background_color2(void* self, void* col, int markerNumber) {
    QsciScintilla_SetMarkerBackgroundColor2((QsciScintilla*)self, (QColor*)col, markerNumber);
}

void q_sciscintilla_set_marker_foreground_color2(void* self, void* col, int markerNumber) {
    QsciScintilla_SetMarkerForegroundColor2((QsciScintilla*)self, (QColor*)col, markerNumber);
}

void q_sciscintilla_set_wrap_visual_flags2(void* self, int64_t endFlag, int64_t startFlag) {
    QsciScintilla_SetWrapVisualFlags2((QsciScintilla*)self, endFlag, startFlag);
}

void q_sciscintilla_set_wrap_visual_flags3(void* self, int64_t endFlag, int64_t startFlag, int indent) {
    QsciScintilla_SetWrapVisualFlags3((QsciScintilla*)self, endFlag, startFlag, indent);
}

QsciScintillaBase* q_sciscintilla_pool() {
    return QsciScintillaBase_Pool();
}

void q_sciscintilla_replace_horizontal_scroll_bar(void* self, void* scrollBar) {
    QsciScintillaBase_ReplaceHorizontalScrollBar((QsciScintillaBase*)self, (QScrollBar*)scrollBar);
}

void q_sciscintilla_replace_vertical_scroll_bar(void* self, void* scrollBar) {
    QsciScintillaBase_ReplaceVerticalScrollBar((QsciScintillaBase*)self, (QScrollBar*)scrollBar);
}

int64_t q_sciscintilla_send_scintilla(void* self, uint32_t msg) {
    return QsciScintillaBase_SendScintilla((QsciScintillaBase*)self, msg);
}

int64_t q_sciscintilla_send_scintilla2(void* self, uint32_t msg, uint64_t wParam, void* lParam) {
    return QsciScintillaBase_SendScintilla2((QsciScintillaBase*)self, msg, wParam, lParam);
}

int64_t q_sciscintilla_send_scintilla3(void* self, uint32_t msg, uintptr_t wParam, const char* lParam) {
    return QsciScintillaBase_SendScintilla3((QsciScintillaBase*)self, msg, wParam, lParam);
}

int64_t q_sciscintilla_send_scintilla4(void* self, uint32_t msg, const char* lParam) {
    return QsciScintillaBase_SendScintilla4((QsciScintillaBase*)self, msg, lParam);
}

int64_t q_sciscintilla_send_scintilla5(void* self, uint32_t msg, const char* wParam, const char* lParam) {
    return QsciScintillaBase_SendScintilla5((QsciScintillaBase*)self, msg, wParam, lParam);
}

int64_t q_sciscintilla_send_scintilla6(void* self, uint32_t msg, int64_t wParam) {
    return QsciScintillaBase_SendScintilla6((QsciScintillaBase*)self, msg, wParam);
}

int64_t q_sciscintilla_send_scintilla7(void* self, uint32_t msg, int wParam) {
    return QsciScintillaBase_SendScintilla7((QsciScintillaBase*)self, msg, wParam);
}

int64_t q_sciscintilla_send_scintilla8(void* self, uint32_t msg, int64_t cpMin, int64_t cpMax, char* lpstrText) {
    return QsciScintillaBase_SendScintilla8((QsciScintillaBase*)self, msg, cpMin, cpMax, lpstrText);
}

int64_t q_sciscintilla_send_scintilla9(void* self, uint32_t msg, uint64_t wParam, void* col) {
    return QsciScintillaBase_SendScintilla9((QsciScintillaBase*)self, msg, wParam, (QColor*)col);
}

int64_t q_sciscintilla_send_scintilla10(void* self, uint32_t msg, void* col) {
    return QsciScintillaBase_SendScintilla10((QsciScintillaBase*)self, msg, (QColor*)col);
}

int64_t q_sciscintilla_send_scintilla11(void* self, uint32_t msg, uint64_t wParam, void* hdc, void* rc, int64_t cpMin, int64_t cpMax) {
    return QsciScintillaBase_SendScintilla11((QsciScintillaBase*)self, msg, wParam, (QPainter*)hdc, (QRect*)rc, cpMin, cpMax);
}

int64_t q_sciscintilla_send_scintilla12(void* self, uint32_t msg, uint64_t wParam, void* lParam) {
    return QsciScintillaBase_SendScintilla12((QsciScintillaBase*)self, msg, wParam, (QPixmap*)lParam);
}

int64_t q_sciscintilla_send_scintilla13(void* self, uint32_t msg, uint64_t wParam, void* lParam) {
    return QsciScintillaBase_SendScintilla13((QsciScintillaBase*)self, msg, wParam, (QImage*)lParam);
}

void* q_sciscintilla_send_scintilla_ptr_result(void* self, uint32_t msg) {
    return QsciScintillaBase_SendScintillaPtrResult((QsciScintillaBase*)self, msg);
}

int32_t q_sciscintilla_command_key(int qt_key, int* modifiers) {
    return QsciScintillaBase_CommandKey(qt_key, modifiers);
}

void q_sciscintilla_q_s_c_n__s_e_l_c_h_a_n_g_e_d(void* self, bool yes) {
    QsciScintillaBase_QSCN_SELCHANGED((QsciScintillaBase*)self, yes);
}

void q_sciscintilla_s_c_n__a_u_t_o_c_c_a_n_c_e_l_l_e_d(void* self) {
    QsciScintillaBase_SCN_AUTOCCANCELLED((QsciScintillaBase*)self);
}

void q_sciscintilla_s_c_n__a_u_t_o_c_c_h_a_r_d_e_l_e_t_e_d(void* self) {
    QsciScintillaBase_SCN_AUTOCCHARDELETED((QsciScintillaBase*)self);
}

void q_sciscintilla_s_c_n__a_u_t_o_c_c_o_m_p_l_e_t_e_d(void* self, const char* selection, int position, int ch, int method) {
    QsciScintillaBase_SCN_AUTOCCOMPLETED((QsciScintillaBase*)self, selection, position, ch, method);
}

void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int position, int ch, int method) {
    QsciScintillaBase_SCN_AUTOCSELECTION((QsciScintillaBase*)self, selection, position, ch, method);
}

void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int position) {
    QsciScintillaBase_SCN_AUTOCSELECTION2((QsciScintillaBase*)self, selection, position);
}

void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n_c_h_a_n_g_e(void* self, const char* selection, int id, int position) {
    QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE((QsciScintillaBase*)self, selection, id, position);
}

void q_sciscintilla_s_c_e_n__c_h_a_n_g_e(void* self) {
    QsciScintillaBase_SCEN_CHANGE((QsciScintillaBase*)self);
}

void q_sciscintilla_s_c_n__c_a_l_l_t_i_p_c_l_i_c_k(void* self, int direction) {
    QsciScintillaBase_SCN_CALLTIPCLICK((QsciScintillaBase*)self, direction);
}

void q_sciscintilla_s_c_n__c_h_a_r_a_d_d_e_d(void* self, int charadded) {
    QsciScintillaBase_SCN_CHARADDED((QsciScintillaBase*)self, charadded);
}

void q_sciscintilla_s_c_n__d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int line, int modifiers) {
    QsciScintillaBase_SCN_DOUBLECLICK((QsciScintillaBase*)self, position, line, modifiers);
}

void q_sciscintilla_s_c_n__d_w_e_l_l_e_n_d(void* self, int position, int x, int y) {
    QsciScintillaBase_SCN_DWELLEND((QsciScintillaBase*)self, position, x, y);
}

void q_sciscintilla_s_c_n__d_w_e_l_l_s_t_a_r_t(void* self, int position, int x, int y) {
    QsciScintillaBase_SCN_DWELLSTART((QsciScintillaBase*)self, position, x, y);
}

void q_sciscintilla_s_c_n__f_o_c_u_s_i_n(void* self) {
    QsciScintillaBase_SCN_FOCUSIN((QsciScintillaBase*)self);
}

void q_sciscintilla_s_c_n__f_o_c_u_s_o_u_t(void* self) {
    QsciScintillaBase_SCN_FOCUSOUT((QsciScintillaBase*)self);
}

void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_HOTSPOTCLICK((QsciScintillaBase*)self, position, modifiers);
}

void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK((QsciScintillaBase*)self, position, modifiers);
}

void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_r_e_l_e_a_s_e_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_HOTSPOTRELEASECLICK((QsciScintillaBase*)self, position, modifiers);
}

void q_sciscintilla_s_c_n__i_n_d_i_c_a_t_o_r_c_l_i_c_k(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_INDICATORCLICK((QsciScintillaBase*)self, position, modifiers);
}

void q_sciscintilla_s_c_n__i_n_d_i_c_a_t_o_r_r_e_l_e_a_s_e(void* self, int position, int modifiers) {
    QsciScintillaBase_SCN_INDICATORRELEASE((QsciScintillaBase*)self, position, modifiers);
}

void q_sciscintilla_s_c_n__m_a_c_r_o_r_e_c_o_r_d(void* self, uint32_t param1, uint64_t param2, void* param3) {
    QsciScintillaBase_SCN_MACRORECORD((QsciScintillaBase*)self, param1, param2, param3);
}

void q_sciscintilla_s_c_n__m_a_r_g_i_n_c_l_i_c_k(void* self, int position, int modifiers, int margin) {
    QsciScintillaBase_SCN_MARGINCLICK((QsciScintillaBase*)self, position, modifiers, margin);
}

void q_sciscintilla_s_c_n__m_a_r_g_i_n_r_i_g_h_t_c_l_i_c_k(void* self, int position, int modifiers, int margin) {
    QsciScintillaBase_SCN_MARGINRIGHTCLICK((QsciScintillaBase*)self, position, modifiers, margin);
}

void q_sciscintilla_s_c_n__m_o_d_i_f_i_e_d(void* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    QsciScintillaBase_SCN_MODIFIED((QsciScintillaBase*)self, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10);
}

void q_sciscintilla_s_c_n__m_o_d_i_f_y_a_t_t_e_m_p_t_r_o(void* self) {
    QsciScintillaBase_SCN_MODIFYATTEMPTRO((QsciScintillaBase*)self);
}

void q_sciscintilla_s_c_n__n_e_e_d_s_h_o_w_n(void* self, int param1, int param2) {
    QsciScintillaBase_SCN_NEEDSHOWN((QsciScintillaBase*)self, param1, param2);
}

void q_sciscintilla_s_c_n__p_a_i_n_t_e_d(void* self) {
    QsciScintillaBase_SCN_PAINTED((QsciScintillaBase*)self);
}

void q_sciscintilla_s_c_n__s_a_v_e_p_o_i_n_t_l_e_f_t(void* self) {
    QsciScintillaBase_SCN_SAVEPOINTLEFT((QsciScintillaBase*)self);
}

void q_sciscintilla_s_c_n__s_a_v_e_p_o_i_n_t_r_e_a_c_h_e_d(void* self) {
    QsciScintillaBase_SCN_SAVEPOINTREACHED((QsciScintillaBase*)self);
}

void q_sciscintilla_s_c_n__s_t_y_l_e_n_e_e_d_e_d(void* self, int position) {
    QsciScintillaBase_SCN_STYLENEEDED((QsciScintillaBase*)self, position);
}

void q_sciscintilla_s_c_n__u_r_i_d_r_o_p_p_e_d(void* self, void* url) {
    QsciScintillaBase_SCN_URIDROPPED((QsciScintillaBase*)self, (QUrl*)url);
}

void q_sciscintilla_s_c_n__u_p_d_a_t_e_u_i(void* self, int updated) {
    QsciScintillaBase_SCN_UPDATEUI((QsciScintillaBase*)self, updated);
}

void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int id, int ch, int method, int position) {
    QsciScintillaBase_SCN_USERLISTSELECTION((QsciScintillaBase*)self, selection, id, ch, method, position);
}

void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int id, int ch, int method) {
    QsciScintillaBase_SCN_USERLISTSELECTION2((QsciScintillaBase*)self, selection, id, ch, method);
}

void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n3(void* self, const char* selection, int id) {
    QsciScintillaBase_SCN_USERLISTSELECTION3((QsciScintillaBase*)self, selection, id);
}

void q_sciscintilla_s_c_n__z_o_o_m(void* self) {
    QsciScintillaBase_SCN_ZOOM((QsciScintillaBase*)self);
}

int64_t q_sciscintilla_send_scintilla22(void* self, uint32_t msg, uint64_t wParam) {
    return QsciScintillaBase_SendScintilla22((QsciScintillaBase*)self, msg, wParam);
}

int64_t q_sciscintilla_send_scintilla32(void* self, uint32_t msg, uint64_t wParam, int64_t lParam) {
    return QsciScintillaBase_SendScintilla32((QsciScintillaBase*)self, msg, wParam, lParam);
}

int64_t q_sciscintilla_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_sciscintilla_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_sciscintilla_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_sciscintilla_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int64_t q_sciscintilla_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_sciscintilla_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_sciscintilla_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_sciscintilla_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_sciscintilla_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_sciscintilla_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_sciscintilla_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_sciscintilla_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_sciscintilla_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_sciscintilla_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_sciscintilla_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int64_t q_sciscintilla_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_sciscintilla_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_sciscintilla_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_sciscintilla_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_sciscintilla_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_sciscintilla_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_sciscintilla_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_sciscintilla_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_sciscintilla_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_sciscintilla_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_sciscintilla_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_sciscintilla_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_sciscintilla_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_sciscintilla_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_sciscintilla_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_sciscintilla_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_sciscintilla_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_sciscintilla_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_sciscintilla_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_sciscintilla_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_sciscintilla_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_sciscintilla_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_sciscintilla_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_sciscintilla_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_sciscintilla_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_sciscintilla_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_sciscintilla_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_sciscintilla_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_sciscintilla_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_sciscintilla_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_sciscintilla_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_sciscintilla_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_sciscintilla_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_sciscintilla_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_sciscintilla_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_sciscintilla_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_sciscintilla_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_sciscintilla_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_sciscintilla_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_sciscintilla_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_sciscintilla_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_sciscintilla_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_sciscintilla_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_sciscintilla_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_sciscintilla_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_sciscintilla_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_sciscintilla_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_sciscintilla_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_sciscintilla_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_sciscintilla_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_sciscintilla_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_sciscintilla_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_sciscintilla_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_sciscintilla_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_sciscintilla_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_sciscintilla_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_sciscintilla_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_sciscintilla_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_sciscintilla_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_sciscintilla_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_sciscintilla_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_sciscintilla_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_sciscintilla_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_sciscintilla_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_sciscintilla_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_sciscintilla_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_sciscintilla_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_sciscintilla_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_sciscintilla_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sciscintilla_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sciscintilla_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sciscintilla_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sciscintilla_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sciscintilla_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sciscintilla_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_sciscintilla_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_sciscintilla_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_sciscintilla_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_sciscintilla_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_sciscintilla_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_sciscintilla_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_sciscintilla_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_sciscintilla_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_sciscintilla_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_sciscintilla_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_sciscintilla_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_sciscintilla_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_sciscintilla_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_sciscintilla_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_sciscintilla_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

QFontMetrics* q_sciscintilla_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_sciscintilla_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_sciscintilla_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_sciscintilla_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_sciscintilla_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_sciscintilla_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_sciscintilla_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_sciscintilla_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_sciscintilla_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_sciscintilla_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_sciscintilla_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_sciscintilla_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_sciscintilla_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_sciscintilla_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_sciscintilla_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_sciscintilla_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_sciscintilla_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_sciscintilla_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_sciscintilla_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_sciscintilla_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_sciscintilla_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_sciscintilla_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_sciscintilla_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_sciscintilla_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciscintilla_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_sciscintilla_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_sciscintilla_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_sciscintilla_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_sciscintilla_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_sciscintilla_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_sciscintilla_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_sciscintilla_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_sciscintilla_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_sciscintilla_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_sciscintilla_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_sciscintilla_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_sciscintilla_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_sciscintilla_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sciscintilla_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_sciscintilla_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_sciscintilla_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_sciscintilla_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_sciscintilla_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_sciscintilla_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_sciscintilla_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_sciscintilla_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_sciscintilla_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_sciscintilla_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_sciscintilla_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_sciscintilla_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_sciscintilla_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_sciscintilla_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_sciscintilla_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_sciscintilla_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_sciscintilla_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_sciscintilla_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_sciscintilla_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_sciscintilla_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_sciscintilla_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_sciscintilla_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_sciscintilla_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_sciscintilla_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_sciscintilla_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_sciscintilla_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_sciscintilla_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_sciscintilla_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_sciscintilla_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_sciscintilla_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_sciscintilla_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_sciscintilla_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_sciscintilla_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_sciscintilla_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_sciscintilla_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_sciscintilla_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_sciscintilla_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_sciscintilla_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_sciscintilla_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_sciscintilla_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_sciscintilla_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_sciscintilla_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_sciscintilla_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_sciscintilla_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_sciscintilla_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_sciscintilla_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_sciscintilla_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_sciscintilla_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_sciscintilla_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_sciscintilla_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_sciscintilla_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_sciscintilla_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_sciscintilla_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_sciscintilla_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_sciscintilla_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_sciscintilla_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_sciscintilla_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_sciscintilla_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_sciscintilla_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_sciscintilla_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_sciscintilla_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_sciscintilla_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_sciscintilla_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sciscintilla_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_sciscintilla_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_sciscintilla_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_sciscintilla_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_sciscintilla_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_sciscintilla_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_sciscintilla_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_sciscintilla_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_sciscintilla_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_sciscintilla_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_sciscintilla_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_sciscintilla_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_sciscintilla_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_sciscintilla_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_sciscintilla_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_sciscintilla_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_sciscintilla_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_sciscintilla_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_sciscintilla_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_sciscintilla_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_sciscintilla_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_sciscintilla_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_sciscintilla_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_sciscintilla_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_sciscintilla_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_sciscintilla_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_sciscintilla_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_sciscintilla_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_sciscintilla_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_sciscintilla_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_sciscintilla_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_sciscintilla_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_sciscintilla_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_sciscintilla_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_sciscintilla_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_sciscintilla_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_sciscintilla_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_sciscintilla_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_sciscintilla_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_sciscintilla_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_sciscintilla_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_sciscintilla_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_sciscintilla_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_sciscintilla_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_sciscintilla_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_sciscintilla_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_sciscintilla_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_sciscintilla_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_sciscintilla_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_sciscintilla_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_sciscintilla_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_sciscintilla_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_sciscintilla_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_sciscintilla_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_sciscintilla_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_sciscintilla_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_sciscintilla_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_sciscintilla_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_sciscintilla_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_sciscintilla_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_sciscintilla_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_sciscintilla_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_sciscintilla_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_sciscintilla_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_sciscintilla_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_sciscintilla_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_sciscintilla_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_sciscintilla_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_sciscintilla_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_sciscintilla_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_sciscintilla_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_sciscintilla_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_sciscintilla_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_sciscintilla_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_sciscintilla_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_sciscintilla_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_sciscintilla_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_sciscintilla_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_sciscintilla_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_sciscintilla_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_sciscintilla_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_sciscintilla_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_sciscintilla_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_sciscintilla_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_sciscintilla_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_sciscintilla_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_sciscintilla_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_sciscintilla_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sciscintilla_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sciscintilla_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sciscintilla_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sciscintilla_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sciscintilla_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sciscintilla_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sciscintilla_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sciscintilla_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sciscintilla_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sciscintilla_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sciscintilla_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sciscintilla_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sciscintilla_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sciscintilla_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sciscintilla_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sciscintilla_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sciscintilla_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sciscintilla_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sciscintilla_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sciscintilla_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sciscintilla_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sciscintilla_dynamic_property_names(void* self) {
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

QBindingStorage* q_sciscintilla_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sciscintilla_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sciscintilla_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sciscintilla_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_sciscintilla_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sciscintilla_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sciscintilla_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sciscintilla_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sciscintilla_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sciscintilla_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_sciscintilla_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_sciscintilla_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sciscintilla_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_sciscintilla_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_sciscintilla_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_sciscintilla_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_sciscintilla_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_sciscintilla_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_sciscintilla_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_sciscintilla_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_sciscintilla_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_sciscintilla_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_sciscintilla_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_sciscintilla_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_sciscintilla_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_sciscintilla_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool q_sciscintilla_can_insert_from_mime_data(void* self, void* source) {
    return QsciScintilla_CanInsertFromMimeData((QsciScintilla*)self, (QMimeData*)source);
}

bool q_sciscintilla_qbase_can_insert_from_mime_data(void* self, void* source) {
    return QsciScintilla_QBaseCanInsertFromMimeData((QsciScintilla*)self, (QMimeData*)source);
}

void q_sciscintilla_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*)) {
    QsciScintilla_OnCanInsertFromMimeData((QsciScintilla*)self, (intptr_t)slot);
}

char* q_sciscintilla_from_mime_data(void* self, void* source, bool* rectangular) {
    libqt_string _str = QsciScintilla_FromMimeData((QsciScintilla*)self, (QMimeData*)source, (bool*)rectangular);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_sciscintilla_qbase_from_mime_data(void* self, void* source, bool* rectangular) {
    libqt_string _str = QsciScintilla_QBaseFromMimeData((QsciScintilla*)self, (QMimeData*)source, (bool*)rectangular);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciscintilla_on_from_mime_data(void* self, char* (*slot)(void*, void*, bool*)) {
    QsciScintilla_OnFromMimeData((QsciScintilla*)self, (intptr_t)slot);
}

QMimeData* q_sciscintilla_to_mime_data(void* self, const char* text, bool rectangular) {
    return QsciScintilla_ToMimeData((QsciScintilla*)self, qstring(text), rectangular);
}

QMimeData* q_sciscintilla_qbase_to_mime_data(void* self, const char* text, bool rectangular) {
    return QsciScintilla_QBaseToMimeData((QsciScintilla*)self, qstring(text), rectangular);
}

void q_sciscintilla_on_to_mime_data(void* self, QMimeData* (*slot)(void*, const char*, bool)) {
    QsciScintilla_OnToMimeData((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_drag_enter_event(void* self, void* e) {
    QsciScintilla_DragEnterEvent((QsciScintilla*)self, (QDragEnterEvent*)e);
}

void q_sciscintilla_qbase_drag_enter_event(void* self, void* e) {
    QsciScintilla_QBaseDragEnterEvent((QsciScintilla*)self, (QDragEnterEvent*)e);
}

void q_sciscintilla_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnDragEnterEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_drag_leave_event(void* self, void* e) {
    QsciScintilla_DragLeaveEvent((QsciScintilla*)self, (QDragLeaveEvent*)e);
}

void q_sciscintilla_qbase_drag_leave_event(void* self, void* e) {
    QsciScintilla_QBaseDragLeaveEvent((QsciScintilla*)self, (QDragLeaveEvent*)e);
}

void q_sciscintilla_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnDragLeaveEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_drag_move_event(void* self, void* e) {
    QsciScintilla_DragMoveEvent((QsciScintilla*)self, (QDragMoveEvent*)e);
}

void q_sciscintilla_qbase_drag_move_event(void* self, void* e) {
    QsciScintilla_QBaseDragMoveEvent((QsciScintilla*)self, (QDragMoveEvent*)e);
}

void q_sciscintilla_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnDragMoveEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_drop_event(void* self, void* e) {
    QsciScintilla_DropEvent((QsciScintilla*)self, (QDropEvent*)e);
}

void q_sciscintilla_qbase_drop_event(void* self, void* e) {
    QsciScintilla_QBaseDropEvent((QsciScintilla*)self, (QDropEvent*)e);
}

void q_sciscintilla_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnDropEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_focus_in_event(void* self, void* e) {
    QsciScintilla_FocusInEvent((QsciScintilla*)self, (QFocusEvent*)e);
}

void q_sciscintilla_qbase_focus_in_event(void* self, void* e) {
    QsciScintilla_QBaseFocusInEvent((QsciScintilla*)self, (QFocusEvent*)e);
}

void q_sciscintilla_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnFocusInEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_focus_out_event(void* self, void* e) {
    QsciScintilla_FocusOutEvent((QsciScintilla*)self, (QFocusEvent*)e);
}

void q_sciscintilla_qbase_focus_out_event(void* self, void* e) {
    QsciScintilla_QBaseFocusOutEvent((QsciScintilla*)self, (QFocusEvent*)e);
}

void q_sciscintilla_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnFocusOutEvent((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_focus_next_prev_child(void* self, bool next) {
    return QsciScintilla_FocusNextPrevChild((QsciScintilla*)self, next);
}

bool q_sciscintilla_qbase_focus_next_prev_child(void* self, bool next) {
    return QsciScintilla_QBaseFocusNextPrevChild((QsciScintilla*)self, next);
}

void q_sciscintilla_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QsciScintilla_OnFocusNextPrevChild((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_key_press_event(void* self, void* e) {
    QsciScintilla_KeyPressEvent((QsciScintilla*)self, (QKeyEvent*)e);
}

void q_sciscintilla_qbase_key_press_event(void* self, void* e) {
    QsciScintilla_QBaseKeyPressEvent((QsciScintilla*)self, (QKeyEvent*)e);
}

void q_sciscintilla_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnKeyPressEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_input_method_event(void* self, void* event) {
    QsciScintilla_InputMethodEvent((QsciScintilla*)self, (QInputMethodEvent*)event);
}

void q_sciscintilla_qbase_input_method_event(void* self, void* event) {
    QsciScintilla_QBaseInputMethodEvent((QsciScintilla*)self, (QInputMethodEvent*)event);
}

void q_sciscintilla_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnInputMethodEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_mouse_double_click_event(void* self, void* e) {
    QsciScintilla_MouseDoubleClickEvent((QsciScintilla*)self, (QMouseEvent*)e);
}

void q_sciscintilla_qbase_mouse_double_click_event(void* self, void* e) {
    QsciScintilla_QBaseMouseDoubleClickEvent((QsciScintilla*)self, (QMouseEvent*)e);
}

void q_sciscintilla_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnMouseDoubleClickEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_mouse_move_event(void* self, void* e) {
    QsciScintilla_MouseMoveEvent((QsciScintilla*)self, (QMouseEvent*)e);
}

void q_sciscintilla_qbase_mouse_move_event(void* self, void* e) {
    QsciScintilla_QBaseMouseMoveEvent((QsciScintilla*)self, (QMouseEvent*)e);
}

void q_sciscintilla_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnMouseMoveEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_mouse_press_event(void* self, void* e) {
    QsciScintilla_MousePressEvent((QsciScintilla*)self, (QMouseEvent*)e);
}

void q_sciscintilla_qbase_mouse_press_event(void* self, void* e) {
    QsciScintilla_QBaseMousePressEvent((QsciScintilla*)self, (QMouseEvent*)e);
}

void q_sciscintilla_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnMousePressEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_mouse_release_event(void* self, void* e) {
    QsciScintilla_MouseReleaseEvent((QsciScintilla*)self, (QMouseEvent*)e);
}

void q_sciscintilla_qbase_mouse_release_event(void* self, void* e) {
    QsciScintilla_QBaseMouseReleaseEvent((QsciScintilla*)self, (QMouseEvent*)e);
}

void q_sciscintilla_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnMouseReleaseEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_paint_event(void* self, void* e) {
    QsciScintilla_PaintEvent((QsciScintilla*)self, (QPaintEvent*)e);
}

void q_sciscintilla_qbase_paint_event(void* self, void* e) {
    QsciScintilla_QBasePaintEvent((QsciScintilla*)self, (QPaintEvent*)e);
}

void q_sciscintilla_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnPaintEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_resize_event(void* self, void* e) {
    QsciScintilla_ResizeEvent((QsciScintilla*)self, (QResizeEvent*)e);
}

void q_sciscintilla_qbase_resize_event(void* self, void* e) {
    QsciScintilla_QBaseResizeEvent((QsciScintilla*)self, (QResizeEvent*)e);
}

void q_sciscintilla_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnResizeEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_scroll_contents_by(void* self, int dx, int dy) {
    QsciScintilla_ScrollContentsBy((QsciScintilla*)self, dx, dy);
}

void q_sciscintilla_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QsciScintilla_QBaseScrollContentsBy((QsciScintilla*)self, dx, dy);
}

void q_sciscintilla_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QsciScintilla_OnScrollContentsBy((QsciScintilla*)self, (intptr_t)slot);
}

QSize* q_sciscintilla_minimum_size_hint(void* self) {
    return QsciScintilla_MinimumSizeHint((QsciScintilla*)self);
}

QSize* q_sciscintilla_qbase_minimum_size_hint(void* self) {
    return QsciScintilla_QBaseMinimumSizeHint((QsciScintilla*)self);
}

void q_sciscintilla_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QsciScintilla_OnMinimumSizeHint((QsciScintilla*)self, (intptr_t)slot);
}

QSize* q_sciscintilla_size_hint(void* self) {
    return QsciScintilla_SizeHint((QsciScintilla*)self);
}

QSize* q_sciscintilla_qbase_size_hint(void* self) {
    return QsciScintilla_QBaseSizeHint((QsciScintilla*)self);
}

void q_sciscintilla_on_size_hint(void* self, QSize* (*slot)()) {
    QsciScintilla_OnSizeHint((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_setup_viewport(void* self, void* viewport) {
    QsciScintilla_SetupViewport((QsciScintilla*)self, (QWidget*)viewport);
}

void q_sciscintilla_qbase_setup_viewport(void* self, void* viewport) {
    QsciScintilla_QBaseSetupViewport((QsciScintilla*)self, (QWidget*)viewport);
}

void q_sciscintilla_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnSetupViewport((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_event_filter(void* self, void* param1, void* param2) {
    return QsciScintilla_EventFilter((QsciScintilla*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_sciscintilla_qbase_event_filter(void* self, void* param1, void* param2) {
    return QsciScintilla_QBaseEventFilter((QsciScintilla*)self, (QObject*)param1, (QEvent*)param2);
}

void q_sciscintilla_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciScintilla_OnEventFilter((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_viewport_event(void* self, void* param1) {
    return QsciScintilla_ViewportEvent((QsciScintilla*)self, (QEvent*)param1);
}

bool q_sciscintilla_qbase_viewport_event(void* self, void* param1) {
    return QsciScintilla_QBaseViewportEvent((QsciScintilla*)self, (QEvent*)param1);
}

void q_sciscintilla_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QsciScintilla_OnViewportEvent((QsciScintilla*)self, (intptr_t)slot);
}

QSize* q_sciscintilla_viewport_size_hint(void* self) {
    return QsciScintilla_ViewportSizeHint((QsciScintilla*)self);
}

QSize* q_sciscintilla_qbase_viewport_size_hint(void* self) {
    return QsciScintilla_QBaseViewportSizeHint((QsciScintilla*)self);
}

void q_sciscintilla_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QsciScintilla_OnViewportSizeHint((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_init_style_option(void* self, void* option) {
    QsciScintilla_InitStyleOption((QsciScintilla*)self, (QStyleOptionFrame*)option);
}

void q_sciscintilla_qbase_init_style_option(void* self, void* option) {
    QsciScintilla_QBaseInitStyleOption((QsciScintilla*)self, (QStyleOptionFrame*)option);
}

void q_sciscintilla_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnInitStyleOption((QsciScintilla*)self, (intptr_t)slot);
}

int32_t q_sciscintilla_dev_type(void* self) {
    return QsciScintilla_DevType((QsciScintilla*)self);
}

int32_t q_sciscintilla_qbase_dev_type(void* self) {
    return QsciScintilla_QBaseDevType((QsciScintilla*)self);
}

void q_sciscintilla_on_dev_type(void* self, int32_t (*slot)()) {
    QsciScintilla_OnDevType((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_set_visible(void* self, bool visible) {
    QsciScintilla_SetVisible((QsciScintilla*)self, visible);
}

void q_sciscintilla_qbase_set_visible(void* self, bool visible) {
    QsciScintilla_QBaseSetVisible((QsciScintilla*)self, visible);
}

void q_sciscintilla_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QsciScintilla_OnSetVisible((QsciScintilla*)self, (intptr_t)slot);
}

int32_t q_sciscintilla_height_for_width(void* self, int param1) {
    return QsciScintilla_HeightForWidth((QsciScintilla*)self, param1);
}

int32_t q_sciscintilla_qbase_height_for_width(void* self, int param1) {
    return QsciScintilla_QBaseHeightForWidth((QsciScintilla*)self, param1);
}

void q_sciscintilla_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QsciScintilla_OnHeightForWidth((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_has_height_for_width(void* self) {
    return QsciScintilla_HasHeightForWidth((QsciScintilla*)self);
}

bool q_sciscintilla_qbase_has_height_for_width(void* self) {
    return QsciScintilla_QBaseHasHeightForWidth((QsciScintilla*)self);
}

void q_sciscintilla_on_has_height_for_width(void* self, bool (*slot)()) {
    QsciScintilla_OnHasHeightForWidth((QsciScintilla*)self, (intptr_t)slot);
}

QPaintEngine* q_sciscintilla_paint_engine(void* self) {
    return QsciScintilla_PaintEngine((QsciScintilla*)self);
}

QPaintEngine* q_sciscintilla_qbase_paint_engine(void* self) {
    return QsciScintilla_QBasePaintEngine((QsciScintilla*)self);
}

void q_sciscintilla_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QsciScintilla_OnPaintEngine((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_key_release_event(void* self, void* event) {
    QsciScintilla_KeyReleaseEvent((QsciScintilla*)self, (QKeyEvent*)event);
}

void q_sciscintilla_qbase_key_release_event(void* self, void* event) {
    QsciScintilla_QBaseKeyReleaseEvent((QsciScintilla*)self, (QKeyEvent*)event);
}

void q_sciscintilla_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnKeyReleaseEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_enter_event(void* self, void* event) {
    QsciScintilla_EnterEvent((QsciScintilla*)self, (QEnterEvent*)event);
}

void q_sciscintilla_qbase_enter_event(void* self, void* event) {
    QsciScintilla_QBaseEnterEvent((QsciScintilla*)self, (QEnterEvent*)event);
}

void q_sciscintilla_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnEnterEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_leave_event(void* self, void* event) {
    QsciScintilla_LeaveEvent((QsciScintilla*)self, (QEvent*)event);
}

void q_sciscintilla_qbase_leave_event(void* self, void* event) {
    QsciScintilla_QBaseLeaveEvent((QsciScintilla*)self, (QEvent*)event);
}

void q_sciscintilla_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnLeaveEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_move_event(void* self, void* event) {
    QsciScintilla_MoveEvent((QsciScintilla*)self, (QMoveEvent*)event);
}

void q_sciscintilla_qbase_move_event(void* self, void* event) {
    QsciScintilla_QBaseMoveEvent((QsciScintilla*)self, (QMoveEvent*)event);
}

void q_sciscintilla_on_move_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnMoveEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_close_event(void* self, void* event) {
    QsciScintilla_CloseEvent((QsciScintilla*)self, (QCloseEvent*)event);
}

void q_sciscintilla_qbase_close_event(void* self, void* event) {
    QsciScintilla_QBaseCloseEvent((QsciScintilla*)self, (QCloseEvent*)event);
}

void q_sciscintilla_on_close_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnCloseEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_tablet_event(void* self, void* event) {
    QsciScintilla_TabletEvent((QsciScintilla*)self, (QTabletEvent*)event);
}

void q_sciscintilla_qbase_tablet_event(void* self, void* event) {
    QsciScintilla_QBaseTabletEvent((QsciScintilla*)self, (QTabletEvent*)event);
}

void q_sciscintilla_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnTabletEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_action_event(void* self, void* event) {
    QsciScintilla_ActionEvent((QsciScintilla*)self, (QActionEvent*)event);
}

void q_sciscintilla_qbase_action_event(void* self, void* event) {
    QsciScintilla_QBaseActionEvent((QsciScintilla*)self, (QActionEvent*)event);
}

void q_sciscintilla_on_action_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnActionEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_show_event(void* self, void* event) {
    QsciScintilla_ShowEvent((QsciScintilla*)self, (QShowEvent*)event);
}

void q_sciscintilla_qbase_show_event(void* self, void* event) {
    QsciScintilla_QBaseShowEvent((QsciScintilla*)self, (QShowEvent*)event);
}

void q_sciscintilla_on_show_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnShowEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_hide_event(void* self, void* event) {
    QsciScintilla_HideEvent((QsciScintilla*)self, (QHideEvent*)event);
}

void q_sciscintilla_qbase_hide_event(void* self, void* event) {
    QsciScintilla_QBaseHideEvent((QsciScintilla*)self, (QHideEvent*)event);
}

void q_sciscintilla_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnHideEvent((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QsciScintilla_NativeEvent((QsciScintilla*)self, qstring(eventType), message, result);
}

bool q_sciscintilla_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QsciScintilla_QBaseNativeEvent((QsciScintilla*)self, qstring(eventType), message, result);
}

void q_sciscintilla_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QsciScintilla_OnNativeEvent((QsciScintilla*)self, (intptr_t)slot);
}

int32_t q_sciscintilla_metric(void* self, int64_t param1) {
    return QsciScintilla_Metric((QsciScintilla*)self, param1);
}

int32_t q_sciscintilla_qbase_metric(void* self, int64_t param1) {
    return QsciScintilla_QBaseMetric((QsciScintilla*)self, param1);
}

void q_sciscintilla_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QsciScintilla_OnMetric((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_init_painter(void* self, void* painter) {
    QsciScintilla_InitPainter((QsciScintilla*)self, (QPainter*)painter);
}

void q_sciscintilla_qbase_init_painter(void* self, void* painter) {
    QsciScintilla_QBaseInitPainter((QsciScintilla*)self, (QPainter*)painter);
}

void q_sciscintilla_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnInitPainter((QsciScintilla*)self, (intptr_t)slot);
}

QPaintDevice* q_sciscintilla_redirected(void* self, void* offset) {
    return QsciScintilla_Redirected((QsciScintilla*)self, (QPoint*)offset);
}

QPaintDevice* q_sciscintilla_qbase_redirected(void* self, void* offset) {
    return QsciScintilla_QBaseRedirected((QsciScintilla*)self, (QPoint*)offset);
}

void q_sciscintilla_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QsciScintilla_OnRedirected((QsciScintilla*)self, (intptr_t)slot);
}

QPainter* q_sciscintilla_shared_painter(void* self) {
    return QsciScintilla_SharedPainter((QsciScintilla*)self);
}

QPainter* q_sciscintilla_qbase_shared_painter(void* self) {
    return QsciScintilla_QBaseSharedPainter((QsciScintilla*)self);
}

void q_sciscintilla_on_shared_painter(void* self, QPainter* (*slot)()) {
    QsciScintilla_OnSharedPainter((QsciScintilla*)self, (intptr_t)slot);
}

QVariant* q_sciscintilla_input_method_query(void* self, int64_t param1) {
    return QsciScintilla_InputMethodQuery((QsciScintilla*)self, param1);
}

QVariant* q_sciscintilla_qbase_input_method_query(void* self, int64_t param1) {
    return QsciScintilla_QBaseInputMethodQuery((QsciScintilla*)self, param1);
}

void q_sciscintilla_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QsciScintilla_OnInputMethodQuery((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_timer_event(void* self, void* event) {
    QsciScintilla_TimerEvent((QsciScintilla*)self, (QTimerEvent*)event);
}

void q_sciscintilla_qbase_timer_event(void* self, void* event) {
    QsciScintilla_QBaseTimerEvent((QsciScintilla*)self, (QTimerEvent*)event);
}

void q_sciscintilla_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnTimerEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_child_event(void* self, void* event) {
    QsciScintilla_ChildEvent((QsciScintilla*)self, (QChildEvent*)event);
}

void q_sciscintilla_qbase_child_event(void* self, void* event) {
    QsciScintilla_QBaseChildEvent((QsciScintilla*)self, (QChildEvent*)event);
}

void q_sciscintilla_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnChildEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_custom_event(void* self, void* event) {
    QsciScintilla_CustomEvent((QsciScintilla*)self, (QEvent*)event);
}

void q_sciscintilla_qbase_custom_event(void* self, void* event) {
    QsciScintilla_QBaseCustomEvent((QsciScintilla*)self, (QEvent*)event);
}

void q_sciscintilla_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnCustomEvent((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_connect_notify(void* self, void* signal) {
    QsciScintilla_ConnectNotify((QsciScintilla*)self, (QMetaMethod*)signal);
}

void q_sciscintilla_qbase_connect_notify(void* self, void* signal) {
    QsciScintilla_QBaseConnectNotify((QsciScintilla*)self, (QMetaMethod*)signal);
}

void q_sciscintilla_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnConnectNotify((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_disconnect_notify(void* self, void* signal) {
    QsciScintilla_DisconnectNotify((QsciScintilla*)self, (QMetaMethod*)signal);
}

void q_sciscintilla_qbase_disconnect_notify(void* self, void* signal) {
    QsciScintilla_QBaseDisconnectNotify((QsciScintilla*)self, (QMetaMethod*)signal);
}

void q_sciscintilla_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnDisconnectNotify((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_set_scroll_bars(void* self) {
    QsciScintilla_SetScrollBars((QsciScintilla*)self);
}

void q_sciscintilla_qbase_set_scroll_bars(void* self) {
    QsciScintilla_QBaseSetScrollBars((QsciScintilla*)self);
}

void q_sciscintilla_on_set_scroll_bars(void* self, void (*slot)()) {
    QsciScintilla_OnSetScrollBars((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_context_menu_needed(void* self, int x, int y) {
    return QsciScintilla_ContextMenuNeeded((QsciScintilla*)self, x, y);
}

bool q_sciscintilla_qbase_context_menu_needed(void* self, int x, int y) {
    return QsciScintilla_QBaseContextMenuNeeded((QsciScintilla*)self, x, y);
}

void q_sciscintilla_on_context_menu_needed(void* self, bool (*slot)(void*, int, int)) {
    QsciScintilla_OnContextMenuNeeded((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QsciScintilla_SetViewportMargins((QsciScintilla*)self, left, top, right, bottom);
}

void q_sciscintilla_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QsciScintilla_QBaseSetViewportMargins((QsciScintilla*)self, left, top, right, bottom);
}

void q_sciscintilla_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QsciScintilla_OnSetViewportMargins((QsciScintilla*)self, (intptr_t)slot);
}

QMargins* q_sciscintilla_viewport_margins(void* self) {
    return QsciScintilla_ViewportMargins((QsciScintilla*)self);
}

QMargins* q_sciscintilla_qbase_viewport_margins(void* self) {
    return QsciScintilla_QBaseViewportMargins((QsciScintilla*)self);
}

void q_sciscintilla_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QsciScintilla_OnViewportMargins((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_draw_frame(void* self, void* param1) {
    QsciScintilla_DrawFrame((QsciScintilla*)self, (QPainter*)param1);
}

void q_sciscintilla_qbase_draw_frame(void* self, void* param1) {
    QsciScintilla_QBaseDrawFrame((QsciScintilla*)self, (QPainter*)param1);
}

void q_sciscintilla_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QsciScintilla_OnDrawFrame((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_update_micro_focus(void* self) {
    QsciScintilla_UpdateMicroFocus((QsciScintilla*)self);
}

void q_sciscintilla_qbase_update_micro_focus(void* self) {
    QsciScintilla_QBaseUpdateMicroFocus((QsciScintilla*)self);
}

void q_sciscintilla_on_update_micro_focus(void* self, void (*slot)()) {
    QsciScintilla_OnUpdateMicroFocus((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_create(void* self) {
    QsciScintilla_Create((QsciScintilla*)self);
}

void q_sciscintilla_qbase_create(void* self) {
    QsciScintilla_QBaseCreate((QsciScintilla*)self);
}

void q_sciscintilla_on_create(void* self, void (*slot)()) {
    QsciScintilla_OnCreate((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_destroy(void* self) {
    QsciScintilla_Destroy((QsciScintilla*)self);
}

void q_sciscintilla_qbase_destroy(void* self) {
    QsciScintilla_QBaseDestroy((QsciScintilla*)self);
}

void q_sciscintilla_on_destroy(void* self, void (*slot)()) {
    QsciScintilla_OnDestroy((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_focus_next_child(void* self) {
    return QsciScintilla_FocusNextChild((QsciScintilla*)self);
}

bool q_sciscintilla_qbase_focus_next_child(void* self) {
    return QsciScintilla_QBaseFocusNextChild((QsciScintilla*)self);
}

void q_sciscintilla_on_focus_next_child(void* self, bool (*slot)()) {
    QsciScintilla_OnFocusNextChild((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_focus_previous_child(void* self) {
    return QsciScintilla_FocusPreviousChild((QsciScintilla*)self);
}

bool q_sciscintilla_qbase_focus_previous_child(void* self) {
    return QsciScintilla_QBaseFocusPreviousChild((QsciScintilla*)self);
}

void q_sciscintilla_on_focus_previous_child(void* self, bool (*slot)()) {
    QsciScintilla_OnFocusPreviousChild((QsciScintilla*)self, (intptr_t)slot);
}

QObject* q_sciscintilla_sender(void* self) {
    return QsciScintilla_Sender((QsciScintilla*)self);
}

QObject* q_sciscintilla_qbase_sender(void* self) {
    return QsciScintilla_QBaseSender((QsciScintilla*)self);
}

void q_sciscintilla_on_sender(void* self, QObject* (*slot)()) {
    QsciScintilla_OnSender((QsciScintilla*)self, (intptr_t)slot);
}

int32_t q_sciscintilla_sender_signal_index(void* self) {
    return QsciScintilla_SenderSignalIndex((QsciScintilla*)self);
}

int32_t q_sciscintilla_qbase_sender_signal_index(void* self) {
    return QsciScintilla_QBaseSenderSignalIndex((QsciScintilla*)self);
}

void q_sciscintilla_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciScintilla_OnSenderSignalIndex((QsciScintilla*)self, (intptr_t)slot);
}

int32_t q_sciscintilla_receivers(void* self, const char* signal) {
    return QsciScintilla_Receivers((QsciScintilla*)self, signal);
}

int32_t q_sciscintilla_qbase_receivers(void* self, const char* signal) {
    return QsciScintilla_QBaseReceivers((QsciScintilla*)self, signal);
}

void q_sciscintilla_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciScintilla_OnReceivers((QsciScintilla*)self, (intptr_t)slot);
}

bool q_sciscintilla_is_signal_connected(void* self, void* signal) {
    return QsciScintilla_IsSignalConnected((QsciScintilla*)self, (QMetaMethod*)signal);
}

bool q_sciscintilla_qbase_is_signal_connected(void* self, void* signal) {
    return QsciScintilla_QBaseIsSignalConnected((QsciScintilla*)self, (QMetaMethod*)signal);
}

void q_sciscintilla_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciScintilla_OnIsSignalConnected((QsciScintilla*)self, (intptr_t)slot);
}

double q_sciscintilla_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QsciScintilla_GetDecodedMetricF((QsciScintilla*)self, metricA, metricB);
}

double q_sciscintilla_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QsciScintilla_QBaseGetDecodedMetricF((QsciScintilla*)self, metricA, metricB);
}

void q_sciscintilla_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QsciScintilla_OnGetDecodedMetricF((QsciScintilla*)self, (intptr_t)slot);
}

void q_sciscintilla_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_sciscintilla_delete(void* self) {
    QsciScintilla_Delete((QsciScintilla*)(self));
}
