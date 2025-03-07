#pragma once
#ifndef SRCQT6C_LIBQWHATSTHIS_H
#define SRCQT6C_LIBQWHATSTHIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqobject.h"
#include "libqpoint.h"
#include <string.h>
#include "libqwidget.h"

QWhatsThis* q_whatsthis_new(void* other);
QWhatsThis* q_whatsthis_new2(void* other);
void q_whatsthis_copy_assign(void* self, void* other);
void q_whatsthis_move_assign(void* self, void* other);
void q_whatsthis_enter_whats_this_mode();
bool q_whatsthis_in_whats_this_mode();
void q_whatsthis_leave_whats_this_mode();
void q_whatsthis_show_text(void* pos, const char* text);
void q_whatsthis_hide_text();
QAction* q_whatsthis_create_action();
void q_whatsthis_show_text3(void* pos, const char* text, void* w);
QAction* q_whatsthis_create_action1(void* parent);
void q_whatsthis_delete(void* self);

#endif
