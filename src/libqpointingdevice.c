#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqeventpoint.hpp"
#include "libqinputdevice.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqpointingdevice.hpp"
#include "libqpointingdevice.h"

/// https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html

/// q_pointingdeviceuniqueid_new constructs a new QPointingDeviceUniqueId object.
///
/// ``` QPointingDeviceUniqueId* other ```
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new(void* other) {
    return QPointingDeviceUniqueId_new((QPointingDeviceUniqueId*)other);
}

/// q_pointingdeviceuniqueid_new2 constructs a new QPointingDeviceUniqueId object and invalidates the source QPointingDeviceUniqueId object.
///
/// ``` QPointingDeviceUniqueId* other ```
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new2(void* other) {
    return QPointingDeviceUniqueId_new2((QPointingDeviceUniqueId*)other);
}

/// q_pointingdeviceuniqueid_new3 constructs a new QPointingDeviceUniqueId object.
///
///
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new3() {
    return QPointingDeviceUniqueId_new3();
}

/// q_pointingdeviceuniqueid_new4 constructs a new QPointingDeviceUniqueId object.
///
/// ``` QPointingDeviceUniqueId* param1 ```
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new4(void* param1) {
    return QPointingDeviceUniqueId_new4((QPointingDeviceUniqueId*)param1);
}

/// q_pointingdeviceuniqueid_copy_assign shallow copies `other` into `self`.
///
/// ``` QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other ```
void q_pointingdeviceuniqueid_copy_assign(void* self, void* other) {
    QPointingDeviceUniqueId_CopyAssign((QPointingDeviceUniqueId*)self, (QPointingDeviceUniqueId*)other);
}

/// q_pointingdeviceuniqueid_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other ```
void q_pointingdeviceuniqueid_move_assign(void* self, void* other) {
    QPointingDeviceUniqueId_MoveAssign((QPointingDeviceUniqueId*)self, (QPointingDeviceUniqueId*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#fromNumericId)
///
/// ``` long long id ```
QPointingDeviceUniqueId* q_pointingdeviceuniqueid_from_numeric_id(long long id) {
    return QPointingDeviceUniqueId_FromNumericId(id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#isValid)
///
/// ``` QPointingDeviceUniqueId* self ```
bool q_pointingdeviceuniqueid_is_valid(void* self) {
    return QPointingDeviceUniqueId_IsValid((QPointingDeviceUniqueId*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html#numericId)
///
/// ``` QPointingDeviceUniqueId* self ```
long long q_pointingdeviceuniqueid_numeric_id(void* self) {
    return QPointingDeviceUniqueId_NumericId((QPointingDeviceUniqueId*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QPointingDeviceUniqueId* self ```
void q_pointingdeviceuniqueid_delete(void* self) {
    QPointingDeviceUniqueId_Delete((QPointingDeviceUniqueId*)(self));
}

/// https://doc.qt.io/qt-6/qpointingdevice.html

/// q_pointingdevice_new constructs a new QPointingDevice object.
///
///
QPointingDevice* q_pointingdevice_new() {
    return QPointingDevice_new();
}

/// q_pointingdevice_new2 constructs a new QPointingDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType devType, enum QPointingDevice__PointerType pType, int caps, int maxPoints, int buttonCount ```
QPointingDevice* q_pointingdevice_new2(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount) {
    return QPointingDevice_new2(qstring(name), systemId, devType, pType, caps, maxPoints, buttonCount);
}

/// q_pointingdevice_new3 constructs a new QPointingDevice object.
///
/// ``` QObject* parent ```
QPointingDevice* q_pointingdevice_new3(void* parent) {
    return QPointingDevice_new3((QObject*)parent);
}

/// q_pointingdevice_new4 constructs a new QPointingDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType devType, enum QPointingDevice__PointerType pType, int caps, int maxPoints, int buttonCount, const char* seatName ```
QPointingDevice* q_pointingdevice_new4(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName) {
    return QPointingDevice_new4(qstring(name), systemId, devType, pType, caps, maxPoints, buttonCount, qstring(seatName));
}

/// q_pointingdevice_new5 constructs a new QPointingDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType devType, enum QPointingDevice__PointerType pType, int caps, int maxPoints, int buttonCount, const char* seatName, QPointingDeviceUniqueId* uniqueId ```
QPointingDevice* q_pointingdevice_new5(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId) {
    return QPointingDevice_new5(qstring(name), systemId, devType, pType, caps, maxPoints, buttonCount, qstring(seatName), (QPointingDeviceUniqueId*)uniqueId);
}

/// q_pointingdevice_new6 constructs a new QPointingDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType devType, enum QPointingDevice__PointerType pType, int caps, int maxPoints, int buttonCount, const char* seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent ```
QPointingDevice* q_pointingdevice_new6(const char* name, long long systemId, int64_t devType, int64_t pType, int64_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId, void* parent) {
    return QPointingDevice_new6(qstring(name), systemId, devType, pType, caps, maxPoints, buttonCount, qstring(seatName), (QPointingDeviceUniqueId*)uniqueId, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPointingDevice* self ```
QMetaObject* q_pointingdevice_meta_object(void* self) {
    return QPointingDevice_MetaObject((QPointingDevice*)self);
}

/// ``` QPointingDevice* self, const char* param1 ```
void* q_pointingdevice_metacast(void* self, const char* param1) {
    return QPointingDevice_Metacast((QPointingDevice*)self, param1);
}

/// ``` QPointingDevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pointingdevice_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPointingDevice_Metacall((QPointingDevice*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPointingDevice* self, int32_t (*slot)(QPointingDevice*, enum QMetaObject__Call, int, void*) ```
void q_pointingdevice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPointingDevice_OnMetacall((QPointingDevice*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPointingDevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pointingdevice_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPointingDevice_QBaseMetacall((QPointingDevice*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pointingdevice_tr(const char* s) {
    libqt_string _str = QPointingDevice_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setType)
///
/// ``` QPointingDevice* self, enum QInputDevice__DeviceType devType ```
void q_pointingdevice_set_type(void* self, int64_t devType) {
    QPointingDevice_SetType((QPointingDevice*)self, devType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setCapabilities)
///
/// ``` QPointingDevice* self, int caps ```
void q_pointingdevice_set_capabilities(void* self, int64_t caps) {
    QPointingDevice_SetCapabilities((QPointingDevice*)self, caps);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#setMaximumTouchPoints)
///
/// ``` QPointingDevice* self, int c ```
void q_pointingdevice_set_maximum_touch_points(void* self, int c) {
    QPointingDevice_SetMaximumTouchPoints((QPointingDevice*)self, c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#pointerType)
///
/// ``` QPointingDevice* self ```
int64_t q_pointingdevice_pointer_type(void* self) {
    return QPointingDevice_PointerType((QPointingDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#maximumPoints)
///
/// ``` QPointingDevice* self ```
int32_t q_pointingdevice_maximum_points(void* self) {
    return QPointingDevice_MaximumPoints((QPointingDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#buttonCount)
///
/// ``` QPointingDevice* self ```
int32_t q_pointingdevice_button_count(void* self) {
    return QPointingDevice_ButtonCount((QPointingDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#uniqueId)
///
/// ``` QPointingDevice* self ```
QPointingDeviceUniqueId* q_pointingdevice_unique_id(void* self) {
    return QPointingDevice_UniqueId((QPointingDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
///
///
QPointingDevice* q_pointingdevice_primary_pointing_device() {
    return QPointingDevice_PrimaryPointingDevice();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#operator==)
///
/// ``` QPointingDevice* self, QPointingDevice* other ```
bool q_pointingdevice_operator_equal(void* self, void* other) {
    return QPointingDevice_OperatorEqual((QPointingDevice*)self, (QPointingDevice*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#grabChanged)
///
/// ``` QPointingDevice* self, QObject* grabber, enum QPointingDevice__GrabTransition transition, QPointerEvent* event, QEventPoint* point ```
void q_pointingdevice_grab_changed(void* self, void* grabber, int64_t transition, void* event, void* point) {
    QPointingDevice_GrabChanged((QPointingDevice*)self, (QObject*)grabber, transition, (QPointerEvent*)event, (QEventPoint*)point);
}

/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QObject*, enum QPointingDevice__GrabTransition, QPointerEvent*, QEventPoint*) ```
void q_pointingdevice_on_grab_changed(void* self, void (*slot)(void*, void*, int64_t, void*, void*)) {
    QPointingDevice_Connect_GrabChanged((QPointingDevice*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pointingdevice_tr2(const char* s, const char* c) {
    libqt_string _str = QPointingDevice_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pointingdevice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPointingDevice_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpointingdevice.html#primaryPointingDevice)
///
/// ``` const char* seatName ```
QPointingDevice* q_pointingdevice_primary_pointing_device1(const char* seatName) {
    return QPointingDevice_PrimaryPointingDevice1(qstring(seatName));
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#name)
///
/// ``` QPointingDevice* self ```
const char* q_pointingdevice_name(void* self) {
    libqt_string _str = QInputDevice_Name((QInputDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#type)
///
/// ``` QPointingDevice* self ```
int64_t q_pointingdevice_type(void* self) {
    return QInputDevice_Type((QInputDevice*)self);
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#capabilities)
///
/// ``` QPointingDevice* self ```
int64_t q_pointingdevice_capabilities(void* self) {
    return QInputDevice_Capabilities((QInputDevice*)self);
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#hasCapability)
///
/// ``` QPointingDevice* self, enum QInputDevice__Capability cap ```
bool q_pointingdevice_has_capability(void* self, int64_t cap) {
    return QInputDevice_HasCapability((QInputDevice*)self, cap);
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#systemId)
///
/// ``` QPointingDevice* self ```
long long q_pointingdevice_system_id(void* self) {
    return QInputDevice_SystemId((QInputDevice*)self);
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatName)
///
/// ``` QPointingDevice* self ```
const char* q_pointingdevice_seat_name(void* self) {
    libqt_string _str = QInputDevice_SeatName((QInputDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometry)
///
/// ``` QPointingDevice* self ```
QRect* q_pointingdevice_available_virtual_geometry(void* self) {
    return QInputDevice_AvailableVirtualGeometry((QInputDevice*)self);
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatNames)
///
///
const char** q_pointingdevice_seat_names() {
    libqt_list _arr = QInputDevice_SeatNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#devices)
///
///
libqt_list /* of QInputDevice* */ q_pointingdevice_devices() {
    libqt_list _arr = QInputDevice_Devices();
    return _arr;
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
///
QInputDevice* q_pointingdevice_primary_keyboard() {
    return QInputDevice_PrimaryKeyboard();
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// ``` QPointingDevice* self, QRect* area ```
void q_pointingdevice_available_virtual_geometry_changed(void* self, void* area) {
    QInputDevice_AvailableVirtualGeometryChanged((QInputDevice*)self, (QRect*)area);
}

/// Inherited from QInputDevice
///
/// ``` QPointingDevice* self, void (*slot)(QInputDevice*, QRect*) ```
void q_pointingdevice_on_available_virtual_geometry_changed(void* self, void (*slot)(void*, void*)) {
    QInputDevice_Connect_AvailableVirtualGeometryChanged((QInputDevice*)self, (intptr_t)slot);
}

/// Inherited from QInputDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
/// ``` const char* seatName ```
QInputDevice* q_pointingdevice_primary_keyboard1(const char* seatName) {
    return QInputDevice_PrimaryKeyboard1(qstring(seatName));
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPointingDevice* self ```
const char* q_pointingdevice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPointingDevice* self, const char* name ```
void q_pointingdevice_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPointingDevice* self ```
bool q_pointingdevice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPointingDevice* self ```
bool q_pointingdevice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPointingDevice* self ```
bool q_pointingdevice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPointingDevice* self ```
bool q_pointingdevice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPointingDevice* self, bool b ```
bool q_pointingdevice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPointingDevice* self ```
QThread* q_pointingdevice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPointingDevice* self, QThread* thread ```
void q_pointingdevice_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPointingDevice* self, int interval ```
int32_t q_pointingdevice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPointingDevice* self, int id ```
void q_pointingdevice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPointingDevice* self ```
libqt_list /* of QObject* */ q_pointingdevice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPointingDevice* self, QObject* parent ```
void q_pointingdevice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPointingDevice* self, QObject* filterObj ```
void q_pointingdevice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPointingDevice* self, QObject* obj ```
void q_pointingdevice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pointingdevice_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPointingDevice* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pointingdevice_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pointingdevice_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pointingdevice_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPointingDevice* self ```
void q_pointingdevice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPointingDevice* self ```
void q_pointingdevice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPointingDevice* self, const char* name, QVariant* value ```
bool q_pointingdevice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPointingDevice* self, const char* name ```
QVariant* q_pointingdevice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPointingDevice* self ```
const char** q_pointingdevice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPointingDevice* self ```
QBindingStorage* q_pointingdevice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPointingDevice* self ```
QBindingStorage* q_pointingdevice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPointingDevice* self ```
void q_pointingdevice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPointingDevice* self, void (*slot)(QObject*) ```
void q_pointingdevice_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPointingDevice* self ```
QObject* q_pointingdevice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPointingDevice* self, const char* classname ```
bool q_pointingdevice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPointingDevice* self ```
void q_pointingdevice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPointingDevice* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pointingdevice_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pointingdevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPointingDevice* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pointingdevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPointingDevice* self, QObject* param1 ```
void q_pointingdevice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPointingDevice* self, void (*slot)(QObject*, QObject*) ```
void q_pointingdevice_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QEvent* event ```
bool q_pointingdevice_event(void* self, void* event) {
    return QPointingDevice_Event((QPointingDevice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QEvent* event ```
bool q_pointingdevice_qbase_event(void* self, void* event) {
    return QPointingDevice_QBaseEvent((QPointingDevice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, bool (*slot)(QPointingDevice*, QEvent*) ```
void q_pointingdevice_on_event(void* self, bool (*slot)(void*, void*)) {
    QPointingDevice_OnEvent((QPointingDevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QObject* watched, QEvent* event ```
bool q_pointingdevice_event_filter(void* self, void* watched, void* event) {
    return QPointingDevice_EventFilter((QPointingDevice*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QObject* watched, QEvent* event ```
bool q_pointingdevice_qbase_event_filter(void* self, void* watched, void* event) {
    return QPointingDevice_QBaseEventFilter((QPointingDevice*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, bool (*slot)(QPointingDevice*, QObject*, QEvent*) ```
void q_pointingdevice_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPointingDevice_OnEventFilter((QPointingDevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QTimerEvent* event ```
void q_pointingdevice_timer_event(void* self, void* event) {
    QPointingDevice_TimerEvent((QPointingDevice*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QTimerEvent* event ```
void q_pointingdevice_qbase_timer_event(void* self, void* event) {
    QPointingDevice_QBaseTimerEvent((QPointingDevice*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QTimerEvent*) ```
void q_pointingdevice_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPointingDevice_OnTimerEvent((QPointingDevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QChildEvent* event ```
void q_pointingdevice_child_event(void* self, void* event) {
    QPointingDevice_ChildEvent((QPointingDevice*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QChildEvent* event ```
void q_pointingdevice_qbase_child_event(void* self, void* event) {
    QPointingDevice_QBaseChildEvent((QPointingDevice*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QChildEvent*) ```
void q_pointingdevice_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPointingDevice_OnChildEvent((QPointingDevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QEvent* event ```
void q_pointingdevice_custom_event(void* self, void* event) {
    QPointingDevice_CustomEvent((QPointingDevice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QEvent* event ```
void q_pointingdevice_qbase_custom_event(void* self, void* event) {
    QPointingDevice_QBaseCustomEvent((QPointingDevice*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QEvent*) ```
void q_pointingdevice_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPointingDevice_OnCustomEvent((QPointingDevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
void q_pointingdevice_connect_notify(void* self, void* signal) {
    QPointingDevice_ConnectNotify((QPointingDevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
void q_pointingdevice_qbase_connect_notify(void* self, void* signal) {
    QPointingDevice_QBaseConnectNotify((QPointingDevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QMetaMethod*) ```
void q_pointingdevice_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPointingDevice_OnConnectNotify((QPointingDevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
void q_pointingdevice_disconnect_notify(void* self, void* signal) {
    QPointingDevice_DisconnectNotify((QPointingDevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
void q_pointingdevice_qbase_disconnect_notify(void* self, void* signal) {
    QPointingDevice_QBaseDisconnectNotify((QPointingDevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, void (*slot)(QPointingDevice*, QMetaMethod*) ```
void q_pointingdevice_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPointingDevice_OnDisconnectNotify((QPointingDevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self ```
QObject* q_pointingdevice_sender(void* self) {
    return QPointingDevice_Sender((QPointingDevice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self ```
QObject* q_pointingdevice_qbase_sender(void* self) {
    return QPointingDevice_QBaseSender((QPointingDevice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, QObject* (*slot)() ```
void q_pointingdevice_on_sender(void* self, QObject* (*slot)()) {
    QPointingDevice_OnSender((QPointingDevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self ```
int32_t q_pointingdevice_sender_signal_index(void* self) {
    return QPointingDevice_SenderSignalIndex((QPointingDevice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self ```
int32_t q_pointingdevice_qbase_sender_signal_index(void* self) {
    return QPointingDevice_QBaseSenderSignalIndex((QPointingDevice*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, int32_t (*slot)() ```
void q_pointingdevice_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPointingDevice_OnSenderSignalIndex((QPointingDevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, const char* signal ```
int32_t q_pointingdevice_receivers(void* self, const char* signal) {
    return QPointingDevice_Receivers((QPointingDevice*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, const char* signal ```
int32_t q_pointingdevice_qbase_receivers(void* self, const char* signal) {
    return QPointingDevice_QBaseReceivers((QPointingDevice*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, int32_t (*slot)(QPointingDevice*, const char*) ```
void q_pointingdevice_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPointingDevice_OnReceivers((QPointingDevice*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
bool q_pointingdevice_is_signal_connected(void* self, void* signal) {
    return QPointingDevice_IsSignalConnected((QPointingDevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPointingDevice* self, QMetaMethod* signal ```
bool q_pointingdevice_qbase_is_signal_connected(void* self, void* signal) {
    return QPointingDevice_QBaseIsSignalConnected((QPointingDevice*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPointingDevice* self, bool (*slot)(QPointingDevice*, QMetaMethod*) ```
void q_pointingdevice_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPointingDevice_OnIsSignalConnected((QPointingDevice*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPointingDevice* self ```
void q_pointingdevice_delete(void* self) {
    QPointingDevice_Delete((QPointingDevice*)(self));
}