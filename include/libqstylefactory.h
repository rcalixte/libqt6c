#pragma once
#ifndef SRCQT6C_LIBQSTYLEFACTORY_H
#define SRCQT6C_LIBQSTYLEFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>
#include "libqstyle.h"

QStyleFactory* q_stylefactory_new(void* other);
QStyleFactory* q_stylefactory_new2(void* other);
void q_stylefactory_copy_assign(void* self, void* other);
void q_stylefactory_move_assign(void* self, void* other);
const char** q_stylefactory_keys();
QStyle* q_stylefactory_create(const char* param1);
void q_stylefactory_delete(void* self);

#endif
