#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBCODECOMPLETIONMODELCONTROLLERINTERFACE_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBCODECOMPLETIONMODELCONTROLLERINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html)

/// k_texteditor__codecompletionmodelcontrollerinterface_new constructs a new KTextEditor::CodeCompletionModelControllerInterface object.
///
KTextEditor__CodeCompletionModelControllerInterface* k_texteditor__codecompletionmodelcontrollerinterface_new();

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
/// @param insertedText const char*
/// @param userInsertion bool
/// @param position KTextEditor__Cursor*
///
bool k_texteditor__codecompletionmodelcontrollerinterface_should_start_completion(void* self, void* view, const char* insertedText, bool userInsertion, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param callback bool func(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, const char* insertedText, bool userInsertion, KTextEditor__Cursor* position)
///
void k_texteditor__codecompletionmodelcontrollerinterface_on_should_start_completion(void* self, bool (*callback)(void*, void*, const char*, bool, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldStartCompletion)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
/// @param insertedText const char*
/// @param userInsertion bool
/// @param position KTextEditor__Cursor*
///
bool k_texteditor__codecompletionmodelcontrollerinterface_qbase_should_start_completion(void* self, void* view, const char* insertedText, bool userInsertion, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
/// @param position KTextEditor__Cursor*
///
KTextEditor__Range* k_texteditor__codecompletionmodelcontrollerinterface_completion_range(void* self, void* view, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param callback KTextEditor__Range* func(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, KTextEditor__Cursor* position)
///
void k_texteditor__codecompletionmodelcontrollerinterface_on_completion_range(void* self, KTextEditor__Range* (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#completionRange)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
/// @param position KTextEditor__Cursor*
///
KTextEditor__Range* k_texteditor__codecompletionmodelcontrollerinterface_qbase_completion_range(void* self, void* view, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
/// @param range KTextEditor__Range*
///
KTextEditor__Range* k_texteditor__codecompletionmodelcontrollerinterface_update_completion_range(void* self, void* view, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param callback KTextEditor__Range* func(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, KTextEditor__Range* range)
///
void k_texteditor__codecompletionmodelcontrollerinterface_on_update_completion_range(void* self, KTextEditor__Range* (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#updateCompletionRange)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
/// @param range KTextEditor__Range*
///
KTextEditor__Range* k_texteditor__codecompletionmodelcontrollerinterface_qbase_update_completion_range(void* self, void* view, void* range);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
/// @param range KTextEditor__Range*
/// @param position KTextEditor__Cursor*
///
const char* k_texteditor__codecompletionmodelcontrollerinterface_filter_string(void* self, void* view, void* range, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param callback const char* func(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, KTextEditor__Range* range, KTextEditor__Cursor* position)
///
void k_texteditor__codecompletionmodelcontrollerinterface_on_filter_string(void* self, const char* (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#filterString)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
/// @param range KTextEditor__Range*
/// @param position KTextEditor__Cursor*
///
const char* k_texteditor__codecompletionmodelcontrollerinterface_qbase_filter_string(void* self, void* view, void* range, void* position);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
/// @param range KTextEditor__Range*
/// @param currentCompletion const char*
///
bool k_texteditor__codecompletionmodelcontrollerinterface_should_abort_completion(void* self, void* view, void* range, const char* currentCompletion);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param callback bool func(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view, KTextEditor__Range* range, const char* currentCompletion)
///
void k_texteditor__codecompletionmodelcontrollerinterface_on_should_abort_completion(void* self, bool (*callback)(void*, void*, void*, const char*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldAbortCompletion)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
/// @param range KTextEditor__Range*
/// @param currentCompletion const char*
///
bool k_texteditor__codecompletionmodelcontrollerinterface_qbase_should_abort_completion(void* self, void* view, void* range, const char* currentCompletion);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param selected QModelIndex*
/// @param inserted QChar*
///
bool k_texteditor__codecompletionmodelcontrollerinterface_should_execute(void* self, void* selected, void* inserted);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param callback bool func(KTextEditor__CodeCompletionModelControllerInterface* self, QModelIndex* selected, QChar* inserted)
///
void k_texteditor__codecompletionmodelcontrollerinterface_on_should_execute(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldExecute)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param selected QModelIndex*
/// @param inserted QChar*
///
bool k_texteditor__codecompletionmodelcontrollerinterface_qbase_should_execute(void* self, void* selected, void* inserted);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
///
void k_texteditor__codecompletionmodelcontrollerinterface_aborted(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param callback void func(KTextEditor__CodeCompletionModelControllerInterface* self, KTextEditor__View* view)
///
void k_texteditor__codecompletionmodelcontrollerinterface_on_aborted(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#aborted)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param view KTextEditor__View*
///
void k_texteditor__codecompletionmodelcontrollerinterface_qbase_aborted(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param matched QModelIndex*
///
/// @return enum KTextEditor__CodeCompletionModelControllerInterface__MatchReaction
///
int32_t k_texteditor__codecompletionmodelcontrollerinterface_matching_item(void* self, void* matched);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param callback int32_t func(KTextEditor__CodeCompletionModelControllerInterface* self, QModelIndex* matched)
///
void k_texteditor__codecompletionmodelcontrollerinterface_on_matching_item(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#matchingItem)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param matched QModelIndex*
///
/// @return enum KTextEditor__CodeCompletionModelControllerInterface__MatchReaction
///
int32_t k_texteditor__codecompletionmodelcontrollerinterface_qbase_matching_item(void* self, void* matched);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
///
bool k_texteditor__codecompletionmodelcontrollerinterface_should_hide_items_with_equal_names(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param callback bool func()
///
void k_texteditor__codecompletionmodelcontrollerinterface_on_should_hide_items_with_equal_names(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#shouldHideItemsWithEqualNames)
///
/// Base class method implementation
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
///
bool k_texteditor__codecompletionmodelcontrollerinterface_qbase_should_hide_items_with_equal_names(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-codecompletionmodelcontrollerinterface.html#operator-eq)
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
/// @param param1 KTextEditor__CodeCompletionModelControllerInterface*
///
void k_texteditor__codecompletionmodelcontrollerinterface_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__CodeCompletionModelControllerInterface*
///
void k_texteditor__codecompletionmodelcontrollerinterface_delete(void* self);

/// [Upstream resources](https://api.kde.org/codecompletionmodelcontrollerinterface.html#public-types)

typedef enum {
    KTEXTEDITOR_CODECOMPLETIONMODELCONTROLLERINTERFACE_MATCHREACTION_NONE = 0,
    KTEXTEDITOR_CODECOMPLETIONMODELCONTROLLERINTERFACE_MATCHREACTION_HIDELISTIFAUTOMATICINVOCATION = 1,
    KTEXTEDITOR_CODECOMPLETIONMODELCONTROLLERINTERFACE_MATCHREACTION_FOREXTENSION = 65535
} KTextEditor__CodeCompletionModelControllerInterface__MatchReaction;

#endif
