#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHDEVICEINFO_H
#define SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHDEVICEINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html)

/// q_bluetoothdeviceinfo_new constructs a new QBluetoothDeviceInfo object.
///
QBluetoothDeviceInfo* q_bluetoothdeviceinfo_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html)

/// q_bluetoothdeviceinfo_new2 constructs a new QBluetoothDeviceInfo object.
///
/// @param address QBluetoothAddress*
/// @param name const char*
/// @param classOfDevice uint32_t
///
QBluetoothDeviceInfo* q_bluetoothdeviceinfo_new2(void* address, const char* name, uint32_t classOfDevice);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html)

/// q_bluetoothdeviceinfo_new3 constructs a new QBluetoothDeviceInfo object.
///
/// @param uuid QBluetoothUuid*
/// @param name const char*
/// @param classOfDevice uint32_t
///
QBluetoothDeviceInfo* q_bluetoothdeviceinfo_new3(void* uuid, const char* name, uint32_t classOfDevice);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html)

/// q_bluetoothdeviceinfo_new4 constructs a new QBluetoothDeviceInfo object.
///
/// @param other QBluetoothDeviceInfo*
///
QBluetoothDeviceInfo* q_bluetoothdeviceinfo_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#isValid)
///
/// @param self QBluetoothDeviceInfo*
///
bool q_bluetoothdeviceinfo_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#isCached)
///
/// @param self QBluetoothDeviceInfo*
///
bool q_bluetoothdeviceinfo_is_cached(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setCached)
///
/// @param self QBluetoothDeviceInfo*
/// @param cached bool
///
void q_bluetoothdeviceinfo_set_cached(void* self, bool cached);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#operator-eq)
///
/// @param self QBluetoothDeviceInfo*
/// @param other QBluetoothDeviceInfo*
///
void q_bluetoothdeviceinfo_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#address)
///
/// @param self QBluetoothDeviceInfo*
///
QBluetoothAddress* q_bluetoothdeviceinfo_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBluetoothDeviceInfo*
///
const char* q_bluetoothdeviceinfo_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setName)
///
/// @param self QBluetoothDeviceInfo*
/// @param name const char*
///
void q_bluetoothdeviceinfo_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceClasses)
///
/// @param self QBluetoothDeviceInfo*
///
/// @return flag of enum QBluetoothDeviceInfo__ServiceClass
///
int32_t q_bluetoothdeviceinfo_service_classes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#majorDeviceClass)
///
/// @param self QBluetoothDeviceInfo*
///
/// @return enum QBluetoothDeviceInfo__MajorDeviceClass
///
int32_t q_bluetoothdeviceinfo_major_device_class(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#minorDeviceClass)
///
/// @param self QBluetoothDeviceInfo*
///
uint8_t q_bluetoothdeviceinfo_minor_device_class(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#rssi)
///
/// @param self QBluetoothDeviceInfo*
///
int16_t q_bluetoothdeviceinfo_rssi(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setRssi)
///
/// @param self QBluetoothDeviceInfo*
/// @param signal int16_t
///
void q_bluetoothdeviceinfo_set_rssi(void* self, int16_t signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceUuids)
///
/// @param self QBluetoothDeviceInfo*
///
/// @return libqt_list of QBluetoothUuid*
///
libqt_list q_bluetoothdeviceinfo_service_uuids(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setServiceUuids)
///
/// @param self QBluetoothDeviceInfo*
/// @param uuids libqt_list of QBluetoothUuid*
///
void q_bluetoothdeviceinfo_set_service_uuids(void* self, libqt_list uuids);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#manufacturerIds)
///
/// @param self QBluetoothDeviceInfo*
///
/// @return libqt_list of unsigned short
///
libqt_list q_bluetoothdeviceinfo_manufacturer_ids(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#manufacturerData)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBluetoothDeviceInfo*
/// @param manufacturerId uint16_t
///
char* q_bluetoothdeviceinfo_manufacturer_data(void* self, uint16_t manufacturerId);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setManufacturerData)
///
/// @param self QBluetoothDeviceInfo*
/// @param manufacturerId uint16_t
/// @param data char*
///
bool q_bluetoothdeviceinfo_set_manufacturer_data(void* self, uint16_t manufacturerId, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#manufacturerData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of unsigned short to char**
/// for (size_t i = 0; i < map.len; ++i) {
///     for (size_t j = 0; ((char**)map.values)[i][j] != NULL; j++) {
///         free((map.values)[i][j]);
///     }
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QBluetoothDeviceInfo*
///
/// @return libqt_map of unsigned short to char**
///
libqt_map q_bluetoothdeviceinfo_manufacturer_data2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceIds)
///
/// @param self QBluetoothDeviceInfo*
///
/// @return libqt_list of QBluetoothUuid*
///
libqt_list q_bluetoothdeviceinfo_service_ids(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceData)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBluetoothDeviceInfo*
/// @param serviceId QBluetoothUuid*
///
char* q_bluetoothdeviceinfo_service_data(void* self, void* serviceId);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setServiceData)
///
/// @param self QBluetoothDeviceInfo*
/// @param serviceId QBluetoothUuid*
/// @param data char*
///
bool q_bluetoothdeviceinfo_set_service_data(void* self, void* serviceId, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#serviceData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of QBluetoothUuid* to char**
/// for (size_t i = 0; i < map.len; ++i) {
///     for (size_t j = 0; ((char**)map.values)[i][j] != NULL; j++) {
///         free((map.values)[i][j]);
///     }
///     free(((QBluetoothUuid*)map.keys)[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QBluetoothDeviceInfo*
///
/// @return libqt_map of QBluetoothUuid* to char**
///
libqt_map q_bluetoothdeviceinfo_service_data2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setCoreConfigurations)
///
/// @param self QBluetoothDeviceInfo*
/// @param coreConfigs flag of enum QBluetoothDeviceInfo__CoreConfiguration
///
void q_bluetoothdeviceinfo_set_core_configurations(void* self, int32_t coreConfigs);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#coreConfigurations)
///
/// @param self QBluetoothDeviceInfo*
///
/// @return flag of enum QBluetoothDeviceInfo__CoreConfiguration
///
int32_t q_bluetoothdeviceinfo_core_configurations(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#setDeviceUuid)
///
/// @param self QBluetoothDeviceInfo*
/// @param uuid QBluetoothUuid*
///
void q_bluetoothdeviceinfo_set_device_uuid(void* self, void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#deviceUuid)
///
/// @param self QBluetoothDeviceInfo*
///
QBluetoothUuid* q_bluetoothdeviceinfo_device_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#dtor.QBluetoothDeviceInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QBluetoothDeviceInfo*
///
void q_bluetoothdeviceinfo_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_MISCELLANEOUSDEVICE = 0,
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_COMPUTERDEVICE = 1,
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_PHONEDEVICE = 2,
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_NETWORKDEVICE = 3,
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_AUDIOVIDEODEVICE = 4,
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_PERIPHERALDEVICE = 5,
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_IMAGINGDEVICE = 6,
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_WEARABLEDEVICE = 7,
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_TOYDEVICE = 8,
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_HEALTHDEVICE = 9,
    QBLUETOOTHDEVICEINFO_MAJORDEVICECLASS_UNCATEGORIZEDDEVICE = 31
} QBluetoothDeviceInfo__MajorDeviceClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MINORMISCELLANEOUSCLASS_UNCATEGORIZEDMISCELLANEOUS = 0
} QBluetoothDeviceInfo__MinorMiscellaneousClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MINORCOMPUTERCLASS_UNCATEGORIZEDCOMPUTER = 0,
    QBLUETOOTHDEVICEINFO_MINORCOMPUTERCLASS_DESKTOPCOMPUTER = 1,
    QBLUETOOTHDEVICEINFO_MINORCOMPUTERCLASS_SERVERCOMPUTER = 2,
    QBLUETOOTHDEVICEINFO_MINORCOMPUTERCLASS_LAPTOPCOMPUTER = 3,
    QBLUETOOTHDEVICEINFO_MINORCOMPUTERCLASS_HANDHELDCLAMSHELLCOMPUTER = 4,
    QBLUETOOTHDEVICEINFO_MINORCOMPUTERCLASS_HANDHELDCOMPUTER = 5,
    QBLUETOOTHDEVICEINFO_MINORCOMPUTERCLASS_WEARABLECOMPUTER = 6
} QBluetoothDeviceInfo__MinorComputerClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MINORPHONECLASS_UNCATEGORIZEDPHONE = 0,
    QBLUETOOTHDEVICEINFO_MINORPHONECLASS_CELLULARPHONE = 1,
    QBLUETOOTHDEVICEINFO_MINORPHONECLASS_CORDLESSPHONE = 2,
    QBLUETOOTHDEVICEINFO_MINORPHONECLASS_SMARTPHONE = 3,
    QBLUETOOTHDEVICEINFO_MINORPHONECLASS_WIREDMODEMORVOICEGATEWAYPHONE = 4,
    QBLUETOOTHDEVICEINFO_MINORPHONECLASS_COMMONISDNACCESSPHONE = 5
} QBluetoothDeviceInfo__MinorPhoneClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MINORNETWORKCLASS_NETWORKFULLSERVICE = 0,
    QBLUETOOTHDEVICEINFO_MINORNETWORKCLASS_NETWORKLOADFACTORONE = 8,
    QBLUETOOTHDEVICEINFO_MINORNETWORKCLASS_NETWORKLOADFACTORTWO = 16,
    QBLUETOOTHDEVICEINFO_MINORNETWORKCLASS_NETWORKLOADFACTORTHREE = 24,
    QBLUETOOTHDEVICEINFO_MINORNETWORKCLASS_NETWORKLOADFACTORFOUR = 32,
    QBLUETOOTHDEVICEINFO_MINORNETWORKCLASS_NETWORKLOADFACTORFIVE = 40,
    QBLUETOOTHDEVICEINFO_MINORNETWORKCLASS_NETWORKLOADFACTORSIX = 48,
    QBLUETOOTHDEVICEINFO_MINORNETWORKCLASS_NETWORKNOSERVICE = 56
} QBluetoothDeviceInfo__MinorNetworkClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_UNCATEGORIZEDAUDIOVIDEODEVICE = 0,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_WEARABLEHEADSETDEVICE = 1,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_HANDSFREEDEVICE = 2,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_MICROPHONE = 4,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_LOUDSPEAKER = 5,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_HEADPHONES = 6,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_PORTABLEAUDIODEVICE = 7,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_CARAUDIO = 8,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_SETTOPBOX = 9,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_HIFIAUDIODEVICE = 10,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_VCR = 11,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_VIDEOCAMERA = 12,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_CAMCORDER = 13,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_VIDEOMONITOR = 14,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_VIDEODISPLAYANDLOUDSPEAKER = 15,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_VIDEOCONFERENCING = 16,
    QBLUETOOTHDEVICEINFO_MINORAUDIOVIDEOCLASS_GAMINGDEVICE = 18
} QBluetoothDeviceInfo__MinorAudioVideoClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MINORPERIPHERALCLASS_UNCATEGORIZEDPERIPHERAL = 0,
    QBLUETOOTHDEVICEINFO_MINORPERIPHERALCLASS_KEYBOARDPERIPHERAL = 16,
    QBLUETOOTHDEVICEINFO_MINORPERIPHERALCLASS_POINTINGDEVICEPERIPHERAL = 32,
    QBLUETOOTHDEVICEINFO_MINORPERIPHERALCLASS_KEYBOARDWITHPOINTINGDEVICEPERIPHERAL = 48,
    QBLUETOOTHDEVICEINFO_MINORPERIPHERALCLASS_JOYSTICKPERIPHERAL = 1,
    QBLUETOOTHDEVICEINFO_MINORPERIPHERALCLASS_GAMEPADPERIPHERAL = 2,
    QBLUETOOTHDEVICEINFO_MINORPERIPHERALCLASS_REMOTECONTROLPERIPHERAL = 3,
    QBLUETOOTHDEVICEINFO_MINORPERIPHERALCLASS_SENSINGDEVICEPERIPHERAL = 4,
    QBLUETOOTHDEVICEINFO_MINORPERIPHERALCLASS_DIGITIZERTABLETPERIPHERAL = 5,
    QBLUETOOTHDEVICEINFO_MINORPERIPHERALCLASS_CARDREADERPERIPHERAL = 6
} QBluetoothDeviceInfo__MinorPeripheralClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MINORIMAGINGCLASS_UNCATEGORIZEDIMAGINGDEVICE = 0,
    QBLUETOOTHDEVICEINFO_MINORIMAGINGCLASS_IMAGEDISPLAY = 4,
    QBLUETOOTHDEVICEINFO_MINORIMAGINGCLASS_IMAGECAMERA = 8,
    QBLUETOOTHDEVICEINFO_MINORIMAGINGCLASS_IMAGESCANNER = 16,
    QBLUETOOTHDEVICEINFO_MINORIMAGINGCLASS_IMAGEPRINTER = 32
} QBluetoothDeviceInfo__MinorImagingClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MINORWEARABLECLASS_UNCATEGORIZEDWEARABLEDEVICE = 0,
    QBLUETOOTHDEVICEINFO_MINORWEARABLECLASS_WEARABLEWRISTWATCH = 1,
    QBLUETOOTHDEVICEINFO_MINORWEARABLECLASS_WEARABLEPAGER = 2,
    QBLUETOOTHDEVICEINFO_MINORWEARABLECLASS_WEARABLEJACKET = 3,
    QBLUETOOTHDEVICEINFO_MINORWEARABLECLASS_WEARABLEHELMET = 4,
    QBLUETOOTHDEVICEINFO_MINORWEARABLECLASS_WEARABLEGLASSES = 5
} QBluetoothDeviceInfo__MinorWearableClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MINORTOYCLASS_UNCATEGORIZEDTOY = 0,
    QBLUETOOTHDEVICEINFO_MINORTOYCLASS_TOYROBOT = 1,
    QBLUETOOTHDEVICEINFO_MINORTOYCLASS_TOYVEHICLE = 2,
    QBLUETOOTHDEVICEINFO_MINORTOYCLASS_TOYDOLL = 3,
    QBLUETOOTHDEVICEINFO_MINORTOYCLASS_TOYCONTROLLER = 4,
    QBLUETOOTHDEVICEINFO_MINORTOYCLASS_TOYGAME = 5
} QBluetoothDeviceInfo__MinorToyClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_MINORHEALTHCLASS_UNCATEGORIZEDHEALTHDEVICE = 0,
    QBLUETOOTHDEVICEINFO_MINORHEALTHCLASS_HEALTHBLOODPRESSUREMONITOR = 1,
    QBLUETOOTHDEVICEINFO_MINORHEALTHCLASS_HEALTHTHERMOMETER = 2,
    QBLUETOOTHDEVICEINFO_MINORHEALTHCLASS_HEALTHWEIGHTSCALE = 3,
    QBLUETOOTHDEVICEINFO_MINORHEALTHCLASS_HEALTHGLUCOSEMETER = 4,
    QBLUETOOTHDEVICEINFO_MINORHEALTHCLASS_HEALTHPULSEOXIMETER = 5,
    QBLUETOOTHDEVICEINFO_MINORHEALTHCLASS_HEALTHDATADISPLAY = 7,
    QBLUETOOTHDEVICEINFO_MINORHEALTHCLASS_HEALTHSTEPCOUNTER = 8
} QBluetoothDeviceInfo__MinorHealthClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_SERVICECLASS_NOSERVICE = 0,
    QBLUETOOTHDEVICEINFO_SERVICECLASS_POSITIONINGSERVICE = 1,
    QBLUETOOTHDEVICEINFO_SERVICECLASS_NETWORKINGSERVICE = 2,
    QBLUETOOTHDEVICEINFO_SERVICECLASS_RENDERINGSERVICE = 4,
    QBLUETOOTHDEVICEINFO_SERVICECLASS_CAPTURINGSERVICE = 8,
    QBLUETOOTHDEVICEINFO_SERVICECLASS_OBJECTTRANSFERSERVICE = 16,
    QBLUETOOTHDEVICEINFO_SERVICECLASS_AUDIOSERVICE = 32,
    QBLUETOOTHDEVICEINFO_SERVICECLASS_TELEPHONYSERVICE = 64,
    QBLUETOOTHDEVICEINFO_SERVICECLASS_INFORMATIONSERVICE = 128,
    QBLUETOOTHDEVICEINFO_SERVICECLASS_ALLSERVICES = 2047
} QBluetoothDeviceInfo__ServiceClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_FIELD_NONE = 0,
    QBLUETOOTHDEVICEINFO_FIELD_RSSI = 1,
    QBLUETOOTHDEVICEINFO_FIELD_MANUFACTURERDATA = 2,
    QBLUETOOTHDEVICEINFO_FIELD_SERVICEDATA = 4,
    QBLUETOOTHDEVICEINFO_FIELD_ALL = 32767
} QBluetoothDeviceInfo__Field;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothdeviceinfo.html#public-types)

typedef enum {
    QBLUETOOTHDEVICEINFO_CORECONFIGURATION_UNKNOWNCORECONFIGURATION = 0,
    QBLUETOOTHDEVICEINFO_CORECONFIGURATION_LOWENERGYCORECONFIGURATION = 1,
    QBLUETOOTHDEVICEINFO_CORECONFIGURATION_BASERATECORECONFIGURATION = 2,
    QBLUETOOTHDEVICEINFO_CORECONFIGURATION_BASERATEANDLOWENERGYCORECONFIGURATION = 3
} QBluetoothDeviceInfo__CoreConfiguration;

#endif
