#include "libqbluetoothaddress.hpp"
#include "libqbluetoothuuid.hpp"
#include "libqbluetoothdeviceinfo.hpp"
#include "libqbluetoothdeviceinfo.h"

QBluetoothDeviceInfo* q_bluetoothdeviceinfo_new() {
    return QBluetoothDeviceInfo_new();
}

QBluetoothDeviceInfo* q_bluetoothdeviceinfo_new2(void* address, const char* name, uint32_t classOfDevice) {
    return QBluetoothDeviceInfo_new2((QBluetoothAddress*)address, qstring(name), classOfDevice);
}

QBluetoothDeviceInfo* q_bluetoothdeviceinfo_new3(void* uuid, const char* name, uint32_t classOfDevice) {
    return QBluetoothDeviceInfo_new3((QBluetoothUuid*)uuid, qstring(name), classOfDevice);
}

QBluetoothDeviceInfo* q_bluetoothdeviceinfo_new4(void* other) {
    return QBluetoothDeviceInfo_new4((QBluetoothDeviceInfo*)other);
}

bool q_bluetoothdeviceinfo_is_valid(void* self) {
    return QBluetoothDeviceInfo_IsValid((QBluetoothDeviceInfo*)self);
}

bool q_bluetoothdeviceinfo_is_cached(void* self) {
    return QBluetoothDeviceInfo_IsCached((QBluetoothDeviceInfo*)self);
}

void q_bluetoothdeviceinfo_set_cached(void* self, bool cached) {
    QBluetoothDeviceInfo_SetCached((QBluetoothDeviceInfo*)self, cached);
}

void q_bluetoothdeviceinfo_operator_assign(void* self, void* other) {
    QBluetoothDeviceInfo_OperatorAssign((QBluetoothDeviceInfo*)self, (QBluetoothDeviceInfo*)other);
}

QBluetoothAddress* q_bluetoothdeviceinfo_address(void* self) {
    return QBluetoothDeviceInfo_Address((QBluetoothDeviceInfo*)self);
}

const char* q_bluetoothdeviceinfo_name(void* self) {
    libqt_string _str = QBluetoothDeviceInfo_Name((QBluetoothDeviceInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothdeviceinfo_set_name(void* self, const char* name) {
    QBluetoothDeviceInfo_SetName((QBluetoothDeviceInfo*)self, qstring(name));
}

int32_t q_bluetoothdeviceinfo_service_classes(void* self) {
    return QBluetoothDeviceInfo_ServiceClasses((QBluetoothDeviceInfo*)self);
}

int32_t q_bluetoothdeviceinfo_major_device_class(void* self) {
    return QBluetoothDeviceInfo_MajorDeviceClass((QBluetoothDeviceInfo*)self);
}

uint8_t q_bluetoothdeviceinfo_minor_device_class(void* self) {
    return QBluetoothDeviceInfo_MinorDeviceClass((QBluetoothDeviceInfo*)self);
}

int16_t q_bluetoothdeviceinfo_rssi(void* self) {
    return QBluetoothDeviceInfo_Rssi((QBluetoothDeviceInfo*)self);
}

void q_bluetoothdeviceinfo_set_rssi(void* self, int16_t signal) {
    QBluetoothDeviceInfo_SetRssi((QBluetoothDeviceInfo*)self, signal);
}

libqt_list /* of QBluetoothUuid* */ q_bluetoothdeviceinfo_service_uuids(void* self) {
    libqt_list _arr = QBluetoothDeviceInfo_ServiceUuids((QBluetoothDeviceInfo*)self);
    return _arr;
}

void q_bluetoothdeviceinfo_set_service_uuids(void* self, libqt_list /* of QBluetoothUuid* */ uuids) {
    QBluetoothDeviceInfo_SetServiceUuids((QBluetoothDeviceInfo*)self, uuids);
}

libqt_list /* of unsigned short */ q_bluetoothdeviceinfo_manufacturer_ids(void* self) {
    libqt_list _arr = QBluetoothDeviceInfo_ManufacturerIds((QBluetoothDeviceInfo*)self);
    return _arr;
}

char* q_bluetoothdeviceinfo_manufacturer_data(void* self, uint16_t manufacturerId) {
    libqt_string _str = QBluetoothDeviceInfo_ManufacturerData((QBluetoothDeviceInfo*)self, manufacturerId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_bluetoothdeviceinfo_set_manufacturer_data(void* self, uint16_t manufacturerId, char* data) {
    return QBluetoothDeviceInfo_SetManufacturerData((QBluetoothDeviceInfo*)self, manufacturerId, qstring(data));
}

libqt_map /* of unsigned short to char** */ q_bluetoothdeviceinfo_manufacturer_data2(void* self) {
    // Convert QMultiHash<unsigned short,QByteArray> to libqt_map
    libqt_map _out = QBluetoothDeviceInfo_ManufacturerData2((QBluetoothDeviceInfo*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_list* _out_values = (libqt_list*)_out.values;
    char*** _ret_values = (char***)malloc(_ret.len * sizeof(char**));
    if (_ret_values == NULL) {
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in q_bluetoothdeviceinfo_manufacturer_data2\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        libqt_list _value_list = _out_values[i];
        _ret_values[i] = (char**)malloc((_value_list.len + 1) * sizeof(char*));
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                for (size_t k = 0; k < ((libqt_list*)_out.values)[j].len; k++) {
                    libqt_free(_ret_values[j][k]);
                }
                libqt_free(_ret_values[j]);
            }
            free(_out.keys);
            free(_ret_values);
            free(_out.values);
            fprintf(stderr, "Failed to allocate memory for map values in q_bluetoothdeviceinfo_manufacturer_data2\n");
            abort();
        }
        libqt_string* _value_str = (libqt_string*)_value_list.data.ptr;
        size_t j;
        for (j = 0; j < _value_list.len; j++) {
            _ret_values[i][j] = (char*)malloc(_value_str[j].len + 1);
            if (_ret_values[i][j] == NULL) {
                for (size_t k = 0; k < j; k++) {
                    free(_ret_values[i][k]);
                }
                for (size_t k = 0; k < i; k++) {
                    for (size_t l = 0; l < ((libqt_list*)_out.values)[k].len; l++) {
                        free(_ret_values[k][l]);
                    }
                    free(_ret_values[k]);
                }
                free(_ret_values);
                fprintf(stderr, "Failed to allocate memory for map value keys in q_bluetoothdeviceinfo_manufacturer_data2\n");
                abort();
            }
            memcpy(_ret_values[i][j], _value_str[j].data, _value_str[j].len);
            _ret_values[i][j][_value_str[j].len] = '\0';
        }
        _ret_values[i][j] = NULL;
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_string* _value_str = (libqt_string*)_out_values[i].data.ptr;
        for (size_t j = 0; j < _out_values[i].len; j++) {
            libqt_free(_value_str[j].data);
        }
        free(_out_values[i].data.ptr);
    }
    free(_out.values);
    return _ret;
}

libqt_list /* of QBluetoothUuid* */ q_bluetoothdeviceinfo_service_ids(void* self) {
    libqt_list _arr = QBluetoothDeviceInfo_ServiceIds((QBluetoothDeviceInfo*)self);
    return _arr;
}

char* q_bluetoothdeviceinfo_service_data(void* self, void* serviceId) {
    libqt_string _str = QBluetoothDeviceInfo_ServiceData((QBluetoothDeviceInfo*)self, (QBluetoothUuid*)serviceId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_bluetoothdeviceinfo_set_service_data(void* self, void* serviceId, char* data) {
    return QBluetoothDeviceInfo_SetServiceData((QBluetoothDeviceInfo*)self, (QBluetoothUuid*)serviceId, qstring(data));
}

libqt_map /* of QBluetoothUuid* to char** */ q_bluetoothdeviceinfo_service_data2(void* self) {
    // Convert QMultiHash<QBluetoothUuid,QByteArray> to libqt_map
    libqt_map _out = QBluetoothDeviceInfo_ServiceData2((QBluetoothDeviceInfo*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_list* _out_values = (libqt_list*)_out.values;
    char*** _ret_values = (char***)malloc(_ret.len * sizeof(char**));
    if (_ret_values == NULL) {
        free(_out.keys);
        free(_out.values);
        fprintf(stderr, "Failed to allocate memory for map value containers in q_bluetoothdeviceinfo_service_data2\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        libqt_list _value_list = _out_values[i];
        _ret_values[i] = (char**)malloc((_value_list.len + 1) * sizeof(char*));
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                for (size_t k = 0; k < ((libqt_list*)_out.values)[j].len; k++) {
                    libqt_free(_ret_values[j][k]);
                }
                libqt_free(_ret_values[j]);
            }
            free(_out.keys);
            free(_ret_values);
            free(_out.values);
            fprintf(stderr, "Failed to allocate memory for map values in q_bluetoothdeviceinfo_service_data2\n");
            abort();
        }
        libqt_string* _value_str = (libqt_string*)_value_list.data.ptr;
        size_t j;
        for (j = 0; j < _value_list.len; j++) {
            _ret_values[i][j] = (char*)malloc(_value_str[j].len + 1);
            if (_ret_values[i][j] == NULL) {
                for (size_t k = 0; k < j; k++) {
                    free(_ret_values[i][k]);
                }
                for (size_t k = 0; k < i; k++) {
                    for (size_t l = 0; l < ((libqt_list*)_out.values)[k].len; l++) {
                        free(_ret_values[k][l]);
                    }
                    free(_ret_values[k]);
                }
                free(_ret_values);
                fprintf(stderr, "Failed to allocate memory for map value keys in q_bluetoothdeviceinfo_service_data2\n");
                abort();
            }
            memcpy(_ret_values[i][j], _value_str[j].data, _value_str[j].len);
            _ret_values[i][j][_value_str[j].len] = '\0';
        }
        _ret_values[i][j] = NULL;
    }
    _ret.keys = _out.keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_string* _value_str = (libqt_string*)_out_values[i].data.ptr;
        for (size_t j = 0; j < _out_values[i].len; j++) {
            libqt_free(_value_str[j].data);
        }
        free(_out_values[i].data.ptr);
    }
    free(_out.values);
    return _ret;
}

void q_bluetoothdeviceinfo_set_core_configurations(void* self, int32_t coreConfigs) {
    QBluetoothDeviceInfo_SetCoreConfigurations((QBluetoothDeviceInfo*)self, coreConfigs);
}

int32_t q_bluetoothdeviceinfo_core_configurations(void* self) {
    return QBluetoothDeviceInfo_CoreConfigurations((QBluetoothDeviceInfo*)self);
}

void q_bluetoothdeviceinfo_set_device_uuid(void* self, void* uuid) {
    QBluetoothDeviceInfo_SetDeviceUuid((QBluetoothDeviceInfo*)self, (QBluetoothUuid*)uuid);
}

QBluetoothUuid* q_bluetoothdeviceinfo_device_uuid(void* self) {
    return QBluetoothDeviceInfo_DeviceUuid((QBluetoothDeviceInfo*)self);
}

void q_bluetoothdeviceinfo_delete(void* self) {
    QBluetoothDeviceInfo_Delete((QBluetoothDeviceInfo*)(self));
}
