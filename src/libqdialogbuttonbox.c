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
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqdialogbuttonbox.hpp"
#include "libqdialogbuttonbox.h"

QDialogButtonBox* q_dialogbuttonbox_new(void* parent) {
    return QDialogButtonBox_new((QWidget*)parent);
}

QDialogButtonBox* q_dialogbuttonbox_new2() {
    return QDialogButtonBox_new2();
}

QDialogButtonBox* q_dialogbuttonbox_new3(int32_t orientation) {
    return QDialogButtonBox_new3(orientation);
}

QDialogButtonBox* q_dialogbuttonbox_new4(int32_t buttons) {
    return QDialogButtonBox_new4(buttons);
}

QDialogButtonBox* q_dialogbuttonbox_new5(int32_t buttons, int32_t orientation) {
    return QDialogButtonBox_new5(buttons, orientation);
}

QDialogButtonBox* q_dialogbuttonbox_new6(int32_t orientation, void* parent) {
    return QDialogButtonBox_new6(orientation, (QWidget*)parent);
}

QDialogButtonBox* q_dialogbuttonbox_new7(int32_t buttons, void* parent) {
    return QDialogButtonBox_new7(buttons, (QWidget*)parent);
}

QDialogButtonBox* q_dialogbuttonbox_new8(int32_t buttons, int32_t orientation, void* parent) {
    return QDialogButtonBox_new8(buttons, orientation, (QWidget*)parent);
}

const QMetaObject* q_dialogbuttonbox_meta_object(void* self) {
    return QDialogButtonBox_MetaObject((QDialogButtonBox*)self);
}

void* q_dialogbuttonbox_metacast(void* self, const char* param1) {
    return QDialogButtonBox_Metacast((QDialogButtonBox*)self, param1);
}

int32_t q_dialogbuttonbox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDialogButtonBox_Metacall((QDialogButtonBox*)self, param1, param2, param3);
}

void q_dialogbuttonbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDialogButtonBox_OnMetacall((QDialogButtonBox*)self, (intptr_t)callback);
}

int32_t q_dialogbuttonbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDialogButtonBox_QBaseMetacall((QDialogButtonBox*)self, param1, param2, param3);
}

const char* q_dialogbuttonbox_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialogbuttonbox_set_orientation(void* self, int32_t orientation) {
    QDialogButtonBox_SetOrientation((QDialogButtonBox*)self, orientation);
}

int32_t q_dialogbuttonbox_orientation(void* self) {
    return QDialogButtonBox_Orientation((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_add_button(void* self, void* button, int32_t role) {
    QDialogButtonBox_AddButton((QDialogButtonBox*)self, (QAbstractButton*)button, role);
}

QPushButton* q_dialogbuttonbox_add_button2(void* self, const char* text, int32_t role) {
    return QDialogButtonBox_AddButton2((QDialogButtonBox*)self, qstring(text), role);
}

QPushButton* q_dialogbuttonbox_add_button3(void* self, int32_t button) {
    return QDialogButtonBox_AddButton3((QDialogButtonBox*)self, button);
}

void q_dialogbuttonbox_remove_button(void* self, void* button) {
    QDialogButtonBox_RemoveButton((QDialogButtonBox*)self, (QAbstractButton*)button);
}

void q_dialogbuttonbox_clear(void* self) {
    QDialogButtonBox_Clear((QDialogButtonBox*)self);
}

libqt_list /* of QAbstractButton* */ q_dialogbuttonbox_buttons(void* self) {
    libqt_list _arr = QDialogButtonBox_Buttons((QDialogButtonBox*)self);
    return _arr;
}

int32_t q_dialogbuttonbox_button_role(void* self, void* button) {
    return QDialogButtonBox_ButtonRole((QDialogButtonBox*)self, (QAbstractButton*)button);
}

void q_dialogbuttonbox_set_standard_buttons(void* self, int32_t buttons) {
    QDialogButtonBox_SetStandardButtons((QDialogButtonBox*)self, buttons);
}

int32_t q_dialogbuttonbox_standard_buttons(void* self) {
    return QDialogButtonBox_StandardButtons((QDialogButtonBox*)self);
}

int32_t q_dialogbuttonbox_standard_button(void* self, void* button) {
    return QDialogButtonBox_StandardButton((QDialogButtonBox*)self, (QAbstractButton*)button);
}

QPushButton* q_dialogbuttonbox_button(void* self, int32_t which) {
    return QDialogButtonBox_Button((QDialogButtonBox*)self, which);
}

void q_dialogbuttonbox_set_center_buttons(void* self, bool center) {
    QDialogButtonBox_SetCenterButtons((QDialogButtonBox*)self, center);
}

bool q_dialogbuttonbox_center_buttons(void* self) {
    return QDialogButtonBox_CenterButtons((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_clicked(void* self, void* button) {
    QDialogButtonBox_Clicked((QDialogButtonBox*)self, (QAbstractButton*)button);
}

void q_dialogbuttonbox_on_clicked(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_Connect_Clicked((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_accepted(void* self) {
    QDialogButtonBox_Accepted((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_accepted(void* self, void (*callback)(void*)) {
    QDialogButtonBox_Connect_Accepted((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_help_requested(void* self) {
    QDialogButtonBox_HelpRequested((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_help_requested(void* self, void (*callback)(void*)) {
    QDialogButtonBox_Connect_HelpRequested((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_rejected(void* self) {
    QDialogButtonBox_Rejected((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_rejected(void* self, void (*callback)(void*)) {
    QDialogButtonBox_Connect_Rejected((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_change_event(void* self, void* event) {
    QDialogButtonBox_ChangeEvent((QDialogButtonBox*)self, (QEvent*)event);
}

void q_dialogbuttonbox_on_change_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnChangeEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_qbase_change_event(void* self, void* event) {
    QDialogButtonBox_QBaseChangeEvent((QDialogButtonBox*)self, (QEvent*)event);
}

bool q_dialogbuttonbox_event(void* self, void* event) {
    return QDialogButtonBox_Event((QDialogButtonBox*)self, (QEvent*)event);
}

void q_dialogbuttonbox_on_event(void* self, bool (*callback)(void*, void*)) {
    QDialogButtonBox_OnEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

bool q_dialogbuttonbox_qbase_event(void* self, void* event) {
    return QDialogButtonBox_QBaseEvent((QDialogButtonBox*)self, (QEvent*)event);
}

const char* q_dialogbuttonbox_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dialogbuttonbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_dialogbuttonbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_dialogbuttonbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_dialogbuttonbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_dialogbuttonbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_dialogbuttonbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_dialogbuttonbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_dialogbuttonbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_dialogbuttonbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_dialogbuttonbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_dialogbuttonbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_dialogbuttonbox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_dialogbuttonbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_dialogbuttonbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_dialogbuttonbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_dialogbuttonbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_dialogbuttonbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_dialogbuttonbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_dialogbuttonbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_dialogbuttonbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_dialogbuttonbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_dialogbuttonbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_dialogbuttonbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_dialogbuttonbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_dialogbuttonbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_dialogbuttonbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_dialogbuttonbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_dialogbuttonbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_dialogbuttonbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_dialogbuttonbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_dialogbuttonbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_dialogbuttonbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_dialogbuttonbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_dialogbuttonbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_dialogbuttonbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_dialogbuttonbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_dialogbuttonbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_dialogbuttonbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_dialogbuttonbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_dialogbuttonbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_dialogbuttonbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_dialogbuttonbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_dialogbuttonbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_dialogbuttonbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_dialogbuttonbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_dialogbuttonbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_dialogbuttonbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_dialogbuttonbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_dialogbuttonbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_dialogbuttonbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_dialogbuttonbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_dialogbuttonbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_dialogbuttonbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_dialogbuttonbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_dialogbuttonbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dialogbuttonbox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dialogbuttonbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dialogbuttonbox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dialogbuttonbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dialogbuttonbox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dialogbuttonbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_dialogbuttonbox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_dialogbuttonbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_dialogbuttonbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_dialogbuttonbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_dialogbuttonbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_dialogbuttonbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_dialogbuttonbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_dialogbuttonbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_dialogbuttonbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_dialogbuttonbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_dialogbuttonbox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_dialogbuttonbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_dialogbuttonbox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_dialogbuttonbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_dialogbuttonbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_dialogbuttonbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_dialogbuttonbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_dialogbuttonbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_dialogbuttonbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_dialogbuttonbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_dialogbuttonbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_dialogbuttonbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_dialogbuttonbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_dialogbuttonbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_dialogbuttonbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_dialogbuttonbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_dialogbuttonbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_dialogbuttonbox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_dialogbuttonbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_dialogbuttonbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_dialogbuttonbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_dialogbuttonbox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_dialogbuttonbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_dialogbuttonbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_dialogbuttonbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_dialogbuttonbox_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_dialogbuttonbox_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_dialogbuttonbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_dialogbuttonbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_dialogbuttonbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dialogbuttonbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialogbuttonbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_dialogbuttonbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_dialogbuttonbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_dialogbuttonbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialogbuttonbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_dialogbuttonbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialogbuttonbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_dialogbuttonbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialogbuttonbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_dialogbuttonbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_dialogbuttonbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_dialogbuttonbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_dialogbuttonbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialogbuttonbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_dialogbuttonbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_dialogbuttonbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_dialogbuttonbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialogbuttonbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_dialogbuttonbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dialogbuttonbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialogbuttonbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_dialogbuttonbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialogbuttonbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_dialogbuttonbox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_dialogbuttonbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_dialogbuttonbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_dialogbuttonbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_dialogbuttonbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_dialogbuttonbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_dialogbuttonbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_dialogbuttonbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_dialogbuttonbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_dialogbuttonbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_dialogbuttonbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_dialogbuttonbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_dialogbuttonbox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_dialogbuttonbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_dialogbuttonbox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_dialogbuttonbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_dialogbuttonbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_dialogbuttonbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_dialogbuttonbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_dialogbuttonbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_dialogbuttonbox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_dialogbuttonbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_dialogbuttonbox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_dialogbuttonbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_dialogbuttonbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_dialogbuttonbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_dialogbuttonbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_dialogbuttonbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_dialogbuttonbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_dialogbuttonbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_dialogbuttonbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_dialogbuttonbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_dialogbuttonbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_dialogbuttonbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_dialogbuttonbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_dialogbuttonbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_dialogbuttonbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_dialogbuttonbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_dialogbuttonbox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_dialogbuttonbox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_dialogbuttonbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_dialogbuttonbox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_dialogbuttonbox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_dialogbuttonbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_dialogbuttonbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_dialogbuttonbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_dialogbuttonbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_dialogbuttonbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_dialogbuttonbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_dialogbuttonbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_dialogbuttonbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_dialogbuttonbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_dialogbuttonbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_dialogbuttonbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_dialogbuttonbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_dialogbuttonbox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_dialogbuttonbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_dialogbuttonbox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_dialogbuttonbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_dialogbuttonbox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_dialogbuttonbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dialogbuttonbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_dialogbuttonbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_dialogbuttonbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_dialogbuttonbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_dialogbuttonbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_dialogbuttonbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_dialogbuttonbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_dialogbuttonbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_dialogbuttonbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_dialogbuttonbox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_dialogbuttonbox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_dialogbuttonbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_dialogbuttonbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_dialogbuttonbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_dialogbuttonbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_dialogbuttonbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_dialogbuttonbox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_dialogbuttonbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_dialogbuttonbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_dialogbuttonbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_dialogbuttonbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_dialogbuttonbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_dialogbuttonbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_dialogbuttonbox_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_dialogbuttonbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_dialogbuttonbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_dialogbuttonbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_dialogbuttonbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_dialogbuttonbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_dialogbuttonbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_dialogbuttonbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_dialogbuttonbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_dialogbuttonbox_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_dialogbuttonbox_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_dialogbuttonbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_dialogbuttonbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_dialogbuttonbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_dialogbuttonbox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_dialogbuttonbox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_dialogbuttonbox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_dialogbuttonbox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_dialogbuttonbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_dialogbuttonbox_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_dialogbuttonbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_dialogbuttonbox_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_dialogbuttonbox_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_dialogbuttonbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_dialogbuttonbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_dialogbuttonbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_dialogbuttonbox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_dialogbuttonbox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_dialogbuttonbox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_dialogbuttonbox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_dialogbuttonbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_dialogbuttonbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_dialogbuttonbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_dialogbuttonbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_dialogbuttonbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_dialogbuttonbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_dialogbuttonbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_dialogbuttonbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_dialogbuttonbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_dialogbuttonbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_dialogbuttonbox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_dialogbuttonbox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_dialogbuttonbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_dialogbuttonbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_dialogbuttonbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_dialogbuttonbox_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_dialogbuttonbox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_dialogbuttonbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_dialogbuttonbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_dialogbuttonbox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_dialogbuttonbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_dialogbuttonbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_dialogbuttonbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_dialogbuttonbox_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_dialogbuttonbox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_dialogbuttonbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_dialogbuttonbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_dialogbuttonbox_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_dialogbuttonbox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_dialogbuttonbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_dialogbuttonbox_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_dialogbuttonbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dialogbuttonbox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dialogbuttonbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dialogbuttonbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dialogbuttonbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dialogbuttonbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dialogbuttonbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dialogbuttonbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dialogbuttonbox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dialogbuttonbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_dialogbuttonbox_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_dialogbuttonbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dialogbuttonbox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dialogbuttonbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dialogbuttonbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dialogbuttonbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dialogbuttonbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dialogbuttonbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dialogbuttonbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dialogbuttonbox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_dialogbuttonbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dialogbuttonbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dialogbuttonbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dialogbuttonbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dialogbuttonbox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dialogbuttonbox_dynamic_property_names\n");
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

QBindingStorage* q_dialogbuttonbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dialogbuttonbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dialogbuttonbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dialogbuttonbox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dialogbuttonbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dialogbuttonbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dialogbuttonbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_dialogbuttonbox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_dialogbuttonbox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_dialogbuttonbox_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_dialogbuttonbox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_dialogbuttonbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_dialogbuttonbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dialogbuttonbox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_dialogbuttonbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_dialogbuttonbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_dialogbuttonbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_dialogbuttonbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_dialogbuttonbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_dialogbuttonbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_dialogbuttonbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_dialogbuttonbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_dialogbuttonbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_dialogbuttonbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_dialogbuttonbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_dialogbuttonbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_dialogbuttonbox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_dialogbuttonbox_dev_type(void* self) {
    return QDialogButtonBox_DevType((QDialogButtonBox*)self);
}

int32_t q_dialogbuttonbox_qbase_dev_type(void* self) {
    return QDialogButtonBox_QBaseDevType((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_dev_type(void* self, int32_t (*callback)()) {
    QDialogButtonBox_OnDevType((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_set_visible(void* self, bool visible) {
    QDialogButtonBox_SetVisible((QDialogButtonBox*)self, visible);
}

void q_dialogbuttonbox_qbase_set_visible(void* self, bool visible) {
    QDialogButtonBox_QBaseSetVisible((QDialogButtonBox*)self, visible);
}

void q_dialogbuttonbox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QDialogButtonBox_OnSetVisible((QDialogButtonBox*)self, (intptr_t)callback);
}

QSize* q_dialogbuttonbox_size_hint(void* self) {
    return QDialogButtonBox_SizeHint((QDialogButtonBox*)self);
}

QSize* q_dialogbuttonbox_qbase_size_hint(void* self) {
    return QDialogButtonBox_QBaseSizeHint((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_size_hint(void* self, QSize* (*callback)()) {
    QDialogButtonBox_OnSizeHint((QDialogButtonBox*)self, (intptr_t)callback);
}

QSize* q_dialogbuttonbox_minimum_size_hint(void* self) {
    return QDialogButtonBox_MinimumSizeHint((QDialogButtonBox*)self);
}

QSize* q_dialogbuttonbox_qbase_minimum_size_hint(void* self) {
    return QDialogButtonBox_QBaseMinimumSizeHint((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QDialogButtonBox_OnMinimumSizeHint((QDialogButtonBox*)self, (intptr_t)callback);
}

int32_t q_dialogbuttonbox_height_for_width(void* self, int param1) {
    return QDialogButtonBox_HeightForWidth((QDialogButtonBox*)self, param1);
}

int32_t q_dialogbuttonbox_qbase_height_for_width(void* self, int param1) {
    return QDialogButtonBox_QBaseHeightForWidth((QDialogButtonBox*)self, param1);
}

void q_dialogbuttonbox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QDialogButtonBox_OnHeightForWidth((QDialogButtonBox*)self, (intptr_t)callback);
}

bool q_dialogbuttonbox_has_height_for_width(void* self) {
    return QDialogButtonBox_HasHeightForWidth((QDialogButtonBox*)self);
}

bool q_dialogbuttonbox_qbase_has_height_for_width(void* self) {
    return QDialogButtonBox_QBaseHasHeightForWidth((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_has_height_for_width(void* self, bool (*callback)()) {
    QDialogButtonBox_OnHasHeightForWidth((QDialogButtonBox*)self, (intptr_t)callback);
}

QPaintEngine* q_dialogbuttonbox_paint_engine(void* self) {
    return QDialogButtonBox_PaintEngine((QDialogButtonBox*)self);
}

QPaintEngine* q_dialogbuttonbox_qbase_paint_engine(void* self) {
    return QDialogButtonBox_QBasePaintEngine((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QDialogButtonBox_OnPaintEngine((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_mouse_press_event(void* self, void* event) {
    QDialogButtonBox_MousePressEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

void q_dialogbuttonbox_qbase_mouse_press_event(void* self, void* event) {
    QDialogButtonBox_QBaseMousePressEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

void q_dialogbuttonbox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnMousePressEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_mouse_release_event(void* self, void* event) {
    QDialogButtonBox_MouseReleaseEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

void q_dialogbuttonbox_qbase_mouse_release_event(void* self, void* event) {
    QDialogButtonBox_QBaseMouseReleaseEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

void q_dialogbuttonbox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnMouseReleaseEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_mouse_double_click_event(void* self, void* event) {
    QDialogButtonBox_MouseDoubleClickEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

void q_dialogbuttonbox_qbase_mouse_double_click_event(void* self, void* event) {
    QDialogButtonBox_QBaseMouseDoubleClickEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

void q_dialogbuttonbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnMouseDoubleClickEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_mouse_move_event(void* self, void* event) {
    QDialogButtonBox_MouseMoveEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

void q_dialogbuttonbox_qbase_mouse_move_event(void* self, void* event) {
    QDialogButtonBox_QBaseMouseMoveEvent((QDialogButtonBox*)self, (QMouseEvent*)event);
}

void q_dialogbuttonbox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnMouseMoveEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_wheel_event(void* self, void* event) {
    QDialogButtonBox_WheelEvent((QDialogButtonBox*)self, (QWheelEvent*)event);
}

void q_dialogbuttonbox_qbase_wheel_event(void* self, void* event) {
    QDialogButtonBox_QBaseWheelEvent((QDialogButtonBox*)self, (QWheelEvent*)event);
}

void q_dialogbuttonbox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnWheelEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_key_press_event(void* self, void* event) {
    QDialogButtonBox_KeyPressEvent((QDialogButtonBox*)self, (QKeyEvent*)event);
}

void q_dialogbuttonbox_qbase_key_press_event(void* self, void* event) {
    QDialogButtonBox_QBaseKeyPressEvent((QDialogButtonBox*)self, (QKeyEvent*)event);
}

void q_dialogbuttonbox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnKeyPressEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_key_release_event(void* self, void* event) {
    QDialogButtonBox_KeyReleaseEvent((QDialogButtonBox*)self, (QKeyEvent*)event);
}

void q_dialogbuttonbox_qbase_key_release_event(void* self, void* event) {
    QDialogButtonBox_QBaseKeyReleaseEvent((QDialogButtonBox*)self, (QKeyEvent*)event);
}

void q_dialogbuttonbox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnKeyReleaseEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_focus_in_event(void* self, void* event) {
    QDialogButtonBox_FocusInEvent((QDialogButtonBox*)self, (QFocusEvent*)event);
}

void q_dialogbuttonbox_qbase_focus_in_event(void* self, void* event) {
    QDialogButtonBox_QBaseFocusInEvent((QDialogButtonBox*)self, (QFocusEvent*)event);
}

void q_dialogbuttonbox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnFocusInEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_focus_out_event(void* self, void* event) {
    QDialogButtonBox_FocusOutEvent((QDialogButtonBox*)self, (QFocusEvent*)event);
}

void q_dialogbuttonbox_qbase_focus_out_event(void* self, void* event) {
    QDialogButtonBox_QBaseFocusOutEvent((QDialogButtonBox*)self, (QFocusEvent*)event);
}

void q_dialogbuttonbox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnFocusOutEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_enter_event(void* self, void* event) {
    QDialogButtonBox_EnterEvent((QDialogButtonBox*)self, (QEnterEvent*)event);
}

void q_dialogbuttonbox_qbase_enter_event(void* self, void* event) {
    QDialogButtonBox_QBaseEnterEvent((QDialogButtonBox*)self, (QEnterEvent*)event);
}

void q_dialogbuttonbox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnEnterEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_leave_event(void* self, void* event) {
    QDialogButtonBox_LeaveEvent((QDialogButtonBox*)self, (QEvent*)event);
}

void q_dialogbuttonbox_qbase_leave_event(void* self, void* event) {
    QDialogButtonBox_QBaseLeaveEvent((QDialogButtonBox*)self, (QEvent*)event);
}

void q_dialogbuttonbox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnLeaveEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_paint_event(void* self, void* event) {
    QDialogButtonBox_PaintEvent((QDialogButtonBox*)self, (QPaintEvent*)event);
}

void q_dialogbuttonbox_qbase_paint_event(void* self, void* event) {
    QDialogButtonBox_QBasePaintEvent((QDialogButtonBox*)self, (QPaintEvent*)event);
}

void q_dialogbuttonbox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnPaintEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_move_event(void* self, void* event) {
    QDialogButtonBox_MoveEvent((QDialogButtonBox*)self, (QMoveEvent*)event);
}

void q_dialogbuttonbox_qbase_move_event(void* self, void* event) {
    QDialogButtonBox_QBaseMoveEvent((QDialogButtonBox*)self, (QMoveEvent*)event);
}

void q_dialogbuttonbox_on_move_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnMoveEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_resize_event(void* self, void* event) {
    QDialogButtonBox_ResizeEvent((QDialogButtonBox*)self, (QResizeEvent*)event);
}

void q_dialogbuttonbox_qbase_resize_event(void* self, void* event) {
    QDialogButtonBox_QBaseResizeEvent((QDialogButtonBox*)self, (QResizeEvent*)event);
}

void q_dialogbuttonbox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnResizeEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_close_event(void* self, void* event) {
    QDialogButtonBox_CloseEvent((QDialogButtonBox*)self, (QCloseEvent*)event);
}

void q_dialogbuttonbox_qbase_close_event(void* self, void* event) {
    QDialogButtonBox_QBaseCloseEvent((QDialogButtonBox*)self, (QCloseEvent*)event);
}

void q_dialogbuttonbox_on_close_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnCloseEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_context_menu_event(void* self, void* event) {
    QDialogButtonBox_ContextMenuEvent((QDialogButtonBox*)self, (QContextMenuEvent*)event);
}

void q_dialogbuttonbox_qbase_context_menu_event(void* self, void* event) {
    QDialogButtonBox_QBaseContextMenuEvent((QDialogButtonBox*)self, (QContextMenuEvent*)event);
}

void q_dialogbuttonbox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnContextMenuEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_tablet_event(void* self, void* event) {
    QDialogButtonBox_TabletEvent((QDialogButtonBox*)self, (QTabletEvent*)event);
}

void q_dialogbuttonbox_qbase_tablet_event(void* self, void* event) {
    QDialogButtonBox_QBaseTabletEvent((QDialogButtonBox*)self, (QTabletEvent*)event);
}

void q_dialogbuttonbox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnTabletEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_action_event(void* self, void* event) {
    QDialogButtonBox_ActionEvent((QDialogButtonBox*)self, (QActionEvent*)event);
}

void q_dialogbuttonbox_qbase_action_event(void* self, void* event) {
    QDialogButtonBox_QBaseActionEvent((QDialogButtonBox*)self, (QActionEvent*)event);
}

void q_dialogbuttonbox_on_action_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnActionEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_drag_enter_event(void* self, void* event) {
    QDialogButtonBox_DragEnterEvent((QDialogButtonBox*)self, (QDragEnterEvent*)event);
}

void q_dialogbuttonbox_qbase_drag_enter_event(void* self, void* event) {
    QDialogButtonBox_QBaseDragEnterEvent((QDialogButtonBox*)self, (QDragEnterEvent*)event);
}

void q_dialogbuttonbox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnDragEnterEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_drag_move_event(void* self, void* event) {
    QDialogButtonBox_DragMoveEvent((QDialogButtonBox*)self, (QDragMoveEvent*)event);
}

void q_dialogbuttonbox_qbase_drag_move_event(void* self, void* event) {
    QDialogButtonBox_QBaseDragMoveEvent((QDialogButtonBox*)self, (QDragMoveEvent*)event);
}

void q_dialogbuttonbox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnDragMoveEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_drag_leave_event(void* self, void* event) {
    QDialogButtonBox_DragLeaveEvent((QDialogButtonBox*)self, (QDragLeaveEvent*)event);
}

void q_dialogbuttonbox_qbase_drag_leave_event(void* self, void* event) {
    QDialogButtonBox_QBaseDragLeaveEvent((QDialogButtonBox*)self, (QDragLeaveEvent*)event);
}

void q_dialogbuttonbox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnDragLeaveEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_drop_event(void* self, void* event) {
    QDialogButtonBox_DropEvent((QDialogButtonBox*)self, (QDropEvent*)event);
}

void q_dialogbuttonbox_qbase_drop_event(void* self, void* event) {
    QDialogButtonBox_QBaseDropEvent((QDialogButtonBox*)self, (QDropEvent*)event);
}

void q_dialogbuttonbox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnDropEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_show_event(void* self, void* event) {
    QDialogButtonBox_ShowEvent((QDialogButtonBox*)self, (QShowEvent*)event);
}

void q_dialogbuttonbox_qbase_show_event(void* self, void* event) {
    QDialogButtonBox_QBaseShowEvent((QDialogButtonBox*)self, (QShowEvent*)event);
}

void q_dialogbuttonbox_on_show_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnShowEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_hide_event(void* self, void* event) {
    QDialogButtonBox_HideEvent((QDialogButtonBox*)self, (QHideEvent*)event);
}

void q_dialogbuttonbox_qbase_hide_event(void* self, void* event) {
    QDialogButtonBox_QBaseHideEvent((QDialogButtonBox*)self, (QHideEvent*)event);
}

void q_dialogbuttonbox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnHideEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

bool q_dialogbuttonbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDialogButtonBox_NativeEvent((QDialogButtonBox*)self, qstring(eventType), message, result);
}

bool q_dialogbuttonbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDialogButtonBox_QBaseNativeEvent((QDialogButtonBox*)self, qstring(eventType), message, result);
}

void q_dialogbuttonbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QDialogButtonBox_OnNativeEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

int32_t q_dialogbuttonbox_metric(void* self, int32_t param1) {
    return QDialogButtonBox_Metric((QDialogButtonBox*)self, param1);
}

int32_t q_dialogbuttonbox_qbase_metric(void* self, int32_t param1) {
    return QDialogButtonBox_QBaseMetric((QDialogButtonBox*)self, param1);
}

void q_dialogbuttonbox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QDialogButtonBox_OnMetric((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_init_painter(void* self, void* painter) {
    QDialogButtonBox_InitPainter((QDialogButtonBox*)self, (QPainter*)painter);
}

void q_dialogbuttonbox_qbase_init_painter(void* self, void* painter) {
    QDialogButtonBox_QBaseInitPainter((QDialogButtonBox*)self, (QPainter*)painter);
}

void q_dialogbuttonbox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnInitPainter((QDialogButtonBox*)self, (intptr_t)callback);
}

QPaintDevice* q_dialogbuttonbox_redirected(void* self, void* offset) {
    return QDialogButtonBox_Redirected((QDialogButtonBox*)self, (QPoint*)offset);
}

QPaintDevice* q_dialogbuttonbox_qbase_redirected(void* self, void* offset) {
    return QDialogButtonBox_QBaseRedirected((QDialogButtonBox*)self, (QPoint*)offset);
}

void q_dialogbuttonbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QDialogButtonBox_OnRedirected((QDialogButtonBox*)self, (intptr_t)callback);
}

QPainter* q_dialogbuttonbox_shared_painter(void* self) {
    return QDialogButtonBox_SharedPainter((QDialogButtonBox*)self);
}

QPainter* q_dialogbuttonbox_qbase_shared_painter(void* self) {
    return QDialogButtonBox_QBaseSharedPainter((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_shared_painter(void* self, QPainter* (*callback)()) {
    QDialogButtonBox_OnSharedPainter((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_input_method_event(void* self, void* param1) {
    QDialogButtonBox_InputMethodEvent((QDialogButtonBox*)self, (QInputMethodEvent*)param1);
}

void q_dialogbuttonbox_qbase_input_method_event(void* self, void* param1) {
    QDialogButtonBox_QBaseInputMethodEvent((QDialogButtonBox*)self, (QInputMethodEvent*)param1);
}

void q_dialogbuttonbox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnInputMethodEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

QVariant* q_dialogbuttonbox_input_method_query(void* self, int32_t param1) {
    return QDialogButtonBox_InputMethodQuery((QDialogButtonBox*)self, param1);
}

QVariant* q_dialogbuttonbox_qbase_input_method_query(void* self, int32_t param1) {
    return QDialogButtonBox_QBaseInputMethodQuery((QDialogButtonBox*)self, param1);
}

void q_dialogbuttonbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QDialogButtonBox_OnInputMethodQuery((QDialogButtonBox*)self, (intptr_t)callback);
}

bool q_dialogbuttonbox_focus_next_prev_child(void* self, bool next) {
    return QDialogButtonBox_FocusNextPrevChild((QDialogButtonBox*)self, next);
}

bool q_dialogbuttonbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QDialogButtonBox_QBaseFocusNextPrevChild((QDialogButtonBox*)self, next);
}

void q_dialogbuttonbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QDialogButtonBox_OnFocusNextPrevChild((QDialogButtonBox*)self, (intptr_t)callback);
}

bool q_dialogbuttonbox_event_filter(void* self, void* watched, void* event) {
    return QDialogButtonBox_EventFilter((QDialogButtonBox*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dialogbuttonbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QDialogButtonBox_QBaseEventFilter((QDialogButtonBox*)self, (QObject*)watched, (QEvent*)event);
}

void q_dialogbuttonbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDialogButtonBox_OnEventFilter((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_timer_event(void* self, void* event) {
    QDialogButtonBox_TimerEvent((QDialogButtonBox*)self, (QTimerEvent*)event);
}

void q_dialogbuttonbox_qbase_timer_event(void* self, void* event) {
    QDialogButtonBox_QBaseTimerEvent((QDialogButtonBox*)self, (QTimerEvent*)event);
}

void q_dialogbuttonbox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnTimerEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_child_event(void* self, void* event) {
    QDialogButtonBox_ChildEvent((QDialogButtonBox*)self, (QChildEvent*)event);
}

void q_dialogbuttonbox_qbase_child_event(void* self, void* event) {
    QDialogButtonBox_QBaseChildEvent((QDialogButtonBox*)self, (QChildEvent*)event);
}

void q_dialogbuttonbox_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnChildEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_custom_event(void* self, void* event) {
    QDialogButtonBox_CustomEvent((QDialogButtonBox*)self, (QEvent*)event);
}

void q_dialogbuttonbox_qbase_custom_event(void* self, void* event) {
    QDialogButtonBox_QBaseCustomEvent((QDialogButtonBox*)self, (QEvent*)event);
}

void q_dialogbuttonbox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnCustomEvent((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_connect_notify(void* self, void* signal) {
    QDialogButtonBox_ConnectNotify((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

void q_dialogbuttonbox_qbase_connect_notify(void* self, void* signal) {
    QDialogButtonBox_QBaseConnectNotify((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

void q_dialogbuttonbox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnConnectNotify((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_disconnect_notify(void* self, void* signal) {
    QDialogButtonBox_DisconnectNotify((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

void q_dialogbuttonbox_qbase_disconnect_notify(void* self, void* signal) {
    QDialogButtonBox_QBaseDisconnectNotify((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

void q_dialogbuttonbox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDialogButtonBox_OnDisconnectNotify((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_update_micro_focus(void* self) {
    QDialogButtonBox_UpdateMicroFocus((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_qbase_update_micro_focus(void* self) {
    QDialogButtonBox_QBaseUpdateMicroFocus((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_update_micro_focus(void* self, void (*callback)()) {
    QDialogButtonBox_OnUpdateMicroFocus((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_create(void* self) {
    QDialogButtonBox_Create((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_qbase_create(void* self) {
    QDialogButtonBox_QBaseCreate((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_create(void* self, void (*callback)()) {
    QDialogButtonBox_OnCreate((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_destroy(void* self) {
    QDialogButtonBox_Destroy((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_qbase_destroy(void* self) {
    QDialogButtonBox_QBaseDestroy((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_destroy(void* self, void (*callback)()) {
    QDialogButtonBox_OnDestroy((QDialogButtonBox*)self, (intptr_t)callback);
}

bool q_dialogbuttonbox_focus_next_child(void* self) {
    return QDialogButtonBox_FocusNextChild((QDialogButtonBox*)self);
}

bool q_dialogbuttonbox_qbase_focus_next_child(void* self) {
    return QDialogButtonBox_QBaseFocusNextChild((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_focus_next_child(void* self, bool (*callback)()) {
    QDialogButtonBox_OnFocusNextChild((QDialogButtonBox*)self, (intptr_t)callback);
}

bool q_dialogbuttonbox_focus_previous_child(void* self) {
    return QDialogButtonBox_FocusPreviousChild((QDialogButtonBox*)self);
}

bool q_dialogbuttonbox_qbase_focus_previous_child(void* self) {
    return QDialogButtonBox_QBaseFocusPreviousChild((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_focus_previous_child(void* self, bool (*callback)()) {
    QDialogButtonBox_OnFocusPreviousChild((QDialogButtonBox*)self, (intptr_t)callback);
}

QObject* q_dialogbuttonbox_sender(void* self) {
    return QDialogButtonBox_Sender((QDialogButtonBox*)self);
}

QObject* q_dialogbuttonbox_qbase_sender(void* self) {
    return QDialogButtonBox_QBaseSender((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_sender(void* self, QObject* (*callback)()) {
    QDialogButtonBox_OnSender((QDialogButtonBox*)self, (intptr_t)callback);
}

int32_t q_dialogbuttonbox_sender_signal_index(void* self) {
    return QDialogButtonBox_SenderSignalIndex((QDialogButtonBox*)self);
}

int32_t q_dialogbuttonbox_qbase_sender_signal_index(void* self) {
    return QDialogButtonBox_QBaseSenderSignalIndex((QDialogButtonBox*)self);
}

void q_dialogbuttonbox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDialogButtonBox_OnSenderSignalIndex((QDialogButtonBox*)self, (intptr_t)callback);
}

int32_t q_dialogbuttonbox_receivers(void* self, const char* signal) {
    return QDialogButtonBox_Receivers((QDialogButtonBox*)self, signal);
}

int32_t q_dialogbuttonbox_qbase_receivers(void* self, const char* signal) {
    return QDialogButtonBox_QBaseReceivers((QDialogButtonBox*)self, signal);
}

void q_dialogbuttonbox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDialogButtonBox_OnReceivers((QDialogButtonBox*)self, (intptr_t)callback);
}

bool q_dialogbuttonbox_is_signal_connected(void* self, void* signal) {
    return QDialogButtonBox_IsSignalConnected((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

bool q_dialogbuttonbox_qbase_is_signal_connected(void* self, void* signal) {
    return QDialogButtonBox_QBaseIsSignalConnected((QDialogButtonBox*)self, (QMetaMethod*)signal);
}

void q_dialogbuttonbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDialogButtonBox_OnIsSignalConnected((QDialogButtonBox*)self, (intptr_t)callback);
}

double q_dialogbuttonbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QDialogButtonBox_GetDecodedMetricF((QDialogButtonBox*)self, metricA, metricB);
}

double q_dialogbuttonbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QDialogButtonBox_QBaseGetDecodedMetricF((QDialogButtonBox*)self, metricA, metricB);
}

void q_dialogbuttonbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QDialogButtonBox_OnGetDecodedMetricF((QDialogButtonBox*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dialogbuttonbox_delete(void* self) {
    QDialogButtonBox_Delete((QDialogButtonBox*)(self));
}
