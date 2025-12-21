#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBMEMBERSHEET_H
#define SRC_DESIGNER_QT6C_LIBMEMBERSHEET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html)

/// q_designermembersheetextension_new constructs a new QDesignerMemberSheetExtension object.
///
QDesignerMemberSheetExtension* q_designermembersheetextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
///
/// @param self QDesignerMemberSheetExtension*
///
int32_t q_designermembersheetextension_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback int32_t func()
///
void q_designermembersheetextension_on_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
///
int32_t q_designermembersheetextension_qbase_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
///
/// @param self QDesignerMemberSheetExtension*
/// @param name const char*
///
int32_t q_designermembersheetextension_index_of(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback int32_t func(QDesignerMemberSheetExtension* self, const char* name)
///
void q_designermembersheetextension_on_index_of(void* self, int32_t (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param name const char*
///
int32_t q_designermembersheetextension_qbase_index_of(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_member_name(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char* func(QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_member_name(void* self, const char* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_qbase_member_name(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_member_group(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char* func(QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_member_group(void* self, const char* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_qbase_member_group(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setMemberGroup)
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
/// @param group const char*
///
void q_designermembersheetextension_set_member_group(void* self, int index, const char* group);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setMemberGroup)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback void func(QDesignerMemberSheetExtension* self, int index, const char* group)
///
void q_designermembersheetextension_on_set_member_group(void* self, void (*callback)(void*, int, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setMemberGroup)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
/// @param group const char*
///
void q_designermembersheetextension_qbase_set_member_group(void* self, int index, const char* group);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_is_visible(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback bool func(QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_is_visible(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_qbase_is_visible(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setVisible)
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
/// @param b bool
///
void q_designermembersheetextension_set_visible(void* self, int index, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback void func(QDesignerMemberSheetExtension* self, int index, bool b)
///
void q_designermembersheetextension_on_set_visible(void* self, void (*callback)(void*, int, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setVisible)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
/// @param b bool
///
void q_designermembersheetextension_qbase_set_visible(void* self, int index, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_is_signal(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback bool func(QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_is_signal(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_qbase_is_signal(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_is_slot(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback bool func(QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_is_slot(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_qbase_is_slot(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_inherited_from_widget(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback bool func(QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_inherited_from_widget(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_qbase_inherited_from_widget(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_declared_in_class(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char* func(QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_declared_in_class(void* self, const char* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_qbase_declared_in_class(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_signature(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char* func(QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_signature(void* self, const char* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_qbase_signature(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterTypes)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char** q_designermembersheetextension_parameter_types(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterTypes)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char** func(QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_parameter_types(void* self, const char** (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterTypes)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char** q_designermembersheetextension_qbase_parameter_types(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char** q_designermembersheetextension_parameter_names(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterNames)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char** func(QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_parameter_names(void* self, const char** (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterNames)
///
/// Base class method implementation
///
/// @param self QDesignerMemberSheetExtension*
/// @param index int
///
const char** q_designermembersheetextension_qbase_parameter_names(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#dtor.QDesignerMemberSheetExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerMemberSheetExtension*
///
void q_designermembersheetextension_delete(void* self);

#endif
