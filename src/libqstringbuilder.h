#pragma once
#ifndef SRCQT6C_LIBQSTRINGBUILDER_H
#define SRCQT6C_LIBQSTRINGBUILDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QAbstractConcatenable* q_abstractconcatenable_new(void* other);
QAbstractConcatenable* q_abstractconcatenable_new2(void* other);
void q_abstractconcatenable_copy_assign(void* self, void* other);
void q_abstractconcatenable_move_assign(void* self, void* other);
void q_abstractconcatenable_delete(void* self);

#endif
