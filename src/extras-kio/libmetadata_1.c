#include "../libqvariant.hpp"
#include "libmetadata_1.hpp"
#include "libmetadata_1.h"

KIO__MetaData* k_io__metadata_new() {
    return KIO__MetaData_new();
}

KIO__MetaData* k_io__metadata_new2(libqt_map /* of const char* to const char* */ metaData) {
    // Convert libqt_map to QMap<QString,QString>
    libqt_map metaData_ret;
    metaData_ret.len = metaData.len;
    metaData_ret.keys = malloc(metaData_ret.len * sizeof(libqt_string));
    if (metaData_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    metaData_ret.values = malloc(metaData_ret.len * sizeof(libqt_string));
    if (metaData_ret.values == NULL) {
        free(metaData_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** metaData_karr = (const char**)metaData.keys;
    libqt_string* metaData_kdest = (libqt_string*)metaData_ret.keys;
    const char** metaData_varr = (const char**)metaData.values;
    libqt_string* metaData_vdest = (libqt_string*)metaData_ret.values;
    for (size_t i = 0; i < metaData_ret.len; ++i) {
        metaData_kdest[i] = qstring(metaData_karr[i]);
        metaData_vdest[i] = qstring(metaData_varr[i]);
    }

    KIO__MetaData* _out = KIO__MetaData_new2(metaData_ret);
    libqt_free(metaData_ret.keys);
    libqt_free(metaData_ret.values);
    return _out;
}

KIO__MetaData* k_io__metadata_new3(libqt_map /* of const char* to QVariant* */ param1) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map param1_ret;
    param1_ret.len = param1.len;
    param1_ret.keys = malloc(param1_ret.len * sizeof(libqt_string));
    if (param1_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    param1_ret.values = malloc(param1_ret.len * sizeof(QVariant*));
    if (param1_ret.values == NULL) {
        free(param1_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** param1_karr = (const char**)param1.keys;
    libqt_string* param1_kdest = (libqt_string*)param1_ret.keys;
    QVariant** param1_varr = (QVariant**)param1.values;
    QVariant** param1_vdest = (QVariant**)param1_ret.values;
    for (size_t i = 0; i < param1_ret.len; ++i) {
        param1_kdest[i] = qstring(param1_karr[i]);
        param1_vdest[i] = param1_varr[i];
    }

    KIO__MetaData* _out = KIO__MetaData_new3(param1_ret);
    libqt_free(param1_ret.keys);
    libqt_free(param1_ret.values);
    return _out;
}

KIO__MetaData* k_io__metadata_new4(void* param1) {
    return KIO__MetaData_new4((KIO__MetaData*)param1);
}

KIO__MetaData* k_io__metadata_operator_plus_assign(void* self, libqt_map /* of const char* to const char* */ metaData) {
    // Convert libqt_map to QMap<QString,QString>
    libqt_map metaData_ret;
    metaData_ret.len = metaData.len;
    metaData_ret.keys = malloc(metaData_ret.len * sizeof(libqt_string));
    if (metaData_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    metaData_ret.values = malloc(metaData_ret.len * sizeof(libqt_string));
    if (metaData_ret.values == NULL) {
        free(metaData_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** metaData_karr = (const char**)metaData.keys;
    libqt_string* metaData_kdest = (libqt_string*)metaData_ret.keys;
    const char** metaData_varr = (const char**)metaData.values;
    libqt_string* metaData_vdest = (libqt_string*)metaData_ret.values;
    for (size_t i = 0; i < metaData_ret.len; ++i) {
        metaData_kdest[i] = qstring(metaData_karr[i]);
        metaData_vdest[i] = qstring(metaData_varr[i]);
    }
    KIO__MetaData* _out = KIO__MetaData_OperatorPlusAssign((KIO__MetaData*)self, metaData_ret);
    libqt_free(metaData_ret.keys);
    libqt_free(metaData_ret.values);
    return _out;
}

KIO__MetaData* k_io__metadata_operator_plus_assign2(void* self, libqt_map /* of const char* to QVariant* */ metaData) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map metaData_ret;
    metaData_ret.len = metaData.len;
    metaData_ret.keys = malloc(metaData_ret.len * sizeof(libqt_string));
    if (metaData_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    metaData_ret.values = malloc(metaData_ret.len * sizeof(QVariant*));
    if (metaData_ret.values == NULL) {
        free(metaData_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** metaData_karr = (const char**)metaData.keys;
    libqt_string* metaData_kdest = (libqt_string*)metaData_ret.keys;
    QVariant** metaData_varr = (QVariant**)metaData.values;
    QVariant** metaData_vdest = (QVariant**)metaData_ret.values;
    for (size_t i = 0; i < metaData_ret.len; ++i) {
        metaData_kdest[i] = qstring(metaData_karr[i]);
        metaData_vdest[i] = metaData_varr[i];
    }
    KIO__MetaData* _out = KIO__MetaData_OperatorPlusAssign2((KIO__MetaData*)self, metaData_ret);
    libqt_free(metaData_ret.keys);
    libqt_free(metaData_ret.values);
    return _out;
}

void k_io__metadata_operator_assign(void* self, libqt_map /* of const char* to QVariant* */ metaData) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map metaData_ret;
    metaData_ret.len = metaData.len;
    metaData_ret.keys = malloc(metaData_ret.len * sizeof(libqt_string));
    if (metaData_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    metaData_ret.values = malloc(metaData_ret.len * sizeof(QVariant*));
    if (metaData_ret.values == NULL) {
        free(metaData_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** metaData_karr = (const char**)metaData.keys;
    libqt_string* metaData_kdest = (libqt_string*)metaData_ret.keys;
    QVariant** metaData_varr = (QVariant**)metaData.values;
    QVariant** metaData_vdest = (QVariant**)metaData_ret.values;
    for (size_t i = 0; i < metaData_ret.len; ++i) {
        metaData_kdest[i] = qstring(metaData_karr[i]);
        metaData_vdest[i] = metaData_varr[i];
    }
    KIO__MetaData_OperatorAssign((KIO__MetaData*)self, metaData_ret);
    libqt_free(metaData_ret.keys);
    libqt_free(metaData_ret.values);
}

QVariant* k_io__metadata_to_variant(void* self) {
    return KIO__MetaData_ToVariant((KIO__MetaData*)self);
}

void k_io__metadata_operator_assign2(void* self, void* param1) {
    KIO__MetaData_OperatorAssign2((KIO__MetaData*)self, (KIO__MetaData*)param1);
}

void k_io__metadata_delete(void* self) {
    KIO__MetaData_Delete((KIO__MetaData*)(self));
}
