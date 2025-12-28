#include "libkcompletion.hpp"
#include "../libqkeysequence.hpp"
#include "libkcompletionbase.hpp"
#include "libkcompletionbase.h"

KCompletionBase* k_completionbase_new() {
    return KCompletionBase_new();
}

KCompletion* k_completionbase_completion_object(void* self) {
    return KCompletionBase_CompletionObject((KCompletionBase*)self);
}

void k_completionbase_set_completion_object(void* self, void* completionObject, bool handleSignals) {
    KCompletionBase_SetCompletionObject((KCompletionBase*)self, (KCompletion*)completionObject, handleSignals);
}

void k_completionbase_on_set_completion_object(void* self, void (*callback)(void*, void*, bool)) {
    KCompletionBase_OnSetCompletionObject((KCompletionBase*)self, (intptr_t)callback);
}

void k_completionbase_qbase_set_completion_object(void* self, void* completionObject, bool handleSignals) {
    KCompletionBase_QBaseSetCompletionObject((KCompletionBase*)self, (KCompletion*)completionObject, handleSignals);
}

void k_completionbase_set_handle_signals(void* self, bool handle) {
    KCompletionBase_SetHandleSignals((KCompletionBase*)self, handle);
}

void k_completionbase_on_set_handle_signals(void* self, void (*callback)(void*, bool)) {
    KCompletionBase_OnSetHandleSignals((KCompletionBase*)self, (intptr_t)callback);
}

void k_completionbase_qbase_set_handle_signals(void* self, bool handle) {
    KCompletionBase_QBaseSetHandleSignals((KCompletionBase*)self, handle);
}

bool k_completionbase_is_completion_object_auto_deleted(void* self) {
    return KCompletionBase_IsCompletionObjectAutoDeleted((KCompletionBase*)self);
}

void k_completionbase_set_auto_delete_completion_object(void* self, bool autoDelete) {
    KCompletionBase_SetAutoDeleteCompletionObject((KCompletionBase*)self, autoDelete);
}

void k_completionbase_set_enable_signals(void* self, bool enable) {
    KCompletionBase_SetEnableSignals((KCompletionBase*)self, enable);
}

bool k_completionbase_handle_signals(void* self) {
    return KCompletionBase_HandleSignals((KCompletionBase*)self);
}

bool k_completionbase_emit_signals(void* self) {
    return KCompletionBase_EmitSignals((KCompletionBase*)self);
}

void k_completionbase_set_emit_signals(void* self, bool emitRotationSignals) {
    KCompletionBase_SetEmitSignals((KCompletionBase*)self, emitRotationSignals);
}

void k_completionbase_set_completion_mode(void* self, int32_t mode) {
    KCompletionBase_SetCompletionMode((KCompletionBase*)self, mode);
}

void k_completionbase_on_set_completion_mode(void* self, void (*callback)(void*, int32_t)) {
    KCompletionBase_OnSetCompletionMode((KCompletionBase*)self, (intptr_t)callback);
}

void k_completionbase_qbase_set_completion_mode(void* self, int32_t mode) {
    KCompletionBase_QBaseSetCompletionMode((KCompletionBase*)self, mode);
}

int32_t k_completionbase_completion_mode(void* self) {
    return KCompletionBase_CompletionMode((KCompletionBase*)self);
}

bool k_completionbase_set_key_binding(void* self, int32_t item, libqt_list key) {
    return KCompletionBase_SetKeyBinding((KCompletionBase*)self, item, key);
}

libqt_list /* of QKeySequence* */ k_completionbase_key_binding(void* self, int32_t item) {
    libqt_list _arr = KCompletionBase_KeyBinding((KCompletionBase*)self, item);
    return _arr;
}

void k_completionbase_use_global_key_bindings(void* self) {
    KCompletionBase_UseGlobalKeyBindings((KCompletionBase*)self);
}

void k_completionbase_set_completed_text(void* self, const char* text) {
    KCompletionBase_SetCompletedText((KCompletionBase*)self, qstring(text));
}

void k_completionbase_on_set_completed_text(void* self, void (*callback)(void*, const char*)) {
    KCompletionBase_OnSetCompletedText((KCompletionBase*)self, (intptr_t)callback);
}

void k_completionbase_qbase_set_completed_text(void* self, const char* text) {
    KCompletionBase_QBaseSetCompletedText((KCompletionBase*)self, qstring(text));
}

void k_completionbase_set_completed_items(void* self, const char* items[static 1], bool autoSuggest) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_completionbase_set_completed_items");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KCompletionBase_SetCompletedItems((KCompletionBase*)self, items_list, autoSuggest);
    free(items_qstr);
}

void k_completionbase_on_set_completed_items(void* self, void (*callback)(void*, const char**, bool)) {
    KCompletionBase_OnSetCompletedItems((KCompletionBase*)self, (intptr_t)callback);
}

void k_completionbase_qbase_set_completed_items(void* self, const char* items[static 1], bool autoSuggest) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_completionbase_set_completed_items");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KCompletionBase_QBaseSetCompletedItems((KCompletionBase*)self, items_list, autoSuggest);
}

KCompletion* k_completionbase_comp_obj(void* self) {
    return KCompletionBase_CompObj((KCompletionBase*)self);
}

libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ k_completionbase_key_binding_map(void* self) {
    // Convert QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>> to libqt_map
    libqt_map _out = KCompletionBase_KeyBindingMap((KCompletionBase*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_completionbase_on_key_binding_map(void* self, libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ (*callback)()) {
    KCompletionBase_OnKeyBindingMap((KCompletionBase*)self, (intptr_t)callback);
}

libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ k_completionbase_qbase_key_binding_map(void* self) {
    // Convert QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>> to libqt_map
    libqt_map _out = KCompletionBase_QBaseKeyBindingMap((KCompletionBase*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void k_completionbase_set_key_binding_map(void* self, libqt_map /* of int32_t to QKeySequence* */ keyBindingMap) {
    // Convert libqt_map to QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>>
    libqt_map keyBindingMap_ret;
    keyBindingMap_ret.len = keyBindingMap.len;
    keyBindingMap_ret.keys = malloc(keyBindingMap_ret.len * sizeof(int32_t));
    if (keyBindingMap_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    keyBindingMap_ret.values = malloc(keyBindingMap_ret.len * sizeof(QKeySequence*));
    if (keyBindingMap_ret.values == NULL) {
        free(keyBindingMap_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    int32_t* keyBindingMap_karr = (int32_t*)keyBindingMap.keys;
    int32_t* keyBindingMap_kdest = (int32_t*)keyBindingMap_ret.keys;
    QKeySequence** keyBindingMap_varr = (QKeySequence**)keyBindingMap.values;
    QKeySequence** keyBindingMap_vdest = (QKeySequence**)keyBindingMap_ret.values;
    for (size_t i = 0; i < keyBindingMap_ret.len; ++i) {
        keyBindingMap_kdest[i] = keyBindingMap_karr[i];
        keyBindingMap_vdest[i] = keyBindingMap_varr[i];
    }
    KCompletionBase_SetKeyBindingMap((KCompletionBase*)self, keyBindingMap_ret);
    libqt_free(keyBindingMap_ret.keys);
    libqt_free(keyBindingMap_ret.values);
}

void k_completionbase_on_set_key_binding_map(void* self, void (*callback)(void*, libqt_map /* of int32_t to QKeySequence* */)) {
    KCompletionBase_OnSetKeyBindingMap((KCompletionBase*)self, (intptr_t)callback);
}

void k_completionbase_qbase_set_key_binding_map(void* self, libqt_map /* of int32_t to QKeySequence* */ keyBindingMap) {
    // Convert libqt_map to QMap<KCompletionBase::KeyBindingType,QList<QKeySequence>>
    libqt_map keyBindingMap_ret;
    keyBindingMap_ret.len = keyBindingMap.len;
    keyBindingMap_ret.keys = malloc(keyBindingMap_ret.len * sizeof(int32_t));
    if (keyBindingMap_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    keyBindingMap_ret.values = malloc(keyBindingMap_ret.len * sizeof(QKeySequence*));
    if (keyBindingMap_ret.values == NULL) {
        free(keyBindingMap_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    int32_t* keyBindingMap_karr = (int32_t*)keyBindingMap.keys;
    int32_t* keyBindingMap_kdest = (int32_t*)keyBindingMap_ret.keys;
    QKeySequence** keyBindingMap_varr = (QKeySequence**)keyBindingMap.values;
    QKeySequence** keyBindingMap_vdest = (QKeySequence**)keyBindingMap_ret.values;
    for (size_t i = 0; i < keyBindingMap_ret.len; ++i) {
        keyBindingMap_kdest[i] = keyBindingMap_karr[i];
        keyBindingMap_vdest[i] = keyBindingMap_varr[i];
    }
    KCompletionBase_QBaseSetKeyBindingMap((KCompletionBase*)self, keyBindingMap_ret);
}

void k_completionbase_set_delegate(void* self, void* delegate) {
    KCompletionBase_SetDelegate((KCompletionBase*)self, (KCompletionBase*)delegate);
}

void k_completionbase_on_set_delegate(void* self, void (*callback)(void*, void*)) {
    KCompletionBase_OnSetDelegate((KCompletionBase*)self, (intptr_t)callback);
}

void k_completionbase_qbase_set_delegate(void* self, void* delegate) {
    KCompletionBase_QBaseSetDelegate((KCompletionBase*)self, (KCompletionBase*)delegate);
}

KCompletionBase* k_completionbase_delegate(void* self) {
    return KCompletionBase_Delegate((KCompletionBase*)self);
}

void k_completionbase_on_delegate(void* self, KCompletionBase* (*callback)()) {
    KCompletionBase_OnDelegate((KCompletionBase*)self, (intptr_t)callback);
}

KCompletionBase* k_completionbase_qbase_delegate(void* self) {
    return KCompletionBase_QBaseDelegate((KCompletionBase*)self);
}

void k_completionbase_virtual_hook(void* self, int id, void* data) {
    KCompletionBase_VirtualHook((KCompletionBase*)self, id, data);
}

void k_completionbase_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KCompletionBase_OnVirtualHook((KCompletionBase*)self, (intptr_t)callback);
}

void k_completionbase_qbase_virtual_hook(void* self, int id, void* data) {
    KCompletionBase_QBaseVirtualHook((KCompletionBase*)self, id, data);
}

KCompletion* k_completionbase_completion_object1(void* self, bool handleSignals) {
    return KCompletionBase_CompletionObject1((KCompletionBase*)self, handleSignals);
}

void k_completionbase_delete(void* self) {
    KCompletionBase_Delete((KCompletionBase*)(self));
}
