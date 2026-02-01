#include "libabstracthighlighter.hpp"
#include "libdefinition.hpp"
#include "libfoldingregion.hpp"
#include "libformat.hpp"
#include "libtheme.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsyntaxhighlighter.hpp"
#include "../libqtextobject.hpp"
#include "../libqtextformat.hpp"
#include "../libqtextdocument.hpp"
#include "libsyntaxhighlighter.hpp"
#include "libsyntaxhighlighter.h"

KSyntaxHighlighting__SyntaxHighlighter* k_syntaxhighlighting__syntaxhighlighter_new() {
    return KSyntaxHighlighting__SyntaxHighlighter_new();
}

KSyntaxHighlighting__SyntaxHighlighter* k_syntaxhighlighting__syntaxhighlighter_new2(void* document) {
    return KSyntaxHighlighting__SyntaxHighlighter_new2((QTextDocument*)document);
}

KSyntaxHighlighting__SyntaxHighlighter* k_syntaxhighlighting__syntaxhighlighter_new3(void* parent) {
    return KSyntaxHighlighting__SyntaxHighlighter_new3((QObject*)parent);
}

const QMetaObject* k_syntaxhighlighting__syntaxhighlighter_meta_object(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_MetaObject((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KSyntaxHighlighting__SyntaxHighlighter_OnMetaObject((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

const QMetaObject* k_syntaxhighlighting__syntaxhighlighter_qbase_meta_object(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseMetaObject((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

void* k_syntaxhighlighting__syntaxhighlighter_metacast(void* self, const char* param1) {
    return KSyntaxHighlighting__SyntaxHighlighter_Metacast((KSyntaxHighlighting__SyntaxHighlighter*)self, param1);
}

void k_syntaxhighlighting__syntaxhighlighter_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnMetacast((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void* k_syntaxhighlighting__syntaxhighlighter_qbase_metacast(void* self, const char* param1) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseMetacast((KSyntaxHighlighting__SyntaxHighlighter*)self, param1);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSyntaxHighlighting__SyntaxHighlighter_Metacall((KSyntaxHighlighting__SyntaxHighlighter*)self, param1, param2, param3);
}

void k_syntaxhighlighting__syntaxhighlighter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnMetacall((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseMetacall((KSyntaxHighlighting__SyntaxHighlighter*)self, param1, param2, param3);
}

const char* k_syntaxhighlighting__syntaxhighlighter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_syntaxhighlighting__syntaxhighlighter_set_definition(void* self, void* def) {
    KSyntaxHighlighting__SyntaxHighlighter_SetDefinition((KSyntaxHighlighting__SyntaxHighlighter*)self, (KSyntaxHighlighting__Definition*)def);
}

void k_syntaxhighlighting__syntaxhighlighter_on_set_definition(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnSetDefinition((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_set_definition(void* self, void* def) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseSetDefinition((KSyntaxHighlighting__SyntaxHighlighter*)self, (KSyntaxHighlighting__Definition*)def);
}

void k_syntaxhighlighting__syntaxhighlighter_set_theme(void* self, void* theme) {
    KSyntaxHighlighting__SyntaxHighlighter_SetTheme((KSyntaxHighlighting__SyntaxHighlighter*)self, (KSyntaxHighlighting__Theme*)theme);
}

void k_syntaxhighlighting__syntaxhighlighter_on_set_theme(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnSetTheme((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_set_theme(void* self, void* theme) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseSetTheme((KSyntaxHighlighting__SyntaxHighlighter*)self, (KSyntaxHighlighting__Theme*)theme);
}

bool k_syntaxhighlighting__syntaxhighlighter_starts_folding_region(void* self, void* startBlock) {
    return KSyntaxHighlighting__SyntaxHighlighter_StartsFoldingRegion((KSyntaxHighlighting__SyntaxHighlighter*)self, (QTextBlock*)startBlock);
}

QTextBlock* k_syntaxhighlighting__syntaxhighlighter_find_folding_region_end(void* self, void* startBlock) {
    return KSyntaxHighlighting__SyntaxHighlighter_FindFoldingRegionEnd((KSyntaxHighlighting__SyntaxHighlighter*)self, (QTextBlock*)startBlock);
}

void k_syntaxhighlighting__syntaxhighlighter_highlight_block(void* self, const char* text) {
    KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock((KSyntaxHighlighting__SyntaxHighlighter*)self, qstring(text));
}

void k_syntaxhighlighting__syntaxhighlighter_on_highlight_block(void* self, void (*callback)(void*, const char*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnHighlightBlock((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_highlight_block(void* self, const char* text) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseHighlightBlock((KSyntaxHighlighting__SyntaxHighlighter*)self, qstring(text));
}

void k_syntaxhighlighting__syntaxhighlighter_apply_format(void* self, int offset, int length, void* format) {
    KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat((KSyntaxHighlighting__SyntaxHighlighter*)self, offset, length, (KSyntaxHighlighting__Format*)format);
}

void k_syntaxhighlighting__syntaxhighlighter_on_apply_format(void* self, void (*callback)(void*, int, int, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnApplyFormat((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_apply_format(void* self, int offset, int length, void* format) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseApplyFormat((KSyntaxHighlighting__SyntaxHighlighter*)self, offset, length, (KSyntaxHighlighting__Format*)format);
}

void k_syntaxhighlighting__syntaxhighlighter_apply_folding(void* self, int offset, int length, void* region) {
    KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding((KSyntaxHighlighting__SyntaxHighlighter*)self, offset, length, (KSyntaxHighlighting__FoldingRegion*)region);
}

void k_syntaxhighlighting__syntaxhighlighter_on_apply_folding(void* self, void (*callback)(void*, int, int, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnApplyFolding((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_apply_folding(void* self, int offset, int length, void* region) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseApplyFolding((KSyntaxHighlighting__SyntaxHighlighter*)self, offset, length, (KSyntaxHighlighting__FoldingRegion*)region);
}

const char* k_syntaxhighlighting__syntaxhighlighter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_syntaxhighlighting__syntaxhighlighter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_syntaxhighlighting__syntaxhighlighter_set_document(void* self, void* doc) {
    QSyntaxHighlighter_SetDocument((QSyntaxHighlighter*)self, (QTextDocument*)doc);
}

QTextDocument* k_syntaxhighlighting__syntaxhighlighter_document(void* self) {
    return QSyntaxHighlighter_Document((QSyntaxHighlighter*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_rehighlight(void* self) {
    QSyntaxHighlighter_Rehighlight((QSyntaxHighlighter*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_rehighlight_block(void* self, void* block) {
    QSyntaxHighlighter_RehighlightBlock((QSyntaxHighlighter*)self, (QTextBlock*)block);
}

const char* k_syntaxhighlighting__syntaxhighlighter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_syntaxhighlighting__syntaxhighlighter_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_syntaxhighlighting__syntaxhighlighter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_syntaxhighlighting__syntaxhighlighter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_syntaxhighlighting__syntaxhighlighter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_syntaxhighlighting__syntaxhighlighter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_syntaxhighlighting__syntaxhighlighter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_syntaxhighlighting__syntaxhighlighter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_syntaxhighlighting__syntaxhighlighter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_syntaxhighlighting__syntaxhighlighter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_syntaxhighlighting__syntaxhighlighter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_syntaxhighlighting__syntaxhighlighter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_syntaxhighlighting__syntaxhighlighter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_syntaxhighlighting__syntaxhighlighter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_syntaxhighlighting__syntaxhighlighter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_syntaxhighlighting__syntaxhighlighter_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_syntaxhighlighting__syntaxhighlighter_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_syntaxhighlighting__syntaxhighlighter_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_syntaxhighlighting__syntaxhighlighter_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_syntaxhighlighting__syntaxhighlighter_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_syntaxhighlighting__syntaxhighlighter_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_syntaxhighlighting__syntaxhighlighter_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_syntaxhighlighting__syntaxhighlighter_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_syntaxhighlighting__syntaxhighlighter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_syntaxhighlighting__syntaxhighlighter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_syntaxhighlighting__syntaxhighlighter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_syntaxhighlighting__syntaxhighlighter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_syntaxhighlighting__syntaxhighlighter_dynamic_property_names\n");
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

QBindingStorage* k_syntaxhighlighting__syntaxhighlighter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_syntaxhighlighting__syntaxhighlighter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_syntaxhighlighting__syntaxhighlighter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_syntaxhighlighting__syntaxhighlighter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_syntaxhighlighting__syntaxhighlighter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_syntaxhighlighting__syntaxhighlighter_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_syntaxhighlighting__syntaxhighlighter_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_syntaxhighlighting__syntaxhighlighter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_syntaxhighlighting__syntaxhighlighter_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_syntaxhighlighting__syntaxhighlighter_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_syntaxhighlighting__syntaxhighlighter_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_syntaxhighlighting__syntaxhighlighter_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_syntaxhighlighting__syntaxhighlighter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_syntaxhighlighting__syntaxhighlighter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

KSyntaxHighlighting__Definition* k_syntaxhighlighting__syntaxhighlighter_definition(void* self) {
    return KSyntaxHighlighting__AbstractHighlighter_Definition((KSyntaxHighlighting__AbstractHighlighter*)self);
}

KSyntaxHighlighting__Theme* k_syntaxhighlighting__syntaxhighlighter_theme(void* self) {
    return KSyntaxHighlighting__AbstractHighlighter_Theme((KSyntaxHighlighting__AbstractHighlighter*)self);
}

bool k_syntaxhighlighting__syntaxhighlighter_event(void* self, void* event) {
    return KSyntaxHighlighting__SyntaxHighlighter_Event((KSyntaxHighlighting__SyntaxHighlighter*)self, (QEvent*)event);
}

bool k_syntaxhighlighting__syntaxhighlighter_qbase_event(void* self, void* event) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (QEvent*)event);
}

void k_syntaxhighlighting__syntaxhighlighter_on_event(void* self, bool (*callback)(void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

bool k_syntaxhighlighting__syntaxhighlighter_event_filter(void* self, void* watched, void* event) {
    return KSyntaxHighlighting__SyntaxHighlighter_EventFilter((KSyntaxHighlighting__SyntaxHighlighter*)self, (QObject*)watched, (QEvent*)event);
}

bool k_syntaxhighlighting__syntaxhighlighter_qbase_event_filter(void* self, void* watched, void* event) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseEventFilter((KSyntaxHighlighting__SyntaxHighlighter*)self, (QObject*)watched, (QEvent*)event);
}

void k_syntaxhighlighting__syntaxhighlighter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnEventFilter((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_timer_event(void* self, void* event) {
    KSyntaxHighlighting__SyntaxHighlighter_TimerEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (QTimerEvent*)event);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_timer_event(void* self, void* event) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseTimerEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (QTimerEvent*)event);
}

void k_syntaxhighlighting__syntaxhighlighter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnTimerEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_child_event(void* self, void* event) {
    KSyntaxHighlighting__SyntaxHighlighter_ChildEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (QChildEvent*)event);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_child_event(void* self, void* event) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseChildEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (QChildEvent*)event);
}

void k_syntaxhighlighting__syntaxhighlighter_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnChildEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_custom_event(void* self, void* event) {
    KSyntaxHighlighting__SyntaxHighlighter_CustomEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (QEvent*)event);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_custom_event(void* self, void* event) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseCustomEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (QEvent*)event);
}

void k_syntaxhighlighting__syntaxhighlighter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnCustomEvent((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_connect_notify(void* self, void* signal) {
    KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify((KSyntaxHighlighting__SyntaxHighlighter*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_connect_notify(void* self, void* signal) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseConnectNotify((KSyntaxHighlighting__SyntaxHighlighter*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__syntaxhighlighter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnConnectNotify((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_disconnect_notify(void* self, void* signal) {
    KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify((KSyntaxHighlighting__SyntaxHighlighter*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_disconnect_notify(void* self, void* signal) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseDisconnectNotify((KSyntaxHighlighting__SyntaxHighlighter*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__syntaxhighlighter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnDisconnectNotify((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_set_format(void* self, int start, int count, void* format) {
    KSyntaxHighlighting__SyntaxHighlighter_SetFormat((KSyntaxHighlighting__SyntaxHighlighter*)self, start, count, (QTextCharFormat*)format);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_set_format(void* self, int start, int count, void* format) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseSetFormat((KSyntaxHighlighting__SyntaxHighlighter*)self, start, count, (QTextCharFormat*)format);
}

void k_syntaxhighlighting__syntaxhighlighter_on_set_format(void* self, void (*callback)(void*, int, int, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnSetFormat((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

QTextCharFormat* k_syntaxhighlighting__syntaxhighlighter_format(void* self, int pos) {
    return KSyntaxHighlighting__SyntaxHighlighter_Format((KSyntaxHighlighting__SyntaxHighlighter*)self, pos);
}

QTextCharFormat* k_syntaxhighlighting__syntaxhighlighter_qbase_format(void* self, int pos) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseFormat((KSyntaxHighlighting__SyntaxHighlighter*)self, pos);
}

void k_syntaxhighlighting__syntaxhighlighter_on_format(void* self, QTextCharFormat* (*callback)(void*, int)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnFormat((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_previous_block_state(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_qbase_previous_block_state(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBasePreviousBlockState((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_on_previous_block_state(void* self, int32_t (*callback)()) {
    KSyntaxHighlighting__SyntaxHighlighter_OnPreviousBlockState((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_current_block_state(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_qbase_current_block_state(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseCurrentBlockState((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_on_current_block_state(void* self, int32_t (*callback)()) {
    KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlockState((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_set_current_block_state(void* self, int newState) {
    KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState((KSyntaxHighlighting__SyntaxHighlighter*)self, newState);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_set_current_block_state(void* self, int newState) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseSetCurrentBlockState((KSyntaxHighlighting__SyntaxHighlighter*)self, newState);
}

void k_syntaxhighlighting__syntaxhighlighter_on_set_current_block_state(void* self, void (*callback)(void*, int)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnSetCurrentBlockState((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_set_current_block_user_data(void* self, void* data) {
    KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData((KSyntaxHighlighting__SyntaxHighlighter*)self, (QTextBlockUserData*)data);
}

void k_syntaxhighlighting__syntaxhighlighter_qbase_set_current_block_user_data(void* self, void* data) {
    KSyntaxHighlighting__SyntaxHighlighter_QBaseSetCurrentBlockUserData((KSyntaxHighlighting__SyntaxHighlighter*)self, (QTextBlockUserData*)data);
}

void k_syntaxhighlighting__syntaxhighlighter_on_set_current_block_user_data(void* self, void (*callback)(void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnSetCurrentBlockUserData((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

QTextBlockUserData* k_syntaxhighlighting__syntaxhighlighter_current_block_user_data(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

QTextBlockUserData* k_syntaxhighlighting__syntaxhighlighter_qbase_current_block_user_data(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseCurrentBlockUserData((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*callback)()) {
    KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlockUserData((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

QTextBlock* k_syntaxhighlighting__syntaxhighlighter_current_block(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

QTextBlock* k_syntaxhighlighting__syntaxhighlighter_qbase_current_block(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseCurrentBlock((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_on_current_block(void* self, QTextBlock* (*callback)()) {
    KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlock((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

QObject* k_syntaxhighlighting__syntaxhighlighter_sender(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_Sender((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

QObject* k_syntaxhighlighting__syntaxhighlighter_qbase_sender(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseSender((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_on_sender(void* self, QObject* (*callback)()) {
    KSyntaxHighlighting__SyntaxHighlighter_OnSender((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_sender_signal_index(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_qbase_sender_signal_index(void* self) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseSenderSignalIndex((KSyntaxHighlighting__SyntaxHighlighter*)self);
}

void k_syntaxhighlighting__syntaxhighlighter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSyntaxHighlighting__SyntaxHighlighter_OnSenderSignalIndex((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_receivers(void* self, const char* signal) {
    return KSyntaxHighlighting__SyntaxHighlighter_Receivers((KSyntaxHighlighting__SyntaxHighlighter*)self, signal);
}

int32_t k_syntaxhighlighting__syntaxhighlighter_qbase_receivers(void* self, const char* signal) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseReceivers((KSyntaxHighlighting__SyntaxHighlighter*)self, signal);
}

void k_syntaxhighlighting__syntaxhighlighter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnReceivers((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

bool k_syntaxhighlighting__syntaxhighlighter_is_signal_connected(void* self, void* signal) {
    return KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected((KSyntaxHighlighting__SyntaxHighlighter*)self, (QMetaMethod*)signal);
}

bool k_syntaxhighlighting__syntaxhighlighter_qbase_is_signal_connected(void* self, void* signal) {
    return KSyntaxHighlighting__SyntaxHighlighter_QBaseIsSignalConnected((KSyntaxHighlighting__SyntaxHighlighter*)self, (QMetaMethod*)signal);
}

void k_syntaxhighlighting__syntaxhighlighter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSyntaxHighlighting__SyntaxHighlighter_OnIsSignalConnected((KSyntaxHighlighting__SyntaxHighlighter*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_syntaxhighlighting__syntaxhighlighter_delete(void* self) {
    KSyntaxHighlighting__SyntaxHighlighter_Delete((KSyntaxHighlighting__SyntaxHighlighter*)(self));
}
