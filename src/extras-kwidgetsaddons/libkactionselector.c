#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqlistwidget.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkactionselector.hpp"
#include "libkactionselector.h"

KActionSelector* k_actionselector_new(void* parent) {
    return KActionSelector_new((QWidget*)parent);
}

KActionSelector* k_actionselector_new2() {
    return KActionSelector_new2();
}

const QMetaObject* k_actionselector_meta_object(void* self) {
    return KActionSelector_MetaObject((KActionSelector*)self);
}

void* k_actionselector_metacast(void* self, const char* param1) {
    return KActionSelector_Metacast((KActionSelector*)self, param1);
}

int32_t k_actionselector_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KActionSelector_Metacall((KActionSelector*)self, param1, param2, param3);
}

void k_actionselector_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KActionSelector_OnMetacall((KActionSelector*)self, (intptr_t)callback);
}

int32_t k_actionselector_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KActionSelector_QBaseMetacall((KActionSelector*)self, param1, param2, param3);
}

const char* k_actionselector_tr(const char* s) {
    libqt_string _str = KActionSelector_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QListWidget* k_actionselector_available_list_widget(void* self) {
    return KActionSelector_AvailableListWidget((KActionSelector*)self);
}

QListWidget* k_actionselector_selected_list_widget(void* self) {
    return KActionSelector_SelectedListWidget((KActionSelector*)self);
}

bool k_actionselector_move_on_double_click(void* self) {
    return KActionSelector_MoveOnDoubleClick((KActionSelector*)self);
}

void k_actionselector_set_move_on_double_click(void* self, bool enable) {
    KActionSelector_SetMoveOnDoubleClick((KActionSelector*)self, enable);
}

bool k_actionselector_keyboard_enabled(void* self) {
    return KActionSelector_KeyboardEnabled((KActionSelector*)self);
}

void k_actionselector_set_keyboard_enabled(void* self, bool enable) {
    KActionSelector_SetKeyboardEnabled((KActionSelector*)self, enable);
}

const char* k_actionselector_available_label(void* self) {
    libqt_string _str = KActionSelector_AvailableLabel((KActionSelector*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_available_label(void* self, const char* text) {
    KActionSelector_SetAvailableLabel((KActionSelector*)self, qstring(text));
}

const char* k_actionselector_selected_label(void* self) {
    libqt_string _str = KActionSelector_SelectedLabel((KActionSelector*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_selected_label(void* self, const char* text) {
    KActionSelector_SetSelectedLabel((KActionSelector*)self, qstring(text));
}

int32_t k_actionselector_available_insertion_policy(void* self) {
    return KActionSelector_AvailableInsertionPolicy((KActionSelector*)self);
}

void k_actionselector_set_available_insertion_policy(void* self, int32_t policy) {
    KActionSelector_SetAvailableInsertionPolicy((KActionSelector*)self, policy);
}

int32_t k_actionselector_selected_insertion_policy(void* self) {
    return KActionSelector_SelectedInsertionPolicy((KActionSelector*)self);
}

void k_actionselector_set_selected_insertion_policy(void* self, int32_t policy) {
    KActionSelector_SetSelectedInsertionPolicy((KActionSelector*)self, policy);
}

bool k_actionselector_show_up_down_buttons(void* self) {
    return KActionSelector_ShowUpDownButtons((KActionSelector*)self);
}

void k_actionselector_set_show_up_down_buttons(void* self, bool show) {
    KActionSelector_SetShowUpDownButtons((KActionSelector*)self, show);
}

void k_actionselector_set_button_icon(void* self, const char* icon, int32_t button) {
    KActionSelector_SetButtonIcon((KActionSelector*)self, qstring(icon), button);
}

void k_actionselector_set_button_icon_set(void* self, void* iconset, int32_t button) {
    KActionSelector_SetButtonIconSet((KActionSelector*)self, (QIcon*)iconset, button);
}

void k_actionselector_set_button_tooltip(void* self, const char* tip, int32_t button) {
    KActionSelector_SetButtonTooltip((KActionSelector*)self, qstring(tip), button);
}

void k_actionselector_set_button_whats_this(void* self, const char* text, int32_t button) {
    KActionSelector_SetButtonWhatsThis((KActionSelector*)self, qstring(text), button);
}

void k_actionselector_added(void* self, void* item) {
    KActionSelector_Added((KActionSelector*)self, (QListWidgetItem*)item);
}

void k_actionselector_on_added(void* self, void (*callback)(void*, void*)) {
    KActionSelector_Connect_Added((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_removed(void* self, void* item) {
    KActionSelector_Removed((KActionSelector*)self, (QListWidgetItem*)item);
}

void k_actionselector_on_removed(void* self, void (*callback)(void*, void*)) {
    KActionSelector_Connect_Removed((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_moved_up(void* self, void* item) {
    KActionSelector_MovedUp((KActionSelector*)self, (QListWidgetItem*)item);
}

void k_actionselector_on_moved_up(void* self, void (*callback)(void*, void*)) {
    KActionSelector_Connect_MovedUp((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_moved_down(void* self, void* item) {
    KActionSelector_MovedDown((KActionSelector*)self, (QListWidgetItem*)item);
}

void k_actionselector_on_moved_down(void* self, void (*callback)(void*, void*)) {
    KActionSelector_Connect_MovedDown((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_set_buttons_enabled(void* self) {
    KActionSelector_SetButtonsEnabled((KActionSelector*)self);
}

void k_actionselector_key_press_event(void* self, void* param1) {
    KActionSelector_KeyPressEvent((KActionSelector*)self, (QKeyEvent*)param1);
}

void k_actionselector_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnKeyPressEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_qbase_key_press_event(void* self, void* param1) {
    KActionSelector_QBaseKeyPressEvent((KActionSelector*)self, (QKeyEvent*)param1);
}

bool k_actionselector_event_filter(void* self, void* param1, void* param2) {
    return KActionSelector_EventFilter((KActionSelector*)self, (QObject*)param1, (QEvent*)param2);
}

void k_actionselector_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KActionSelector_OnEventFilter((KActionSelector*)self, (intptr_t)callback);
}

bool k_actionselector_qbase_event_filter(void* self, void* param1, void* param2) {
    return KActionSelector_QBaseEventFilter((KActionSelector*)self, (QObject*)param1, (QEvent*)param2);
}

const char* k_actionselector_tr2(const char* s, const char* c) {
    libqt_string _str = KActionSelector_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_actionselector_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KActionSelector_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_actionselector_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_actionselector_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_actionselector_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_actionselector_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_actionselector_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_actionselector_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_actionselector_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_actionselector_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_actionselector_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_actionselector_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_actionselector_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_actionselector_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_actionselector_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_actionselector_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_actionselector_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_actionselector_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_actionselector_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_actionselector_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_actionselector_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_actionselector_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_actionselector_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_actionselector_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_actionselector_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_actionselector_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_actionselector_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_actionselector_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_actionselector_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_actionselector_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_actionselector_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_actionselector_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_actionselector_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_actionselector_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_actionselector_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_actionselector_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_actionselector_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_actionselector_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_actionselector_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_actionselector_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_actionselector_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_actionselector_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_actionselector_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_actionselector_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_actionselector_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_actionselector_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_actionselector_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_actionselector_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_actionselector_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_actionselector_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_actionselector_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_actionselector_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_actionselector_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_actionselector_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_actionselector_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_actionselector_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_actionselector_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_actionselector_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_actionselector_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_actionselector_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_actionselector_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_actionselector_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_actionselector_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_actionselector_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_actionselector_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_actionselector_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_actionselector_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_actionselector_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_actionselector_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_actionselector_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_actionselector_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_actionselector_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_actionselector_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_actionselector_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_actionselector_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_actionselector_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_actionselector_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_actionselector_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_actionselector_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_actionselector_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_actionselector_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_actionselector_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_actionselector_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_actionselector_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_actionselector_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_actionselector_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_actionselector_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_actionselector_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_actionselector_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_actionselector_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_actionselector_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_actionselector_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_actionselector_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_actionselector_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_actionselector_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_actionselector_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_actionselector_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_actionselector_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_actionselector_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_actionselector_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_actionselector_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_actionselector_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_actionselector_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_actionselector_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_actionselector_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_actionselector_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_actionselector_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_actionselector_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_actionselector_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_actionselector_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_actionselector_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_actionselector_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_actionselector_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_actionselector_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_actionselector_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_actionselector_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_actionselector_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_actionselector_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_actionselector_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_actionselector_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_actionselector_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_actionselector_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_actionselector_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_actionselector_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_actionselector_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_actionselector_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_actionselector_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_actionselector_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_actionselector_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_actionselector_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_actionselector_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_actionselector_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_actionselector_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_actionselector_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_actionselector_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_actionselector_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_actionselector_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_actionselector_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_actionselector_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_actionselector_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_actionselector_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_actionselector_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_actionselector_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_actionselector_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_actionselector_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_actionselector_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_actionselector_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_actionselector_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_actionselector_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_actionselector_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_actionselector_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_actionselector_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_actionselector_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_actionselector_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_actionselector_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_actionselector_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_actionselector_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_actionselector_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_actionselector_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_actionselector_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_actionselector_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_actionselector_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_actionselector_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_actionselector_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_actionselector_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_actionselector_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_actionselector_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_actionselector_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_actionselector_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_actionselector_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_actionselector_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_actionselector_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_actionselector_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_actionselector_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_actionselector_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_actionselector_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_actionselector_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_actionselector_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_actionselector_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_actionselector_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_actionselector_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_actionselector_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_actionselector_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_actionselector_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_actionselector_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_actionselector_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_actionselector_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_actionselector_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_actionselector_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_actionselector_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_actionselector_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_actionselector_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_actionselector_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_actionselector_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_actionselector_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_actionselector_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_actionselector_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_actionselector_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_actionselector_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_actionselector_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_actionselector_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_actionselector_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_actionselector_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_actionselector_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_actionselector_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_actionselector_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_actionselector_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_actionselector_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_actionselector_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_actionselector_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_actionselector_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_actionselector_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_actionselector_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_actionselector_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_actionselector_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_actionselector_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_actionselector_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_actionselector_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_actionselector_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_actionselector_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_actionselector_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_actionselector_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_actionselector_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_actionselector_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_actionselector_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_actionselector_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_actionselector_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_actionselector_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_actionselector_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_actionselector_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_actionselector_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_actionselector_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_actionselector_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_actionselector_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_actionselector_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_actionselector_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_actionselector_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_actionselector_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_actionselector_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_actionselector_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_actionselector_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_actionselector_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_actionselector_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_actionselector_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_actionselector_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_actionselector_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_actionselector_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_actionselector_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_actionselector_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_actionselector_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_actionselector_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_actionselector_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_actionselector_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_actionselector_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_actionselector_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_actionselector_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_actionselector_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_actionselector_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_actionselector_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_actionselector_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_actionselector_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_actionselector_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_actionselector_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_actionselector_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_actionselector_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_actionselector_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_actionselector_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_actionselector_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_actionselector_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_actionselector_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_actionselector_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_actionselector_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_actionselector_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_actionselector_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_actionselector_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_actionselector_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_actionselector_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_actionselector_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_actionselector_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_actionselector_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_actionselector_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_actionselector_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_actionselector_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_actionselector_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_actionselector_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_actionselector_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_actionselector_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_actionselector_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_actionselector_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_actionselector_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_actionselector_dynamic_property_names");
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

QBindingStorage* k_actionselector_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_actionselector_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_actionselector_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_actionselector_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_actionselector_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_actionselector_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_actionselector_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_actionselector_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_actionselector_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_actionselector_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_actionselector_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_actionselector_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_actionselector_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_actionselector_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_actionselector_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_actionselector_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_actionselector_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_actionselector_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_actionselector_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_actionselector_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_actionselector_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_actionselector_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_actionselector_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_actionselector_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_actionselector_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_actionselector_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_actionselector_dev_type(void* self) {
    return KActionSelector_DevType((KActionSelector*)self);
}

int32_t k_actionselector_qbase_dev_type(void* self) {
    return KActionSelector_QBaseDevType((KActionSelector*)self);
}

void k_actionselector_on_dev_type(void* self, int32_t (*callback)()) {
    KActionSelector_OnDevType((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_set_visible(void* self, bool visible) {
    KActionSelector_SetVisible((KActionSelector*)self, visible);
}

void k_actionselector_qbase_set_visible(void* self, bool visible) {
    KActionSelector_QBaseSetVisible((KActionSelector*)self, visible);
}

void k_actionselector_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KActionSelector_OnSetVisible((KActionSelector*)self, (intptr_t)callback);
}

QSize* k_actionselector_size_hint(void* self) {
    return KActionSelector_SizeHint((KActionSelector*)self);
}

QSize* k_actionselector_qbase_size_hint(void* self) {
    return KActionSelector_QBaseSizeHint((KActionSelector*)self);
}

void k_actionselector_on_size_hint(void* self, QSize* (*callback)()) {
    KActionSelector_OnSizeHint((KActionSelector*)self, (intptr_t)callback);
}

QSize* k_actionselector_minimum_size_hint(void* self) {
    return KActionSelector_MinimumSizeHint((KActionSelector*)self);
}

QSize* k_actionselector_qbase_minimum_size_hint(void* self) {
    return KActionSelector_QBaseMinimumSizeHint((KActionSelector*)self);
}

void k_actionselector_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KActionSelector_OnMinimumSizeHint((KActionSelector*)self, (intptr_t)callback);
}

int32_t k_actionselector_height_for_width(void* self, int param1) {
    return KActionSelector_HeightForWidth((KActionSelector*)self, param1);
}

int32_t k_actionselector_qbase_height_for_width(void* self, int param1) {
    return KActionSelector_QBaseHeightForWidth((KActionSelector*)self, param1);
}

void k_actionselector_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KActionSelector_OnHeightForWidth((KActionSelector*)self, (intptr_t)callback);
}

bool k_actionselector_has_height_for_width(void* self) {
    return KActionSelector_HasHeightForWidth((KActionSelector*)self);
}

bool k_actionselector_qbase_has_height_for_width(void* self) {
    return KActionSelector_QBaseHasHeightForWidth((KActionSelector*)self);
}

void k_actionselector_on_has_height_for_width(void* self, bool (*callback)()) {
    KActionSelector_OnHasHeightForWidth((KActionSelector*)self, (intptr_t)callback);
}

QPaintEngine* k_actionselector_paint_engine(void* self) {
    return KActionSelector_PaintEngine((KActionSelector*)self);
}

QPaintEngine* k_actionselector_qbase_paint_engine(void* self) {
    return KActionSelector_QBasePaintEngine((KActionSelector*)self);
}

void k_actionselector_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KActionSelector_OnPaintEngine((KActionSelector*)self, (intptr_t)callback);
}

bool k_actionselector_event(void* self, void* event) {
    return KActionSelector_Event((KActionSelector*)self, (QEvent*)event);
}

bool k_actionselector_qbase_event(void* self, void* event) {
    return KActionSelector_QBaseEvent((KActionSelector*)self, (QEvent*)event);
}

void k_actionselector_on_event(void* self, bool (*callback)(void*, void*)) {
    KActionSelector_OnEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_mouse_press_event(void* self, void* event) {
    KActionSelector_MousePressEvent((KActionSelector*)self, (QMouseEvent*)event);
}

void k_actionselector_qbase_mouse_press_event(void* self, void* event) {
    KActionSelector_QBaseMousePressEvent((KActionSelector*)self, (QMouseEvent*)event);
}

void k_actionselector_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnMousePressEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_mouse_release_event(void* self, void* event) {
    KActionSelector_MouseReleaseEvent((KActionSelector*)self, (QMouseEvent*)event);
}

void k_actionselector_qbase_mouse_release_event(void* self, void* event) {
    KActionSelector_QBaseMouseReleaseEvent((KActionSelector*)self, (QMouseEvent*)event);
}

void k_actionselector_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnMouseReleaseEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_mouse_double_click_event(void* self, void* event) {
    KActionSelector_MouseDoubleClickEvent((KActionSelector*)self, (QMouseEvent*)event);
}

void k_actionselector_qbase_mouse_double_click_event(void* self, void* event) {
    KActionSelector_QBaseMouseDoubleClickEvent((KActionSelector*)self, (QMouseEvent*)event);
}

void k_actionselector_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnMouseDoubleClickEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_mouse_move_event(void* self, void* event) {
    KActionSelector_MouseMoveEvent((KActionSelector*)self, (QMouseEvent*)event);
}

void k_actionselector_qbase_mouse_move_event(void* self, void* event) {
    KActionSelector_QBaseMouseMoveEvent((KActionSelector*)self, (QMouseEvent*)event);
}

void k_actionselector_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnMouseMoveEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_wheel_event(void* self, void* event) {
    KActionSelector_WheelEvent((KActionSelector*)self, (QWheelEvent*)event);
}

void k_actionselector_qbase_wheel_event(void* self, void* event) {
    KActionSelector_QBaseWheelEvent((KActionSelector*)self, (QWheelEvent*)event);
}

void k_actionselector_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnWheelEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_key_release_event(void* self, void* event) {
    KActionSelector_KeyReleaseEvent((KActionSelector*)self, (QKeyEvent*)event);
}

void k_actionselector_qbase_key_release_event(void* self, void* event) {
    KActionSelector_QBaseKeyReleaseEvent((KActionSelector*)self, (QKeyEvent*)event);
}

void k_actionselector_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnKeyReleaseEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_focus_in_event(void* self, void* event) {
    KActionSelector_FocusInEvent((KActionSelector*)self, (QFocusEvent*)event);
}

void k_actionselector_qbase_focus_in_event(void* self, void* event) {
    KActionSelector_QBaseFocusInEvent((KActionSelector*)self, (QFocusEvent*)event);
}

void k_actionselector_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnFocusInEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_focus_out_event(void* self, void* event) {
    KActionSelector_FocusOutEvent((KActionSelector*)self, (QFocusEvent*)event);
}

void k_actionselector_qbase_focus_out_event(void* self, void* event) {
    KActionSelector_QBaseFocusOutEvent((KActionSelector*)self, (QFocusEvent*)event);
}

void k_actionselector_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnFocusOutEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_enter_event(void* self, void* event) {
    KActionSelector_EnterEvent((KActionSelector*)self, (QEnterEvent*)event);
}

void k_actionselector_qbase_enter_event(void* self, void* event) {
    KActionSelector_QBaseEnterEvent((KActionSelector*)self, (QEnterEvent*)event);
}

void k_actionselector_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnEnterEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_leave_event(void* self, void* event) {
    KActionSelector_LeaveEvent((KActionSelector*)self, (QEvent*)event);
}

void k_actionselector_qbase_leave_event(void* self, void* event) {
    KActionSelector_QBaseLeaveEvent((KActionSelector*)self, (QEvent*)event);
}

void k_actionselector_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnLeaveEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_paint_event(void* self, void* event) {
    KActionSelector_PaintEvent((KActionSelector*)self, (QPaintEvent*)event);
}

void k_actionselector_qbase_paint_event(void* self, void* event) {
    KActionSelector_QBasePaintEvent((KActionSelector*)self, (QPaintEvent*)event);
}

void k_actionselector_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnPaintEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_move_event(void* self, void* event) {
    KActionSelector_MoveEvent((KActionSelector*)self, (QMoveEvent*)event);
}

void k_actionselector_qbase_move_event(void* self, void* event) {
    KActionSelector_QBaseMoveEvent((KActionSelector*)self, (QMoveEvent*)event);
}

void k_actionselector_on_move_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnMoveEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_resize_event(void* self, void* event) {
    KActionSelector_ResizeEvent((KActionSelector*)self, (QResizeEvent*)event);
}

void k_actionselector_qbase_resize_event(void* self, void* event) {
    KActionSelector_QBaseResizeEvent((KActionSelector*)self, (QResizeEvent*)event);
}

void k_actionselector_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnResizeEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_close_event(void* self, void* event) {
    KActionSelector_CloseEvent((KActionSelector*)self, (QCloseEvent*)event);
}

void k_actionselector_qbase_close_event(void* self, void* event) {
    KActionSelector_QBaseCloseEvent((KActionSelector*)self, (QCloseEvent*)event);
}

void k_actionselector_on_close_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnCloseEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_context_menu_event(void* self, void* event) {
    KActionSelector_ContextMenuEvent((KActionSelector*)self, (QContextMenuEvent*)event);
}

void k_actionselector_qbase_context_menu_event(void* self, void* event) {
    KActionSelector_QBaseContextMenuEvent((KActionSelector*)self, (QContextMenuEvent*)event);
}

void k_actionselector_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnContextMenuEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_tablet_event(void* self, void* event) {
    KActionSelector_TabletEvent((KActionSelector*)self, (QTabletEvent*)event);
}

void k_actionselector_qbase_tablet_event(void* self, void* event) {
    KActionSelector_QBaseTabletEvent((KActionSelector*)self, (QTabletEvent*)event);
}

void k_actionselector_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnTabletEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_action_event(void* self, void* event) {
    KActionSelector_ActionEvent((KActionSelector*)self, (QActionEvent*)event);
}

void k_actionselector_qbase_action_event(void* self, void* event) {
    KActionSelector_QBaseActionEvent((KActionSelector*)self, (QActionEvent*)event);
}

void k_actionselector_on_action_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnActionEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_drag_enter_event(void* self, void* event) {
    KActionSelector_DragEnterEvent((KActionSelector*)self, (QDragEnterEvent*)event);
}

void k_actionselector_qbase_drag_enter_event(void* self, void* event) {
    KActionSelector_QBaseDragEnterEvent((KActionSelector*)self, (QDragEnterEvent*)event);
}

void k_actionselector_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnDragEnterEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_drag_move_event(void* self, void* event) {
    KActionSelector_DragMoveEvent((KActionSelector*)self, (QDragMoveEvent*)event);
}

void k_actionselector_qbase_drag_move_event(void* self, void* event) {
    KActionSelector_QBaseDragMoveEvent((KActionSelector*)self, (QDragMoveEvent*)event);
}

void k_actionselector_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnDragMoveEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_drag_leave_event(void* self, void* event) {
    KActionSelector_DragLeaveEvent((KActionSelector*)self, (QDragLeaveEvent*)event);
}

void k_actionselector_qbase_drag_leave_event(void* self, void* event) {
    KActionSelector_QBaseDragLeaveEvent((KActionSelector*)self, (QDragLeaveEvent*)event);
}

void k_actionselector_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnDragLeaveEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_drop_event(void* self, void* event) {
    KActionSelector_DropEvent((KActionSelector*)self, (QDropEvent*)event);
}

void k_actionselector_qbase_drop_event(void* self, void* event) {
    KActionSelector_QBaseDropEvent((KActionSelector*)self, (QDropEvent*)event);
}

void k_actionselector_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnDropEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_show_event(void* self, void* event) {
    KActionSelector_ShowEvent((KActionSelector*)self, (QShowEvent*)event);
}

void k_actionselector_qbase_show_event(void* self, void* event) {
    KActionSelector_QBaseShowEvent((KActionSelector*)self, (QShowEvent*)event);
}

void k_actionselector_on_show_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnShowEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_hide_event(void* self, void* event) {
    KActionSelector_HideEvent((KActionSelector*)self, (QHideEvent*)event);
}

void k_actionselector_qbase_hide_event(void* self, void* event) {
    KActionSelector_QBaseHideEvent((KActionSelector*)self, (QHideEvent*)event);
}

void k_actionselector_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnHideEvent((KActionSelector*)self, (intptr_t)callback);
}

bool k_actionselector_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KActionSelector_NativeEvent((KActionSelector*)self, qstring(eventType), message, result);
}

bool k_actionselector_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KActionSelector_QBaseNativeEvent((KActionSelector*)self, qstring(eventType), message, result);
}

void k_actionselector_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KActionSelector_OnNativeEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_change_event(void* self, void* param1) {
    KActionSelector_ChangeEvent((KActionSelector*)self, (QEvent*)param1);
}

void k_actionselector_qbase_change_event(void* self, void* param1) {
    KActionSelector_QBaseChangeEvent((KActionSelector*)self, (QEvent*)param1);
}

void k_actionselector_on_change_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnChangeEvent((KActionSelector*)self, (intptr_t)callback);
}

int32_t k_actionselector_metric(void* self, int32_t param1) {
    return KActionSelector_Metric((KActionSelector*)self, param1);
}

int32_t k_actionselector_qbase_metric(void* self, int32_t param1) {
    return KActionSelector_QBaseMetric((KActionSelector*)self, param1);
}

void k_actionselector_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KActionSelector_OnMetric((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_init_painter(void* self, void* painter) {
    KActionSelector_InitPainter((KActionSelector*)self, (QPainter*)painter);
}

void k_actionselector_qbase_init_painter(void* self, void* painter) {
    KActionSelector_QBaseInitPainter((KActionSelector*)self, (QPainter*)painter);
}

void k_actionselector_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnInitPainter((KActionSelector*)self, (intptr_t)callback);
}

QPaintDevice* k_actionselector_redirected(void* self, void* offset) {
    return KActionSelector_Redirected((KActionSelector*)self, (QPoint*)offset);
}

QPaintDevice* k_actionselector_qbase_redirected(void* self, void* offset) {
    return KActionSelector_QBaseRedirected((KActionSelector*)self, (QPoint*)offset);
}

void k_actionselector_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KActionSelector_OnRedirected((KActionSelector*)self, (intptr_t)callback);
}

QPainter* k_actionselector_shared_painter(void* self) {
    return KActionSelector_SharedPainter((KActionSelector*)self);
}

QPainter* k_actionselector_qbase_shared_painter(void* self) {
    return KActionSelector_QBaseSharedPainter((KActionSelector*)self);
}

void k_actionselector_on_shared_painter(void* self, QPainter* (*callback)()) {
    KActionSelector_OnSharedPainter((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_input_method_event(void* self, void* param1) {
    KActionSelector_InputMethodEvent((KActionSelector*)self, (QInputMethodEvent*)param1);
}

void k_actionselector_qbase_input_method_event(void* self, void* param1) {
    KActionSelector_QBaseInputMethodEvent((KActionSelector*)self, (QInputMethodEvent*)param1);
}

void k_actionselector_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnInputMethodEvent((KActionSelector*)self, (intptr_t)callback);
}

QVariant* k_actionselector_input_method_query(void* self, int64_t param1) {
    return KActionSelector_InputMethodQuery((KActionSelector*)self, param1);
}

QVariant* k_actionselector_qbase_input_method_query(void* self, int64_t param1) {
    return KActionSelector_QBaseInputMethodQuery((KActionSelector*)self, param1);
}

void k_actionselector_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KActionSelector_OnInputMethodQuery((KActionSelector*)self, (intptr_t)callback);
}

bool k_actionselector_focus_next_prev_child(void* self, bool next) {
    return KActionSelector_FocusNextPrevChild((KActionSelector*)self, next);
}

bool k_actionselector_qbase_focus_next_prev_child(void* self, bool next) {
    return KActionSelector_QBaseFocusNextPrevChild((KActionSelector*)self, next);
}

void k_actionselector_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KActionSelector_OnFocusNextPrevChild((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_timer_event(void* self, void* event) {
    KActionSelector_TimerEvent((KActionSelector*)self, (QTimerEvent*)event);
}

void k_actionselector_qbase_timer_event(void* self, void* event) {
    KActionSelector_QBaseTimerEvent((KActionSelector*)self, (QTimerEvent*)event);
}

void k_actionselector_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnTimerEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_child_event(void* self, void* event) {
    KActionSelector_ChildEvent((KActionSelector*)self, (QChildEvent*)event);
}

void k_actionselector_qbase_child_event(void* self, void* event) {
    KActionSelector_QBaseChildEvent((KActionSelector*)self, (QChildEvent*)event);
}

void k_actionselector_on_child_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnChildEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_custom_event(void* self, void* event) {
    KActionSelector_CustomEvent((KActionSelector*)self, (QEvent*)event);
}

void k_actionselector_qbase_custom_event(void* self, void* event) {
    KActionSelector_QBaseCustomEvent((KActionSelector*)self, (QEvent*)event);
}

void k_actionselector_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnCustomEvent((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_connect_notify(void* self, void* signal) {
    KActionSelector_ConnectNotify((KActionSelector*)self, (QMetaMethod*)signal);
}

void k_actionselector_qbase_connect_notify(void* self, void* signal) {
    KActionSelector_QBaseConnectNotify((KActionSelector*)self, (QMetaMethod*)signal);
}

void k_actionselector_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnConnectNotify((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_disconnect_notify(void* self, void* signal) {
    KActionSelector_DisconnectNotify((KActionSelector*)self, (QMetaMethod*)signal);
}

void k_actionselector_qbase_disconnect_notify(void* self, void* signal) {
    KActionSelector_QBaseDisconnectNotify((KActionSelector*)self, (QMetaMethod*)signal);
}

void k_actionselector_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KActionSelector_OnDisconnectNotify((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_update_micro_focus(void* self) {
    KActionSelector_UpdateMicroFocus((KActionSelector*)self);
}

void k_actionselector_qbase_update_micro_focus(void* self) {
    KActionSelector_QBaseUpdateMicroFocus((KActionSelector*)self);
}

void k_actionselector_on_update_micro_focus(void* self, void (*callback)()) {
    KActionSelector_OnUpdateMicroFocus((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_create(void* self) {
    KActionSelector_Create((KActionSelector*)self);
}

void k_actionselector_qbase_create(void* self) {
    KActionSelector_QBaseCreate((KActionSelector*)self);
}

void k_actionselector_on_create(void* self, void (*callback)()) {
    KActionSelector_OnCreate((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_destroy(void* self) {
    KActionSelector_Destroy((KActionSelector*)self);
}

void k_actionselector_qbase_destroy(void* self) {
    KActionSelector_QBaseDestroy((KActionSelector*)self);
}

void k_actionselector_on_destroy(void* self, void (*callback)()) {
    KActionSelector_OnDestroy((KActionSelector*)self, (intptr_t)callback);
}

bool k_actionselector_focus_next_child(void* self) {
    return KActionSelector_FocusNextChild((KActionSelector*)self);
}

bool k_actionselector_qbase_focus_next_child(void* self) {
    return KActionSelector_QBaseFocusNextChild((KActionSelector*)self);
}

void k_actionselector_on_focus_next_child(void* self, bool (*callback)()) {
    KActionSelector_OnFocusNextChild((KActionSelector*)self, (intptr_t)callback);
}

bool k_actionselector_focus_previous_child(void* self) {
    return KActionSelector_FocusPreviousChild((KActionSelector*)self);
}

bool k_actionselector_qbase_focus_previous_child(void* self) {
    return KActionSelector_QBaseFocusPreviousChild((KActionSelector*)self);
}

void k_actionselector_on_focus_previous_child(void* self, bool (*callback)()) {
    KActionSelector_OnFocusPreviousChild((KActionSelector*)self, (intptr_t)callback);
}

QObject* k_actionselector_sender(void* self) {
    return KActionSelector_Sender((KActionSelector*)self);
}

QObject* k_actionselector_qbase_sender(void* self) {
    return KActionSelector_QBaseSender((KActionSelector*)self);
}

void k_actionselector_on_sender(void* self, QObject* (*callback)()) {
    KActionSelector_OnSender((KActionSelector*)self, (intptr_t)callback);
}

int32_t k_actionselector_sender_signal_index(void* self) {
    return KActionSelector_SenderSignalIndex((KActionSelector*)self);
}

int32_t k_actionselector_qbase_sender_signal_index(void* self) {
    return KActionSelector_QBaseSenderSignalIndex((KActionSelector*)self);
}

void k_actionselector_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KActionSelector_OnSenderSignalIndex((KActionSelector*)self, (intptr_t)callback);
}

int32_t k_actionselector_receivers(void* self, const char* signal) {
    return KActionSelector_Receivers((KActionSelector*)self, signal);
}

int32_t k_actionselector_qbase_receivers(void* self, const char* signal) {
    return KActionSelector_QBaseReceivers((KActionSelector*)self, signal);
}

void k_actionselector_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KActionSelector_OnReceivers((KActionSelector*)self, (intptr_t)callback);
}

bool k_actionselector_is_signal_connected(void* self, void* signal) {
    return KActionSelector_IsSignalConnected((KActionSelector*)self, (QMetaMethod*)signal);
}

bool k_actionselector_qbase_is_signal_connected(void* self, void* signal) {
    return KActionSelector_QBaseIsSignalConnected((KActionSelector*)self, (QMetaMethod*)signal);
}

void k_actionselector_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KActionSelector_OnIsSignalConnected((KActionSelector*)self, (intptr_t)callback);
}

double k_actionselector_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KActionSelector_GetDecodedMetricF((KActionSelector*)self, metricA, metricB);
}

double k_actionselector_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KActionSelector_QBaseGetDecodedMetricF((KActionSelector*)self, metricA, metricB);
}

void k_actionselector_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KActionSelector_OnGetDecodedMetricF((KActionSelector*)self, (intptr_t)callback);
}

void k_actionselector_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_actionselector_delete(void* self) {
    KActionSelector_Delete((KActionSelector*)(self));
}
