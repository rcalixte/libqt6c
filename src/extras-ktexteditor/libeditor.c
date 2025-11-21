#include "../extras-kcoreaddons/libkaboutdata.hpp"
#include "../extras-ksyntaxhighlighting/librepository.hpp"
#include "../extras-ksyntaxhighlighting/libtheme.hpp"
#include "libapplication_1.hpp"
#include "libcommand.hpp"
#include "libconfigpage.hpp"
#include "libdocument.hpp"
#include "libview.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libeditor.hpp"
#include "libeditor.h"

const QMetaObject* k_texteditor__editor_meta_object(void* self) {
    return KTextEditor__Editor_MetaObject((KTextEditor__Editor*)self);
}

void* k_texteditor__editor_metacast(void* self, const char* param1) {
    return KTextEditor__Editor_Metacast((KTextEditor__Editor*)self, param1);
}

int32_t k_texteditor__editor_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTextEditor__Editor_Metacall((KTextEditor__Editor*)self, param1, param2, param3);
}

const char* k_texteditor__editor_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KTextEditor__Editor* k_texteditor__editor_instance() {
    return KTextEditor__Editor_Instance();
}

void k_texteditor__editor_set_application(void* self, void* application) {
    KTextEditor__Editor_SetApplication((KTextEditor__Editor*)self, (KTextEditor__Application*)application);
}

KTextEditor__Application* k_texteditor__editor_application(void* self) {
    return KTextEditor__Editor_Application((KTextEditor__Editor*)self);
}

KTextEditor__Document* k_texteditor__editor_create_document(void* self, void* parent) {
    return KTextEditor__Editor_CreateDocument((KTextEditor__Editor*)self, (QObject*)parent);
}

libqt_list /* of KTextEditor__Document* */ k_texteditor__editor_documents(void* self) {
    libqt_list _arr = KTextEditor__Editor_Documents((KTextEditor__Editor*)self);
    return _arr;
}

void k_texteditor__editor_document_created(void* self, void* editor, void* document) {
    KTextEditor__Editor_DocumentCreated((KTextEditor__Editor*)self, (KTextEditor__Editor*)editor, (KTextEditor__Document*)document);
}

void k_texteditor__editor_on_document_created(void* self, void (*callback)(void*, void*, void*)) {
    KTextEditor__Editor_Connect_DocumentCreated((KTextEditor__Editor*)self, (intptr_t)callback);
}

const KAboutData* k_texteditor__editor_about_data(void* self) {
    return KTextEditor__Editor_AboutData((KTextEditor__Editor*)self);
}

const char* k_texteditor__editor_default_encoding(void* self) {
    libqt_string _str = KTextEditor__Editor_DefaultEncoding((KTextEditor__Editor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__editor_config_dialog(void* self, void* parent) {
    KTextEditor__Editor_ConfigDialog((KTextEditor__Editor*)self, (QWidget*)parent);
}

int32_t k_texteditor__editor_config_pages(void* self) {
    return KTextEditor__Editor_ConfigPages((KTextEditor__Editor*)self);
}

KTextEditor__ConfigPage* k_texteditor__editor_config_page(void* self, int number, void* parent) {
    return KTextEditor__Editor_ConfigPage((KTextEditor__Editor*)self, number, (QWidget*)parent);
}

void k_texteditor__editor_config_changed(void* self, void* editor) {
    KTextEditor__Editor_ConfigChanged((KTextEditor__Editor*)self, (KTextEditor__Editor*)editor);
}

void k_texteditor__editor_on_config_changed(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Editor_Connect_ConfigChanged((KTextEditor__Editor*)self, (intptr_t)callback);
}

QFont* k_texteditor__editor_font(void* self) {
    return KTextEditor__Editor_Font((KTextEditor__Editor*)self);
}

KSyntaxHighlighting__Theme* k_texteditor__editor_theme(void* self) {
    return KTextEditor__Editor_Theme((KTextEditor__Editor*)self);
}

const KSyntaxHighlighting__Repository* k_texteditor__editor_repository(void* self) {
    return KTextEditor__Editor_Repository((KTextEditor__Editor*)self);
}

void k_texteditor__editor_repository_reloaded(void* self, void* editor) {
    KTextEditor__Editor_RepositoryReloaded((KTextEditor__Editor*)self, (KTextEditor__Editor*)editor);
}

void k_texteditor__editor_on_repository_reloaded(void* self, void (*callback)(void*, void*)) {
    KTextEditor__Editor_Connect_RepositoryReloaded((KTextEditor__Editor*)self, (intptr_t)callback);
}

KTextEditor__Command* k_texteditor__editor_query_command(void* self, const char* cmd) {
    return KTextEditor__Editor_QueryCommand((KTextEditor__Editor*)self, qstring(cmd));
}

libqt_list /* of KTextEditor__Command* */ k_texteditor__editor_commands(void* self) {
    libqt_list _arr = KTextEditor__Editor_Commands((KTextEditor__Editor*)self);
    return _arr;
}

const char** k_texteditor__editor_command_list(void* self) {
    libqt_list _arr = KTextEditor__Editor_CommandList((KTextEditor__Editor*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_texteditor__editor_command_list");
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

bool k_texteditor__editor_unregister_variable(void* self, const char* variableName) {
    return KTextEditor__Editor_UnregisterVariable((KTextEditor__Editor*)self, qstring(variableName));
}

bool k_texteditor__editor_expand_variable(void* self, const char* variable, void* view, const char* output) {
    return KTextEditor__Editor_ExpandVariable((KTextEditor__Editor*)self, qstring(variable), (KTextEditor__View*)view, qstring(output));
}

const char* k_texteditor__editor_expand_text(void* self, const char* text, void* view) {
    libqt_string _str = KTextEditor__Editor_ExpandText((KTextEditor__Editor*)self, qstring(text), (KTextEditor__View*)view);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__editor_add_variable_expansion(void* self, libqt_list widgets) {
    KTextEditor__Editor_AddVariableExpansion((KTextEditor__Editor*)self, widgets);
}

const char* k_texteditor__editor_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texteditor__editor_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__editor_add_variable_expansion2(void* self, libqt_list widgets, const char* variables[static 1]) {
    size_t variables_len = libqt_strv_length(variables);
    libqt_string* variables_qstr = (libqt_string*)malloc(variables_len * sizeof(libqt_string));
    if (variables_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_texteditor__editor_add_variable_expansion2");
        abort();
    }
    for (size_t i = 0; i < variables_len; ++i) {
        variables_qstr[i] = qstring(variables[i]);
    }
    libqt_list variables_list = qlist(variables_qstr, variables_len);
    KTextEditor__Editor_AddVariableExpansion2((KTextEditor__Editor*)self, widgets, variables_list);
    free(variables_qstr);
}

bool k_texteditor__editor_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_texteditor__editor_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_texteditor__editor_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__editor_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texteditor__editor_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texteditor__editor_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texteditor__editor_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texteditor__editor_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texteditor__editor_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texteditor__editor_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texteditor__editor_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texteditor__editor_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_texteditor__editor_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texteditor__editor_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texteditor__editor_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texteditor__editor_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_texteditor__editor_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texteditor__editor_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texteditor__editor_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texteditor__editor_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texteditor__editor_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texteditor__editor_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_texteditor__editor_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texteditor__editor_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texteditor__editor_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texteditor__editor_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texteditor__editor_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_texteditor__editor_dynamic_property_names");
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

QBindingStorage* k_texteditor__editor_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texteditor__editor_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texteditor__editor_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texteditor__editor_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texteditor__editor_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texteditor__editor_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texteditor__editor_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_texteditor__editor_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_texteditor__editor_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_texteditor__editor_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texteditor__editor_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_texteditor__editor_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texteditor__editor_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_texteditor__editor_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}
