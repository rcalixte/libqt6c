#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqframe.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmovie.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpicture.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqlabel.hpp"
#include "libqlabel.h"

QLabel* q_label_new(void* parent) {
    return QLabel_new((QWidget*)parent);
}

QLabel* q_label_new2() {
    return QLabel_new2();
}

QLabel* q_label_new3(const char* text) {
    return QLabel_new3(qstring(text));
}

QLabel* q_label_new4(void* parent, int32_t f) {
    return QLabel_new4((QWidget*)parent, f);
}

QLabel* q_label_new5(const char* text, void* parent) {
    return QLabel_new5(qstring(text), (QWidget*)parent);
}

QLabel* q_label_new6(const char* text, void* parent, int32_t f) {
    return QLabel_new6(qstring(text), (QWidget*)parent, f);
}

const QMetaObject* q_label_meta_object(void* self) {
    return QLabel_MetaObject((QLabel*)self);
}

void* q_label_metacast(void* self, const char* param1) {
    return QLabel_Metacast((QLabel*)self, param1);
}

int32_t q_label_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QLabel_Metacall((QLabel*)self, param1, param2, param3);
}

void q_label_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QLabel_OnMetacall((QLabel*)self, (intptr_t)callback);
}

int32_t q_label_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QLabel_QBaseMetacall((QLabel*)self, param1, param2, param3);
}

const char* q_label_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_label_text(void* self) {
    libqt_string _str = QLabel_Text((QLabel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPixmap* q_label_pixmap(void* self, int32_t param1) {
    return QLabel_Pixmap((QLabel*)self, param1);
}

QPixmap* q_label_pixmap2(void* self) {
    return QLabel_Pixmap2((QLabel*)self);
}

QPicture* q_label_picture(void* self, int32_t param1) {
    return QLabel_Picture((QLabel*)self, param1);
}

QPicture* q_label_picture2(void* self) {
    return QLabel_Picture2((QLabel*)self);
}

QMovie* q_label_movie(void* self) {
    return QLabel_Movie((QLabel*)self);
}

int32_t q_label_text_format(void* self) {
    return QLabel_TextFormat((QLabel*)self);
}

void q_label_set_text_format(void* self, int32_t textFormat) {
    QLabel_SetTextFormat((QLabel*)self, textFormat);
}

int32_t q_label_alignment(void* self) {
    return QLabel_Alignment((QLabel*)self);
}

void q_label_set_alignment(void* self, int32_t alignment) {
    QLabel_SetAlignment((QLabel*)self, alignment);
}

void q_label_set_word_wrap(void* self, bool on) {
    QLabel_SetWordWrap((QLabel*)self, on);
}

bool q_label_word_wrap(void* self) {
    return QLabel_WordWrap((QLabel*)self);
}

int32_t q_label_indent(void* self) {
    return QLabel_Indent((QLabel*)self);
}

void q_label_set_indent(void* self, int indent) {
    QLabel_SetIndent((QLabel*)self, indent);
}

int32_t q_label_margin(void* self) {
    return QLabel_Margin((QLabel*)self);
}

void q_label_set_margin(void* self, int margin) {
    QLabel_SetMargin((QLabel*)self, margin);
}

bool q_label_has_scaled_contents(void* self) {
    return QLabel_HasScaledContents((QLabel*)self);
}

void q_label_set_scaled_contents(void* self, bool scaledContents) {
    QLabel_SetScaledContents((QLabel*)self, scaledContents);
}

QSize* q_label_size_hint(void* self) {
    return QLabel_SizeHint((QLabel*)self);
}

void q_label_on_size_hint(void* self, QSize* (*callback)()) {
    QLabel_OnSizeHint((QLabel*)self, (intptr_t)callback);
}

QSize* q_label_qbase_size_hint(void* self) {
    return QLabel_QBaseSizeHint((QLabel*)self);
}

QSize* q_label_minimum_size_hint(void* self) {
    return QLabel_MinimumSizeHint((QLabel*)self);
}

void q_label_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QLabel_OnMinimumSizeHint((QLabel*)self, (intptr_t)callback);
}

QSize* q_label_qbase_minimum_size_hint(void* self) {
    return QLabel_QBaseMinimumSizeHint((QLabel*)self);
}

void q_label_set_buddy(void* self, void* buddy) {
    QLabel_SetBuddy((QLabel*)self, (QWidget*)buddy);
}

QWidget* q_label_buddy(void* self) {
    return QLabel_Buddy((QLabel*)self);
}

int32_t q_label_height_for_width(void* self, int param1) {
    return QLabel_HeightForWidth((QLabel*)self, param1);
}

void q_label_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QLabel_OnHeightForWidth((QLabel*)self, (intptr_t)callback);
}

int32_t q_label_qbase_height_for_width(void* self, int param1) {
    return QLabel_QBaseHeightForWidth((QLabel*)self, param1);
}

bool q_label_open_external_links(void* self) {
    return QLabel_OpenExternalLinks((QLabel*)self);
}

void q_label_set_open_external_links(void* self, bool open) {
    QLabel_SetOpenExternalLinks((QLabel*)self, open);
}

void q_label_set_text_interaction_flags(void* self, int32_t flags) {
    QLabel_SetTextInteractionFlags((QLabel*)self, flags);
}

int32_t q_label_text_interaction_flags(void* self) {
    return QLabel_TextInteractionFlags((QLabel*)self);
}

void q_label_set_selection(void* self, int param1, int param2) {
    QLabel_SetSelection((QLabel*)self, param1, param2);
}

bool q_label_has_selected_text(void* self) {
    return QLabel_HasSelectedText((QLabel*)self);
}

const char* q_label_selected_text(void* self) {
    libqt_string _str = QLabel_SelectedText((QLabel*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_label_selection_start(void* self) {
    return QLabel_SelectionStart((QLabel*)self);
}

void q_label_set_text(void* self, const char* text) {
    QLabel_SetText((QLabel*)self, qstring(text));
}

void q_label_set_pixmap(void* self, void* pixmap) {
    QLabel_SetPixmap((QLabel*)self, (QPixmap*)pixmap);
}

void q_label_set_picture(void* self, void* picture) {
    QLabel_SetPicture((QLabel*)self, (QPicture*)picture);
}

void q_label_set_movie(void* self, void* movie) {
    QLabel_SetMovie((QLabel*)self, (QMovie*)movie);
}

void q_label_set_num(void* self, int num) {
    QLabel_SetNum((QLabel*)self, num);
}

void q_label_set_num2(void* self, double num) {
    QLabel_SetNum2((QLabel*)self, num);
}

void q_label_clear(void* self) {
    QLabel_Clear((QLabel*)self);
}

void q_label_link_activated(void* self, const char* link) {
    QLabel_LinkActivated((QLabel*)self, qstring(link));
}

void q_label_on_link_activated(void* self, void (*callback)(void*, const char*)) {
    QLabel_Connect_LinkActivated((QLabel*)self, (intptr_t)callback);
}

void q_label_link_hovered(void* self, const char* link) {
    QLabel_LinkHovered((QLabel*)self, qstring(link));
}

void q_label_on_link_hovered(void* self, void (*callback)(void*, const char*)) {
    QLabel_Connect_LinkHovered((QLabel*)self, (intptr_t)callback);
}

bool q_label_event(void* self, void* e) {
    return QLabel_Event((QLabel*)self, (QEvent*)e);
}

void q_label_on_event(void* self, bool (*callback)(void*, void*)) {
    QLabel_OnEvent((QLabel*)self, (intptr_t)callback);
}

bool q_label_qbase_event(void* self, void* e) {
    return QLabel_QBaseEvent((QLabel*)self, (QEvent*)e);
}

void q_label_key_press_event(void* self, void* ev) {
    QLabel_KeyPressEvent((QLabel*)self, (QKeyEvent*)ev);
}

void q_label_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnKeyPressEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_qbase_key_press_event(void* self, void* ev) {
    QLabel_QBaseKeyPressEvent((QLabel*)self, (QKeyEvent*)ev);
}

void q_label_paint_event(void* self, void* param1) {
    QLabel_PaintEvent((QLabel*)self, (QPaintEvent*)param1);
}

void q_label_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnPaintEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_qbase_paint_event(void* self, void* param1) {
    QLabel_QBasePaintEvent((QLabel*)self, (QPaintEvent*)param1);
}

void q_label_change_event(void* self, void* param1) {
    QLabel_ChangeEvent((QLabel*)self, (QEvent*)param1);
}

void q_label_on_change_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnChangeEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_qbase_change_event(void* self, void* param1) {
    QLabel_QBaseChangeEvent((QLabel*)self, (QEvent*)param1);
}

void q_label_mouse_press_event(void* self, void* ev) {
    QLabel_MousePressEvent((QLabel*)self, (QMouseEvent*)ev);
}

void q_label_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnMousePressEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_qbase_mouse_press_event(void* self, void* ev) {
    QLabel_QBaseMousePressEvent((QLabel*)self, (QMouseEvent*)ev);
}

void q_label_mouse_move_event(void* self, void* ev) {
    QLabel_MouseMoveEvent((QLabel*)self, (QMouseEvent*)ev);
}

void q_label_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnMouseMoveEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_qbase_mouse_move_event(void* self, void* ev) {
    QLabel_QBaseMouseMoveEvent((QLabel*)self, (QMouseEvent*)ev);
}

void q_label_mouse_release_event(void* self, void* ev) {
    QLabel_MouseReleaseEvent((QLabel*)self, (QMouseEvent*)ev);
}

void q_label_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnMouseReleaseEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_qbase_mouse_release_event(void* self, void* ev) {
    QLabel_QBaseMouseReleaseEvent((QLabel*)self, (QMouseEvent*)ev);
}

void q_label_context_menu_event(void* self, void* ev) {
    QLabel_ContextMenuEvent((QLabel*)self, (QContextMenuEvent*)ev);
}

void q_label_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnContextMenuEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_qbase_context_menu_event(void* self, void* ev) {
    QLabel_QBaseContextMenuEvent((QLabel*)self, (QContextMenuEvent*)ev);
}

void q_label_focus_in_event(void* self, void* ev) {
    QLabel_FocusInEvent((QLabel*)self, (QFocusEvent*)ev);
}

void q_label_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnFocusInEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_qbase_focus_in_event(void* self, void* ev) {
    QLabel_QBaseFocusInEvent((QLabel*)self, (QFocusEvent*)ev);
}

void q_label_focus_out_event(void* self, void* ev) {
    QLabel_FocusOutEvent((QLabel*)self, (QFocusEvent*)ev);
}

void q_label_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnFocusOutEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_qbase_focus_out_event(void* self, void* ev) {
    QLabel_QBaseFocusOutEvent((QLabel*)self, (QFocusEvent*)ev);
}

bool q_label_focus_next_prev_child(void* self, bool next) {
    return QLabel_FocusNextPrevChild((QLabel*)self, next);
}

void q_label_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QLabel_OnFocusNextPrevChild((QLabel*)self, (intptr_t)callback);
}

bool q_label_qbase_focus_next_prev_child(void* self, bool next) {
    return QLabel_QBaseFocusNextPrevChild((QLabel*)self, next);
}

const char* q_label_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_label_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_label_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_label_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_label_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t q_label_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_label_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t q_label_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_label_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_label_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_label_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_label_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_label_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_label_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_label_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_label_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_label_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_label_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_label_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_label_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_label_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_label_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_label_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_label_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_label_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_label_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_label_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_label_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_label_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_label_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_label_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_label_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_label_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_label_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_label_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_label_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_label_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_label_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_label_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_label_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_label_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_label_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_label_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_label_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_label_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_label_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_label_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_label_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_label_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_label_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_label_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_label_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_label_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_label_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_label_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_label_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_label_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_label_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_label_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_label_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_label_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_label_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_label_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_label_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_label_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_label_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_label_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_label_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_label_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_label_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_label_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_label_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_label_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_label_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_label_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_label_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_label_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_label_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_label_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_label_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_label_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_label_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_label_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_label_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_label_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_label_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_label_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_label_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_label_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_label_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_label_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_label_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_label_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_label_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_label_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_label_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_label_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_label_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_label_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_label_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_label_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_label_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_label_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_label_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_label_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_label_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_label_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_label_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_label_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_label_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_label_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_label_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_label_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_label_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_label_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_label_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_label_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_label_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_label_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_label_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_label_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_label_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_label_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_label_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_label_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_label_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_label_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_label_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_label_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_label_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_label_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_label_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_label_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_label_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_label_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_label_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_label_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_label_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_label_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_label_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_label_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_label_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_label_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_label_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_label_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_label_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_label_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_label_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_label_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_label_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_label_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_label_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_label_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_label_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_label_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_label_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_label_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_label_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_label_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_label_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_label_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_label_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_label_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_label_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_label_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_label_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_label_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_label_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_label_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_label_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_label_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_label_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_label_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_label_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_label_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_label_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_label_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_label_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_label_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_label_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_label_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_label_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_label_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_label_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_label_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_label_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_label_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_label_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_label_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_label_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_label_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_label_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_label_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_label_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_label_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_label_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_label_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_label_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_label_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_label_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_label_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_label_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_label_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_label_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_label_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_label_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_label_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_label_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_label_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_label_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_label_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_label_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_label_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_label_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_label_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_label_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_label_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_label_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_label_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_label_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_label_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_label_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_label_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_label_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_label_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_label_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_label_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_label_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_label_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_label_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_label_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_label_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_label_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_label_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_label_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_label_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_label_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_label_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_label_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_label_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_label_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_label_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_label_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_label_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_label_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_label_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_label_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_label_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_label_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_label_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_label_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_label_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_label_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_label_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_label_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_label_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_label_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_label_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_label_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_label_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_label_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_label_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_label_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_label_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_label_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_label_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_label_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_label_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_label_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_label_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_label_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_label_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_label_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_label_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_label_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_label_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_label_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_label_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_label_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_label_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_label_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_label_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_label_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_label_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_label_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_label_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_label_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_label_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_label_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_label_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_label_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_label_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_label_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_label_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_label_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_label_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_label_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_label_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_label_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_label_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_label_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_label_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_label_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_label_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_label_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_label_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_label_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_label_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_label_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_label_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_label_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_label_dynamic_property_names\n");
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

QBindingStorage* q_label_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_label_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_label_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_label_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_label_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_label_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_label_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_label_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_label_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_label_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_label_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_label_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_label_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_label_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_label_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_label_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_label_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_label_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_label_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_label_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_label_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_label_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_label_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_label_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_label_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_label_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_label_init_style_option(void* self, void* option) {
    QLabel_InitStyleOption((QLabel*)self, (QStyleOptionFrame*)option);
}

void q_label_qbase_init_style_option(void* self, void* option) {
    QLabel_QBaseInitStyleOption((QLabel*)self, (QStyleOptionFrame*)option);
}

void q_label_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QLabel_OnInitStyleOption((QLabel*)self, (intptr_t)callback);
}

int32_t q_label_dev_type(void* self) {
    return QLabel_DevType((QLabel*)self);
}

int32_t q_label_qbase_dev_type(void* self) {
    return QLabel_QBaseDevType((QLabel*)self);
}

void q_label_on_dev_type(void* self, int32_t (*callback)()) {
    QLabel_OnDevType((QLabel*)self, (intptr_t)callback);
}

void q_label_set_visible(void* self, bool visible) {
    QLabel_SetVisible((QLabel*)self, visible);
}

void q_label_qbase_set_visible(void* self, bool visible) {
    QLabel_QBaseSetVisible((QLabel*)self, visible);
}

void q_label_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QLabel_OnSetVisible((QLabel*)self, (intptr_t)callback);
}

bool q_label_has_height_for_width(void* self) {
    return QLabel_HasHeightForWidth((QLabel*)self);
}

bool q_label_qbase_has_height_for_width(void* self) {
    return QLabel_QBaseHasHeightForWidth((QLabel*)self);
}

void q_label_on_has_height_for_width(void* self, bool (*callback)()) {
    QLabel_OnHasHeightForWidth((QLabel*)self, (intptr_t)callback);
}

QPaintEngine* q_label_paint_engine(void* self) {
    return QLabel_PaintEngine((QLabel*)self);
}

QPaintEngine* q_label_qbase_paint_engine(void* self) {
    return QLabel_QBasePaintEngine((QLabel*)self);
}

void q_label_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QLabel_OnPaintEngine((QLabel*)self, (intptr_t)callback);
}

void q_label_mouse_double_click_event(void* self, void* event) {
    QLabel_MouseDoubleClickEvent((QLabel*)self, (QMouseEvent*)event);
}

void q_label_qbase_mouse_double_click_event(void* self, void* event) {
    QLabel_QBaseMouseDoubleClickEvent((QLabel*)self, (QMouseEvent*)event);
}

void q_label_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnMouseDoubleClickEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_wheel_event(void* self, void* event) {
    QLabel_WheelEvent((QLabel*)self, (QWheelEvent*)event);
}

void q_label_qbase_wheel_event(void* self, void* event) {
    QLabel_QBaseWheelEvent((QLabel*)self, (QWheelEvent*)event);
}

void q_label_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnWheelEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_key_release_event(void* self, void* event) {
    QLabel_KeyReleaseEvent((QLabel*)self, (QKeyEvent*)event);
}

void q_label_qbase_key_release_event(void* self, void* event) {
    QLabel_QBaseKeyReleaseEvent((QLabel*)self, (QKeyEvent*)event);
}

void q_label_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnKeyReleaseEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_enter_event(void* self, void* event) {
    QLabel_EnterEvent((QLabel*)self, (QEnterEvent*)event);
}

void q_label_qbase_enter_event(void* self, void* event) {
    QLabel_QBaseEnterEvent((QLabel*)self, (QEnterEvent*)event);
}

void q_label_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnEnterEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_leave_event(void* self, void* event) {
    QLabel_LeaveEvent((QLabel*)self, (QEvent*)event);
}

void q_label_qbase_leave_event(void* self, void* event) {
    QLabel_QBaseLeaveEvent((QLabel*)self, (QEvent*)event);
}

void q_label_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnLeaveEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_move_event(void* self, void* event) {
    QLabel_MoveEvent((QLabel*)self, (QMoveEvent*)event);
}

void q_label_qbase_move_event(void* self, void* event) {
    QLabel_QBaseMoveEvent((QLabel*)self, (QMoveEvent*)event);
}

void q_label_on_move_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnMoveEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_resize_event(void* self, void* event) {
    QLabel_ResizeEvent((QLabel*)self, (QResizeEvent*)event);
}

void q_label_qbase_resize_event(void* self, void* event) {
    QLabel_QBaseResizeEvent((QLabel*)self, (QResizeEvent*)event);
}

void q_label_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnResizeEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_close_event(void* self, void* event) {
    QLabel_CloseEvent((QLabel*)self, (QCloseEvent*)event);
}

void q_label_qbase_close_event(void* self, void* event) {
    QLabel_QBaseCloseEvent((QLabel*)self, (QCloseEvent*)event);
}

void q_label_on_close_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnCloseEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_tablet_event(void* self, void* event) {
    QLabel_TabletEvent((QLabel*)self, (QTabletEvent*)event);
}

void q_label_qbase_tablet_event(void* self, void* event) {
    QLabel_QBaseTabletEvent((QLabel*)self, (QTabletEvent*)event);
}

void q_label_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnTabletEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_action_event(void* self, void* event) {
    QLabel_ActionEvent((QLabel*)self, (QActionEvent*)event);
}

void q_label_qbase_action_event(void* self, void* event) {
    QLabel_QBaseActionEvent((QLabel*)self, (QActionEvent*)event);
}

void q_label_on_action_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnActionEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_drag_enter_event(void* self, void* event) {
    QLabel_DragEnterEvent((QLabel*)self, (QDragEnterEvent*)event);
}

void q_label_qbase_drag_enter_event(void* self, void* event) {
    QLabel_QBaseDragEnterEvent((QLabel*)self, (QDragEnterEvent*)event);
}

void q_label_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnDragEnterEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_drag_move_event(void* self, void* event) {
    QLabel_DragMoveEvent((QLabel*)self, (QDragMoveEvent*)event);
}

void q_label_qbase_drag_move_event(void* self, void* event) {
    QLabel_QBaseDragMoveEvent((QLabel*)self, (QDragMoveEvent*)event);
}

void q_label_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnDragMoveEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_drag_leave_event(void* self, void* event) {
    QLabel_DragLeaveEvent((QLabel*)self, (QDragLeaveEvent*)event);
}

void q_label_qbase_drag_leave_event(void* self, void* event) {
    QLabel_QBaseDragLeaveEvent((QLabel*)self, (QDragLeaveEvent*)event);
}

void q_label_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnDragLeaveEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_drop_event(void* self, void* event) {
    QLabel_DropEvent((QLabel*)self, (QDropEvent*)event);
}

void q_label_qbase_drop_event(void* self, void* event) {
    QLabel_QBaseDropEvent((QLabel*)self, (QDropEvent*)event);
}

void q_label_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnDropEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_show_event(void* self, void* event) {
    QLabel_ShowEvent((QLabel*)self, (QShowEvent*)event);
}

void q_label_qbase_show_event(void* self, void* event) {
    QLabel_QBaseShowEvent((QLabel*)self, (QShowEvent*)event);
}

void q_label_on_show_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnShowEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_hide_event(void* self, void* event) {
    QLabel_HideEvent((QLabel*)self, (QHideEvent*)event);
}

void q_label_qbase_hide_event(void* self, void* event) {
    QLabel_QBaseHideEvent((QLabel*)self, (QHideEvent*)event);
}

void q_label_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnHideEvent((QLabel*)self, (intptr_t)callback);
}

bool q_label_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QLabel_NativeEvent((QLabel*)self, qstring(eventType), message, result);
}

bool q_label_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QLabel_QBaseNativeEvent((QLabel*)self, qstring(eventType), message, result);
}

void q_label_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QLabel_OnNativeEvent((QLabel*)self, (intptr_t)callback);
}

int32_t q_label_metric(void* self, int32_t param1) {
    return QLabel_Metric((QLabel*)self, param1);
}

int32_t q_label_qbase_metric(void* self, int32_t param1) {
    return QLabel_QBaseMetric((QLabel*)self, param1);
}

void q_label_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QLabel_OnMetric((QLabel*)self, (intptr_t)callback);
}

void q_label_init_painter(void* self, void* painter) {
    QLabel_InitPainter((QLabel*)self, (QPainter*)painter);
}

void q_label_qbase_init_painter(void* self, void* painter) {
    QLabel_QBaseInitPainter((QLabel*)self, (QPainter*)painter);
}

void q_label_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QLabel_OnInitPainter((QLabel*)self, (intptr_t)callback);
}

QPaintDevice* q_label_redirected(void* self, void* offset) {
    return QLabel_Redirected((QLabel*)self, (QPoint*)offset);
}

QPaintDevice* q_label_qbase_redirected(void* self, void* offset) {
    return QLabel_QBaseRedirected((QLabel*)self, (QPoint*)offset);
}

void q_label_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QLabel_OnRedirected((QLabel*)self, (intptr_t)callback);
}

QPainter* q_label_shared_painter(void* self) {
    return QLabel_SharedPainter((QLabel*)self);
}

QPainter* q_label_qbase_shared_painter(void* self) {
    return QLabel_QBaseSharedPainter((QLabel*)self);
}

void q_label_on_shared_painter(void* self, QPainter* (*callback)()) {
    QLabel_OnSharedPainter((QLabel*)self, (intptr_t)callback);
}

void q_label_input_method_event(void* self, void* param1) {
    QLabel_InputMethodEvent((QLabel*)self, (QInputMethodEvent*)param1);
}

void q_label_qbase_input_method_event(void* self, void* param1) {
    QLabel_QBaseInputMethodEvent((QLabel*)self, (QInputMethodEvent*)param1);
}

void q_label_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnInputMethodEvent((QLabel*)self, (intptr_t)callback);
}

QVariant* q_label_input_method_query(void* self, int32_t param1) {
    return QLabel_InputMethodQuery((QLabel*)self, param1);
}

QVariant* q_label_qbase_input_method_query(void* self, int32_t param1) {
    return QLabel_QBaseInputMethodQuery((QLabel*)self, param1);
}

void q_label_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QLabel_OnInputMethodQuery((QLabel*)self, (intptr_t)callback);
}

bool q_label_event_filter(void* self, void* watched, void* event) {
    return QLabel_EventFilter((QLabel*)self, (QObject*)watched, (QEvent*)event);
}

bool q_label_qbase_event_filter(void* self, void* watched, void* event) {
    return QLabel_QBaseEventFilter((QLabel*)self, (QObject*)watched, (QEvent*)event);
}

void q_label_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QLabel_OnEventFilter((QLabel*)self, (intptr_t)callback);
}

void q_label_timer_event(void* self, void* event) {
    QLabel_TimerEvent((QLabel*)self, (QTimerEvent*)event);
}

void q_label_qbase_timer_event(void* self, void* event) {
    QLabel_QBaseTimerEvent((QLabel*)self, (QTimerEvent*)event);
}

void q_label_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnTimerEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_child_event(void* self, void* event) {
    QLabel_ChildEvent((QLabel*)self, (QChildEvent*)event);
}

void q_label_qbase_child_event(void* self, void* event) {
    QLabel_QBaseChildEvent((QLabel*)self, (QChildEvent*)event);
}

void q_label_on_child_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnChildEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_custom_event(void* self, void* event) {
    QLabel_CustomEvent((QLabel*)self, (QEvent*)event);
}

void q_label_qbase_custom_event(void* self, void* event) {
    QLabel_QBaseCustomEvent((QLabel*)self, (QEvent*)event);
}

void q_label_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QLabel_OnCustomEvent((QLabel*)self, (intptr_t)callback);
}

void q_label_connect_notify(void* self, void* signal) {
    QLabel_ConnectNotify((QLabel*)self, (QMetaMethod*)signal);
}

void q_label_qbase_connect_notify(void* self, void* signal) {
    QLabel_QBaseConnectNotify((QLabel*)self, (QMetaMethod*)signal);
}

void q_label_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QLabel_OnConnectNotify((QLabel*)self, (intptr_t)callback);
}

void q_label_disconnect_notify(void* self, void* signal) {
    QLabel_DisconnectNotify((QLabel*)self, (QMetaMethod*)signal);
}

void q_label_qbase_disconnect_notify(void* self, void* signal) {
    QLabel_QBaseDisconnectNotify((QLabel*)self, (QMetaMethod*)signal);
}

void q_label_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QLabel_OnDisconnectNotify((QLabel*)self, (intptr_t)callback);
}

void q_label_draw_frame(void* self, void* param1) {
    QLabel_DrawFrame((QLabel*)self, (QPainter*)param1);
}

void q_label_qbase_draw_frame(void* self, void* param1) {
    QLabel_QBaseDrawFrame((QLabel*)self, (QPainter*)param1);
}

void q_label_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QLabel_OnDrawFrame((QLabel*)self, (intptr_t)callback);
}

void q_label_update_micro_focus(void* self) {
    QLabel_UpdateMicroFocus((QLabel*)self);
}

void q_label_qbase_update_micro_focus(void* self) {
    QLabel_QBaseUpdateMicroFocus((QLabel*)self);
}

void q_label_on_update_micro_focus(void* self, void (*callback)()) {
    QLabel_OnUpdateMicroFocus((QLabel*)self, (intptr_t)callback);
}

void q_label_create(void* self) {
    QLabel_Create((QLabel*)self);
}

void q_label_qbase_create(void* self) {
    QLabel_QBaseCreate((QLabel*)self);
}

void q_label_on_create(void* self, void (*callback)()) {
    QLabel_OnCreate((QLabel*)self, (intptr_t)callback);
}

void q_label_destroy(void* self) {
    QLabel_Destroy((QLabel*)self);
}

void q_label_qbase_destroy(void* self) {
    QLabel_QBaseDestroy((QLabel*)self);
}

void q_label_on_destroy(void* self, void (*callback)()) {
    QLabel_OnDestroy((QLabel*)self, (intptr_t)callback);
}

bool q_label_focus_next_child(void* self) {
    return QLabel_FocusNextChild((QLabel*)self);
}

bool q_label_qbase_focus_next_child(void* self) {
    return QLabel_QBaseFocusNextChild((QLabel*)self);
}

void q_label_on_focus_next_child(void* self, bool (*callback)()) {
    QLabel_OnFocusNextChild((QLabel*)self, (intptr_t)callback);
}

bool q_label_focus_previous_child(void* self) {
    return QLabel_FocusPreviousChild((QLabel*)self);
}

bool q_label_qbase_focus_previous_child(void* self) {
    return QLabel_QBaseFocusPreviousChild((QLabel*)self);
}

void q_label_on_focus_previous_child(void* self, bool (*callback)()) {
    QLabel_OnFocusPreviousChild((QLabel*)self, (intptr_t)callback);
}

QObject* q_label_sender(void* self) {
    return QLabel_Sender((QLabel*)self);
}

QObject* q_label_qbase_sender(void* self) {
    return QLabel_QBaseSender((QLabel*)self);
}

void q_label_on_sender(void* self, QObject* (*callback)()) {
    QLabel_OnSender((QLabel*)self, (intptr_t)callback);
}

int32_t q_label_sender_signal_index(void* self) {
    return QLabel_SenderSignalIndex((QLabel*)self);
}

int32_t q_label_qbase_sender_signal_index(void* self) {
    return QLabel_QBaseSenderSignalIndex((QLabel*)self);
}

void q_label_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QLabel_OnSenderSignalIndex((QLabel*)self, (intptr_t)callback);
}

int32_t q_label_receivers(void* self, const char* signal) {
    return QLabel_Receivers((QLabel*)self, signal);
}

int32_t q_label_qbase_receivers(void* self, const char* signal) {
    return QLabel_QBaseReceivers((QLabel*)self, signal);
}

void q_label_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QLabel_OnReceivers((QLabel*)self, (intptr_t)callback);
}

bool q_label_is_signal_connected(void* self, void* signal) {
    return QLabel_IsSignalConnected((QLabel*)self, (QMetaMethod*)signal);
}

bool q_label_qbase_is_signal_connected(void* self, void* signal) {
    return QLabel_QBaseIsSignalConnected((QLabel*)self, (QMetaMethod*)signal);
}

void q_label_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QLabel_OnIsSignalConnected((QLabel*)self, (intptr_t)callback);
}

double q_label_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QLabel_GetDecodedMetricF((QLabel*)self, metricA, metricB);
}

double q_label_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QLabel_QBaseGetDecodedMetricF((QLabel*)self, metricA, metricB);
}

void q_label_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QLabel_OnGetDecodedMetricF((QLabel*)self, (intptr_t)callback);
}

void q_label_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_label_delete(void* self) {
    QLabel_Delete((QLabel*)(self));
}
