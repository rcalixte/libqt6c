#include "libqapplication.hpp"
#include "libqcoreevent.hpp"
#include "libqfontmetrics.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqwidget.hpp"
#include "libqstyle.hpp"
#include "libqstyle.h"

QStyle* q_style_new() {
    return QStyle_new();
}

const QMetaObject* q_style_meta_object(void* self) {
    return QStyle_MetaObject((QStyle*)self);
}

void* q_style_metacast(void* self, const char* param1) {
    return QStyle_Metacast((QStyle*)self, param1);
}

int32_t q_style_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStyle_Metacall((QStyle*)self, param1, param2, param3);
}

void q_style_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QStyle_OnMetacall((QStyle*)self, (intptr_t)callback);
}

int32_t q_style_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStyle_QBaseMetacall((QStyle*)self, param1, param2, param3);
}

const char* q_style_tr(const char* s) {
    libqt_string _str = QStyle_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_style_name(void* self) {
    libqt_string _str = QStyle_Name((QStyle*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_style_polish(void* self, void* widget) {
    QStyle_Polish((QStyle*)self, (QWidget*)widget);
}

void q_style_on_polish(void* self, void (*callback)(void*, void*)) {
    QStyle_OnPolish((QStyle*)self, (intptr_t)callback);
}

void q_style_qbase_polish(void* self, void* widget) {
    QStyle_QBasePolish((QStyle*)self, (QWidget*)widget);
}

void q_style_unpolish(void* self, void* widget) {
    QStyle_Unpolish((QStyle*)self, (QWidget*)widget);
}

void q_style_on_unpolish(void* self, void (*callback)(void*, void*)) {
    QStyle_OnUnpolish((QStyle*)self, (intptr_t)callback);
}

void q_style_qbase_unpolish(void* self, void* widget) {
    QStyle_QBaseUnpolish((QStyle*)self, (QWidget*)widget);
}

void q_style_polish2(void* self, void* application) {
    QStyle_Polish2((QStyle*)self, (QApplication*)application);
}

void q_style_on_polish2(void* self, void (*callback)(void*, void*)) {
    QStyle_OnPolish2((QStyle*)self, (intptr_t)callback);
}

void q_style_qbase_polish2(void* self, void* application) {
    QStyle_QBasePolish2((QStyle*)self, (QApplication*)application);
}

void q_style_unpolish2(void* self, void* application) {
    QStyle_Unpolish2((QStyle*)self, (QApplication*)application);
}

void q_style_on_unpolish2(void* self, void (*callback)(void*, void*)) {
    QStyle_OnUnpolish2((QStyle*)self, (intptr_t)callback);
}

void q_style_qbase_unpolish2(void* self, void* application) {
    QStyle_QBaseUnpolish2((QStyle*)self, (QApplication*)application);
}

void q_style_polish3(void* self, void* palette) {
    QStyle_Polish3((QStyle*)self, (QPalette*)palette);
}

void q_style_on_polish3(void* self, void (*callback)(void*, void*)) {
    QStyle_OnPolish3((QStyle*)self, (intptr_t)callback);
}

void q_style_qbase_polish3(void* self, void* palette) {
    QStyle_QBasePolish3((QStyle*)self, (QPalette*)palette);
}

QRect* q_style_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text) {
    return QStyle_ItemTextRect((QStyle*)self, (QFontMetrics*)fm, (QRect*)r, flags, enabled, qstring(text));
}

void q_style_on_item_text_rect(void* self, QRect* (*callback)(void*, void*, void*, int, bool, const char*)) {
    QStyle_OnItemTextRect((QStyle*)self, (intptr_t)callback);
}

QRect* q_style_qbase_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text) {
    return QStyle_QBaseItemTextRect((QStyle*)self, (QFontMetrics*)fm, (QRect*)r, flags, enabled, qstring(text));
}

QRect* q_style_item_pixmap_rect(void* self, void* r, int flags, void* pixmap) {
    return QStyle_ItemPixmapRect((QStyle*)self, (QRect*)r, flags, (QPixmap*)pixmap);
}

void q_style_on_item_pixmap_rect(void* self, QRect* (*callback)(void*, void*, int, void*)) {
    QStyle_OnItemPixmapRect((QStyle*)self, (intptr_t)callback);
}

QRect* q_style_qbase_item_pixmap_rect(void* self, void* r, int flags, void* pixmap) {
    return QStyle_QBaseItemPixmapRect((QStyle*)self, (QRect*)r, flags, (QPixmap*)pixmap);
}

void q_style_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int32_t textRole) {
    QStyle_DrawItemText((QStyle*)self, (QPainter*)painter, (QRect*)rect, flags, (QPalette*)pal, enabled, qstring(text), textRole);
}

void q_style_on_draw_item_text(void* self, void (*callback)(void*, void*, void*, int, void*, bool, const char*, int32_t)) {
    QStyle_OnDrawItemText((QStyle*)self, (intptr_t)callback);
}

void q_style_qbase_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int32_t textRole) {
    QStyle_QBaseDrawItemText((QStyle*)self, (QPainter*)painter, (QRect*)rect, flags, (QPalette*)pal, enabled, qstring(text), textRole);
}

void q_style_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap) {
    QStyle_DrawItemPixmap((QStyle*)self, (QPainter*)painter, (QRect*)rect, alignment, (QPixmap*)pixmap);
}

void q_style_on_draw_item_pixmap(void* self, void (*callback)(void*, void*, void*, int, void*)) {
    QStyle_OnDrawItemPixmap((QStyle*)self, (intptr_t)callback);
}

void q_style_qbase_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap) {
    QStyle_QBaseDrawItemPixmap((QStyle*)self, (QPainter*)painter, (QRect*)rect, alignment, (QPixmap*)pixmap);
}

QPalette* q_style_standard_palette(void* self) {
    return QStyle_StandardPalette((QStyle*)self);
}

void q_style_on_standard_palette(void* self, QPalette* (*callback)()) {
    QStyle_OnStandardPalette((QStyle*)self, (intptr_t)callback);
}

QPalette* q_style_qbase_standard_palette(void* self) {
    return QStyle_QBaseStandardPalette((QStyle*)self);
}

void q_style_draw_primitive(void* self, int32_t pe, void* opt, void* p, void* w) {
    QStyle_DrawPrimitive((QStyle*)self, pe, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

void q_style_on_draw_primitive(void* self, void (*callback)(void*, int32_t, void*, void*, void*)) {
    QStyle_OnDrawPrimitive((QStyle*)self, (intptr_t)callback);
}

void q_style_qbase_draw_primitive(void* self, int32_t pe, void* opt, void* p, void* w) {
    QStyle_QBaseDrawPrimitive((QStyle*)self, pe, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

void q_style_draw_control(void* self, int64_t element, void* opt, void* p, void* w) {
    QStyle_DrawControl((QStyle*)self, element, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

void q_style_on_draw_control(void* self, void (*callback)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnDrawControl((QStyle*)self, (intptr_t)callback);
}

void q_style_qbase_draw_control(void* self, int64_t element, void* opt, void* p, void* w) {
    QStyle_QBaseDrawControl((QStyle*)self, element, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

QRect* q_style_sub_element_rect(void* self, int64_t subElement, void* option, void* widget) {
    return QStyle_SubElementRect((QStyle*)self, subElement, (QStyleOption*)option, (QWidget*)widget);
}

void q_style_on_sub_element_rect(void* self, QRect* (*callback)(void*, int64_t, void*, void*)) {
    QStyle_OnSubElementRect((QStyle*)self, (intptr_t)callback);
}

QRect* q_style_qbase_sub_element_rect(void* self, int64_t subElement, void* option, void* widget) {
    return QStyle_QBaseSubElementRect((QStyle*)self, subElement, (QStyleOption*)option, (QWidget*)widget);
}

void q_style_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* widget) {
    QStyle_DrawComplexControl((QStyle*)self, cc, (QStyleOptionComplex*)opt, (QPainter*)p, (QWidget*)widget);
}

void q_style_on_draw_complex_control(void* self, void (*callback)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnDrawComplexControl((QStyle*)self, (intptr_t)callback);
}

void q_style_qbase_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* widget) {
    QStyle_QBaseDrawComplexControl((QStyle*)self, cc, (QStyleOptionComplex*)opt, (QPainter*)p, (QWidget*)widget);
}

int64_t q_style_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* widget) {
    return QStyle_HitTestComplexControl((QStyle*)self, cc, (QStyleOptionComplex*)opt, (QPoint*)pt, (QWidget*)widget);
}

void q_style_on_hit_test_complex_control(void* self, int64_t (*callback)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnHitTestComplexControl((QStyle*)self, (intptr_t)callback);
}

int64_t q_style_qbase_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* widget) {
    return QStyle_QBaseHitTestComplexControl((QStyle*)self, cc, (QStyleOptionComplex*)opt, (QPoint*)pt, (QWidget*)widget);
}

QRect* q_style_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget) {
    return QStyle_SubControlRect((QStyle*)self, cc, (QStyleOptionComplex*)opt, sc, (QWidget*)widget);
}

void q_style_on_sub_control_rect(void* self, QRect* (*callback)(void*, int64_t, void*, int64_t, void*)) {
    QStyle_OnSubControlRect((QStyle*)self, (intptr_t)callback);
}

QRect* q_style_qbase_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget) {
    return QStyle_QBaseSubControlRect((QStyle*)self, cc, (QStyleOptionComplex*)opt, sc, (QWidget*)widget);
}

int32_t q_style_pixel_metric(void* self, int64_t metric, void* option, void* widget) {
    return QStyle_PixelMetric((QStyle*)self, metric, (QStyleOption*)option, (QWidget*)widget);
}

void q_style_on_pixel_metric(void* self, int32_t (*callback)(void*, int64_t, void*, void*)) {
    QStyle_OnPixelMetric((QStyle*)self, (intptr_t)callback);
}

int32_t q_style_qbase_pixel_metric(void* self, int64_t metric, void* option, void* widget) {
    return QStyle_QBasePixelMetric((QStyle*)self, metric, (QStyleOption*)option, (QWidget*)widget);
}

QSize* q_style_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* w) {
    return QStyle_SizeFromContents((QStyle*)self, ct, (QStyleOption*)opt, (QSize*)contentsSize, (QWidget*)w);
}

void q_style_on_size_from_contents(void* self, QSize* (*callback)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnSizeFromContents((QStyle*)self, (intptr_t)callback);
}

QSize* q_style_qbase_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* w) {
    return QStyle_QBaseSizeFromContents((QStyle*)self, ct, (QStyleOption*)opt, (QSize*)contentsSize, (QWidget*)w);
}

int32_t q_style_style_hint(void* self, int64_t stylehint, void* opt, void* widget, void* returnData) {
    return QStyle_StyleHint((QStyle*)self, stylehint, (QStyleOption*)opt, (QWidget*)widget, (QStyleHintReturn*)returnData);
}

void q_style_on_style_hint(void* self, int32_t (*callback)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnStyleHint((QStyle*)self, (intptr_t)callback);
}

int32_t q_style_qbase_style_hint(void* self, int64_t stylehint, void* opt, void* widget, void* returnData) {
    return QStyle_QBaseStyleHint((QStyle*)self, stylehint, (QStyleOption*)opt, (QWidget*)widget, (QStyleHintReturn*)returnData);
}

QPixmap* q_style_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget) {
    return QStyle_StandardPixmap((QStyle*)self, standardPixmap, (QStyleOption*)opt, (QWidget*)widget);
}

void q_style_on_standard_pixmap(void* self, QPixmap* (*callback)(void*, int64_t, void*, void*)) {
    QStyle_OnStandardPixmap((QStyle*)self, (intptr_t)callback);
}

QPixmap* q_style_qbase_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget) {
    return QStyle_QBaseStandardPixmap((QStyle*)self, standardPixmap, (QStyleOption*)opt, (QWidget*)widget);
}

QIcon* q_style_standard_icon(void* self, int64_t standardIcon, void* option, void* widget) {
    return QStyle_StandardIcon((QStyle*)self, standardIcon, (QStyleOption*)option, (QWidget*)widget);
}

void q_style_on_standard_icon(void* self, QIcon* (*callback)(void*, int64_t, void*, void*)) {
    QStyle_OnStandardIcon((QStyle*)self, (intptr_t)callback);
}

QIcon* q_style_qbase_standard_icon(void* self, int64_t standardIcon, void* option, void* widget) {
    return QStyle_QBaseStandardIcon((QStyle*)self, standardIcon, (QStyleOption*)option, (QWidget*)widget);
}

QPixmap* q_style_generated_icon_pixmap(void* self, int32_t iconMode, void* pixmap, void* opt) {
    return QStyle_GeneratedIconPixmap((QStyle*)self, iconMode, (QPixmap*)pixmap, (QStyleOption*)opt);
}

void q_style_on_generated_icon_pixmap(void* self, QPixmap* (*callback)(void*, int32_t, void*, void*)) {
    QStyle_OnGeneratedIconPixmap((QStyle*)self, (intptr_t)callback);
}

QPixmap* q_style_qbase_generated_icon_pixmap(void* self, int32_t iconMode, void* pixmap, void* opt) {
    return QStyle_QBaseGeneratedIconPixmap((QStyle*)self, iconMode, (QPixmap*)pixmap, (QStyleOption*)opt);
}

QRect* q_style_visual_rect(int32_t direction, void* boundingRect, void* logicalRect) {
    return QStyle_VisualRect(direction, (QRect*)boundingRect, (QRect*)logicalRect);
}

QPoint* q_style_visual_pos(int32_t direction, void* boundingRect, void* logicalPos) {
    return QStyle_VisualPos(direction, (QRect*)boundingRect, (QPoint*)logicalPos);
}

int32_t q_style_slider_position_from_value(int min, int max, int val, int space) {
    return QStyle_SliderPositionFromValue(min, max, val, space);
}

int32_t q_style_slider_value_from_position(int min, int max, int pos, int space) {
    return QStyle_SliderValueFromPosition(min, max, pos, space);
}

int64_t q_style_visual_alignment(int32_t direction, int64_t alignment) {
    return QStyle_VisualAlignment(direction, alignment);
}

QRect* q_style_aligned_rect(int32_t direction, int64_t alignment, void* size, void* rectangle) {
    return QStyle_AlignedRect(direction, alignment, (QSize*)size, (QRect*)rectangle);
}

int32_t q_style_layout_spacing(void* self, int32_t control1, int32_t control2, int32_t orientation, void* option, void* widget) {
    return QStyle_LayoutSpacing((QStyle*)self, control1, control2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

void q_style_on_layout_spacing(void* self, int32_t (*callback)(void*, int32_t, int32_t, int32_t, void*, void*)) {
    QStyle_OnLayoutSpacing((QStyle*)self, (intptr_t)callback);
}

int32_t q_style_qbase_layout_spacing(void* self, int32_t control1, int32_t control2, int32_t orientation, void* option, void* widget) {
    return QStyle_QBaseLayoutSpacing((QStyle*)self, control1, control2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

int32_t q_style_combined_layout_spacing(void* self, int64_t controls1, int64_t controls2, int32_t orientation) {
    return QStyle_CombinedLayoutSpacing((QStyle*)self, controls1, controls2, orientation);
}

const QStyle* q_style_proxy(void* self) {
    return QStyle_Proxy((QStyle*)self);
}

const char* q_style_tr2(const char* s, const char* c) {
    libqt_string _str = QStyle_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_style_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStyle_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_style_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown) {
    return QStyle_SliderPositionFromValue5(min, max, val, space, upsideDown);
}

int32_t q_style_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown) {
    return QStyle_SliderValueFromPosition5(min, max, pos, space, upsideDown);
}

int32_t q_style_combined_layout_spacing4(void* self, int64_t controls1, int64_t controls2, int32_t orientation, void* option) {
    return QStyle_CombinedLayoutSpacing4((QStyle*)self, controls1, controls2, orientation, (QStyleOption*)option);
}

int32_t q_style_combined_layout_spacing5(void* self, int64_t controls1, int64_t controls2, int32_t orientation, void* option, void* widget) {
    return QStyle_CombinedLayoutSpacing5((QStyle*)self, controls1, controls2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

const char* q_style_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_style_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_style_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_style_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_style_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_style_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_style_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_style_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_style_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_style_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_style_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_style_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_style_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_style_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_style_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_style_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_style_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_style_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_style_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_style_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_style_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_style_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_style_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_style_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_style_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_style_dynamic_property_names");
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

QBindingStorage* q_style_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_style_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_style_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_style_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_style_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_style_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_style_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_style_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_style_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_style_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_style_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_style_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_style_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_style_event(void* self, void* event) {
    return QStyle_Event((QStyle*)self, (QEvent*)event);
}

bool q_style_qbase_event(void* self, void* event) {
    return QStyle_QBaseEvent((QStyle*)self, (QEvent*)event);
}

void q_style_on_event(void* self, bool (*callback)(void*, void*)) {
    QStyle_OnEvent((QStyle*)self, (intptr_t)callback);
}

bool q_style_event_filter(void* self, void* watched, void* event) {
    return QStyle_EventFilter((QStyle*)self, (QObject*)watched, (QEvent*)event);
}

bool q_style_qbase_event_filter(void* self, void* watched, void* event) {
    return QStyle_QBaseEventFilter((QStyle*)self, (QObject*)watched, (QEvent*)event);
}

void q_style_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QStyle_OnEventFilter((QStyle*)self, (intptr_t)callback);
}

void q_style_timer_event(void* self, void* event) {
    QStyle_TimerEvent((QStyle*)self, (QTimerEvent*)event);
}

void q_style_qbase_timer_event(void* self, void* event) {
    QStyle_QBaseTimerEvent((QStyle*)self, (QTimerEvent*)event);
}

void q_style_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QStyle_OnTimerEvent((QStyle*)self, (intptr_t)callback);
}

void q_style_child_event(void* self, void* event) {
    QStyle_ChildEvent((QStyle*)self, (QChildEvent*)event);
}

void q_style_qbase_child_event(void* self, void* event) {
    QStyle_QBaseChildEvent((QStyle*)self, (QChildEvent*)event);
}

void q_style_on_child_event(void* self, void (*callback)(void*, void*)) {
    QStyle_OnChildEvent((QStyle*)self, (intptr_t)callback);
}

void q_style_custom_event(void* self, void* event) {
    QStyle_CustomEvent((QStyle*)self, (QEvent*)event);
}

void q_style_qbase_custom_event(void* self, void* event) {
    QStyle_QBaseCustomEvent((QStyle*)self, (QEvent*)event);
}

void q_style_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QStyle_OnCustomEvent((QStyle*)self, (intptr_t)callback);
}

void q_style_connect_notify(void* self, void* signal) {
    QStyle_ConnectNotify((QStyle*)self, (QMetaMethod*)signal);
}

void q_style_qbase_connect_notify(void* self, void* signal) {
    QStyle_QBaseConnectNotify((QStyle*)self, (QMetaMethod*)signal);
}

void q_style_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QStyle_OnConnectNotify((QStyle*)self, (intptr_t)callback);
}

void q_style_disconnect_notify(void* self, void* signal) {
    QStyle_DisconnectNotify((QStyle*)self, (QMetaMethod*)signal);
}

void q_style_qbase_disconnect_notify(void* self, void* signal) {
    QStyle_QBaseDisconnectNotify((QStyle*)self, (QMetaMethod*)signal);
}

void q_style_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QStyle_OnDisconnectNotify((QStyle*)self, (intptr_t)callback);
}

QObject* q_style_sender(void* self) {
    return QStyle_Sender((QStyle*)self);
}

QObject* q_style_qbase_sender(void* self) {
    return QStyle_QBaseSender((QStyle*)self);
}

void q_style_on_sender(void* self, QObject* (*callback)()) {
    QStyle_OnSender((QStyle*)self, (intptr_t)callback);
}

int32_t q_style_sender_signal_index(void* self) {
    return QStyle_SenderSignalIndex((QStyle*)self);
}

int32_t q_style_qbase_sender_signal_index(void* self) {
    return QStyle_QBaseSenderSignalIndex((QStyle*)self);
}

void q_style_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QStyle_OnSenderSignalIndex((QStyle*)self, (intptr_t)callback);
}

int32_t q_style_receivers(void* self, const char* signal) {
    return QStyle_Receivers((QStyle*)self, signal);
}

int32_t q_style_qbase_receivers(void* self, const char* signal) {
    return QStyle_QBaseReceivers((QStyle*)self, signal);
}

void q_style_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QStyle_OnReceivers((QStyle*)self, (intptr_t)callback);
}

bool q_style_is_signal_connected(void* self, void* signal) {
    return QStyle_IsSignalConnected((QStyle*)self, (QMetaMethod*)signal);
}

bool q_style_qbase_is_signal_connected(void* self, void* signal) {
    return QStyle_QBaseIsSignalConnected((QStyle*)self, (QMetaMethod*)signal);
}

void q_style_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QStyle_OnIsSignalConnected((QStyle*)self, (intptr_t)callback);
}

void q_style_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_style_delete(void* self) {
    QStyle_Delete((QStyle*)(self));
}
