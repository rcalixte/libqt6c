#include "libqopenglbuffer.hpp"
#include "libqopenglbuffer.h"

QOpenGLBuffer* q_openglbuffer_new() {
    return QOpenGLBuffer_new();
}

QOpenGLBuffer* q_openglbuffer_new2(int32_t type) {
    return QOpenGLBuffer_new2(type);
}

QOpenGLBuffer* q_openglbuffer_new3(void* other) {
    return QOpenGLBuffer_new3((QOpenGLBuffer*)other);
}

void q_openglbuffer_operator_assign(void* self, void* other) {
    QOpenGLBuffer_OperatorAssign((QOpenGLBuffer*)self, (QOpenGLBuffer*)other);
}

void q_openglbuffer_swap(void* self, void* other) {
    QOpenGLBuffer_Swap((QOpenGLBuffer*)self, (QOpenGLBuffer*)other);
}

int32_t q_openglbuffer_type(void* self) {
    return QOpenGLBuffer_Type((QOpenGLBuffer*)self);
}

int32_t q_openglbuffer_usage_pattern(void* self) {
    return QOpenGLBuffer_UsagePattern((QOpenGLBuffer*)self);
}

void q_openglbuffer_set_usage_pattern(void* self, int32_t value) {
    QOpenGLBuffer_SetUsagePattern((QOpenGLBuffer*)self, value);
}

bool q_openglbuffer_create(void* self) {
    return QOpenGLBuffer_Create((QOpenGLBuffer*)self);
}

bool q_openglbuffer_is_created(void* self) {
    return QOpenGLBuffer_IsCreated((QOpenGLBuffer*)self);
}

void q_openglbuffer_destroy(void* self) {
    QOpenGLBuffer_Destroy((QOpenGLBuffer*)self);
}

bool q_openglbuffer_bind(void* self) {
    return QOpenGLBuffer_Bind((QOpenGLBuffer*)self);
}

void q_openglbuffer_release(void* self) {
    QOpenGLBuffer_Release((QOpenGLBuffer*)self);
}

void q_openglbuffer_release2(int32_t type) {
    QOpenGLBuffer_Release2(type);
}

uint32_t q_openglbuffer_buffer_id(void* self) {
    return QOpenGLBuffer_BufferId((QOpenGLBuffer*)self);
}

int32_t q_openglbuffer_size(void* self) {
    return QOpenGLBuffer_Size((QOpenGLBuffer*)self);
}

bool q_openglbuffer_read(void* self, int offset, void* data, int count) {
    return QOpenGLBuffer_Read((QOpenGLBuffer*)self, offset, data, count);
}

void q_openglbuffer_write(void* self, int offset, void* data, int count) {
    QOpenGLBuffer_Write((QOpenGLBuffer*)self, offset, data, count);
}

void q_openglbuffer_allocate(void* self, void* data, int count) {
    QOpenGLBuffer_Allocate((QOpenGLBuffer*)self, data, count);
}

void q_openglbuffer_allocate2(void* self, int count) {
    QOpenGLBuffer_Allocate2((QOpenGLBuffer*)self, count);
}

void* q_openglbuffer_map(void* self, int32_t access) {
    return QOpenGLBuffer_Map((QOpenGLBuffer*)self, access);
}

void* q_openglbuffer_map_range(void* self, int offset, int count, int32_t access) {
    return QOpenGLBuffer_MapRange((QOpenGLBuffer*)self, offset, count, access);
}

bool q_openglbuffer_unmap(void* self) {
    return QOpenGLBuffer_Unmap((QOpenGLBuffer*)self);
}

void q_openglbuffer_delete(void* self) {
    QOpenGLBuffer_Delete((QOpenGLBuffer*)(self));
}
