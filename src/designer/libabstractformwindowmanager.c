#include "../libqaction.hpp"
#include "../libqactiongroup.hpp"
#include "../libqcoreevent.hpp"
#include "libabstractdnditem.hpp"
#include "libabstractformeditor.hpp"
#include "libabstractformwindow.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpixmap.hpp"
#include "../libqwidget.hpp"
#include "libabstractformwindowmanager.hpp"
#include "libabstractformwindowmanager.h"

QDesignerFormWindowManagerInterface* q_designerformwindowmanagerinterface_new() {
    return QDesignerFormWindowManagerInterface_new();
}

QDesignerFormWindowManagerInterface* q_designerformwindowmanagerinterface_new2(void* parent) {
    return QDesignerFormWindowManagerInterface_new2((QObject*)parent);
}

const QMetaObject* q_designerformwindowmanagerinterface_meta_object(void* self) {
    return QDesignerFormWindowManagerInterface_MetaObject((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QDesignerFormWindowManagerInterface_OnMetaObject((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

const QMetaObject* q_designerformwindowmanagerinterface_qbase_meta_object(void* self) {
    return QDesignerFormWindowManagerInterface_QBaseMetaObject((QDesignerFormWindowManagerInterface*)self);
}

void* q_designerformwindowmanagerinterface_metacast(void* self, const char* param1) {
    return QDesignerFormWindowManagerInterface_Metacast((QDesignerFormWindowManagerInterface*)self, param1);
}

void q_designerformwindowmanagerinterface_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDesignerFormWindowManagerInterface_OnMetacast((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void* q_designerformwindowmanagerinterface_qbase_metacast(void* self, const char* param1) {
    return QDesignerFormWindowManagerInterface_QBaseMetacast((QDesignerFormWindowManagerInterface*)self, param1);
}

int32_t q_designerformwindowmanagerinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerFormWindowManagerInterface_Metacall((QDesignerFormWindowManagerInterface*)self, param1, param2, param3);
}

void q_designerformwindowmanagerinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDesignerFormWindowManagerInterface_OnMetacall((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowmanagerinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDesignerFormWindowManagerInterface_QBaseMetacall((QDesignerFormWindowManagerInterface*)self, param1, param2, param3);
}

const char* q_designerformwindowmanagerinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* q_designerformwindowmanagerinterface_action(void* self, int32_t action) {
    return QDesignerFormWindowManagerInterface_Action((QDesignerFormWindowManagerInterface*)self, action);
}

void q_designerformwindowmanagerinterface_on_action(void* self, QAction* (*callback)(void*, int32_t)) {
    QDesignerFormWindowManagerInterface_OnAction((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

QAction* q_designerformwindowmanagerinterface_qbase_action(void* self, int32_t action) {
    return QDesignerFormWindowManagerInterface_QBaseAction((QDesignerFormWindowManagerInterface*)self, action);
}

QActionGroup* q_designerformwindowmanagerinterface_action_group(void* self, int32_t actionGroup) {
    return QDesignerFormWindowManagerInterface_ActionGroup((QDesignerFormWindowManagerInterface*)self, actionGroup);
}

void q_designerformwindowmanagerinterface_on_action_group(void* self, QActionGroup* (*callback)(void*, int32_t)) {
    QDesignerFormWindowManagerInterface_OnActionGroup((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

QActionGroup* q_designerformwindowmanagerinterface_qbase_action_group(void* self, int32_t actionGroup) {
    return QDesignerFormWindowManagerInterface_QBaseActionGroup((QDesignerFormWindowManagerInterface*)self, actionGroup);
}

QAction* q_designerformwindowmanagerinterface_action_cut(void* self) {
    return QDesignerFormWindowManagerInterface_ActionCut((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_copy(void* self) {
    return QDesignerFormWindowManagerInterface_ActionCopy((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_paste(void* self) {
    return QDesignerFormWindowManagerInterface_ActionPaste((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_delete(void* self) {
    return QDesignerFormWindowManagerInterface_ActionDelete((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_select_all(void* self) {
    return QDesignerFormWindowManagerInterface_ActionSelectAll((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_lower(void* self) {
    return QDesignerFormWindowManagerInterface_ActionLower((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_raise(void* self) {
    return QDesignerFormWindowManagerInterface_ActionRaise((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_undo(void* self) {
    return QDesignerFormWindowManagerInterface_ActionUndo((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_redo(void* self) {
    return QDesignerFormWindowManagerInterface_ActionRedo((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_horizontal_layout(void* self) {
    return QDesignerFormWindowManagerInterface_ActionHorizontalLayout((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_vertical_layout(void* self) {
    return QDesignerFormWindowManagerInterface_ActionVerticalLayout((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_split_horizontal(void* self) {
    return QDesignerFormWindowManagerInterface_ActionSplitHorizontal((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_split_vertical(void* self) {
    return QDesignerFormWindowManagerInterface_ActionSplitVertical((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_grid_layout(void* self) {
    return QDesignerFormWindowManagerInterface_ActionGridLayout((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_form_layout(void* self) {
    return QDesignerFormWindowManagerInterface_ActionFormLayout((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_break_layout(void* self) {
    return QDesignerFormWindowManagerInterface_ActionBreakLayout((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_adjust_size(void* self) {
    return QDesignerFormWindowManagerInterface_ActionAdjustSize((QDesignerFormWindowManagerInterface*)self);
}

QAction* q_designerformwindowmanagerinterface_action_simplify_layout(void* self) {
    return QDesignerFormWindowManagerInterface_ActionSimplifyLayout((QDesignerFormWindowManagerInterface*)self);
}

QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_active_form_window(void* self) {
    return QDesignerFormWindowManagerInterface_ActiveFormWindow((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_on_active_form_window(void* self, QDesignerFormWindowInterface* (*callback)()) {
    QDesignerFormWindowManagerInterface_OnActiveFormWindow((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_qbase_active_form_window(void* self) {
    return QDesignerFormWindowManagerInterface_QBaseActiveFormWindow((QDesignerFormWindowManagerInterface*)self);
}

int32_t q_designerformwindowmanagerinterface_form_window_count(void* self) {
    return QDesignerFormWindowManagerInterface_FormWindowCount((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_on_form_window_count(void* self, int32_t (*callback)()) {
    QDesignerFormWindowManagerInterface_OnFormWindowCount((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowmanagerinterface_qbase_form_window_count(void* self) {
    return QDesignerFormWindowManagerInterface_QBaseFormWindowCount((QDesignerFormWindowManagerInterface*)self);
}

QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_form_window(void* self, int index) {
    return QDesignerFormWindowManagerInterface_FormWindow((QDesignerFormWindowManagerInterface*)self, index);
}

void q_designerformwindowmanagerinterface_on_form_window(void* self, QDesignerFormWindowInterface* (*callback)(void*, int)) {
    QDesignerFormWindowManagerInterface_OnFormWindow((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_qbase_form_window(void* self, int index) {
    return QDesignerFormWindowManagerInterface_QBaseFormWindow((QDesignerFormWindowManagerInterface*)self, index);
}

QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_create_form_window(void* self, void* parentWidget, int32_t flags) {
    return QDesignerFormWindowManagerInterface_CreateFormWindow((QDesignerFormWindowManagerInterface*)self, (QWidget*)parentWidget, flags);
}

void q_designerformwindowmanagerinterface_on_create_form_window(void* self, QDesignerFormWindowInterface* (*callback)(void*, void*, int32_t)) {
    QDesignerFormWindowManagerInterface_OnCreateFormWindow((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

QDesignerFormWindowInterface* q_designerformwindowmanagerinterface_qbase_create_form_window(void* self, void* parentWidget, int32_t flags) {
    return QDesignerFormWindowManagerInterface_QBaseCreateFormWindow((QDesignerFormWindowManagerInterface*)self, (QWidget*)parentWidget, flags);
}

QDesignerFormEditorInterface* q_designerformwindowmanagerinterface_core(void* self) {
    return QDesignerFormWindowManagerInterface_Core((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)()) {
    QDesignerFormWindowManagerInterface_OnCore((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

QDesignerFormEditorInterface* q_designerformwindowmanagerinterface_qbase_core(void* self) {
    return QDesignerFormWindowManagerInterface_QBaseCore((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_drag_items(void* self, libqt_list /* of QDesignerDnDItemInterface* */ item_list) {
    QDesignerFormWindowManagerInterface_DragItems((QDesignerFormWindowManagerInterface*)self, item_list);
}

void q_designerformwindowmanagerinterface_on_drag_items(void* self, void (*callback)(void*, libqt_list /* of QDesignerDnDItemInterface* */)) {
    QDesignerFormWindowManagerInterface_OnDragItems((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_qbase_drag_items(void* self, libqt_list /* of QDesignerDnDItemInterface* */ item_list) {
    QDesignerFormWindowManagerInterface_QBaseDragItems((QDesignerFormWindowManagerInterface*)self, item_list);
}

QPixmap* q_designerformwindowmanagerinterface_create_preview_pixmap(void* self) {
    return QDesignerFormWindowManagerInterface_CreatePreviewPixmap((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_on_create_preview_pixmap(void* self, QPixmap* (*callback)()) {
    QDesignerFormWindowManagerInterface_OnCreatePreviewPixmap((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

QPixmap* q_designerformwindowmanagerinterface_qbase_create_preview_pixmap(void* self) {
    return QDesignerFormWindowManagerInterface_QBaseCreatePreviewPixmap((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_form_window_added(void* self, void* formWindow) {
    QDesignerFormWindowManagerInterface_FormWindowAdded((QDesignerFormWindowManagerInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerformwindowmanagerinterface_on_form_window_added(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_Connect_FormWindowAdded((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_form_window_removed(void* self, void* formWindow) {
    QDesignerFormWindowManagerInterface_FormWindowRemoved((QDesignerFormWindowManagerInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerformwindowmanagerinterface_on_form_window_removed(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_Connect_FormWindowRemoved((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_active_form_window_changed(void* self, void* formWindow) {
    QDesignerFormWindowManagerInterface_ActiveFormWindowChanged((QDesignerFormWindowManagerInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerformwindowmanagerinterface_on_active_form_window_changed(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_Connect_ActiveFormWindowChanged((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_form_window_settings_changed(void* self, void* fw) {
    QDesignerFormWindowManagerInterface_FormWindowSettingsChanged((QDesignerFormWindowManagerInterface*)self, (QDesignerFormWindowInterface*)fw);
}

void q_designerformwindowmanagerinterface_on_form_window_settings_changed(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_Connect_FormWindowSettingsChanged((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_add_form_window(void* self, void* formWindow) {
    QDesignerFormWindowManagerInterface_AddFormWindow((QDesignerFormWindowManagerInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerformwindowmanagerinterface_on_add_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_OnAddFormWindow((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_qbase_add_form_window(void* self, void* formWindow) {
    QDesignerFormWindowManagerInterface_QBaseAddFormWindow((QDesignerFormWindowManagerInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerformwindowmanagerinterface_remove_form_window(void* self, void* formWindow) {
    QDesignerFormWindowManagerInterface_RemoveFormWindow((QDesignerFormWindowManagerInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerformwindowmanagerinterface_on_remove_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_OnRemoveFormWindow((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_qbase_remove_form_window(void* self, void* formWindow) {
    QDesignerFormWindowManagerInterface_QBaseRemoveFormWindow((QDesignerFormWindowManagerInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerformwindowmanagerinterface_set_active_form_window(void* self, void* formWindow) {
    QDesignerFormWindowManagerInterface_SetActiveFormWindow((QDesignerFormWindowManagerInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerformwindowmanagerinterface_on_set_active_form_window(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_OnSetActiveFormWindow((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_qbase_set_active_form_window(void* self, void* formWindow) {
    QDesignerFormWindowManagerInterface_QBaseSetActiveFormWindow((QDesignerFormWindowManagerInterface*)self, (QDesignerFormWindowInterface*)formWindow);
}

void q_designerformwindowmanagerinterface_show_preview(void* self) {
    QDesignerFormWindowManagerInterface_ShowPreview((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_on_show_preview(void* self, void (*callback)()) {
    QDesignerFormWindowManagerInterface_OnShowPreview((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_qbase_show_preview(void* self) {
    QDesignerFormWindowManagerInterface_QBaseShowPreview((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_close_all_previews(void* self) {
    QDesignerFormWindowManagerInterface_CloseAllPreviews((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_on_close_all_previews(void* self, void (*callback)()) {
    QDesignerFormWindowManagerInterface_OnCloseAllPreviews((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_qbase_close_all_previews(void* self) {
    QDesignerFormWindowManagerInterface_QBaseCloseAllPreviews((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_show_plugin_dialog(void* self) {
    QDesignerFormWindowManagerInterface_ShowPluginDialog((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_on_show_plugin_dialog(void* self, void (*callback)()) {
    QDesignerFormWindowManagerInterface_OnShowPluginDialog((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_qbase_show_plugin_dialog(void* self) {
    QDesignerFormWindowManagerInterface_QBaseShowPluginDialog((QDesignerFormWindowManagerInterface*)self);
}

const char* q_designerformwindowmanagerinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerformwindowmanagerinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerformwindowmanagerinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerformwindowmanagerinterface_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_designerformwindowmanagerinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_designerformwindowmanagerinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_designerformwindowmanagerinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_designerformwindowmanagerinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_designerformwindowmanagerinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_designerformwindowmanagerinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_designerformwindowmanagerinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_designerformwindowmanagerinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_designerformwindowmanagerinterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_designerformwindowmanagerinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_designerformwindowmanagerinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_designerformwindowmanagerinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_designerformwindowmanagerinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_designerformwindowmanagerinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_designerformwindowmanagerinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_designerformwindowmanagerinterface_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_designerformwindowmanagerinterface_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_designerformwindowmanagerinterface_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_designerformwindowmanagerinterface_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_designerformwindowmanagerinterface_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_designerformwindowmanagerinterface_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_designerformwindowmanagerinterface_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_designerformwindowmanagerinterface_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_designerformwindowmanagerinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_designerformwindowmanagerinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_designerformwindowmanagerinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_designerformwindowmanagerinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_designerformwindowmanagerinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_designerformwindowmanagerinterface_dynamic_property_names\n");
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

QBindingStorage* q_designerformwindowmanagerinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_designerformwindowmanagerinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_designerformwindowmanagerinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_designerformwindowmanagerinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_designerformwindowmanagerinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_designerformwindowmanagerinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_designerformwindowmanagerinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_designerformwindowmanagerinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_designerformwindowmanagerinterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_designerformwindowmanagerinterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_designerformwindowmanagerinterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_designerformwindowmanagerinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_designerformwindowmanagerinterface_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_designerformwindowmanagerinterface_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_designerformwindowmanagerinterface_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_designerformwindowmanagerinterface_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_designerformwindowmanagerinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_designerformwindowmanagerinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_designerformwindowmanagerinterface_event(void* self, void* event) {
    return QDesignerFormWindowManagerInterface_Event((QDesignerFormWindowManagerInterface*)self, (QEvent*)event);
}

bool q_designerformwindowmanagerinterface_qbase_event(void* self, void* event) {
    return QDesignerFormWindowManagerInterface_QBaseEvent((QDesignerFormWindowManagerInterface*)self, (QEvent*)event);
}

void q_designerformwindowmanagerinterface_on_event(void* self, bool (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_OnEvent((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

bool q_designerformwindowmanagerinterface_event_filter(void* self, void* watched, void* event) {
    return QDesignerFormWindowManagerInterface_EventFilter((QDesignerFormWindowManagerInterface*)self, (QObject*)watched, (QEvent*)event);
}

bool q_designerformwindowmanagerinterface_qbase_event_filter(void* self, void* watched, void* event) {
    return QDesignerFormWindowManagerInterface_QBaseEventFilter((QDesignerFormWindowManagerInterface*)self, (QObject*)watched, (QEvent*)event);
}

void q_designerformwindowmanagerinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDesignerFormWindowManagerInterface_OnEventFilter((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_timer_event(void* self, void* event) {
    QDesignerFormWindowManagerInterface_TimerEvent((QDesignerFormWindowManagerInterface*)self, (QTimerEvent*)event);
}

void q_designerformwindowmanagerinterface_qbase_timer_event(void* self, void* event) {
    QDesignerFormWindowManagerInterface_QBaseTimerEvent((QDesignerFormWindowManagerInterface*)self, (QTimerEvent*)event);
}

void q_designerformwindowmanagerinterface_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_OnTimerEvent((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_child_event(void* self, void* event) {
    QDesignerFormWindowManagerInterface_ChildEvent((QDesignerFormWindowManagerInterface*)self, (QChildEvent*)event);
}

void q_designerformwindowmanagerinterface_qbase_child_event(void* self, void* event) {
    QDesignerFormWindowManagerInterface_QBaseChildEvent((QDesignerFormWindowManagerInterface*)self, (QChildEvent*)event);
}

void q_designerformwindowmanagerinterface_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_OnChildEvent((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_custom_event(void* self, void* event) {
    QDesignerFormWindowManagerInterface_CustomEvent((QDesignerFormWindowManagerInterface*)self, (QEvent*)event);
}

void q_designerformwindowmanagerinterface_qbase_custom_event(void* self, void* event) {
    QDesignerFormWindowManagerInterface_QBaseCustomEvent((QDesignerFormWindowManagerInterface*)self, (QEvent*)event);
}

void q_designerformwindowmanagerinterface_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_OnCustomEvent((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_connect_notify(void* self, void* signal) {
    QDesignerFormWindowManagerInterface_ConnectNotify((QDesignerFormWindowManagerInterface*)self, (QMetaMethod*)signal);
}

void q_designerformwindowmanagerinterface_qbase_connect_notify(void* self, void* signal) {
    QDesignerFormWindowManagerInterface_QBaseConnectNotify((QDesignerFormWindowManagerInterface*)self, (QMetaMethod*)signal);
}

void q_designerformwindowmanagerinterface_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_OnConnectNotify((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_disconnect_notify(void* self, void* signal) {
    QDesignerFormWindowManagerInterface_DisconnectNotify((QDesignerFormWindowManagerInterface*)self, (QMetaMethod*)signal);
}

void q_designerformwindowmanagerinterface_qbase_disconnect_notify(void* self, void* signal) {
    QDesignerFormWindowManagerInterface_QBaseDisconnectNotify((QDesignerFormWindowManagerInterface*)self, (QMetaMethod*)signal);
}

void q_designerformwindowmanagerinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_OnDisconnectNotify((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

QObject* q_designerformwindowmanagerinterface_sender(void* self) {
    return QDesignerFormWindowManagerInterface_Sender((QDesignerFormWindowManagerInterface*)self);
}

QObject* q_designerformwindowmanagerinterface_qbase_sender(void* self) {
    return QDesignerFormWindowManagerInterface_QBaseSender((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_on_sender(void* self, QObject* (*callback)()) {
    QDesignerFormWindowManagerInterface_OnSender((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowmanagerinterface_sender_signal_index(void* self) {
    return QDesignerFormWindowManagerInterface_SenderSignalIndex((QDesignerFormWindowManagerInterface*)self);
}

int32_t q_designerformwindowmanagerinterface_qbase_sender_signal_index(void* self) {
    return QDesignerFormWindowManagerInterface_QBaseSenderSignalIndex((QDesignerFormWindowManagerInterface*)self);
}

void q_designerformwindowmanagerinterface_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDesignerFormWindowManagerInterface_OnSenderSignalIndex((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

int32_t q_designerformwindowmanagerinterface_receivers(void* self, const char* signal) {
    return QDesignerFormWindowManagerInterface_Receivers((QDesignerFormWindowManagerInterface*)self, signal);
}

int32_t q_designerformwindowmanagerinterface_qbase_receivers(void* self, const char* signal) {
    return QDesignerFormWindowManagerInterface_QBaseReceivers((QDesignerFormWindowManagerInterface*)self, signal);
}

void q_designerformwindowmanagerinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDesignerFormWindowManagerInterface_OnReceivers((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

bool q_designerformwindowmanagerinterface_is_signal_connected(void* self, void* signal) {
    return QDesignerFormWindowManagerInterface_IsSignalConnected((QDesignerFormWindowManagerInterface*)self, (QMetaMethod*)signal);
}

bool q_designerformwindowmanagerinterface_qbase_is_signal_connected(void* self, void* signal) {
    return QDesignerFormWindowManagerInterface_QBaseIsSignalConnected((QDesignerFormWindowManagerInterface*)self, (QMetaMethod*)signal);
}

void q_designerformwindowmanagerinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDesignerFormWindowManagerInterface_OnIsSignalConnected((QDesignerFormWindowManagerInterface*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_designerformwindowmanagerinterface_delete(void* self) {
    QDesignerFormWindowManagerInterface_Delete((QDesignerFormWindowManagerInterface*)(self));
}
