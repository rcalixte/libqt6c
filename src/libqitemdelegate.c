#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqcoreevent.hpp"
#include "libqfont.hpp"
#include "libqevent.hpp"
#include "libqitemeditorfactory.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqitemdelegate.hpp"
#include "libqitemdelegate.h"

QItemDelegate* q_itemdelegate_new() {
    return QItemDelegate_new();
}

QItemDelegate* q_itemdelegate_new2(void* parent) {
    return QItemDelegate_new2((QObject*)parent);
}

const QMetaObject* q_itemdelegate_meta_object(void* self) {
    return QItemDelegate_MetaObject((QItemDelegate*)self);
}

void* q_itemdelegate_metacast(void* self, const char* param1) {
    return QItemDelegate_Metacast((QItemDelegate*)self, param1);
}

int32_t q_itemdelegate_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QItemDelegate_Metacall((QItemDelegate*)self, param1, param2, param3);
}

void q_itemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QItemDelegate_OnMetacall((QItemDelegate*)self, (intptr_t)callback);
}

int32_t q_itemdelegate_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QItemDelegate_QBaseMetacall((QItemDelegate*)self, param1, param2, param3);
}

const char* q_itemdelegate_tr(const char* s) {
    libqt_string _str = QItemDelegate_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_itemdelegate_has_clipping(void* self) {
    return QItemDelegate_HasClipping((QItemDelegate*)self);
}

void q_itemdelegate_set_clipping(void* self, bool clip) {
    QItemDelegate_SetClipping((QItemDelegate*)self, clip);
}

void q_itemdelegate_paint(void* self, void* painter, void* option, void* index) {
    QItemDelegate_Paint((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_itemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    QItemDelegate_OnPaint((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_qbase_paint(void* self, void* painter, void* option, void* index) {
    QItemDelegate_QBasePaint((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QSize* q_itemdelegate_size_hint(void* self, void* option, void* index) {
    return QItemDelegate_SizeHint((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_itemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*)) {
    QItemDelegate_OnSizeHint((QItemDelegate*)self, (intptr_t)callback);
}

QSize* q_itemdelegate_qbase_size_hint(void* self, void* option, void* index) {
    return QItemDelegate_QBaseSizeHint((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QWidget* q_itemdelegate_create_editor(void* self, void* parent, void* option, void* index) {
    return QItemDelegate_CreateEditor((QItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_itemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*)) {
    QItemDelegate_OnCreateEditor((QItemDelegate*)self, (intptr_t)callback);
}

QWidget* q_itemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index) {
    return QItemDelegate_QBaseCreateEditor((QItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_itemdelegate_set_editor_data(void* self, void* editor, void* index) {
    QItemDelegate_SetEditorData((QItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_itemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*)) {
    QItemDelegate_OnSetEditorData((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_qbase_set_editor_data(void* self, void* editor, void* index) {
    QItemDelegate_QBaseSetEditorData((QItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_itemdelegate_set_model_data(void* self, void* editor, void* model, void* index) {
    QItemDelegate_SetModelData((QItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void q_itemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*)) {
    QItemDelegate_OnSetModelData((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index) {
    QItemDelegate_QBaseSetModelData((QItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void q_itemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    QItemDelegate_UpdateEditorGeometry((QItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_itemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*)) {
    QItemDelegate_OnUpdateEditorGeometry((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    QItemDelegate_QBaseUpdateEditorGeometry((QItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QItemEditorFactory* q_itemdelegate_item_editor_factory(void* self) {
    return QItemDelegate_ItemEditorFactory((QItemDelegate*)self);
}

void q_itemdelegate_set_item_editor_factory(void* self, void* factory) {
    QItemDelegate_SetItemEditorFactory((QItemDelegate*)self, (QItemEditorFactory*)factory);
}

void q_itemdelegate_draw_display(void* self, void* painter, void* option, void* rect, const char* text) {
    QItemDelegate_DrawDisplay((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, qstring(text));
}

void q_itemdelegate_on_draw_display(void* self, void (*callback)(void*, void*, void*, void*, const char*)) {
    QItemDelegate_OnDrawDisplay((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_qbase_draw_display(void* self, void* painter, void* option, void* rect, const char* text) {
    QItemDelegate_QBaseDrawDisplay((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, qstring(text));
}

void q_itemdelegate_draw_decoration(void* self, void* painter, void* option, void* rect, void* pixmap) {
    QItemDelegate_DrawDecoration((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, (QPixmap*)pixmap);
}

void q_itemdelegate_on_draw_decoration(void* self, void (*callback)(void*, void*, void*, void*, void*)) {
    QItemDelegate_OnDrawDecoration((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_qbase_draw_decoration(void* self, void* painter, void* option, void* rect, void* pixmap) {
    QItemDelegate_QBaseDrawDecoration((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, (QPixmap*)pixmap);
}

void q_itemdelegate_draw_focus(void* self, void* painter, void* option, void* rect) {
    QItemDelegate_DrawFocus((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect);
}

void q_itemdelegate_on_draw_focus(void* self, void (*callback)(void*, void*, void*, void*)) {
    QItemDelegate_OnDrawFocus((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_qbase_draw_focus(void* self, void* painter, void* option, void* rect) {
    QItemDelegate_QBaseDrawFocus((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect);
}

void q_itemdelegate_draw_check(void* self, void* painter, void* option, void* rect, int64_t state) {
    QItemDelegate_DrawCheck((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, state);
}

void q_itemdelegate_on_draw_check(void* self, void (*callback)(void*, void*, void*, void*, int64_t)) {
    QItemDelegate_OnDrawCheck((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_qbase_draw_check(void* self, void* painter, void* option, void* rect, int64_t state) {
    QItemDelegate_QBaseDrawCheck((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, state);
}

void q_itemdelegate_draw_background(void* self, void* painter, void* option, void* index) {
    QItemDelegate_DrawBackground((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_itemdelegate_on_draw_background(void* self, void (*callback)(void*, void*, void*, void*)) {
    QItemDelegate_OnDrawBackground((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_qbase_draw_background(void* self, void* painter, void* option, void* index) {
    QItemDelegate_QBaseDrawBackground((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_itemdelegate_do_layout(void* self, void* option, void* checkRect, void* iconRect, void* textRect, bool hint) {
    QItemDelegate_DoLayout((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QRect*)checkRect, (QRect*)iconRect, (QRect*)textRect, hint);
}

void q_itemdelegate_on_do_layout(void* self, void (*callback)(void*, void*, void*, void*, void*, bool)) {
    QItemDelegate_OnDoLayout((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_qbase_do_layout(void* self, void* option, void* checkRect, void* iconRect, void* textRect, bool hint) {
    QItemDelegate_QBaseDoLayout((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QRect*)checkRect, (QRect*)iconRect, (QRect*)textRect, hint);
}

QRect* q_itemdelegate_rect(void* self, void* option, void* index, int role) {
    return QItemDelegate_Rect((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index, role);
}

void q_itemdelegate_on_rect(void* self, QRect* (*callback)(void*, void*, void*, int)) {
    QItemDelegate_OnRect((QItemDelegate*)self, (intptr_t)callback);
}

QRect* q_itemdelegate_qbase_rect(void* self, void* option, void* index, int role) {
    return QItemDelegate_QBaseRect((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index, role);
}

bool q_itemdelegate_event_filter(void* self, void* object, void* event) {
    return QItemDelegate_EventFilter((QItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

void q_itemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QItemDelegate_OnEventFilter((QItemDelegate*)self, (intptr_t)callback);
}

bool q_itemdelegate_qbase_event_filter(void* self, void* object, void* event) {
    return QItemDelegate_QBaseEventFilter((QItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

bool q_itemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return QItemDelegate_EditorEvent((QItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_itemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    QItemDelegate_OnEditorEvent((QItemDelegate*)self, (intptr_t)callback);
}

bool q_itemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return QItemDelegate_QBaseEditorEvent((QItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QStyleOptionViewItem* q_itemdelegate_set_options(void* self, void* index, void* option) {
    return QItemDelegate_SetOptions((QItemDelegate*)self, (QModelIndex*)index, (QStyleOptionViewItem*)option);
}

void q_itemdelegate_on_set_options(void* self, QStyleOptionViewItem* (*callback)(void*, void*, void*)) {
    QItemDelegate_OnSetOptions((QItemDelegate*)self, (intptr_t)callback);
}

QStyleOptionViewItem* q_itemdelegate_qbase_set_options(void* self, void* index, void* option) {
    return QItemDelegate_QBaseSetOptions((QItemDelegate*)self, (QModelIndex*)index, (QStyleOptionViewItem*)option);
}

QPixmap* q_itemdelegate_decoration(void* self, void* option, void* variant) {
    return QItemDelegate_Decoration((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QVariant*)variant);
}

void q_itemdelegate_on_decoration(void* self, QPixmap* (*callback)(void*, void*, void*)) {
    QItemDelegate_OnDecoration((QItemDelegate*)self, (intptr_t)callback);
}

QPixmap* q_itemdelegate_qbase_decoration(void* self, void* option, void* variant) {
    return QItemDelegate_QBaseDecoration((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QVariant*)variant);
}

QRect* q_itemdelegate_do_check(void* self, void* option, void* bounding, void* variant) {
    return QItemDelegate_DoCheck((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QRect*)bounding, (QVariant*)variant);
}

void q_itemdelegate_on_do_check(void* self, QRect* (*callback)(void*, void*, void*, void*)) {
    QItemDelegate_OnDoCheck((QItemDelegate*)self, (intptr_t)callback);
}

QRect* q_itemdelegate_qbase_do_check(void* self, void* option, void* bounding, void* variant) {
    return QItemDelegate_QBaseDoCheck((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QRect*)bounding, (QVariant*)variant);
}

QRect* q_itemdelegate_text_rectangle(void* self, void* painter, void* rect, void* font, const char* text) {
    return QItemDelegate_TextRectangle((QItemDelegate*)self, (QPainter*)painter, (QRect*)rect, (QFont*)font, qstring(text));
}

void q_itemdelegate_on_text_rectangle(void* self, QRect* (*callback)(void*, void*, void*, void*, const char*)) {
    QItemDelegate_OnTextRectangle((QItemDelegate*)self, (intptr_t)callback);
}

QRect* q_itemdelegate_qbase_text_rectangle(void* self, void* painter, void* rect, void* font, const char* text) {
    return QItemDelegate_QBaseTextRectangle((QItemDelegate*)self, (QPainter*)painter, (QRect*)rect, (QFont*)font, qstring(text));
}

const char* q_itemdelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QItemDelegate_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_itemdelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QItemDelegate_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemdelegate_commit_data(void* self, void* editor) {
    QAbstractItemDelegate_CommitData((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void q_itemdelegate_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CommitData((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_close_editor(void* self, void* editor) {
    QAbstractItemDelegate_CloseEditor((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void q_itemdelegate_on_close_editor(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CloseEditor((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_size_hint_changed(void* self, void* param1) {
    QAbstractItemDelegate_SizeHintChanged((QAbstractItemDelegate*)self, (QModelIndex*)param1);
}

void q_itemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_SizeHintChanged((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_close_editor2(void* self, void* editor, int64_t hint) {
    QAbstractItemDelegate_CloseEditor2((QAbstractItemDelegate*)self, (QWidget*)editor, hint);
}

void q_itemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int64_t)) {
    QAbstractItemDelegate_Connect_CloseEditor2((QAbstractItemDelegate*)self, (intptr_t)callback);
}

const char* q_itemdelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemdelegate_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_itemdelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_itemdelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_itemdelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_itemdelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_itemdelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_itemdelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_itemdelegate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_itemdelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_itemdelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_itemdelegate_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_itemdelegate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_itemdelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_itemdelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_itemdelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_itemdelegate_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_itemdelegate_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_itemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_itemdelegate_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_itemdelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_itemdelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_itemdelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_itemdelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_itemdelegate_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_itemdelegate_dynamic_property_names");
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

QBindingStorage* q_itemdelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_itemdelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_itemdelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_itemdelegate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_itemdelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_itemdelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_itemdelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_itemdelegate_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_itemdelegate_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_itemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_itemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_itemdelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_itemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_itemdelegate_destroy_editor(void* self, void* editor, void* index) {
    QItemDelegate_DestroyEditor((QItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_itemdelegate_qbase_destroy_editor(void* self, void* editor, void* index) {
    QItemDelegate_QBaseDestroyEditor((QItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void q_itemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*)) {
    QItemDelegate_OnDestroyEditor((QItemDelegate*)self, (intptr_t)callback);
}

bool q_itemdelegate_help_event(void* self, void* event, void* view, void* option, void* index) {
    return QItemDelegate_HelpEvent((QItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool q_itemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index) {
    return QItemDelegate_QBaseHelpEvent((QItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void q_itemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    QItemDelegate_OnHelpEvent((QItemDelegate*)self, (intptr_t)callback);
}

libqt_list /* of int */ q_itemdelegate_painting_roles(void* self) {
    libqt_list _arr = QItemDelegate_PaintingRoles((QItemDelegate*)self);
    return _arr;
}

libqt_list /* of int */ q_itemdelegate_qbase_painting_roles(void* self) {
    libqt_list _arr = QItemDelegate_QBasePaintingRoles((QItemDelegate*)self);
    return _arr;
}

void q_itemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*callback)()) {
    QItemDelegate_OnPaintingRoles((QItemDelegate*)self, (intptr_t)callback);
}

bool q_itemdelegate_event(void* self, void* event) {
    return QItemDelegate_Event((QItemDelegate*)self, (QEvent*)event);
}

bool q_itemdelegate_qbase_event(void* self, void* event) {
    return QItemDelegate_QBaseEvent((QItemDelegate*)self, (QEvent*)event);
}

void q_itemdelegate_on_event(void* self, bool (*callback)(void*, void*)) {
    QItemDelegate_OnEvent((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_timer_event(void* self, void* event) {
    QItemDelegate_TimerEvent((QItemDelegate*)self, (QTimerEvent*)event);
}

void q_itemdelegate_qbase_timer_event(void* self, void* event) {
    QItemDelegate_QBaseTimerEvent((QItemDelegate*)self, (QTimerEvent*)event);
}

void q_itemdelegate_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QItemDelegate_OnTimerEvent((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_child_event(void* self, void* event) {
    QItemDelegate_ChildEvent((QItemDelegate*)self, (QChildEvent*)event);
}

void q_itemdelegate_qbase_child_event(void* self, void* event) {
    QItemDelegate_QBaseChildEvent((QItemDelegate*)self, (QChildEvent*)event);
}

void q_itemdelegate_on_child_event(void* self, void (*callback)(void*, void*)) {
    QItemDelegate_OnChildEvent((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_custom_event(void* self, void* event) {
    QItemDelegate_CustomEvent((QItemDelegate*)self, (QEvent*)event);
}

void q_itemdelegate_qbase_custom_event(void* self, void* event) {
    QItemDelegate_QBaseCustomEvent((QItemDelegate*)self, (QEvent*)event);
}

void q_itemdelegate_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QItemDelegate_OnCustomEvent((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_connect_notify(void* self, void* signal) {
    QItemDelegate_ConnectNotify((QItemDelegate*)self, (QMetaMethod*)signal);
}

void q_itemdelegate_qbase_connect_notify(void* self, void* signal) {
    QItemDelegate_QBaseConnectNotify((QItemDelegate*)self, (QMetaMethod*)signal);
}

void q_itemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QItemDelegate_OnConnectNotify((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_disconnect_notify(void* self, void* signal) {
    QItemDelegate_DisconnectNotify((QItemDelegate*)self, (QMetaMethod*)signal);
}

void q_itemdelegate_qbase_disconnect_notify(void* self, void* signal) {
    QItemDelegate_QBaseDisconnectNotify((QItemDelegate*)self, (QMetaMethod*)signal);
}

void q_itemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QItemDelegate_OnDisconnectNotify((QItemDelegate*)self, (intptr_t)callback);
}

QObject* q_itemdelegate_sender(void* self) {
    return QItemDelegate_Sender((QItemDelegate*)self);
}

QObject* q_itemdelegate_qbase_sender(void* self) {
    return QItemDelegate_QBaseSender((QItemDelegate*)self);
}

void q_itemdelegate_on_sender(void* self, QObject* (*callback)()) {
    QItemDelegate_OnSender((QItemDelegate*)self, (intptr_t)callback);
}

int32_t q_itemdelegate_sender_signal_index(void* self) {
    return QItemDelegate_SenderSignalIndex((QItemDelegate*)self);
}

int32_t q_itemdelegate_qbase_sender_signal_index(void* self) {
    return QItemDelegate_QBaseSenderSignalIndex((QItemDelegate*)self);
}

void q_itemdelegate_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QItemDelegate_OnSenderSignalIndex((QItemDelegate*)self, (intptr_t)callback);
}

int32_t q_itemdelegate_receivers(void* self, const char* signal) {
    return QItemDelegate_Receivers((QItemDelegate*)self, signal);
}

int32_t q_itemdelegate_qbase_receivers(void* self, const char* signal) {
    return QItemDelegate_QBaseReceivers((QItemDelegate*)self, signal);
}

void q_itemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QItemDelegate_OnReceivers((QItemDelegate*)self, (intptr_t)callback);
}

bool q_itemdelegate_is_signal_connected(void* self, void* signal) {
    return QItemDelegate_IsSignalConnected((QItemDelegate*)self, (QMetaMethod*)signal);
}

bool q_itemdelegate_qbase_is_signal_connected(void* self, void* signal) {
    return QItemDelegate_QBaseIsSignalConnected((QItemDelegate*)self, (QMetaMethod*)signal);
}

void q_itemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QItemDelegate_OnIsSignalConnected((QItemDelegate*)self, (intptr_t)callback);
}

void q_itemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_itemdelegate_delete(void* self) {
    QItemDelegate_Delete((QItemDelegate*)(self));
}
