#include <string.h>
#include "libqsysinfo.hpp"
#include "libqsysinfo.h"

QSysInfo* q_sysinfo_new(void* other) {
    return QSysInfo_new((QSysInfo*)other);
}

QSysInfo* q_sysinfo_new2(void* other) {
    return QSysInfo_new2((QSysInfo*)other);
}

void q_sysinfo_copy_assign(void* self, void* other) {
    QSysInfo_CopyAssign((QSysInfo*)self, (QSysInfo*)other);
}

void q_sysinfo_move_assign(void* self, void* other) {
    QSysInfo_MoveAssign((QSysInfo*)self, (QSysInfo*)other);
}

const char* q_sysinfo_build_cpu_architecture() {
    libqt_string _str = QSysInfo_BuildCpuArchitecture();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sysinfo_current_cpu_architecture() {
    libqt_string _str = QSysInfo_CurrentCpuArchitecture();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sysinfo_build_abi() {
    libqt_string _str = QSysInfo_BuildAbi();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sysinfo_kernel_type() {
    libqt_string _str = QSysInfo_KernelType();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sysinfo_kernel_version() {
    libqt_string _str = QSysInfo_KernelVersion();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sysinfo_product_type() {
    libqt_string _str = QSysInfo_ProductType();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sysinfo_product_version() {
    libqt_string _str = QSysInfo_ProductVersion();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sysinfo_pretty_product_name() {
    libqt_string _str = QSysInfo_PrettyProductName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sysinfo_machine_host_name() {
    libqt_string _str = QSysInfo_MachineHostName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_sysinfo_machine_unique_id() {
    libqt_string _str = QSysInfo_MachineUniqueId();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_sysinfo_boot_unique_id() {
    libqt_string _str = QSysInfo_BootUniqueId();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sysinfo_delete(void* self) {
    QSysInfo_Delete((QSysInfo*)(self));
}
