#include "../libqdatetime.hpp"
#include "../libqurl.hpp"
#include "libkrecentdocument.hpp"
#include "libkrecentdocument.h"

KRecentDocument* k_recentdocument_new(void* other) {
    return KRecentDocument_new((KRecentDocument*)other);
}

KRecentDocument* k_recentdocument_new2(void* other) {
    return KRecentDocument_new2((KRecentDocument*)other);
}

void k_recentdocument_copy_assign(void* self, void* other) {
    KRecentDocument_CopyAssign((KRecentDocument*)self, (KRecentDocument*)other);
}

void k_recentdocument_move_assign(void* self, void* other) {
    KRecentDocument_MoveAssign((KRecentDocument*)self, (KRecentDocument*)other);
}

libqt_list /* of QUrl* */ k_recentdocument_recent_urls() {
    libqt_list _arr = KRecentDocument_RecentUrls();
    return _arr;
}

void k_recentdocument_add(void* url) {
    KRecentDocument_Add((QUrl*)url);
}

void k_recentdocument_add2(void* url, libqt_list groups) {
    KRecentDocument_Add2((QUrl*)url, groups);
}

void k_recentdocument_add3(void* url, const char* desktopEntryName) {
    KRecentDocument_Add3((QUrl*)url, qstring(desktopEntryName));
}

void k_recentdocument_add4(void* url, const char* desktopEntryName, libqt_list groups) {
    KRecentDocument_Add4((QUrl*)url, qstring(desktopEntryName), groups);
}

bool k_recentdocument_clear_entries_oldest_entries(int maxEntries) {
    return KRecentDocument_ClearEntriesOldestEntries(maxEntries);
}

void k_recentdocument_remove_file(void* url) {
    KRecentDocument_RemoveFile((QUrl*)url);
}

void k_recentdocument_remove_application(const char* desktopEntryName) {
    KRecentDocument_RemoveApplication(qstring(desktopEntryName));
}

void k_recentdocument_remove_bookmarks_modified_since(void* since) {
    KRecentDocument_RemoveBookmarksModifiedSince((QDateTime*)since);
}

void k_recentdocument_clear() {
    KRecentDocument_Clear();
}

int32_t k_recentdocument_maximum_items() {
    return KRecentDocument_MaximumItems();
}

void k_recentdocument_delete(void* self) {
    KRecentDocument_Delete((KRecentDocument*)(self));
}
