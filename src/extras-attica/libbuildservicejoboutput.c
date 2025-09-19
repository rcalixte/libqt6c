#include "libbuildservicejoboutput.hpp"
#include "libbuildservicejoboutput.h"

Attica__BuildServiceJobOutput* k_attica__buildservicejoboutput_new() {
    return Attica__BuildServiceJobOutput_new();
}

Attica__BuildServiceJobOutput* k_attica__buildservicejoboutput_new2(void* other) {
    return Attica__BuildServiceJobOutput_new2((Attica__BuildServiceJobOutput*)other);
}

void k_attica__buildservicejoboutput_operator_assign(void* self, void* other) {
    Attica__BuildServiceJobOutput_OperatorAssign((Attica__BuildServiceJobOutput*)self, (Attica__BuildServiceJobOutput*)other);
}

void k_attica__buildservicejoboutput_set_output(void* self, const char* output) {
    Attica__BuildServiceJobOutput_SetOutput((Attica__BuildServiceJobOutput*)self, qstring(output));
}

const char* k_attica__buildservicejoboutput_output(void* self) {
    libqt_string _str = Attica__BuildServiceJobOutput_Output((Attica__BuildServiceJobOutput*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__buildservicejoboutput_is_running(void* self) {
    return Attica__BuildServiceJobOutput_IsRunning((Attica__BuildServiceJobOutput*)self);
}

bool k_attica__buildservicejoboutput_is_completed(void* self) {
    return Attica__BuildServiceJobOutput_IsCompleted((Attica__BuildServiceJobOutput*)self);
}

bool k_attica__buildservicejoboutput_is_failed(void* self) {
    return Attica__BuildServiceJobOutput_IsFailed((Attica__BuildServiceJobOutput*)self);
}

bool k_attica__buildservicejoboutput_is_valid(void* self) {
    return Attica__BuildServiceJobOutput_IsValid((Attica__BuildServiceJobOutput*)self);
}

void k_attica__buildservicejoboutput_delete(void* self) {
    Attica__BuildServiceJobOutput_Delete((Attica__BuildServiceJobOutput*)(self));
}
