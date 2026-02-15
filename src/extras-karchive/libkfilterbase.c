#include "../libqiodevice.hpp"
#include "libkfilterbase.hpp"
#include "libkfilterbase.h"

KFilterBase* k_filterbase_new() {
    return KFilterBase_new();
}

void k_filterbase_set_device(void* self, void* dev) {
    KFilterBase_SetDevice((KFilterBase*)self, (QIODevice*)dev);
}

QIODevice* k_filterbase_device(void* self) {
    return KFilterBase_Device((KFilterBase*)self);
}

bool k_filterbase_init(void* self, int mode) {
    return KFilterBase_Init((KFilterBase*)self, mode);
}

void k_filterbase_on_init(void* self, bool (*callback)(void*, int)) {
    KFilterBase_OnInit((KFilterBase*)self, (intptr_t)callback);
}

bool k_filterbase_qbase_init(void* self, int mode) {
    return KFilterBase_QBaseInit((KFilterBase*)self, mode);
}

int32_t k_filterbase_mode(void* self) {
    return KFilterBase_Mode((KFilterBase*)self);
}

void k_filterbase_on_mode(void* self, int32_t (*callback)()) {
    KFilterBase_OnMode((KFilterBase*)self, (intptr_t)callback);
}

int32_t k_filterbase_qbase_mode(void* self) {
    return KFilterBase_QBaseMode((KFilterBase*)self);
}

bool k_filterbase_terminate(void* self) {
    return KFilterBase_Terminate((KFilterBase*)self);
}

void k_filterbase_on_terminate(void* self, bool (*callback)()) {
    KFilterBase_OnTerminate((KFilterBase*)self, (intptr_t)callback);
}

bool k_filterbase_qbase_terminate(void* self) {
    return KFilterBase_QBaseTerminate((KFilterBase*)self);
}

void k_filterbase_reset(void* self) {
    KFilterBase_Reset((KFilterBase*)self);
}

void k_filterbase_on_reset(void* self, void (*callback)()) {
    KFilterBase_OnReset((KFilterBase*)self, (intptr_t)callback);
}

void k_filterbase_qbase_reset(void* self) {
    KFilterBase_QBaseReset((KFilterBase*)self);
}

bool k_filterbase_read_header(void* self) {
    return KFilterBase_ReadHeader((KFilterBase*)self);
}

void k_filterbase_on_read_header(void* self, bool (*callback)()) {
    KFilterBase_OnReadHeader((KFilterBase*)self, (intptr_t)callback);
}

bool k_filterbase_qbase_read_header(void* self) {
    return KFilterBase_QBaseReadHeader((KFilterBase*)self);
}

bool k_filterbase_write_header(void* self, char* filename) {
    return KFilterBase_WriteHeader((KFilterBase*)self, qstring(filename));
}

void k_filterbase_on_write_header(void* self, bool (*callback)(void*, libqt_string)) {
    KFilterBase_OnWriteHeader((KFilterBase*)self, (intptr_t)callback);
}

bool k_filterbase_qbase_write_header(void* self, char* filename) {
    return KFilterBase_QBaseWriteHeader((KFilterBase*)self, qstring(filename));
}

void k_filterbase_set_out_buffer(void* self, char* data, uint32_t maxlen) {
    KFilterBase_SetOutBuffer((KFilterBase*)self, data, maxlen);
}

void k_filterbase_on_set_out_buffer(void* self, void (*callback)(void*, char*, uint32_t)) {
    KFilterBase_OnSetOutBuffer((KFilterBase*)self, (intptr_t)callback);
}

void k_filterbase_qbase_set_out_buffer(void* self, char* data, uint32_t maxlen) {
    KFilterBase_QBaseSetOutBuffer((KFilterBase*)self, data, maxlen);
}

void k_filterbase_set_in_buffer(void* self, const char* data, uint32_t size) {
    KFilterBase_SetInBuffer((KFilterBase*)self, data, size);
}

void k_filterbase_on_set_in_buffer(void* self, void (*callback)(void*, const char*, uint32_t)) {
    KFilterBase_OnSetInBuffer((KFilterBase*)self, (intptr_t)callback);
}

void k_filterbase_qbase_set_in_buffer(void* self, const char* data, uint32_t size) {
    KFilterBase_QBaseSetInBuffer((KFilterBase*)self, data, size);
}

bool k_filterbase_in_buffer_empty(void* self) {
    return KFilterBase_InBufferEmpty((KFilterBase*)self);
}

void k_filterbase_on_in_buffer_empty(void* self, bool (*callback)()) {
    KFilterBase_OnInBufferEmpty((KFilterBase*)self, (intptr_t)callback);
}

bool k_filterbase_qbase_in_buffer_empty(void* self) {
    return KFilterBase_QBaseInBufferEmpty((KFilterBase*)self);
}

int32_t k_filterbase_in_buffer_available(void* self) {
    return KFilterBase_InBufferAvailable((KFilterBase*)self);
}

void k_filterbase_on_in_buffer_available(void* self, int32_t (*callback)()) {
    KFilterBase_OnInBufferAvailable((KFilterBase*)self, (intptr_t)callback);
}

int32_t k_filterbase_qbase_in_buffer_available(void* self) {
    return KFilterBase_QBaseInBufferAvailable((KFilterBase*)self);
}

bool k_filterbase_out_buffer_full(void* self) {
    return KFilterBase_OutBufferFull((KFilterBase*)self);
}

void k_filterbase_on_out_buffer_full(void* self, bool (*callback)()) {
    KFilterBase_OnOutBufferFull((KFilterBase*)self, (intptr_t)callback);
}

bool k_filterbase_qbase_out_buffer_full(void* self) {
    return KFilterBase_QBaseOutBufferFull((KFilterBase*)self);
}

int32_t k_filterbase_out_buffer_available(void* self) {
    return KFilterBase_OutBufferAvailable((KFilterBase*)self);
}

void k_filterbase_on_out_buffer_available(void* self, int32_t (*callback)()) {
    KFilterBase_OnOutBufferAvailable((KFilterBase*)self, (intptr_t)callback);
}

int32_t k_filterbase_qbase_out_buffer_available(void* self) {
    return KFilterBase_QBaseOutBufferAvailable((KFilterBase*)self);
}

int32_t k_filterbase_uncompress(void* self) {
    return KFilterBase_Uncompress((KFilterBase*)self);
}

void k_filterbase_on_uncompress(void* self, int32_t (*callback)()) {
    KFilterBase_OnUncompress((KFilterBase*)self, (intptr_t)callback);
}

int32_t k_filterbase_qbase_uncompress(void* self) {
    return KFilterBase_QBaseUncompress((KFilterBase*)self);
}

int32_t k_filterbase_compress(void* self, bool finish) {
    return KFilterBase_Compress((KFilterBase*)self, finish);
}

void k_filterbase_on_compress(void* self, int32_t (*callback)(void*, bool)) {
    KFilterBase_OnCompress((KFilterBase*)self, (intptr_t)callback);
}

int32_t k_filterbase_qbase_compress(void* self, bool finish) {
    return KFilterBase_QBaseCompress((KFilterBase*)self, finish);
}

void k_filterbase_set_filter_flags(void* self, int32_t flags) {
    KFilterBase_SetFilterFlags((KFilterBase*)self, flags);
}

int32_t k_filterbase_filter_flags(void* self) {
    return KFilterBase_FilterFlags((KFilterBase*)self);
}

void k_filterbase_virtual_hook(void* self, int id, void* data) {
    KFilterBase_VirtualHook((KFilterBase*)self, id, data);
}

void k_filterbase_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KFilterBase_OnVirtualHook((KFilterBase*)self, (intptr_t)callback);
}

void k_filterbase_qbase_virtual_hook(void* self, int id, void* data) {
    KFilterBase_QBaseVirtualHook((KFilterBase*)self, id, data);
}

void k_filterbase_set_device2(void* self, void* dev, bool autodelete) {
    KFilterBase_SetDevice2((KFilterBase*)self, (QIODevice*)dev, autodelete);
}

void k_filterbase_delete(void* self) {
    KFilterBase_Delete((KFilterBase*)(self));
}
