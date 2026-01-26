#include "../libqabstractbutton.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqsplitter.hpp"
#include "../libqstyleoption.hpp"
#include "../libqtoolbutton.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libksplittercollapserbutton.hpp"
#include "libksplittercollapserbutton.h"

KSplitterCollapserButton* k_splittercollapserbutton_new(void* childWidget, void* splitter) {
    return KSplitterCollapserButton_new((QWidget*)childWidget, (QSplitter*)splitter);
}

const QMetaObject* k_splittercollapserbutton_meta_object(void* self) {
    return KSplitterCollapserButton_MetaObject((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KSplitterCollapserButton_OnMetaObject((KSplitterCollapserButton*)self, (intptr_t)callback);
}

const QMetaObject* k_splittercollapserbutton_qbase_meta_object(void* self) {
    return KSplitterCollapserButton_QBaseMetaObject((KSplitterCollapserButton*)self);
}

void* k_splittercollapserbutton_metacast(void* self, const char* param1) {
    return KSplitterCollapserButton_Metacast((KSplitterCollapserButton*)self, param1);
}

void k_splittercollapserbutton_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KSplitterCollapserButton_OnMetacast((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void* k_splittercollapserbutton_qbase_metacast(void* self, const char* param1) {
    return KSplitterCollapserButton_QBaseMetacast((KSplitterCollapserButton*)self, param1);
}

int32_t k_splittercollapserbutton_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSplitterCollapserButton_Metacall((KSplitterCollapserButton*)self, param1, param2, param3);
}

void k_splittercollapserbutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSplitterCollapserButton_OnMetacall((KSplitterCollapserButton*)self, (intptr_t)callback);
}

int32_t k_splittercollapserbutton_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSplitterCollapserButton_QBaseMetacall((KSplitterCollapserButton*)self, param1, param2, param3);
}

const char* k_splittercollapserbutton_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_splittercollapserbutton_is_widget_collapsed(void* self) {
    return KSplitterCollapserButton_IsWidgetCollapsed((KSplitterCollapserButton*)self);
}

QSize* k_splittercollapserbutton_size_hint(void* self) {
    return KSplitterCollapserButton_SizeHint((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_size_hint(void* self, QSize* (*callback)()) {
    KSplitterCollapserButton_OnSizeHint((KSplitterCollapserButton*)self, (intptr_t)callback);
}

QSize* k_splittercollapserbutton_qbase_size_hint(void* self) {
    return KSplitterCollapserButton_QBaseSizeHint((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_collapse(void* self) {
    KSplitterCollapserButton_Collapse((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_restore(void* self) {
    KSplitterCollapserButton_Restore((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_set_collapsed(void* self, bool collapsed) {
    KSplitterCollapserButton_SetCollapsed((KSplitterCollapserButton*)self, collapsed);
}

bool k_splittercollapserbutton_event_filter(void* self, void* param1, void* param2) {
    return KSplitterCollapserButton_EventFilter((KSplitterCollapserButton*)self, (QObject*)param1, (QEvent*)param2);
}

void k_splittercollapserbutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSplitterCollapserButton_OnEventFilter((KSplitterCollapserButton*)self, (intptr_t)callback);
}

bool k_splittercollapserbutton_qbase_event_filter(void* self, void* param1, void* param2) {
    return KSplitterCollapserButton_QBaseEventFilter((KSplitterCollapserButton*)self, (QObject*)param1, (QEvent*)param2);
}

void k_splittercollapserbutton_paint_event(void* self, void* param1) {
    KSplitterCollapserButton_PaintEvent((KSplitterCollapserButton*)self, (QPaintEvent*)param1);
}

void k_splittercollapserbutton_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnPaintEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_qbase_paint_event(void* self, void* param1) {
    KSplitterCollapserButton_QBasePaintEvent((KSplitterCollapserButton*)self, (QPaintEvent*)param1);
}

void k_splittercollapserbutton_enter_event(void* self, void* event) {
    KSplitterCollapserButton_EnterEvent((KSplitterCollapserButton*)self, (QEnterEvent*)event);
}

void k_splittercollapserbutton_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnEnterEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_qbase_enter_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseEnterEvent((KSplitterCollapserButton*)self, (QEnterEvent*)event);
}

void k_splittercollapserbutton_leave_event(void* self, void* event) {
    KSplitterCollapserButton_LeaveEvent((KSplitterCollapserButton*)self, (QEvent*)event);
}

void k_splittercollapserbutton_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnLeaveEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_qbase_leave_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseLeaveEvent((KSplitterCollapserButton*)self, (QEvent*)event);
}

void k_splittercollapserbutton_show_event(void* self, void* event) {
    KSplitterCollapserButton_ShowEvent((KSplitterCollapserButton*)self, (QShowEvent*)event);
}

void k_splittercollapserbutton_on_show_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnShowEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_qbase_show_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseShowEvent((KSplitterCollapserButton*)self, (QShowEvent*)event);
}

const char* k_splittercollapserbutton_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_splittercollapserbutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_splittercollapserbutton_tool_button_style(void* self) {
    return QToolButton_ToolButtonStyle((QToolButton*)self);
}

int32_t k_splittercollapserbutton_arrow_type(void* self) {
    return QToolButton_ArrowType((QToolButton*)self);
}

void k_splittercollapserbutton_set_arrow_type(void* self, int32_t type) {
    QToolButton_SetArrowType((QToolButton*)self, type);
}

void k_splittercollapserbutton_set_menu(void* self, void* menu) {
    QToolButton_SetMenu((QToolButton*)self, (QMenu*)menu);
}

QMenu* k_splittercollapserbutton_menu(void* self) {
    return QToolButton_Menu((QToolButton*)self);
}

void k_splittercollapserbutton_set_popup_mode(void* self, int32_t mode) {
    QToolButton_SetPopupMode((QToolButton*)self, mode);
}

int32_t k_splittercollapserbutton_popup_mode(void* self) {
    return QToolButton_PopupMode((QToolButton*)self);
}

QAction* k_splittercollapserbutton_default_action(void* self) {
    return QToolButton_DefaultAction((QToolButton*)self);
}

void k_splittercollapserbutton_set_auto_raise(void* self, bool enable) {
    QToolButton_SetAutoRaise((QToolButton*)self, enable);
}

bool k_splittercollapserbutton_auto_raise(void* self) {
    return QToolButton_AutoRaise((QToolButton*)self);
}

void k_splittercollapserbutton_show_menu(void* self) {
    QToolButton_ShowMenu((QToolButton*)self);
}

void k_splittercollapserbutton_set_tool_button_style(void* self, int32_t style) {
    QToolButton_SetToolButtonStyle((QToolButton*)self, style);
}

void k_splittercollapserbutton_set_default_action(void* self, void* defaultAction) {
    QToolButton_SetDefaultAction((QToolButton*)self, (QAction*)defaultAction);
}

void k_splittercollapserbutton_triggered(void* self, void* param1) {
    QToolButton_Triggered((QToolButton*)self, (QAction*)param1);
}

void k_splittercollapserbutton_on_triggered(void* self, void (*callback)(void*, void*)) {
    QToolButton_Connect_Triggered((QToolButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

const char* k_splittercollapserbutton_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_splittercollapserbutton_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

QIcon* k_splittercollapserbutton_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

QSize* k_splittercollapserbutton_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

void k_splittercollapserbutton_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

QKeySequence* k_splittercollapserbutton_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

void k_splittercollapserbutton_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

bool k_splittercollapserbutton_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

bool k_splittercollapserbutton_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

void k_splittercollapserbutton_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

bool k_splittercollapserbutton_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

void k_splittercollapserbutton_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

bool k_splittercollapserbutton_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

void k_splittercollapserbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

int32_t k_splittercollapserbutton_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

void k_splittercollapserbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

int32_t k_splittercollapserbutton_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

void k_splittercollapserbutton_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

bool k_splittercollapserbutton_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

QButtonGroup* k_splittercollapserbutton_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

void k_splittercollapserbutton_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

void k_splittercollapserbutton_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

void k_splittercollapserbutton_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

void k_splittercollapserbutton_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

void k_splittercollapserbutton_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

void k_splittercollapserbutton_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

void k_splittercollapserbutton_on_pressed(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

void k_splittercollapserbutton_on_released(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

void k_splittercollapserbutton_on_clicked(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

void k_splittercollapserbutton_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

void k_splittercollapserbutton_on_clicked1(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)callback);
}

uintptr_t k_splittercollapserbutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_splittercollapserbutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_splittercollapserbutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_splittercollapserbutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_splittercollapserbutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_splittercollapserbutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_splittercollapserbutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_splittercollapserbutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_splittercollapserbutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_splittercollapserbutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_splittercollapserbutton_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_splittercollapserbutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_splittercollapserbutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_splittercollapserbutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_splittercollapserbutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_splittercollapserbutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_splittercollapserbutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_splittercollapserbutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_splittercollapserbutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_splittercollapserbutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_splittercollapserbutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_splittercollapserbutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_splittercollapserbutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_splittercollapserbutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_splittercollapserbutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_splittercollapserbutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_splittercollapserbutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_splittercollapserbutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_splittercollapserbutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_splittercollapserbutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_splittercollapserbutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_splittercollapserbutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_splittercollapserbutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_splittercollapserbutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_splittercollapserbutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_splittercollapserbutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_splittercollapserbutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_splittercollapserbutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_splittercollapserbutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_splittercollapserbutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_splittercollapserbutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_splittercollapserbutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_splittercollapserbutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_splittercollapserbutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_splittercollapserbutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_splittercollapserbutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_splittercollapserbutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_splittercollapserbutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_splittercollapserbutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_splittercollapserbutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_splittercollapserbutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_splittercollapserbutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_splittercollapserbutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_splittercollapserbutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_splittercollapserbutton_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_splittercollapserbutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_splittercollapserbutton_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_splittercollapserbutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_splittercollapserbutton_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_splittercollapserbutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_splittercollapserbutton_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_splittercollapserbutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_splittercollapserbutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_splittercollapserbutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_splittercollapserbutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_splittercollapserbutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_splittercollapserbutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_splittercollapserbutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_splittercollapserbutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_splittercollapserbutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_splittercollapserbutton_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_splittercollapserbutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_splittercollapserbutton_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_splittercollapserbutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_splittercollapserbutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_splittercollapserbutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_splittercollapserbutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_splittercollapserbutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_splittercollapserbutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_splittercollapserbutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_splittercollapserbutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_splittercollapserbutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_splittercollapserbutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_splittercollapserbutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_splittercollapserbutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_splittercollapserbutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_splittercollapserbutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_splittercollapserbutton_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_splittercollapserbutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_splittercollapserbutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_splittercollapserbutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_splittercollapserbutton_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_splittercollapserbutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_splittercollapserbutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_splittercollapserbutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_splittercollapserbutton_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_splittercollapserbutton_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_splittercollapserbutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_splittercollapserbutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_splittercollapserbutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_splittercollapserbutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_splittercollapserbutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_splittercollapserbutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_splittercollapserbutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_splittercollapserbutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_splittercollapserbutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_splittercollapserbutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_splittercollapserbutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_splittercollapserbutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_splittercollapserbutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_splittercollapserbutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_splittercollapserbutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_splittercollapserbutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_splittercollapserbutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_splittercollapserbutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_splittercollapserbutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_splittercollapserbutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_splittercollapserbutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_splittercollapserbutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_splittercollapserbutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_splittercollapserbutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_splittercollapserbutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_splittercollapserbutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_splittercollapserbutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_splittercollapserbutton_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_splittercollapserbutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_splittercollapserbutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_splittercollapserbutton_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_splittercollapserbutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_splittercollapserbutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_splittercollapserbutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_splittercollapserbutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_splittercollapserbutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_splittercollapserbutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_splittercollapserbutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_splittercollapserbutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_splittercollapserbutton_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_splittercollapserbutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_splittercollapserbutton_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_splittercollapserbutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_splittercollapserbutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_splittercollapserbutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_splittercollapserbutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_splittercollapserbutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_splittercollapserbutton_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_splittercollapserbutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_splittercollapserbutton_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_splittercollapserbutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_splittercollapserbutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_splittercollapserbutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_splittercollapserbutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_splittercollapserbutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_splittercollapserbutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_splittercollapserbutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_splittercollapserbutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_splittercollapserbutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_splittercollapserbutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_splittercollapserbutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_splittercollapserbutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_splittercollapserbutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_splittercollapserbutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_splittercollapserbutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_splittercollapserbutton_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_splittercollapserbutton_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_splittercollapserbutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_splittercollapserbutton_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_splittercollapserbutton_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_splittercollapserbutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_splittercollapserbutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_splittercollapserbutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_splittercollapserbutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_splittercollapserbutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_splittercollapserbutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_splittercollapserbutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_splittercollapserbutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_splittercollapserbutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_splittercollapserbutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_splittercollapserbutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_splittercollapserbutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_splittercollapserbutton_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_splittercollapserbutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_splittercollapserbutton_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_splittercollapserbutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_splittercollapserbutton_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_splittercollapserbutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_splittercollapserbutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_splittercollapserbutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_splittercollapserbutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_splittercollapserbutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_splittercollapserbutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_splittercollapserbutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_splittercollapserbutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_splittercollapserbutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_splittercollapserbutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_splittercollapserbutton_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_splittercollapserbutton_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_splittercollapserbutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_splittercollapserbutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_splittercollapserbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_splittercollapserbutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_splittercollapserbutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_splittercollapserbutton_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_splittercollapserbutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_splittercollapserbutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_splittercollapserbutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_splittercollapserbutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_splittercollapserbutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_splittercollapserbutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_splittercollapserbutton_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_splittercollapserbutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_splittercollapserbutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_splittercollapserbutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_splittercollapserbutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_splittercollapserbutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_splittercollapserbutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_splittercollapserbutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_splittercollapserbutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_splittercollapserbutton_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_splittercollapserbutton_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_splittercollapserbutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_splittercollapserbutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_splittercollapserbutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_splittercollapserbutton_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_splittercollapserbutton_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_splittercollapserbutton_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_splittercollapserbutton_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_splittercollapserbutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_splittercollapserbutton_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_splittercollapserbutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_splittercollapserbutton_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_splittercollapserbutton_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_splittercollapserbutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_splittercollapserbutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_splittercollapserbutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_splittercollapserbutton_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_splittercollapserbutton_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_splittercollapserbutton_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_splittercollapserbutton_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_splittercollapserbutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_splittercollapserbutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_splittercollapserbutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_splittercollapserbutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_splittercollapserbutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_splittercollapserbutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_splittercollapserbutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_splittercollapserbutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_splittercollapserbutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_splittercollapserbutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_splittercollapserbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_splittercollapserbutton_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_splittercollapserbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_splittercollapserbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_splittercollapserbutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_splittercollapserbutton_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_splittercollapserbutton_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_splittercollapserbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_splittercollapserbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_splittercollapserbutton_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_splittercollapserbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_splittercollapserbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_splittercollapserbutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_splittercollapserbutton_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_splittercollapserbutton_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_splittercollapserbutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_splittercollapserbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_splittercollapserbutton_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_splittercollapserbutton_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_splittercollapserbutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_splittercollapserbutton_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_splittercollapserbutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_splittercollapserbutton_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_splittercollapserbutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_splittercollapserbutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_splittercollapserbutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_splittercollapserbutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_splittercollapserbutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_splittercollapserbutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_splittercollapserbutton_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_splittercollapserbutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_splittercollapserbutton_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_splittercollapserbutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_splittercollapserbutton_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_splittercollapserbutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_splittercollapserbutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_splittercollapserbutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_splittercollapserbutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_splittercollapserbutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_splittercollapserbutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_splittercollapserbutton_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_splittercollapserbutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_splittercollapserbutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_splittercollapserbutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_splittercollapserbutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_splittercollapserbutton_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_splittercollapserbutton_dynamic_property_names\n");
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

QBindingStorage* k_splittercollapserbutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_splittercollapserbutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_splittercollapserbutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_splittercollapserbutton_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_splittercollapserbutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_splittercollapserbutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_splittercollapserbutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_splittercollapserbutton_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_splittercollapserbutton_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_splittercollapserbutton_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_splittercollapserbutton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_splittercollapserbutton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_splittercollapserbutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_splittercollapserbutton_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_splittercollapserbutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_splittercollapserbutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_splittercollapserbutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_splittercollapserbutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_splittercollapserbutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_splittercollapserbutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_splittercollapserbutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_splittercollapserbutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_splittercollapserbutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_splittercollapserbutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_splittercollapserbutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_splittercollapserbutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_splittercollapserbutton_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_splittercollapserbutton_minimum_size_hint(void* self) {
    return KSplitterCollapserButton_MinimumSizeHint((KSplitterCollapserButton*)self);
}

QSize* k_splittercollapserbutton_qbase_minimum_size_hint(void* self) {
    return KSplitterCollapserButton_QBaseMinimumSizeHint((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KSplitterCollapserButton_OnMinimumSizeHint((KSplitterCollapserButton*)self, (intptr_t)callback);
}

bool k_splittercollapserbutton_event(void* self, void* e) {
    return KSplitterCollapserButton_Event((KSplitterCollapserButton*)self, (QEvent*)e);
}

bool k_splittercollapserbutton_qbase_event(void* self, void* e) {
    return KSplitterCollapserButton_QBaseEvent((KSplitterCollapserButton*)self, (QEvent*)e);
}

void k_splittercollapserbutton_on_event(void* self, bool (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_mouse_press_event(void* self, void* param1) {
    KSplitterCollapserButton_MousePressEvent((KSplitterCollapserButton*)self, (QMouseEvent*)param1);
}

void k_splittercollapserbutton_qbase_mouse_press_event(void* self, void* param1) {
    KSplitterCollapserButton_QBaseMousePressEvent((KSplitterCollapserButton*)self, (QMouseEvent*)param1);
}

void k_splittercollapserbutton_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnMousePressEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_mouse_release_event(void* self, void* param1) {
    KSplitterCollapserButton_MouseReleaseEvent((KSplitterCollapserButton*)self, (QMouseEvent*)param1);
}

void k_splittercollapserbutton_qbase_mouse_release_event(void* self, void* param1) {
    KSplitterCollapserButton_QBaseMouseReleaseEvent((KSplitterCollapserButton*)self, (QMouseEvent*)param1);
}

void k_splittercollapserbutton_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnMouseReleaseEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_action_event(void* self, void* param1) {
    KSplitterCollapserButton_ActionEvent((KSplitterCollapserButton*)self, (QActionEvent*)param1);
}

void k_splittercollapserbutton_qbase_action_event(void* self, void* param1) {
    KSplitterCollapserButton_QBaseActionEvent((KSplitterCollapserButton*)self, (QActionEvent*)param1);
}

void k_splittercollapserbutton_on_action_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnActionEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_timer_event(void* self, void* param1) {
    KSplitterCollapserButton_TimerEvent((KSplitterCollapserButton*)self, (QTimerEvent*)param1);
}

void k_splittercollapserbutton_qbase_timer_event(void* self, void* param1) {
    KSplitterCollapserButton_QBaseTimerEvent((KSplitterCollapserButton*)self, (QTimerEvent*)param1);
}

void k_splittercollapserbutton_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnTimerEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_change_event(void* self, void* param1) {
    KSplitterCollapserButton_ChangeEvent((KSplitterCollapserButton*)self, (QEvent*)param1);
}

void k_splittercollapserbutton_qbase_change_event(void* self, void* param1) {
    KSplitterCollapserButton_QBaseChangeEvent((KSplitterCollapserButton*)self, (QEvent*)param1);
}

void k_splittercollapserbutton_on_change_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnChangeEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

bool k_splittercollapserbutton_hit_button(void* self, void* pos) {
    return KSplitterCollapserButton_HitButton((KSplitterCollapserButton*)self, (QPoint*)pos);
}

bool k_splittercollapserbutton_qbase_hit_button(void* self, void* pos) {
    return KSplitterCollapserButton_QBaseHitButton((KSplitterCollapserButton*)self, (QPoint*)pos);
}

void k_splittercollapserbutton_on_hit_button(void* self, bool (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnHitButton((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_check_state_set(void* self) {
    KSplitterCollapserButton_CheckStateSet((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_qbase_check_state_set(void* self) {
    KSplitterCollapserButton_QBaseCheckStateSet((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_check_state_set(void* self, void (*callback)()) {
    KSplitterCollapserButton_OnCheckStateSet((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_next_check_state(void* self) {
    KSplitterCollapserButton_NextCheckState((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_qbase_next_check_state(void* self) {
    KSplitterCollapserButton_QBaseNextCheckState((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_next_check_state(void* self, void (*callback)()) {
    KSplitterCollapserButton_OnNextCheckState((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_init_style_option(void* self, void* option) {
    KSplitterCollapserButton_InitStyleOption((KSplitterCollapserButton*)self, (QStyleOptionToolButton*)option);
}

void k_splittercollapserbutton_qbase_init_style_option(void* self, void* option) {
    KSplitterCollapserButton_QBaseInitStyleOption((KSplitterCollapserButton*)self, (QStyleOptionToolButton*)option);
}

void k_splittercollapserbutton_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnInitStyleOption((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_key_press_event(void* self, void* e) {
    KSplitterCollapserButton_KeyPressEvent((KSplitterCollapserButton*)self, (QKeyEvent*)e);
}

void k_splittercollapserbutton_qbase_key_press_event(void* self, void* e) {
    KSplitterCollapserButton_QBaseKeyPressEvent((KSplitterCollapserButton*)self, (QKeyEvent*)e);
}

void k_splittercollapserbutton_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnKeyPressEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_key_release_event(void* self, void* e) {
    KSplitterCollapserButton_KeyReleaseEvent((KSplitterCollapserButton*)self, (QKeyEvent*)e);
}

void k_splittercollapserbutton_qbase_key_release_event(void* self, void* e) {
    KSplitterCollapserButton_QBaseKeyReleaseEvent((KSplitterCollapserButton*)self, (QKeyEvent*)e);
}

void k_splittercollapserbutton_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnKeyReleaseEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_mouse_move_event(void* self, void* e) {
    KSplitterCollapserButton_MouseMoveEvent((KSplitterCollapserButton*)self, (QMouseEvent*)e);
}

void k_splittercollapserbutton_qbase_mouse_move_event(void* self, void* e) {
    KSplitterCollapserButton_QBaseMouseMoveEvent((KSplitterCollapserButton*)self, (QMouseEvent*)e);
}

void k_splittercollapserbutton_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnMouseMoveEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_focus_in_event(void* self, void* e) {
    KSplitterCollapserButton_FocusInEvent((KSplitterCollapserButton*)self, (QFocusEvent*)e);
}

void k_splittercollapserbutton_qbase_focus_in_event(void* self, void* e) {
    KSplitterCollapserButton_QBaseFocusInEvent((KSplitterCollapserButton*)self, (QFocusEvent*)e);
}

void k_splittercollapserbutton_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnFocusInEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_focus_out_event(void* self, void* e) {
    KSplitterCollapserButton_FocusOutEvent((KSplitterCollapserButton*)self, (QFocusEvent*)e);
}

void k_splittercollapserbutton_qbase_focus_out_event(void* self, void* e) {
    KSplitterCollapserButton_QBaseFocusOutEvent((KSplitterCollapserButton*)self, (QFocusEvent*)e);
}

void k_splittercollapserbutton_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnFocusOutEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

int32_t k_splittercollapserbutton_dev_type(void* self) {
    return KSplitterCollapserButton_DevType((KSplitterCollapserButton*)self);
}

int32_t k_splittercollapserbutton_qbase_dev_type(void* self) {
    return KSplitterCollapserButton_QBaseDevType((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_dev_type(void* self, int32_t (*callback)()) {
    KSplitterCollapserButton_OnDevType((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_set_visible(void* self, bool visible) {
    KSplitterCollapserButton_SetVisible((KSplitterCollapserButton*)self, visible);
}

void k_splittercollapserbutton_qbase_set_visible(void* self, bool visible) {
    KSplitterCollapserButton_QBaseSetVisible((KSplitterCollapserButton*)self, visible);
}

void k_splittercollapserbutton_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KSplitterCollapserButton_OnSetVisible((KSplitterCollapserButton*)self, (intptr_t)callback);
}

int32_t k_splittercollapserbutton_height_for_width(void* self, int param1) {
    return KSplitterCollapserButton_HeightForWidth((KSplitterCollapserButton*)self, param1);
}

int32_t k_splittercollapserbutton_qbase_height_for_width(void* self, int param1) {
    return KSplitterCollapserButton_QBaseHeightForWidth((KSplitterCollapserButton*)self, param1);
}

void k_splittercollapserbutton_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KSplitterCollapserButton_OnHeightForWidth((KSplitterCollapserButton*)self, (intptr_t)callback);
}

bool k_splittercollapserbutton_has_height_for_width(void* self) {
    return KSplitterCollapserButton_HasHeightForWidth((KSplitterCollapserButton*)self);
}

bool k_splittercollapserbutton_qbase_has_height_for_width(void* self) {
    return KSplitterCollapserButton_QBaseHasHeightForWidth((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_has_height_for_width(void* self, bool (*callback)()) {
    KSplitterCollapserButton_OnHasHeightForWidth((KSplitterCollapserButton*)self, (intptr_t)callback);
}

QPaintEngine* k_splittercollapserbutton_paint_engine(void* self) {
    return KSplitterCollapserButton_PaintEngine((KSplitterCollapserButton*)self);
}

QPaintEngine* k_splittercollapserbutton_qbase_paint_engine(void* self) {
    return KSplitterCollapserButton_QBasePaintEngine((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KSplitterCollapserButton_OnPaintEngine((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_mouse_double_click_event(void* self, void* event) {
    KSplitterCollapserButton_MouseDoubleClickEvent((KSplitterCollapserButton*)self, (QMouseEvent*)event);
}

void k_splittercollapserbutton_qbase_mouse_double_click_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseMouseDoubleClickEvent((KSplitterCollapserButton*)self, (QMouseEvent*)event);
}

void k_splittercollapserbutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnMouseDoubleClickEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_wheel_event(void* self, void* event) {
    KSplitterCollapserButton_WheelEvent((KSplitterCollapserButton*)self, (QWheelEvent*)event);
}

void k_splittercollapserbutton_qbase_wheel_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseWheelEvent((KSplitterCollapserButton*)self, (QWheelEvent*)event);
}

void k_splittercollapserbutton_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnWheelEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_move_event(void* self, void* event) {
    KSplitterCollapserButton_MoveEvent((KSplitterCollapserButton*)self, (QMoveEvent*)event);
}

void k_splittercollapserbutton_qbase_move_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseMoveEvent((KSplitterCollapserButton*)self, (QMoveEvent*)event);
}

void k_splittercollapserbutton_on_move_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnMoveEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_resize_event(void* self, void* event) {
    KSplitterCollapserButton_ResizeEvent((KSplitterCollapserButton*)self, (QResizeEvent*)event);
}

void k_splittercollapserbutton_qbase_resize_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseResizeEvent((KSplitterCollapserButton*)self, (QResizeEvent*)event);
}

void k_splittercollapserbutton_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnResizeEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_close_event(void* self, void* event) {
    KSplitterCollapserButton_CloseEvent((KSplitterCollapserButton*)self, (QCloseEvent*)event);
}

void k_splittercollapserbutton_qbase_close_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseCloseEvent((KSplitterCollapserButton*)self, (QCloseEvent*)event);
}

void k_splittercollapserbutton_on_close_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnCloseEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_context_menu_event(void* self, void* event) {
    KSplitterCollapserButton_ContextMenuEvent((KSplitterCollapserButton*)self, (QContextMenuEvent*)event);
}

void k_splittercollapserbutton_qbase_context_menu_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseContextMenuEvent((KSplitterCollapserButton*)self, (QContextMenuEvent*)event);
}

void k_splittercollapserbutton_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnContextMenuEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_tablet_event(void* self, void* event) {
    KSplitterCollapserButton_TabletEvent((KSplitterCollapserButton*)self, (QTabletEvent*)event);
}

void k_splittercollapserbutton_qbase_tablet_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseTabletEvent((KSplitterCollapserButton*)self, (QTabletEvent*)event);
}

void k_splittercollapserbutton_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnTabletEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_drag_enter_event(void* self, void* event) {
    KSplitterCollapserButton_DragEnterEvent((KSplitterCollapserButton*)self, (QDragEnterEvent*)event);
}

void k_splittercollapserbutton_qbase_drag_enter_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseDragEnterEvent((KSplitterCollapserButton*)self, (QDragEnterEvent*)event);
}

void k_splittercollapserbutton_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnDragEnterEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_drag_move_event(void* self, void* event) {
    KSplitterCollapserButton_DragMoveEvent((KSplitterCollapserButton*)self, (QDragMoveEvent*)event);
}

void k_splittercollapserbutton_qbase_drag_move_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseDragMoveEvent((KSplitterCollapserButton*)self, (QDragMoveEvent*)event);
}

void k_splittercollapserbutton_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnDragMoveEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_drag_leave_event(void* self, void* event) {
    KSplitterCollapserButton_DragLeaveEvent((KSplitterCollapserButton*)self, (QDragLeaveEvent*)event);
}

void k_splittercollapserbutton_qbase_drag_leave_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseDragLeaveEvent((KSplitterCollapserButton*)self, (QDragLeaveEvent*)event);
}

void k_splittercollapserbutton_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnDragLeaveEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_drop_event(void* self, void* event) {
    KSplitterCollapserButton_DropEvent((KSplitterCollapserButton*)self, (QDropEvent*)event);
}

void k_splittercollapserbutton_qbase_drop_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseDropEvent((KSplitterCollapserButton*)self, (QDropEvent*)event);
}

void k_splittercollapserbutton_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnDropEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_hide_event(void* self, void* event) {
    KSplitterCollapserButton_HideEvent((KSplitterCollapserButton*)self, (QHideEvent*)event);
}

void k_splittercollapserbutton_qbase_hide_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseHideEvent((KSplitterCollapserButton*)self, (QHideEvent*)event);
}

void k_splittercollapserbutton_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnHideEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

bool k_splittercollapserbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KSplitterCollapserButton_NativeEvent((KSplitterCollapserButton*)self, qstring(eventType), message, result);
}

bool k_splittercollapserbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KSplitterCollapserButton_QBaseNativeEvent((KSplitterCollapserButton*)self, qstring(eventType), message, result);
}

void k_splittercollapserbutton_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KSplitterCollapserButton_OnNativeEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

int32_t k_splittercollapserbutton_metric(void* self, int32_t param1) {
    return KSplitterCollapserButton_Metric((KSplitterCollapserButton*)self, param1);
}

int32_t k_splittercollapserbutton_qbase_metric(void* self, int32_t param1) {
    return KSplitterCollapserButton_QBaseMetric((KSplitterCollapserButton*)self, param1);
}

void k_splittercollapserbutton_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KSplitterCollapserButton_OnMetric((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_init_painter(void* self, void* painter) {
    KSplitterCollapserButton_InitPainter((KSplitterCollapserButton*)self, (QPainter*)painter);
}

void k_splittercollapserbutton_qbase_init_painter(void* self, void* painter) {
    KSplitterCollapserButton_QBaseInitPainter((KSplitterCollapserButton*)self, (QPainter*)painter);
}

void k_splittercollapserbutton_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnInitPainter((KSplitterCollapserButton*)self, (intptr_t)callback);
}

QPaintDevice* k_splittercollapserbutton_redirected(void* self, void* offset) {
    return KSplitterCollapserButton_Redirected((KSplitterCollapserButton*)self, (QPoint*)offset);
}

QPaintDevice* k_splittercollapserbutton_qbase_redirected(void* self, void* offset) {
    return KSplitterCollapserButton_QBaseRedirected((KSplitterCollapserButton*)self, (QPoint*)offset);
}

void k_splittercollapserbutton_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnRedirected((KSplitterCollapserButton*)self, (intptr_t)callback);
}

QPainter* k_splittercollapserbutton_shared_painter(void* self) {
    return KSplitterCollapserButton_SharedPainter((KSplitterCollapserButton*)self);
}

QPainter* k_splittercollapserbutton_qbase_shared_painter(void* self) {
    return KSplitterCollapserButton_QBaseSharedPainter((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_shared_painter(void* self, QPainter* (*callback)()) {
    KSplitterCollapserButton_OnSharedPainter((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_input_method_event(void* self, void* param1) {
    KSplitterCollapserButton_InputMethodEvent((KSplitterCollapserButton*)self, (QInputMethodEvent*)param1);
}

void k_splittercollapserbutton_qbase_input_method_event(void* self, void* param1) {
    KSplitterCollapserButton_QBaseInputMethodEvent((KSplitterCollapserButton*)self, (QInputMethodEvent*)param1);
}

void k_splittercollapserbutton_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnInputMethodEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

QVariant* k_splittercollapserbutton_input_method_query(void* self, int32_t param1) {
    return KSplitterCollapserButton_InputMethodQuery((KSplitterCollapserButton*)self, param1);
}

QVariant* k_splittercollapserbutton_qbase_input_method_query(void* self, int32_t param1) {
    return KSplitterCollapserButton_QBaseInputMethodQuery((KSplitterCollapserButton*)self, param1);
}

void k_splittercollapserbutton_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KSplitterCollapserButton_OnInputMethodQuery((KSplitterCollapserButton*)self, (intptr_t)callback);
}

bool k_splittercollapserbutton_focus_next_prev_child(void* self, bool next) {
    return KSplitterCollapserButton_FocusNextPrevChild((KSplitterCollapserButton*)self, next);
}

bool k_splittercollapserbutton_qbase_focus_next_prev_child(void* self, bool next) {
    return KSplitterCollapserButton_QBaseFocusNextPrevChild((KSplitterCollapserButton*)self, next);
}

void k_splittercollapserbutton_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KSplitterCollapserButton_OnFocusNextPrevChild((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_child_event(void* self, void* event) {
    KSplitterCollapserButton_ChildEvent((KSplitterCollapserButton*)self, (QChildEvent*)event);
}

void k_splittercollapserbutton_qbase_child_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseChildEvent((KSplitterCollapserButton*)self, (QChildEvent*)event);
}

void k_splittercollapserbutton_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnChildEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_custom_event(void* self, void* event) {
    KSplitterCollapserButton_CustomEvent((KSplitterCollapserButton*)self, (QEvent*)event);
}

void k_splittercollapserbutton_qbase_custom_event(void* self, void* event) {
    KSplitterCollapserButton_QBaseCustomEvent((KSplitterCollapserButton*)self, (QEvent*)event);
}

void k_splittercollapserbutton_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnCustomEvent((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_connect_notify(void* self, void* signal) {
    KSplitterCollapserButton_ConnectNotify((KSplitterCollapserButton*)self, (QMetaMethod*)signal);
}

void k_splittercollapserbutton_qbase_connect_notify(void* self, void* signal) {
    KSplitterCollapserButton_QBaseConnectNotify((KSplitterCollapserButton*)self, (QMetaMethod*)signal);
}

void k_splittercollapserbutton_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnConnectNotify((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_disconnect_notify(void* self, void* signal) {
    KSplitterCollapserButton_DisconnectNotify((KSplitterCollapserButton*)self, (QMetaMethod*)signal);
}

void k_splittercollapserbutton_qbase_disconnect_notify(void* self, void* signal) {
    KSplitterCollapserButton_QBaseDisconnectNotify((KSplitterCollapserButton*)self, (QMetaMethod*)signal);
}

void k_splittercollapserbutton_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnDisconnectNotify((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_update_micro_focus(void* self) {
    KSplitterCollapserButton_UpdateMicroFocus((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_qbase_update_micro_focus(void* self) {
    KSplitterCollapserButton_QBaseUpdateMicroFocus((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_update_micro_focus(void* self, void (*callback)()) {
    KSplitterCollapserButton_OnUpdateMicroFocus((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_create(void* self) {
    KSplitterCollapserButton_Create((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_qbase_create(void* self) {
    KSplitterCollapserButton_QBaseCreate((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_create(void* self, void (*callback)()) {
    KSplitterCollapserButton_OnCreate((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_destroy(void* self) {
    KSplitterCollapserButton_Destroy((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_qbase_destroy(void* self) {
    KSplitterCollapserButton_QBaseDestroy((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_destroy(void* self, void (*callback)()) {
    KSplitterCollapserButton_OnDestroy((KSplitterCollapserButton*)self, (intptr_t)callback);
}

bool k_splittercollapserbutton_focus_next_child(void* self) {
    return KSplitterCollapserButton_FocusNextChild((KSplitterCollapserButton*)self);
}

bool k_splittercollapserbutton_qbase_focus_next_child(void* self) {
    return KSplitterCollapserButton_QBaseFocusNextChild((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_focus_next_child(void* self, bool (*callback)()) {
    KSplitterCollapserButton_OnFocusNextChild((KSplitterCollapserButton*)self, (intptr_t)callback);
}

bool k_splittercollapserbutton_focus_previous_child(void* self) {
    return KSplitterCollapserButton_FocusPreviousChild((KSplitterCollapserButton*)self);
}

bool k_splittercollapserbutton_qbase_focus_previous_child(void* self) {
    return KSplitterCollapserButton_QBaseFocusPreviousChild((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_focus_previous_child(void* self, bool (*callback)()) {
    KSplitterCollapserButton_OnFocusPreviousChild((KSplitterCollapserButton*)self, (intptr_t)callback);
}

QObject* k_splittercollapserbutton_sender(void* self) {
    return KSplitterCollapserButton_Sender((KSplitterCollapserButton*)self);
}

QObject* k_splittercollapserbutton_qbase_sender(void* self) {
    return KSplitterCollapserButton_QBaseSender((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_sender(void* self, QObject* (*callback)()) {
    KSplitterCollapserButton_OnSender((KSplitterCollapserButton*)self, (intptr_t)callback);
}

int32_t k_splittercollapserbutton_sender_signal_index(void* self) {
    return KSplitterCollapserButton_SenderSignalIndex((KSplitterCollapserButton*)self);
}

int32_t k_splittercollapserbutton_qbase_sender_signal_index(void* self) {
    return KSplitterCollapserButton_QBaseSenderSignalIndex((KSplitterCollapserButton*)self);
}

void k_splittercollapserbutton_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSplitterCollapserButton_OnSenderSignalIndex((KSplitterCollapserButton*)self, (intptr_t)callback);
}

int32_t k_splittercollapserbutton_receivers(void* self, const char* signal) {
    return KSplitterCollapserButton_Receivers((KSplitterCollapserButton*)self, signal);
}

int32_t k_splittercollapserbutton_qbase_receivers(void* self, const char* signal) {
    return KSplitterCollapserButton_QBaseReceivers((KSplitterCollapserButton*)self, signal);
}

void k_splittercollapserbutton_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSplitterCollapserButton_OnReceivers((KSplitterCollapserButton*)self, (intptr_t)callback);
}

bool k_splittercollapserbutton_is_signal_connected(void* self, void* signal) {
    return KSplitterCollapserButton_IsSignalConnected((KSplitterCollapserButton*)self, (QMetaMethod*)signal);
}

bool k_splittercollapserbutton_qbase_is_signal_connected(void* self, void* signal) {
    return KSplitterCollapserButton_QBaseIsSignalConnected((KSplitterCollapserButton*)self, (QMetaMethod*)signal);
}

void k_splittercollapserbutton_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSplitterCollapserButton_OnIsSignalConnected((KSplitterCollapserButton*)self, (intptr_t)callback);
}

double k_splittercollapserbutton_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KSplitterCollapserButton_GetDecodedMetricF((KSplitterCollapserButton*)self, metricA, metricB);
}

double k_splittercollapserbutton_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KSplitterCollapserButton_QBaseGetDecodedMetricF((KSplitterCollapserButton*)self, metricA, metricB);
}

void k_splittercollapserbutton_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KSplitterCollapserButton_OnGetDecodedMetricF((KSplitterCollapserButton*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_splittercollapserbutton_delete(void* self) {
    KSplitterCollapserButton_Delete((KSplitterCollapserButton*)(self));
}
