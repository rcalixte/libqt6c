#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISTYLEDTEXT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISTYLEDTEXT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>

QsciStyledText* q_scistyledtext_new(const char* text, int style);
QsciStyledText* q_scistyledtext_new2(const char* text, void* style);
QsciStyledText* q_scistyledtext_new3(void* param1);
void q_scistyledtext_apply(void* self, void* sci);
const char* q_scistyledtext_text(void* self);
int32_t q_scistyledtext_style(void* self);
void q_scistyledtext_delete(void* self);

#endif
