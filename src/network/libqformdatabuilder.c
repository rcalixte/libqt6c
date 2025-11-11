#include "../libqanystringview.hpp"
#include "../libqbytearrayview.hpp"
#include "libqhttpheaders.hpp"
#include "../libqiodevice.hpp"
#include "libqformdatabuilder.hpp"
#include "libqformdatabuilder.h"

QFormDataPartBuilder* q_formdatapartbuilder_new() {
    return QFormDataPartBuilder_new();
}

QFormDataPartBuilder* q_formdatapartbuilder_new2(void* param1) {
    return QFormDataPartBuilder_new2((QFormDataPartBuilder*)param1);
}

void q_formdatapartbuilder_swap(void* self, void* other) {
    QFormDataPartBuilder_Swap((QFormDataPartBuilder*)self, (QFormDataPartBuilder*)other);
}

QFormDataPartBuilder* q_formdatapartbuilder_set_body(void* self, const char* data) {
    return QFormDataPartBuilder_SetBody((QFormDataPartBuilder*)self, qstring(data));
}

QFormDataPartBuilder* q_formdatapartbuilder_set_body_device(void* self, void* body) {
    return QFormDataPartBuilder_SetBodyDevice((QFormDataPartBuilder*)self, (QIODevice*)body);
}

QFormDataPartBuilder* q_formdatapartbuilder_set_headers(void* self, void* headers) {
    return QFormDataPartBuilder_SetHeaders((QFormDataPartBuilder*)self, (QHttpHeaders*)headers);
}

QFormDataPartBuilder* q_formdatapartbuilder_set_body2(void* self, const char* data, char* fileName) {
    return QFormDataPartBuilder_SetBody2((QFormDataPartBuilder*)self, qstring(data), fileName);
}

QFormDataPartBuilder* q_formdatapartbuilder_set_body3(void* self, const char* data, char* fileName, char* mimeType) {
    return QFormDataPartBuilder_SetBody3((QFormDataPartBuilder*)self, qstring(data), fileName, mimeType);
}

QFormDataPartBuilder* q_formdatapartbuilder_set_body_device2(void* self, void* body, char* fileName) {
    return QFormDataPartBuilder_SetBodyDevice2((QFormDataPartBuilder*)self, (QIODevice*)body, fileName);
}

QFormDataPartBuilder* q_formdatapartbuilder_set_body_device3(void* self, void* body, char* fileName, char* mimeType) {
    return QFormDataPartBuilder_SetBodyDevice3((QFormDataPartBuilder*)self, (QIODevice*)body, fileName, mimeType);
}

void q_formdatapartbuilder_delete(void* self) {
    QFormDataPartBuilder_Delete((QFormDataPartBuilder*)(self));
}

QFormDataBuilder* q_formdatabuilder_new() {
    return QFormDataBuilder_new();
}

void q_formdatabuilder_swap(void* self, void* other) {
    QFormDataBuilder_Swap((QFormDataBuilder*)self, (QFormDataBuilder*)other);
}

QFormDataPartBuilder* q_formdatabuilder_part(void* self, char* name) {
    return QFormDataBuilder_Part((QFormDataBuilder*)self, name);
}

void q_formdatabuilder_delete(void* self) {
    QFormDataBuilder_Delete((QFormDataBuilder*)(self));
}
