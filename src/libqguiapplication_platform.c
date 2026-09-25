#include "libqguiapplication_platform.hpp"
#include "libqguiapplication_platform.h"

#if defined(__linux__) && defined(__FreeBSD__)
QNativeInterface__QX11Application* q_nativeinterface__qx11application_new() {
    return QNativeInterface__QX11Application_New();
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qx11application_display(void* self) {
    return (void*)QNativeInterface__QX11Application_Display((QNativeInterface__QX11Application*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qx11application_on_display(void* self, void* (*callback)()) {
    QNativeInterface__QX11Application_OnDisplay((QNativeInterface__QX11Application*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qx11application_super_display(void* self) {
    return (void*)QNativeInterface__QX11Application_SuperDisplay((QNativeInterface__QX11Application*)self);
}
#endif

#ifdef __linux__
xcb_connection_t* q_nativeinterface__qx11application_connection(void* self) {
    return QNativeInterface__QX11Application_Connection((QNativeInterface__QX11Application*)self);
}
#endif

#ifdef __linux__
void q_nativeinterface__qx11application_on_connection(void* self, xcb_connection_t* (*callback)()) {
    QNativeInterface__QX11Application_OnConnection((QNativeInterface__QX11Application*)self, (intptr_t)callback);
}
#endif

#ifdef __linux__
xcb_connection_t* q_nativeinterface__qx11application_super_connection(void* self) {
    return QNativeInterface__QX11Application_SuperConnection((QNativeInterface__QX11Application*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
QNativeInterface__QWaylandApplication* q_nativeinterface__qwaylandapplication_new() {
    return QNativeInterface__QWaylandApplication_New();
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_display(void* self) {
    return QNativeInterface__QWaylandApplication_Display((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_display(void* self, void* (*callback)()) {
    QNativeInterface__QWaylandApplication_OnDisplay((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_super_display(void* self) {
    return QNativeInterface__QWaylandApplication_SuperDisplay((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_compositor(void* self) {
    return QNativeInterface__QWaylandApplication_Compositor((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_compositor(void* self, void* (*callback)()) {
    QNativeInterface__QWaylandApplication_OnCompositor((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_super_compositor(void* self) {
    return QNativeInterface__QWaylandApplication_SuperCompositor((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_seat(void* self) {
    return QNativeInterface__QWaylandApplication_Seat((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_seat(void* self, void* (*callback)()) {
    QNativeInterface__QWaylandApplication_OnSeat((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_super_seat(void* self) {
    return QNativeInterface__QWaylandApplication_SuperSeat((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_keyboard(void* self) {
    return QNativeInterface__QWaylandApplication_Keyboard((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_keyboard(void* self, void* (*callback)()) {
    QNativeInterface__QWaylandApplication_OnKeyboard((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_super_keyboard(void* self) {
    return QNativeInterface__QWaylandApplication_SuperKeyboard((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_pointer(void* self) {
    return QNativeInterface__QWaylandApplication_Pointer((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_pointer(void* self, void* (*callback)()) {
    QNativeInterface__QWaylandApplication_OnPointer((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_super_pointer(void* self) {
    return QNativeInterface__QWaylandApplication_SuperPointer((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_touch(void* self) {
    return QNativeInterface__QWaylandApplication_Touch((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_touch(void* self, void* (*callback)()) {
    QNativeInterface__QWaylandApplication_OnTouch((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_super_touch(void* self) {
    return QNativeInterface__QWaylandApplication_SuperTouch((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
uint32_t q_nativeinterface__qwaylandapplication_last_input_serial(void* self) {
    return QNativeInterface__QWaylandApplication_LastInputSerial((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_last_input_serial(void* self, uint32_t (*callback)()) {
    QNativeInterface__QWaylandApplication_OnLastInputSerial((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
uint32_t q_nativeinterface__qwaylandapplication_super_last_input_serial(void* self) {
    return QNativeInterface__QWaylandApplication_SuperLastInputSerial((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_last_input_seat(void* self) {
    return QNativeInterface__QWaylandApplication_LastInputSeat((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_last_input_seat(void* self, void* (*callback)()) {
    QNativeInterface__QWaylandApplication_OnLastInputSeat((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_super_last_input_seat(void* self) {
    return QNativeInterface__QWaylandApplication_SuperLastInputSeat((QNativeInterface__QWaylandApplication*)self);
}
#endif
