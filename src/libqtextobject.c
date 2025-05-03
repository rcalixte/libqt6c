#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqglyphrun.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqtextformat.hpp"
#include "libqtextcursor.hpp"
#include "libqtextdocument.hpp"
#include "libqtextlayout.hpp"
#include "libqtextlist.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqtextobject.hpp"
#include "libqtextobject.h"

QMetaObject* q_textobject_meta_object(void* self) {
    return QTextObject_MetaObject((QTextObject*)self);
}

void* q_textobject_metacast(void* self, const char* param1) {
    return QTextObject_Metacast((QTextObject*)self, param1);
}

int32_t q_textobject_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextObject_Metacall((QTextObject*)self, param1, param2, param3);
}

const char* q_textobject_tr(const char* s) {
    libqt_string _str = QTextObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTextFormat* q_textobject_format(void* self) {
    return QTextObject_Format((QTextObject*)self);
}

int32_t q_textobject_format_index(void* self) {
    return QTextObject_FormatIndex((QTextObject*)self);
}

QTextDocument* q_textobject_document(void* self) {
    return QTextObject_Document((QTextObject*)self);
}

int32_t q_textobject_object_index(void* self) {
    return QTextObject_ObjectIndex((QTextObject*)self);
}

const char* q_textobject_tr2(const char* s, const char* c) {
    libqt_string _str = QTextObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textobject_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_textobject_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_textobject_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_textobject_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textobject_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_textobject_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_textobject_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_textobject_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_textobject_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_textobject_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_textobject_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_textobject_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_textobject_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_textobject_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_textobject_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_textobject_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_textobject_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_textobject_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_textobject_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_textobject_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_textobject_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_textobject_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_textobject_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_textobject_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_textobject_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_textobject_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_textobject_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_textobject_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_textobject_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_textobject_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_textobject_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_textobject_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_textobject_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_textobject_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_textobject_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_textobject_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_textobject_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_textobject_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_textobject_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

QMetaObject* q_textblockgroup_meta_object(void* self) {
    return QTextBlockGroup_MetaObject((QTextBlockGroup*)self);
}

void* q_textblockgroup_metacast(void* self, const char* param1) {
    return QTextBlockGroup_Metacast((QTextBlockGroup*)self, param1);
}

int32_t q_textblockgroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextBlockGroup_Metacall((QTextBlockGroup*)self, param1, param2, param3);
}

const char* q_textblockgroup_tr(const char* s) {
    libqt_string _str = QTextBlockGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textblockgroup_tr2(const char* s, const char* c) {
    libqt_string _str = QTextBlockGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textblockgroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextBlockGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTextFormat* q_textblockgroup_format(void* self) {
    return QTextObject_Format((QTextObject*)self);
}

int32_t q_textblockgroup_format_index(void* self) {
    return QTextObject_FormatIndex((QTextObject*)self);
}

QTextDocument* q_textblockgroup_document(void* self) {
    return QTextObject_Document((QTextObject*)self);
}

int32_t q_textblockgroup_object_index(void* self) {
    return QTextObject_ObjectIndex((QTextObject*)self);
}

bool q_textblockgroup_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_textblockgroup_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_textblockgroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textblockgroup_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_textblockgroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_textblockgroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_textblockgroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_textblockgroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_textblockgroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_textblockgroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_textblockgroup_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_textblockgroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_textblockgroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_textblockgroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_textblockgroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_textblockgroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_textblockgroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_textblockgroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_textblockgroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_textblockgroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_textblockgroup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_textblockgroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_textblockgroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_textblockgroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_textblockgroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_textblockgroup_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_textblockgroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_textblockgroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_textblockgroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_textblockgroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_textblockgroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_textblockgroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_textblockgroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_textblockgroup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_textblockgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_textblockgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_textblockgroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_textblockgroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_textframelayoutdata_operator_assign(void* self, void* param1) {
    QTextFrameLayoutData_OperatorAssign((QTextFrameLayoutData*)self, (QTextFrameLayoutData*)param1);
}

void q_textframelayoutdata_delete(void* self) {
    QTextFrameLayoutData_Delete((QTextFrameLayoutData*)(self));
}

QTextFrame* q_textframe_new(void* doc) {
    return QTextFrame_new((QTextDocument*)doc);
}

QMetaObject* q_textframe_meta_object(void* self) {
    return QTextFrame_MetaObject((QTextFrame*)self);
}

void* q_textframe_metacast(void* self, const char* param1) {
    return QTextFrame_Metacast((QTextFrame*)self, param1);
}

int32_t q_textframe_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextFrame_Metacall((QTextFrame*)self, param1, param2, param3);
}

void q_textframe_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTextFrame_OnMetacall((QTextFrame*)self, (intptr_t)slot);
}

int32_t q_textframe_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextFrame_QBaseMetacall((QTextFrame*)self, param1, param2, param3);
}

const char* q_textframe_tr(const char* s) {
    libqt_string _str = QTextFrame_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textframe_set_frame_format(void* self, void* format) {
    QTextFrame_SetFrameFormat((QTextFrame*)self, (QTextFrameFormat*)format);
}

QTextFrameFormat* q_textframe_frame_format(void* self) {
    return QTextFrame_FrameFormat((QTextFrame*)self);
}

QTextCursor* q_textframe_first_cursor_position(void* self) {
    return QTextFrame_FirstCursorPosition((QTextFrame*)self);
}

QTextCursor* q_textframe_last_cursor_position(void* self) {
    return QTextFrame_LastCursorPosition((QTextFrame*)self);
}

int32_t q_textframe_first_position(void* self) {
    return QTextFrame_FirstPosition((QTextFrame*)self);
}

int32_t q_textframe_last_position(void* self) {
    return QTextFrame_LastPosition((QTextFrame*)self);
}

QTextFrameLayoutData* q_textframe_layout_data(void* self) {
    return QTextFrame_LayoutData((QTextFrame*)self);
}

void q_textframe_set_layout_data(void* self, void* data) {
    QTextFrame_SetLayoutData((QTextFrame*)self, (QTextFrameLayoutData*)data);
}

libqt_list /* of QTextFrame* */ q_textframe_child_frames(void* self) {
    libqt_list _arr = QTextFrame_ChildFrames((QTextFrame*)self);
    return _arr;
}

QTextFrame* q_textframe_parent_frame(void* self) {
    return QTextFrame_ParentFrame((QTextFrame*)self);
}

QTextFrame__iterator* q_textframe_begin(void* self) {
    return QTextFrame_Begin((QTextFrame*)self);
}

QTextFrame__iterator* q_textframe_end(void* self) {
    return QTextFrame_End((QTextFrame*)self);
}

const char* q_textframe_tr2(const char* s, const char* c) {
    libqt_string _str = QTextFrame_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textframe_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextFrame_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTextFormat* q_textframe_format(void* self) {
    return QTextObject_Format((QTextObject*)self);
}

int32_t q_textframe_format_index(void* self) {
    return QTextObject_FormatIndex((QTextObject*)self);
}

QTextDocument* q_textframe_document(void* self) {
    return QTextObject_Document((QTextObject*)self);
}

int32_t q_textframe_object_index(void* self) {
    return QTextObject_ObjectIndex((QTextObject*)self);
}

const char* q_textframe_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textframe_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_textframe_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_textframe_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_textframe_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_textframe_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_textframe_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_textframe_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_textframe_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_textframe_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_textframe_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_textframe_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_textframe_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_textframe_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_textframe_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_textframe_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_textframe_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_textframe_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_textframe_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_textframe_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_textframe_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_textframe_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_textframe_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_textframe_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_textframe_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_textframe_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_textframe_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_textframe_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_textframe_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_textframe_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_textframe_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_textframe_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_textframe_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_textframe_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_textframe_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_textframe_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_textframe_event(void* self, void* event) {
    return QTextFrame_Event((QTextFrame*)self, (QEvent*)event);
}

bool q_textframe_qbase_event(void* self, void* event) {
    return QTextFrame_QBaseEvent((QTextFrame*)self, (QEvent*)event);
}

void q_textframe_on_event(void* self, bool (*slot)(void*, void*)) {
    QTextFrame_OnEvent((QTextFrame*)self, (intptr_t)slot);
}

bool q_textframe_event_filter(void* self, void* watched, void* event) {
    return QTextFrame_EventFilter((QTextFrame*)self, (QObject*)watched, (QEvent*)event);
}

bool q_textframe_qbase_event_filter(void* self, void* watched, void* event) {
    return QTextFrame_QBaseEventFilter((QTextFrame*)self, (QObject*)watched, (QEvent*)event);
}

void q_textframe_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTextFrame_OnEventFilter((QTextFrame*)self, (intptr_t)slot);
}

void q_textframe_timer_event(void* self, void* event) {
    QTextFrame_TimerEvent((QTextFrame*)self, (QTimerEvent*)event);
}

void q_textframe_qbase_timer_event(void* self, void* event) {
    QTextFrame_QBaseTimerEvent((QTextFrame*)self, (QTimerEvent*)event);
}

void q_textframe_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTextFrame_OnTimerEvent((QTextFrame*)self, (intptr_t)slot);
}

void q_textframe_child_event(void* self, void* event) {
    QTextFrame_ChildEvent((QTextFrame*)self, (QChildEvent*)event);
}

void q_textframe_qbase_child_event(void* self, void* event) {
    QTextFrame_QBaseChildEvent((QTextFrame*)self, (QChildEvent*)event);
}

void q_textframe_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTextFrame_OnChildEvent((QTextFrame*)self, (intptr_t)slot);
}

void q_textframe_custom_event(void* self, void* event) {
    QTextFrame_CustomEvent((QTextFrame*)self, (QEvent*)event);
}

void q_textframe_qbase_custom_event(void* self, void* event) {
    QTextFrame_QBaseCustomEvent((QTextFrame*)self, (QEvent*)event);
}

void q_textframe_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTextFrame_OnCustomEvent((QTextFrame*)self, (intptr_t)slot);
}

void q_textframe_connect_notify(void* self, void* signal) {
    QTextFrame_ConnectNotify((QTextFrame*)self, (QMetaMethod*)signal);
}

void q_textframe_qbase_connect_notify(void* self, void* signal) {
    QTextFrame_QBaseConnectNotify((QTextFrame*)self, (QMetaMethod*)signal);
}

void q_textframe_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTextFrame_OnConnectNotify((QTextFrame*)self, (intptr_t)slot);
}

void q_textframe_disconnect_notify(void* self, void* signal) {
    QTextFrame_DisconnectNotify((QTextFrame*)self, (QMetaMethod*)signal);
}

void q_textframe_qbase_disconnect_notify(void* self, void* signal) {
    QTextFrame_QBaseDisconnectNotify((QTextFrame*)self, (QMetaMethod*)signal);
}

void q_textframe_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTextFrame_OnDisconnectNotify((QTextFrame*)self, (intptr_t)slot);
}

void q_textframe_set_format(void* self, void* format) {
    QTextFrame_SetFormat((QTextFrame*)self, (QTextFormat*)format);
}

void q_textframe_qbase_set_format(void* self, void* format) {
    QTextFrame_QBaseSetFormat((QTextFrame*)self, (QTextFormat*)format);
}

void q_textframe_on_set_format(void* self, void (*slot)(void*, void*)) {
    QTextFrame_OnSetFormat((QTextFrame*)self, (intptr_t)slot);
}

QObject* q_textframe_sender(void* self) {
    return QTextFrame_Sender((QTextFrame*)self);
}

QObject* q_textframe_qbase_sender(void* self) {
    return QTextFrame_QBaseSender((QTextFrame*)self);
}

void q_textframe_on_sender(void* self, QObject* (*slot)()) {
    QTextFrame_OnSender((QTextFrame*)self, (intptr_t)slot);
}

int32_t q_textframe_sender_signal_index(void* self) {
    return QTextFrame_SenderSignalIndex((QTextFrame*)self);
}

int32_t q_textframe_qbase_sender_signal_index(void* self) {
    return QTextFrame_QBaseSenderSignalIndex((QTextFrame*)self);
}

void q_textframe_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTextFrame_OnSenderSignalIndex((QTextFrame*)self, (intptr_t)slot);
}

int32_t q_textframe_receivers(void* self, const char* signal) {
    return QTextFrame_Receivers((QTextFrame*)self, signal);
}

int32_t q_textframe_qbase_receivers(void* self, const char* signal) {
    return QTextFrame_QBaseReceivers((QTextFrame*)self, signal);
}

void q_textframe_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTextFrame_OnReceivers((QTextFrame*)self, (intptr_t)slot);
}

bool q_textframe_is_signal_connected(void* self, void* signal) {
    return QTextFrame_IsSignalConnected((QTextFrame*)self, (QMetaMethod*)signal);
}

bool q_textframe_qbase_is_signal_connected(void* self, void* signal) {
    return QTextFrame_QBaseIsSignalConnected((QTextFrame*)self, (QMetaMethod*)signal);
}

void q_textframe_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTextFrame_OnIsSignalConnected((QTextFrame*)self, (intptr_t)slot);
}

void q_textframe_delete(void* self) {
    QTextFrame_Delete((QTextFrame*)(self));
}

void q_textblockuserdata_operator_assign(void* self, void* param1) {
    QTextBlockUserData_OperatorAssign((QTextBlockUserData*)self, (QTextBlockUserData*)param1);
}

void q_textblockuserdata_delete(void* self) {
    QTextBlockUserData_Delete((QTextBlockUserData*)(self));
}

QTextBlock* q_textblock_new() {
    return QTextBlock_new();
}

QTextBlock* q_textblock_new2(void* o) {
    return QTextBlock_new2((QTextBlock*)o);
}

void q_textblock_operator_assign(void* self, void* o) {
    QTextBlock_OperatorAssign((QTextBlock*)self, (QTextBlock*)o);
}

bool q_textblock_is_valid(void* self) {
    return QTextBlock_IsValid((QTextBlock*)self);
}

bool q_textblock_operator_equal(void* self, void* o) {
    return QTextBlock_OperatorEqual((QTextBlock*)self, (QTextBlock*)o);
}

bool q_textblock_operator_not_equal(void* self, void* o) {
    return QTextBlock_OperatorNotEqual((QTextBlock*)self, (QTextBlock*)o);
}

bool q_textblock_operator_lesser(void* self, void* o) {
    return QTextBlock_OperatorLesser((QTextBlock*)self, (QTextBlock*)o);
}

int32_t q_textblock_position(void* self) {
    return QTextBlock_Position((QTextBlock*)self);
}

int32_t q_textblock_length(void* self) {
    return QTextBlock_Length((QTextBlock*)self);
}

bool q_textblock_contains(void* self, int position) {
    return QTextBlock_Contains((QTextBlock*)self, position);
}

QTextLayout* q_textblock_layout(void* self) {
    return QTextBlock_Layout((QTextBlock*)self);
}

void q_textblock_clear_layout(void* self) {
    QTextBlock_ClearLayout((QTextBlock*)self);
}

QTextBlockFormat* q_textblock_block_format(void* self) {
    return QTextBlock_BlockFormat((QTextBlock*)self);
}

int32_t q_textblock_block_format_index(void* self) {
    return QTextBlock_BlockFormatIndex((QTextBlock*)self);
}

QTextCharFormat* q_textblock_char_format(void* self) {
    return QTextBlock_CharFormat((QTextBlock*)self);
}

int32_t q_textblock_char_format_index(void* self) {
    return QTextBlock_CharFormatIndex((QTextBlock*)self);
}

int64_t q_textblock_text_direction(void* self) {
    return QTextBlock_TextDirection((QTextBlock*)self);
}

const char* q_textblock_text(void* self) {
    libqt_string _str = QTextBlock_Text((QTextBlock*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QTextLayout__FormatRange* */ q_textblock_text_formats(void* self) {
    libqt_list _arr = QTextBlock_TextFormats((QTextBlock*)self);
    return _arr;
}

QTextDocument* q_textblock_document(void* self) {
    return QTextBlock_Document((QTextBlock*)self);
}

QTextList* q_textblock_text_list(void* self) {
    return QTextBlock_TextList((QTextBlock*)self);
}

QTextBlockUserData* q_textblock_user_data(void* self) {
    return QTextBlock_UserData((QTextBlock*)self);
}

void q_textblock_set_user_data(void* self, void* data) {
    QTextBlock_SetUserData((QTextBlock*)self, (QTextBlockUserData*)data);
}

int32_t q_textblock_user_state(void* self) {
    return QTextBlock_UserState((QTextBlock*)self);
}

void q_textblock_set_user_state(void* self, int state) {
    QTextBlock_SetUserState((QTextBlock*)self, state);
}

int32_t q_textblock_revision(void* self) {
    return QTextBlock_Revision((QTextBlock*)self);
}

void q_textblock_set_revision(void* self, int rev) {
    QTextBlock_SetRevision((QTextBlock*)self, rev);
}

bool q_textblock_is_visible(void* self) {
    return QTextBlock_IsVisible((QTextBlock*)self);
}

void q_textblock_set_visible(void* self, bool visible) {
    QTextBlock_SetVisible((QTextBlock*)self, visible);
}

int32_t q_textblock_block_number(void* self) {
    return QTextBlock_BlockNumber((QTextBlock*)self);
}

int32_t q_textblock_first_line_number(void* self) {
    return QTextBlock_FirstLineNumber((QTextBlock*)self);
}

void q_textblock_set_line_count(void* self, int count) {
    QTextBlock_SetLineCount((QTextBlock*)self, count);
}

int32_t q_textblock_line_count(void* self) {
    return QTextBlock_LineCount((QTextBlock*)self);
}

QTextBlock__iterator* q_textblock_begin(void* self) {
    return QTextBlock_Begin((QTextBlock*)self);
}

QTextBlock__iterator* q_textblock_end(void* self) {
    return QTextBlock_End((QTextBlock*)self);
}

QTextBlock* q_textblock_next(void* self) {
    return QTextBlock_Next((QTextBlock*)self);
}

QTextBlock* q_textblock_previous(void* self) {
    return QTextBlock_Previous((QTextBlock*)self);
}

int32_t q_textblock_fragment_index(void* self) {
    return QTextBlock_FragmentIndex((QTextBlock*)self);
}

void q_textblock_delete(void* self) {
    QTextBlock_Delete((QTextBlock*)(self));
}

QTextFragment* q_textfragment_new() {
    return QTextFragment_new();
}

QTextFragment* q_textfragment_new2(void* o) {
    return QTextFragment_new2((QTextFragment*)o);
}

void q_textfragment_operator_assign(void* self, void* o) {
    QTextFragment_OperatorAssign((QTextFragment*)self, (QTextFragment*)o);
}

bool q_textfragment_is_valid(void* self) {
    return QTextFragment_IsValid((QTextFragment*)self);
}

bool q_textfragment_operator_equal(void* self, void* o) {
    return QTextFragment_OperatorEqual((QTextFragment*)self, (QTextFragment*)o);
}

bool q_textfragment_operator_not_equal(void* self, void* o) {
    return QTextFragment_OperatorNotEqual((QTextFragment*)self, (QTextFragment*)o);
}

bool q_textfragment_operator_lesser(void* self, void* o) {
    return QTextFragment_OperatorLesser((QTextFragment*)self, (QTextFragment*)o);
}

int32_t q_textfragment_position(void* self) {
    return QTextFragment_Position((QTextFragment*)self);
}

int32_t q_textfragment_length(void* self) {
    return QTextFragment_Length((QTextFragment*)self);
}

bool q_textfragment_contains(void* self, int position) {
    return QTextFragment_Contains((QTextFragment*)self, position);
}

QTextCharFormat* q_textfragment_char_format(void* self) {
    return QTextFragment_CharFormat((QTextFragment*)self);
}

int32_t q_textfragment_char_format_index(void* self) {
    return QTextFragment_CharFormatIndex((QTextFragment*)self);
}

const char* q_textfragment_text(void* self) {
    libqt_string _str = QTextFragment_Text((QTextFragment*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QGlyphRun* */ q_textfragment_glyph_runs(void* self) {
    libqt_list _arr = QTextFragment_GlyphRuns((QTextFragment*)self);
    return _arr;
}

libqt_list /* of QGlyphRun* */ q_textfragment_glyph_runs1(void* self, int from) {
    libqt_list _arr = QTextFragment_GlyphRuns1((QTextFragment*)self, from);
    return _arr;
}

libqt_list /* of QGlyphRun* */ q_textfragment_glyph_runs2(void* self, int from, int length) {
    libqt_list _arr = QTextFragment_GlyphRuns2((QTextFragment*)self, from, length);
    return _arr;
}

void q_textfragment_delete(void* self) {
    QTextFragment_Delete((QTextFragment*)(self));
}

QTextFrame__iterator* q_textframe__iterator_new(void* other) {
    return QTextFrame__iterator_new((QTextFrame__iterator*)other);
}

QTextFrame__iterator* q_textframe__iterator_new2(void* other) {
    return QTextFrame__iterator_new2((QTextFrame__iterator*)other);
}

QTextFrame__iterator* q_textframe__iterator_new3() {
    return QTextFrame__iterator_new3();
}

QTextFrame__iterator* q_textframe__iterator_new4(void* param1) {
    return QTextFrame__iterator_new4((QTextFrame__iterator*)param1);
}

void q_textframe__iterator_copy_assign(void* self, void* other) {
    QTextFrame__iterator_CopyAssign((QTextFrame__iterator*)self, (QTextFrame__iterator*)other);
}

void q_textframe__iterator_move_assign(void* self, void* other) {
    QTextFrame__iterator_MoveAssign((QTextFrame__iterator*)self, (QTextFrame__iterator*)other);
}

QTextFrame* q_textframe__iterator_parent_frame(void* self) {
    return QTextFrame__iterator_ParentFrame((QTextFrame__iterator*)self);
}

QTextFrame* q_textframe__iterator_current_frame(void* self) {
    return QTextFrame__iterator_CurrentFrame((QTextFrame__iterator*)self);
}

QTextBlock* q_textframe__iterator_current_block(void* self) {
    return QTextFrame__iterator_CurrentBlock((QTextFrame__iterator*)self);
}

bool q_textframe__iterator_at_end(void* self) {
    return QTextFrame__iterator_AtEnd((QTextFrame__iterator*)self);
}

bool q_textframe__iterator_operator_equal(void* self, void* o) {
    return QTextFrame__iterator_OperatorEqual((QTextFrame__iterator*)self, (QTextFrame__iterator*)o);
}

bool q_textframe__iterator_operator_not_equal(void* self, void* o) {
    return QTextFrame__iterator_OperatorNotEqual((QTextFrame__iterator*)self, (QTextFrame__iterator*)o);
}

QTextFrame__iterator* q_textframe__iterator_operator_plus_plus(void* self) {
    return QTextFrame__iterator_OperatorPlusPlus((QTextFrame__iterator*)self);
}

QTextFrame__iterator* q_textframe__iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QTextFrame__iterator_OperatorPlusPlusWithInt((QTextFrame__iterator*)self, param1);
}

QTextFrame__iterator* q_textframe__iterator_operator_minus_minus(void* self) {
    return QTextFrame__iterator_OperatorMinusMinus((QTextFrame__iterator*)self);
}

QTextFrame__iterator* q_textframe__iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QTextFrame__iterator_OperatorMinusMinusWithInt((QTextFrame__iterator*)self, param1);
}

void q_textframe__iterator_delete(void* self) {
    QTextFrame__iterator_Delete((QTextFrame__iterator*)(self));
}

QTextBlock__iterator* q_textblock__iterator_new(void* other) {
    return QTextBlock__iterator_new((QTextBlock__iterator*)other);
}

QTextBlock__iterator* q_textblock__iterator_new2(void* other) {
    return QTextBlock__iterator_new2((QTextBlock__iterator*)other);
}

QTextBlock__iterator* q_textblock__iterator_new3() {
    return QTextBlock__iterator_new3();
}

QTextBlock__iterator* q_textblock__iterator_new4(void* param1) {
    return QTextBlock__iterator_new4((QTextBlock__iterator*)param1);
}

void q_textblock__iterator_copy_assign(void* self, void* other) {
    QTextBlock__iterator_CopyAssign((QTextBlock__iterator*)self, (QTextBlock__iterator*)other);
}

void q_textblock__iterator_move_assign(void* self, void* other) {
    QTextBlock__iterator_MoveAssign((QTextBlock__iterator*)self, (QTextBlock__iterator*)other);
}

QTextFragment* q_textblock__iterator_fragment(void* self) {
    return QTextBlock__iterator_Fragment((QTextBlock__iterator*)self);
}

bool q_textblock__iterator_at_end(void* self) {
    return QTextBlock__iterator_AtEnd((QTextBlock__iterator*)self);
}

bool q_textblock__iterator_operator_equal(void* self, void* o) {
    return QTextBlock__iterator_OperatorEqual((QTextBlock__iterator*)self, (QTextBlock__iterator*)o);
}

bool q_textblock__iterator_operator_not_equal(void* self, void* o) {
    return QTextBlock__iterator_OperatorNotEqual((QTextBlock__iterator*)self, (QTextBlock__iterator*)o);
}

QTextBlock__iterator* q_textblock__iterator_operator_plus_plus(void* self) {
    return QTextBlock__iterator_OperatorPlusPlus((QTextBlock__iterator*)self);
}

QTextBlock__iterator* q_textblock__iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QTextBlock__iterator_OperatorPlusPlusWithInt((QTextBlock__iterator*)self, param1);
}

QTextBlock__iterator* q_textblock__iterator_operator_minus_minus(void* self) {
    return QTextBlock__iterator_OperatorMinusMinus((QTextBlock__iterator*)self);
}

QTextBlock__iterator* q_textblock__iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QTextBlock__iterator_OperatorMinusMinusWithInt((QTextBlock__iterator*)self, param1);
}

void q_textblock__iterator_delete(void* self) {
    QTextBlock__iterator_Delete((QTextBlock__iterator*)(self));
}
