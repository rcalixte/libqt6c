#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqplaintextedit.hpp"
#include "../libqpoint.hpp"
#include "../libqregularexpression.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libtexteditfindbarbase.hpp"
#include "libplaintexteditfindbar.hpp"
#include "libplaintexteditfindbar.h"

TextCustomEditor__PlainTextEditFindBar* k_textcustomeditor__plaintexteditfindbar_new(void* view) {
    return TextCustomEditor__PlainTextEditFindBar_new((QPlainTextEdit*)view);
}

TextCustomEditor__PlainTextEditFindBar* k_textcustomeditor__plaintexteditfindbar_new2(void* view, void* parent) {
    return TextCustomEditor__PlainTextEditFindBar_new2((QPlainTextEdit*)view, (QWidget*)parent);
}

const QMetaObject* k_textcustomeditor__plaintexteditfindbar_meta_object(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_MetaObject((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnMetaObject((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

const QMetaObject* k_textcustomeditor__plaintexteditfindbar_super_meta_object(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperMetaObject((TextCustomEditor__PlainTextEditFindBar*)self);
}

void* k_textcustomeditor__plaintexteditfindbar_metacast(void* self, const char* param1) {
    return TextCustomEditor__PlainTextEditFindBar_Metacast((TextCustomEditor__PlainTextEditFindBar*)self, param1);
}

void k_textcustomeditor__plaintexteditfindbar_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextCustomEditor__PlainTextEditFindBar_OnMetacast((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void* k_textcustomeditor__plaintexteditfindbar_super_metacast(void* self, const char* param1) {
    return TextCustomEditor__PlainTextEditFindBar_SuperMetacast((TextCustomEditor__PlainTextEditFindBar*)self, param1);
}

int32_t k_textcustomeditor__plaintexteditfindbar_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__PlainTextEditFindBar_Metacall((TextCustomEditor__PlainTextEditFindBar*)self, param1, param2, param3);
}

void k_textcustomeditor__plaintexteditfindbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnMetacall((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditfindbar_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__PlainTextEditFindBar_SuperMetacall((TextCustomEditor__PlainTextEditFindBar*)self, param1, param2, param3);
}

const char* k_textcustomeditor__plaintexteditfindbar_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__plaintexteditfindbar_view_is_read_only(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_view_is_read_only(void* self, bool (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnViewIsReadOnly((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_super_view_is_read_only(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperViewIsReadOnly((TextCustomEditor__PlainTextEditFindBar*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_document_is_empty(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_document_is_empty(void* self, bool (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnDocumentIsEmpty((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_super_document_is_empty(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperDocumentIsEmpty((TextCustomEditor__PlainTextEditFindBar*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_search_in_document(void* self, const char* text, int32_t searchOptions) {
    return TextCustomEditor__PlainTextEditFindBar_SearchInDocument((TextCustomEditor__PlainTextEditFindBar*)self, qstring(text), searchOptions);
}

void k_textcustomeditor__plaintexteditfindbar_on_search_in_document(void* self, bool (*callback)(void*, const char*, int32_t)) {
    TextCustomEditor__PlainTextEditFindBar_OnSearchInDocument((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_super_search_in_document(void* self, const char* text, int32_t searchOptions) {
    return TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument((TextCustomEditor__PlainTextEditFindBar*)self, qstring(text), searchOptions);
}

bool k_textcustomeditor__plaintexteditfindbar_search_in_document2(void* self, void* regExp, int32_t searchOptions) {
    return TextCustomEditor__PlainTextEditFindBar_SearchInDocument2((TextCustomEditor__PlainTextEditFindBar*)self, (QRegularExpression*)regExp, searchOptions);
}

void k_textcustomeditor__plaintexteditfindbar_on_search_in_document2(void* self, bool (*callback)(void*, void*, int32_t)) {
    TextCustomEditor__PlainTextEditFindBar_OnSearchInDocument2((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_super_search_in_document2(void* self, void* regExp, int32_t searchOptions) {
    return TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument2((TextCustomEditor__PlainTextEditFindBar*)self, (QRegularExpression*)regExp, searchOptions);
}

void k_textcustomeditor__plaintexteditfindbar_auto_search_move_cursor(void* self) {
    TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_auto_search_move_cursor(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnAutoSearchMoveCursor((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_super_auto_search_move_cursor(void* self) {
    TextCustomEditor__PlainTextEditFindBar_SuperAutoSearchMoveCursor((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_slot_search_text(void* self, bool backward, bool isAutoSearch) {
    TextCustomEditor__PlainTextEditFindBar_SlotSearchText((TextCustomEditor__PlainTextEditFindBar*)self, backward, isAutoSearch);
}

void k_textcustomeditor__plaintexteditfindbar_on_slot_search_text(void* self, void (*callback)(void*, bool, bool)) {
    TextCustomEditor__PlainTextEditFindBar_OnSlotSearchText((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_super_slot_search_text(void* self, bool backward, bool isAutoSearch) {
    TextCustomEditor__PlainTextEditFindBar_SuperSlotSearchText((TextCustomEditor__PlainTextEditFindBar*)self, backward, isAutoSearch);
}

const char* k_textcustomeditor__plaintexteditfindbar_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__plaintexteditfindbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__plaintexteditfindbar_text(void* self) {
    libqt_string _str = TextCustomEditor__TextEditFindBarBase_Text((TextCustomEditor__TextEditFindBarBase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditfindbar_set_text(void* self, const char* text) {
    TextCustomEditor__TextEditFindBarBase_SetText((TextCustomEditor__TextEditFindBarBase*)self, qstring(text));
}

void k_textcustomeditor__plaintexteditfindbar_focus_and_set_cursor(void* self) {
    TextCustomEditor__TextEditFindBarBase_FocusAndSetCursor((TextCustomEditor__TextEditFindBarBase*)self);
}

void k_textcustomeditor__plaintexteditfindbar_show_replace(void* self) {
    TextCustomEditor__TextEditFindBarBase_ShowReplace((TextCustomEditor__TextEditFindBarBase*)self);
}

void k_textcustomeditor__plaintexteditfindbar_show_find(void* self) {
    TextCustomEditor__TextEditFindBarBase_ShowFind((TextCustomEditor__TextEditFindBarBase*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_hide_when_close(void* self, bool hide) {
    TextCustomEditor__TextEditFindBarBase_SetHideWhenClose((TextCustomEditor__TextEditFindBarBase*)self, hide);
}

void k_textcustomeditor__plaintexteditfindbar_display_message_indicator(void* self, const char* message) {
    TextCustomEditor__TextEditFindBarBase_DisplayMessageIndicator((TextCustomEditor__TextEditFindBarBase*)self, qstring(message));
}

void k_textcustomeditor__plaintexteditfindbar_on_display_message_indicator(void* self, void (*callback)(void*, const char*)) {
    TextCustomEditor__TextEditFindBarBase_Connect_DisplayMessageIndicator((TextCustomEditor__TextEditFindBarBase*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_hide_find_bar(void* self) {
    TextCustomEditor__TextEditFindBarBase_HideFindBar((TextCustomEditor__TextEditFindBarBase*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_hide_find_bar(void* self, void (*callback)(void*)) {
    TextCustomEditor__TextEditFindBarBase_Connect_HideFindBar((TextCustomEditor__TextEditFindBarBase*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_find_next(void* self) {
    TextCustomEditor__TextEditFindBarBase_FindNext((TextCustomEditor__TextEditFindBarBase*)self);
}

void k_textcustomeditor__plaintexteditfindbar_find_prev(void* self) {
    TextCustomEditor__TextEditFindBarBase_FindPrev((TextCustomEditor__TextEditFindBarBase*)self);
}

void k_textcustomeditor__plaintexteditfindbar_auto_search(void* self, const char* str) {
    TextCustomEditor__TextEditFindBarBase_AutoSearch((TextCustomEditor__TextEditFindBarBase*)self, qstring(str));
}

void k_textcustomeditor__plaintexteditfindbar_close_bar(void* self) {
    TextCustomEditor__TextEditFindBarBase_CloseBar((TextCustomEditor__TextEditFindBarBase*)self);
}

uintptr_t k_textcustomeditor__plaintexteditfindbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textcustomeditor__plaintexteditfindbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textcustomeditor__plaintexteditfindbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textcustomeditor__plaintexteditfindbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textcustomeditor__plaintexteditfindbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textcustomeditor__plaintexteditfindbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textcustomeditor__plaintexteditfindbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textcustomeditor__plaintexteditfindbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textcustomeditor__plaintexteditfindbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textcustomeditor__plaintexteditfindbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textcustomeditor__plaintexteditfindbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textcustomeditor__plaintexteditfindbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textcustomeditor__plaintexteditfindbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textcustomeditor__plaintexteditfindbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textcustomeditor__plaintexteditfindbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textcustomeditor__plaintexteditfindbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textcustomeditor__plaintexteditfindbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textcustomeditor__plaintexteditfindbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textcustomeditor__plaintexteditfindbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textcustomeditor__plaintexteditfindbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textcustomeditor__plaintexteditfindbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textcustomeditor__plaintexteditfindbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textcustomeditor__plaintexteditfindbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textcustomeditor__plaintexteditfindbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textcustomeditor__plaintexteditfindbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textcustomeditor__plaintexteditfindbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textcustomeditor__plaintexteditfindbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textcustomeditor__plaintexteditfindbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textcustomeditor__plaintexteditfindbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textcustomeditor__plaintexteditfindbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textcustomeditor__plaintexteditfindbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textcustomeditor__plaintexteditfindbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textcustomeditor__plaintexteditfindbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textcustomeditor__plaintexteditfindbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textcustomeditor__plaintexteditfindbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__plaintexteditfindbar_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__plaintexteditfindbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__plaintexteditfindbar_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__plaintexteditfindbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__plaintexteditfindbar_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__plaintexteditfindbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__plaintexteditfindbar_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__plaintexteditfindbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textcustomeditor__plaintexteditfindbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textcustomeditor__plaintexteditfindbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textcustomeditor__plaintexteditfindbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textcustomeditor__plaintexteditfindbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textcustomeditor__plaintexteditfindbar_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textcustomeditor__plaintexteditfindbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textcustomeditor__plaintexteditfindbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textcustomeditor__plaintexteditfindbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textcustomeditor__plaintexteditfindbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textcustomeditor__plaintexteditfindbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textcustomeditor__plaintexteditfindbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textcustomeditor__plaintexteditfindbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textcustomeditor__plaintexteditfindbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textcustomeditor__plaintexteditfindbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textcustomeditor__plaintexteditfindbar_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textcustomeditor__plaintexteditfindbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textcustomeditor__plaintexteditfindbar_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textcustomeditor__plaintexteditfindbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textcustomeditor__plaintexteditfindbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textcustomeditor__plaintexteditfindbar_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textcustomeditor__plaintexteditfindbar_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textcustomeditor__plaintexteditfindbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textcustomeditor__plaintexteditfindbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textcustomeditor__plaintexteditfindbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__plaintexteditfindbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditfindbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textcustomeditor__plaintexteditfindbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textcustomeditor__plaintexteditfindbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditfindbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textcustomeditor__plaintexteditfindbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditfindbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textcustomeditor__plaintexteditfindbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditfindbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textcustomeditor__plaintexteditfindbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textcustomeditor__plaintexteditfindbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditfindbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textcustomeditor__plaintexteditfindbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textcustomeditor__plaintexteditfindbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditfindbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textcustomeditor__plaintexteditfindbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__plaintexteditfindbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditfindbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textcustomeditor__plaintexteditfindbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditfindbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textcustomeditor__plaintexteditfindbar_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textcustomeditor__plaintexteditfindbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textcustomeditor__plaintexteditfindbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textcustomeditor__plaintexteditfindbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textcustomeditor__plaintexteditfindbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textcustomeditor__plaintexteditfindbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textcustomeditor__plaintexteditfindbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textcustomeditor__plaintexteditfindbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textcustomeditor__plaintexteditfindbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textcustomeditor__plaintexteditfindbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textcustomeditor__plaintexteditfindbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textcustomeditor__plaintexteditfindbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textcustomeditor__plaintexteditfindbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__plaintexteditfindbar_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__plaintexteditfindbar_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textcustomeditor__plaintexteditfindbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textcustomeditor__plaintexteditfindbar_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textcustomeditor__plaintexteditfindbar_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__plaintexteditfindbar_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textcustomeditor__plaintexteditfindbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__plaintexteditfindbar_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textcustomeditor__plaintexteditfindbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textcustomeditor__plaintexteditfindbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textcustomeditor__plaintexteditfindbar_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textcustomeditor__plaintexteditfindbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textcustomeditor__plaintexteditfindbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textcustomeditor__plaintexteditfindbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textcustomeditor__plaintexteditfindbar_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textcustomeditor__plaintexteditfindbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textcustomeditor__plaintexteditfindbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textcustomeditor__plaintexteditfindbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textcustomeditor__plaintexteditfindbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textcustomeditor__plaintexteditfindbar_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textcustomeditor__plaintexteditfindbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textcustomeditor__plaintexteditfindbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textcustomeditor__plaintexteditfindbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textcustomeditor__plaintexteditfindbar_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textcustomeditor__plaintexteditfindbar_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textcustomeditor__plaintexteditfindbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textcustomeditor__plaintexteditfindbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textcustomeditor__plaintexteditfindbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textcustomeditor__plaintexteditfindbar_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textcustomeditor__plaintexteditfindbar_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textcustomeditor__plaintexteditfindbar_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textcustomeditor__plaintexteditfindbar_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textcustomeditor__plaintexteditfindbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textcustomeditor__plaintexteditfindbar_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textcustomeditor__plaintexteditfindbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_find(uintptr_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textcustomeditor__plaintexteditfindbar_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textcustomeditor__plaintexteditfindbar_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textcustomeditor__plaintexteditfindbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textcustomeditor__plaintexteditfindbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textcustomeditor__plaintexteditfindbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textcustomeditor__plaintexteditfindbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textcustomeditor__plaintexteditfindbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textcustomeditor__plaintexteditfindbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textcustomeditor__plaintexteditfindbar_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textcustomeditor__plaintexteditfindbar_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textcustomeditor__plaintexteditfindbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textcustomeditor__plaintexteditfindbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditfindbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textcustomeditor__plaintexteditfindbar_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textcustomeditor__plaintexteditfindbar_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textcustomeditor__plaintexteditfindbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textcustomeditor__plaintexteditfindbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textcustomeditor__plaintexteditfindbar_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textcustomeditor__plaintexteditfindbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textcustomeditor__plaintexteditfindbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textcustomeditor__plaintexteditfindbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textcustomeditor__plaintexteditfindbar_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textcustomeditor__plaintexteditfindbar_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textcustomeditor__plaintexteditfindbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textcustomeditor__plaintexteditfindbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textcustomeditor__plaintexteditfindbar_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textcustomeditor__plaintexteditfindbar_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textcustomeditor__plaintexteditfindbar_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textcustomeditor__plaintexteditfindbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintexteditfindbar_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textcustomeditor__plaintexteditfindbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textcustomeditor__plaintexteditfindbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textcustomeditor__plaintexteditfindbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textcustomeditor__plaintexteditfindbar_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textcustomeditor__plaintexteditfindbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textcustomeditor__plaintexteditfindbar_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textcustomeditor__plaintexteditfindbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textcustomeditor__plaintexteditfindbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textcustomeditor__plaintexteditfindbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditfindbar_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditfindbar_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditfindbar_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textcustomeditor__plaintexteditfindbar_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__plaintexteditfindbar_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textcustomeditor__plaintexteditfindbar_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textcustomeditor__plaintexteditfindbar_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textcustomeditor__plaintexteditfindbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textcustomeditor__plaintexteditfindbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textcustomeditor__plaintexteditfindbar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__plaintexteditfindbar_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_textcustomeditor__plaintexteditfindbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textcustomeditor__plaintexteditfindbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textcustomeditor__plaintexteditfindbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__plaintexteditfindbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textcustomeditor__plaintexteditfindbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textcustomeditor__plaintexteditfindbar_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditfindbar_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditfindbar_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textcustomeditor__plaintexteditfindbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textcustomeditor__plaintexteditfindbar_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textcustomeditor__plaintexteditfindbar_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textcustomeditor__plaintexteditfindbar_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__plaintexteditfindbar_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textcustomeditor__plaintexteditfindbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textcustomeditor__plaintexteditfindbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textcustomeditor__plaintexteditfindbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textcustomeditor__plaintexteditfindbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textcustomeditor__plaintexteditfindbar_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool k_textcustomeditor__plaintexteditfindbar_event(void* self, void* e) {
    return TextCustomEditor__PlainTextEditFindBar_Event((TextCustomEditor__PlainTextEditFindBar*)self, (QEvent*)e);
}

bool k_textcustomeditor__plaintexteditfindbar_super_event(void* self, void* e) {
    return TextCustomEditor__PlainTextEditFindBar_SuperEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QEvent*)e);
}

void k_textcustomeditor__plaintexteditfindbar_on_event(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditfindbar_dev_type(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_DevType((TextCustomEditor__PlainTextEditFindBar*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_super_dev_type(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperDevType((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_dev_type(void* self, int32_t (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnDevType((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_set_visible(void* self, bool visible) {
    TextCustomEditor__PlainTextEditFindBar_SetVisible((TextCustomEditor__PlainTextEditFindBar*)self, visible);
}

void k_textcustomeditor__plaintexteditfindbar_super_set_visible(void* self, bool visible) {
    TextCustomEditor__PlainTextEditFindBar_SuperSetVisible((TextCustomEditor__PlainTextEditFindBar*)self, visible);
}

void k_textcustomeditor__plaintexteditfindbar_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__PlainTextEditFindBar_OnSetVisible((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__plaintexteditfindbar_size_hint(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SizeHint((TextCustomEditor__PlainTextEditFindBar*)self);
}

QSize* k_textcustomeditor__plaintexteditfindbar_super_size_hint(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperSizeHint((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnSizeHint((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__plaintexteditfindbar_minimum_size_hint(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint((TextCustomEditor__PlainTextEditFindBar*)self);
}

QSize* k_textcustomeditor__plaintexteditfindbar_super_minimum_size_hint(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperMinimumSizeHint((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnMinimumSizeHint((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditfindbar_height_for_width(void* self, int param1) {
    return TextCustomEditor__PlainTextEditFindBar_HeightForWidth((TextCustomEditor__PlainTextEditFindBar*)self, param1);
}

int32_t k_textcustomeditor__plaintexteditfindbar_super_height_for_width(void* self, int param1) {
    return TextCustomEditor__PlainTextEditFindBar_SuperHeightForWidth((TextCustomEditor__PlainTextEditFindBar*)self, param1);
}

void k_textcustomeditor__plaintexteditfindbar_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextCustomEditor__PlainTextEditFindBar_OnHeightForWidth((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_has_height_for_width(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth((TextCustomEditor__PlainTextEditFindBar*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_super_has_height_for_width(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperHasHeightForWidth((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_has_height_for_width(void* self, bool (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnHasHeightForWidth((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

QPaintEngine* k_textcustomeditor__plaintexteditfindbar_paint_engine(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_PaintEngine((TextCustomEditor__PlainTextEditFindBar*)self);
}

QPaintEngine* k_textcustomeditor__plaintexteditfindbar_super_paint_engine(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperPaintEngine((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnPaintEngine((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_mouse_press_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_MousePressEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_mouse_press_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperMousePressEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnMousePressEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_mouse_release_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_mouse_release_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperMouseReleaseEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnMouseReleaseEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_mouse_double_click_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_mouse_double_click_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperMouseDoubleClickEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnMouseDoubleClickEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_mouse_move_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_mouse_move_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperMouseMoveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnMouseMoveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_wheel_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_WheelEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QWheelEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_wheel_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperWheelEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QWheelEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnWheelEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_key_press_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_KeyPressEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_key_press_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperKeyPressEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnKeyPressEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_key_release_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_key_release_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperKeyReleaseEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnKeyReleaseEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_focus_in_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_FocusInEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_focus_in_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperFocusInEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnFocusInEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_focus_out_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_FocusOutEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_focus_out_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperFocusOutEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnFocusOutEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_enter_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_EnterEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QEnterEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_enter_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperEnterEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QEnterEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnEnterEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_leave_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_LeaveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_leave_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperLeaveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnLeaveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_paint_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_PaintEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QPaintEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_paint_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperPaintEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QPaintEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnPaintEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_move_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_MoveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QMoveEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_move_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperMoveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QMoveEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnMoveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_resize_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_ResizeEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QResizeEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_resize_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperResizeEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QResizeEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnResizeEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_close_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_CloseEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QCloseEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_close_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperCloseEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QCloseEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnCloseEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_context_menu_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QContextMenuEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_context_menu_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperContextMenuEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QContextMenuEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnContextMenuEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_tablet_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_TabletEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QTabletEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_tablet_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperTabletEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QTabletEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnTabletEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_action_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_ActionEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QActionEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_action_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperActionEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QActionEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnActionEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_drag_enter_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_DragEnterEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QDragEnterEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_drag_enter_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperDragEnterEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QDragEnterEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnDragEnterEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_drag_move_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_DragMoveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QDragMoveEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_drag_move_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperDragMoveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QDragMoveEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnDragMoveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_drag_leave_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QDragLeaveEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_drag_leave_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperDragLeaveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QDragLeaveEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnDragLeaveEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_drop_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_DropEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QDropEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_drop_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperDropEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QDropEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnDropEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_show_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_ShowEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QShowEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_show_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperShowEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QShowEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnShowEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_hide_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_HideEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QHideEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_hide_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperHideEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QHideEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnHideEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextCustomEditor__PlainTextEditFindBar_NativeEvent((TextCustomEditor__PlainTextEditFindBar*)self, qstring(eventType), message, result);
}

bool k_textcustomeditor__plaintexteditfindbar_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextCustomEditor__PlainTextEditFindBar_SuperNativeEvent((TextCustomEditor__PlainTextEditFindBar*)self, qstring(eventType), message, result);
}

void k_textcustomeditor__plaintexteditfindbar_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextCustomEditor__PlainTextEditFindBar_OnNativeEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_change_event(void* self, void* param1) {
    TextCustomEditor__PlainTextEditFindBar_ChangeEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QEvent*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_super_change_event(void* self, void* param1) {
    TextCustomEditor__PlainTextEditFindBar_SuperChangeEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QEvent*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnChangeEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditfindbar_metric(void* self, int32_t param1) {
    return TextCustomEditor__PlainTextEditFindBar_Metric((TextCustomEditor__PlainTextEditFindBar*)self, param1);
}

int32_t k_textcustomeditor__plaintexteditfindbar_super_metric(void* self, int32_t param1) {
    return TextCustomEditor__PlainTextEditFindBar_SuperMetric((TextCustomEditor__PlainTextEditFindBar*)self, param1);
}

void k_textcustomeditor__plaintexteditfindbar_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextCustomEditor__PlainTextEditFindBar_OnMetric((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_init_painter(void* self, void* painter) {
    TextCustomEditor__PlainTextEditFindBar_InitPainter((TextCustomEditor__PlainTextEditFindBar*)self, (QPainter*)painter);
}

void k_textcustomeditor__plaintexteditfindbar_super_init_painter(void* self, void* painter) {
    TextCustomEditor__PlainTextEditFindBar_SuperInitPainter((TextCustomEditor__PlainTextEditFindBar*)self, (QPainter*)painter);
}

void k_textcustomeditor__plaintexteditfindbar_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnInitPainter((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

QPaintDevice* k_textcustomeditor__plaintexteditfindbar_redirected(void* self, void* offset) {
    return TextCustomEditor__PlainTextEditFindBar_Redirected((TextCustomEditor__PlainTextEditFindBar*)self, (QPoint*)offset);
}

QPaintDevice* k_textcustomeditor__plaintexteditfindbar_super_redirected(void* self, void* offset) {
    return TextCustomEditor__PlainTextEditFindBar_SuperRedirected((TextCustomEditor__PlainTextEditFindBar*)self, (QPoint*)offset);
}

void k_textcustomeditor__plaintexteditfindbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnRedirected((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

QPainter* k_textcustomeditor__plaintexteditfindbar_shared_painter(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SharedPainter((TextCustomEditor__PlainTextEditFindBar*)self);
}

QPainter* k_textcustomeditor__plaintexteditfindbar_super_shared_painter(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperSharedPainter((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnSharedPainter((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_input_method_event(void* self, void* param1) {
    TextCustomEditor__PlainTextEditFindBar_InputMethodEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QInputMethodEvent*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_super_input_method_event(void* self, void* param1) {
    TextCustomEditor__PlainTextEditFindBar_SuperInputMethodEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QInputMethodEvent*)param1);
}

void k_textcustomeditor__plaintexteditfindbar_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnInputMethodEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

QVariant* k_textcustomeditor__plaintexteditfindbar_input_method_query(void* self, int32_t param1) {
    return TextCustomEditor__PlainTextEditFindBar_InputMethodQuery((TextCustomEditor__PlainTextEditFindBar*)self, param1);
}

QVariant* k_textcustomeditor__plaintexteditfindbar_super_input_method_query(void* self, int32_t param1) {
    return TextCustomEditor__PlainTextEditFindBar_SuperInputMethodQuery((TextCustomEditor__PlainTextEditFindBar*)self, param1);
}

void k_textcustomeditor__plaintexteditfindbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextCustomEditor__PlainTextEditFindBar_OnInputMethodQuery((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_focus_next_prev_child(void* self, bool next) {
    return TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild((TextCustomEditor__PlainTextEditFindBar*)self, next);
}

bool k_textcustomeditor__plaintexteditfindbar_super_focus_next_prev_child(void* self, bool next) {
    return TextCustomEditor__PlainTextEditFindBar_SuperFocusNextPrevChild((TextCustomEditor__PlainTextEditFindBar*)self, next);
}

void k_textcustomeditor__plaintexteditfindbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextCustomEditor__PlainTextEditFindBar_OnFocusNextPrevChild((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_event_filter(void* self, void* watched, void* event) {
    return TextCustomEditor__PlainTextEditFindBar_EventFilter((TextCustomEditor__PlainTextEditFindBar*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textcustomeditor__plaintexteditfindbar_super_event_filter(void* self, void* watched, void* event) {
    return TextCustomEditor__PlainTextEditFindBar_SuperEventFilter((TextCustomEditor__PlainTextEditFindBar*)self, (QObject*)watched, (QEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnEventFilter((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_timer_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_TimerEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QTimerEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_timer_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperTimerEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QTimerEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnTimerEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_child_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_ChildEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QChildEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_child_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperChildEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QChildEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnChildEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_custom_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_CustomEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_super_custom_event(void* self, void* event) {
    TextCustomEditor__PlainTextEditFindBar_SuperCustomEvent((TextCustomEditor__PlainTextEditFindBar*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintexteditfindbar_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnCustomEvent((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_connect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextEditFindBar_ConnectNotify((TextCustomEditor__PlainTextEditFindBar*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintexteditfindbar_super_connect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextEditFindBar_SuperConnectNotify((TextCustomEditor__PlainTextEditFindBar*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintexteditfindbar_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnConnectNotify((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextEditFindBar_DisconnectNotify((TextCustomEditor__PlainTextEditFindBar*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintexteditfindbar_super_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextEditFindBar_SuperDisconnectNotify((TextCustomEditor__PlainTextEditFindBar*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintexteditfindbar_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnDisconnectNotify((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_clear_selections(void* self) {
    TextCustomEditor__PlainTextEditFindBar_ClearSelections((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_super_clear_selections(void* self) {
    TextCustomEditor__PlainTextEditFindBar_SuperClearSelections((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_clear_selections(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnClearSelections((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_search_text(void* self, bool backward, bool isAutoSearch) {
    return TextCustomEditor__PlainTextEditFindBar_SearchText((TextCustomEditor__PlainTextEditFindBar*)self, backward, isAutoSearch);
}

bool k_textcustomeditor__plaintexteditfindbar_super_search_text(void* self, bool backward, bool isAutoSearch) {
    return TextCustomEditor__PlainTextEditFindBar_SuperSearchText((TextCustomEditor__PlainTextEditFindBar*)self, backward, isAutoSearch);
}

void k_textcustomeditor__plaintexteditfindbar_on_search_text(void* self, bool (*callback)(void*, bool, bool)) {
    TextCustomEditor__PlainTextEditFindBar_OnSearchText((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_set_found_match(void* self, bool match) {
    TextCustomEditor__PlainTextEditFindBar_SetFoundMatch((TextCustomEditor__PlainTextEditFindBar*)self, match);
}

void k_textcustomeditor__plaintexteditfindbar_super_set_found_match(void* self, bool match) {
    TextCustomEditor__PlainTextEditFindBar_SuperSetFoundMatch((TextCustomEditor__PlainTextEditFindBar*)self, match);
}

void k_textcustomeditor__plaintexteditfindbar_on_set_found_match(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__PlainTextEditFindBar_OnSetFoundMatch((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_message_info(void* self, bool backward, bool isAutoSearch, bool found) {
    TextCustomEditor__PlainTextEditFindBar_MessageInfo((TextCustomEditor__PlainTextEditFindBar*)self, backward, isAutoSearch, found);
}

void k_textcustomeditor__plaintexteditfindbar_super_message_info(void* self, bool backward, bool isAutoSearch, bool found) {
    TextCustomEditor__PlainTextEditFindBar_SuperMessageInfo((TextCustomEditor__PlainTextEditFindBar*)self, backward, isAutoSearch, found);
}

void k_textcustomeditor__plaintexteditfindbar_on_message_info(void* self, void (*callback)(void*, bool, bool, bool)) {
    TextCustomEditor__PlainTextEditFindBar_OnMessageInfo((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_update_micro_focus(void* self) {
    TextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_super_update_micro_focus(void* self) {
    TextCustomEditor__PlainTextEditFindBar_SuperUpdateMicroFocus((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_update_micro_focus(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnUpdateMicroFocus((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_create(void* self) {
    TextCustomEditor__PlainTextEditFindBar_Create((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_super_create(void* self) {
    TextCustomEditor__PlainTextEditFindBar_SuperCreate((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_create(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnCreate((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_destroy(void* self) {
    TextCustomEditor__PlainTextEditFindBar_Destroy((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_super_destroy(void* self) {
    TextCustomEditor__PlainTextEditFindBar_SuperDestroy((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_destroy(void* self, void (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnDestroy((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_focus_next_child(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_FocusNextChild((TextCustomEditor__PlainTextEditFindBar*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_super_focus_next_child(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperFocusNextChild((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_focus_next_child(void* self, bool (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnFocusNextChild((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_focus_previous_child(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_FocusPreviousChild((TextCustomEditor__PlainTextEditFindBar*)self);
}

bool k_textcustomeditor__plaintexteditfindbar_super_focus_previous_child(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperFocusPreviousChild((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_focus_previous_child(void* self, bool (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnFocusPreviousChild((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__plaintexteditfindbar_sender(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_Sender((TextCustomEditor__PlainTextEditFindBar*)self);
}

QObject* k_textcustomeditor__plaintexteditfindbar_super_sender(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperSender((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_sender(void* self, QObject* (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnSender((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditfindbar_sender_signal_index(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SenderSignalIndex((TextCustomEditor__PlainTextEditFindBar*)self);
}

int32_t k_textcustomeditor__plaintexteditfindbar_super_sender_signal_index(void* self) {
    return TextCustomEditor__PlainTextEditFindBar_SuperSenderSignalIndex((TextCustomEditor__PlainTextEditFindBar*)self);
}

void k_textcustomeditor__plaintexteditfindbar_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextCustomEditor__PlainTextEditFindBar_OnSenderSignalIndex((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintexteditfindbar_receivers(void* self, const char* signal) {
    return TextCustomEditor__PlainTextEditFindBar_Receivers((TextCustomEditor__PlainTextEditFindBar*)self, signal);
}

int32_t k_textcustomeditor__plaintexteditfindbar_super_receivers(void* self, const char* signal) {
    return TextCustomEditor__PlainTextEditFindBar_SuperReceivers((TextCustomEditor__PlainTextEditFindBar*)self, signal);
}

void k_textcustomeditor__plaintexteditfindbar_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextCustomEditor__PlainTextEditFindBar_OnReceivers((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintexteditfindbar_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__PlainTextEditFindBar_IsSignalConnected((TextCustomEditor__PlainTextEditFindBar*)self, (QMetaMethod*)signal);
}

bool k_textcustomeditor__plaintexteditfindbar_super_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__PlainTextEditFindBar_SuperIsSignalConnected((TextCustomEditor__PlainTextEditFindBar*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintexteditfindbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextEditFindBar_OnIsSignalConnected((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

double k_textcustomeditor__plaintexteditfindbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF((TextCustomEditor__PlainTextEditFindBar*)self, metricA, metricB);
}

double k_textcustomeditor__plaintexteditfindbar_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextCustomEditor__PlainTextEditFindBar_SuperGetDecodedMetricF((TextCustomEditor__PlainTextEditFindBar*)self, metricA, metricB);
}

void k_textcustomeditor__plaintexteditfindbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextCustomEditor__PlainTextEditFindBar_OnGetDecodedMetricF((TextCustomEditor__PlainTextEditFindBar*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintexteditfindbar_delete(void* self) {
    TextCustomEditor__PlainTextEditFindBar_Delete((TextCustomEditor__PlainTextEditFindBar*)(self));
}
