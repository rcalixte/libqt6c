#pragma once
#ifndef SRCQT6C_LIBQITEMEDITORFACTORY_H
#define SRCQT6C_LIBQITEMEDITORFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqwidget.h"

QWidget* q_itemeditorcreatorbase_create_widget(void* self, void* parent);
char* q_itemeditorcreatorbase_value_property_name(void* self);
void q_itemeditorcreatorbase_operator_assign(void* self, void* param1);
void q_itemeditorcreatorbase_delete(void* self);

QItemEditorFactory* q_itemeditorfactory_new();
QItemEditorFactory* q_itemeditorfactory_new2(void* param1);
QWidget* q_itemeditorfactory_create_editor(void* self, int userType, void* parent);
void q_itemeditorfactory_on_create_editor(void* self, QWidget* (*slot)(void*, int, void*));
QWidget* q_itemeditorfactory_qbase_create_editor(void* self, int userType, void* parent);
char* q_itemeditorfactory_value_property_name(void* self, int userType);
void q_itemeditorfactory_on_value_property_name(void* self, char* (*slot)(void*, int));
char* q_itemeditorfactory_qbase_value_property_name(void* self, int userType);
void q_itemeditorfactory_register_editor(void* self, int userType, void* creator);
QItemEditorFactory* q_itemeditorfactory_default_factory();
void q_itemeditorfactory_set_default_factory(void* factory);
void q_itemeditorfactory_delete(void* self);

#endif
