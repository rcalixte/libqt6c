#include "../libqcoreevent.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "libEmulation.hpp"
#include "libEmulation.h"

Konsole__Emulation* k_onsole__emulation_new() {
    return Konsole__Emulation_new();
}

const QMetaObject* k_onsole__emulation_meta_object(void* self) {
    return Konsole__Emulation_MetaObject((Konsole__Emulation*)self);
}

void* k_onsole__emulation_metacast(void* self, const char* param1) {
    return Konsole__Emulation_Metacast((Konsole__Emulation*)self, param1);
}

int32_t k_onsole__emulation_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Konsole__Emulation_Metacall((Konsole__Emulation*)self, param1, param2, param3);
}

void k_onsole__emulation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Konsole__Emulation_OnMetacall((Konsole__Emulation*)self, (intptr_t)callback);
}

int32_t k_onsole__emulation_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Konsole__Emulation_QBaseMetacall((Konsole__Emulation*)self, param1, param2, param3);
}

const char* k_onsole__emulation_tr(const char* s) {
    libqt_string _str = Konsole__Emulation_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* k_onsole__emulation_image_size(void* self) {
    return Konsole__Emulation_ImageSize((Konsole__Emulation*)self);
}

int32_t k_onsole__emulation_line_count(void* self) {
    return Konsole__Emulation_LineCount((Konsole__Emulation*)self);
}

void k_onsole__emulation_clear_history(void* self) {
    Konsole__Emulation_ClearHistory((Konsole__Emulation*)self);
}

char k_onsole__emulation_erase_char(void* self) {
    return Konsole__Emulation_EraseChar((Konsole__Emulation*)self);
}

void k_onsole__emulation_on_erase_char(void* self, char (*callback)()) {
    Konsole__Emulation_OnEraseChar((Konsole__Emulation*)self, (intptr_t)callback);
}

char k_onsole__emulation_qbase_erase_char(void* self) {
    return Konsole__Emulation_QBaseEraseChar((Konsole__Emulation*)self);
}

void k_onsole__emulation_set_key_bindings(void* self, const char* name) {
    Konsole__Emulation_SetKeyBindings((Konsole__Emulation*)self, qstring(name));
}

const char* k_onsole__emulation_key_bindings(void* self) {
    libqt_string _str = Konsole__Emulation_KeyBindings((Konsole__Emulation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__emulation_clear_entire_screen(void* self) {
    Konsole__Emulation_ClearEntireScreen((Konsole__Emulation*)self);
}

void k_onsole__emulation_on_clear_entire_screen(void* self, void (*callback)()) {
    Konsole__Emulation_OnClearEntireScreen((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_clear_entire_screen(void* self) {
    Konsole__Emulation_QBaseClearEntireScreen((Konsole__Emulation*)self);
}

void k_onsole__emulation_reset(void* self) {
    Konsole__Emulation_Reset((Konsole__Emulation*)self);
}

void k_onsole__emulation_on_reset(void* self, void (*callback)()) {
    Konsole__Emulation_OnReset((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_reset(void* self) {
    Konsole__Emulation_QBaseReset((Konsole__Emulation*)self);
}

bool k_onsole__emulation_program_uses_mouse(void* self) {
    return Konsole__Emulation_ProgramUsesMouse((Konsole__Emulation*)self);
}

bool k_onsole__emulation_program_bracketed_paste_mode(void* self) {
    return Konsole__Emulation_ProgramBracketedPasteMode((Konsole__Emulation*)self);
}

void k_onsole__emulation_set_image_size(void* self, int lines, int columns) {
    Konsole__Emulation_SetImageSize((Konsole__Emulation*)self, lines, columns);
}

void k_onsole__emulation_on_set_image_size(void* self, void (*callback)(void*, int, int)) {
    Konsole__Emulation_OnSetImageSize((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_set_image_size(void* self, int lines, int columns) {
    Konsole__Emulation_QBaseSetImageSize((Konsole__Emulation*)self, lines, columns);
}

void k_onsole__emulation_send_text(void* self, const char* text) {
    Konsole__Emulation_SendText((Konsole__Emulation*)self, qstring(text));
}

void k_onsole__emulation_on_send_text(void* self, void (*callback)(void*, const char*)) {
    Konsole__Emulation_OnSendText((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_send_text(void* self, const char* text) {
    Konsole__Emulation_QBaseSendText((Konsole__Emulation*)self, qstring(text));
}

void k_onsole__emulation_send_key_event(void* self, void* param1, bool fromPaste) {
    Konsole__Emulation_SendKeyEvent((Konsole__Emulation*)self, (QKeyEvent*)param1, fromPaste);
}

void k_onsole__emulation_on_send_key_event(void* self, void (*callback)(void*, void*, bool)) {
    Konsole__Emulation_OnSendKeyEvent((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_send_key_event(void* self, void* param1, bool fromPaste) {
    Konsole__Emulation_QBaseSendKeyEvent((Konsole__Emulation*)self, (QKeyEvent*)param1, fromPaste);
}

void k_onsole__emulation_send_mouse_event(void* self, int buttons, int column, int line, int eventType) {
    Konsole__Emulation_SendMouseEvent((Konsole__Emulation*)self, buttons, column, line, eventType);
}

void k_onsole__emulation_on_send_mouse_event(void* self, void (*callback)(void*, int, int, int, int)) {
    Konsole__Emulation_OnSendMouseEvent((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_send_mouse_event(void* self, int buttons, int column, int line, int eventType) {
    Konsole__Emulation_QBaseSendMouseEvent((Konsole__Emulation*)self, buttons, column, line, eventType);
}

void k_onsole__emulation_send_string(void* self, const char* stringVal, int length) {
    Konsole__Emulation_SendString((Konsole__Emulation*)self, stringVal, length);
}

void k_onsole__emulation_on_send_string(void* self, void (*callback)(void*, const char*, int)) {
    Konsole__Emulation_OnSendString((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_send_string(void* self, const char* stringVal, int length) {
    Konsole__Emulation_QBaseSendString((Konsole__Emulation*)self, stringVal, length);
}

void k_onsole__emulation_receive_data(void* self, const char* buffer, int lenVal) {
    Konsole__Emulation_ReceiveData((Konsole__Emulation*)self, buffer, lenVal);
}

void k_onsole__emulation_send_data(void* self, const char* data, int lenVal) {
    Konsole__Emulation_SendData((Konsole__Emulation*)self, data, lenVal);
}

void k_onsole__emulation_on_send_data(void* self, void (*callback)(void*, const char*, int)) {
    Konsole__Emulation_Connect_SendData((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_lock_pty_request(void* self, bool suspendVal) {
    Konsole__Emulation_LockPtyRequest((Konsole__Emulation*)self, suspendVal);
}

void k_onsole__emulation_on_lock_pty_request(void* self, void (*callback)(void*, bool)) {
    Konsole__Emulation_Connect_LockPtyRequest((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_use_utf8_request(void* self, bool param1) {
    Konsole__Emulation_UseUtf8Request((Konsole__Emulation*)self, param1);
}

void k_onsole__emulation_on_use_utf8_request(void* self, void (*callback)(void*, bool)) {
    Konsole__Emulation_Connect_UseUtf8Request((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_state_set(void* self, int state) {
    Konsole__Emulation_StateSet((Konsole__Emulation*)self, state);
}

void k_onsole__emulation_on_state_set(void* self, void (*callback)(void*, int)) {
    Konsole__Emulation_Connect_StateSet((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_zmodem_detected(void* self) {
    Konsole__Emulation_ZmodemDetected((Konsole__Emulation*)self);
}

void k_onsole__emulation_on_zmodem_detected(void* self, void (*callback)(void*)) {
    Konsole__Emulation_Connect_ZmodemDetected((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_change_tab_text_color_request(void* self, int color) {
    Konsole__Emulation_ChangeTabTextColorRequest((Konsole__Emulation*)self, color);
}

void k_onsole__emulation_on_change_tab_text_color_request(void* self, void (*callback)(void*, int)) {
    Konsole__Emulation_Connect_ChangeTabTextColorRequest((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_program_uses_mouse_changed(void* self, bool usesMouse) {
    Konsole__Emulation_ProgramUsesMouseChanged((Konsole__Emulation*)self, usesMouse);
}

void k_onsole__emulation_on_program_uses_mouse_changed(void* self, void (*callback)(void*, bool)) {
    Konsole__Emulation_Connect_ProgramUsesMouseChanged((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_program_bracketed_paste_mode_changed(void* self, bool bracketedPasteMode) {
    Konsole__Emulation_ProgramBracketedPasteModeChanged((Konsole__Emulation*)self, bracketedPasteMode);
}

void k_onsole__emulation_on_program_bracketed_paste_mode_changed(void* self, void (*callback)(void*, bool)) {
    Konsole__Emulation_Connect_ProgramBracketedPasteModeChanged((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_output_changed(void* self) {
    Konsole__Emulation_OutputChanged((Konsole__Emulation*)self);
}

void k_onsole__emulation_on_output_changed(void* self, void (*callback)(void*)) {
    Konsole__Emulation_Connect_OutputChanged((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_title_changed(void* self, int title, const char* newTitle) {
    Konsole__Emulation_TitleChanged((Konsole__Emulation*)self, title, qstring(newTitle));
}

void k_onsole__emulation_on_title_changed(void* self, void (*callback)(void*, int, const char*)) {
    Konsole__Emulation_Connect_TitleChanged((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_image_size_changed(void* self, int lineCount, int columnCount) {
    Konsole__Emulation_ImageSizeChanged((Konsole__Emulation*)self, lineCount, columnCount);
}

void k_onsole__emulation_on_image_size_changed(void* self, void (*callback)(void*, int, int)) {
    Konsole__Emulation_Connect_ImageSizeChanged((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_image_size_initialized(void* self) {
    Konsole__Emulation_ImageSizeInitialized((Konsole__Emulation*)self);
}

void k_onsole__emulation_on_image_size_initialized(void* self, void (*callback)(void*)) {
    Konsole__Emulation_Connect_ImageSizeInitialized((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_image_resize_request(void* self, void* sizz) {
    Konsole__Emulation_ImageResizeRequest((Konsole__Emulation*)self, (QSize*)sizz);
}

void k_onsole__emulation_on_image_resize_request(void* self, void (*callback)(void*, void*)) {
    Konsole__Emulation_Connect_ImageResizeRequest((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_profile_change_command_received(void* self, const char* text) {
    Konsole__Emulation_ProfileChangeCommandReceived((Konsole__Emulation*)self, qstring(text));
}

void k_onsole__emulation_on_profile_change_command_received(void* self, void (*callback)(void*, const char*)) {
    Konsole__Emulation_Connect_ProfileChangeCommandReceived((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_flow_control_key_pressed(void* self, bool suspendKeyPressed) {
    Konsole__Emulation_FlowControlKeyPressed((Konsole__Emulation*)self, suspendKeyPressed);
}

void k_onsole__emulation_on_flow_control_key_pressed(void* self, void (*callback)(void*, bool)) {
    Konsole__Emulation_Connect_FlowControlKeyPressed((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_cursor_changed(void* self, int32_t cursorShape, bool blinkingCursorEnabled) {
    Konsole__Emulation_CursorChanged((Konsole__Emulation*)self, cursorShape, blinkingCursorEnabled);
}

void k_onsole__emulation_on_cursor_changed(void* self, void (*callback)(void*, int32_t, bool)) {
    Konsole__Emulation_Connect_CursorChanged((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_handle_command_from_keyboard(void* self, int32_t command) {
    Konsole__Emulation_HandleCommandFromKeyboard((Konsole__Emulation*)self, command);
}

void k_onsole__emulation_on_handle_command_from_keyboard(void* self, void (*callback)(void*, int32_t)) {
    Konsole__Emulation_Connect_HandleCommandFromKeyboard((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_output_from_keypress_event(void* self) {
    Konsole__Emulation_OutputFromKeypressEvent((Konsole__Emulation*)self);
}

void k_onsole__emulation_on_output_from_keypress_event(void* self, void (*callback)(void*)) {
    Konsole__Emulation_Connect_OutputFromKeypressEvent((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_set_mode(void* self, int mode) {
    Konsole__Emulation_SetMode((Konsole__Emulation*)self, mode);
}

void k_onsole__emulation_on_set_mode(void* self, void (*callback)(void*, int)) {
    Konsole__Emulation_OnSetMode((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_set_mode(void* self, int mode) {
    Konsole__Emulation_QBaseSetMode((Konsole__Emulation*)self, mode);
}

void k_onsole__emulation_reset_mode(void* self, int mode) {
    Konsole__Emulation_ResetMode((Konsole__Emulation*)self, mode);
}

void k_onsole__emulation_on_reset_mode(void* self, void (*callback)(void*, int)) {
    Konsole__Emulation_OnResetMode((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_reset_mode(void* self, int mode) {
    Konsole__Emulation_QBaseResetMode((Konsole__Emulation*)self, mode);
}

void k_onsole__emulation_set_screen(void* self, int index) {
    Konsole__Emulation_SetScreen((Konsole__Emulation*)self, index);
}

void k_onsole__emulation_on_set_screen(void* self, void (*callback)(void*, int)) {
    Konsole__Emulation_OnSetScreen((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_set_screen(void* self, int index) {
    Konsole__Emulation_QBaseSetScreen((Konsole__Emulation*)self, index);
}

void k_onsole__emulation_set_codec(void* self, int32_t codec) {
    Konsole__Emulation_SetCodec((Konsole__Emulation*)self, codec);
}

void k_onsole__emulation_on_set_codec(void* self, void (*callback)(void*, int32_t)) {
    Konsole__Emulation_OnSetCodec((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_set_codec(void* self, int32_t codec) {
    Konsole__Emulation_QBaseSetCodec((Konsole__Emulation*)self, codec);
}

void k_onsole__emulation_buffered_update(void* self) {
    Konsole__Emulation_BufferedUpdate((Konsole__Emulation*)self);
}

void k_onsole__emulation_on_buffered_update(void* self, void (*callback)()) {
    Konsole__Emulation_OnBufferedUpdate((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_qbase_buffered_update(void* self) {
    Konsole__Emulation_QBaseBufferedUpdate((Konsole__Emulation*)self);
}

const char* k_onsole__emulation_tr2(const char* s, const char* c) {
    libqt_string _str = Konsole__Emulation_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__emulation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = Konsole__Emulation_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_onsole__emulation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_onsole__emulation_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_onsole__emulation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_onsole__emulation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_onsole__emulation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_onsole__emulation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_onsole__emulation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_onsole__emulation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_onsole__emulation_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_onsole__emulation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_onsole__emulation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_onsole__emulation_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_onsole__emulation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_onsole__emulation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_onsole__emulation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_onsole__emulation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_onsole__emulation_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_onsole__emulation_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_onsole__emulation_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_onsole__emulation_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_onsole__emulation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_onsole__emulation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_onsole__emulation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_onsole__emulation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_onsole__emulation_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_onsole__emulation_dynamic_property_names");
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

QBindingStorage* k_onsole__emulation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_onsole__emulation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_onsole__emulation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_onsole__emulation_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_onsole__emulation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_onsole__emulation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_onsole__emulation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_onsole__emulation_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_onsole__emulation_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_onsole__emulation_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_onsole__emulation_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_onsole__emulation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_onsole__emulation_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_onsole__emulation_event(void* self, void* event) {
    return Konsole__Emulation_Event((Konsole__Emulation*)self, (QEvent*)event);
}

bool k_onsole__emulation_qbase_event(void* self, void* event) {
    return Konsole__Emulation_QBaseEvent((Konsole__Emulation*)self, (QEvent*)event);
}

void k_onsole__emulation_on_event(void* self, bool (*callback)(void*, void*)) {
    Konsole__Emulation_OnEvent((Konsole__Emulation*)self, (intptr_t)callback);
}

bool k_onsole__emulation_event_filter(void* self, void* watched, void* event) {
    return Konsole__Emulation_EventFilter((Konsole__Emulation*)self, (QObject*)watched, (QEvent*)event);
}

bool k_onsole__emulation_qbase_event_filter(void* self, void* watched, void* event) {
    return Konsole__Emulation_QBaseEventFilter((Konsole__Emulation*)self, (QObject*)watched, (QEvent*)event);
}

void k_onsole__emulation_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Konsole__Emulation_OnEventFilter((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_timer_event(void* self, void* event) {
    Konsole__Emulation_TimerEvent((Konsole__Emulation*)self, (QTimerEvent*)event);
}

void k_onsole__emulation_qbase_timer_event(void* self, void* event) {
    Konsole__Emulation_QBaseTimerEvent((Konsole__Emulation*)self, (QTimerEvent*)event);
}

void k_onsole__emulation_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Konsole__Emulation_OnTimerEvent((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_child_event(void* self, void* event) {
    Konsole__Emulation_ChildEvent((Konsole__Emulation*)self, (QChildEvent*)event);
}

void k_onsole__emulation_qbase_child_event(void* self, void* event) {
    Konsole__Emulation_QBaseChildEvent((Konsole__Emulation*)self, (QChildEvent*)event);
}

void k_onsole__emulation_on_child_event(void* self, void (*callback)(void*, void*)) {
    Konsole__Emulation_OnChildEvent((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_custom_event(void* self, void* event) {
    Konsole__Emulation_CustomEvent((Konsole__Emulation*)self, (QEvent*)event);
}

void k_onsole__emulation_qbase_custom_event(void* self, void* event) {
    Konsole__Emulation_QBaseCustomEvent((Konsole__Emulation*)self, (QEvent*)event);
}

void k_onsole__emulation_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Konsole__Emulation_OnCustomEvent((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_connect_notify(void* self, void* signal) {
    Konsole__Emulation_ConnectNotify((Konsole__Emulation*)self, (QMetaMethod*)signal);
}

void k_onsole__emulation_qbase_connect_notify(void* self, void* signal) {
    Konsole__Emulation_QBaseConnectNotify((Konsole__Emulation*)self, (QMetaMethod*)signal);
}

void k_onsole__emulation_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Konsole__Emulation_OnConnectNotify((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_disconnect_notify(void* self, void* signal) {
    Konsole__Emulation_DisconnectNotify((Konsole__Emulation*)self, (QMetaMethod*)signal);
}

void k_onsole__emulation_qbase_disconnect_notify(void* self, void* signal) {
    Konsole__Emulation_QBaseDisconnectNotify((Konsole__Emulation*)self, (QMetaMethod*)signal);
}

void k_onsole__emulation_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Konsole__Emulation_OnDisconnectNotify((Konsole__Emulation*)self, (intptr_t)callback);
}

QObject* k_onsole__emulation_sender(void* self) {
    return Konsole__Emulation_Sender((Konsole__Emulation*)self);
}

QObject* k_onsole__emulation_qbase_sender(void* self) {
    return Konsole__Emulation_QBaseSender((Konsole__Emulation*)self);
}

void k_onsole__emulation_on_sender(void* self, QObject* (*callback)()) {
    Konsole__Emulation_OnSender((Konsole__Emulation*)self, (intptr_t)callback);
}

int32_t k_onsole__emulation_sender_signal_index(void* self) {
    return Konsole__Emulation_SenderSignalIndex((Konsole__Emulation*)self);
}

int32_t k_onsole__emulation_qbase_sender_signal_index(void* self) {
    return Konsole__Emulation_QBaseSenderSignalIndex((Konsole__Emulation*)self);
}

void k_onsole__emulation_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Konsole__Emulation_OnSenderSignalIndex((Konsole__Emulation*)self, (intptr_t)callback);
}

int32_t k_onsole__emulation_receivers(void* self, const char* signal) {
    return Konsole__Emulation_Receivers((Konsole__Emulation*)self, signal);
}

int32_t k_onsole__emulation_qbase_receivers(void* self, const char* signal) {
    return Konsole__Emulation_QBaseReceivers((Konsole__Emulation*)self, signal);
}

void k_onsole__emulation_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Konsole__Emulation_OnReceivers((Konsole__Emulation*)self, (intptr_t)callback);
}

bool k_onsole__emulation_is_signal_connected(void* self, void* signal) {
    return Konsole__Emulation_IsSignalConnected((Konsole__Emulation*)self, (QMetaMethod*)signal);
}

bool k_onsole__emulation_qbase_is_signal_connected(void* self, void* signal) {
    return Konsole__Emulation_QBaseIsSignalConnected((Konsole__Emulation*)self, (QMetaMethod*)signal);
}

void k_onsole__emulation_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Konsole__Emulation_OnIsSignalConnected((Konsole__Emulation*)self, (intptr_t)callback);
}

void k_onsole__emulation_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_onsole__emulation_delete(void* self) {
    Konsole__Emulation_Delete((Konsole__Emulation*)(self));
}
