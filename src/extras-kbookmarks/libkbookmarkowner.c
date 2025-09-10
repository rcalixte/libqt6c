#include "libkbookmark.hpp"
#include "../libqurl.hpp"
#include "libkbookmarkowner.hpp"
#include "libkbookmarkowner.h"

KBookmarkOwner* k_bookmarkowner_new() {
    return KBookmarkOwner_new();
}

const char* k_bookmarkowner_current_title(void* self) {
    libqt_string _str = KBookmarkOwner_CurrentTitle((KBookmarkOwner*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkowner_on_current_title(void* self, const char* (*callback)()) {
    KBookmarkOwner_OnCurrentTitle((KBookmarkOwner*)self, (intptr_t)callback);
}

const char* k_bookmarkowner_qbase_current_title(void* self) {
    libqt_string _str = KBookmarkOwner_QBaseCurrentTitle((KBookmarkOwner*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_bookmarkowner_current_url(void* self) {
    return KBookmarkOwner_CurrentUrl((KBookmarkOwner*)self);
}

void k_bookmarkowner_on_current_url(void* self, QUrl* (*callback)()) {
    KBookmarkOwner_OnCurrentUrl((KBookmarkOwner*)self, (intptr_t)callback);
}

QUrl* k_bookmarkowner_qbase_current_url(void* self) {
    return KBookmarkOwner_QBaseCurrentUrl((KBookmarkOwner*)self);
}

const char* k_bookmarkowner_current_icon(void* self) {
    libqt_string _str = KBookmarkOwner_CurrentIcon((KBookmarkOwner*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkowner_on_current_icon(void* self, const char* (*callback)()) {
    KBookmarkOwner_OnCurrentIcon((KBookmarkOwner*)self, (intptr_t)callback);
}

const char* k_bookmarkowner_qbase_current_icon(void* self) {
    libqt_string _str = KBookmarkOwner_QBaseCurrentIcon((KBookmarkOwner*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_bookmarkowner_supports_tabs(void* self) {
    return KBookmarkOwner_SupportsTabs((KBookmarkOwner*)self);
}

void k_bookmarkowner_on_supports_tabs(void* self, bool (*callback)()) {
    KBookmarkOwner_OnSupportsTabs((KBookmarkOwner*)self, (intptr_t)callback);
}

bool k_bookmarkowner_qbase_supports_tabs(void* self) {
    return KBookmarkOwner_QBaseSupportsTabs((KBookmarkOwner*)self);
}

libqt_list /* of KBookmarkOwner__FutureBookmark* */ k_bookmarkowner_current_bookmark_list(void* self) {
    libqt_list _arr = KBookmarkOwner_CurrentBookmarkList((KBookmarkOwner*)self);
    return _arr;
}

void k_bookmarkowner_on_current_bookmark_list(void* self, libqt_list /* of KBookmarkOwner__FutureBookmark* */ (*callback)()) {
    KBookmarkOwner_OnCurrentBookmarkList((KBookmarkOwner*)self, (intptr_t)callback);
}

libqt_list /* of KBookmarkOwner__FutureBookmark* */ k_bookmarkowner_qbase_current_bookmark_list(void* self) {
    libqt_list _arr = KBookmarkOwner_QBaseCurrentBookmarkList((KBookmarkOwner*)self);
    return _arr;
}

bool k_bookmarkowner_enable_option(void* self, int32_t option) {
    return KBookmarkOwner_EnableOption((KBookmarkOwner*)self, option);
}

void k_bookmarkowner_on_enable_option(void* self, bool (*callback)(void*, int32_t)) {
    KBookmarkOwner_OnEnableOption((KBookmarkOwner*)self, (intptr_t)callback);
}

bool k_bookmarkowner_qbase_enable_option(void* self, int32_t option) {
    return KBookmarkOwner_QBaseEnableOption((KBookmarkOwner*)self, option);
}

void k_bookmarkowner_open_bookmark(void* self, void* bm, int64_t mb, int64_t km) {
    KBookmarkOwner_OpenBookmark((KBookmarkOwner*)self, (KBookmark*)bm, mb, km);
}

void k_bookmarkowner_on_open_bookmark(void* self, void (*callback)(void*, void*, int64_t, int64_t)) {
    KBookmarkOwner_OnOpenBookmark((KBookmarkOwner*)self, (intptr_t)callback);
}

void k_bookmarkowner_qbase_open_bookmark(void* self, void* bm, int64_t mb, int64_t km) {
    KBookmarkOwner_QBaseOpenBookmark((KBookmarkOwner*)self, (KBookmark*)bm, mb, km);
}

void k_bookmarkowner_open_folderin_tabs(void* self, void* bm) {
    KBookmarkOwner_OpenFolderinTabs((KBookmarkOwner*)self, (KBookmarkGroup*)bm);
}

void k_bookmarkowner_on_open_folderin_tabs(void* self, void (*callback)(void*, void*)) {
    KBookmarkOwner_OnOpenFolderinTabs((KBookmarkOwner*)self, (intptr_t)callback);
}

void k_bookmarkowner_qbase_open_folderin_tabs(void* self, void* bm) {
    KBookmarkOwner_QBaseOpenFolderinTabs((KBookmarkOwner*)self, (KBookmarkGroup*)bm);
}

void k_bookmarkowner_open_in_new_tab(void* self, void* bm) {
    KBookmarkOwner_OpenInNewTab((KBookmarkOwner*)self, (KBookmark*)bm);
}

void k_bookmarkowner_on_open_in_new_tab(void* self, void (*callback)(void*, void*)) {
    KBookmarkOwner_OnOpenInNewTab((KBookmarkOwner*)self, (intptr_t)callback);
}

void k_bookmarkowner_qbase_open_in_new_tab(void* self, void* bm) {
    KBookmarkOwner_QBaseOpenInNewTab((KBookmarkOwner*)self, (KBookmark*)bm);
}

void k_bookmarkowner_open_in_new_window(void* self, void* bm) {
    KBookmarkOwner_OpenInNewWindow((KBookmarkOwner*)self, (KBookmark*)bm);
}

void k_bookmarkowner_on_open_in_new_window(void* self, void (*callback)(void*, void*)) {
    KBookmarkOwner_OnOpenInNewWindow((KBookmarkOwner*)self, (intptr_t)callback);
}

void k_bookmarkowner_qbase_open_in_new_window(void* self, void* bm) {
    KBookmarkOwner_QBaseOpenInNewWindow((KBookmarkOwner*)self, (KBookmark*)bm);
}

void k_bookmarkowner_delete(void* self) {
    KBookmarkOwner_Delete((KBookmarkOwner*)(self));
}

KBookmarkOwner__FutureBookmark* k_bookmarkowner__futurebookmark_new(const char* title, void* url, const char* icon) {
    return KBookmarkOwner__FutureBookmark_new(qstring(title), (QUrl*)url, qstring(icon));
}

KBookmarkOwner__FutureBookmark* k_bookmarkowner__futurebookmark_new2(void* other) {
    return KBookmarkOwner__FutureBookmark_new2((KBookmarkOwner__FutureBookmark*)other);
}

void k_bookmarkowner__futurebookmark_operator_assign(void* self, void* other) {
    KBookmarkOwner__FutureBookmark_OperatorAssign((KBookmarkOwner__FutureBookmark*)self, (KBookmarkOwner__FutureBookmark*)other);
}

const char* k_bookmarkowner__futurebookmark_title(void* self) {
    libqt_string _str = KBookmarkOwner__FutureBookmark_Title((KBookmarkOwner__FutureBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_bookmarkowner__futurebookmark_url(void* self) {
    return KBookmarkOwner__FutureBookmark_Url((KBookmarkOwner__FutureBookmark*)self);
}

const char* k_bookmarkowner__futurebookmark_icon(void* self) {
    libqt_string _str = KBookmarkOwner__FutureBookmark_Icon((KBookmarkOwner__FutureBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkowner__futurebookmark_delete(void* self) {
    KBookmarkOwner__FutureBookmark_Delete((KBookmarkOwner__FutureBookmark*)(self));
}
