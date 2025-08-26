#include "libkprocesslist.hpp"
#include "libkprocesslist.h"

KProcessList__KProcessInfo* k_processlist__kprocessinfo_new() {
    return KProcessList__KProcessInfo_new();
}

KProcessList__KProcessInfo* k_processlist__kprocessinfo_new2(long long pid, const char* command, const char* user) {
    return KProcessList__KProcessInfo_new2(pid, qstring(command), qstring(user));
}

KProcessList__KProcessInfo* k_processlist__kprocessinfo_new3(long long pid, const char* command, const char* name, const char* user) {
    return KProcessList__KProcessInfo_new3(pid, qstring(command), qstring(name), qstring(user));
}

KProcessList__KProcessInfo* k_processlist__kprocessinfo_new4(void* other) {
    return KProcessList__KProcessInfo_new4((KProcessList__KProcessInfo*)other);
}

void k_processlist__kprocessinfo_operator_assign(void* self, void* other) {
    KProcessList__KProcessInfo_OperatorAssign((KProcessList__KProcessInfo*)self, (KProcessList__KProcessInfo*)other);
}

bool k_processlist__kprocessinfo_is_valid(void* self) {
    return KProcessList__KProcessInfo_IsValid((KProcessList__KProcessInfo*)self);
}

long long k_processlist__kprocessinfo_pid(void* self) {
    return KProcessList__KProcessInfo_Pid((KProcessList__KProcessInfo*)self);
}

const char* k_processlist__kprocessinfo_name(void* self) {
    libqt_string _str = KProcessList__KProcessInfo_Name((KProcessList__KProcessInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_processlist__kprocessinfo_user(void* self) {
    libqt_string _str = KProcessList__KProcessInfo_User((KProcessList__KProcessInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_processlist__kprocessinfo_command(void* self) {
    libqt_string _str = KProcessList__KProcessInfo_Command((KProcessList__KProcessInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_processlist__kprocessinfo_delete(void* self) {
    KProcessList__KProcessInfo_Delete((KProcessList__KProcessInfo*)(self));
}

libqt_list /* of KProcessList__KProcessInfo* */ k_processlist_process_info_list() {
    libqt_list _arr = KProcessList_ProcessInfoList();
    return _arr;
}

KProcessList__KProcessInfo* k_processlist_process_info(long long param1) {
    return KProcessList_ProcessInfo(param1);
}
