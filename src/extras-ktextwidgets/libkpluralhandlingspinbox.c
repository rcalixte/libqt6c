#include "../extras-ki18n/libklocalizedstring.hpp"
#include "../libqabstractspinbox.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqlineedit.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqspinbox.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkpluralhandlingspinbox.hpp"
#include "libkpluralhandlingspinbox.h"

KPluralHandlingSpinBox* k_pluralhandlingspinbox_new(void* parent) {
    return KPluralHandlingSpinBox_new((QWidget*)parent);
}

KPluralHandlingSpinBox* k_pluralhandlingspinbox_new2() {
    return KPluralHandlingSpinBox_new2();
}

const QMetaObject* k_pluralhandlingspinbox_meta_object(void* self) {
    return KPluralHandlingSpinBox_MetaObject((KPluralHandlingSpinBox*)self);
}

void* k_pluralhandlingspinbox_metacast(void* self, const char* param1) {
    return KPluralHandlingSpinBox_Metacast((KPluralHandlingSpinBox*)self, param1);
}

int32_t k_pluralhandlingspinbox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPluralHandlingSpinBox_Metacall((KPluralHandlingSpinBox*)self, param1, param2, param3);
}

void k_pluralhandlingspinbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPluralHandlingSpinBox_OnMetacall((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

int32_t k_pluralhandlingspinbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPluralHandlingSpinBox_QBaseMetacall((KPluralHandlingSpinBox*)self, param1, param2, param3);
}

const char* k_pluralhandlingspinbox_tr(const char* s) {
    libqt_string _str = KPluralHandlingSpinBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_suffix(void* self, void* suffix) {
    KPluralHandlingSpinBox_SetSuffix((KPluralHandlingSpinBox*)self, (KLocalizedString*)suffix);
}

const char* k_pluralhandlingspinbox_tr2(const char* s, const char* c) {
    libqt_string _str = KPluralHandlingSpinBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluralhandlingspinbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KPluralHandlingSpinBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_pluralhandlingspinbox_value(void* self) {
    return QSpinBox_Value((QSpinBox*)self);
}

const char* k_pluralhandlingspinbox_prefix(void* self) {
    libqt_string _str = QSpinBox_Prefix((QSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_prefix(void* self, const char* prefix) {
    QSpinBox_SetPrefix((QSpinBox*)self, qstring(prefix));
}

const char* k_pluralhandlingspinbox_suffix(void* self) {
    libqt_string _str = QSpinBox_Suffix((QSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluralhandlingspinbox_clean_text(void* self) {
    libqt_string _str = QSpinBox_CleanText((QSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_pluralhandlingspinbox_single_step(void* self) {
    return QSpinBox_SingleStep((QSpinBox*)self);
}

void k_pluralhandlingspinbox_set_single_step(void* self, int val) {
    QSpinBox_SetSingleStep((QSpinBox*)self, val);
}

int32_t k_pluralhandlingspinbox_minimum(void* self) {
    return QSpinBox_Minimum((QSpinBox*)self);
}

void k_pluralhandlingspinbox_set_minimum(void* self, int min) {
    QSpinBox_SetMinimum((QSpinBox*)self, min);
}

int32_t k_pluralhandlingspinbox_maximum(void* self) {
    return QSpinBox_Maximum((QSpinBox*)self);
}

void k_pluralhandlingspinbox_set_maximum(void* self, int max) {
    QSpinBox_SetMaximum((QSpinBox*)self, max);
}

void k_pluralhandlingspinbox_set_range(void* self, int min, int max) {
    QSpinBox_SetRange((QSpinBox*)self, min, max);
}

int32_t k_pluralhandlingspinbox_step_type(void* self) {
    return QSpinBox_StepType((QSpinBox*)self);
}

void k_pluralhandlingspinbox_set_step_type(void* self, int32_t stepType) {
    QSpinBox_SetStepType((QSpinBox*)self, stepType);
}

int32_t k_pluralhandlingspinbox_display_integer_base(void* self) {
    return QSpinBox_DisplayIntegerBase((QSpinBox*)self);
}

void k_pluralhandlingspinbox_set_display_integer_base(void* self, int base) {
    QSpinBox_SetDisplayIntegerBase((QSpinBox*)self, base);
}

void k_pluralhandlingspinbox_set_value(void* self, int val) {
    QSpinBox_SetValue((QSpinBox*)self, val);
}

void k_pluralhandlingspinbox_value_changed(void* self, int param1) {
    QSpinBox_ValueChanged((QSpinBox*)self, param1);
}

void k_pluralhandlingspinbox_on_value_changed(void* self, void (*callback)(void*, int)) {
    QSpinBox_Connect_ValueChanged((QSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_text_changed(void* self, const char* param1) {
    QSpinBox_TextChanged((QSpinBox*)self, qstring(param1));
}

void k_pluralhandlingspinbox_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    QSpinBox_Connect_TextChanged((QSpinBox*)self, (intptr_t)callback);
}

int32_t k_pluralhandlingspinbox_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_set_button_symbols(void* self, int32_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

void k_pluralhandlingspinbox_set_correction_mode(void* self, int32_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

int32_t k_pluralhandlingspinbox_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

bool k_pluralhandlingspinbox_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

const char* k_pluralhandlingspinbox_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluralhandlingspinbox_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

bool k_pluralhandlingspinbox_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

void k_pluralhandlingspinbox_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

bool k_pluralhandlingspinbox_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

bool k_pluralhandlingspinbox_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_set_alignment(void* self, int32_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

int32_t k_pluralhandlingspinbox_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

bool k_pluralhandlingspinbox_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

bool k_pluralhandlingspinbox_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

bool k_pluralhandlingspinbox_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

void k_pluralhandlingspinbox_on_editing_finished(void* self, void (*callback)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)callback);
}

uintptr_t k_pluralhandlingspinbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_pluralhandlingspinbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_pluralhandlingspinbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_pluralhandlingspinbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_pluralhandlingspinbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_pluralhandlingspinbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_pluralhandlingspinbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_pluralhandlingspinbox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_pluralhandlingspinbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_pluralhandlingspinbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_pluralhandlingspinbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_pluralhandlingspinbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_pluralhandlingspinbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_pluralhandlingspinbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_pluralhandlingspinbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_pluralhandlingspinbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_pluralhandlingspinbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_pluralhandlingspinbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_pluralhandlingspinbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_pluralhandlingspinbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_pluralhandlingspinbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_pluralhandlingspinbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_pluralhandlingspinbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_pluralhandlingspinbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_pluralhandlingspinbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_pluralhandlingspinbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_pluralhandlingspinbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_pluralhandlingspinbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_pluralhandlingspinbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_pluralhandlingspinbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_pluralhandlingspinbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_pluralhandlingspinbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_pluralhandlingspinbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_pluralhandlingspinbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_pluralhandlingspinbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_pluralhandlingspinbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_pluralhandlingspinbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_pluralhandlingspinbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_pluralhandlingspinbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_pluralhandlingspinbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_pluralhandlingspinbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_pluralhandlingspinbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pluralhandlingspinbox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pluralhandlingspinbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pluralhandlingspinbox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pluralhandlingspinbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pluralhandlingspinbox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pluralhandlingspinbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pluralhandlingspinbox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pluralhandlingspinbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pluralhandlingspinbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_pluralhandlingspinbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pluralhandlingspinbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_pluralhandlingspinbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_pluralhandlingspinbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_pluralhandlingspinbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_pluralhandlingspinbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_pluralhandlingspinbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_pluralhandlingspinbox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_pluralhandlingspinbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_pluralhandlingspinbox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_pluralhandlingspinbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_pluralhandlingspinbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_pluralhandlingspinbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_pluralhandlingspinbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_pluralhandlingspinbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_pluralhandlingspinbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_pluralhandlingspinbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_pluralhandlingspinbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_pluralhandlingspinbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_pluralhandlingspinbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_pluralhandlingspinbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_pluralhandlingspinbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_pluralhandlingspinbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_pluralhandlingspinbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_pluralhandlingspinbox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_pluralhandlingspinbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_pluralhandlingspinbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_pluralhandlingspinbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_pluralhandlingspinbox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_pluralhandlingspinbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_pluralhandlingspinbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_pluralhandlingspinbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_pluralhandlingspinbox_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_pluralhandlingspinbox_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_pluralhandlingspinbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_pluralhandlingspinbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_pluralhandlingspinbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluralhandlingspinbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_pluralhandlingspinbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_pluralhandlingspinbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_pluralhandlingspinbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_pluralhandlingspinbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_pluralhandlingspinbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_pluralhandlingspinbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_pluralhandlingspinbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_pluralhandlingspinbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_pluralhandlingspinbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_pluralhandlingspinbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_pluralhandlingspinbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_pluralhandlingspinbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluralhandlingspinbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_pluralhandlingspinbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_pluralhandlingspinbox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_pluralhandlingspinbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_pluralhandlingspinbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_pluralhandlingspinbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_pluralhandlingspinbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_pluralhandlingspinbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_pluralhandlingspinbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_pluralhandlingspinbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_pluralhandlingspinbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_pluralhandlingspinbox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_pluralhandlingspinbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_pluralhandlingspinbox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_pluralhandlingspinbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_pluralhandlingspinbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_pluralhandlingspinbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_pluralhandlingspinbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_pluralhandlingspinbox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_pluralhandlingspinbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_pluralhandlingspinbox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_pluralhandlingspinbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_pluralhandlingspinbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_pluralhandlingspinbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_pluralhandlingspinbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_pluralhandlingspinbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_pluralhandlingspinbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_pluralhandlingspinbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_pluralhandlingspinbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_pluralhandlingspinbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_pluralhandlingspinbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_pluralhandlingspinbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_pluralhandlingspinbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_pluralhandlingspinbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_pluralhandlingspinbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_pluralhandlingspinbox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_pluralhandlingspinbox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_pluralhandlingspinbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_pluralhandlingspinbox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_pluralhandlingspinbox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_pluralhandlingspinbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_pluralhandlingspinbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_pluralhandlingspinbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_pluralhandlingspinbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_pluralhandlingspinbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_pluralhandlingspinbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_pluralhandlingspinbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_pluralhandlingspinbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_pluralhandlingspinbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_pluralhandlingspinbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_pluralhandlingspinbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_pluralhandlingspinbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_pluralhandlingspinbox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_pluralhandlingspinbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_pluralhandlingspinbox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_pluralhandlingspinbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_pluralhandlingspinbox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_pluralhandlingspinbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_pluralhandlingspinbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_pluralhandlingspinbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_pluralhandlingspinbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_pluralhandlingspinbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_pluralhandlingspinbox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_pluralhandlingspinbox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_pluralhandlingspinbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_pluralhandlingspinbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_pluralhandlingspinbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_pluralhandlingspinbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_pluralhandlingspinbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_pluralhandlingspinbox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_pluralhandlingspinbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_pluralhandlingspinbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_pluralhandlingspinbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_pluralhandlingspinbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_pluralhandlingspinbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_pluralhandlingspinbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_pluralhandlingspinbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_pluralhandlingspinbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_pluralhandlingspinbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_pluralhandlingspinbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_pluralhandlingspinbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_pluralhandlingspinbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_pluralhandlingspinbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_pluralhandlingspinbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_pluralhandlingspinbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_pluralhandlingspinbox_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_pluralhandlingspinbox_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_pluralhandlingspinbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_pluralhandlingspinbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_pluralhandlingspinbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_pluralhandlingspinbox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_pluralhandlingspinbox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_pluralhandlingspinbox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_pluralhandlingspinbox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_pluralhandlingspinbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_pluralhandlingspinbox_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_pluralhandlingspinbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_pluralhandlingspinbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_pluralhandlingspinbox_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_pluralhandlingspinbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_pluralhandlingspinbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_pluralhandlingspinbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_pluralhandlingspinbox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_pluralhandlingspinbox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_pluralhandlingspinbox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_pluralhandlingspinbox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_pluralhandlingspinbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_pluralhandlingspinbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_pluralhandlingspinbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_pluralhandlingspinbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_pluralhandlingspinbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_pluralhandlingspinbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_pluralhandlingspinbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_pluralhandlingspinbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_pluralhandlingspinbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_pluralhandlingspinbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_pluralhandlingspinbox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_pluralhandlingspinbox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_pluralhandlingspinbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_pluralhandlingspinbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_pluralhandlingspinbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_pluralhandlingspinbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_pluralhandlingspinbox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_pluralhandlingspinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pluralhandlingspinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_pluralhandlingspinbox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_pluralhandlingspinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pluralhandlingspinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_pluralhandlingspinbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_pluralhandlingspinbox_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_pluralhandlingspinbox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_pluralhandlingspinbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_pluralhandlingspinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_pluralhandlingspinbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_pluralhandlingspinbox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_pluralhandlingspinbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_pluralhandlingspinbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_pluralhandlingspinbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pluralhandlingspinbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pluralhandlingspinbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pluralhandlingspinbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pluralhandlingspinbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pluralhandlingspinbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pluralhandlingspinbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pluralhandlingspinbox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pluralhandlingspinbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_pluralhandlingspinbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pluralhandlingspinbox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pluralhandlingspinbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pluralhandlingspinbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pluralhandlingspinbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pluralhandlingspinbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pluralhandlingspinbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pluralhandlingspinbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pluralhandlingspinbox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_pluralhandlingspinbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pluralhandlingspinbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pluralhandlingspinbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pluralhandlingspinbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pluralhandlingspinbox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_pluralhandlingspinbox_dynamic_property_names");
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

QBindingStorage* k_pluralhandlingspinbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pluralhandlingspinbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pluralhandlingspinbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pluralhandlingspinbox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_pluralhandlingspinbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_pluralhandlingspinbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pluralhandlingspinbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_pluralhandlingspinbox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_pluralhandlingspinbox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_pluralhandlingspinbox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_pluralhandlingspinbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_pluralhandlingspinbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pluralhandlingspinbox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_pluralhandlingspinbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_pluralhandlingspinbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_pluralhandlingspinbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_pluralhandlingspinbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_pluralhandlingspinbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_pluralhandlingspinbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_pluralhandlingspinbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_pluralhandlingspinbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_pluralhandlingspinbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_pluralhandlingspinbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_pluralhandlingspinbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_pluralhandlingspinbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_pluralhandlingspinbox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool k_pluralhandlingspinbox_event(void* self, void* event) {
    return KPluralHandlingSpinBox_Event((KPluralHandlingSpinBox*)self, (QEvent*)event);
}

bool k_pluralhandlingspinbox_qbase_event(void* self, void* event) {
    return KPluralHandlingSpinBox_QBaseEvent((KPluralHandlingSpinBox*)self, (QEvent*)event);
}

void k_pluralhandlingspinbox_on_event(void* self, bool (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

int32_t k_pluralhandlingspinbox_validate(void* self, const char* input, int* pos) {
    return KPluralHandlingSpinBox_Validate((KPluralHandlingSpinBox*)self, qstring(input), pos);
}

int32_t k_pluralhandlingspinbox_qbase_validate(void* self, const char* input, int* pos) {
    return KPluralHandlingSpinBox_QBaseValidate((KPluralHandlingSpinBox*)self, qstring(input), pos);
}

void k_pluralhandlingspinbox_on_validate(void* self, int32_t (*callback)(void*, const char*, int*)) {
    KPluralHandlingSpinBox_OnValidate((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

int32_t k_pluralhandlingspinbox_value_from_text(void* self, const char* text) {
    return KPluralHandlingSpinBox_ValueFromText((KPluralHandlingSpinBox*)self, qstring(text));
}

int32_t k_pluralhandlingspinbox_qbase_value_from_text(void* self, const char* text) {
    return KPluralHandlingSpinBox_QBaseValueFromText((KPluralHandlingSpinBox*)self, qstring(text));
}

void k_pluralhandlingspinbox_on_value_from_text(void* self, int32_t (*callback)(void*, const char*)) {
    KPluralHandlingSpinBox_OnValueFromText((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

const char* k_pluralhandlingspinbox_text_from_value(void* self, int val) {
    libqt_string _str = KPluralHandlingSpinBox_TextFromValue((KPluralHandlingSpinBox*)self, val);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluralhandlingspinbox_qbase_text_from_value(void* self, int val) {
    libqt_string _str = KPluralHandlingSpinBox_QBaseTextFromValue((KPluralHandlingSpinBox*)self, val);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluralhandlingspinbox_on_text_from_value(void* self, const char* (*callback)(void*, int)) {
    KPluralHandlingSpinBox_OnTextFromValue((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_fixup(void* self, const char* str) {
    KPluralHandlingSpinBox_Fixup((KPluralHandlingSpinBox*)self, qstring(str));
}

void k_pluralhandlingspinbox_qbase_fixup(void* self, const char* str) {
    KPluralHandlingSpinBox_QBaseFixup((KPluralHandlingSpinBox*)self, qstring(str));
}

void k_pluralhandlingspinbox_on_fixup(void* self, void (*callback)(void*, const char*)) {
    KPluralHandlingSpinBox_OnFixup((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

QSize* k_pluralhandlingspinbox_size_hint(void* self) {
    return KPluralHandlingSpinBox_SizeHint((KPluralHandlingSpinBox*)self);
}

QSize* k_pluralhandlingspinbox_qbase_size_hint(void* self) {
    return KPluralHandlingSpinBox_QBaseSizeHint((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_size_hint(void* self, QSize* (*callback)()) {
    KPluralHandlingSpinBox_OnSizeHint((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

QSize* k_pluralhandlingspinbox_minimum_size_hint(void* self) {
    return KPluralHandlingSpinBox_MinimumSizeHint((KPluralHandlingSpinBox*)self);
}

QSize* k_pluralhandlingspinbox_qbase_minimum_size_hint(void* self) {
    return KPluralHandlingSpinBox_QBaseMinimumSizeHint((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPluralHandlingSpinBox_OnMinimumSizeHint((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

QVariant* k_pluralhandlingspinbox_input_method_query(void* self, int64_t param1) {
    return KPluralHandlingSpinBox_InputMethodQuery((KPluralHandlingSpinBox*)self, param1);
}

QVariant* k_pluralhandlingspinbox_qbase_input_method_query(void* self, int64_t param1) {
    return KPluralHandlingSpinBox_QBaseInputMethodQuery((KPluralHandlingSpinBox*)self, param1);
}

void k_pluralhandlingspinbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KPluralHandlingSpinBox_OnInputMethodQuery((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_step_by(void* self, int steps) {
    KPluralHandlingSpinBox_StepBy((KPluralHandlingSpinBox*)self, steps);
}

void k_pluralhandlingspinbox_qbase_step_by(void* self, int steps) {
    KPluralHandlingSpinBox_QBaseStepBy((KPluralHandlingSpinBox*)self, steps);
}

void k_pluralhandlingspinbox_on_step_by(void* self, void (*callback)(void*, int)) {
    KPluralHandlingSpinBox_OnStepBy((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_clear(void* self) {
    KPluralHandlingSpinBox_Clear((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_qbase_clear(void* self) {
    KPluralHandlingSpinBox_QBaseClear((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_clear(void* self, void (*callback)()) {
    KPluralHandlingSpinBox_OnClear((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_resize_event(void* self, void* event) {
    KPluralHandlingSpinBox_ResizeEvent((KPluralHandlingSpinBox*)self, (QResizeEvent*)event);
}

void k_pluralhandlingspinbox_qbase_resize_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseResizeEvent((KPluralHandlingSpinBox*)self, (QResizeEvent*)event);
}

void k_pluralhandlingspinbox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnResizeEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_key_press_event(void* self, void* event) {
    KPluralHandlingSpinBox_KeyPressEvent((KPluralHandlingSpinBox*)self, (QKeyEvent*)event);
}

void k_pluralhandlingspinbox_qbase_key_press_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseKeyPressEvent((KPluralHandlingSpinBox*)self, (QKeyEvent*)event);
}

void k_pluralhandlingspinbox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnKeyPressEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_key_release_event(void* self, void* event) {
    KPluralHandlingSpinBox_KeyReleaseEvent((KPluralHandlingSpinBox*)self, (QKeyEvent*)event);
}

void k_pluralhandlingspinbox_qbase_key_release_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseKeyReleaseEvent((KPluralHandlingSpinBox*)self, (QKeyEvent*)event);
}

void k_pluralhandlingspinbox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnKeyReleaseEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_wheel_event(void* self, void* event) {
    KPluralHandlingSpinBox_WheelEvent((KPluralHandlingSpinBox*)self, (QWheelEvent*)event);
}

void k_pluralhandlingspinbox_qbase_wheel_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseWheelEvent((KPluralHandlingSpinBox*)self, (QWheelEvent*)event);
}

void k_pluralhandlingspinbox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnWheelEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_focus_in_event(void* self, void* event) {
    KPluralHandlingSpinBox_FocusInEvent((KPluralHandlingSpinBox*)self, (QFocusEvent*)event);
}

void k_pluralhandlingspinbox_qbase_focus_in_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseFocusInEvent((KPluralHandlingSpinBox*)self, (QFocusEvent*)event);
}

void k_pluralhandlingspinbox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnFocusInEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_focus_out_event(void* self, void* event) {
    KPluralHandlingSpinBox_FocusOutEvent((KPluralHandlingSpinBox*)self, (QFocusEvent*)event);
}

void k_pluralhandlingspinbox_qbase_focus_out_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseFocusOutEvent((KPluralHandlingSpinBox*)self, (QFocusEvent*)event);
}

void k_pluralhandlingspinbox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnFocusOutEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_context_menu_event(void* self, void* event) {
    KPluralHandlingSpinBox_ContextMenuEvent((KPluralHandlingSpinBox*)self, (QContextMenuEvent*)event);
}

void k_pluralhandlingspinbox_qbase_context_menu_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseContextMenuEvent((KPluralHandlingSpinBox*)self, (QContextMenuEvent*)event);
}

void k_pluralhandlingspinbox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnContextMenuEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_change_event(void* self, void* event) {
    KPluralHandlingSpinBox_ChangeEvent((KPluralHandlingSpinBox*)self, (QEvent*)event);
}

void k_pluralhandlingspinbox_qbase_change_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseChangeEvent((KPluralHandlingSpinBox*)self, (QEvent*)event);
}

void k_pluralhandlingspinbox_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnChangeEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_close_event(void* self, void* event) {
    KPluralHandlingSpinBox_CloseEvent((KPluralHandlingSpinBox*)self, (QCloseEvent*)event);
}

void k_pluralhandlingspinbox_qbase_close_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseCloseEvent((KPluralHandlingSpinBox*)self, (QCloseEvent*)event);
}

void k_pluralhandlingspinbox_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnCloseEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_hide_event(void* self, void* event) {
    KPluralHandlingSpinBox_HideEvent((KPluralHandlingSpinBox*)self, (QHideEvent*)event);
}

void k_pluralhandlingspinbox_qbase_hide_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseHideEvent((KPluralHandlingSpinBox*)self, (QHideEvent*)event);
}

void k_pluralhandlingspinbox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnHideEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_mouse_press_event(void* self, void* event) {
    KPluralHandlingSpinBox_MousePressEvent((KPluralHandlingSpinBox*)self, (QMouseEvent*)event);
}

void k_pluralhandlingspinbox_qbase_mouse_press_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseMousePressEvent((KPluralHandlingSpinBox*)self, (QMouseEvent*)event);
}

void k_pluralhandlingspinbox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnMousePressEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_mouse_release_event(void* self, void* event) {
    KPluralHandlingSpinBox_MouseReleaseEvent((KPluralHandlingSpinBox*)self, (QMouseEvent*)event);
}

void k_pluralhandlingspinbox_qbase_mouse_release_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseMouseReleaseEvent((KPluralHandlingSpinBox*)self, (QMouseEvent*)event);
}

void k_pluralhandlingspinbox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnMouseReleaseEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_mouse_move_event(void* self, void* event) {
    KPluralHandlingSpinBox_MouseMoveEvent((KPluralHandlingSpinBox*)self, (QMouseEvent*)event);
}

void k_pluralhandlingspinbox_qbase_mouse_move_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseMouseMoveEvent((KPluralHandlingSpinBox*)self, (QMouseEvent*)event);
}

void k_pluralhandlingspinbox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnMouseMoveEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_timer_event(void* self, void* event) {
    KPluralHandlingSpinBox_TimerEvent((KPluralHandlingSpinBox*)self, (QTimerEvent*)event);
}

void k_pluralhandlingspinbox_qbase_timer_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseTimerEvent((KPluralHandlingSpinBox*)self, (QTimerEvent*)event);
}

void k_pluralhandlingspinbox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnTimerEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_paint_event(void* self, void* event) {
    KPluralHandlingSpinBox_PaintEvent((KPluralHandlingSpinBox*)self, (QPaintEvent*)event);
}

void k_pluralhandlingspinbox_qbase_paint_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBasePaintEvent((KPluralHandlingSpinBox*)self, (QPaintEvent*)event);
}

void k_pluralhandlingspinbox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnPaintEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_show_event(void* self, void* event) {
    KPluralHandlingSpinBox_ShowEvent((KPluralHandlingSpinBox*)self, (QShowEvent*)event);
}

void k_pluralhandlingspinbox_qbase_show_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseShowEvent((KPluralHandlingSpinBox*)self, (QShowEvent*)event);
}

void k_pluralhandlingspinbox_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnShowEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_init_style_option(void* self, void* option) {
    KPluralHandlingSpinBox_InitStyleOption((KPluralHandlingSpinBox*)self, (QStyleOptionSpinBox*)option);
}

void k_pluralhandlingspinbox_qbase_init_style_option(void* self, void* option) {
    KPluralHandlingSpinBox_QBaseInitStyleOption((KPluralHandlingSpinBox*)self, (QStyleOptionSpinBox*)option);
}

void k_pluralhandlingspinbox_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnInitStyleOption((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

int32_t k_pluralhandlingspinbox_step_enabled(void* self) {
    return KPluralHandlingSpinBox_StepEnabled((KPluralHandlingSpinBox*)self);
}

int32_t k_pluralhandlingspinbox_qbase_step_enabled(void* self) {
    return KPluralHandlingSpinBox_QBaseStepEnabled((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_step_enabled(void* self, int32_t (*callback)()) {
    KPluralHandlingSpinBox_OnStepEnabled((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

int32_t k_pluralhandlingspinbox_dev_type(void* self) {
    return KPluralHandlingSpinBox_DevType((KPluralHandlingSpinBox*)self);
}

int32_t k_pluralhandlingspinbox_qbase_dev_type(void* self) {
    return KPluralHandlingSpinBox_QBaseDevType((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_dev_type(void* self, int32_t (*callback)()) {
    KPluralHandlingSpinBox_OnDevType((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_set_visible(void* self, bool visible) {
    KPluralHandlingSpinBox_SetVisible((KPluralHandlingSpinBox*)self, visible);
}

void k_pluralhandlingspinbox_qbase_set_visible(void* self, bool visible) {
    KPluralHandlingSpinBox_QBaseSetVisible((KPluralHandlingSpinBox*)self, visible);
}

void k_pluralhandlingspinbox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPluralHandlingSpinBox_OnSetVisible((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

int32_t k_pluralhandlingspinbox_height_for_width(void* self, int param1) {
    return KPluralHandlingSpinBox_HeightForWidth((KPluralHandlingSpinBox*)self, param1);
}

int32_t k_pluralhandlingspinbox_qbase_height_for_width(void* self, int param1) {
    return KPluralHandlingSpinBox_QBaseHeightForWidth((KPluralHandlingSpinBox*)self, param1);
}

void k_pluralhandlingspinbox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPluralHandlingSpinBox_OnHeightForWidth((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

bool k_pluralhandlingspinbox_has_height_for_width(void* self) {
    return KPluralHandlingSpinBox_HasHeightForWidth((KPluralHandlingSpinBox*)self);
}

bool k_pluralhandlingspinbox_qbase_has_height_for_width(void* self) {
    return KPluralHandlingSpinBox_QBaseHasHeightForWidth((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_has_height_for_width(void* self, bool (*callback)()) {
    KPluralHandlingSpinBox_OnHasHeightForWidth((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

QPaintEngine* k_pluralhandlingspinbox_paint_engine(void* self) {
    return KPluralHandlingSpinBox_PaintEngine((KPluralHandlingSpinBox*)self);
}

QPaintEngine* k_pluralhandlingspinbox_qbase_paint_engine(void* self) {
    return KPluralHandlingSpinBox_QBasePaintEngine((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPluralHandlingSpinBox_OnPaintEngine((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_mouse_double_click_event(void* self, void* event) {
    KPluralHandlingSpinBox_MouseDoubleClickEvent((KPluralHandlingSpinBox*)self, (QMouseEvent*)event);
}

void k_pluralhandlingspinbox_qbase_mouse_double_click_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseMouseDoubleClickEvent((KPluralHandlingSpinBox*)self, (QMouseEvent*)event);
}

void k_pluralhandlingspinbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnMouseDoubleClickEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_enter_event(void* self, void* event) {
    KPluralHandlingSpinBox_EnterEvent((KPluralHandlingSpinBox*)self, (QEnterEvent*)event);
}

void k_pluralhandlingspinbox_qbase_enter_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseEnterEvent((KPluralHandlingSpinBox*)self, (QEnterEvent*)event);
}

void k_pluralhandlingspinbox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnEnterEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_leave_event(void* self, void* event) {
    KPluralHandlingSpinBox_LeaveEvent((KPluralHandlingSpinBox*)self, (QEvent*)event);
}

void k_pluralhandlingspinbox_qbase_leave_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseLeaveEvent((KPluralHandlingSpinBox*)self, (QEvent*)event);
}

void k_pluralhandlingspinbox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnLeaveEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_move_event(void* self, void* event) {
    KPluralHandlingSpinBox_MoveEvent((KPluralHandlingSpinBox*)self, (QMoveEvent*)event);
}

void k_pluralhandlingspinbox_qbase_move_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseMoveEvent((KPluralHandlingSpinBox*)self, (QMoveEvent*)event);
}

void k_pluralhandlingspinbox_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnMoveEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_tablet_event(void* self, void* event) {
    KPluralHandlingSpinBox_TabletEvent((KPluralHandlingSpinBox*)self, (QTabletEvent*)event);
}

void k_pluralhandlingspinbox_qbase_tablet_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseTabletEvent((KPluralHandlingSpinBox*)self, (QTabletEvent*)event);
}

void k_pluralhandlingspinbox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnTabletEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_action_event(void* self, void* event) {
    KPluralHandlingSpinBox_ActionEvent((KPluralHandlingSpinBox*)self, (QActionEvent*)event);
}

void k_pluralhandlingspinbox_qbase_action_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseActionEvent((KPluralHandlingSpinBox*)self, (QActionEvent*)event);
}

void k_pluralhandlingspinbox_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnActionEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_drag_enter_event(void* self, void* event) {
    KPluralHandlingSpinBox_DragEnterEvent((KPluralHandlingSpinBox*)self, (QDragEnterEvent*)event);
}

void k_pluralhandlingspinbox_qbase_drag_enter_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseDragEnterEvent((KPluralHandlingSpinBox*)self, (QDragEnterEvent*)event);
}

void k_pluralhandlingspinbox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnDragEnterEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_drag_move_event(void* self, void* event) {
    KPluralHandlingSpinBox_DragMoveEvent((KPluralHandlingSpinBox*)self, (QDragMoveEvent*)event);
}

void k_pluralhandlingspinbox_qbase_drag_move_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseDragMoveEvent((KPluralHandlingSpinBox*)self, (QDragMoveEvent*)event);
}

void k_pluralhandlingspinbox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnDragMoveEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_drag_leave_event(void* self, void* event) {
    KPluralHandlingSpinBox_DragLeaveEvent((KPluralHandlingSpinBox*)self, (QDragLeaveEvent*)event);
}

void k_pluralhandlingspinbox_qbase_drag_leave_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseDragLeaveEvent((KPluralHandlingSpinBox*)self, (QDragLeaveEvent*)event);
}

void k_pluralhandlingspinbox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnDragLeaveEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_drop_event(void* self, void* event) {
    KPluralHandlingSpinBox_DropEvent((KPluralHandlingSpinBox*)self, (QDropEvent*)event);
}

void k_pluralhandlingspinbox_qbase_drop_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseDropEvent((KPluralHandlingSpinBox*)self, (QDropEvent*)event);
}

void k_pluralhandlingspinbox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnDropEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

bool k_pluralhandlingspinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPluralHandlingSpinBox_NativeEvent((KPluralHandlingSpinBox*)self, qstring(eventType), message, result);
}

bool k_pluralhandlingspinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPluralHandlingSpinBox_QBaseNativeEvent((KPluralHandlingSpinBox*)self, qstring(eventType), message, result);
}

void k_pluralhandlingspinbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KPluralHandlingSpinBox_OnNativeEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

int32_t k_pluralhandlingspinbox_metric(void* self, int32_t param1) {
    return KPluralHandlingSpinBox_Metric((KPluralHandlingSpinBox*)self, param1);
}

int32_t k_pluralhandlingspinbox_qbase_metric(void* self, int32_t param1) {
    return KPluralHandlingSpinBox_QBaseMetric((KPluralHandlingSpinBox*)self, param1);
}

void k_pluralhandlingspinbox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPluralHandlingSpinBox_OnMetric((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_init_painter(void* self, void* painter) {
    KPluralHandlingSpinBox_InitPainter((KPluralHandlingSpinBox*)self, (QPainter*)painter);
}

void k_pluralhandlingspinbox_qbase_init_painter(void* self, void* painter) {
    KPluralHandlingSpinBox_QBaseInitPainter((KPluralHandlingSpinBox*)self, (QPainter*)painter);
}

void k_pluralhandlingspinbox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnInitPainter((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

QPaintDevice* k_pluralhandlingspinbox_redirected(void* self, void* offset) {
    return KPluralHandlingSpinBox_Redirected((KPluralHandlingSpinBox*)self, (QPoint*)offset);
}

QPaintDevice* k_pluralhandlingspinbox_qbase_redirected(void* self, void* offset) {
    return KPluralHandlingSpinBox_QBaseRedirected((KPluralHandlingSpinBox*)self, (QPoint*)offset);
}

void k_pluralhandlingspinbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnRedirected((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

QPainter* k_pluralhandlingspinbox_shared_painter(void* self) {
    return KPluralHandlingSpinBox_SharedPainter((KPluralHandlingSpinBox*)self);
}

QPainter* k_pluralhandlingspinbox_qbase_shared_painter(void* self) {
    return KPluralHandlingSpinBox_QBaseSharedPainter((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPluralHandlingSpinBox_OnSharedPainter((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_input_method_event(void* self, void* param1) {
    KPluralHandlingSpinBox_InputMethodEvent((KPluralHandlingSpinBox*)self, (QInputMethodEvent*)param1);
}

void k_pluralhandlingspinbox_qbase_input_method_event(void* self, void* param1) {
    KPluralHandlingSpinBox_QBaseInputMethodEvent((KPluralHandlingSpinBox*)self, (QInputMethodEvent*)param1);
}

void k_pluralhandlingspinbox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnInputMethodEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

bool k_pluralhandlingspinbox_focus_next_prev_child(void* self, bool next) {
    return KPluralHandlingSpinBox_FocusNextPrevChild((KPluralHandlingSpinBox*)self, next);
}

bool k_pluralhandlingspinbox_qbase_focus_next_prev_child(void* self, bool next) {
    return KPluralHandlingSpinBox_QBaseFocusNextPrevChild((KPluralHandlingSpinBox*)self, next);
}

void k_pluralhandlingspinbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPluralHandlingSpinBox_OnFocusNextPrevChild((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

bool k_pluralhandlingspinbox_event_filter(void* self, void* watched, void* event) {
    return KPluralHandlingSpinBox_EventFilter((KPluralHandlingSpinBox*)self, (QObject*)watched, (QEvent*)event);
}

bool k_pluralhandlingspinbox_qbase_event_filter(void* self, void* watched, void* event) {
    return KPluralHandlingSpinBox_QBaseEventFilter((KPluralHandlingSpinBox*)self, (QObject*)watched, (QEvent*)event);
}

void k_pluralhandlingspinbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPluralHandlingSpinBox_OnEventFilter((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_child_event(void* self, void* event) {
    KPluralHandlingSpinBox_ChildEvent((KPluralHandlingSpinBox*)self, (QChildEvent*)event);
}

void k_pluralhandlingspinbox_qbase_child_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseChildEvent((KPluralHandlingSpinBox*)self, (QChildEvent*)event);
}

void k_pluralhandlingspinbox_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnChildEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_custom_event(void* self, void* event) {
    KPluralHandlingSpinBox_CustomEvent((KPluralHandlingSpinBox*)self, (QEvent*)event);
}

void k_pluralhandlingspinbox_qbase_custom_event(void* self, void* event) {
    KPluralHandlingSpinBox_QBaseCustomEvent((KPluralHandlingSpinBox*)self, (QEvent*)event);
}

void k_pluralhandlingspinbox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnCustomEvent((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_connect_notify(void* self, void* signal) {
    KPluralHandlingSpinBox_ConnectNotify((KPluralHandlingSpinBox*)self, (QMetaMethod*)signal);
}

void k_pluralhandlingspinbox_qbase_connect_notify(void* self, void* signal) {
    KPluralHandlingSpinBox_QBaseConnectNotify((KPluralHandlingSpinBox*)self, (QMetaMethod*)signal);
}

void k_pluralhandlingspinbox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnConnectNotify((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_disconnect_notify(void* self, void* signal) {
    KPluralHandlingSpinBox_DisconnectNotify((KPluralHandlingSpinBox*)self, (QMetaMethod*)signal);
}

void k_pluralhandlingspinbox_qbase_disconnect_notify(void* self, void* signal) {
    KPluralHandlingSpinBox_QBaseDisconnectNotify((KPluralHandlingSpinBox*)self, (QMetaMethod*)signal);
}

void k_pluralhandlingspinbox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnDisconnectNotify((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

QLineEdit* k_pluralhandlingspinbox_line_edit(void* self) {
    return KPluralHandlingSpinBox_LineEdit((KPluralHandlingSpinBox*)self);
}

QLineEdit* k_pluralhandlingspinbox_qbase_line_edit(void* self) {
    return KPluralHandlingSpinBox_QBaseLineEdit((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_line_edit(void* self, QLineEdit* (*callback)()) {
    KPluralHandlingSpinBox_OnLineEdit((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_set_line_edit(void* self, void* edit) {
    KPluralHandlingSpinBox_SetLineEdit((KPluralHandlingSpinBox*)self, (QLineEdit*)edit);
}

void k_pluralhandlingspinbox_qbase_set_line_edit(void* self, void* edit) {
    KPluralHandlingSpinBox_QBaseSetLineEdit((KPluralHandlingSpinBox*)self, (QLineEdit*)edit);
}

void k_pluralhandlingspinbox_on_set_line_edit(void* self, void (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnSetLineEdit((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_update_micro_focus(void* self) {
    KPluralHandlingSpinBox_UpdateMicroFocus((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_qbase_update_micro_focus(void* self) {
    KPluralHandlingSpinBox_QBaseUpdateMicroFocus((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_update_micro_focus(void* self, void (*callback)()) {
    KPluralHandlingSpinBox_OnUpdateMicroFocus((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_create(void* self) {
    KPluralHandlingSpinBox_Create((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_qbase_create(void* self) {
    KPluralHandlingSpinBox_QBaseCreate((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_create(void* self, void (*callback)()) {
    KPluralHandlingSpinBox_OnCreate((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_destroy(void* self) {
    KPluralHandlingSpinBox_Destroy((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_qbase_destroy(void* self) {
    KPluralHandlingSpinBox_QBaseDestroy((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_destroy(void* self, void (*callback)()) {
    KPluralHandlingSpinBox_OnDestroy((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

bool k_pluralhandlingspinbox_focus_next_child(void* self) {
    return KPluralHandlingSpinBox_FocusNextChild((KPluralHandlingSpinBox*)self);
}

bool k_pluralhandlingspinbox_qbase_focus_next_child(void* self) {
    return KPluralHandlingSpinBox_QBaseFocusNextChild((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_focus_next_child(void* self, bool (*callback)()) {
    KPluralHandlingSpinBox_OnFocusNextChild((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

bool k_pluralhandlingspinbox_focus_previous_child(void* self) {
    return KPluralHandlingSpinBox_FocusPreviousChild((KPluralHandlingSpinBox*)self);
}

bool k_pluralhandlingspinbox_qbase_focus_previous_child(void* self) {
    return KPluralHandlingSpinBox_QBaseFocusPreviousChild((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_focus_previous_child(void* self, bool (*callback)()) {
    KPluralHandlingSpinBox_OnFocusPreviousChild((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

QObject* k_pluralhandlingspinbox_sender(void* self) {
    return KPluralHandlingSpinBox_Sender((KPluralHandlingSpinBox*)self);
}

QObject* k_pluralhandlingspinbox_qbase_sender(void* self) {
    return KPluralHandlingSpinBox_QBaseSender((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_sender(void* self, QObject* (*callback)()) {
    KPluralHandlingSpinBox_OnSender((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

int32_t k_pluralhandlingspinbox_sender_signal_index(void* self) {
    return KPluralHandlingSpinBox_SenderSignalIndex((KPluralHandlingSpinBox*)self);
}

int32_t k_pluralhandlingspinbox_qbase_sender_signal_index(void* self) {
    return KPluralHandlingSpinBox_QBaseSenderSignalIndex((KPluralHandlingSpinBox*)self);
}

void k_pluralhandlingspinbox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPluralHandlingSpinBox_OnSenderSignalIndex((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

int32_t k_pluralhandlingspinbox_receivers(void* self, const char* signal) {
    return KPluralHandlingSpinBox_Receivers((KPluralHandlingSpinBox*)self, signal);
}

int32_t k_pluralhandlingspinbox_qbase_receivers(void* self, const char* signal) {
    return KPluralHandlingSpinBox_QBaseReceivers((KPluralHandlingSpinBox*)self, signal);
}

void k_pluralhandlingspinbox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPluralHandlingSpinBox_OnReceivers((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

bool k_pluralhandlingspinbox_is_signal_connected(void* self, void* signal) {
    return KPluralHandlingSpinBox_IsSignalConnected((KPluralHandlingSpinBox*)self, (QMetaMethod*)signal);
}

bool k_pluralhandlingspinbox_qbase_is_signal_connected(void* self, void* signal) {
    return KPluralHandlingSpinBox_QBaseIsSignalConnected((KPluralHandlingSpinBox*)self, (QMetaMethod*)signal);
}

void k_pluralhandlingspinbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPluralHandlingSpinBox_OnIsSignalConnected((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

double k_pluralhandlingspinbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPluralHandlingSpinBox_GetDecodedMetricF((KPluralHandlingSpinBox*)self, metricA, metricB);
}

double k_pluralhandlingspinbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPluralHandlingSpinBox_QBaseGetDecodedMetricF((KPluralHandlingSpinBox*)self, metricA, metricB);
}

void k_pluralhandlingspinbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPluralHandlingSpinBox_OnGetDecodedMetricF((KPluralHandlingSpinBox*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pluralhandlingspinbox_delete(void* self) {
    KPluralHandlingSpinBox_Delete((KPluralHandlingSpinBox*)(self));
}
