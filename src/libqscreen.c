#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqtransform.hpp"
#include "libqscreen.hpp"
#include "libqscreen.h"

const QMetaObject* q_screen_meta_object(void* self) {
    return QScreen_MetaObject((QScreen*)self);
}

void* q_screen_metacast(void* self, const char* param1) {
    return QScreen_Metacast((QScreen*)self, param1);
}

int32_t q_screen_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScreen_Metacall((QScreen*)self, param1, param2, param3);
}

const char* q_screen_tr(const char* s) {
    libqt_string _str = QScreen_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_screen_name(void* self) {
    libqt_string _str = QScreen_Name((QScreen*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_screen_manufacturer(void* self) {
    libqt_string _str = QScreen_Manufacturer((QScreen*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_screen_model(void* self) {
    libqt_string _str = QScreen_Model((QScreen*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_screen_serial_number(void* self) {
    libqt_string _str = QScreen_SerialNumber((QScreen*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_screen_depth(void* self) {
    return QScreen_Depth((QScreen*)self);
}

QSize* q_screen_size(void* self) {
    return QScreen_Size((QScreen*)self);
}

QRect* q_screen_geometry(void* self) {
    return QScreen_Geometry((QScreen*)self);
}

QSizeF* q_screen_physical_size(void* self) {
    return QScreen_PhysicalSize((QScreen*)self);
}

double q_screen_physical_dots_per_inch_x(void* self) {
    return QScreen_PhysicalDotsPerInchX((QScreen*)self);
}

double q_screen_physical_dots_per_inch_y(void* self) {
    return QScreen_PhysicalDotsPerInchY((QScreen*)self);
}

double q_screen_physical_dots_per_inch(void* self) {
    return QScreen_PhysicalDotsPerInch((QScreen*)self);
}

double q_screen_logical_dots_per_inch_x(void* self) {
    return QScreen_LogicalDotsPerInchX((QScreen*)self);
}

double q_screen_logical_dots_per_inch_y(void* self) {
    return QScreen_LogicalDotsPerInchY((QScreen*)self);
}

double q_screen_logical_dots_per_inch(void* self) {
    return QScreen_LogicalDotsPerInch((QScreen*)self);
}

double q_screen_device_pixel_ratio(void* self) {
    return QScreen_DevicePixelRatio((QScreen*)self);
}

QSize* q_screen_available_size(void* self) {
    return QScreen_AvailableSize((QScreen*)self);
}

QRect* q_screen_available_geometry(void* self) {
    return QScreen_AvailableGeometry((QScreen*)self);
}

libqt_list /* of QScreen* */ q_screen_virtual_siblings(void* self) {
    libqt_list _arr = QScreen_VirtualSiblings((QScreen*)self);
    return _arr;
}

QScreen* q_screen_virtual_sibling_at(void* self, void* point) {
    return QScreen_VirtualSiblingAt((QScreen*)self, (QPoint*)point);
}

QSize* q_screen_virtual_size(void* self) {
    return QScreen_VirtualSize((QScreen*)self);
}

QRect* q_screen_virtual_geometry(void* self) {
    return QScreen_VirtualGeometry((QScreen*)self);
}

QSize* q_screen_available_virtual_size(void* self) {
    return QScreen_AvailableVirtualSize((QScreen*)self);
}

QRect* q_screen_available_virtual_geometry(void* self) {
    return QScreen_AvailableVirtualGeometry((QScreen*)self);
}

int64_t q_screen_primary_orientation(void* self) {
    return QScreen_PrimaryOrientation((QScreen*)self);
}

int64_t q_screen_orientation(void* self) {
    return QScreen_Orientation((QScreen*)self);
}

int64_t q_screen_native_orientation(void* self) {
    return QScreen_NativeOrientation((QScreen*)self);
}

int32_t q_screen_angle_between(void* self, int64_t a, int64_t b) {
    return QScreen_AngleBetween((QScreen*)self, a, b);
}

QTransform* q_screen_transform_between(void* self, int64_t a, int64_t b, void* target) {
    return QScreen_TransformBetween((QScreen*)self, a, b, (QRect*)target);
}

QRect* q_screen_map_between(void* self, int64_t a, int64_t b, void* rect) {
    return QScreen_MapBetween((QScreen*)self, a, b, (QRect*)rect);
}

bool q_screen_is_portrait(void* self, int64_t orientation) {
    return QScreen_IsPortrait((QScreen*)self, orientation);
}

bool q_screen_is_landscape(void* self, int64_t orientation) {
    return QScreen_IsLandscape((QScreen*)self, orientation);
}

QPixmap* q_screen_grab_window(void* self) {
    return QScreen_GrabWindow((QScreen*)self);
}

double q_screen_refresh_rate(void* self) {
    return QScreen_RefreshRate((QScreen*)self);
}

void q_screen_geometry_changed(void* self, void* geometry) {
    QScreen_GeometryChanged((QScreen*)self, (QRect*)geometry);
}

void q_screen_on_geometry_changed(void* self, void (*slot)(void*, void*)) {
    QScreen_Connect_GeometryChanged((QScreen*)self, (intptr_t)slot);
}

void q_screen_available_geometry_changed(void* self, void* geometry) {
    QScreen_AvailableGeometryChanged((QScreen*)self, (QRect*)geometry);
}

void q_screen_on_available_geometry_changed(void* self, void (*slot)(void*, void*)) {
    QScreen_Connect_AvailableGeometryChanged((QScreen*)self, (intptr_t)slot);
}

void q_screen_physical_size_changed(void* self, void* size) {
    QScreen_PhysicalSizeChanged((QScreen*)self, (QSizeF*)size);
}

void q_screen_on_physical_size_changed(void* self, void (*slot)(void*, void*)) {
    QScreen_Connect_PhysicalSizeChanged((QScreen*)self, (intptr_t)slot);
}

void q_screen_physical_dots_per_inch_changed(void* self, double dpi) {
    QScreen_PhysicalDotsPerInchChanged((QScreen*)self, dpi);
}

void q_screen_on_physical_dots_per_inch_changed(void* self, void (*slot)(void*, double)) {
    QScreen_Connect_PhysicalDotsPerInchChanged((QScreen*)self, (intptr_t)slot);
}

void q_screen_logical_dots_per_inch_changed(void* self, double dpi) {
    QScreen_LogicalDotsPerInchChanged((QScreen*)self, dpi);
}

void q_screen_on_logical_dots_per_inch_changed(void* self, void (*slot)(void*, double)) {
    QScreen_Connect_LogicalDotsPerInchChanged((QScreen*)self, (intptr_t)slot);
}

void q_screen_virtual_geometry_changed(void* self, void* rect) {
    QScreen_VirtualGeometryChanged((QScreen*)self, (QRect*)rect);
}

void q_screen_on_virtual_geometry_changed(void* self, void (*slot)(void*, void*)) {
    QScreen_Connect_VirtualGeometryChanged((QScreen*)self, (intptr_t)slot);
}

void q_screen_primary_orientation_changed(void* self, int64_t orientation) {
    QScreen_PrimaryOrientationChanged((QScreen*)self, orientation);
}

void q_screen_on_primary_orientation_changed(void* self, void (*slot)(void*, int64_t)) {
    QScreen_Connect_PrimaryOrientationChanged((QScreen*)self, (intptr_t)slot);
}

void q_screen_orientation_changed(void* self, int64_t orientation) {
    QScreen_OrientationChanged((QScreen*)self, orientation);
}

void q_screen_on_orientation_changed(void* self, void (*slot)(void*, int64_t)) {
    QScreen_Connect_OrientationChanged((QScreen*)self, (intptr_t)slot);
}

void q_screen_refresh_rate_changed(void* self, double refreshRate) {
    QScreen_RefreshRateChanged((QScreen*)self, refreshRate);
}

void q_screen_on_refresh_rate_changed(void* self, void (*slot)(void*, double)) {
    QScreen_Connect_RefreshRateChanged((QScreen*)self, (intptr_t)slot);
}

const char* q_screen_tr2(const char* s, const char* c) {
    libqt_string _str = QScreen_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_screen_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QScreen_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPixmap* q_screen_grab_window1(void* self, uintptr_t window) {
    return QScreen_GrabWindow1((QScreen*)self, window);
}

QPixmap* q_screen_grab_window2(void* self, uintptr_t window, int x) {
    return QScreen_GrabWindow2((QScreen*)self, window, x);
}

QPixmap* q_screen_grab_window3(void* self, uintptr_t window, int x, int y) {
    return QScreen_GrabWindow3((QScreen*)self, window, x, y);
}

QPixmap* q_screen_grab_window4(void* self, uintptr_t window, int x, int y, int w) {
    return QScreen_GrabWindow4((QScreen*)self, window, x, y, w);
}

QPixmap* q_screen_grab_window5(void* self, uintptr_t window, int x, int y, int w, int h) {
    return QScreen_GrabWindow5((QScreen*)self, window, x, y, w, h);
}

bool q_screen_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_screen_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_screen_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_screen_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_screen_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_screen_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_screen_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_screen_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_screen_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_screen_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_screen_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_screen_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_screen_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_screen_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_screen_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_screen_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_screen_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_screen_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_screen_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_screen_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_screen_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_screen_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_screen_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_screen_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_screen_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_screen_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_screen_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_screen_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_screen_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_screen_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_screen_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_screen_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_screen_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_screen_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_screen_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_screen_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_screen_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_screen_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_screen_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_screen_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_screen_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_screen_delete(void* self) {
    QScreen_Delete((QScreen*)(self));
}
