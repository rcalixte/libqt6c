#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHTTP2CONFIGURATION_H
#define SRC_NETWORKQT6C_LIBQHTTP2CONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

QHttp2Configuration* q_http2configuration_new();
QHttp2Configuration* q_http2configuration_new2(void* other);
void q_http2configuration_operator_assign(void* self, void* other);
void q_http2configuration_set_server_push_enabled(void* self, bool enable);
bool q_http2configuration_server_push_enabled(void* self);
void q_http2configuration_set_huffman_compression_enabled(void* self, bool enable);
bool q_http2configuration_huffman_compression_enabled(void* self);
bool q_http2configuration_set_session_receive_window_size(void* self, uint32_t size);
uint32_t q_http2configuration_session_receive_window_size(void* self);
bool q_http2configuration_set_stream_receive_window_size(void* self, uint32_t size);
uint32_t q_http2configuration_stream_receive_window_size(void* self);
bool q_http2configuration_set_max_frame_size(void* self, uint32_t size);
uint32_t q_http2configuration_max_frame_size(void* self);
void q_http2configuration_swap(void* self, void* other);
void q_http2configuration_delete(void* self);

#endif
