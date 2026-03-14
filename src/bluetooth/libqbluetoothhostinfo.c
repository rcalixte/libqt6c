#include "libqbluetoothaddress.hpp"
#include "libqbluetoothhostinfo.hpp"
#include "libqbluetoothhostinfo.h"

QBluetoothHostInfo* q_bluetoothhostinfo_new() {
    return QBluetoothHostInfo_new();
}

QBluetoothHostInfo* q_bluetoothhostinfo_new2(void* other) {
    return QBluetoothHostInfo_new2((QBluetoothHostInfo*)other);
}

void q_bluetoothhostinfo_operator_assign(void* self, void* other) {
    QBluetoothHostInfo_OperatorAssign((QBluetoothHostInfo*)self, (QBluetoothHostInfo*)other);
}

QBluetoothAddress* q_bluetoothhostinfo_address(void* self) {
    return QBluetoothHostInfo_Address((QBluetoothHostInfo*)self);
}

void q_bluetoothhostinfo_set_address(void* self, void* address) {
    QBluetoothHostInfo_SetAddress((QBluetoothHostInfo*)self, (QBluetoothAddress*)address);
}

const char* q_bluetoothhostinfo_name(void* self) {
    libqt_string _str = QBluetoothHostInfo_Name((QBluetoothHostInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothhostinfo_set_name(void* self, const char* name) {
    QBluetoothHostInfo_SetName((QBluetoothHostInfo*)self, qstring(name));
}

void q_bluetoothhostinfo_delete(void* self) {
    QBluetoothHostInfo_Delete((QBluetoothHostInfo*)(self));
}
