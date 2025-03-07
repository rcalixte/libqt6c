#pragma once
#ifndef SRCQT6C_LIBQBINDINGSTORAGE_H
#define SRCQT6C_LIBQBINDINGSTORAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqproperty.h"

QBindingStatus* q_bindingstatus_new(void* other);
QBindingStatus* q_bindingstatus_new2(void* other);
void q_bindingstatus_copy_assign(void* self, void* other);
void q_bindingstatus_move_assign(void* self, void* other);
void q_bindingstatus_delete(void* self);

QBindingStorage* q_bindingstorage_new();
bool q_bindingstorage_is_empty(void* self);
bool q_bindingstorage_is_valid(void* self);
void q_bindingstorage_register_dependency(void* self, void* data);
void q_bindingstorage_delete(void* self);

#endif
