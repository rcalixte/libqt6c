#include "libqdbusunixfiledescriptor.hpp"
#include "libqdbusunixfiledescriptor.h"

QDBusUnixFileDescriptor* q_dbusunixfiledescriptor_new() {
    return QDBusUnixFileDescriptor_new();
}

QDBusUnixFileDescriptor* q_dbusunixfiledescriptor_new2(int fileDescriptor) {
    return QDBusUnixFileDescriptor_new2(fileDescriptor);
}

QDBusUnixFileDescriptor* q_dbusunixfiledescriptor_new3(void* other) {
    return QDBusUnixFileDescriptor_new3((QDBusUnixFileDescriptor*)other);
}

void q_dbusunixfiledescriptor_operator_assign(void* self, void* other) {
    QDBusUnixFileDescriptor_OperatorAssign((QDBusUnixFileDescriptor*)self, (QDBusUnixFileDescriptor*)other);
}

void q_dbusunixfiledescriptor_swap(void* self, void* other) {
    QDBusUnixFileDescriptor_Swap((QDBusUnixFileDescriptor*)self, (QDBusUnixFileDescriptor*)other);
}

bool q_dbusunixfiledescriptor_is_valid(void* self) {
    return QDBusUnixFileDescriptor_IsValid((QDBusUnixFileDescriptor*)self);
}

int32_t q_dbusunixfiledescriptor_file_descriptor(void* self) {
    return QDBusUnixFileDescriptor_FileDescriptor((QDBusUnixFileDescriptor*)self);
}

void q_dbusunixfiledescriptor_set_file_descriptor(void* self, int fileDescriptor) {
    QDBusUnixFileDescriptor_SetFileDescriptor((QDBusUnixFileDescriptor*)self, fileDescriptor);
}

void q_dbusunixfiledescriptor_give_file_descriptor(void* self, int fileDescriptor) {
    QDBusUnixFileDescriptor_GiveFileDescriptor((QDBusUnixFileDescriptor*)self, fileDescriptor);
}

int32_t q_dbusunixfiledescriptor_take_file_descriptor(void* self) {
    return QDBusUnixFileDescriptor_TakeFileDescriptor((QDBusUnixFileDescriptor*)self);
}

bool q_dbusunixfiledescriptor_is_supported() {
    return QDBusUnixFileDescriptor_IsSupported();
}

void q_dbusunixfiledescriptor_delete(void* self) {
    QDBusUnixFileDescriptor_Delete((QDBusUnixFileDescriptor*)(self));
}
