#include "libannotationinterface.hpp"
#include "libview.hpp"
#include "../libqfontmetrics.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "libabstractannotationitemdelegate.hpp"
#include "libabstractannotationitemdelegate.h"

KTextEditor__StyleOptionAnnotationItem* k_texteditor__styleoptionannotationitem_new() {
    return KTextEditor__StyleOptionAnnotationItem_new();
}

KTextEditor__StyleOptionAnnotationItem* k_texteditor__styleoptionannotationitem_new2(void* other) {
    return KTextEditor__StyleOptionAnnotationItem_new2((KTextEditor__StyleOptionAnnotationItem*)other);
}

int32_t k_texteditor__styleoptionannotationitem_wrapped_line(void* self) {
    return KTextEditor__StyleOptionAnnotationItem_WrappedLine((KTextEditor__StyleOptionAnnotationItem*)self);
}

void k_texteditor__styleoptionannotationitem_set_wrapped_line(void* self, int wrappedLine) {
    KTextEditor__StyleOptionAnnotationItem_SetWrappedLine((KTextEditor__StyleOptionAnnotationItem*)self, wrappedLine);
}

int32_t k_texteditor__styleoptionannotationitem_wrapped_line_count(void* self) {
    return KTextEditor__StyleOptionAnnotationItem_WrappedLineCount((KTextEditor__StyleOptionAnnotationItem*)self);
}

void k_texteditor__styleoptionannotationitem_set_wrapped_line_count(void* self, int wrappedLineCount) {
    KTextEditor__StyleOptionAnnotationItem_SetWrappedLineCount((KTextEditor__StyleOptionAnnotationItem*)self, wrappedLineCount);
}

int32_t k_texteditor__styleoptionannotationitem_visible_wrapped_line_in_group(void* self) {
    return KTextEditor__StyleOptionAnnotationItem_VisibleWrappedLineInGroup((KTextEditor__StyleOptionAnnotationItem*)self);
}

void k_texteditor__styleoptionannotationitem_set_visible_wrapped_line_in_group(void* self, int visibleWrappedLineInGroup) {
    KTextEditor__StyleOptionAnnotationItem_SetVisibleWrappedLineInGroup((KTextEditor__StyleOptionAnnotationItem*)self, visibleWrappedLineInGroup);
}

KTextEditor__View* k_texteditor__styleoptionannotationitem_view(void* self) {
    return KTextEditor__StyleOptionAnnotationItem_View((KTextEditor__StyleOptionAnnotationItem*)self);
}

void k_texteditor__styleoptionannotationitem_set_view(void* self, void* view) {
    KTextEditor__StyleOptionAnnotationItem_SetView((KTextEditor__StyleOptionAnnotationItem*)self, (KTextEditor__View*)view);
}

QSize* k_texteditor__styleoptionannotationitem_decoration_size(void* self) {
    return KTextEditor__StyleOptionAnnotationItem_DecorationSize((KTextEditor__StyleOptionAnnotationItem*)self);
}

void k_texteditor__styleoptionannotationitem_set_decoration_size(void* self, void* decorationSize) {
    KTextEditor__StyleOptionAnnotationItem_SetDecorationSize((KTextEditor__StyleOptionAnnotationItem*)self, (QSize*)decorationSize);
}

QFontMetricsF* k_texteditor__styleoptionannotationitem_content_font_metrics(void* self) {
    return KTextEditor__StyleOptionAnnotationItem_ContentFontMetrics((KTextEditor__StyleOptionAnnotationItem*)self);
}

void k_texteditor__styleoptionannotationitem_set_content_font_metrics(void* self, void* contentFontMetrics) {
    KTextEditor__StyleOptionAnnotationItem_SetContentFontMetrics((KTextEditor__StyleOptionAnnotationItem*)self, (QFontMetricsF*)contentFontMetrics);
}

int32_t k_texteditor__styleoptionannotationitem_annotation_item_grouping_position(void* self) {
    return KTextEditor__StyleOptionAnnotationItem_AnnotationItemGroupingPosition((KTextEditor__StyleOptionAnnotationItem*)self);
}

void k_texteditor__styleoptionannotationitem_set_annotation_item_grouping_position(void* self, int32_t annotationItemGroupingPosition) {
    KTextEditor__StyleOptionAnnotationItem_SetAnnotationItemGroupingPosition((KTextEditor__StyleOptionAnnotationItem*)self, annotationItemGroupingPosition);
}

void k_texteditor__styleoptionannotationitem_operator_assign(void* self, void* param1) {
    KTextEditor__StyleOptionAnnotationItem_OperatorAssign((KTextEditor__StyleOptionAnnotationItem*)self, (KTextEditor__StyleOptionAnnotationItem*)param1);
}

int32_t k_texteditor__styleoptionannotationitem_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void k_texteditor__styleoptionannotationitem_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t k_texteditor__styleoptionannotationitem_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void k_texteditor__styleoptionannotationitem_set_type(void* self, int type) {
    QStyleOption_SetType((QStyleOption*)self, type);
}

int32_t k_texteditor__styleoptionannotationitem_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void k_texteditor__styleoptionannotationitem_set_state(void* self, int32_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t k_texteditor__styleoptionannotationitem_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void k_texteditor__styleoptionannotationitem_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* k_texteditor__styleoptionannotationitem_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void k_texteditor__styleoptionannotationitem_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* k_texteditor__styleoptionannotationitem_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void k_texteditor__styleoptionannotationitem_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* k_texteditor__styleoptionannotationitem_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void k_texteditor__styleoptionannotationitem_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* k_texteditor__styleoptionannotationitem_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void k_texteditor__styleoptionannotationitem_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void k_texteditor__styleoptionannotationitem_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void k_texteditor__styleoptionannotationitem_delete(void* self) {
    KTextEditor__StyleOptionAnnotationItem_Delete((KTextEditor__StyleOptionAnnotationItem*)(self));
}

const QMetaObject* k_texteditor__abstractannotationitemdelegate_meta_object(void* self) {
    return KTextEditor__AbstractAnnotationItemDelegate_MetaObject((KTextEditor__AbstractAnnotationItemDelegate*)self);
}

void* k_texteditor__abstractannotationitemdelegate_metacast(void* self, const char* param1) {
    return KTextEditor__AbstractAnnotationItemDelegate_Metacast((KTextEditor__AbstractAnnotationItemDelegate*)self, param1);
}

int32_t k_texteditor__abstractannotationitemdelegate_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__AbstractAnnotationItemDelegate_Metacall((KTextEditor__AbstractAnnotationItemDelegate*)self, param1, param2, param3);
}

const char* k_texteditor__abstractannotationitemdelegate_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__abstractannotationitemdelegate_paint(void* self, void* painter, void* option, void* model, int line) {
    KTextEditor__AbstractAnnotationItemDelegate_Paint((KTextEditor__AbstractAnnotationItemDelegate*)self, (QPainter*)painter, (KTextEditor__StyleOptionAnnotationItem*)option, (KTextEditor__AnnotationModel*)model, line);
}

QSize* k_texteditor__abstractannotationitemdelegate_size_hint(void* self, void* option, void* model, int line) {
    return KTextEditor__AbstractAnnotationItemDelegate_SizeHint((KTextEditor__AbstractAnnotationItemDelegate*)self, (KTextEditor__StyleOptionAnnotationItem*)option, (KTextEditor__AnnotationModel*)model, line);
}

bool k_texteditor__abstractannotationitemdelegate_help_event(void* self, void* event, void* view, void* option, void* model, int line) {
    return KTextEditor__AbstractAnnotationItemDelegate_HelpEvent((KTextEditor__AbstractAnnotationItemDelegate*)self, (QHelpEvent*)event, (KTextEditor__View*)view, (KTextEditor__StyleOptionAnnotationItem*)option, (KTextEditor__AnnotationModel*)model, line);
}

void k_texteditor__abstractannotationitemdelegate_hide_tooltip(void* self, void* view) {
    KTextEditor__AbstractAnnotationItemDelegate_HideTooltip((KTextEditor__AbstractAnnotationItemDelegate*)self, (KTextEditor__View*)view);
}

void k_texteditor__abstractannotationitemdelegate_size_hint_changed(void* self, void* model, int line) {
    KTextEditor__AbstractAnnotationItemDelegate_SizeHintChanged((KTextEditor__AbstractAnnotationItemDelegate*)self, (KTextEditor__AnnotationModel*)model, line);
}

void k_texteditor__abstractannotationitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*, int)) {
    KTextEditor__AbstractAnnotationItemDelegate_Connect_SizeHintChanged((KTextEditor__AbstractAnnotationItemDelegate*)self, (intptr_t)callback);
}

const char* k_texteditor__abstractannotationitemdelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__abstractannotationitemdelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texteditor__abstractannotationitemdelegate_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_texteditor__abstractannotationitemdelegate_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_texteditor__abstractannotationitemdelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__abstractannotationitemdelegate_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texteditor__abstractannotationitemdelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texteditor__abstractannotationitemdelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texteditor__abstractannotationitemdelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texteditor__abstractannotationitemdelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texteditor__abstractannotationitemdelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texteditor__abstractannotationitemdelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texteditor__abstractannotationitemdelegate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texteditor__abstractannotationitemdelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texteditor__abstractannotationitemdelegate_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texteditor__abstractannotationitemdelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texteditor__abstractannotationitemdelegate_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texteditor__abstractannotationitemdelegate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texteditor__abstractannotationitemdelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texteditor__abstractannotationitemdelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texteditor__abstractannotationitemdelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texteditor__abstractannotationitemdelegate_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texteditor__abstractannotationitemdelegate_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texteditor__abstractannotationitemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texteditor__abstractannotationitemdelegate_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_texteditor__abstractannotationitemdelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texteditor__abstractannotationitemdelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texteditor__abstractannotationitemdelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texteditor__abstractannotationitemdelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texteditor__abstractannotationitemdelegate_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__abstractannotationitemdelegate_dynamic_property_names\n");
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

QBindingStorage* k_texteditor__abstractannotationitemdelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texteditor__abstractannotationitemdelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texteditor__abstractannotationitemdelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texteditor__abstractannotationitemdelegate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texteditor__abstractannotationitemdelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texteditor__abstractannotationitemdelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texteditor__abstractannotationitemdelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_texteditor__abstractannotationitemdelegate_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_texteditor__abstractannotationitemdelegate_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texteditor__abstractannotationitemdelegate_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texteditor__abstractannotationitemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texteditor__abstractannotationitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_texteditor__abstractannotationitemdelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texteditor__abstractannotationitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_texteditor__abstractannotationitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texteditor__abstractannotationitemdelegate_delete(void* self) {
    KTextEditor__AbstractAnnotationItemDelegate_Delete((KTextEditor__AbstractAnnotationItemDelegate*)(self));
}
