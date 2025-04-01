#include "libqhostaddress.hpp"
#include "libqnetworkdatagram.hpp"
#include "libqnetworkdatagram.h"

QNetworkDatagram* q_networkdatagram_new() {
    return QNetworkDatagram_new();
}

QNetworkDatagram* q_networkdatagram_new2(const char* data) {
    return QNetworkDatagram_new2(qstring(data));
}

QNetworkDatagram* q_networkdatagram_new3(void* other) {
    return QNetworkDatagram_new3((QNetworkDatagram*)other);
}

QNetworkDatagram* q_networkdatagram_new4(const char* data, void* destinationAddress) {
    return QNetworkDatagram_new4(qstring(data), (QHostAddress*)destinationAddress);
}

QNetworkDatagram* q_networkdatagram_new5(const char* data, void* destinationAddress, unsigned short port) {
    return QNetworkDatagram_new5(qstring(data), (QHostAddress*)destinationAddress, port);
}

void q_networkdatagram_operator_assign(void* self, void* other) {
    QNetworkDatagram_OperatorAssign((QNetworkDatagram*)self, (QNetworkDatagram*)other);
}

void q_networkdatagram_swap(void* self, void* other) {
    QNetworkDatagram_Swap((QNetworkDatagram*)self, (QNetworkDatagram*)other);
}

void q_networkdatagram_clear(void* self) {
    QNetworkDatagram_Clear((QNetworkDatagram*)self);
}

bool q_networkdatagram_is_valid(void* self) {
    return QNetworkDatagram_IsValid((QNetworkDatagram*)self);
}

bool q_networkdatagram_is_null(void* self) {
    return QNetworkDatagram_IsNull((QNetworkDatagram*)self);
}

uint32_t q_networkdatagram_interface_index(void* self) {
    return QNetworkDatagram_InterfaceIndex((QNetworkDatagram*)self);
}

void q_networkdatagram_set_interface_index(void* self, uint32_t index) {
    QNetworkDatagram_SetInterfaceIndex((QNetworkDatagram*)self, index);
}

QHostAddress* q_networkdatagram_sender_address(void* self) {
    return QNetworkDatagram_SenderAddress((QNetworkDatagram*)self);
}

QHostAddress* q_networkdatagram_destination_address(void* self) {
    return QNetworkDatagram_DestinationAddress((QNetworkDatagram*)self);
}

int32_t q_networkdatagram_sender_port(void* self) {
    return QNetworkDatagram_SenderPort((QNetworkDatagram*)self);
}

int32_t q_networkdatagram_destination_port(void* self) {
    return QNetworkDatagram_DestinationPort((QNetworkDatagram*)self);
}

void q_networkdatagram_set_sender(void* self, void* address) {
    QNetworkDatagram_SetSender((QNetworkDatagram*)self, (QHostAddress*)address);
}

void q_networkdatagram_set_destination(void* self, void* address, unsigned short port) {
    QNetworkDatagram_SetDestination((QNetworkDatagram*)self, (QHostAddress*)address, port);
}

int32_t q_networkdatagram_hop_limit(void* self) {
    return QNetworkDatagram_HopLimit((QNetworkDatagram*)self);
}

void q_networkdatagram_set_hop_limit(void* self, int count) {
    QNetworkDatagram_SetHopLimit((QNetworkDatagram*)self, count);
}

char* q_networkdatagram_data(void* self) {
    libqt_string _str = QNetworkDatagram_Data((QNetworkDatagram*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkdatagram_set_data(void* self, const char* data) {
    QNetworkDatagram_SetData((QNetworkDatagram*)self, qstring(data));
}

QNetworkDatagram* q_networkdatagram_make_reply(void* self, const char* payload) {
    return QNetworkDatagram_MakeReply((QNetworkDatagram*)self, qstring(payload));
}

void q_networkdatagram_set_sender2(void* self, void* address, unsigned short port) {
    QNetworkDatagram_SetSender2((QNetworkDatagram*)self, (QHostAddress*)address, port);
}

void q_networkdatagram_delete(void* self) {
    QNetworkDatagram_Delete((QNetworkDatagram*)(self));
}
