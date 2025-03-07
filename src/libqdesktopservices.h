#pragma once
#ifndef SRCQT6C_LIBQDESKTOPSERVICES_H
#define SRCQT6C_LIBQDESKTOPSERVICES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqobject.h"
#include <string.h>
#include "libqurl.h"

QDesktopServices* q_desktopservices_new(void* other);
QDesktopServices* q_desktopservices_new2(void* other);
void q_desktopservices_copy_assign(void* self, void* other);
void q_desktopservices_move_assign(void* self, void* other);
bool q_desktopservices_open_url(void* url);
void q_desktopservices_set_url_handler(const char* scheme, void* receiver, const char* method);
void q_desktopservices_unset_url_handler(const char* scheme);
void q_desktopservices_delete(void* self);

#endif
