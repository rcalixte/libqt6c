#include "libopenurlarguments.hpp"
#include "libopenurlarguments.h"

KParts__OpenUrlArguments* k_parts__openurlarguments_new() {
    return KParts__OpenUrlArguments_new();
}

KParts__OpenUrlArguments* k_parts__openurlarguments_new2(void* other) {
    return KParts__OpenUrlArguments_new2((KParts__OpenUrlArguments*)other);
}

void k_parts__openurlarguments_operator_assign(void* self, void* other) {
    KParts__OpenUrlArguments_OperatorAssign((KParts__OpenUrlArguments*)self, (KParts__OpenUrlArguments*)other);
}

bool k_parts__openurlarguments_reload(void* self) {
    return KParts__OpenUrlArguments_Reload((KParts__OpenUrlArguments*)self);
}

void k_parts__openurlarguments_set_reload(void* self, bool b) {
    KParts__OpenUrlArguments_SetReload((KParts__OpenUrlArguments*)self, b);
}

int32_t k_parts__openurlarguments_x_offset(void* self) {
    return KParts__OpenUrlArguments_XOffset((KParts__OpenUrlArguments*)self);
}

void k_parts__openurlarguments_set_x_offset(void* self, int x) {
    KParts__OpenUrlArguments_SetXOffset((KParts__OpenUrlArguments*)self, x);
}

int32_t k_parts__openurlarguments_y_offset(void* self) {
    return KParts__OpenUrlArguments_YOffset((KParts__OpenUrlArguments*)self);
}

void k_parts__openurlarguments_set_y_offset(void* self, int y) {
    KParts__OpenUrlArguments_SetYOffset((KParts__OpenUrlArguments*)self, y);
}

const char* k_parts__openurlarguments_mime_type(void* self) {
    libqt_string _str = KParts__OpenUrlArguments_MimeType((KParts__OpenUrlArguments*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__openurlarguments_set_mime_type(void* self, const char* mime) {
    KParts__OpenUrlArguments_SetMimeType((KParts__OpenUrlArguments*)self, qstring(mime));
}

bool k_parts__openurlarguments_action_requested_by_user(void* self) {
    return KParts__OpenUrlArguments_ActionRequestedByUser((KParts__OpenUrlArguments*)self);
}

void k_parts__openurlarguments_set_action_requested_by_user(void* self, bool userRequested) {
    KParts__OpenUrlArguments_SetActionRequestedByUser((KParts__OpenUrlArguments*)self, userRequested);
}

libqt_map /* of const char* to const char* */ k_parts__openurlarguments_meta_data(void* self) {
    return KParts__OpenUrlArguments_MetaData((KParts__OpenUrlArguments*)self);
}

libqt_map /* of const char* to const char* */ k_parts__openurlarguments_meta_data2(void* self) {
    return KParts__OpenUrlArguments_MetaData2((KParts__OpenUrlArguments*)self);
}

void k_parts__openurlarguments_delete(void* self) {
    KParts__OpenUrlArguments_Delete((KParts__OpenUrlArguments*)(self));
}
