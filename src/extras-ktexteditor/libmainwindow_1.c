#include "libdocument.hpp"
#include "libplugin.hpp"
#include "libview.hpp"
#include "../extras-kxmlgui/libkxmlguifactory.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libmainwindow_1.hpp"
#include "libmainwindow_1.h"

KTextEditor__MainWindow* k_texteditor__mainwindow_new(void* parent) {
    return KTextEditor__MainWindow_new((QObject*)parent);
}

const QMetaObject* k_texteditor__mainwindow_meta_object(void* self) {
    return KTextEditor__MainWindow_MetaObject((KTextEditor__MainWindow*)self);
}

void k_texteditor__mainwindow_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KTextEditor__MainWindow_OnMetaObject((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

const QMetaObject* k_texteditor__mainwindow_qbase_meta_object(void* self) {
    return KTextEditor__MainWindow_QBaseMetaObject((KTextEditor__MainWindow*)self);
}

void* k_texteditor__mainwindow_metacast(void* self, const char* param1) {
    return KTextEditor__MainWindow_Metacast((KTextEditor__MainWindow*)self, param1);
}

void k_texteditor__mainwindow_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KTextEditor__MainWindow_OnMetacast((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

void* k_texteditor__mainwindow_qbase_metacast(void* self, const char* param1) {
    return KTextEditor__MainWindow_QBaseMetacast((KTextEditor__MainWindow*)self, param1);
}

int32_t k_texteditor__mainwindow_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__MainWindow_Metacall((KTextEditor__MainWindow*)self, param1, param2, param3);
}

void k_texteditor__mainwindow_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTextEditor__MainWindow_OnMetacall((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

int32_t k_texteditor__mainwindow_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__MainWindow_QBaseMetacall((KTextEditor__MainWindow*)self, param1, param2, param3);
}

const char* k_texteditor__mainwindow_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QWidget* k_texteditor__mainwindow_window(void* self) {
    return KTextEditor__MainWindow_Window((KTextEditor__MainWindow*)self);
}

KXMLGUIFactory* k_texteditor__mainwindow_gui_factory(void* self) {
    return KTextEditor__MainWindow_GuiFactory((KTextEditor__MainWindow*)self);
}

void k_texteditor__mainwindow_unhandled_shortcut_override(void* self, void* e) {
    KTextEditor__MainWindow_UnhandledShortcutOverride((KTextEditor__MainWindow*)self, (QEvent*)e);
}

void k_texteditor__mainwindow_on_unhandled_shortcut_override(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MainWindow_Connect_UnhandledShortcutOverride((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

libqt_list /* of KTextEditor__View* */ k_texteditor__mainwindow_views(void* self) {
    libqt_list _arr = KTextEditor__MainWindow_Views((KTextEditor__MainWindow*)self);
    return _arr;
}

KTextEditor__View* k_texteditor__mainwindow_active_view(void* self) {
    return KTextEditor__MainWindow_ActiveView((KTextEditor__MainWindow*)self);
}

KTextEditor__View* k_texteditor__mainwindow_activate_view(void* self, void* document) {
    return KTextEditor__MainWindow_ActivateView((KTextEditor__MainWindow*)self, (KTextEditor__Document*)document);
}

KTextEditor__View* k_texteditor__mainwindow_open_url(void* self, void* url) {
    return KTextEditor__MainWindow_OpenUrl((KTextEditor__MainWindow*)self, (QUrl*)url);
}

bool k_texteditor__mainwindow_close_view(void* self, void* view) {
    return KTextEditor__MainWindow_CloseView((KTextEditor__MainWindow*)self, (KTextEditor__View*)view);
}

void k_texteditor__mainwindow_split_view(void* self, int32_t orientation) {
    KTextEditor__MainWindow_SplitView((KTextEditor__MainWindow*)self, orientation);
}

bool k_texteditor__mainwindow_close_split_view(void* self, void* view) {
    return KTextEditor__MainWindow_CloseSplitView((KTextEditor__MainWindow*)self, (KTextEditor__View*)view);
}

bool k_texteditor__mainwindow_views_in_same_split_view(void* self, void* view1, void* view2) {
    return KTextEditor__MainWindow_ViewsInSameSplitView((KTextEditor__MainWindow*)self, (KTextEditor__View*)view1, (KTextEditor__View*)view2);
}

void k_texteditor__mainwindow_view_changed(void* self, void* view) {
    KTextEditor__MainWindow_ViewChanged((KTextEditor__MainWindow*)self, (KTextEditor__View*)view);
}

void k_texteditor__mainwindow_on_view_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MainWindow_Connect_ViewChanged((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

void k_texteditor__mainwindow_view_created(void* self, void* view) {
    KTextEditor__MainWindow_ViewCreated((KTextEditor__MainWindow*)self, (KTextEditor__View*)view);
}

void k_texteditor__mainwindow_on_view_created(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MainWindow_Connect_ViewCreated((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

QWidget* k_texteditor__mainwindow_create_view_bar(void* self, void* view) {
    return KTextEditor__MainWindow_CreateViewBar((KTextEditor__MainWindow*)self, (KTextEditor__View*)view);
}

void k_texteditor__mainwindow_delete_view_bar(void* self, void* view) {
    KTextEditor__MainWindow_DeleteViewBar((KTextEditor__MainWindow*)self, (KTextEditor__View*)view);
}

void k_texteditor__mainwindow_add_widget_to_view_bar(void* self, void* view, void* bar) {
    KTextEditor__MainWindow_AddWidgetToViewBar((KTextEditor__MainWindow*)self, (KTextEditor__View*)view, (QWidget*)bar);
}

void k_texteditor__mainwindow_show_view_bar(void* self, void* view) {
    KTextEditor__MainWindow_ShowViewBar((KTextEditor__MainWindow*)self, (KTextEditor__View*)view);
}

void k_texteditor__mainwindow_hide_view_bar(void* self, void* view) {
    KTextEditor__MainWindow_HideViewBar((KTextEditor__MainWindow*)self, (KTextEditor__View*)view);
}

QWidget* k_texteditor__mainwindow_create_tool_view(void* self, void* plugin, const char* identifier, int32_t pos, void* icon, const char* text) {
    return KTextEditor__MainWindow_CreateToolView((KTextEditor__MainWindow*)self, (KTextEditor__Plugin*)plugin, qstring(identifier), pos, (QIcon*)icon, qstring(text));
}

bool k_texteditor__mainwindow_move_tool_view(void* self, void* widget, int32_t pos) {
    return KTextEditor__MainWindow_MoveToolView((KTextEditor__MainWindow*)self, (QWidget*)widget, pos);
}

bool k_texteditor__mainwindow_show_tool_view(void* self, void* widget) {
    return KTextEditor__MainWindow_ShowToolView((KTextEditor__MainWindow*)self, (QWidget*)widget);
}

bool k_texteditor__mainwindow_hide_tool_view(void* self, void* widget) {
    return KTextEditor__MainWindow_HideToolView((KTextEditor__MainWindow*)self, (QWidget*)widget);
}

bool k_texteditor__mainwindow_show_plugin_config_page(void* self, void* plugin, int page) {
    return KTextEditor__MainWindow_ShowPluginConfigPage((KTextEditor__MainWindow*)self, (KTextEditor__Plugin*)plugin, page);
}

QObject* k_texteditor__mainwindow_plugin_view(void* self, const char* name) {
    return KTextEditor__MainWindow_PluginView((KTextEditor__MainWindow*)self, qstring(name));
}

void k_texteditor__mainwindow_plugin_view_created(void* self, const char* name, void* pluginView) {
    KTextEditor__MainWindow_PluginViewCreated((KTextEditor__MainWindow*)self, qstring(name), (QObject*)pluginView);
}

void k_texteditor__mainwindow_on_plugin_view_created(void* self, void (*callback)(void*, const char*, void*)) {
    KTextEditor__MainWindow_Connect_PluginViewCreated((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

void k_texteditor__mainwindow_plugin_view_deleted(void* self, const char* name, void* pluginView) {
    KTextEditor__MainWindow_PluginViewDeleted((KTextEditor__MainWindow*)self, qstring(name), (QObject*)pluginView);
}

void k_texteditor__mainwindow_on_plugin_view_deleted(void* self, void (*callback)(void*, const char*, void*)) {
    KTextEditor__MainWindow_Connect_PluginViewDeleted((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

bool k_texteditor__mainwindow_add_widget(void* self, void* widget) {
    return KTextEditor__MainWindow_AddWidget((KTextEditor__MainWindow*)self, (QWidget*)widget);
}

bool k_texteditor__mainwindow_remove_widget(void* self, void* widget) {
    return KTextEditor__MainWindow_RemoveWidget((KTextEditor__MainWindow*)self, (QWidget*)widget);
}

libqt_list /* of QWidget* */ k_texteditor__mainwindow_widgets(void* self) {
    libqt_list _arr = KTextEditor__MainWindow_Widgets((KTextEditor__MainWindow*)self);
    return _arr;
}

QWidget* k_texteditor__mainwindow_active_widget(void* self) {
    return KTextEditor__MainWindow_ActiveWidget((KTextEditor__MainWindow*)self);
}

void k_texteditor__mainwindow_activate_widget(void* self, void* widget) {
    KTextEditor__MainWindow_ActivateWidget((KTextEditor__MainWindow*)self, (QWidget*)widget);
}

void k_texteditor__mainwindow_widget_added(void* self, void* widget) {
    KTextEditor__MainWindow_WidgetAdded((KTextEditor__MainWindow*)self, (QWidget*)widget);
}

void k_texteditor__mainwindow_on_widget_added(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MainWindow_Connect_WidgetAdded((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

void k_texteditor__mainwindow_widget_removed(void* self, void* widget) {
    KTextEditor__MainWindow_WidgetRemoved((KTextEditor__MainWindow*)self, (QWidget*)widget);
}

void k_texteditor__mainwindow_on_widget_removed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MainWindow_Connect_WidgetRemoved((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

bool k_texteditor__mainwindow_show_message(void* self, libqt_map /* of const char* to QVariant* */ message) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map message_ret;
    message_ret.len = message.len;
    message_ret.keys = (libqt_string*)malloc(message_ret.len * sizeof(libqt_string));
    if (message_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_texteditor__mainwindow_show_message\n");
        abort();
    }
    message_ret.values = (QVariant**)malloc(message_ret.len * sizeof(QVariant*));
    if (message_ret.values == NULL) {
        free(message_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_texteditor__mainwindow_show_message\n");
        abort();
    }
    const char** message_karr = (const char**)message.keys;
    libqt_string* message_kdest = (libqt_string*)message_ret.keys;
    QVariant** message_varr = (QVariant**)message.values;
    QVariant** message_vdest = (QVariant**)message_ret.values;
    for (size_t i = 0; i < message_ret.len; ++i) {
        message_kdest[i] = qstring(message_karr[i]);
        message_vdest[i] = message_varr[i];
    }
    bool _out = KTextEditor__MainWindow_ShowMessage((KTextEditor__MainWindow*)self, message_ret);
    free(message_ret.keys);
    free(message_ret.values);
    return _out;
}

const char* k_texteditor__mainwindow_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__mainwindow_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KTextEditor__View* k_texteditor__mainwindow_open_url2(void* self, void* url, const char* encoding) {
    return KTextEditor__MainWindow_OpenUrl2((KTextEditor__MainWindow*)self, (QUrl*)url, qstring(encoding));
}

const char* k_texteditor__mainwindow_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__mainwindow_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texteditor__mainwindow_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texteditor__mainwindow_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texteditor__mainwindow_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texteditor__mainwindow_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texteditor__mainwindow_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texteditor__mainwindow_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texteditor__mainwindow_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texteditor__mainwindow_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texteditor__mainwindow_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texteditor__mainwindow_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texteditor__mainwindow_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texteditor__mainwindow_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texteditor__mainwindow_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texteditor__mainwindow_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texteditor__mainwindow_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texteditor__mainwindow_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texteditor__mainwindow_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texteditor__mainwindow_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texteditor__mainwindow_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texteditor__mainwindow_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texteditor__mainwindow_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texteditor__mainwindow_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texteditor__mainwindow_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texteditor__mainwindow_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texteditor__mainwindow_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texteditor__mainwindow_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texteditor__mainwindow_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texteditor__mainwindow_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texteditor__mainwindow_dynamic_property_names\n");
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

QBindingStorage* k_texteditor__mainwindow_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texteditor__mainwindow_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texteditor__mainwindow_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texteditor__mainwindow_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texteditor__mainwindow_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texteditor__mainwindow_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texteditor__mainwindow_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texteditor__mainwindow_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texteditor__mainwindow_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texteditor__mainwindow_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texteditor__mainwindow_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texteditor__mainwindow_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texteditor__mainwindow_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texteditor__mainwindow_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texteditor__mainwindow_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texteditor__mainwindow_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texteditor__mainwindow_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texteditor__mainwindow_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texteditor__mainwindow_event(void* self, void* event) {
    return KTextEditor__MainWindow_Event((KTextEditor__MainWindow*)self, (QEvent*)event);
}

bool k_texteditor__mainwindow_qbase_event(void* self, void* event) {
    return KTextEditor__MainWindow_QBaseEvent((KTextEditor__MainWindow*)self, (QEvent*)event);
}

void k_texteditor__mainwindow_on_event(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__MainWindow_OnEvent((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

bool k_texteditor__mainwindow_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__MainWindow_EventFilter((KTextEditor__MainWindow*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texteditor__mainwindow_qbase_event_filter(void* self, void* watched, void* event) {
    return KTextEditor__MainWindow_QBaseEventFilter((KTextEditor__MainWindow*)self, (QObject*)watched, (QEvent*)event);
}

void k_texteditor__mainwindow_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTextEditor__MainWindow_OnEventFilter((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

void k_texteditor__mainwindow_timer_event(void* self, void* event) {
    KTextEditor__MainWindow_TimerEvent((KTextEditor__MainWindow*)self, (QTimerEvent*)event);
}

void k_texteditor__mainwindow_qbase_timer_event(void* self, void* event) {
    KTextEditor__MainWindow_QBaseTimerEvent((KTextEditor__MainWindow*)self, (QTimerEvent*)event);
}

void k_texteditor__mainwindow_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MainWindow_OnTimerEvent((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

void k_texteditor__mainwindow_child_event(void* self, void* event) {
    KTextEditor__MainWindow_ChildEvent((KTextEditor__MainWindow*)self, (QChildEvent*)event);
}

void k_texteditor__mainwindow_qbase_child_event(void* self, void* event) {
    KTextEditor__MainWindow_QBaseChildEvent((KTextEditor__MainWindow*)self, (QChildEvent*)event);
}

void k_texteditor__mainwindow_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MainWindow_OnChildEvent((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

void k_texteditor__mainwindow_custom_event(void* self, void* event) {
    KTextEditor__MainWindow_CustomEvent((KTextEditor__MainWindow*)self, (QEvent*)event);
}

void k_texteditor__mainwindow_qbase_custom_event(void* self, void* event) {
    KTextEditor__MainWindow_QBaseCustomEvent((KTextEditor__MainWindow*)self, (QEvent*)event);
}

void k_texteditor__mainwindow_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MainWindow_OnCustomEvent((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

void k_texteditor__mainwindow_connect_notify(void* self, void* signal) {
    KTextEditor__MainWindow_ConnectNotify((KTextEditor__MainWindow*)self, (QMetaMethod*)signal);
}

void k_texteditor__mainwindow_qbase_connect_notify(void* self, void* signal) {
    KTextEditor__MainWindow_QBaseConnectNotify((KTextEditor__MainWindow*)self, (QMetaMethod*)signal);
}

void k_texteditor__mainwindow_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MainWindow_OnConnectNotify((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

void k_texteditor__mainwindow_disconnect_notify(void* self, void* signal) {
    KTextEditor__MainWindow_DisconnectNotify((KTextEditor__MainWindow*)self, (QMetaMethod*)signal);
}

void k_texteditor__mainwindow_qbase_disconnect_notify(void* self, void* signal) {
    KTextEditor__MainWindow_QBaseDisconnectNotify((KTextEditor__MainWindow*)self, (QMetaMethod*)signal);
}

void k_texteditor__mainwindow_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTextEditor__MainWindow_OnDisconnectNotify((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

QObject* k_texteditor__mainwindow_sender(void* self) {
    return KTextEditor__MainWindow_Sender((KTextEditor__MainWindow*)self);
}

QObject* k_texteditor__mainwindow_qbase_sender(void* self) {
    return KTextEditor__MainWindow_QBaseSender((KTextEditor__MainWindow*)self);
}

void k_texteditor__mainwindow_on_sender(void* self, QObject* (*callback)()) {
    KTextEditor__MainWindow_OnSender((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

int32_t k_texteditor__mainwindow_sender_signal_index(void* self) {
    return KTextEditor__MainWindow_SenderSignalIndex((KTextEditor__MainWindow*)self);
}

int32_t k_texteditor__mainwindow_qbase_sender_signal_index(void* self) {
    return KTextEditor__MainWindow_QBaseSenderSignalIndex((KTextEditor__MainWindow*)self);
}

void k_texteditor__mainwindow_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTextEditor__MainWindow_OnSenderSignalIndex((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

int32_t k_texteditor__mainwindow_receivers(void* self, const char* signal) {
    return KTextEditor__MainWindow_Receivers((KTextEditor__MainWindow*)self, signal);
}

int32_t k_texteditor__mainwindow_qbase_receivers(void* self, const char* signal) {
    return KTextEditor__MainWindow_QBaseReceivers((KTextEditor__MainWindow*)self, signal);
}

void k_texteditor__mainwindow_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTextEditor__MainWindow_OnReceivers((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

bool k_texteditor__mainwindow_is_signal_connected(void* self, void* signal) {
    return KTextEditor__MainWindow_IsSignalConnected((KTextEditor__MainWindow*)self, (QMetaMethod*)signal);
}

bool k_texteditor__mainwindow_qbase_is_signal_connected(void* self, void* signal) {
    return KTextEditor__MainWindow_QBaseIsSignalConnected((KTextEditor__MainWindow*)self, (QMetaMethod*)signal);
}

void k_texteditor__mainwindow_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTextEditor__MainWindow_OnIsSignalConnected((KTextEditor__MainWindow*)self, (intptr_t)callback);
}

void k_texteditor__mainwindow_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texteditor__mainwindow_delete(void* self) {
    KTextEditor__MainWindow_Delete((KTextEditor__MainWindow*)(self));
}
