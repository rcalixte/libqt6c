#include "../libqabstractitemdelegate.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqabstractitemview.hpp"
#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqstyleditemdelegate.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkextendableitemdelegate.hpp"
#include "libkextendableitemdelegate.h"

KExtendableItemDelegate* k_extendableitemdelegate_new(void* parent) {
    return KExtendableItemDelegate_new((QAbstractItemView*)parent);
}

const QMetaObject* k_extendableitemdelegate_meta_object(void* self) {
    return KExtendableItemDelegate_MetaObject((KExtendableItemDelegate*)self);
}

void k_extendableitemdelegate_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KExtendableItemDelegate_OnMetaObject((KExtendableItemDelegate*)self, (intptr_t)callback);
}

const QMetaObject* k_extendableitemdelegate_qbase_meta_object(void* self) {
    return KExtendableItemDelegate_QBaseMetaObject((KExtendableItemDelegate*)self);
}

void* k_extendableitemdelegate_metacast(void* self, const char* param1) {
    return KExtendableItemDelegate_Metacast((KExtendableItemDelegate*)self, param1);
}

void k_extendableitemdelegate_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KExtendableItemDelegate_OnMetacast((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void* k_extendableitemdelegate_qbase_metacast(void* self, const char* param1) {
    return KExtendableItemDelegate_QBaseMetacast((KExtendableItemDelegate*)self, param1);
}

int32_t k_extendableitemdelegate_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KExtendableItemDelegate_Metacall((KExtendableItemDelegate*)self, param1, param2, param3);
}

void k_extendableitemdelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KExtendableItemDelegate_OnMetacall((KExtendableItemDelegate*)self, (intptr_t)callback);
}

int32_t k_extendableitemdelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KExtendableItemDelegate_QBaseMetacall((KExtendableItemDelegate*)self, param1, param2, param3);
}

const char* k_extendableitemdelegate_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* k_extendableitemdelegate_size_hint(void* self, void* option, void* index) {
    return KExtendableItemDelegate_SizeHint((KExtendableItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_size_hint(void* self, QSize* (*callback)(void*, void*, void*)) {
    KExtendableItemDelegate_OnSizeHint((KExtendableItemDelegate*)self, (intptr_t)callback);
}

QSize* k_extendableitemdelegate_qbase_size_hint(void* self, void* option, void* index) {
    return KExtendableItemDelegate_QBaseSizeHint((KExtendableItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_paint(void* self, void* painter, void* option, void* index) {
    KExtendableItemDelegate_Paint((KExtendableItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_paint(void* self, void (*callback)(void*, void*, void*, void*)) {
    KExtendableItemDelegate_OnPaint((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_qbase_paint(void* self, void* painter, void* option, void* index) {
    KExtendableItemDelegate_QBasePaint((KExtendableItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_extend_item(void* self, void* extender, void* index) {
    KExtendableItemDelegate_ExtendItem((KExtendableItemDelegate*)self, (QWidget*)extender, (QModelIndex*)index);
}

void k_extendableitemdelegate_contract_item(void* self, void* index) {
    KExtendableItemDelegate_ContractItem((KExtendableItemDelegate*)self, (QModelIndex*)index);
}

void k_extendableitemdelegate_contract_all(void* self) {
    KExtendableItemDelegate_ContractAll((KExtendableItemDelegate*)self);
}

bool k_extendableitemdelegate_is_extended(void* self, void* index) {
    return KExtendableItemDelegate_IsExtended((KExtendableItemDelegate*)self, (QModelIndex*)index);
}

void k_extendableitemdelegate_update_extender_geometry(void* self, void* extender, void* option, void* index) {
    KExtendableItemDelegate_UpdateExtenderGeometry((KExtendableItemDelegate*)self, (QWidget*)extender, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_update_extender_geometry(void* self, void (*callback)(void*, void*, void*, void*)) {
    KExtendableItemDelegate_OnUpdateExtenderGeometry((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_qbase_update_extender_geometry(void* self, void* extender, void* option, void* index) {
    KExtendableItemDelegate_QBaseUpdateExtenderGeometry((KExtendableItemDelegate*)self, (QWidget*)extender, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_extender_created(void* self, void* extender, void* index) {
    KExtendableItemDelegate_ExtenderCreated((KExtendableItemDelegate*)self, (QWidget*)extender, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_extender_created(void* self, void (*callback)(void*, void*, void*)) {
    KExtendableItemDelegate_Connect_ExtenderCreated((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_extender_destroyed(void* self, void* extender, void* index) {
    KExtendableItemDelegate_ExtenderDestroyed((KExtendableItemDelegate*)self, (QWidget*)extender, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_extender_destroyed(void* self, void (*callback)(void*, void*, void*)) {
    KExtendableItemDelegate_Connect_ExtenderDestroyed((KExtendableItemDelegate*)self, (intptr_t)callback);
}

QRect* k_extendableitemdelegate_extender_rect(void* self, void* extender, void* option, void* index) {
    return KExtendableItemDelegate_ExtenderRect((KExtendableItemDelegate*)self, (QWidget*)extender, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_extender_rect(void* self, QRect* (*callback)(void*, void*, void*, void*)) {
    KExtendableItemDelegate_OnExtenderRect((KExtendableItemDelegate*)self, (intptr_t)callback);
}

QRect* k_extendableitemdelegate_qbase_extender_rect(void* self, void* extender, void* option, void* index) {
    return KExtendableItemDelegate_QBaseExtenderRect((KExtendableItemDelegate*)self, (QWidget*)extender, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_set_extend_pixmap(void* self, void* pixmap) {
    KExtendableItemDelegate_SetExtendPixmap((KExtendableItemDelegate*)self, (QPixmap*)pixmap);
}

void k_extendableitemdelegate_on_set_extend_pixmap(void* self, void (*callback)(void*, void*)) {
    KExtendableItemDelegate_OnSetExtendPixmap((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_qbase_set_extend_pixmap(void* self, void* pixmap) {
    KExtendableItemDelegate_QBaseSetExtendPixmap((KExtendableItemDelegate*)self, (QPixmap*)pixmap);
}

void k_extendableitemdelegate_set_contract_pixmap(void* self, void* pixmap) {
    KExtendableItemDelegate_SetContractPixmap((KExtendableItemDelegate*)self, (QPixmap*)pixmap);
}

void k_extendableitemdelegate_on_set_contract_pixmap(void* self, void (*callback)(void*, void*)) {
    KExtendableItemDelegate_OnSetContractPixmap((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_qbase_set_contract_pixmap(void* self, void* pixmap) {
    KExtendableItemDelegate_QBaseSetContractPixmap((KExtendableItemDelegate*)self, (QPixmap*)pixmap);
}

QPixmap* k_extendableitemdelegate_extend_pixmap(void* self) {
    return KExtendableItemDelegate_ExtendPixmap((KExtendableItemDelegate*)self);
}

void k_extendableitemdelegate_on_extend_pixmap(void* self, QPixmap* (*callback)()) {
    KExtendableItemDelegate_OnExtendPixmap((KExtendableItemDelegate*)self, (intptr_t)callback);
}

QPixmap* k_extendableitemdelegate_qbase_extend_pixmap(void* self) {
    return KExtendableItemDelegate_QBaseExtendPixmap((KExtendableItemDelegate*)self);
}

QPixmap* k_extendableitemdelegate_contract_pixmap(void* self) {
    return KExtendableItemDelegate_ContractPixmap((KExtendableItemDelegate*)self);
}

void k_extendableitemdelegate_on_contract_pixmap(void* self, QPixmap* (*callback)()) {
    KExtendableItemDelegate_OnContractPixmap((KExtendableItemDelegate*)self, (intptr_t)callback);
}

QPixmap* k_extendableitemdelegate_qbase_contract_pixmap(void* self) {
    return KExtendableItemDelegate_QBaseContractPixmap((KExtendableItemDelegate*)self);
}

const char* k_extendableitemdelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_extendableitemdelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QItemEditorFactory* k_extendableitemdelegate_item_editor_factory(void* self) {
    return QStyledItemDelegate_ItemEditorFactory((QStyledItemDelegate*)self);
}

void k_extendableitemdelegate_set_item_editor_factory(void* self, void* factory) {
    QStyledItemDelegate_SetItemEditorFactory((QStyledItemDelegate*)self, (QItemEditorFactory*)factory);
}

void k_extendableitemdelegate_commit_data(void* self, void* editor) {
    QAbstractItemDelegate_CommitData((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void k_extendableitemdelegate_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CommitData((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_close_editor(void* self, void* editor) {
    QAbstractItemDelegate_CloseEditor((QAbstractItemDelegate*)self, (QWidget*)editor);
}

void k_extendableitemdelegate_on_close_editor(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_CloseEditor((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_size_hint_changed(void* self, void* param1) {
    QAbstractItemDelegate_SizeHintChanged((QAbstractItemDelegate*)self, (QModelIndex*)param1);
}

void k_extendableitemdelegate_on_size_hint_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemDelegate_Connect_SizeHintChanged((QAbstractItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_close_editor2(void* self, void* editor, int32_t hint) {
    QAbstractItemDelegate_CloseEditor2((QAbstractItemDelegate*)self, (QWidget*)editor, hint);
}

void k_extendableitemdelegate_on_close_editor2(void* self, void (*callback)(void*, void*, int32_t)) {
    QAbstractItemDelegate_Connect_CloseEditor2((QAbstractItemDelegate*)self, (intptr_t)callback);
}

const char* k_extendableitemdelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_extendableitemdelegate_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_extendableitemdelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_extendableitemdelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_extendableitemdelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_extendableitemdelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_extendableitemdelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_extendableitemdelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_extendableitemdelegate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_extendableitemdelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_extendableitemdelegate_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_extendableitemdelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_extendableitemdelegate_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_extendableitemdelegate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_extendableitemdelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_extendableitemdelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_extendableitemdelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_extendableitemdelegate_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_extendableitemdelegate_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_extendableitemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_extendableitemdelegate_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_extendableitemdelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_extendableitemdelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_extendableitemdelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_extendableitemdelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_extendableitemdelegate_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_extendableitemdelegate_dynamic_property_names\n");
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

QBindingStorage* k_extendableitemdelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_extendableitemdelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_extendableitemdelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_extendableitemdelegate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_extendableitemdelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_extendableitemdelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_extendableitemdelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_extendableitemdelegate_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_extendableitemdelegate_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_extendableitemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_extendableitemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_extendableitemdelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_extendableitemdelegate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QWidget* k_extendableitemdelegate_create_editor(void* self, void* parent, void* option, void* index) {
    return KExtendableItemDelegate_CreateEditor((KExtendableItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

QWidget* k_extendableitemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index) {
    return KExtendableItemDelegate_QBaseCreateEditor((KExtendableItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_create_editor(void* self, QWidget* (*callback)(void*, void*, void*, void*)) {
    KExtendableItemDelegate_OnCreateEditor((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_set_editor_data(void* self, void* editor, void* index) {
    KExtendableItemDelegate_SetEditorData((KExtendableItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_extendableitemdelegate_qbase_set_editor_data(void* self, void* editor, void* index) {
    KExtendableItemDelegate_QBaseSetEditorData((KExtendableItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_set_editor_data(void* self, void (*callback)(void*, void*, void*)) {
    KExtendableItemDelegate_OnSetEditorData((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_set_model_data(void* self, void* editor, void* model, void* index) {
    KExtendableItemDelegate_SetModelData((KExtendableItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void k_extendableitemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index) {
    KExtendableItemDelegate_QBaseSetModelData((KExtendableItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_set_model_data(void* self, void (*callback)(void*, void*, void*, void*)) {
    KExtendableItemDelegate_OnSetModelData((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    KExtendableItemDelegate_UpdateEditorGeometry((KExtendableItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    KExtendableItemDelegate_QBaseUpdateEditorGeometry((KExtendableItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_update_editor_geometry(void* self, void (*callback)(void*, void*, void*, void*)) {
    KExtendableItemDelegate_OnUpdateEditorGeometry((KExtendableItemDelegate*)self, (intptr_t)callback);
}

const char* k_extendableitemdelegate_display_text(void* self, void* value, void* locale) {
    libqt_string _str = KExtendableItemDelegate_DisplayText((KExtendableItemDelegate*)self, (QVariant*)value, (QLocale*)locale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_extendableitemdelegate_qbase_display_text(void* self, void* value, void* locale) {
    libqt_string _str = KExtendableItemDelegate_QBaseDisplayText((KExtendableItemDelegate*)self, (QVariant*)value, (QLocale*)locale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_extendableitemdelegate_on_display_text(void* self, const char* (*callback)(void*, void*, void*)) {
    KExtendableItemDelegate_OnDisplayText((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_init_style_option(void* self, void* option, void* index) {
    KExtendableItemDelegate_InitStyleOption((KExtendableItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_qbase_init_style_option(void* self, void* option, void* index) {
    KExtendableItemDelegate_QBaseInitStyleOption((KExtendableItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_init_style_option(void* self, void (*callback)(void*, void*, void*)) {
    KExtendableItemDelegate_OnInitStyleOption((KExtendableItemDelegate*)self, (intptr_t)callback);
}

bool k_extendableitemdelegate_event_filter(void* self, void* object, void* event) {
    return KExtendableItemDelegate_EventFilter((KExtendableItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

bool k_extendableitemdelegate_qbase_event_filter(void* self, void* object, void* event) {
    return KExtendableItemDelegate_QBaseEventFilter((KExtendableItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

void k_extendableitemdelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KExtendableItemDelegate_OnEventFilter((KExtendableItemDelegate*)self, (intptr_t)callback);
}

bool k_extendableitemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return KExtendableItemDelegate_EditorEvent((KExtendableItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool k_extendableitemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return KExtendableItemDelegate_QBaseEditorEvent((KExtendableItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_editor_event(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    KExtendableItemDelegate_OnEditorEvent((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_destroy_editor(void* self, void* editor, void* index) {
    KExtendableItemDelegate_DestroyEditor((KExtendableItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_extendableitemdelegate_qbase_destroy_editor(void* self, void* editor, void* index) {
    KExtendableItemDelegate_QBaseDestroyEditor((KExtendableItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_destroy_editor(void* self, void (*callback)(void*, void*, void*)) {
    KExtendableItemDelegate_OnDestroyEditor((KExtendableItemDelegate*)self, (intptr_t)callback);
}

bool k_extendableitemdelegate_help_event(void* self, void* event, void* view, void* option, void* index) {
    return KExtendableItemDelegate_HelpEvent((KExtendableItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

bool k_extendableitemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index) {
    return KExtendableItemDelegate_QBaseHelpEvent((KExtendableItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

void k_extendableitemdelegate_on_help_event(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    KExtendableItemDelegate_OnHelpEvent((KExtendableItemDelegate*)self, (intptr_t)callback);
}

libqt_list /* of int */ k_extendableitemdelegate_painting_roles(void* self) {
    libqt_list _arr = KExtendableItemDelegate_PaintingRoles((KExtendableItemDelegate*)self);
    return _arr;
}

libqt_list /* of int */ k_extendableitemdelegate_qbase_painting_roles(void* self) {
    libqt_list _arr = KExtendableItemDelegate_QBasePaintingRoles((KExtendableItemDelegate*)self);
    return _arr;
}

void k_extendableitemdelegate_on_painting_roles(void* self, int* (*callback)()) {
    KExtendableItemDelegate_OnPaintingRoles((KExtendableItemDelegate*)self, (intptr_t)callback);
}

bool k_extendableitemdelegate_event(void* self, void* event) {
    return KExtendableItemDelegate_Event((KExtendableItemDelegate*)self, (QEvent*)event);
}

bool k_extendableitemdelegate_qbase_event(void* self, void* event) {
    return KExtendableItemDelegate_QBaseEvent((KExtendableItemDelegate*)self, (QEvent*)event);
}

void k_extendableitemdelegate_on_event(void* self, bool (*callback)(void*, void*)) {
    KExtendableItemDelegate_OnEvent((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_timer_event(void* self, void* event) {
    KExtendableItemDelegate_TimerEvent((KExtendableItemDelegate*)self, (QTimerEvent*)event);
}

void k_extendableitemdelegate_qbase_timer_event(void* self, void* event) {
    KExtendableItemDelegate_QBaseTimerEvent((KExtendableItemDelegate*)self, (QTimerEvent*)event);
}

void k_extendableitemdelegate_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KExtendableItemDelegate_OnTimerEvent((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_child_event(void* self, void* event) {
    KExtendableItemDelegate_ChildEvent((KExtendableItemDelegate*)self, (QChildEvent*)event);
}

void k_extendableitemdelegate_qbase_child_event(void* self, void* event) {
    KExtendableItemDelegate_QBaseChildEvent((KExtendableItemDelegate*)self, (QChildEvent*)event);
}

void k_extendableitemdelegate_on_child_event(void* self, void (*callback)(void*, void*)) {
    KExtendableItemDelegate_OnChildEvent((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_custom_event(void* self, void* event) {
    KExtendableItemDelegate_CustomEvent((KExtendableItemDelegate*)self, (QEvent*)event);
}

void k_extendableitemdelegate_qbase_custom_event(void* self, void* event) {
    KExtendableItemDelegate_QBaseCustomEvent((KExtendableItemDelegate*)self, (QEvent*)event);
}

void k_extendableitemdelegate_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KExtendableItemDelegate_OnCustomEvent((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_connect_notify(void* self, void* signal) {
    KExtendableItemDelegate_ConnectNotify((KExtendableItemDelegate*)self, (QMetaMethod*)signal);
}

void k_extendableitemdelegate_qbase_connect_notify(void* self, void* signal) {
    KExtendableItemDelegate_QBaseConnectNotify((KExtendableItemDelegate*)self, (QMetaMethod*)signal);
}

void k_extendableitemdelegate_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KExtendableItemDelegate_OnConnectNotify((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_disconnect_notify(void* self, void* signal) {
    KExtendableItemDelegate_DisconnectNotify((KExtendableItemDelegate*)self, (QMetaMethod*)signal);
}

void k_extendableitemdelegate_qbase_disconnect_notify(void* self, void* signal) {
    KExtendableItemDelegate_QBaseDisconnectNotify((KExtendableItemDelegate*)self, (QMetaMethod*)signal);
}

void k_extendableitemdelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KExtendableItemDelegate_OnDisconnectNotify((KExtendableItemDelegate*)self, (intptr_t)callback);
}

QObject* k_extendableitemdelegate_sender(void* self) {
    return KExtendableItemDelegate_Sender((KExtendableItemDelegate*)self);
}

QObject* k_extendableitemdelegate_qbase_sender(void* self) {
    return KExtendableItemDelegate_QBaseSender((KExtendableItemDelegate*)self);
}

void k_extendableitemdelegate_on_sender(void* self, QObject* (*callback)()) {
    KExtendableItemDelegate_OnSender((KExtendableItemDelegate*)self, (intptr_t)callback);
}

int32_t k_extendableitemdelegate_sender_signal_index(void* self) {
    return KExtendableItemDelegate_SenderSignalIndex((KExtendableItemDelegate*)self);
}

int32_t k_extendableitemdelegate_qbase_sender_signal_index(void* self) {
    return KExtendableItemDelegate_QBaseSenderSignalIndex((KExtendableItemDelegate*)self);
}

void k_extendableitemdelegate_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KExtendableItemDelegate_OnSenderSignalIndex((KExtendableItemDelegate*)self, (intptr_t)callback);
}

int32_t k_extendableitemdelegate_receivers(void* self, const char* signal) {
    return KExtendableItemDelegate_Receivers((KExtendableItemDelegate*)self, signal);
}

int32_t k_extendableitemdelegate_qbase_receivers(void* self, const char* signal) {
    return KExtendableItemDelegate_QBaseReceivers((KExtendableItemDelegate*)self, signal);
}

void k_extendableitemdelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KExtendableItemDelegate_OnReceivers((KExtendableItemDelegate*)self, (intptr_t)callback);
}

bool k_extendableitemdelegate_is_signal_connected(void* self, void* signal) {
    return KExtendableItemDelegate_IsSignalConnected((KExtendableItemDelegate*)self, (QMetaMethod*)signal);
}

bool k_extendableitemdelegate_qbase_is_signal_connected(void* self, void* signal) {
    return KExtendableItemDelegate_QBaseIsSignalConnected((KExtendableItemDelegate*)self, (QMetaMethod*)signal);
}

void k_extendableitemdelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KExtendableItemDelegate_OnIsSignalConnected((KExtendableItemDelegate*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_extendableitemdelegate_delete(void* self) {
    KExtendableItemDelegate_Delete((KExtendableItemDelegate*)(self));
}
