#pragma once
#ifndef SRCQT6C_LIBQTOOLTIP_H
#define SRCQT6C_LIBQTOOLTIP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqfont.h"
#include "libqpalette.h"
#include "libqpoint.h"
#include "libqrect.h"
#include <string.h>
#include "libqwidget.h"

QToolTip* q_tooltip_new(void* other);
QToolTip* q_tooltip_new2(void* other);
void q_tooltip_copy_assign(void* self, void* other);
void q_tooltip_move_assign(void* self, void* other);
void q_tooltip_show_text(void* pos, const char* text);
void q_tooltip_hide_text();
bool q_tooltip_is_visible();
const char* q_tooltip_text();
QPalette* q_tooltip_palette();
void q_tooltip_set_palette(void* palette);
QFont* q_tooltip_font();
void q_tooltip_set_font(void* font);
void q_tooltip_show_text3(void* pos, const char* text, void* w);
void q_tooltip_show_text4(void* pos, const char* text, void* w, void* rect);
void q_tooltip_show_text5(void* pos, const char* text, void* w, void* rect, int msecShowTime);
void q_tooltip_delete(void* self);

#endif
