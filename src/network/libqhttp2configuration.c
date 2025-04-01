#include "libqhttp2configuration.hpp"
#include "libqhttp2configuration.h"

QHttp2Configuration* q_http2configuration_new() {
    return QHttp2Configuration_new();
}

QHttp2Configuration* q_http2configuration_new2(void* other) {
    return QHttp2Configuration_new2((QHttp2Configuration*)other);
}

void q_http2configuration_operator_assign(void* self, void* other) {
    QHttp2Configuration_OperatorAssign((QHttp2Configuration*)self, (QHttp2Configuration*)other);
}

void q_http2configuration_set_server_push_enabled(void* self, bool enable) {
    QHttp2Configuration_SetServerPushEnabled((QHttp2Configuration*)self, enable);
}

bool q_http2configuration_server_push_enabled(void* self) {
    return QHttp2Configuration_ServerPushEnabled((QHttp2Configuration*)self);
}

void q_http2configuration_set_huffman_compression_enabled(void* self, bool enable) {
    QHttp2Configuration_SetHuffmanCompressionEnabled((QHttp2Configuration*)self, enable);
}

bool q_http2configuration_huffman_compression_enabled(void* self) {
    return QHttp2Configuration_HuffmanCompressionEnabled((QHttp2Configuration*)self);
}

bool q_http2configuration_set_session_receive_window_size(void* self, uint32_t size) {
    return QHttp2Configuration_SetSessionReceiveWindowSize((QHttp2Configuration*)self, size);
}

uint32_t q_http2configuration_session_receive_window_size(void* self) {
    return QHttp2Configuration_SessionReceiveWindowSize((QHttp2Configuration*)self);
}

bool q_http2configuration_set_stream_receive_window_size(void* self, uint32_t size) {
    return QHttp2Configuration_SetStreamReceiveWindowSize((QHttp2Configuration*)self, size);
}

uint32_t q_http2configuration_stream_receive_window_size(void* self) {
    return QHttp2Configuration_StreamReceiveWindowSize((QHttp2Configuration*)self);
}

bool q_http2configuration_set_max_frame_size(void* self, uint32_t size) {
    return QHttp2Configuration_SetMaxFrameSize((QHttp2Configuration*)self, size);
}

uint32_t q_http2configuration_max_frame_size(void* self) {
    return QHttp2Configuration_MaxFrameSize((QHttp2Configuration*)self);
}

void q_http2configuration_swap(void* self, void* other) {
    QHttp2Configuration_Swap((QHttp2Configuration*)self, (QHttp2Configuration*)other);
}

void q_http2configuration_delete(void* self) {
    QHttp2Configuration_Delete((QHttp2Configuration*)(self));
}
