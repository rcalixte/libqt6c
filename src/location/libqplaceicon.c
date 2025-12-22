#include "libqplacemanager.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqplaceicon.hpp"
#include "libqplaceicon.h"

QPlaceIcon* q_placeicon_new() {
    return QPlaceIcon_new();
}

QPlaceIcon* q_placeicon_new2(void* other) {
    return QPlaceIcon_new2((QPlaceIcon*)other);
}

void q_placeicon_operator_assign(void* self, void* other) {
    QPlaceIcon_OperatorAssign((QPlaceIcon*)self, (QPlaceIcon*)other);
}

void q_placeicon_swap(void* self, void* other) {
    QPlaceIcon_Swap((QPlaceIcon*)self, (QPlaceIcon*)other);
}

QUrl* q_placeicon_url(void* self) {
    return QPlaceIcon_Url((QPlaceIcon*)self);
}

QPlaceManager* q_placeicon_manager(void* self) {
    return QPlaceIcon_Manager((QPlaceIcon*)self);
}

void q_placeicon_set_manager(void* self, void* manager) {
    QPlaceIcon_SetManager((QPlaceIcon*)self, (QPlaceManager*)manager);
}

libqt_map /* of const char* to QVariant* */ q_placeicon_parameters(void* self) {
    return QPlaceIcon_Parameters((QPlaceIcon*)self);
}

void q_placeicon_set_parameters(void* self, libqt_map /* of const char* to QVariant* */ parameters) {
    QPlaceIcon_SetParameters((QPlaceIcon*)self, parameters);
}

bool q_placeicon_is_empty(void* self) {
    return QPlaceIcon_IsEmpty((QPlaceIcon*)self);
}

QUrl* q_placeicon_url1(void* self, void* size) {
    return QPlaceIcon_Url1((QPlaceIcon*)self, (QSize*)size);
}

void q_placeicon_delete(void* self) {
    QPlaceIcon_Delete((QPlaceIcon*)(self));
}
