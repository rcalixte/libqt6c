#include "libtagsfilterchecker.hpp"
#include "libtagsfilterchecker.h"

KNSCore__TagsFilterChecker* k_nscore__tagsfilterchecker_new(const char* tagFilter[static 1]) {
    size_t tagFilter_len = libqt_strv_length(tagFilter);
    libqt_string* tagFilter_qstr = (libqt_string*)malloc(tagFilter_len * sizeof(libqt_string));
    if (tagFilter_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_nscore__tagsfilterchecker_new");
        abort();
    }
    for (size_t i = 0; i < tagFilter_len; ++i) {
        tagFilter_qstr[i] = qstring(tagFilter[i]);
    }
    libqt_list tagFilter_list = qlist(tagFilter_qstr, tagFilter_len);

    KNSCore__TagsFilterChecker* _out = KNSCore__TagsFilterChecker_new(tagFilter_list);
    free(tagFilter_qstr);
    return _out;
}

bool k_nscore__tagsfilterchecker_filter_accepts(void* self, const char* tags[static 1]) {
    size_t tags_len = libqt_strv_length(tags);
    libqt_string* tags_qstr = (libqt_string*)malloc(tags_len * sizeof(libqt_string));
    if (tags_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_nscore__tagsfilterchecker_filter_accepts");
        abort();
    }
    for (size_t i = 0; i < tags_len; ++i) {
        tags_qstr[i] = qstring(tags[i]);
    }
    libqt_list tags_list = qlist(tags_qstr, tags_len);
    bool _out = KNSCore__TagsFilterChecker_FilterAccepts((KNSCore__TagsFilterChecker*)self, tags_list);
    free(tags_qstr);
    return _out;
}

void k_nscore__tagsfilterchecker_delete(void* self) {
    KNSCore__TagsFilterChecker_Delete((KNSCore__TagsFilterChecker*)(self));
}
