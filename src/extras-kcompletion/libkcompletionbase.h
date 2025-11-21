#pragma once
#ifndef SRC_EXTRAS_KCOMPLETION_QT6C_LIBKCOMPLETIONBASE_H
#define SRC_EXTRAS_KCOMPLETION_QT6C_LIBKCOMPLETIONBASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcompletionbase.html

/// k_completionbase_new constructs a new KCompletionBase object.
///
KCompletionBase* k_completionbase_new();

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#completionObject)
///
/// @param self KCompletionBase*
KCompletion* k_completionbase_completion_object(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionObject)
///
/// @param self KCompletionBase*
/// @param completionObject KCompletion*
/// @param handleSignals bool
void k_completionbase_set_completion_object(void* self, void* completionObject, bool handleSignals);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionObject)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBase*
/// @param callback void func(KCompletionBase* self, KCompletion* completionObject, bool handleSignals)
void k_completionbase_on_set_completion_object(void* self, void (*callback)(void*, void*, bool));

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionObject)
///
/// Base class method implementation
///
/// @param self KCompletionBase*
/// @param completionObject KCompletion*
/// @param handleSignals bool
void k_completionbase_qbase_set_completion_object(void* self, void* completionObject, bool handleSignals);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// @param self KCompletionBase*
/// @param handle bool
void k_completionbase_set_handle_signals(void* self, bool handle);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBase*
/// @param callback void func(KCompletionBase* self, bool handle)
void k_completionbase_on_set_handle_signals(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setHandleSignals)
///
/// Base class method implementation
///
/// @param self KCompletionBase*
/// @param handle bool
void k_completionbase_qbase_set_handle_signals(void* self, bool handle);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#isCompletionObjectAutoDeleted)
///
/// @param self KCompletionBase*
bool k_completionbase_is_completion_object_auto_deleted(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setAutoDeleteCompletionObject)
///
/// @param self KCompletionBase*
/// @param autoDelete bool
void k_completionbase_set_auto_delete_completion_object(void* self, bool autoDelete);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setEnableSignals)
///
/// @param self KCompletionBase*
/// @param enable bool
void k_completionbase_set_enable_signals(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#handleSignals)
///
/// @param self KCompletionBase*
bool k_completionbase_handle_signals(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#emitSignals)
///
/// @param self KCompletionBase*
bool k_completionbase_emit_signals(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setEmitSignals)
///
/// @param self KCompletionBase*
/// @param emitRotationSignals bool
void k_completionbase_set_emit_signals(void* self, bool emitRotationSignals);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// @param self KCompletionBase*
/// @param mode enum KCompletion__CompletionMode
void k_completionbase_set_completion_mode(void* self, int32_t mode);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBase*
/// @param callback void func(KCompletionBase* self, enum KCompletion__CompletionMode mode)
void k_completionbase_on_set_completion_mode(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletionMode)
///
/// Base class method implementation
///
/// @param self KCompletionBase*
/// @param mode enum KCompletion__CompletionMode
void k_completionbase_qbase_set_completion_mode(void* self, int32_t mode);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#completionMode)
///
/// @param self KCompletionBase*
///
/// @return enum KCompletion__CompletionMode
int32_t k_completionbase_completion_mode(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBinding)
///
/// @param self KCompletionBase*
/// @param item enum KCompletionBase__KeyBindingType
/// @param key libqt_list /* of QKeySequence* */
bool k_completionbase_set_key_binding(void* self, int32_t item, libqt_list key);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBinding)
///
/// @param self KCompletionBase*
/// @param item enum KCompletionBase__KeyBindingType
libqt_list /* of QKeySequence* */ k_completionbase_key_binding(void* self, int32_t item);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#useGlobalKeyBindings)
///
/// @param self KCompletionBase*
void k_completionbase_use_global_key_bindings(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedText)
///
/// @param self KCompletionBase*
/// @param text const char*
void k_completionbase_set_completed_text(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedText)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBase*
/// @param callback void func(KCompletionBase* self, const char* text)
void k_completionbase_on_set_completed_text(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedText)
///
/// Base class method implementation
///
/// @param self KCompletionBase*
/// @param text const char*
void k_completionbase_qbase_set_completed_text(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedItems)
///
/// @param self KCompletionBase*
/// @param items const char**
/// @param autoSuggest bool
void k_completionbase_set_completed_items(void* self, const char* items[static 1], bool autoSuggest);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedItems)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBase*
/// @param callback void func(KCompletionBase* self, const char** items, bool autoSuggest)
void k_completionbase_on_set_completed_items(void* self, void (*callback)(void*, const char**, bool));

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setCompletedItems)
///
/// Base class method implementation
///
/// @param self KCompletionBase*
/// @param items const char**
/// @param autoSuggest bool
void k_completionbase_qbase_set_completed_items(void* self, const char* items[static 1], bool autoSuggest);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#compObj)
///
/// @param self KCompletionBase*
KCompletion* k_completionbase_comp_obj(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// @param self KCompletionBase*
libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ k_completionbase_key_binding_map(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBase*
/// @param callback libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ func()
void k_completionbase_on_key_binding_map(void* self, libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ (*callback)());

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#keyBindingMap)
///
/// Base class method implementation
///
/// @param self KCompletionBase*
libqt_map /* of int32_t to libqt_list  of QKeySequence*  */ k_completionbase_qbase_key_binding_map(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// @param self KCompletionBase*
/// @param keyBindingMap libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */
void k_completionbase_set_key_binding_map(void* self, libqt_map /* of int32_t to QKeySequence* */ keyBindingMap);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBase*
/// @param callback void func(KCompletionBase* self, libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */ /* of enum KCompletionBase__KeyBindingType to QKeySequence* */)
void k_completionbase_on_set_key_binding_map(void* self, void (*callback)(void*, libqt_map /* of int32_t to QKeySequence* */));

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setKeyBindingMap)
///
/// Base class method implementation
///
/// @param self KCompletionBase*
/// @param keyBindingMap libqt_map /* of enum KCompletionBase__KeyBindingType to QKeySequence* */
void k_completionbase_qbase_set_key_binding_map(void* self, libqt_map /* of int32_t to QKeySequence* */ keyBindingMap);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// @param self KCompletionBase*
/// @param delegate KCompletionBase*
void k_completionbase_set_delegate(void* self, void* delegate);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBase*
/// @param callback void func(KCompletionBase* self, KCompletionBase* delegate)
void k_completionbase_on_set_delegate(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#setDelegate)
///
/// Base class method implementation
///
/// @param self KCompletionBase*
/// @param delegate KCompletionBase*
void k_completionbase_qbase_set_delegate(void* self, void* delegate);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#delegate)
///
/// @param self KCompletionBase*
KCompletionBase* k_completionbase_delegate(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBase*
/// @param callback KCompletionBase* func()
void k_completionbase_on_delegate(void* self, KCompletionBase* (*callback)());

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#delegate)
///
/// Base class method implementation
///
/// @param self KCompletionBase*
KCompletionBase* k_completionbase_qbase_delegate(void* self);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// @param self KCompletionBase*
/// @param id int
/// @param data void*
void k_completionbase_virtual_hook(void* self, int id, void* data);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KCompletionBase*
/// @param callback void func(KCompletionBase* self, int id, void* data)
void k_completionbase_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KCompletionBase*
/// @param id int
/// @param data void*
void k_completionbase_qbase_virtual_hook(void* self, int id, void* data);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#completionObject)
///
/// @param self KCompletionBase*
/// @param handleSignals bool
KCompletion* k_completionbase_completion_object1(void* self, bool handleSignals);

/// [Qt documentation](https://api.kde.org/kcompletionbase.html#dtor.KCompletionBase)
///
/// Delete this object from C++ memory.
///
/// @param self KCompletionBase*
void k_completionbase_delete(void* self);

/// https://api.kde.org/kcompletionbase.html#types

typedef enum {
    KCOMPLETIONBASE_KEYBINDINGTYPE_TEXTCOMPLETION = 0,
    KCOMPLETIONBASE_KEYBINDINGTYPE_PREVCOMPLETIONMATCH = 1,
    KCOMPLETIONBASE_KEYBINDINGTYPE_NEXTCOMPLETIONMATCH = 2,
    KCOMPLETIONBASE_KEYBINDINGTYPE_SUBSTRINGCOMPLETION = 3
} KCompletionBase__KeyBindingType;

#endif
