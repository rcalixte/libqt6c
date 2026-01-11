#include "libqplace.hpp"
#include "libqplacesearchresult.hpp"
#include "../libqvariant.hpp"
#include "libqplacematchrequest.hpp"
#include "libqplacematchrequest.h"

QPlaceMatchRequest* q_placematchrequest_new() {
    return QPlaceMatchRequest_new();
}

QPlaceMatchRequest* q_placematchrequest_new2(void* other) {
    return QPlaceMatchRequest_new2((QPlaceMatchRequest*)other);
}

void q_placematchrequest_operator_assign(void* self, void* other) {
    QPlaceMatchRequest_OperatorAssign((QPlaceMatchRequest*)self, (QPlaceMatchRequest*)other);
}

void q_placematchrequest_swap(void* self, void* other) {
    QPlaceMatchRequest_Swap((QPlaceMatchRequest*)self, (QPlaceMatchRequest*)other);
}

libqt_list /* of QPlace* */ q_placematchrequest_places(void* self) {
    libqt_list _arr = QPlaceMatchRequest_Places((QPlaceMatchRequest*)self);
    return _arr;
}

void q_placematchrequest_set_places(void* self, libqt_list places) {
    QPlaceMatchRequest_SetPlaces((QPlaceMatchRequest*)self, places);
}

void q_placematchrequest_set_results(void* self, libqt_list results) {
    QPlaceMatchRequest_SetResults((QPlaceMatchRequest*)self, results);
}

libqt_map /* of const char* to QVariant* */ q_placematchrequest_parameters(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = QPlaceMatchRequest_Parameters((QPlaceMatchRequest*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_placematchrequest_parameters");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_placematchrequest_parameters");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

void q_placematchrequest_set_parameters(void* self, libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_placematchrequest_set_parameters\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_placematchrequest_set_parameters\n");
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
    QPlaceMatchRequest_SetParameters((QPlaceMatchRequest*)self, parameters_ret);
    free(parameters_ret.keys);
    free(parameters_ret.values);
}

void q_placematchrequest_clear(void* self) {
    QPlaceMatchRequest_Clear((QPlaceMatchRequest*)self);
}

void q_placematchrequest_delete(void* self) {
    QPlaceMatchRequest_Delete((QPlaceMatchRequest*)(self));
}
