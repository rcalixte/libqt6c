#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libachievement.hpp"
#include "libachievement.h"

Attica__Achievement* k_attica__achievement_new() {
    return Attica__Achievement_new();
}

Attica__Achievement* k_attica__achievement_new2(void* other) {
    return Attica__Achievement_new2((Attica__Achievement*)other);
}

int32_t k_attica__achievement_string_to_achievement_type(const char* achievementTypeString) {
    return Attica__Achievement_StringToAchievementType(qstring(achievementTypeString));
}

const char* k_attica__achievement_achievement_type_to_string(int32_t type) {
    libqt_string _str = Attica__Achievement_AchievementTypeToString(type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_attica__achievement_string_to_achievement_visibility(const char* achievementVisibilityString) {
    return Attica__Achievement_StringToAchievementVisibility(qstring(achievementVisibilityString));
}

const char* k_attica__achievement_achievement_visibility_to_string(int32_t visibility) {
    libqt_string _str = Attica__Achievement_AchievementVisibilityToString(visibility);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__achievement_operator_assign(void* self, void* other) {
    Attica__Achievement_OperatorAssign((Attica__Achievement*)self, (Attica__Achievement*)other);
}

void k_attica__achievement_set_id(void* self, const char* id) {
    Attica__Achievement_SetId((Attica__Achievement*)self, qstring(id));
}

const char* k_attica__achievement_id(void* self) {
    libqt_string _str = Attica__Achievement_Id((Attica__Achievement*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__achievement_set_content_id(void* self, const char* contentId) {
    Attica__Achievement_SetContentId((Attica__Achievement*)self, qstring(contentId));
}

const char* k_attica__achievement_content_id(void* self) {
    libqt_string _str = Attica__Achievement_ContentId((Attica__Achievement*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__achievement_set_name(void* self, const char* name) {
    Attica__Achievement_SetName((Attica__Achievement*)self, qstring(name));
}

const char* k_attica__achievement_name(void* self) {
    libqt_string _str = Attica__Achievement_Name((Attica__Achievement*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__achievement_set_description(void* self, const char* description) {
    Attica__Achievement_SetDescription((Attica__Achievement*)self, qstring(description));
}

const char* k_attica__achievement_description(void* self) {
    libqt_string _str = Attica__Achievement_Description((Attica__Achievement*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__achievement_set_explanation(void* self, const char* explanation) {
    Attica__Achievement_SetExplanation((Attica__Achievement*)self, qstring(explanation));
}

const char* k_attica__achievement_explanation(void* self) {
    libqt_string _str = Attica__Achievement_Explanation((Attica__Achievement*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__achievement_set_points(void* self, int points) {
    Attica__Achievement_SetPoints((Attica__Achievement*)self, points);
}

int32_t k_attica__achievement_points(void* self) {
    return Attica__Achievement_Points((Attica__Achievement*)self);
}

void k_attica__achievement_set_image(void* self, void* image) {
    Attica__Achievement_SetImage((Attica__Achievement*)self, (QUrl*)image);
}

QUrl* k_attica__achievement_image(void* self) {
    return Attica__Achievement_Image((Attica__Achievement*)self);
}

void k_attica__achievement_set_dependencies(void* self, const char* dependencies[]) {
    size_t dependencies_len = libqt_strv_length(dependencies);
    libqt_string* dependencies_qstr = (libqt_string*)malloc(dependencies_len * sizeof(libqt_string));
    if (dependencies_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__achievement_set_dependencies");
        abort();
    }
    for (size_t i = 0; i < dependencies_len; ++i) {
        dependencies_qstr[i] = qstring(dependencies[i]);
    }
    libqt_list dependencies_list = qlist(dependencies_qstr, dependencies_len);
    Attica__Achievement_SetDependencies((Attica__Achievement*)self, dependencies_list);
    free(dependencies_qstr);
}

void k_attica__achievement_add_dependency(void* self, const char* dependency) {
    Attica__Achievement_AddDependency((Attica__Achievement*)self, qstring(dependency));
}

void k_attica__achievement_remove_dependency(void* self, const char* dependency) {
    Attica__Achievement_RemoveDependency((Attica__Achievement*)self, qstring(dependency));
}

const char** k_attica__achievement_dependencies(void* self) {
    libqt_list _arr = Attica__Achievement_Dependencies((Attica__Achievement*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__achievement_dependencies");
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

void k_attica__achievement_set_visibility(void* self, int32_t visibility) {
    Attica__Achievement_SetVisibility((Attica__Achievement*)self, visibility);
}

int32_t k_attica__achievement_visibility(void* self) {
    return Attica__Achievement_Visibility((Attica__Achievement*)self);
}

void k_attica__achievement_set_type(void* self, int32_t type) {
    Attica__Achievement_SetType((Attica__Achievement*)self, type);
}

int32_t k_attica__achievement_type(void* self) {
    return Attica__Achievement_Type((Attica__Achievement*)self);
}

void k_attica__achievement_set_options(void* self, const char* options[]) {
    size_t options_len = libqt_strv_length(options);
    libqt_string* options_qstr = (libqt_string*)malloc(options_len * sizeof(libqt_string));
    if (options_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__achievement_set_options");
        abort();
    }
    for (size_t i = 0; i < options_len; ++i) {
        options_qstr[i] = qstring(options[i]);
    }
    libqt_list options_list = qlist(options_qstr, options_len);
    Attica__Achievement_SetOptions((Attica__Achievement*)self, options_list);
    free(options_qstr);
}

void k_attica__achievement_add_option(void* self, const char* option) {
    Attica__Achievement_AddOption((Attica__Achievement*)self, qstring(option));
}

void k_attica__achievement_remove_option(void* self, const char* option) {
    Attica__Achievement_RemoveOption((Attica__Achievement*)self, qstring(option));
}

const char** k_attica__achievement_options(void* self) {
    libqt_list _arr = Attica__Achievement_Options((Attica__Achievement*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__achievement_options");
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

void k_attica__achievement_set_steps(void* self, int steps) {
    Attica__Achievement_SetSteps((Attica__Achievement*)self, steps);
}

int32_t k_attica__achievement_steps(void* self) {
    return Attica__Achievement_Steps((Attica__Achievement*)self);
}

void k_attica__achievement_set_progress(void* self, void* progress) {
    Attica__Achievement_SetProgress((Attica__Achievement*)self, (QVariant*)progress);
}

QVariant* k_attica__achievement_progress(void* self) {
    return Attica__Achievement_Progress((Attica__Achievement*)self);
}

bool k_attica__achievement_is_valid(void* self) {
    return Attica__Achievement_IsValid((Attica__Achievement*)self);
}

void k_attica__achievement_delete(void* self) {
    Attica__Achievement_Delete((Attica__Achievement*)(self));
}
