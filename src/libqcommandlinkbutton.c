#include "libqabstractbutton.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqpushbutton.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcommandlinkbutton.hpp"
#include "libqcommandlinkbutton.h"

QCommandLinkButton* q_commandlinkbutton_new(void* parent) {
    return QCommandLinkButton_new((QWidget*)parent);
}

QCommandLinkButton* q_commandlinkbutton_new2() {
    return QCommandLinkButton_new2();
}

QCommandLinkButton* q_commandlinkbutton_new3(const char* text) {
    return QCommandLinkButton_new3(qstring(text));
}

QCommandLinkButton* q_commandlinkbutton_new4(const char* text, const char* description) {
    return QCommandLinkButton_new4(qstring(text), qstring(description));
}

QCommandLinkButton* q_commandlinkbutton_new5(const char* text, void* parent) {
    return QCommandLinkButton_new5(qstring(text), (QWidget*)parent);
}

QCommandLinkButton* q_commandlinkbutton_new6(const char* text, const char* description, void* parent) {
    return QCommandLinkButton_new6(qstring(text), qstring(description), (QWidget*)parent);
}

const QMetaObject* q_commandlinkbutton_meta_object(void* self) {
    return QCommandLinkButton_MetaObject((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QCommandLinkButton_OnMetaObject((QCommandLinkButton*)self, (intptr_t)callback);
}

const QMetaObject* q_commandlinkbutton_qbase_meta_object(void* self) {
    return QCommandLinkButton_QBaseMetaObject((QCommandLinkButton*)self);
}

void* q_commandlinkbutton_metacast(void* self, const char* param1) {
    return QCommandLinkButton_Metacast((QCommandLinkButton*)self, param1);
}

void q_commandlinkbutton_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QCommandLinkButton_OnMetacast((QCommandLinkButton*)self, (intptr_t)callback);
}

void* q_commandlinkbutton_qbase_metacast(void* self, const char* param1) {
    return QCommandLinkButton_QBaseMetacast((QCommandLinkButton*)self, param1);
}

int32_t q_commandlinkbutton_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCommandLinkButton_Metacall((QCommandLinkButton*)self, param1, param2, param3);
}

void q_commandlinkbutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QCommandLinkButton_OnMetacall((QCommandLinkButton*)self, (intptr_t)callback);
}

int32_t q_commandlinkbutton_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCommandLinkButton_QBaseMetacall((QCommandLinkButton*)self, param1, param2, param3);
}

const char* q_commandlinkbutton_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_commandlinkbutton_description(void* self) {
    libqt_string _str = QCommandLinkButton_Description((QCommandLinkButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_description(void* self, const char* description) {
    QCommandLinkButton_SetDescription((QCommandLinkButton*)self, qstring(description));
}

QSize* q_commandlinkbutton_size_hint(void* self) {
    return QCommandLinkButton_SizeHint((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_size_hint(void* self, QSize* (*callback)()) {
    QCommandLinkButton_OnSizeHint((QCommandLinkButton*)self, (intptr_t)callback);
}

QSize* q_commandlinkbutton_qbase_size_hint(void* self) {
    return QCommandLinkButton_QBaseSizeHint((QCommandLinkButton*)self);
}

int32_t q_commandlinkbutton_height_for_width(void* self, int param1) {
    return QCommandLinkButton_HeightForWidth((QCommandLinkButton*)self, param1);
}

void q_commandlinkbutton_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QCommandLinkButton_OnHeightForWidth((QCommandLinkButton*)self, (intptr_t)callback);
}

int32_t q_commandlinkbutton_qbase_height_for_width(void* self, int param1) {
    return QCommandLinkButton_QBaseHeightForWidth((QCommandLinkButton*)self, param1);
}

QSize* q_commandlinkbutton_minimum_size_hint(void* self) {
    return QCommandLinkButton_MinimumSizeHint((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QCommandLinkButton_OnMinimumSizeHint((QCommandLinkButton*)self, (intptr_t)callback);
}

QSize* q_commandlinkbutton_qbase_minimum_size_hint(void* self) {
    return QCommandLinkButton_QBaseMinimumSizeHint((QCommandLinkButton*)self);
}

void q_commandlinkbutton_init_style_option(void* self, void* option) {
    QCommandLinkButton_InitStyleOption((QCommandLinkButton*)self, (QStyleOptionButton*)option);
}

void q_commandlinkbutton_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnInitStyleOption((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_qbase_init_style_option(void* self, void* option) {
    QCommandLinkButton_QBaseInitStyleOption((QCommandLinkButton*)self, (QStyleOptionButton*)option);
}

bool q_commandlinkbutton_event(void* self, void* e) {
    return QCommandLinkButton_Event((QCommandLinkButton*)self, (QEvent*)e);
}

void q_commandlinkbutton_on_event(void* self, bool (*callback)(void*, void*)) {
    QCommandLinkButton_OnEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

bool q_commandlinkbutton_qbase_event(void* self, void* e) {
    return QCommandLinkButton_QBaseEvent((QCommandLinkButton*)self, (QEvent*)e);
}

void q_commandlinkbutton_paint_event(void* self, void* param1) {
    QCommandLinkButton_PaintEvent((QCommandLinkButton*)self, (QPaintEvent*)param1);
}

void q_commandlinkbutton_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnPaintEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_qbase_paint_event(void* self, void* param1) {
    QCommandLinkButton_QBasePaintEvent((QCommandLinkButton*)self, (QPaintEvent*)param1);
}

const char* q_commandlinkbutton_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_commandlinkbutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_commandlinkbutton_auto_default(void* self) {
    return QPushButton_AutoDefault((QPushButton*)self);
}

void q_commandlinkbutton_set_auto_default(void* self, bool autoDefault) {
    QPushButton_SetAutoDefault((QPushButton*)self, autoDefault);
}

bool q_commandlinkbutton_is_default(void* self) {
    return QPushButton_IsDefault((QPushButton*)self);
}

void q_commandlinkbutton_set_default(void* self, bool defaultVal) {
    QPushButton_SetDefault((QPushButton*)self, defaultVal);
}

void q_commandlinkbutton_set_menu(void* self, void* menu) {
    QPushButton_SetMenu((QPushButton*)self, (QMenu*)menu);
}

QMenu* q_commandlinkbutton_menu(void* self) {
    return QPushButton_Menu((QPushButton*)self);
}

void q_commandlinkbutton_set_flat(void* self, bool flat) {
    QPushButton_SetFlat((QPushButton*)self, flat);
}

bool q_commandlinkbutton_is_flat(void* self) {
    return QPushButton_IsFlat((QPushButton*)self);
}

void q_commandlinkbutton_show_menu(void* self) {
    QPushButton_ShowMenu((QPushButton*)self);
}

void q_commandlinkbutton_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

const char* q_commandlinkbutton_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

QIcon* q_commandlinkbutton_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

QSize* q_commandlinkbutton_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

void q_commandlinkbutton_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

QKeySequence* q_commandlinkbutton_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

void q_commandlinkbutton_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

bool q_commandlinkbutton_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

bool q_commandlinkbutton_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

void q_commandlinkbutton_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

bool q_commandlinkbutton_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

void q_commandlinkbutton_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

bool q_commandlinkbutton_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

void q_commandlinkbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

int32_t q_commandlinkbutton_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

void q_commandlinkbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

int32_t q_commandlinkbutton_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

void q_commandlinkbutton_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

bool q_commandlinkbutton_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

QButtonGroup* q_commandlinkbutton_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

void q_commandlinkbutton_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

void q_commandlinkbutton_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

void q_commandlinkbutton_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

void q_commandlinkbutton_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

void q_commandlinkbutton_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

void q_commandlinkbutton_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

void q_commandlinkbutton_on_pressed(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

void q_commandlinkbutton_on_released(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

void q_commandlinkbutton_on_clicked(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

void q_commandlinkbutton_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

void q_commandlinkbutton_on_clicked1(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)callback);
}

uintptr_t q_commandlinkbutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_commandlinkbutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_commandlinkbutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_commandlinkbutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_commandlinkbutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_commandlinkbutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_commandlinkbutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_commandlinkbutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_commandlinkbutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_commandlinkbutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_commandlinkbutton_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_commandlinkbutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_commandlinkbutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_commandlinkbutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_commandlinkbutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_commandlinkbutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_commandlinkbutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_commandlinkbutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_commandlinkbutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_commandlinkbutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_commandlinkbutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_commandlinkbutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_commandlinkbutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_commandlinkbutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_commandlinkbutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_commandlinkbutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_commandlinkbutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_commandlinkbutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_commandlinkbutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_commandlinkbutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_commandlinkbutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_commandlinkbutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_commandlinkbutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_commandlinkbutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_commandlinkbutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_commandlinkbutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_commandlinkbutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_commandlinkbutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_commandlinkbutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_commandlinkbutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_commandlinkbutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_commandlinkbutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_commandlinkbutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_commandlinkbutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_commandlinkbutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_commandlinkbutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_commandlinkbutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_commandlinkbutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_commandlinkbutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_commandlinkbutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_commandlinkbutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_commandlinkbutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_commandlinkbutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_commandlinkbutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_commandlinkbutton_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_commandlinkbutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_commandlinkbutton_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_commandlinkbutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_commandlinkbutton_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_commandlinkbutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_commandlinkbutton_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_commandlinkbutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_commandlinkbutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_commandlinkbutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_commandlinkbutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_commandlinkbutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_commandlinkbutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_commandlinkbutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_commandlinkbutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_commandlinkbutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_commandlinkbutton_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_commandlinkbutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_commandlinkbutton_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_commandlinkbutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_commandlinkbutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_commandlinkbutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_commandlinkbutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_commandlinkbutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_commandlinkbutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_commandlinkbutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_commandlinkbutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_commandlinkbutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_commandlinkbutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_commandlinkbutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_commandlinkbutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_commandlinkbutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_commandlinkbutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_commandlinkbutton_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_commandlinkbutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_commandlinkbutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_commandlinkbutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_commandlinkbutton_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_commandlinkbutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_commandlinkbutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_commandlinkbutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_commandlinkbutton_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_commandlinkbutton_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_commandlinkbutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_commandlinkbutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_commandlinkbutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_commandlinkbutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_commandlinkbutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_commandlinkbutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_commandlinkbutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_commandlinkbutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_commandlinkbutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_commandlinkbutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_commandlinkbutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_commandlinkbutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_commandlinkbutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_commandlinkbutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_commandlinkbutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_commandlinkbutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_commandlinkbutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_commandlinkbutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_commandlinkbutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_commandlinkbutton_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_commandlinkbutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_commandlinkbutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_commandlinkbutton_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_commandlinkbutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_commandlinkbutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_commandlinkbutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_commandlinkbutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_commandlinkbutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_commandlinkbutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_commandlinkbutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_commandlinkbutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_commandlinkbutton_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_commandlinkbutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_commandlinkbutton_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_commandlinkbutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_commandlinkbutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_commandlinkbutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_commandlinkbutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_commandlinkbutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_commandlinkbutton_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_commandlinkbutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_commandlinkbutton_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_commandlinkbutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_commandlinkbutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_commandlinkbutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_commandlinkbutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_commandlinkbutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_commandlinkbutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_commandlinkbutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_commandlinkbutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_commandlinkbutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_commandlinkbutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_commandlinkbutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_commandlinkbutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_commandlinkbutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_commandlinkbutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_commandlinkbutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_commandlinkbutton_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_commandlinkbutton_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_commandlinkbutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_commandlinkbutton_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_commandlinkbutton_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_commandlinkbutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_commandlinkbutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_commandlinkbutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_commandlinkbutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_commandlinkbutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_commandlinkbutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_commandlinkbutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_commandlinkbutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_commandlinkbutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_commandlinkbutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_commandlinkbutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_commandlinkbutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_commandlinkbutton_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_commandlinkbutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_commandlinkbutton_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_commandlinkbutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_commandlinkbutton_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_commandlinkbutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_commandlinkbutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_commandlinkbutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_commandlinkbutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_commandlinkbutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_commandlinkbutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_commandlinkbutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_commandlinkbutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_commandlinkbutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_commandlinkbutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_commandlinkbutton_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_commandlinkbutton_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_commandlinkbutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_commandlinkbutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_commandlinkbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_commandlinkbutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_commandlinkbutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_commandlinkbutton_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_commandlinkbutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_commandlinkbutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_commandlinkbutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_commandlinkbutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_commandlinkbutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_commandlinkbutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_commandlinkbutton_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_commandlinkbutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_commandlinkbutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_commandlinkbutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_commandlinkbutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_commandlinkbutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_commandlinkbutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_commandlinkbutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_commandlinkbutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_commandlinkbutton_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_commandlinkbutton_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_commandlinkbutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_commandlinkbutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_commandlinkbutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_commandlinkbutton_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_commandlinkbutton_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_commandlinkbutton_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_commandlinkbutton_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_commandlinkbutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_commandlinkbutton_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_commandlinkbutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_commandlinkbutton_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_commandlinkbutton_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_commandlinkbutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_commandlinkbutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_commandlinkbutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_commandlinkbutton_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_commandlinkbutton_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_commandlinkbutton_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_commandlinkbutton_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_commandlinkbutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_commandlinkbutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_commandlinkbutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_commandlinkbutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_commandlinkbutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_commandlinkbutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_commandlinkbutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_commandlinkbutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_commandlinkbutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_commandlinkbutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_commandlinkbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_commandlinkbutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_commandlinkbutton_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_commandlinkbutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_commandlinkbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_commandlinkbutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_commandlinkbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_commandlinkbutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_commandlinkbutton_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_commandlinkbutton_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_commandlinkbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_commandlinkbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_commandlinkbutton_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_commandlinkbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_commandlinkbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_commandlinkbutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_commandlinkbutton_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_commandlinkbutton_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_commandlinkbutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_commandlinkbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_commandlinkbutton_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_commandlinkbutton_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_commandlinkbutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_commandlinkbutton_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_commandlinkbutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_commandlinkbutton_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_commandlinkbutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_commandlinkbutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_commandlinkbutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_commandlinkbutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_commandlinkbutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_commandlinkbutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_commandlinkbutton_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_commandlinkbutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_commandlinkbutton_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_commandlinkbutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_commandlinkbutton_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_commandlinkbutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_commandlinkbutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_commandlinkbutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_commandlinkbutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_commandlinkbutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_commandlinkbutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_commandlinkbutton_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_commandlinkbutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_commandlinkbutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_commandlinkbutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_commandlinkbutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_commandlinkbutton_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_commandlinkbutton_dynamic_property_names\n");
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

QBindingStorage* q_commandlinkbutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_commandlinkbutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_commandlinkbutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_commandlinkbutton_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_commandlinkbutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_commandlinkbutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_commandlinkbutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_commandlinkbutton_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_commandlinkbutton_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_commandlinkbutton_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_commandlinkbutton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_commandlinkbutton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_commandlinkbutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_commandlinkbutton_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_commandlinkbutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_commandlinkbutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_commandlinkbutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_commandlinkbutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_commandlinkbutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_commandlinkbutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_commandlinkbutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_commandlinkbutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_commandlinkbutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_commandlinkbutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_commandlinkbutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_commandlinkbutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_commandlinkbutton_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_commandlinkbutton_key_press_event(void* self, void* param1) {
    QCommandLinkButton_KeyPressEvent((QCommandLinkButton*)self, (QKeyEvent*)param1);
}

void q_commandlinkbutton_qbase_key_press_event(void* self, void* param1) {
    QCommandLinkButton_QBaseKeyPressEvent((QCommandLinkButton*)self, (QKeyEvent*)param1);
}

void q_commandlinkbutton_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnKeyPressEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_focus_in_event(void* self, void* param1) {
    QCommandLinkButton_FocusInEvent((QCommandLinkButton*)self, (QFocusEvent*)param1);
}

void q_commandlinkbutton_qbase_focus_in_event(void* self, void* param1) {
    QCommandLinkButton_QBaseFocusInEvent((QCommandLinkButton*)self, (QFocusEvent*)param1);
}

void q_commandlinkbutton_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnFocusInEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_focus_out_event(void* self, void* param1) {
    QCommandLinkButton_FocusOutEvent((QCommandLinkButton*)self, (QFocusEvent*)param1);
}

void q_commandlinkbutton_qbase_focus_out_event(void* self, void* param1) {
    QCommandLinkButton_QBaseFocusOutEvent((QCommandLinkButton*)self, (QFocusEvent*)param1);
}

void q_commandlinkbutton_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnFocusOutEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_mouse_move_event(void* self, void* param1) {
    QCommandLinkButton_MouseMoveEvent((QCommandLinkButton*)self, (QMouseEvent*)param1);
}

void q_commandlinkbutton_qbase_mouse_move_event(void* self, void* param1) {
    QCommandLinkButton_QBaseMouseMoveEvent((QCommandLinkButton*)self, (QMouseEvent*)param1);
}

void q_commandlinkbutton_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnMouseMoveEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

bool q_commandlinkbutton_hit_button(void* self, void* pos) {
    return QCommandLinkButton_HitButton((QCommandLinkButton*)self, (QPoint*)pos);
}

bool q_commandlinkbutton_qbase_hit_button(void* self, void* pos) {
    return QCommandLinkButton_QBaseHitButton((QCommandLinkButton*)self, (QPoint*)pos);
}

void q_commandlinkbutton_on_hit_button(void* self, bool (*callback)(void*, void*)) {
    QCommandLinkButton_OnHitButton((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_check_state_set(void* self) {
    QCommandLinkButton_CheckStateSet((QCommandLinkButton*)self);
}

void q_commandlinkbutton_qbase_check_state_set(void* self) {
    QCommandLinkButton_QBaseCheckStateSet((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_check_state_set(void* self, void (*callback)()) {
    QCommandLinkButton_OnCheckStateSet((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_next_check_state(void* self) {
    QCommandLinkButton_NextCheckState((QCommandLinkButton*)self);
}

void q_commandlinkbutton_qbase_next_check_state(void* self) {
    QCommandLinkButton_QBaseNextCheckState((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_next_check_state(void* self, void (*callback)()) {
    QCommandLinkButton_OnNextCheckState((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_key_release_event(void* self, void* e) {
    QCommandLinkButton_KeyReleaseEvent((QCommandLinkButton*)self, (QKeyEvent*)e);
}

void q_commandlinkbutton_qbase_key_release_event(void* self, void* e) {
    QCommandLinkButton_QBaseKeyReleaseEvent((QCommandLinkButton*)self, (QKeyEvent*)e);
}

void q_commandlinkbutton_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnKeyReleaseEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_mouse_press_event(void* self, void* e) {
    QCommandLinkButton_MousePressEvent((QCommandLinkButton*)self, (QMouseEvent*)e);
}

void q_commandlinkbutton_qbase_mouse_press_event(void* self, void* e) {
    QCommandLinkButton_QBaseMousePressEvent((QCommandLinkButton*)self, (QMouseEvent*)e);
}

void q_commandlinkbutton_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnMousePressEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_mouse_release_event(void* self, void* e) {
    QCommandLinkButton_MouseReleaseEvent((QCommandLinkButton*)self, (QMouseEvent*)e);
}

void q_commandlinkbutton_qbase_mouse_release_event(void* self, void* e) {
    QCommandLinkButton_QBaseMouseReleaseEvent((QCommandLinkButton*)self, (QMouseEvent*)e);
}

void q_commandlinkbutton_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnMouseReleaseEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_change_event(void* self, void* e) {
    QCommandLinkButton_ChangeEvent((QCommandLinkButton*)self, (QEvent*)e);
}

void q_commandlinkbutton_qbase_change_event(void* self, void* e) {
    QCommandLinkButton_QBaseChangeEvent((QCommandLinkButton*)self, (QEvent*)e);
}

void q_commandlinkbutton_on_change_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnChangeEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_timer_event(void* self, void* e) {
    QCommandLinkButton_TimerEvent((QCommandLinkButton*)self, (QTimerEvent*)e);
}

void q_commandlinkbutton_qbase_timer_event(void* self, void* e) {
    QCommandLinkButton_QBaseTimerEvent((QCommandLinkButton*)self, (QTimerEvent*)e);
}

void q_commandlinkbutton_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnTimerEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

int32_t q_commandlinkbutton_dev_type(void* self) {
    return QCommandLinkButton_DevType((QCommandLinkButton*)self);
}

int32_t q_commandlinkbutton_qbase_dev_type(void* self) {
    return QCommandLinkButton_QBaseDevType((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_dev_type(void* self, int32_t (*callback)()) {
    QCommandLinkButton_OnDevType((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_set_visible(void* self, bool visible) {
    QCommandLinkButton_SetVisible((QCommandLinkButton*)self, visible);
}

void q_commandlinkbutton_qbase_set_visible(void* self, bool visible) {
    QCommandLinkButton_QBaseSetVisible((QCommandLinkButton*)self, visible);
}

void q_commandlinkbutton_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QCommandLinkButton_OnSetVisible((QCommandLinkButton*)self, (intptr_t)callback);
}

bool q_commandlinkbutton_has_height_for_width(void* self) {
    return QCommandLinkButton_HasHeightForWidth((QCommandLinkButton*)self);
}

bool q_commandlinkbutton_qbase_has_height_for_width(void* self) {
    return QCommandLinkButton_QBaseHasHeightForWidth((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_has_height_for_width(void* self, bool (*callback)()) {
    QCommandLinkButton_OnHasHeightForWidth((QCommandLinkButton*)self, (intptr_t)callback);
}

QPaintEngine* q_commandlinkbutton_paint_engine(void* self) {
    return QCommandLinkButton_PaintEngine((QCommandLinkButton*)self);
}

QPaintEngine* q_commandlinkbutton_qbase_paint_engine(void* self) {
    return QCommandLinkButton_QBasePaintEngine((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QCommandLinkButton_OnPaintEngine((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_mouse_double_click_event(void* self, void* event) {
    QCommandLinkButton_MouseDoubleClickEvent((QCommandLinkButton*)self, (QMouseEvent*)event);
}

void q_commandlinkbutton_qbase_mouse_double_click_event(void* self, void* event) {
    QCommandLinkButton_QBaseMouseDoubleClickEvent((QCommandLinkButton*)self, (QMouseEvent*)event);
}

void q_commandlinkbutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnMouseDoubleClickEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_wheel_event(void* self, void* event) {
    QCommandLinkButton_WheelEvent((QCommandLinkButton*)self, (QWheelEvent*)event);
}

void q_commandlinkbutton_qbase_wheel_event(void* self, void* event) {
    QCommandLinkButton_QBaseWheelEvent((QCommandLinkButton*)self, (QWheelEvent*)event);
}

void q_commandlinkbutton_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnWheelEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_enter_event(void* self, void* event) {
    QCommandLinkButton_EnterEvent((QCommandLinkButton*)self, (QEnterEvent*)event);
}

void q_commandlinkbutton_qbase_enter_event(void* self, void* event) {
    QCommandLinkButton_QBaseEnterEvent((QCommandLinkButton*)self, (QEnterEvent*)event);
}

void q_commandlinkbutton_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnEnterEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_leave_event(void* self, void* event) {
    QCommandLinkButton_LeaveEvent((QCommandLinkButton*)self, (QEvent*)event);
}

void q_commandlinkbutton_qbase_leave_event(void* self, void* event) {
    QCommandLinkButton_QBaseLeaveEvent((QCommandLinkButton*)self, (QEvent*)event);
}

void q_commandlinkbutton_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnLeaveEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_move_event(void* self, void* event) {
    QCommandLinkButton_MoveEvent((QCommandLinkButton*)self, (QMoveEvent*)event);
}

void q_commandlinkbutton_qbase_move_event(void* self, void* event) {
    QCommandLinkButton_QBaseMoveEvent((QCommandLinkButton*)self, (QMoveEvent*)event);
}

void q_commandlinkbutton_on_move_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnMoveEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_resize_event(void* self, void* event) {
    QCommandLinkButton_ResizeEvent((QCommandLinkButton*)self, (QResizeEvent*)event);
}

void q_commandlinkbutton_qbase_resize_event(void* self, void* event) {
    QCommandLinkButton_QBaseResizeEvent((QCommandLinkButton*)self, (QResizeEvent*)event);
}

void q_commandlinkbutton_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnResizeEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_close_event(void* self, void* event) {
    QCommandLinkButton_CloseEvent((QCommandLinkButton*)self, (QCloseEvent*)event);
}

void q_commandlinkbutton_qbase_close_event(void* self, void* event) {
    QCommandLinkButton_QBaseCloseEvent((QCommandLinkButton*)self, (QCloseEvent*)event);
}

void q_commandlinkbutton_on_close_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnCloseEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_context_menu_event(void* self, void* event) {
    QCommandLinkButton_ContextMenuEvent((QCommandLinkButton*)self, (QContextMenuEvent*)event);
}

void q_commandlinkbutton_qbase_context_menu_event(void* self, void* event) {
    QCommandLinkButton_QBaseContextMenuEvent((QCommandLinkButton*)self, (QContextMenuEvent*)event);
}

void q_commandlinkbutton_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnContextMenuEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_tablet_event(void* self, void* event) {
    QCommandLinkButton_TabletEvent((QCommandLinkButton*)self, (QTabletEvent*)event);
}

void q_commandlinkbutton_qbase_tablet_event(void* self, void* event) {
    QCommandLinkButton_QBaseTabletEvent((QCommandLinkButton*)self, (QTabletEvent*)event);
}

void q_commandlinkbutton_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnTabletEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_action_event(void* self, void* event) {
    QCommandLinkButton_ActionEvent((QCommandLinkButton*)self, (QActionEvent*)event);
}

void q_commandlinkbutton_qbase_action_event(void* self, void* event) {
    QCommandLinkButton_QBaseActionEvent((QCommandLinkButton*)self, (QActionEvent*)event);
}

void q_commandlinkbutton_on_action_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnActionEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_drag_enter_event(void* self, void* event) {
    QCommandLinkButton_DragEnterEvent((QCommandLinkButton*)self, (QDragEnterEvent*)event);
}

void q_commandlinkbutton_qbase_drag_enter_event(void* self, void* event) {
    QCommandLinkButton_QBaseDragEnterEvent((QCommandLinkButton*)self, (QDragEnterEvent*)event);
}

void q_commandlinkbutton_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnDragEnterEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_drag_move_event(void* self, void* event) {
    QCommandLinkButton_DragMoveEvent((QCommandLinkButton*)self, (QDragMoveEvent*)event);
}

void q_commandlinkbutton_qbase_drag_move_event(void* self, void* event) {
    QCommandLinkButton_QBaseDragMoveEvent((QCommandLinkButton*)self, (QDragMoveEvent*)event);
}

void q_commandlinkbutton_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnDragMoveEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_drag_leave_event(void* self, void* event) {
    QCommandLinkButton_DragLeaveEvent((QCommandLinkButton*)self, (QDragLeaveEvent*)event);
}

void q_commandlinkbutton_qbase_drag_leave_event(void* self, void* event) {
    QCommandLinkButton_QBaseDragLeaveEvent((QCommandLinkButton*)self, (QDragLeaveEvent*)event);
}

void q_commandlinkbutton_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnDragLeaveEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_drop_event(void* self, void* event) {
    QCommandLinkButton_DropEvent((QCommandLinkButton*)self, (QDropEvent*)event);
}

void q_commandlinkbutton_qbase_drop_event(void* self, void* event) {
    QCommandLinkButton_QBaseDropEvent((QCommandLinkButton*)self, (QDropEvent*)event);
}

void q_commandlinkbutton_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnDropEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_show_event(void* self, void* event) {
    QCommandLinkButton_ShowEvent((QCommandLinkButton*)self, (QShowEvent*)event);
}

void q_commandlinkbutton_qbase_show_event(void* self, void* event) {
    QCommandLinkButton_QBaseShowEvent((QCommandLinkButton*)self, (QShowEvent*)event);
}

void q_commandlinkbutton_on_show_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnShowEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_hide_event(void* self, void* event) {
    QCommandLinkButton_HideEvent((QCommandLinkButton*)self, (QHideEvent*)event);
}

void q_commandlinkbutton_qbase_hide_event(void* self, void* event) {
    QCommandLinkButton_QBaseHideEvent((QCommandLinkButton*)self, (QHideEvent*)event);
}

void q_commandlinkbutton_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnHideEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

bool q_commandlinkbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCommandLinkButton_NativeEvent((QCommandLinkButton*)self, qstring(eventType), message, result);
}

bool q_commandlinkbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCommandLinkButton_QBaseNativeEvent((QCommandLinkButton*)self, qstring(eventType), message, result);
}

void q_commandlinkbutton_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QCommandLinkButton_OnNativeEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

int32_t q_commandlinkbutton_metric(void* self, int32_t param1) {
    return QCommandLinkButton_Metric((QCommandLinkButton*)self, param1);
}

int32_t q_commandlinkbutton_qbase_metric(void* self, int32_t param1) {
    return QCommandLinkButton_QBaseMetric((QCommandLinkButton*)self, param1);
}

void q_commandlinkbutton_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QCommandLinkButton_OnMetric((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_init_painter(void* self, void* painter) {
    QCommandLinkButton_InitPainter((QCommandLinkButton*)self, (QPainter*)painter);
}

void q_commandlinkbutton_qbase_init_painter(void* self, void* painter) {
    QCommandLinkButton_QBaseInitPainter((QCommandLinkButton*)self, (QPainter*)painter);
}

void q_commandlinkbutton_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnInitPainter((QCommandLinkButton*)self, (intptr_t)callback);
}

QPaintDevice* q_commandlinkbutton_redirected(void* self, void* offset) {
    return QCommandLinkButton_Redirected((QCommandLinkButton*)self, (QPoint*)offset);
}

QPaintDevice* q_commandlinkbutton_qbase_redirected(void* self, void* offset) {
    return QCommandLinkButton_QBaseRedirected((QCommandLinkButton*)self, (QPoint*)offset);
}

void q_commandlinkbutton_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QCommandLinkButton_OnRedirected((QCommandLinkButton*)self, (intptr_t)callback);
}

QPainter* q_commandlinkbutton_shared_painter(void* self) {
    return QCommandLinkButton_SharedPainter((QCommandLinkButton*)self);
}

QPainter* q_commandlinkbutton_qbase_shared_painter(void* self) {
    return QCommandLinkButton_QBaseSharedPainter((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_shared_painter(void* self, QPainter* (*callback)()) {
    QCommandLinkButton_OnSharedPainter((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_input_method_event(void* self, void* param1) {
    QCommandLinkButton_InputMethodEvent((QCommandLinkButton*)self, (QInputMethodEvent*)param1);
}

void q_commandlinkbutton_qbase_input_method_event(void* self, void* param1) {
    QCommandLinkButton_QBaseInputMethodEvent((QCommandLinkButton*)self, (QInputMethodEvent*)param1);
}

void q_commandlinkbutton_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnInputMethodEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

QVariant* q_commandlinkbutton_input_method_query(void* self, int32_t param1) {
    return QCommandLinkButton_InputMethodQuery((QCommandLinkButton*)self, param1);
}

QVariant* q_commandlinkbutton_qbase_input_method_query(void* self, int32_t param1) {
    return QCommandLinkButton_QBaseInputMethodQuery((QCommandLinkButton*)self, param1);
}

void q_commandlinkbutton_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QCommandLinkButton_OnInputMethodQuery((QCommandLinkButton*)self, (intptr_t)callback);
}

bool q_commandlinkbutton_focus_next_prev_child(void* self, bool next) {
    return QCommandLinkButton_FocusNextPrevChild((QCommandLinkButton*)self, next);
}

bool q_commandlinkbutton_qbase_focus_next_prev_child(void* self, bool next) {
    return QCommandLinkButton_QBaseFocusNextPrevChild((QCommandLinkButton*)self, next);
}

void q_commandlinkbutton_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QCommandLinkButton_OnFocusNextPrevChild((QCommandLinkButton*)self, (intptr_t)callback);
}

bool q_commandlinkbutton_event_filter(void* self, void* watched, void* event) {
    return QCommandLinkButton_EventFilter((QCommandLinkButton*)self, (QObject*)watched, (QEvent*)event);
}

bool q_commandlinkbutton_qbase_event_filter(void* self, void* watched, void* event) {
    return QCommandLinkButton_QBaseEventFilter((QCommandLinkButton*)self, (QObject*)watched, (QEvent*)event);
}

void q_commandlinkbutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QCommandLinkButton_OnEventFilter((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_child_event(void* self, void* event) {
    QCommandLinkButton_ChildEvent((QCommandLinkButton*)self, (QChildEvent*)event);
}

void q_commandlinkbutton_qbase_child_event(void* self, void* event) {
    QCommandLinkButton_QBaseChildEvent((QCommandLinkButton*)self, (QChildEvent*)event);
}

void q_commandlinkbutton_on_child_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnChildEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_custom_event(void* self, void* event) {
    QCommandLinkButton_CustomEvent((QCommandLinkButton*)self, (QEvent*)event);
}

void q_commandlinkbutton_qbase_custom_event(void* self, void* event) {
    QCommandLinkButton_QBaseCustomEvent((QCommandLinkButton*)self, (QEvent*)event);
}

void q_commandlinkbutton_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnCustomEvent((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_connect_notify(void* self, void* signal) {
    QCommandLinkButton_ConnectNotify((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

void q_commandlinkbutton_qbase_connect_notify(void* self, void* signal) {
    QCommandLinkButton_QBaseConnectNotify((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

void q_commandlinkbutton_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnConnectNotify((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_disconnect_notify(void* self, void* signal) {
    QCommandLinkButton_DisconnectNotify((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

void q_commandlinkbutton_qbase_disconnect_notify(void* self, void* signal) {
    QCommandLinkButton_QBaseDisconnectNotify((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

void q_commandlinkbutton_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QCommandLinkButton_OnDisconnectNotify((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_update_micro_focus(void* self) {
    QCommandLinkButton_UpdateMicroFocus((QCommandLinkButton*)self);
}

void q_commandlinkbutton_qbase_update_micro_focus(void* self) {
    QCommandLinkButton_QBaseUpdateMicroFocus((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_update_micro_focus(void* self, void (*callback)()) {
    QCommandLinkButton_OnUpdateMicroFocus((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_create(void* self) {
    QCommandLinkButton_Create((QCommandLinkButton*)self);
}

void q_commandlinkbutton_qbase_create(void* self) {
    QCommandLinkButton_QBaseCreate((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_create(void* self, void (*callback)()) {
    QCommandLinkButton_OnCreate((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_destroy(void* self) {
    QCommandLinkButton_Destroy((QCommandLinkButton*)self);
}

void q_commandlinkbutton_qbase_destroy(void* self) {
    QCommandLinkButton_QBaseDestroy((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_destroy(void* self, void (*callback)()) {
    QCommandLinkButton_OnDestroy((QCommandLinkButton*)self, (intptr_t)callback);
}

bool q_commandlinkbutton_focus_next_child(void* self) {
    return QCommandLinkButton_FocusNextChild((QCommandLinkButton*)self);
}

bool q_commandlinkbutton_qbase_focus_next_child(void* self) {
    return QCommandLinkButton_QBaseFocusNextChild((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_focus_next_child(void* self, bool (*callback)()) {
    QCommandLinkButton_OnFocusNextChild((QCommandLinkButton*)self, (intptr_t)callback);
}

bool q_commandlinkbutton_focus_previous_child(void* self) {
    return QCommandLinkButton_FocusPreviousChild((QCommandLinkButton*)self);
}

bool q_commandlinkbutton_qbase_focus_previous_child(void* self) {
    return QCommandLinkButton_QBaseFocusPreviousChild((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_focus_previous_child(void* self, bool (*callback)()) {
    QCommandLinkButton_OnFocusPreviousChild((QCommandLinkButton*)self, (intptr_t)callback);
}

QObject* q_commandlinkbutton_sender(void* self) {
    return QCommandLinkButton_Sender((QCommandLinkButton*)self);
}

QObject* q_commandlinkbutton_qbase_sender(void* self) {
    return QCommandLinkButton_QBaseSender((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_sender(void* self, QObject* (*callback)()) {
    QCommandLinkButton_OnSender((QCommandLinkButton*)self, (intptr_t)callback);
}

int32_t q_commandlinkbutton_sender_signal_index(void* self) {
    return QCommandLinkButton_SenderSignalIndex((QCommandLinkButton*)self);
}

int32_t q_commandlinkbutton_qbase_sender_signal_index(void* self) {
    return QCommandLinkButton_QBaseSenderSignalIndex((QCommandLinkButton*)self);
}

void q_commandlinkbutton_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QCommandLinkButton_OnSenderSignalIndex((QCommandLinkButton*)self, (intptr_t)callback);
}

int32_t q_commandlinkbutton_receivers(void* self, const char* signal) {
    return QCommandLinkButton_Receivers((QCommandLinkButton*)self, signal);
}

int32_t q_commandlinkbutton_qbase_receivers(void* self, const char* signal) {
    return QCommandLinkButton_QBaseReceivers((QCommandLinkButton*)self, signal);
}

void q_commandlinkbutton_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QCommandLinkButton_OnReceivers((QCommandLinkButton*)self, (intptr_t)callback);
}

bool q_commandlinkbutton_is_signal_connected(void* self, void* signal) {
    return QCommandLinkButton_IsSignalConnected((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

bool q_commandlinkbutton_qbase_is_signal_connected(void* self, void* signal) {
    return QCommandLinkButton_QBaseIsSignalConnected((QCommandLinkButton*)self, (QMetaMethod*)signal);
}

void q_commandlinkbutton_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QCommandLinkButton_OnIsSignalConnected((QCommandLinkButton*)self, (intptr_t)callback);
}

double q_commandlinkbutton_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QCommandLinkButton_GetDecodedMetricF((QCommandLinkButton*)self, metricA, metricB);
}

double q_commandlinkbutton_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QCommandLinkButton_QBaseGetDecodedMetricF((QCommandLinkButton*)self, metricA, metricB);
}

void q_commandlinkbutton_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QCommandLinkButton_OnGetDecodedMetricF((QCommandLinkButton*)self, (intptr_t)callback);
}

void q_commandlinkbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_commandlinkbutton_delete(void* self) {
    QCommandLinkButton_Delete((QCommandLinkButton*)(self));
}
