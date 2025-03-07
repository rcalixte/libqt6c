#pragma once
#ifndef SRCQT6C_LIBQPROPERTYPRIVATE_H
#define SRCQT6C_LIBQPROPERTYPRIVATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqproperty.h"

QUntypedPropertyData* q_untypedpropertydata_new(void* other);
QUntypedPropertyData* q_untypedpropertydata_new2(void* other);
void q_untypedpropertydata_copy_assign(void* self, void* other);
void q_untypedpropertydata_move_assign(void* self, void* other);
void q_untypedpropertydata_delete(void* self);

#endif
