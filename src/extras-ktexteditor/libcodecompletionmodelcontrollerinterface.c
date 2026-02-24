#include "libcursor.hpp"
#include "librange.hpp"
#include "libview.hpp"
#include "../libqchar.hpp"
#include "../libqabstractitemmodel.hpp"
#include "libcodecompletionmodelcontrollerinterface.hpp"
#include "libcodecompletionmodelcontrollerinterface.h"

KTextEditor__CodeCompletionModelControllerInterface* k_texteditor__codecompletionmodelcontrollerinterface_new() {
    return KTextEditor__CodeCompletionModelControllerInterface_new();
}

bool k_texteditor__codecompletionmodelcontrollerinterface_should_start_completion(void* self, void* view, const char* insertedText, bool userInsertion, void* position) {
    return KTextEditor__CodeCompletionModelControllerInterface_ShouldStartCompletion((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view, qstring(insertedText), userInsertion, (KTextEditor__Cursor*)position);
}

void k_texteditor__codecompletionmodelcontrollerinterface_on_should_start_completion(void* self, bool (*callback)(void*, void*, const char*, bool, void*)) {
    KTextEditor__CodeCompletionModelControllerInterface_OnShouldStartCompletion((KTextEditor__CodeCompletionModelControllerInterface*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodelcontrollerinterface_super_should_start_completion(void* self, void* view, const char* insertedText, bool userInsertion, void* position) {
    return KTextEditor__CodeCompletionModelControllerInterface_SuperShouldStartCompletion((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view, qstring(insertedText), userInsertion, (KTextEditor__Cursor*)position);
}

KTextEditor__Range* k_texteditor__codecompletionmodelcontrollerinterface_completion_range(void* self, void* view, void* position) {
    return KTextEditor__CodeCompletionModelControllerInterface_CompletionRange((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view, (KTextEditor__Cursor*)position);
}

void k_texteditor__codecompletionmodelcontrollerinterface_on_completion_range(void* self, KTextEditor__Range* (*callback)(void*, void*, void*)) {
    KTextEditor__CodeCompletionModelControllerInterface_OnCompletionRange((KTextEditor__CodeCompletionModelControllerInterface*)self, (intptr_t)callback);
}

KTextEditor__Range* k_texteditor__codecompletionmodelcontrollerinterface_super_completion_range(void* self, void* view, void* position) {
    return KTextEditor__CodeCompletionModelControllerInterface_SuperCompletionRange((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view, (KTextEditor__Cursor*)position);
}

KTextEditor__Range* k_texteditor__codecompletionmodelcontrollerinterface_update_completion_range(void* self, void* view, void* range) {
    return KTextEditor__CodeCompletionModelControllerInterface_UpdateCompletionRange((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view, (KTextEditor__Range*)range);
}

void k_texteditor__codecompletionmodelcontrollerinterface_on_update_completion_range(void* self, KTextEditor__Range* (*callback)(void*, void*, void*)) {
    KTextEditor__CodeCompletionModelControllerInterface_OnUpdateCompletionRange((KTextEditor__CodeCompletionModelControllerInterface*)self, (intptr_t)callback);
}

KTextEditor__Range* k_texteditor__codecompletionmodelcontrollerinterface_super_update_completion_range(void* self, void* view, void* range) {
    return KTextEditor__CodeCompletionModelControllerInterface_SuperUpdateCompletionRange((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view, (KTextEditor__Range*)range);
}

const char* k_texteditor__codecompletionmodelcontrollerinterface_filter_string(void* self, void* view, void* range, void* position) {
    libqt_string _str = KTextEditor__CodeCompletionModelControllerInterface_FilterString((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view, (KTextEditor__Range*)range, (KTextEditor__Cursor*)position);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__codecompletionmodelcontrollerinterface_on_filter_string(void* self, const char* (*callback)(void*, void*, void*, void*)) {
    KTextEditor__CodeCompletionModelControllerInterface_OnFilterString((KTextEditor__CodeCompletionModelControllerInterface*)self, (intptr_t)callback);
}

const char* k_texteditor__codecompletionmodelcontrollerinterface_super_filter_string(void* self, void* view, void* range, void* position) {
    libqt_string _str = KTextEditor__CodeCompletionModelControllerInterface_SuperFilterString((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view, (KTextEditor__Range*)range, (KTextEditor__Cursor*)position);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texteditor__codecompletionmodelcontrollerinterface_should_abort_completion(void* self, void* view, void* range, const char* currentCompletion) {
    return KTextEditor__CodeCompletionModelControllerInterface_ShouldAbortCompletion((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view, (KTextEditor__Range*)range, qstring(currentCompletion));
}

void k_texteditor__codecompletionmodelcontrollerinterface_on_should_abort_completion(void* self, bool (*callback)(void*, void*, void*, const char*)) {
    KTextEditor__CodeCompletionModelControllerInterface_OnShouldAbortCompletion((KTextEditor__CodeCompletionModelControllerInterface*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodelcontrollerinterface_super_should_abort_completion(void* self, void* view, void* range, const char* currentCompletion) {
    return KTextEditor__CodeCompletionModelControllerInterface_SuperShouldAbortCompletion((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view, (KTextEditor__Range*)range, qstring(currentCompletion));
}

bool k_texteditor__codecompletionmodelcontrollerinterface_should_execute(void* self, void* selected, void* inserted) {
    return KTextEditor__CodeCompletionModelControllerInterface_ShouldExecute((KTextEditor__CodeCompletionModelControllerInterface*)self, (QModelIndex*)selected, (QChar*)inserted);
}

void k_texteditor__codecompletionmodelcontrollerinterface_on_should_execute(void* self, bool (*callback)(void*, void*, void*)) {
    KTextEditor__CodeCompletionModelControllerInterface_OnShouldExecute((KTextEditor__CodeCompletionModelControllerInterface*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodelcontrollerinterface_super_should_execute(void* self, void* selected, void* inserted) {
    return KTextEditor__CodeCompletionModelControllerInterface_SuperShouldExecute((KTextEditor__CodeCompletionModelControllerInterface*)self, (QModelIndex*)selected, (QChar*)inserted);
}

void k_texteditor__codecompletionmodelcontrollerinterface_aborted(void* self, void* view) {
    KTextEditor__CodeCompletionModelControllerInterface_Aborted((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view);
}

void k_texteditor__codecompletionmodelcontrollerinterface_on_aborted(void* self, void (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModelControllerInterface_OnAborted((KTextEditor__CodeCompletionModelControllerInterface*)self, (intptr_t)callback);
}

void k_texteditor__codecompletionmodelcontrollerinterface_super_aborted(void* self, void* view) {
    KTextEditor__CodeCompletionModelControllerInterface_SuperAborted((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__View*)view);
}

int32_t k_texteditor__codecompletionmodelcontrollerinterface_matching_item(void* self, void* matched) {
    return KTextEditor__CodeCompletionModelControllerInterface_MatchingItem((KTextEditor__CodeCompletionModelControllerInterface*)self, (QModelIndex*)matched);
}

void k_texteditor__codecompletionmodelcontrollerinterface_on_matching_item(void* self, int32_t (*callback)(void*, void*)) {
    KTextEditor__CodeCompletionModelControllerInterface_OnMatchingItem((KTextEditor__CodeCompletionModelControllerInterface*)self, (intptr_t)callback);
}

int32_t k_texteditor__codecompletionmodelcontrollerinterface_super_matching_item(void* self, void* matched) {
    return KTextEditor__CodeCompletionModelControllerInterface_SuperMatchingItem((KTextEditor__CodeCompletionModelControllerInterface*)self, (QModelIndex*)matched);
}

bool k_texteditor__codecompletionmodelcontrollerinterface_should_hide_items_with_equal_names(void* self) {
    return KTextEditor__CodeCompletionModelControllerInterface_ShouldHideItemsWithEqualNames((KTextEditor__CodeCompletionModelControllerInterface*)self);
}

void k_texteditor__codecompletionmodelcontrollerinterface_on_should_hide_items_with_equal_names(void* self, bool (*callback)()) {
    KTextEditor__CodeCompletionModelControllerInterface_OnShouldHideItemsWithEqualNames((KTextEditor__CodeCompletionModelControllerInterface*)self, (intptr_t)callback);
}

bool k_texteditor__codecompletionmodelcontrollerinterface_super_should_hide_items_with_equal_names(void* self) {
    return KTextEditor__CodeCompletionModelControllerInterface_SuperShouldHideItemsWithEqualNames((KTextEditor__CodeCompletionModelControllerInterface*)self);
}

void k_texteditor__codecompletionmodelcontrollerinterface_operator_assign(void* self, void* param1) {
    KTextEditor__CodeCompletionModelControllerInterface_OperatorAssign((KTextEditor__CodeCompletionModelControllerInterface*)self, (KTextEditor__CodeCompletionModelControllerInterface*)param1);
}

void k_texteditor__codecompletionmodelcontrollerinterface_delete(void* self) {
    KTextEditor__CodeCompletionModelControllerInterface_Delete((KTextEditor__CodeCompletionModelControllerInterface*)(self));
}
