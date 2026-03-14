#include "libqbluetoothaddress.hpp"
#include "libqbluetoothaddress.h"

QBluetoothAddress* q_bluetoothaddress_new() {
    return QBluetoothAddress_new();
}

QBluetoothAddress* q_bluetoothaddress_new2(uint64_t address) {
    return QBluetoothAddress_new2(address);
}

QBluetoothAddress* q_bluetoothaddress_new3(const char* address) {
    return QBluetoothAddress_new3(qstring(address));
}

QBluetoothAddress* q_bluetoothaddress_new4(void* other) {
    return QBluetoothAddress_new4((QBluetoothAddress*)other);
}

void q_bluetoothaddress_operator_assign(void* self, void* other) {
    QBluetoothAddress_OperatorAssign((QBluetoothAddress*)self, (QBluetoothAddress*)other);
}

bool q_bluetoothaddress_is_null(void* self) {
    return QBluetoothAddress_IsNull((QBluetoothAddress*)self);
}

void q_bluetoothaddress_clear(void* self) {
    QBluetoothAddress_Clear((QBluetoothAddress*)self);
}

uint64_t q_bluetoothaddress_to_u_int64(void* self) {
    return QBluetoothAddress_ToUInt64((QBluetoothAddress*)self);
}

const char* q_bluetoothaddress_to_string(void* self) {
    libqt_string _str = QBluetoothAddress_ToString((QBluetoothAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothaddress_delete(void* self) {
    QBluetoothAddress_Delete((QBluetoothAddress*)(self));
}
