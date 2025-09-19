#include "libbuildservicejob.hpp"
#include "libbuildservicejob.h"

Attica__BuildServiceJob* k_attica__buildservicejob_new() {
    return Attica__BuildServiceJob_new();
}

Attica__BuildServiceJob* k_attica__buildservicejob_new2(void* other) {
    return Attica__BuildServiceJob_new2((Attica__BuildServiceJob*)other);
}

void k_attica__buildservicejob_operator_assign(void* self, void* other) {
    Attica__BuildServiceJob_OperatorAssign((Attica__BuildServiceJob*)self, (Attica__BuildServiceJob*)other);
}

void k_attica__buildservicejob_set_id(void* self, const char* id) {
    Attica__BuildServiceJob_SetId((Attica__BuildServiceJob*)self, qstring(id));
}

const char* k_attica__buildservicejob_id(void* self) {
    libqt_string _str = Attica__BuildServiceJob_Id((Attica__BuildServiceJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__buildservicejob_set_name(void* self, const char* name) {
    Attica__BuildServiceJob_SetName((Attica__BuildServiceJob*)self, qstring(name));
}

const char* k_attica__buildservicejob_name(void* self) {
    libqt_string _str = Attica__BuildServiceJob_Name((Attica__BuildServiceJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__buildservicejob_set_url(void* self, const char* url) {
    Attica__BuildServiceJob_SetUrl((Attica__BuildServiceJob*)self, qstring(url));
}

const char* k_attica__buildservicejob_url(void* self) {
    libqt_string _str = Attica__BuildServiceJob_Url((Attica__BuildServiceJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__buildservicejob_set_project_id(void* self, const char* projectId) {
    Attica__BuildServiceJob_SetProjectId((Attica__BuildServiceJob*)self, qstring(projectId));
}

const char* k_attica__buildservicejob_project_id(void* self) {
    libqt_string _str = Attica__BuildServiceJob_ProjectId((Attica__BuildServiceJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__buildservicejob_set_build_service_id(void* self, const char* buildServiceId) {
    Attica__BuildServiceJob_SetBuildServiceId((Attica__BuildServiceJob*)self, qstring(buildServiceId));
}

const char* k_attica__buildservicejob_build_service_id(void* self) {
    libqt_string _str = Attica__BuildServiceJob_BuildServiceId((Attica__BuildServiceJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__buildservicejob_set_message(void* self, const char* message) {
    Attica__BuildServiceJob_SetMessage((Attica__BuildServiceJob*)self, qstring(message));
}

const char* k_attica__buildservicejob_message(void* self) {
    libqt_string _str = Attica__BuildServiceJob_Message((Attica__BuildServiceJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__buildservicejob_set_target(void* self, const char* target) {
    Attica__BuildServiceJob_SetTarget((Attica__BuildServiceJob*)self, qstring(target));
}

const char* k_attica__buildservicejob_target(void* self) {
    libqt_string _str = Attica__BuildServiceJob_Target((Attica__BuildServiceJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__buildservicejob_set_progress(void* self, const double progress) {
    Attica__BuildServiceJob_SetProgress((Attica__BuildServiceJob*)self, progress);
}

double k_attica__buildservicejob_progress(void* self) {
    return Attica__BuildServiceJob_Progress((Attica__BuildServiceJob*)self);
}

void k_attica__buildservicejob_set_status(void* self, int status) {
    Attica__BuildServiceJob_SetStatus((Attica__BuildServiceJob*)self, status);
}

bool k_attica__buildservicejob_is_running(void* self) {
    return Attica__BuildServiceJob_IsRunning((Attica__BuildServiceJob*)self);
}

bool k_attica__buildservicejob_is_completed(void* self) {
    return Attica__BuildServiceJob_IsCompleted((Attica__BuildServiceJob*)self);
}

bool k_attica__buildservicejob_is_failed(void* self) {
    return Attica__BuildServiceJob_IsFailed((Attica__BuildServiceJob*)self);
}

bool k_attica__buildservicejob_is_valid(void* self) {
    return Attica__BuildServiceJob_IsValid((Attica__BuildServiceJob*)self);
}

void k_attica__buildservicejob_delete(void* self) {
    Attica__BuildServiceJob_Delete((Attica__BuildServiceJob*)(self));
}
