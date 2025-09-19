#include "../libqurl.hpp"
#include "libicon.hpp"
#include "libicon.h"

Attica__Icon* k_attica__icon_new() {
    return Attica__Icon_new();
}

Attica__Icon* k_attica__icon_new2(void* other) {
    return Attica__Icon_new2((Attica__Icon*)other);
}

void k_attica__icon_operator_assign(void* self, void* other) {
    Attica__Icon_OperatorAssign((Attica__Icon*)self, (Attica__Icon*)other);
}

QUrl* k_attica__icon_url(void* self) {
    return Attica__Icon_Url((Attica__Icon*)self);
}

void k_attica__icon_set_url(void* self, void* url) {
    Attica__Icon_SetUrl((Attica__Icon*)self, (QUrl*)url);
}

uint32_t k_attica__icon_width(void* self) {
    return Attica__Icon_Width((Attica__Icon*)self);
}

void k_attica__icon_set_width(void* self, uint32_t width) {
    Attica__Icon_SetWidth((Attica__Icon*)self, width);
}

uint32_t k_attica__icon_height(void* self) {
    return Attica__Icon_Height((Attica__Icon*)self);
}

void k_attica__icon_set_height(void* self, uint32_t height) {
    Attica__Icon_SetHeight((Attica__Icon*)self, height);
}

void k_attica__icon_delete(void* self) {
    Attica__Icon_Delete((Attica__Icon*)(self));
}
