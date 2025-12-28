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
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = QPlaceIcon_Parameters((QPlaceIcon*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in q_placeicon_parameters");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = _out_keys[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    free(_out_keys);
    return _ret;
}

void q_placeicon_set_parameters(void* self, libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    parameters_ret.values = malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** parameters_karr = (const char**)parameters.keys;
    libqt_string* parameters_kdest = (libqt_string*)parameters_ret.keys;
    QVariant** parameters_varr = (QVariant**)parameters.values;
    QVariant** parameters_vdest = (QVariant**)parameters_ret.values;
    for (size_t i = 0; i < parameters_ret.len; ++i) {
        parameters_kdest[i] = qstring(parameters_karr[i]);
        parameters_vdest[i] = parameters_varr[i];
    }
    QPlaceIcon_SetParameters((QPlaceIcon*)self, parameters_ret);
    libqt_free(parameters_ret.keys);
    libqt_free(parameters_ret.values);
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
