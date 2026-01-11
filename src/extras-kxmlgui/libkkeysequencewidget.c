#include "libkactioncollection.hpp"
#include "../libqaction.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqkeysequence.hpp"
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
#include "libkkeysequencewidget.hpp"
#include "libkkeysequencewidget.h"

KKeySequenceWidget* k_keysequencewidget_new(void* parent) {
    return KKeySequenceWidget_new((QWidget*)parent);
}

KKeySequenceWidget* k_keysequencewidget_new2() {
    return KKeySequenceWidget_new2();
}

const QMetaObject* k_keysequencewidget_meta_object(void* self) {
    return KKeySequenceWidget_MetaObject((KKeySequenceWidget*)self);
}

void* k_keysequencewidget_metacast(void* self, const char* param1) {
    return KKeySequenceWidget_Metacast((KKeySequenceWidget*)self, param1);
}

int32_t k_keysequencewidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KKeySequenceWidget_Metacall((KKeySequenceWidget*)self, param1, param2, param3);
}

void k_keysequencewidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KKeySequenceWidget_OnMetacall((KKeySequenceWidget*)self, (intptr_t)callback);
}

int32_t k_keysequencewidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KKeySequenceWidget_QBaseMetacall((KKeySequenceWidget*)self, param1, param2, param3);
}

const char* k_keysequencewidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_check_for_conflicts_against(void* self, int32_t types) {
    KKeySequenceWidget_SetCheckForConflictsAgainst((KKeySequenceWidget*)self, types);
}

int32_t k_keysequencewidget_check_for_conflicts_against(void* self) {
    return KKeySequenceWidget_CheckForConflictsAgainst((KKeySequenceWidget*)self);
}

void k_keysequencewidget_set_multi_key_shortcuts_allowed(void* self, bool multiKeyShortcutsAllowed) {
    KKeySequenceWidget_SetMultiKeyShortcutsAllowed((KKeySequenceWidget*)self, multiKeyShortcutsAllowed);
}

bool k_keysequencewidget_multi_key_shortcuts_allowed(void* self) {
    return KKeySequenceWidget_MultiKeyShortcutsAllowed((KKeySequenceWidget*)self);
}

void k_keysequencewidget_set_modifierless_allowed(void* self, bool allow) {
    KKeySequenceWidget_SetModifierlessAllowed((KKeySequenceWidget*)self, allow);
}

bool k_keysequencewidget_is_modifierless_allowed(void* self) {
    return KKeySequenceWidget_IsModifierlessAllowed((KKeySequenceWidget*)self);
}

void k_keysequencewidget_set_modifier_only_allowed(void* self, bool allow) {
    KKeySequenceWidget_SetModifierOnlyAllowed((KKeySequenceWidget*)self, allow);
}

bool k_keysequencewidget_modifier_only_allowed(void* self) {
    return KKeySequenceWidget_ModifierOnlyAllowed((KKeySequenceWidget*)self);
}

void k_keysequencewidget_set_clear_button_shown(void* self, bool show) {
    KKeySequenceWidget_SetClearButtonShown((KKeySequenceWidget*)self, show);
}

bool k_keysequencewidget_is_key_sequence_available(void* self, void* seq) {
    return KKeySequenceWidget_IsKeySequenceAvailable((KKeySequenceWidget*)self, (QKeySequence*)seq);
}

QKeySequence* k_keysequencewidget_key_sequence(void* self) {
    return KKeySequenceWidget_KeySequence((KKeySequenceWidget*)self);
}

void k_keysequencewidget_set_check_action_collections(void* self, libqt_list actionCollections) {
    KKeySequenceWidget_SetCheckActionCollections((KKeySequenceWidget*)self, actionCollections);
}

void k_keysequencewidget_set_component_name(void* self, const char* componentName) {
    KKeySequenceWidget_SetComponentName((KKeySequenceWidget*)self, qstring(componentName));
}

bool k_keysequencewidget_is_recording(void* self) {
    return KKeySequenceWidget_IsRecording((KKeySequenceWidget*)self);
}

void k_keysequencewidget_set_patterns(void* self, int32_t patterns) {
    KKeySequenceWidget_SetPatterns((KKeySequenceWidget*)self, patterns);
}

int32_t k_keysequencewidget_patterns(void* self) {
    return KKeySequenceWidget_Patterns((KKeySequenceWidget*)self);
}

void k_keysequencewidget_key_sequence_changed(void* self, void* seq) {
    KKeySequenceWidget_KeySequenceChanged((KKeySequenceWidget*)self, (QKeySequence*)seq);
}

void k_keysequencewidget_on_key_sequence_changed(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_Connect_KeySequenceChanged((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_steal_shortcut(void* self, void* seq, void* action) {
    KKeySequenceWidget_StealShortcut((KKeySequenceWidget*)self, (QKeySequence*)seq, (QAction*)action);
}

void k_keysequencewidget_on_steal_shortcut(void* self, void (*callback)(void*, void*, void*)) {
    KKeySequenceWidget_Connect_StealShortcut((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_recording_changed(void* self) {
    KKeySequenceWidget_RecordingChanged((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_recording_changed(void* self, void (*callback)(void*)) {
    KKeySequenceWidget_Connect_RecordingChanged((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_capture_key_sequence(void* self) {
    KKeySequenceWidget_CaptureKeySequence((KKeySequenceWidget*)self);
}

void k_keysequencewidget_set_key_sequence(void* self, void* seq) {
    KKeySequenceWidget_SetKeySequence((KKeySequenceWidget*)self, (QKeySequence*)seq);
}

void k_keysequencewidget_clear_key_sequence(void* self) {
    KKeySequenceWidget_ClearKeySequence((KKeySequenceWidget*)self);
}

void k_keysequencewidget_apply_steal_shortcut(void* self) {
    KKeySequenceWidget_ApplyStealShortcut((KKeySequenceWidget*)self);
}

const char* k_keysequencewidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_keysequencewidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_key_sequence2(void* self, void* seq, int32_t val) {
    KKeySequenceWidget_SetKeySequence2((KKeySequenceWidget*)self, (QKeySequence*)seq, val);
}

uintptr_t k_keysequencewidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_keysequencewidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_keysequencewidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_keysequencewidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_keysequencewidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_keysequencewidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_keysequencewidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_keysequencewidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_keysequencewidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_keysequencewidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_keysequencewidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_keysequencewidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_keysequencewidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_keysequencewidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_keysequencewidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_keysequencewidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_keysequencewidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_keysequencewidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_keysequencewidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_keysequencewidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_keysequencewidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_keysequencewidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_keysequencewidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_keysequencewidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_keysequencewidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_keysequencewidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_keysequencewidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_keysequencewidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_keysequencewidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_keysequencewidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_keysequencewidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_keysequencewidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_keysequencewidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_keysequencewidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_keysequencewidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_keysequencewidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_keysequencewidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_keysequencewidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_keysequencewidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_keysequencewidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_keysequencewidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_keysequencewidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_keysequencewidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_keysequencewidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_keysequencewidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_keysequencewidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_keysequencewidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_keysequencewidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_keysequencewidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_keysequencewidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_keysequencewidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_keysequencewidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_keysequencewidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_keysequencewidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_keysequencewidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_keysequencewidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_keysequencewidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_keysequencewidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_keysequencewidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_keysequencewidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_keysequencewidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_keysequencewidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_keysequencewidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_keysequencewidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_keysequencewidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_keysequencewidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_keysequencewidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_keysequencewidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_keysequencewidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_keysequencewidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_keysequencewidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_keysequencewidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_keysequencewidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_keysequencewidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_keysequencewidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_keysequencewidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_keysequencewidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_keysequencewidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_keysequencewidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_keysequencewidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_keysequencewidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_keysequencewidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_keysequencewidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_keysequencewidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_keysequencewidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_keysequencewidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_keysequencewidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_keysequencewidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_keysequencewidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_keysequencewidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_keysequencewidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_keysequencewidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_keysequencewidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_keysequencewidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_keysequencewidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_keysequencewidget_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_keysequencewidget_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_keysequencewidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_keysequencewidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_keysequencewidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_keysequencewidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_keysequencewidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_keysequencewidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_keysequencewidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_keysequencewidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_keysequencewidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_keysequencewidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_keysequencewidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_keysequencewidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_keysequencewidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_keysequencewidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_keysequencewidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_keysequencewidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_keysequencewidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_keysequencewidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_keysequencewidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_keysequencewidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_keysequencewidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_keysequencewidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_keysequencewidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_keysequencewidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_keysequencewidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_keysequencewidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_keysequencewidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_keysequencewidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_keysequencewidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_keysequencewidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_keysequencewidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_keysequencewidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_keysequencewidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_keysequencewidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_keysequencewidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_keysequencewidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_keysequencewidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_keysequencewidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_keysequencewidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_keysequencewidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_keysequencewidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_keysequencewidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_keysequencewidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_keysequencewidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_keysequencewidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_keysequencewidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_keysequencewidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_keysequencewidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_keysequencewidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_keysequencewidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_keysequencewidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_keysequencewidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_keysequencewidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_keysequencewidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_keysequencewidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_keysequencewidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_keysequencewidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_keysequencewidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_keysequencewidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_keysequencewidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_keysequencewidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_keysequencewidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_keysequencewidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_keysequencewidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_keysequencewidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_keysequencewidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_keysequencewidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_keysequencewidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_keysequencewidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_keysequencewidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_keysequencewidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_keysequencewidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_keysequencewidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_keysequencewidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_keysequencewidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_keysequencewidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_keysequencewidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_keysequencewidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_keysequencewidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_keysequencewidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_keysequencewidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_keysequencewidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_keysequencewidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_keysequencewidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_keysequencewidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_keysequencewidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_keysequencewidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_keysequencewidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_keysequencewidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_keysequencewidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_keysequencewidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_keysequencewidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_keysequencewidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_keysequencewidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_keysequencewidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_keysequencewidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_keysequencewidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_keysequencewidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_keysequencewidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_keysequencewidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_keysequencewidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_keysequencewidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_keysequencewidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_keysequencewidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_keysequencewidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_keysequencewidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_keysequencewidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_keysequencewidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_keysequencewidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_keysequencewidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_keysequencewidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_keysequencewidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_keysequencewidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_keysequencewidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_keysequencewidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_keysequencewidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_keysequencewidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_keysequencewidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_keysequencewidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_keysequencewidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_keysequencewidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_keysequencewidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_keysequencewidget_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_keysequencewidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_keysequencewidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_keysequencewidget_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_keysequencewidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_keysequencewidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_keysequencewidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_keysequencewidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_keysequencewidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_keysequencewidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_keysequencewidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_keysequencewidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_keysequencewidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_keysequencewidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_keysequencewidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_keysequencewidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_keysequencewidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_keysequencewidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_keysequencewidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_keysequencewidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_keysequencewidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_keysequencewidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_keysequencewidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_keysequencewidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_keysequencewidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_keysequencewidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_keysequencewidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_keysequencewidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_keysequencewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_keysequencewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_keysequencewidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_keysequencewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_keysequencewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_keysequencewidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_keysequencewidget_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_keysequencewidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_keysequencewidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_keysequencewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_keysequencewidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_keysequencewidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_keysequencewidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_keysequencewidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_keysequencewidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_keysequencewidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_keysequencewidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_keysequencewidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_keysequencewidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_keysequencewidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_keysequencewidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_keysequencewidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_keysequencewidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_keysequencewidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_keysequencewidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_keysequencewidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_keysequencewidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_keysequencewidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_keysequencewidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_keysequencewidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_keysequencewidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_keysequencewidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_keysequencewidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_keysequencewidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_keysequencewidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_keysequencewidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_keysequencewidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_keysequencewidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_keysequencewidget_dynamic_property_names");
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

QBindingStorage* k_keysequencewidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_keysequencewidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_keysequencewidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_keysequencewidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_keysequencewidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_keysequencewidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_keysequencewidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_keysequencewidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_keysequencewidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_keysequencewidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_keysequencewidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_keysequencewidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_keysequencewidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_keysequencewidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_keysequencewidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_keysequencewidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_keysequencewidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_keysequencewidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_keysequencewidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_keysequencewidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_keysequencewidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_keysequencewidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_keysequencewidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_keysequencewidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_keysequencewidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_keysequencewidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_keysequencewidget_dev_type(void* self) {
    return KKeySequenceWidget_DevType((KKeySequenceWidget*)self);
}

int32_t k_keysequencewidget_qbase_dev_type(void* self) {
    return KKeySequenceWidget_QBaseDevType((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_dev_type(void* self, int32_t (*callback)()) {
    KKeySequenceWidget_OnDevType((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_set_visible(void* self, bool visible) {
    KKeySequenceWidget_SetVisible((KKeySequenceWidget*)self, visible);
}

void k_keysequencewidget_qbase_set_visible(void* self, bool visible) {
    KKeySequenceWidget_QBaseSetVisible((KKeySequenceWidget*)self, visible);
}

void k_keysequencewidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KKeySequenceWidget_OnSetVisible((KKeySequenceWidget*)self, (intptr_t)callback);
}

QSize* k_keysequencewidget_size_hint(void* self) {
    return KKeySequenceWidget_SizeHint((KKeySequenceWidget*)self);
}

QSize* k_keysequencewidget_qbase_size_hint(void* self) {
    return KKeySequenceWidget_QBaseSizeHint((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_size_hint(void* self, QSize* (*callback)()) {
    KKeySequenceWidget_OnSizeHint((KKeySequenceWidget*)self, (intptr_t)callback);
}

QSize* k_keysequencewidget_minimum_size_hint(void* self) {
    return KKeySequenceWidget_MinimumSizeHint((KKeySequenceWidget*)self);
}

QSize* k_keysequencewidget_qbase_minimum_size_hint(void* self) {
    return KKeySequenceWidget_QBaseMinimumSizeHint((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KKeySequenceWidget_OnMinimumSizeHint((KKeySequenceWidget*)self, (intptr_t)callback);
}

int32_t k_keysequencewidget_height_for_width(void* self, int param1) {
    return KKeySequenceWidget_HeightForWidth((KKeySequenceWidget*)self, param1);
}

int32_t k_keysequencewidget_qbase_height_for_width(void* self, int param1) {
    return KKeySequenceWidget_QBaseHeightForWidth((KKeySequenceWidget*)self, param1);
}

void k_keysequencewidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KKeySequenceWidget_OnHeightForWidth((KKeySequenceWidget*)self, (intptr_t)callback);
}

bool k_keysequencewidget_has_height_for_width(void* self) {
    return KKeySequenceWidget_HasHeightForWidth((KKeySequenceWidget*)self);
}

bool k_keysequencewidget_qbase_has_height_for_width(void* self) {
    return KKeySequenceWidget_QBaseHasHeightForWidth((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_has_height_for_width(void* self, bool (*callback)()) {
    KKeySequenceWidget_OnHasHeightForWidth((KKeySequenceWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_keysequencewidget_paint_engine(void* self) {
    return KKeySequenceWidget_PaintEngine((KKeySequenceWidget*)self);
}

QPaintEngine* k_keysequencewidget_qbase_paint_engine(void* self) {
    return KKeySequenceWidget_QBasePaintEngine((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KKeySequenceWidget_OnPaintEngine((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_mouse_press_event(void* self, void* event) {
    KKeySequenceWidget_MousePressEvent((KKeySequenceWidget*)self, (QMouseEvent*)event);
}

void k_keysequencewidget_qbase_mouse_press_event(void* self, void* event) {
    KKeySequenceWidget_QBaseMousePressEvent((KKeySequenceWidget*)self, (QMouseEvent*)event);
}

void k_keysequencewidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnMousePressEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_mouse_release_event(void* self, void* event) {
    KKeySequenceWidget_MouseReleaseEvent((KKeySequenceWidget*)self, (QMouseEvent*)event);
}

void k_keysequencewidget_qbase_mouse_release_event(void* self, void* event) {
    KKeySequenceWidget_QBaseMouseReleaseEvent((KKeySequenceWidget*)self, (QMouseEvent*)event);
}

void k_keysequencewidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnMouseReleaseEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_mouse_double_click_event(void* self, void* event) {
    KKeySequenceWidget_MouseDoubleClickEvent((KKeySequenceWidget*)self, (QMouseEvent*)event);
}

void k_keysequencewidget_qbase_mouse_double_click_event(void* self, void* event) {
    KKeySequenceWidget_QBaseMouseDoubleClickEvent((KKeySequenceWidget*)self, (QMouseEvent*)event);
}

void k_keysequencewidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnMouseDoubleClickEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_mouse_move_event(void* self, void* event) {
    KKeySequenceWidget_MouseMoveEvent((KKeySequenceWidget*)self, (QMouseEvent*)event);
}

void k_keysequencewidget_qbase_mouse_move_event(void* self, void* event) {
    KKeySequenceWidget_QBaseMouseMoveEvent((KKeySequenceWidget*)self, (QMouseEvent*)event);
}

void k_keysequencewidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnMouseMoveEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_wheel_event(void* self, void* event) {
    KKeySequenceWidget_WheelEvent((KKeySequenceWidget*)self, (QWheelEvent*)event);
}

void k_keysequencewidget_qbase_wheel_event(void* self, void* event) {
    KKeySequenceWidget_QBaseWheelEvent((KKeySequenceWidget*)self, (QWheelEvent*)event);
}

void k_keysequencewidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnWheelEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_key_press_event(void* self, void* event) {
    KKeySequenceWidget_KeyPressEvent((KKeySequenceWidget*)self, (QKeyEvent*)event);
}

void k_keysequencewidget_qbase_key_press_event(void* self, void* event) {
    KKeySequenceWidget_QBaseKeyPressEvent((KKeySequenceWidget*)self, (QKeyEvent*)event);
}

void k_keysequencewidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnKeyPressEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_key_release_event(void* self, void* event) {
    KKeySequenceWidget_KeyReleaseEvent((KKeySequenceWidget*)self, (QKeyEvent*)event);
}

void k_keysequencewidget_qbase_key_release_event(void* self, void* event) {
    KKeySequenceWidget_QBaseKeyReleaseEvent((KKeySequenceWidget*)self, (QKeyEvent*)event);
}

void k_keysequencewidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnKeyReleaseEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_focus_in_event(void* self, void* event) {
    KKeySequenceWidget_FocusInEvent((KKeySequenceWidget*)self, (QFocusEvent*)event);
}

void k_keysequencewidget_qbase_focus_in_event(void* self, void* event) {
    KKeySequenceWidget_QBaseFocusInEvent((KKeySequenceWidget*)self, (QFocusEvent*)event);
}

void k_keysequencewidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnFocusInEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_focus_out_event(void* self, void* event) {
    KKeySequenceWidget_FocusOutEvent((KKeySequenceWidget*)self, (QFocusEvent*)event);
}

void k_keysequencewidget_qbase_focus_out_event(void* self, void* event) {
    KKeySequenceWidget_QBaseFocusOutEvent((KKeySequenceWidget*)self, (QFocusEvent*)event);
}

void k_keysequencewidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnFocusOutEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_enter_event(void* self, void* event) {
    KKeySequenceWidget_EnterEvent((KKeySequenceWidget*)self, (QEnterEvent*)event);
}

void k_keysequencewidget_qbase_enter_event(void* self, void* event) {
    KKeySequenceWidget_QBaseEnterEvent((KKeySequenceWidget*)self, (QEnterEvent*)event);
}

void k_keysequencewidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnEnterEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_leave_event(void* self, void* event) {
    KKeySequenceWidget_LeaveEvent((KKeySequenceWidget*)self, (QEvent*)event);
}

void k_keysequencewidget_qbase_leave_event(void* self, void* event) {
    KKeySequenceWidget_QBaseLeaveEvent((KKeySequenceWidget*)self, (QEvent*)event);
}

void k_keysequencewidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnLeaveEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_paint_event(void* self, void* event) {
    KKeySequenceWidget_PaintEvent((KKeySequenceWidget*)self, (QPaintEvent*)event);
}

void k_keysequencewidget_qbase_paint_event(void* self, void* event) {
    KKeySequenceWidget_QBasePaintEvent((KKeySequenceWidget*)self, (QPaintEvent*)event);
}

void k_keysequencewidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnPaintEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_move_event(void* self, void* event) {
    KKeySequenceWidget_MoveEvent((KKeySequenceWidget*)self, (QMoveEvent*)event);
}

void k_keysequencewidget_qbase_move_event(void* self, void* event) {
    KKeySequenceWidget_QBaseMoveEvent((KKeySequenceWidget*)self, (QMoveEvent*)event);
}

void k_keysequencewidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnMoveEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_resize_event(void* self, void* event) {
    KKeySequenceWidget_ResizeEvent((KKeySequenceWidget*)self, (QResizeEvent*)event);
}

void k_keysequencewidget_qbase_resize_event(void* self, void* event) {
    KKeySequenceWidget_QBaseResizeEvent((KKeySequenceWidget*)self, (QResizeEvent*)event);
}

void k_keysequencewidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnResizeEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_close_event(void* self, void* event) {
    KKeySequenceWidget_CloseEvent((KKeySequenceWidget*)self, (QCloseEvent*)event);
}

void k_keysequencewidget_qbase_close_event(void* self, void* event) {
    KKeySequenceWidget_QBaseCloseEvent((KKeySequenceWidget*)self, (QCloseEvent*)event);
}

void k_keysequencewidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnCloseEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_context_menu_event(void* self, void* event) {
    KKeySequenceWidget_ContextMenuEvent((KKeySequenceWidget*)self, (QContextMenuEvent*)event);
}

void k_keysequencewidget_qbase_context_menu_event(void* self, void* event) {
    KKeySequenceWidget_QBaseContextMenuEvent((KKeySequenceWidget*)self, (QContextMenuEvent*)event);
}

void k_keysequencewidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnContextMenuEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_tablet_event(void* self, void* event) {
    KKeySequenceWidget_TabletEvent((KKeySequenceWidget*)self, (QTabletEvent*)event);
}

void k_keysequencewidget_qbase_tablet_event(void* self, void* event) {
    KKeySequenceWidget_QBaseTabletEvent((KKeySequenceWidget*)self, (QTabletEvent*)event);
}

void k_keysequencewidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnTabletEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_action_event(void* self, void* event) {
    KKeySequenceWidget_ActionEvent((KKeySequenceWidget*)self, (QActionEvent*)event);
}

void k_keysequencewidget_qbase_action_event(void* self, void* event) {
    KKeySequenceWidget_QBaseActionEvent((KKeySequenceWidget*)self, (QActionEvent*)event);
}

void k_keysequencewidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnActionEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_drag_enter_event(void* self, void* event) {
    KKeySequenceWidget_DragEnterEvent((KKeySequenceWidget*)self, (QDragEnterEvent*)event);
}

void k_keysequencewidget_qbase_drag_enter_event(void* self, void* event) {
    KKeySequenceWidget_QBaseDragEnterEvent((KKeySequenceWidget*)self, (QDragEnterEvent*)event);
}

void k_keysequencewidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnDragEnterEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_drag_move_event(void* self, void* event) {
    KKeySequenceWidget_DragMoveEvent((KKeySequenceWidget*)self, (QDragMoveEvent*)event);
}

void k_keysequencewidget_qbase_drag_move_event(void* self, void* event) {
    KKeySequenceWidget_QBaseDragMoveEvent((KKeySequenceWidget*)self, (QDragMoveEvent*)event);
}

void k_keysequencewidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnDragMoveEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_drag_leave_event(void* self, void* event) {
    KKeySequenceWidget_DragLeaveEvent((KKeySequenceWidget*)self, (QDragLeaveEvent*)event);
}

void k_keysequencewidget_qbase_drag_leave_event(void* self, void* event) {
    KKeySequenceWidget_QBaseDragLeaveEvent((KKeySequenceWidget*)self, (QDragLeaveEvent*)event);
}

void k_keysequencewidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnDragLeaveEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_drop_event(void* self, void* event) {
    KKeySequenceWidget_DropEvent((KKeySequenceWidget*)self, (QDropEvent*)event);
}

void k_keysequencewidget_qbase_drop_event(void* self, void* event) {
    KKeySequenceWidget_QBaseDropEvent((KKeySequenceWidget*)self, (QDropEvent*)event);
}

void k_keysequencewidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnDropEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_show_event(void* self, void* event) {
    KKeySequenceWidget_ShowEvent((KKeySequenceWidget*)self, (QShowEvent*)event);
}

void k_keysequencewidget_qbase_show_event(void* self, void* event) {
    KKeySequenceWidget_QBaseShowEvent((KKeySequenceWidget*)self, (QShowEvent*)event);
}

void k_keysequencewidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnShowEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_hide_event(void* self, void* event) {
    KKeySequenceWidget_HideEvent((KKeySequenceWidget*)self, (QHideEvent*)event);
}

void k_keysequencewidget_qbase_hide_event(void* self, void* event) {
    KKeySequenceWidget_QBaseHideEvent((KKeySequenceWidget*)self, (QHideEvent*)event);
}

void k_keysequencewidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnHideEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

bool k_keysequencewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KKeySequenceWidget_NativeEvent((KKeySequenceWidget*)self, qstring(eventType), message, result);
}

bool k_keysequencewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KKeySequenceWidget_QBaseNativeEvent((KKeySequenceWidget*)self, qstring(eventType), message, result);
}

void k_keysequencewidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KKeySequenceWidget_OnNativeEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_change_event(void* self, void* param1) {
    KKeySequenceWidget_ChangeEvent((KKeySequenceWidget*)self, (QEvent*)param1);
}

void k_keysequencewidget_qbase_change_event(void* self, void* param1) {
    KKeySequenceWidget_QBaseChangeEvent((KKeySequenceWidget*)self, (QEvent*)param1);
}

void k_keysequencewidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnChangeEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

int32_t k_keysequencewidget_metric(void* self, int32_t param1) {
    return KKeySequenceWidget_Metric((KKeySequenceWidget*)self, param1);
}

int32_t k_keysequencewidget_qbase_metric(void* self, int32_t param1) {
    return KKeySequenceWidget_QBaseMetric((KKeySequenceWidget*)self, param1);
}

void k_keysequencewidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KKeySequenceWidget_OnMetric((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_init_painter(void* self, void* painter) {
    KKeySequenceWidget_InitPainter((KKeySequenceWidget*)self, (QPainter*)painter);
}

void k_keysequencewidget_qbase_init_painter(void* self, void* painter) {
    KKeySequenceWidget_QBaseInitPainter((KKeySequenceWidget*)self, (QPainter*)painter);
}

void k_keysequencewidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnInitPainter((KKeySequenceWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_keysequencewidget_redirected(void* self, void* offset) {
    return KKeySequenceWidget_Redirected((KKeySequenceWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_keysequencewidget_qbase_redirected(void* self, void* offset) {
    return KKeySequenceWidget_QBaseRedirected((KKeySequenceWidget*)self, (QPoint*)offset);
}

void k_keysequencewidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KKeySequenceWidget_OnRedirected((KKeySequenceWidget*)self, (intptr_t)callback);
}

QPainter* k_keysequencewidget_shared_painter(void* self) {
    return KKeySequenceWidget_SharedPainter((KKeySequenceWidget*)self);
}

QPainter* k_keysequencewidget_qbase_shared_painter(void* self) {
    return KKeySequenceWidget_QBaseSharedPainter((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    KKeySequenceWidget_OnSharedPainter((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_input_method_event(void* self, void* param1) {
    KKeySequenceWidget_InputMethodEvent((KKeySequenceWidget*)self, (QInputMethodEvent*)param1);
}

void k_keysequencewidget_qbase_input_method_event(void* self, void* param1) {
    KKeySequenceWidget_QBaseInputMethodEvent((KKeySequenceWidget*)self, (QInputMethodEvent*)param1);
}

void k_keysequencewidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnInputMethodEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

QVariant* k_keysequencewidget_input_method_query(void* self, int64_t param1) {
    return KKeySequenceWidget_InputMethodQuery((KKeySequenceWidget*)self, param1);
}

QVariant* k_keysequencewidget_qbase_input_method_query(void* self, int64_t param1) {
    return KKeySequenceWidget_QBaseInputMethodQuery((KKeySequenceWidget*)self, param1);
}

void k_keysequencewidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KKeySequenceWidget_OnInputMethodQuery((KKeySequenceWidget*)self, (intptr_t)callback);
}

bool k_keysequencewidget_focus_next_prev_child(void* self, bool next) {
    return KKeySequenceWidget_FocusNextPrevChild((KKeySequenceWidget*)self, next);
}

bool k_keysequencewidget_qbase_focus_next_prev_child(void* self, bool next) {
    return KKeySequenceWidget_QBaseFocusNextPrevChild((KKeySequenceWidget*)self, next);
}

void k_keysequencewidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KKeySequenceWidget_OnFocusNextPrevChild((KKeySequenceWidget*)self, (intptr_t)callback);
}

bool k_keysequencewidget_event_filter(void* self, void* watched, void* event) {
    return KKeySequenceWidget_EventFilter((KKeySequenceWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_keysequencewidget_qbase_event_filter(void* self, void* watched, void* event) {
    return KKeySequenceWidget_QBaseEventFilter((KKeySequenceWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_keysequencewidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KKeySequenceWidget_OnEventFilter((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_timer_event(void* self, void* event) {
    KKeySequenceWidget_TimerEvent((KKeySequenceWidget*)self, (QTimerEvent*)event);
}

void k_keysequencewidget_qbase_timer_event(void* self, void* event) {
    KKeySequenceWidget_QBaseTimerEvent((KKeySequenceWidget*)self, (QTimerEvent*)event);
}

void k_keysequencewidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnTimerEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_child_event(void* self, void* event) {
    KKeySequenceWidget_ChildEvent((KKeySequenceWidget*)self, (QChildEvent*)event);
}

void k_keysequencewidget_qbase_child_event(void* self, void* event) {
    KKeySequenceWidget_QBaseChildEvent((KKeySequenceWidget*)self, (QChildEvent*)event);
}

void k_keysequencewidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnChildEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_custom_event(void* self, void* event) {
    KKeySequenceWidget_CustomEvent((KKeySequenceWidget*)self, (QEvent*)event);
}

void k_keysequencewidget_qbase_custom_event(void* self, void* event) {
    KKeySequenceWidget_QBaseCustomEvent((KKeySequenceWidget*)self, (QEvent*)event);
}

void k_keysequencewidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnCustomEvent((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_connect_notify(void* self, void* signal) {
    KKeySequenceWidget_ConnectNotify((KKeySequenceWidget*)self, (QMetaMethod*)signal);
}

void k_keysequencewidget_qbase_connect_notify(void* self, void* signal) {
    KKeySequenceWidget_QBaseConnectNotify((KKeySequenceWidget*)self, (QMetaMethod*)signal);
}

void k_keysequencewidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnConnectNotify((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_disconnect_notify(void* self, void* signal) {
    KKeySequenceWidget_DisconnectNotify((KKeySequenceWidget*)self, (QMetaMethod*)signal);
}

void k_keysequencewidget_qbase_disconnect_notify(void* self, void* signal) {
    KKeySequenceWidget_QBaseDisconnectNotify((KKeySequenceWidget*)self, (QMetaMethod*)signal);
}

void k_keysequencewidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KKeySequenceWidget_OnDisconnectNotify((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_update_micro_focus(void* self) {
    KKeySequenceWidget_UpdateMicroFocus((KKeySequenceWidget*)self);
}

void k_keysequencewidget_qbase_update_micro_focus(void* self) {
    KKeySequenceWidget_QBaseUpdateMicroFocus((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_update_micro_focus(void* self, void (*callback)()) {
    KKeySequenceWidget_OnUpdateMicroFocus((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_create(void* self) {
    KKeySequenceWidget_Create((KKeySequenceWidget*)self);
}

void k_keysequencewidget_qbase_create(void* self) {
    KKeySequenceWidget_QBaseCreate((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_create(void* self, void (*callback)()) {
    KKeySequenceWidget_OnCreate((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_destroy(void* self) {
    KKeySequenceWidget_Destroy((KKeySequenceWidget*)self);
}

void k_keysequencewidget_qbase_destroy(void* self) {
    KKeySequenceWidget_QBaseDestroy((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_destroy(void* self, void (*callback)()) {
    KKeySequenceWidget_OnDestroy((KKeySequenceWidget*)self, (intptr_t)callback);
}

bool k_keysequencewidget_focus_next_child(void* self) {
    return KKeySequenceWidget_FocusNextChild((KKeySequenceWidget*)self);
}

bool k_keysequencewidget_qbase_focus_next_child(void* self) {
    return KKeySequenceWidget_QBaseFocusNextChild((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_focus_next_child(void* self, bool (*callback)()) {
    KKeySequenceWidget_OnFocusNextChild((KKeySequenceWidget*)self, (intptr_t)callback);
}

bool k_keysequencewidget_focus_previous_child(void* self) {
    return KKeySequenceWidget_FocusPreviousChild((KKeySequenceWidget*)self);
}

bool k_keysequencewidget_qbase_focus_previous_child(void* self) {
    return KKeySequenceWidget_QBaseFocusPreviousChild((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_focus_previous_child(void* self, bool (*callback)()) {
    KKeySequenceWidget_OnFocusPreviousChild((KKeySequenceWidget*)self, (intptr_t)callback);
}

QObject* k_keysequencewidget_sender(void* self) {
    return KKeySequenceWidget_Sender((KKeySequenceWidget*)self);
}

QObject* k_keysequencewidget_qbase_sender(void* self) {
    return KKeySequenceWidget_QBaseSender((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_sender(void* self, QObject* (*callback)()) {
    KKeySequenceWidget_OnSender((KKeySequenceWidget*)self, (intptr_t)callback);
}

int32_t k_keysequencewidget_sender_signal_index(void* self) {
    return KKeySequenceWidget_SenderSignalIndex((KKeySequenceWidget*)self);
}

int32_t k_keysequencewidget_qbase_sender_signal_index(void* self) {
    return KKeySequenceWidget_QBaseSenderSignalIndex((KKeySequenceWidget*)self);
}

void k_keysequencewidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KKeySequenceWidget_OnSenderSignalIndex((KKeySequenceWidget*)self, (intptr_t)callback);
}

int32_t k_keysequencewidget_receivers(void* self, const char* signal) {
    return KKeySequenceWidget_Receivers((KKeySequenceWidget*)self, signal);
}

int32_t k_keysequencewidget_qbase_receivers(void* self, const char* signal) {
    return KKeySequenceWidget_QBaseReceivers((KKeySequenceWidget*)self, signal);
}

void k_keysequencewidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KKeySequenceWidget_OnReceivers((KKeySequenceWidget*)self, (intptr_t)callback);
}

bool k_keysequencewidget_is_signal_connected(void* self, void* signal) {
    return KKeySequenceWidget_IsSignalConnected((KKeySequenceWidget*)self, (QMetaMethod*)signal);
}

bool k_keysequencewidget_qbase_is_signal_connected(void* self, void* signal) {
    return KKeySequenceWidget_QBaseIsSignalConnected((KKeySequenceWidget*)self, (QMetaMethod*)signal);
}

void k_keysequencewidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KKeySequenceWidget_OnIsSignalConnected((KKeySequenceWidget*)self, (intptr_t)callback);
}

double k_keysequencewidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KKeySequenceWidget_GetDecodedMetricF((KKeySequenceWidget*)self, metricA, metricB);
}

double k_keysequencewidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KKeySequenceWidget_QBaseGetDecodedMetricF((KKeySequenceWidget*)self, metricA, metricB);
}

void k_keysequencewidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KKeySequenceWidget_OnGetDecodedMetricF((KKeySequenceWidget*)self, (intptr_t)callback);
}

void k_keysequencewidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_keysequencewidget_delete(void* self) {
    KKeySequenceWidget_Delete((KKeySequenceWidget*)(self));
}
