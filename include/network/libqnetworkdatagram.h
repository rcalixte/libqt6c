#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKDATAGRAM_H
#define SRC_NETWORKQT6C_LIBQNETWORKDATAGRAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqhostaddress.h"

QNetworkDatagram* q_networkdatagram_new();
QNetworkDatagram* q_networkdatagram_new2(const char* data);
QNetworkDatagram* q_networkdatagram_new3(void* other);
QNetworkDatagram* q_networkdatagram_new4(const char* data, void* destinationAddress);
QNetworkDatagram* q_networkdatagram_new5(const char* data, void* destinationAddress, unsigned short port);
void q_networkdatagram_operator_assign(void* self, void* other);
void q_networkdatagram_swap(void* self, void* other);
void q_networkdatagram_clear(void* self);
bool q_networkdatagram_is_valid(void* self);
bool q_networkdatagram_is_null(void* self);
uint32_t q_networkdatagram_interface_index(void* self);
void q_networkdatagram_set_interface_index(void* self, uint32_t index);
QHostAddress* q_networkdatagram_sender_address(void* self);
QHostAddress* q_networkdatagram_destination_address(void* self);
int32_t q_networkdatagram_sender_port(void* self);
int32_t q_networkdatagram_destination_port(void* self);
void q_networkdatagram_set_sender(void* self, void* address);
void q_networkdatagram_set_destination(void* self, void* address, unsigned short port);
int32_t q_networkdatagram_hop_limit(void* self);
void q_networkdatagram_set_hop_limit(void* self, int count);
char* q_networkdatagram_data(void* self);
void q_networkdatagram_set_data(void* self, const char* data);
QNetworkDatagram* q_networkdatagram_make_reply(void* self, const char* payload);
void q_networkdatagram_set_sender2(void* self, void* address, unsigned short port);
void q_networkdatagram_delete(void* self);

#endif
