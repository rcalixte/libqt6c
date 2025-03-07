#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCICOMMANDSET_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCICOMMANDSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqsettings.h"

bool q_scicommandset_read_settings(void* self, void* qs);
bool q_scicommandset_write_settings(void* self, void* qs);
libqt_list /* of QsciCommand* */ q_scicommandset_commands(void* self);
void q_scicommandset_clear_keys(void* self);
void q_scicommandset_clear_alternate_keys(void* self);
QsciCommand* q_scicommandset_bound_to(void* self, int key);
QsciCommand* q_scicommandset_find(void* self, int64_t command);
bool q_scicommandset_read_settings2(void* self, void* qs, const char* prefix);
bool q_scicommandset_write_settings2(void* self, void* qs, const char* prefix);
#endif
