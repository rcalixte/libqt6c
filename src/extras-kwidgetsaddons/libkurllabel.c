#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqcursor.hpp"
#include "../libqfont.hpp"
#include "../libqframe.hpp"
#include "../libqlabel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkurllabel.hpp"
#include "libkurllabel.h"

KUrlLabel* k_urllabel_new(void* parent) {
    return KUrlLabel_new((QWidget*)parent);
}

KUrlLabel* k_urllabel_new2() {
    return KUrlLabel_new2();
}

KUrlLabel* k_urllabel_new3(const char* url) {
    return KUrlLabel_new3(qstring(url));
}

KUrlLabel* k_urllabel_new4(const char* url, const char* text) {
    return KUrlLabel_new4(qstring(url), qstring(text));
}

KUrlLabel* k_urllabel_new5(const char* url, const char* text, void* parent) {
    return KUrlLabel_new5(qstring(url), qstring(text), (QWidget*)parent);
}

const QMetaObject* k_urllabel_meta_object(void* self) {
    return KUrlLabel_MetaObject((KUrlLabel*)self);
}

void* k_urllabel_metacast(void* self, const char* param1) {
    return KUrlLabel_Metacast((KUrlLabel*)self, param1);
}

int32_t k_urllabel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUrlLabel_Metacall((KUrlLabel*)self, param1, param2, param3);
}

void k_urllabel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KUrlLabel_OnMetacall((KUrlLabel*)self, (intptr_t)callback);
}

int32_t k_urllabel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUrlLabel_QBaseMetacall((KUrlLabel*)self, param1, param2, param3);
}

const char* k_urllabel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urllabel_url(void* self) {
    libqt_string _str = KUrlLabel_Url((KUrlLabel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urllabel_tip_text(void* self) {
    libqt_string _str = KUrlLabel_TipText((KUrlLabel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_urllabel_use_tips(void* self) {
    return KUrlLabel_UseTips((KUrlLabel*)self);
}

bool k_urllabel_use_cursor(void* self) {
    return KUrlLabel_UseCursor((KUrlLabel*)self);
}

bool k_urllabel_is_glow_enabled(void* self) {
    return KUrlLabel_IsGlowEnabled((KUrlLabel*)self);
}

bool k_urllabel_is_float_enabled(void* self) {
    return KUrlLabel_IsFloatEnabled((KUrlLabel*)self);
}

const QPixmap* k_urllabel_alternate_pixmap(void* self) {
    return KUrlLabel_AlternatePixmap((KUrlLabel*)self);
}

void k_urllabel_set_underline(void* self) {
    KUrlLabel_SetUnderline((KUrlLabel*)self);
}

void k_urllabel_set_url(void* self, const char* url) {
    KUrlLabel_SetUrl((KUrlLabel*)self, qstring(url));
}

void k_urllabel_set_font(void* self, void* font) {
    KUrlLabel_SetFont((KUrlLabel*)self, (QFont*)font);
}

void k_urllabel_on_set_font(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnSetFont((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_qbase_set_font(void* self, void* font) {
    KUrlLabel_QBaseSetFont((KUrlLabel*)self, (QFont*)font);
}

void k_urllabel_set_use_tips(void* self) {
    KUrlLabel_SetUseTips((KUrlLabel*)self);
}

void k_urllabel_set_tip_text(void* self, const char* tip) {
    KUrlLabel_SetTipText((KUrlLabel*)self, qstring(tip));
}

void k_urllabel_set_highlighted_color(void* self, void* highcolor) {
    KUrlLabel_SetHighlightedColor((KUrlLabel*)self, (QColor*)highcolor);
}

void k_urllabel_set_highlighted_color2(void* self, const char* highcolor) {
    KUrlLabel_SetHighlightedColor2((KUrlLabel*)self, qstring(highcolor));
}

void k_urllabel_set_selected_color(void* self, void* color) {
    KUrlLabel_SetSelectedColor((KUrlLabel*)self, (QColor*)color);
}

void k_urllabel_set_selected_color2(void* self, const char* color) {
    KUrlLabel_SetSelectedColor2((KUrlLabel*)self, qstring(color));
}

void k_urllabel_set_use_cursor(void* self, bool on) {
    KUrlLabel_SetUseCursor((KUrlLabel*)self, on);
}

void k_urllabel_set_glow_enabled(void* self) {
    KUrlLabel_SetGlowEnabled((KUrlLabel*)self);
}

void k_urllabel_set_float_enabled(void* self) {
    KUrlLabel_SetFloatEnabled((KUrlLabel*)self);
}

void k_urllabel_set_alternate_pixmap(void* self, void* pixmap) {
    KUrlLabel_SetAlternatePixmap((KUrlLabel*)self, (QPixmap*)pixmap);
}

void k_urllabel_entered_url(void* self) {
    KUrlLabel_EnteredUrl((KUrlLabel*)self);
}

void k_urllabel_on_entered_url(void* self, void (*callback)(void*)) {
    KUrlLabel_Connect_EnteredUrl((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_left_url(void* self) {
    KUrlLabel_LeftUrl((KUrlLabel*)self);
}

void k_urllabel_on_left_url(void* self, void (*callback)(void*)) {
    KUrlLabel_Connect_LeftUrl((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_left_clicked_url(void* self) {
    KUrlLabel_LeftClickedUrl((KUrlLabel*)self);
}

void k_urllabel_on_left_clicked_url(void* self, void (*callback)(void*)) {
    KUrlLabel_Connect_LeftClickedUrl((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_right_clicked_url(void* self) {
    KUrlLabel_RightClickedUrl((KUrlLabel*)self);
}

void k_urllabel_on_right_clicked_url(void* self, void (*callback)(void*)) {
    KUrlLabel_Connect_RightClickedUrl((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_middle_clicked_url(void* self) {
    KUrlLabel_MiddleClickedUrl((KUrlLabel*)self);
}

void k_urllabel_on_middle_clicked_url(void* self, void (*callback)(void*)) {
    KUrlLabel_Connect_MiddleClickedUrl((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_mouse_release_event(void* self, void* param1) {
    KUrlLabel_MouseReleaseEvent((KUrlLabel*)self, (QMouseEvent*)param1);
}

void k_urllabel_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnMouseReleaseEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_qbase_mouse_release_event(void* self, void* param1) {
    KUrlLabel_QBaseMouseReleaseEvent((KUrlLabel*)self, (QMouseEvent*)param1);
}

void k_urllabel_enter_event(void* self, void* event) {
    KUrlLabel_EnterEvent((KUrlLabel*)self, (QEnterEvent*)event);
}

void k_urllabel_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnEnterEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_qbase_enter_event(void* self, void* event) {
    KUrlLabel_QBaseEnterEvent((KUrlLabel*)self, (QEnterEvent*)event);
}

void k_urllabel_leave_event(void* self, void* param1) {
    KUrlLabel_LeaveEvent((KUrlLabel*)self, (QEvent*)param1);
}

void k_urllabel_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnLeaveEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_qbase_leave_event(void* self, void* param1) {
    KUrlLabel_QBaseLeaveEvent((KUrlLabel*)self, (QEvent*)param1);
}

bool k_urllabel_event(void* self, void* param1) {
    return KUrlLabel_Event((KUrlLabel*)self, (QEvent*)param1);
}

void k_urllabel_on_event(void* self, bool (*callback)(void*, void*)) {
    KUrlLabel_OnEvent((KUrlLabel*)self, (intptr_t)callback);
}

bool k_urllabel_qbase_event(void* self, void* param1) {
    return KUrlLabel_QBaseEvent((KUrlLabel*)self, (QEvent*)param1);
}

const char* k_urllabel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urllabel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urllabel_set_underline1(void* self, bool on) {
    KUrlLabel_SetUnderline1((KUrlLabel*)self, on);
}

void k_urllabel_set_use_tips1(void* self, bool on) {
    KUrlLabel_SetUseTips1((KUrlLabel*)self, on);
}

void k_urllabel_set_use_cursor2(void* self, bool on, void* cursor) {
    KUrlLabel_SetUseCursor2((KUrlLabel*)self, on, (QCursor*)cursor);
}

void k_urllabel_set_glow_enabled1(void* self, bool glow) {
    KUrlLabel_SetGlowEnabled1((KUrlLabel*)self, glow);
}

void k_urllabel_set_float_enabled1(void* self, bool do_float) {
    KUrlLabel_SetFloatEnabled1((KUrlLabel*)self, do_float);
}

const char* k_urllabel_text(void* self) {
    libqt_string _str = QLabel_Text((QLabel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPixmap* k_urllabel_pixmap(void* self, int32_t param1) {
    return QLabel_Pixmap((QLabel*)self, param1);
}

QPixmap* k_urllabel_pixmap2(void* self) {
    return QLabel_Pixmap2((QLabel*)self);
}

QPicture* k_urllabel_picture(void* self, int32_t param1) {
    return QLabel_Picture((QLabel*)self, param1);
}

QPicture* k_urllabel_picture2(void* self) {
    return QLabel_Picture2((QLabel*)self);
}

QMovie* k_urllabel_movie(void* self) {
    return QLabel_Movie((QLabel*)self);
}

int32_t k_urllabel_text_format(void* self) {
    return QLabel_TextFormat((QLabel*)self);
}

void k_urllabel_set_text_format(void* self, int32_t textFormat) {
    QLabel_SetTextFormat((QLabel*)self, textFormat);
}

int32_t k_urllabel_alignment(void* self) {
    return QLabel_Alignment((QLabel*)self);
}

void k_urllabel_set_alignment(void* self, int32_t alignment) {
    QLabel_SetAlignment((QLabel*)self, alignment);
}

void k_urllabel_set_word_wrap(void* self, bool on) {
    QLabel_SetWordWrap((QLabel*)self, on);
}

bool k_urllabel_word_wrap(void* self) {
    return QLabel_WordWrap((QLabel*)self);
}

int32_t k_urllabel_indent(void* self) {
    return QLabel_Indent((QLabel*)self);
}

void k_urllabel_set_indent(void* self, int indent) {
    QLabel_SetIndent((QLabel*)self, indent);
}

int32_t k_urllabel_margin(void* self) {
    return QLabel_Margin((QLabel*)self);
}

void k_urllabel_set_margin(void* self, int margin) {
    QLabel_SetMargin((QLabel*)self, margin);
}

bool k_urllabel_has_scaled_contents(void* self) {
    return QLabel_HasScaledContents((QLabel*)self);
}

void k_urllabel_set_scaled_contents(void* self, bool scaledContents) {
    QLabel_SetScaledContents((QLabel*)self, scaledContents);
}

void k_urllabel_set_buddy(void* self, void* buddy) {
    QLabel_SetBuddy((QLabel*)self, (QWidget*)buddy);
}

QWidget* k_urllabel_buddy(void* self) {
    return QLabel_Buddy((QLabel*)self);
}

bool k_urllabel_open_external_links(void* self) {
    return QLabel_OpenExternalLinks((QLabel*)self);
}

void k_urllabel_set_open_external_links(void* self, bool open) {
    QLabel_SetOpenExternalLinks((QLabel*)self, open);
}

void k_urllabel_set_text_interaction_flags(void* self, int32_t flags) {
    QLabel_SetTextInteractionFlags((QLabel*)self, flags);
}

int32_t k_urllabel_text_interaction_flags(void* self) {
    return QLabel_TextInteractionFlags((QLabel*)self);
}

void k_urllabel_set_selection(void* self, int param1, int param2) {
    QLabel_SetSelection((QLabel*)self, param1, param2);
}

bool k_urllabel_has_selected_text(void* self) {
    return QLabel_HasSelectedText((QLabel*)self);
}

const char* k_urllabel_selected_text(void* self) {
    libqt_string _str = QLabel_SelectedText((QLabel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_urllabel_selection_start(void* self) {
    return QLabel_SelectionStart((QLabel*)self);
}

void k_urllabel_set_text(void* self, const char* text) {
    QLabel_SetText((QLabel*)self, qstring(text));
}

void k_urllabel_set_pixmap(void* self, void* pixmap) {
    QLabel_SetPixmap((QLabel*)self, (QPixmap*)pixmap);
}

void k_urllabel_set_picture(void* self, void* picture) {
    QLabel_SetPicture((QLabel*)self, (QPicture*)picture);
}

void k_urllabel_set_movie(void* self, void* movie) {
    QLabel_SetMovie((QLabel*)self, (QMovie*)movie);
}

void k_urllabel_set_num(void* self, int num) {
    QLabel_SetNum((QLabel*)self, num);
}

void k_urllabel_set_num2(void* self, double num) {
    QLabel_SetNum2((QLabel*)self, num);
}

void k_urllabel_clear(void* self) {
    QLabel_Clear((QLabel*)self);
}

void k_urllabel_link_activated(void* self, const char* link) {
    QLabel_LinkActivated((QLabel*)self, qstring(link));
}

void k_urllabel_on_link_activated(void* self, void (*callback)(void*, const char*)) {
    QLabel_Connect_LinkActivated((QLabel*)self, (intptr_t)callback);
}

void k_urllabel_link_hovered(void* self, const char* link) {
    QLabel_LinkHovered((QLabel*)self, qstring(link));
}

void k_urllabel_on_link_hovered(void* self, void (*callback)(void*, const char*)) {
    QLabel_Connect_LinkHovered((QLabel*)self, (intptr_t)callback);
}

int32_t k_urllabel_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_urllabel_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_urllabel_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_urllabel_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_urllabel_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_urllabel_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_urllabel_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_urllabel_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_urllabel_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_urllabel_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_urllabel_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_urllabel_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_urllabel_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_urllabel_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_urllabel_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_urllabel_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_urllabel_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_urllabel_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_urllabel_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_urllabel_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_urllabel_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_urllabel_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_urllabel_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_urllabel_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_urllabel_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_urllabel_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_urllabel_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_urllabel_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_urllabel_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_urllabel_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_urllabel_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_urllabel_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_urllabel_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_urllabel_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_urllabel_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_urllabel_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_urllabel_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_urllabel_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_urllabel_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_urllabel_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_urllabel_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_urllabel_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_urllabel_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_urllabel_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_urllabel_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_urllabel_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_urllabel_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_urllabel_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_urllabel_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_urllabel_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_urllabel_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_urllabel_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_urllabel_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_urllabel_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_urllabel_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_urllabel_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_urllabel_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_urllabel_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_urllabel_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_urllabel_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_urllabel_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_urllabel_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_urllabel_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_urllabel_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_urllabel_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_urllabel_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_urllabel_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urllabel_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urllabel_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urllabel_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urllabel_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urllabel_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urllabel_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_urllabel_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_urllabel_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_urllabel_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_urllabel_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_urllabel_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_urllabel_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_urllabel_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_urllabel_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_urllabel_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_urllabel_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_urllabel_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_urllabel_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_urllabel_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_urllabel_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_urllabel_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

QFontMetrics* k_urllabel_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_urllabel_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_urllabel_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_urllabel_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_urllabel_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_urllabel_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_urllabel_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_urllabel_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_urllabel_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_urllabel_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_urllabel_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_urllabel_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_urllabel_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_urllabel_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_urllabel_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_urllabel_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_urllabel_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_urllabel_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_urllabel_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_urllabel_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_urllabel_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_urllabel_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_urllabel_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_urllabel_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urllabel_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urllabel_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_urllabel_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_urllabel_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_urllabel_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urllabel_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_urllabel_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urllabel_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_urllabel_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urllabel_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_urllabel_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_urllabel_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_urllabel_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_urllabel_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urllabel_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_urllabel_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_urllabel_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_urllabel_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urllabel_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_urllabel_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urllabel_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urllabel_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_urllabel_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urllabel_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_urllabel_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_urllabel_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_urllabel_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_urllabel_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_urllabel_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_urllabel_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_urllabel_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_urllabel_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_urllabel_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_urllabel_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_urllabel_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_urllabel_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_urllabel_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_urllabel_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_urllabel_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_urllabel_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_urllabel_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_urllabel_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_urllabel_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_urllabel_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_urllabel_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_urllabel_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_urllabel_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_urllabel_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_urllabel_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_urllabel_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_urllabel_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_urllabel_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_urllabel_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_urllabel_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_urllabel_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_urllabel_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_urllabel_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_urllabel_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_urllabel_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_urllabel_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_urllabel_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_urllabel_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_urllabel_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_urllabel_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_urllabel_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_urllabel_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_urllabel_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_urllabel_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_urllabel_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_urllabel_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_urllabel_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_urllabel_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_urllabel_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_urllabel_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_urllabel_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_urllabel_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_urllabel_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_urllabel_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_urllabel_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_urllabel_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_urllabel_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_urllabel_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_urllabel_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_urllabel_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_urllabel_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_urllabel_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_urllabel_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_urllabel_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_urllabel_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_urllabel_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_urllabel_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_urllabel_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_urllabel_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_urllabel_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_urllabel_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_urllabel_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_urllabel_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_urllabel_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_urllabel_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_urllabel_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_urllabel_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_urllabel_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_urllabel_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_urllabel_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_urllabel_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_urllabel_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_urllabel_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_urllabel_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_urllabel_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_urllabel_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_urllabel_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_urllabel_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_urllabel_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_urllabel_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_urllabel_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_urllabel_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_urllabel_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_urllabel_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_urllabel_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_urllabel_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_urllabel_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_urllabel_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_urllabel_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_urllabel_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_urllabel_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_urllabel_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_urllabel_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_urllabel_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_urllabel_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_urllabel_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_urllabel_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_urllabel_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_urllabel_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_urllabel_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_urllabel_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_urllabel_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_urllabel_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_urllabel_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_urllabel_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_urllabel_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_urllabel_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_urllabel_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_urllabel_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_urllabel_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_urllabel_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_urllabel_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_urllabel_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_urllabel_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_urllabel_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_urllabel_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_urllabel_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_urllabel_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_urllabel_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_urllabel_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_urllabel_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_urllabel_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_urllabel_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_urllabel_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_urllabel_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_urllabel_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_urllabel_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_urllabel_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_urllabel_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_urllabel_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_urllabel_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_urllabel_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_urllabel_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_urllabel_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_urllabel_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_urllabel_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_urllabel_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_urllabel_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_urllabel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urllabel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_urllabel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_urllabel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_urllabel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_urllabel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_urllabel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_urllabel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_urllabel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_urllabel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_urllabel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_urllabel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_urllabel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_urllabel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_urllabel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_urllabel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_urllabel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_urllabel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_urllabel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_urllabel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_urllabel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_urllabel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_urllabel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_urllabel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_urllabel_dynamic_property_names\n");
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

QBindingStorage* k_urllabel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_urllabel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_urllabel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_urllabel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_urllabel_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_urllabel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_urllabel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_urllabel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_urllabel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_urllabel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_urllabel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_urllabel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_urllabel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_urllabel_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_urllabel_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_urllabel_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_urllabel_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_urllabel_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_urllabel_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_urllabel_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_urllabel_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_urllabel_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_urllabel_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_urllabel_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_urllabel_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_urllabel_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_urllabel_size_hint(void* self) {
    return KUrlLabel_SizeHint((KUrlLabel*)self);
}

QSize* k_urllabel_qbase_size_hint(void* self) {
    return KUrlLabel_QBaseSizeHint((KUrlLabel*)self);
}

void k_urllabel_on_size_hint(void* self, QSize* (*callback)()) {
    KUrlLabel_OnSizeHint((KUrlLabel*)self, (intptr_t)callback);
}

QSize* k_urllabel_minimum_size_hint(void* self) {
    return KUrlLabel_MinimumSizeHint((KUrlLabel*)self);
}

QSize* k_urllabel_qbase_minimum_size_hint(void* self) {
    return KUrlLabel_QBaseMinimumSizeHint((KUrlLabel*)self);
}

void k_urllabel_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KUrlLabel_OnMinimumSizeHint((KUrlLabel*)self, (intptr_t)callback);
}

int32_t k_urllabel_height_for_width(void* self, int param1) {
    return KUrlLabel_HeightForWidth((KUrlLabel*)self, param1);
}

int32_t k_urllabel_qbase_height_for_width(void* self, int param1) {
    return KUrlLabel_QBaseHeightForWidth((KUrlLabel*)self, param1);
}

void k_urllabel_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KUrlLabel_OnHeightForWidth((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_key_press_event(void* self, void* ev) {
    KUrlLabel_KeyPressEvent((KUrlLabel*)self, (QKeyEvent*)ev);
}

void k_urllabel_qbase_key_press_event(void* self, void* ev) {
    KUrlLabel_QBaseKeyPressEvent((KUrlLabel*)self, (QKeyEvent*)ev);
}

void k_urllabel_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnKeyPressEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_paint_event(void* self, void* param1) {
    KUrlLabel_PaintEvent((KUrlLabel*)self, (QPaintEvent*)param1);
}

void k_urllabel_qbase_paint_event(void* self, void* param1) {
    KUrlLabel_QBasePaintEvent((KUrlLabel*)self, (QPaintEvent*)param1);
}

void k_urllabel_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnPaintEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_change_event(void* self, void* param1) {
    KUrlLabel_ChangeEvent((KUrlLabel*)self, (QEvent*)param1);
}

void k_urllabel_qbase_change_event(void* self, void* param1) {
    KUrlLabel_QBaseChangeEvent((KUrlLabel*)self, (QEvent*)param1);
}

void k_urllabel_on_change_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnChangeEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_mouse_press_event(void* self, void* ev) {
    KUrlLabel_MousePressEvent((KUrlLabel*)self, (QMouseEvent*)ev);
}

void k_urllabel_qbase_mouse_press_event(void* self, void* ev) {
    KUrlLabel_QBaseMousePressEvent((KUrlLabel*)self, (QMouseEvent*)ev);
}

void k_urllabel_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnMousePressEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_mouse_move_event(void* self, void* ev) {
    KUrlLabel_MouseMoveEvent((KUrlLabel*)self, (QMouseEvent*)ev);
}

void k_urllabel_qbase_mouse_move_event(void* self, void* ev) {
    KUrlLabel_QBaseMouseMoveEvent((KUrlLabel*)self, (QMouseEvent*)ev);
}

void k_urllabel_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnMouseMoveEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_context_menu_event(void* self, void* ev) {
    KUrlLabel_ContextMenuEvent((KUrlLabel*)self, (QContextMenuEvent*)ev);
}

void k_urllabel_qbase_context_menu_event(void* self, void* ev) {
    KUrlLabel_QBaseContextMenuEvent((KUrlLabel*)self, (QContextMenuEvent*)ev);
}

void k_urllabel_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnContextMenuEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_focus_in_event(void* self, void* ev) {
    KUrlLabel_FocusInEvent((KUrlLabel*)self, (QFocusEvent*)ev);
}

void k_urllabel_qbase_focus_in_event(void* self, void* ev) {
    KUrlLabel_QBaseFocusInEvent((KUrlLabel*)self, (QFocusEvent*)ev);
}

void k_urllabel_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnFocusInEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_focus_out_event(void* self, void* ev) {
    KUrlLabel_FocusOutEvent((KUrlLabel*)self, (QFocusEvent*)ev);
}

void k_urllabel_qbase_focus_out_event(void* self, void* ev) {
    KUrlLabel_QBaseFocusOutEvent((KUrlLabel*)self, (QFocusEvent*)ev);
}

void k_urllabel_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnFocusOutEvent((KUrlLabel*)self, (intptr_t)callback);
}

bool k_urllabel_focus_next_prev_child(void* self, bool next) {
    return KUrlLabel_FocusNextPrevChild((KUrlLabel*)self, next);
}

bool k_urllabel_qbase_focus_next_prev_child(void* self, bool next) {
    return KUrlLabel_QBaseFocusNextPrevChild((KUrlLabel*)self, next);
}

void k_urllabel_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KUrlLabel_OnFocusNextPrevChild((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_init_style_option(void* self, void* option) {
    KUrlLabel_InitStyleOption((KUrlLabel*)self, (QStyleOptionFrame*)option);
}

void k_urllabel_qbase_init_style_option(void* self, void* option) {
    KUrlLabel_QBaseInitStyleOption((KUrlLabel*)self, (QStyleOptionFrame*)option);
}

void k_urllabel_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnInitStyleOption((KUrlLabel*)self, (intptr_t)callback);
}

int32_t k_urllabel_dev_type(void* self) {
    return KUrlLabel_DevType((KUrlLabel*)self);
}

int32_t k_urllabel_qbase_dev_type(void* self) {
    return KUrlLabel_QBaseDevType((KUrlLabel*)self);
}

void k_urllabel_on_dev_type(void* self, int32_t (*callback)()) {
    KUrlLabel_OnDevType((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_set_visible(void* self, bool visible) {
    KUrlLabel_SetVisible((KUrlLabel*)self, visible);
}

void k_urllabel_qbase_set_visible(void* self, bool visible) {
    KUrlLabel_QBaseSetVisible((KUrlLabel*)self, visible);
}

void k_urllabel_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KUrlLabel_OnSetVisible((KUrlLabel*)self, (intptr_t)callback);
}

bool k_urllabel_has_height_for_width(void* self) {
    return KUrlLabel_HasHeightForWidth((KUrlLabel*)self);
}

bool k_urllabel_qbase_has_height_for_width(void* self) {
    return KUrlLabel_QBaseHasHeightForWidth((KUrlLabel*)self);
}

void k_urllabel_on_has_height_for_width(void* self, bool (*callback)()) {
    KUrlLabel_OnHasHeightForWidth((KUrlLabel*)self, (intptr_t)callback);
}

QPaintEngine* k_urllabel_paint_engine(void* self) {
    return KUrlLabel_PaintEngine((KUrlLabel*)self);
}

QPaintEngine* k_urllabel_qbase_paint_engine(void* self) {
    return KUrlLabel_QBasePaintEngine((KUrlLabel*)self);
}

void k_urllabel_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KUrlLabel_OnPaintEngine((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_mouse_double_click_event(void* self, void* event) {
    KUrlLabel_MouseDoubleClickEvent((KUrlLabel*)self, (QMouseEvent*)event);
}

void k_urllabel_qbase_mouse_double_click_event(void* self, void* event) {
    KUrlLabel_QBaseMouseDoubleClickEvent((KUrlLabel*)self, (QMouseEvent*)event);
}

void k_urllabel_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnMouseDoubleClickEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_wheel_event(void* self, void* event) {
    KUrlLabel_WheelEvent((KUrlLabel*)self, (QWheelEvent*)event);
}

void k_urllabel_qbase_wheel_event(void* self, void* event) {
    KUrlLabel_QBaseWheelEvent((KUrlLabel*)self, (QWheelEvent*)event);
}

void k_urllabel_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnWheelEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_key_release_event(void* self, void* event) {
    KUrlLabel_KeyReleaseEvent((KUrlLabel*)self, (QKeyEvent*)event);
}

void k_urllabel_qbase_key_release_event(void* self, void* event) {
    KUrlLabel_QBaseKeyReleaseEvent((KUrlLabel*)self, (QKeyEvent*)event);
}

void k_urllabel_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnKeyReleaseEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_move_event(void* self, void* event) {
    KUrlLabel_MoveEvent((KUrlLabel*)self, (QMoveEvent*)event);
}

void k_urllabel_qbase_move_event(void* self, void* event) {
    KUrlLabel_QBaseMoveEvent((KUrlLabel*)self, (QMoveEvent*)event);
}

void k_urllabel_on_move_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnMoveEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_resize_event(void* self, void* event) {
    KUrlLabel_ResizeEvent((KUrlLabel*)self, (QResizeEvent*)event);
}

void k_urllabel_qbase_resize_event(void* self, void* event) {
    KUrlLabel_QBaseResizeEvent((KUrlLabel*)self, (QResizeEvent*)event);
}

void k_urllabel_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnResizeEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_close_event(void* self, void* event) {
    KUrlLabel_CloseEvent((KUrlLabel*)self, (QCloseEvent*)event);
}

void k_urllabel_qbase_close_event(void* self, void* event) {
    KUrlLabel_QBaseCloseEvent((KUrlLabel*)self, (QCloseEvent*)event);
}

void k_urllabel_on_close_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnCloseEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_tablet_event(void* self, void* event) {
    KUrlLabel_TabletEvent((KUrlLabel*)self, (QTabletEvent*)event);
}

void k_urllabel_qbase_tablet_event(void* self, void* event) {
    KUrlLabel_QBaseTabletEvent((KUrlLabel*)self, (QTabletEvent*)event);
}

void k_urllabel_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnTabletEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_action_event(void* self, void* event) {
    KUrlLabel_ActionEvent((KUrlLabel*)self, (QActionEvent*)event);
}

void k_urllabel_qbase_action_event(void* self, void* event) {
    KUrlLabel_QBaseActionEvent((KUrlLabel*)self, (QActionEvent*)event);
}

void k_urllabel_on_action_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnActionEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_drag_enter_event(void* self, void* event) {
    KUrlLabel_DragEnterEvent((KUrlLabel*)self, (QDragEnterEvent*)event);
}

void k_urllabel_qbase_drag_enter_event(void* self, void* event) {
    KUrlLabel_QBaseDragEnterEvent((KUrlLabel*)self, (QDragEnterEvent*)event);
}

void k_urllabel_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnDragEnterEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_drag_move_event(void* self, void* event) {
    KUrlLabel_DragMoveEvent((KUrlLabel*)self, (QDragMoveEvent*)event);
}

void k_urllabel_qbase_drag_move_event(void* self, void* event) {
    KUrlLabel_QBaseDragMoveEvent((KUrlLabel*)self, (QDragMoveEvent*)event);
}

void k_urllabel_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnDragMoveEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_drag_leave_event(void* self, void* event) {
    KUrlLabel_DragLeaveEvent((KUrlLabel*)self, (QDragLeaveEvent*)event);
}

void k_urllabel_qbase_drag_leave_event(void* self, void* event) {
    KUrlLabel_QBaseDragLeaveEvent((KUrlLabel*)self, (QDragLeaveEvent*)event);
}

void k_urllabel_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnDragLeaveEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_drop_event(void* self, void* event) {
    KUrlLabel_DropEvent((KUrlLabel*)self, (QDropEvent*)event);
}

void k_urllabel_qbase_drop_event(void* self, void* event) {
    KUrlLabel_QBaseDropEvent((KUrlLabel*)self, (QDropEvent*)event);
}

void k_urllabel_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnDropEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_show_event(void* self, void* event) {
    KUrlLabel_ShowEvent((KUrlLabel*)self, (QShowEvent*)event);
}

void k_urllabel_qbase_show_event(void* self, void* event) {
    KUrlLabel_QBaseShowEvent((KUrlLabel*)self, (QShowEvent*)event);
}

void k_urllabel_on_show_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnShowEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_hide_event(void* self, void* event) {
    KUrlLabel_HideEvent((KUrlLabel*)self, (QHideEvent*)event);
}

void k_urllabel_qbase_hide_event(void* self, void* event) {
    KUrlLabel_QBaseHideEvent((KUrlLabel*)self, (QHideEvent*)event);
}

void k_urllabel_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnHideEvent((KUrlLabel*)self, (intptr_t)callback);
}

bool k_urllabel_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KUrlLabel_NativeEvent((KUrlLabel*)self, qstring(eventType), message, result);
}

bool k_urllabel_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KUrlLabel_QBaseNativeEvent((KUrlLabel*)self, qstring(eventType), message, result);
}

void k_urllabel_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KUrlLabel_OnNativeEvent((KUrlLabel*)self, (intptr_t)callback);
}

int32_t k_urllabel_metric(void* self, int32_t param1) {
    return KUrlLabel_Metric((KUrlLabel*)self, param1);
}

int32_t k_urllabel_qbase_metric(void* self, int32_t param1) {
    return KUrlLabel_QBaseMetric((KUrlLabel*)self, param1);
}

void k_urllabel_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KUrlLabel_OnMetric((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_init_painter(void* self, void* painter) {
    KUrlLabel_InitPainter((KUrlLabel*)self, (QPainter*)painter);
}

void k_urllabel_qbase_init_painter(void* self, void* painter) {
    KUrlLabel_QBaseInitPainter((KUrlLabel*)self, (QPainter*)painter);
}

void k_urllabel_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnInitPainter((KUrlLabel*)self, (intptr_t)callback);
}

QPaintDevice* k_urllabel_redirected(void* self, void* offset) {
    return KUrlLabel_Redirected((KUrlLabel*)self, (QPoint*)offset);
}

QPaintDevice* k_urllabel_qbase_redirected(void* self, void* offset) {
    return KUrlLabel_QBaseRedirected((KUrlLabel*)self, (QPoint*)offset);
}

void k_urllabel_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KUrlLabel_OnRedirected((KUrlLabel*)self, (intptr_t)callback);
}

QPainter* k_urllabel_shared_painter(void* self) {
    return KUrlLabel_SharedPainter((KUrlLabel*)self);
}

QPainter* k_urllabel_qbase_shared_painter(void* self) {
    return KUrlLabel_QBaseSharedPainter((KUrlLabel*)self);
}

void k_urllabel_on_shared_painter(void* self, QPainter* (*callback)()) {
    KUrlLabel_OnSharedPainter((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_input_method_event(void* self, void* param1) {
    KUrlLabel_InputMethodEvent((KUrlLabel*)self, (QInputMethodEvent*)param1);
}

void k_urllabel_qbase_input_method_event(void* self, void* param1) {
    KUrlLabel_QBaseInputMethodEvent((KUrlLabel*)self, (QInputMethodEvent*)param1);
}

void k_urllabel_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnInputMethodEvent((KUrlLabel*)self, (intptr_t)callback);
}

QVariant* k_urllabel_input_method_query(void* self, int32_t param1) {
    return KUrlLabel_InputMethodQuery((KUrlLabel*)self, param1);
}

QVariant* k_urllabel_qbase_input_method_query(void* self, int32_t param1) {
    return KUrlLabel_QBaseInputMethodQuery((KUrlLabel*)self, param1);
}

void k_urllabel_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KUrlLabel_OnInputMethodQuery((KUrlLabel*)self, (intptr_t)callback);
}

bool k_urllabel_event_filter(void* self, void* watched, void* event) {
    return KUrlLabel_EventFilter((KUrlLabel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_urllabel_qbase_event_filter(void* self, void* watched, void* event) {
    return KUrlLabel_QBaseEventFilter((KUrlLabel*)self, (QObject*)watched, (QEvent*)event);
}

void k_urllabel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KUrlLabel_OnEventFilter((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_timer_event(void* self, void* event) {
    KUrlLabel_TimerEvent((KUrlLabel*)self, (QTimerEvent*)event);
}

void k_urllabel_qbase_timer_event(void* self, void* event) {
    KUrlLabel_QBaseTimerEvent((KUrlLabel*)self, (QTimerEvent*)event);
}

void k_urllabel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnTimerEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_child_event(void* self, void* event) {
    KUrlLabel_ChildEvent((KUrlLabel*)self, (QChildEvent*)event);
}

void k_urllabel_qbase_child_event(void* self, void* event) {
    KUrlLabel_QBaseChildEvent((KUrlLabel*)self, (QChildEvent*)event);
}

void k_urllabel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnChildEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_custom_event(void* self, void* event) {
    KUrlLabel_CustomEvent((KUrlLabel*)self, (QEvent*)event);
}

void k_urllabel_qbase_custom_event(void* self, void* event) {
    KUrlLabel_QBaseCustomEvent((KUrlLabel*)self, (QEvent*)event);
}

void k_urllabel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnCustomEvent((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_connect_notify(void* self, void* signal) {
    KUrlLabel_ConnectNotify((KUrlLabel*)self, (QMetaMethod*)signal);
}

void k_urllabel_qbase_connect_notify(void* self, void* signal) {
    KUrlLabel_QBaseConnectNotify((KUrlLabel*)self, (QMetaMethod*)signal);
}

void k_urllabel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnConnectNotify((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_disconnect_notify(void* self, void* signal) {
    KUrlLabel_DisconnectNotify((KUrlLabel*)self, (QMetaMethod*)signal);
}

void k_urllabel_qbase_disconnect_notify(void* self, void* signal) {
    KUrlLabel_QBaseDisconnectNotify((KUrlLabel*)self, (QMetaMethod*)signal);
}

void k_urllabel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnDisconnectNotify((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_draw_frame(void* self, void* param1) {
    KUrlLabel_DrawFrame((KUrlLabel*)self, (QPainter*)param1);
}

void k_urllabel_qbase_draw_frame(void* self, void* param1) {
    KUrlLabel_QBaseDrawFrame((KUrlLabel*)self, (QPainter*)param1);
}

void k_urllabel_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KUrlLabel_OnDrawFrame((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_update_micro_focus(void* self) {
    KUrlLabel_UpdateMicroFocus((KUrlLabel*)self);
}

void k_urllabel_qbase_update_micro_focus(void* self) {
    KUrlLabel_QBaseUpdateMicroFocus((KUrlLabel*)self);
}

void k_urllabel_on_update_micro_focus(void* self, void (*callback)()) {
    KUrlLabel_OnUpdateMicroFocus((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_create(void* self) {
    KUrlLabel_Create((KUrlLabel*)self);
}

void k_urllabel_qbase_create(void* self) {
    KUrlLabel_QBaseCreate((KUrlLabel*)self);
}

void k_urllabel_on_create(void* self, void (*callback)()) {
    KUrlLabel_OnCreate((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_destroy(void* self) {
    KUrlLabel_Destroy((KUrlLabel*)self);
}

void k_urllabel_qbase_destroy(void* self) {
    KUrlLabel_QBaseDestroy((KUrlLabel*)self);
}

void k_urllabel_on_destroy(void* self, void (*callback)()) {
    KUrlLabel_OnDestroy((KUrlLabel*)self, (intptr_t)callback);
}

bool k_urllabel_focus_next_child(void* self) {
    return KUrlLabel_FocusNextChild((KUrlLabel*)self);
}

bool k_urllabel_qbase_focus_next_child(void* self) {
    return KUrlLabel_QBaseFocusNextChild((KUrlLabel*)self);
}

void k_urllabel_on_focus_next_child(void* self, bool (*callback)()) {
    KUrlLabel_OnFocusNextChild((KUrlLabel*)self, (intptr_t)callback);
}

bool k_urllabel_focus_previous_child(void* self) {
    return KUrlLabel_FocusPreviousChild((KUrlLabel*)self);
}

bool k_urllabel_qbase_focus_previous_child(void* self) {
    return KUrlLabel_QBaseFocusPreviousChild((KUrlLabel*)self);
}

void k_urllabel_on_focus_previous_child(void* self, bool (*callback)()) {
    KUrlLabel_OnFocusPreviousChild((KUrlLabel*)self, (intptr_t)callback);
}

QObject* k_urllabel_sender(void* self) {
    return KUrlLabel_Sender((KUrlLabel*)self);
}

QObject* k_urllabel_qbase_sender(void* self) {
    return KUrlLabel_QBaseSender((KUrlLabel*)self);
}

void k_urllabel_on_sender(void* self, QObject* (*callback)()) {
    KUrlLabel_OnSender((KUrlLabel*)self, (intptr_t)callback);
}

int32_t k_urllabel_sender_signal_index(void* self) {
    return KUrlLabel_SenderSignalIndex((KUrlLabel*)self);
}

int32_t k_urllabel_qbase_sender_signal_index(void* self) {
    return KUrlLabel_QBaseSenderSignalIndex((KUrlLabel*)self);
}

void k_urllabel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KUrlLabel_OnSenderSignalIndex((KUrlLabel*)self, (intptr_t)callback);
}

int32_t k_urllabel_receivers(void* self, const char* signal) {
    return KUrlLabel_Receivers((KUrlLabel*)self, signal);
}

int32_t k_urllabel_qbase_receivers(void* self, const char* signal) {
    return KUrlLabel_QBaseReceivers((KUrlLabel*)self, signal);
}

void k_urllabel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KUrlLabel_OnReceivers((KUrlLabel*)self, (intptr_t)callback);
}

bool k_urllabel_is_signal_connected(void* self, void* signal) {
    return KUrlLabel_IsSignalConnected((KUrlLabel*)self, (QMetaMethod*)signal);
}

bool k_urllabel_qbase_is_signal_connected(void* self, void* signal) {
    return KUrlLabel_QBaseIsSignalConnected((KUrlLabel*)self, (QMetaMethod*)signal);
}

void k_urllabel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KUrlLabel_OnIsSignalConnected((KUrlLabel*)self, (intptr_t)callback);
}

double k_urllabel_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KUrlLabel_GetDecodedMetricF((KUrlLabel*)self, metricA, metricB);
}

double k_urllabel_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KUrlLabel_QBaseGetDecodedMetricF((KUrlLabel*)self, metricA, metricB);
}

void k_urllabel_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KUrlLabel_OnGetDecodedMetricF((KUrlLabel*)self, (intptr_t)callback);
}

void k_urllabel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_urllabel_delete(void* self) {
    KUrlLabel_Delete((KUrlLabel*)(self));
}
