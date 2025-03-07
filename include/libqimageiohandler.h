#pragma once
#ifndef SRCQT6C_LIBQIMAGEIOHANDLER_H
#define SRCQT6C_LIBQIMAGEIOHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqiodevice.h"
#include "libqimage.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QImageIOHandler* q_imageiohandler_new();
void q_imageiohandler_set_device(void* self, void* device);
QIODevice* q_imageiohandler_device(void* self);
void q_imageiohandler_set_format(void* self, const char* format);
void q_imageiohandler_set_format_with_format(void* self, const char* format);
char* q_imageiohandler_format(void* self);
bool q_imageiohandler_can_read(void* self);
void q_imageiohandler_on_can_read(void* self, bool (*slot)());
bool q_imageiohandler_qbase_can_read(void* self);
bool q_imageiohandler_read(void* self, void* image);
void q_imageiohandler_on_read(void* self, bool (*slot)(void*, void*));
bool q_imageiohandler_qbase_read(void* self, void* image);
bool q_imageiohandler_write(void* self, void* image);
void q_imageiohandler_on_write(void* self, bool (*slot)(void*, void*));
bool q_imageiohandler_qbase_write(void* self, void* image);
QVariant* q_imageiohandler_option(void* self, int64_t option);
void q_imageiohandler_on_option(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_imageiohandler_qbase_option(void* self, int64_t option);
void q_imageiohandler_set_option(void* self, int64_t option, void* value);
void q_imageiohandler_on_set_option(void* self, void (*slot)(void*, int64_t, void*));
void q_imageiohandler_qbase_set_option(void* self, int64_t option, void* value);
bool q_imageiohandler_supports_option(void* self, int64_t option);
void q_imageiohandler_on_supports_option(void* self, bool (*slot)(void*, int64_t));
bool q_imageiohandler_qbase_supports_option(void* self, int64_t option);
bool q_imageiohandler_jump_to_next_image(void* self);
void q_imageiohandler_on_jump_to_next_image(void* self, bool (*slot)());
bool q_imageiohandler_qbase_jump_to_next_image(void* self);
bool q_imageiohandler_jump_to_image(void* self, int imageNumber);
void q_imageiohandler_on_jump_to_image(void* self, bool (*slot)(void*, int));
bool q_imageiohandler_qbase_jump_to_image(void* self, int imageNumber);
int32_t q_imageiohandler_loop_count(void* self);
void q_imageiohandler_on_loop_count(void* self, int32_t (*slot)());
int32_t q_imageiohandler_qbase_loop_count(void* self);
int32_t q_imageiohandler_image_count(void* self);
void q_imageiohandler_on_image_count(void* self, int32_t (*slot)());
int32_t q_imageiohandler_qbase_image_count(void* self);
int32_t q_imageiohandler_next_image_delay(void* self);
void q_imageiohandler_on_next_image_delay(void* self, int32_t (*slot)());
int32_t q_imageiohandler_qbase_next_image_delay(void* self);
int32_t q_imageiohandler_current_image_number(void* self);
void q_imageiohandler_on_current_image_number(void* self, int32_t (*slot)());
int32_t q_imageiohandler_qbase_current_image_number(void* self);
QRect* q_imageiohandler_current_image_rect(void* self);
void q_imageiohandler_on_current_image_rect(void* self, QRect* (*slot)());
QRect* q_imageiohandler_qbase_current_image_rect(void* self);
bool q_imageiohandler_allocate_image(void* size, int64_t format, void* image);
void q_imageiohandler_delete(void* self);

QImageIOPlugin* q_imageioplugin_new();
QImageIOPlugin* q_imageioplugin_new2(void* parent);
QMetaObject* q_imageioplugin_meta_object(void* self);
void* q_imageioplugin_metacast(void* self, const char* param1);
int32_t q_imageioplugin_metacall(void* self, int64_t param1, int param2, void* param3);
void q_imageioplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_imageioplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_imageioplugin_tr(const char* s);
int64_t q_imageioplugin_capabilities(void* self, void* device, const char* format);
void q_imageioplugin_on_capabilities(void* self, int64_t (*slot)(void*, void*, const char*));
int64_t q_imageioplugin_qbase_capabilities(void* self, void* device, const char* format);
QImageIOHandler* q_imageioplugin_create(void* self, void* device, const char* format);
void q_imageioplugin_on_create(void* self, QImageIOHandler* (*slot)(void*, void*, const char*));
QImageIOHandler* q_imageioplugin_qbase_create(void* self, void* device, const char* format);
const char* q_imageioplugin_tr2(const char* s, const char* c);
const char* q_imageioplugin_tr3(const char* s, const char* c, int n);
const char* q_imageioplugin_object_name(void* self);
void q_imageioplugin_set_object_name(void* self, const char* name);
bool q_imageioplugin_is_widget_type(void* self);
bool q_imageioplugin_is_window_type(void* self);
bool q_imageioplugin_is_quick_item_type(void* self);
bool q_imageioplugin_signals_blocked(void* self);
bool q_imageioplugin_block_signals(void* self, bool b);
QThread* q_imageioplugin_thread(void* self);
void q_imageioplugin_move_to_thread(void* self, void* thread);
int32_t q_imageioplugin_start_timer(void* self, int interval);
void q_imageioplugin_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_imageioplugin_children(void* self);
void q_imageioplugin_set_parent(void* self, void* parent);
void q_imageioplugin_install_event_filter(void* self, void* filterObj);
void q_imageioplugin_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_imageioplugin_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_imageioplugin_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_imageioplugin_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_imageioplugin_disconnect_with_q_meta_object_connection(void* param1);
void q_imageioplugin_dump_object_tree(void* self);
void q_imageioplugin_dump_object_info(void* self);
bool q_imageioplugin_set_property(void* self, const char* name, void* value);
QVariant* q_imageioplugin_property(void* self, const char* name);
const char** q_imageioplugin_dynamic_property_names(void* self);
QBindingStorage* q_imageioplugin_binding_storage(void* self);
QBindingStorage* q_imageioplugin_binding_storage2(void* self);
void q_imageioplugin_destroyed(void* self);
void q_imageioplugin_on_destroyed(void* self, void (*slot)(void*));
QObject* q_imageioplugin_parent(void* self);
bool q_imageioplugin_inherits(void* self, const char* classname);
void q_imageioplugin_delete_later(void* self);
int32_t q_imageioplugin_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_imageioplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_imageioplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_imageioplugin_destroyed1(void* self, void* param1);
void q_imageioplugin_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_imageioplugin_event(void* self, void* event);
bool q_imageioplugin_qbase_event(void* self, void* event);
void q_imageioplugin_on_event(void* self, bool (*slot)(void*, void*));
bool q_imageioplugin_event_filter(void* self, void* watched, void* event);
bool q_imageioplugin_qbase_event_filter(void* self, void* watched, void* event);
void q_imageioplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_imageioplugin_timer_event(void* self, void* event);
void q_imageioplugin_qbase_timer_event(void* self, void* event);
void q_imageioplugin_on_timer_event(void* self, void (*slot)(void*, void*));
void q_imageioplugin_child_event(void* self, void* event);
void q_imageioplugin_qbase_child_event(void* self, void* event);
void q_imageioplugin_on_child_event(void* self, void (*slot)(void*, void*));
void q_imageioplugin_custom_event(void* self, void* event);
void q_imageioplugin_qbase_custom_event(void* self, void* event);
void q_imageioplugin_on_custom_event(void* self, void (*slot)(void*, void*));
void q_imageioplugin_connect_notify(void* self, void* signal);
void q_imageioplugin_qbase_connect_notify(void* self, void* signal);
void q_imageioplugin_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_imageioplugin_disconnect_notify(void* self, void* signal);
void q_imageioplugin_qbase_disconnect_notify(void* self, void* signal);
void q_imageioplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_imageioplugin_sender(void* self);
QObject* q_imageioplugin_qbase_sender(void* self);
void q_imageioplugin_on_sender(void* self, QObject* (*slot)());
int32_t q_imageioplugin_sender_signal_index(void* self);
int32_t q_imageioplugin_qbase_sender_signal_index(void* self);
void q_imageioplugin_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_imageioplugin_receivers(void* self, const char* signal);
int32_t q_imageioplugin_qbase_receivers(void* self, const char* signal);
void q_imageioplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_imageioplugin_is_signal_connected(void* self, void* signal);
bool q_imageioplugin_qbase_is_signal_connected(void* self, void* signal);
void q_imageioplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_imageioplugin_delete(void* self);

/// https://doc.qt.io/qt-6/qimageiohandler.html#types

typedef enum {
    QIMAGEIOHANDLER_IMAGEOPTION_SIZE = 0,
    QIMAGEIOHANDLER_IMAGEOPTION_CLIPRECT = 1,
    QIMAGEIOHANDLER_IMAGEOPTION_DESCRIPTION = 2,
    QIMAGEIOHANDLER_IMAGEOPTION_SCALEDCLIPRECT = 3,
    QIMAGEIOHANDLER_IMAGEOPTION_SCALEDSIZE = 4,
    QIMAGEIOHANDLER_IMAGEOPTION_COMPRESSIONRATIO = 5,
    QIMAGEIOHANDLER_IMAGEOPTION_GAMMA = 6,
    QIMAGEIOHANDLER_IMAGEOPTION_QUALITY = 7,
    QIMAGEIOHANDLER_IMAGEOPTION_NAME = 8,
    QIMAGEIOHANDLER_IMAGEOPTION_SUBTYPE = 9,
    QIMAGEIOHANDLER_IMAGEOPTION_INCREMENTALREADING = 10,
    QIMAGEIOHANDLER_IMAGEOPTION_ENDIANNESS = 11,
    QIMAGEIOHANDLER_IMAGEOPTION_ANIMATION = 12,
    QIMAGEIOHANDLER_IMAGEOPTION_BACKGROUNDCOLOR = 13,
    QIMAGEIOHANDLER_IMAGEOPTION_IMAGEFORMAT = 14,
    QIMAGEIOHANDLER_IMAGEOPTION_SUPPORTEDSUBTYPES = 15,
    QIMAGEIOHANDLER_IMAGEOPTION_OPTIMIZEDWRITE = 16,
    QIMAGEIOHANDLER_IMAGEOPTION_PROGRESSIVESCANWRITE = 17,
    QIMAGEIOHANDLER_IMAGEOPTION_IMAGETRANSFORMATION = 18
} QImageIOHandler__ImageOption;

typedef enum {
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONNONE = 0,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONMIRROR = 1,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONFLIP = 2,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONROTATE180 = 3,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONROTATE90 = 4,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONMIRRORANDROTATE90 = 5,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONFLIPANDROTATE90 = 6,
    QIMAGEIOHANDLER_TRANSFORMATION_TRANSFORMATIONROTATE270 = 7
} QImageIOHandler__Transformation;

typedef enum {
    QIMAGEIOPLUGIN_CAPABILITY_CANREAD = 1,
    QIMAGEIOPLUGIN_CAPABILITY_CANWRITE = 2,
    QIMAGEIOPLUGIN_CAPABILITY_CANREADINCREMENTAL = 4
} QImageIOPlugin__Capability;

#endif
