#include "libqguiapplication_platform.hpp"
#include "libqguiapplication_platform.h"

#if defined(__linux__) && defined(__FreeBSD__)
QNativeInterface__QX11Application* q_nativeinterface__qx11application_new() {
    return QNativeInterface__QX11Application_New();
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qx11application_display(const void* self) {
    return (void*)QNativeInterface__QX11Application_Display((QNativeInterface__QX11Application*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qx11application_on_display(void* self, void* (*callback)(const void*)) {
    QNativeInterface__QX11Application_OnDisplay((QNativeInterface__QX11Application*)self, (intptr_t)callback);
}
#endif

#ifdef __linux__
xcb_connection_t* q_nativeinterface__qx11application_connection(const void* self) {
    return QNativeInterface__QX11Application_Connection((QNativeInterface__QX11Application*)self);
}
#endif

#ifdef __linux__
void q_nativeinterface__qx11application_on_connection(void* self, xcb_connection_t* (*callback)(const void*)) {
    QNativeInterface__QX11Application_OnConnection((QNativeInterface__QX11Application*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
QNativeInterface__QWaylandApplication* q_nativeinterface__qwaylandapplication_new() {
    return QNativeInterface__QWaylandApplication_New();
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_display(const void* self) {
    return QNativeInterface__QWaylandApplication_Display((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_display(void* self, void* (*callback)(const void*)) {
    QNativeInterface__QWaylandApplication_OnDisplay((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_compositor(const void* self) {
    return QNativeInterface__QWaylandApplication_Compositor((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_compositor(void* self, void* (*callback)(const void*)) {
    QNativeInterface__QWaylandApplication_OnCompositor((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_seat(const void* self) {
    return QNativeInterface__QWaylandApplication_Seat((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_seat(void* self, void* (*callback)(const void*)) {
    QNativeInterface__QWaylandApplication_OnSeat((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_keyboard(const void* self) {
    return QNativeInterface__QWaylandApplication_Keyboard((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_keyboard(void* self, void* (*callback)(const void*)) {
    QNativeInterface__QWaylandApplication_OnKeyboard((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_pointer(const void* self) {
    return QNativeInterface__QWaylandApplication_Pointer((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_pointer(void* self, void* (*callback)(const void*)) {
    QNativeInterface__QWaylandApplication_OnPointer((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_touch(const void* self) {
    return QNativeInterface__QWaylandApplication_Touch((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_touch(void* self, void* (*callback)(const void*)) {
    QNativeInterface__QWaylandApplication_OnTouch((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
uint32_t q_nativeinterface__qwaylandapplication_last_input_serial(const void* self) {
    return QNativeInterface__QWaylandApplication_LastInputSerial((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_last_input_serial(void* self, uint32_t (*callback)(const void*)) {
    QNativeInterface__QWaylandApplication_OnLastInputSerial((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void* q_nativeinterface__qwaylandapplication_last_input_seat(const void* self) {
    return QNativeInterface__QWaylandApplication_LastInputSeat((QNativeInterface__QWaylandApplication*)self);
}
#endif

#if defined(__linux__) && defined(__FreeBSD__)
void q_nativeinterface__qwaylandapplication_on_last_input_seat(void* self, void* (*callback)(const void*)) {
    QNativeInterface__QWaylandApplication_OnLastInputSeat((QNativeInterface__QWaylandApplication*)self, (intptr_t)callback);
}
#endif
