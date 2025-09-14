#include "libkfile.hpp"
#include "libkfile.h"

KFile* k_file_new(void* other) {
    return KFile_new((KFile*)other);
}

KFile* k_file_new2(void* other) {
    return KFile_new2((KFile*)other);
}

void k_file_copy_assign(void* self, void* other) {
    KFile_CopyAssign((KFile*)self, (KFile*)other);
}

void k_file_move_assign(void* self, void* other) {
    KFile_MoveAssign((KFile*)self, (KFile*)other);
}

bool k_file_is_sort_by_name(const int32_t* sort) {
    return KFile_IsSortByName(sort);
}

bool k_file_is_sort_by_size(const int32_t* sort) {
    return KFile_IsSortBySize(sort);
}

bool k_file_is_sort_by_date(const int32_t* sort) {
    return KFile_IsSortByDate(sort);
}

bool k_file_is_sort_by_type(const int32_t* sort) {
    return KFile_IsSortByType(sort);
}

bool k_file_is_sort_dirs_first(const int32_t* sort) {
    return KFile_IsSortDirsFirst(sort);
}

bool k_file_is_sort_case_insensitive(const int32_t* sort) {
    return KFile_IsSortCaseInsensitive(sort);
}

bool k_file_is_default_view(int32_t* view) {
    return KFile_IsDefaultView(view);
}

bool k_file_is_simple_view(int32_t* view) {
    return KFile_IsSimpleView(view);
}

bool k_file_is_detail_view(int32_t* view) {
    return KFile_IsDetailView(view);
}

bool k_file_is_separate_dirs(int32_t* view) {
    return KFile_IsSeparateDirs(view);
}

bool k_file_is_preview_contents(int32_t* view) {
    return KFile_IsPreviewContents(view);
}

bool k_file_is_preview_info(int32_t* view) {
    return KFile_IsPreviewInfo(view);
}

bool k_file_is_tree_view(int32_t* view) {
    return KFile_IsTreeView(view);
}

bool k_file_is_detail_tree_view(int32_t* view) {
    return KFile_IsDetailTreeView(view);
}

void k_file_delete(void* self) {
    KFile_Delete((KFile*)(self));
}
