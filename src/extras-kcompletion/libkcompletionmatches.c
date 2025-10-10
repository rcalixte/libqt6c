#include "libkcompletionmatches.hpp"
#include "libkcompletionmatches.h"

KCompletionMatches* k_completionmatches_new(bool sort) {
    return KCompletionMatches_new(sort);
}

KCompletionMatches* k_completionmatches_new2(void* param1) {
    return KCompletionMatches_new2((KCompletionMatches*)param1);
}

void k_completionmatches_operator_assign(void* self, void* param1) {
    KCompletionMatches_OperatorAssign((KCompletionMatches*)self, (KCompletionMatches*)param1);
}

void k_completionmatches_remove_duplicates(void* self) {
    KCompletionMatches_RemoveDuplicates((KCompletionMatches*)self);
}

const char** k_completionmatches_list(void* self) {
    libqt_list _arr = KCompletionMatches_List((KCompletionMatches*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_completionmatches_list");
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

bool k_completionmatches_sorting(void* self) {
    return KCompletionMatches_Sorting((KCompletionMatches*)self);
}

const char** k_completionmatches_list1(void* self, bool sort) {
    libqt_list _arr = KCompletionMatches_List1((KCompletionMatches*)self, sort);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_completionmatches_list1");
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

void k_completionmatches_delete(void* self) {
    KCompletionMatches_Delete((KCompletionMatches*)(self));
}
