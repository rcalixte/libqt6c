#pragma once
#ifndef DESIGNER_LIBMEMBERSHEET_H
#define DESIGNER_LIBMEMBERSHEET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html)

/// q_designermembersheetextension_new constructs a new QDesignerMemberSheetExtension object.
///
QDesignerMemberSheetExtension* q_designermembersheetextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_count` before it can be called.
///
/// @param self const QDesignerMemberSheetExtension*
///
int32_t q_designermembersheetextension_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback int32_t func(const QDesignerMemberSheetExtension* self)
///
void q_designermembersheetextension_on_count(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_index_of` before it can be called.
///
/// @param self const QDesignerMemberSheetExtension*
/// @param name const char*
///
int32_t q_designermembersheetextension_index_of(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback int32_t func(const QDesignerMemberSheetExtension* self, const char* name)
///
void q_designermembersheetextension_on_index_of(void* self, int32_t (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_member_name` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_member_name(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char* func(const QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_member_name(void* self, const char* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_member_group` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_member_group(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char* func(const QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_member_group(void* self, const char* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setMemberGroup)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_set_member_group` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_is_visible` before it can be called.
///
/// @param self const QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_is_visible(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback bool func(const QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_is_visible(void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setVisible)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_set_visible` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_is_signal` before it can be called.
///
/// @param self const QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_is_signal(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback bool func(const QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_is_signal(void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_is_slot` before it can be called.
///
/// @param self const QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_is_slot(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback bool func(const QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_is_slot(void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_inherited_from_widget` before it can be called.
///
/// @param self const QDesignerMemberSheetExtension*
/// @param index int
///
bool q_designermembersheetextension_inherited_from_widget(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback bool func(const QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_inherited_from_widget(void* self, bool (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_declared_in_class` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_declared_in_class(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char* func(const QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_declared_in_class(void* self, const char* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_signature` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerMemberSheetExtension*
/// @param index int
///
const char* q_designermembersheetextension_signature(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char* func(const QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_signature(void* self, const char* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterTypes)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_parameter_types` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDesignerMemberSheetExtension*
/// @param index int
///
const char** q_designermembersheetextension_parameter_types(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterTypes)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char** func(const QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_parameter_types(void* self, const char** (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterNames)
///
/// @warning This method must be implemented with `q_designermembersheetextension_on_parameter_names` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDesignerMemberSheetExtension*
/// @param index int
///
const char** q_designermembersheetextension_parameter_names(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterNames)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerMemberSheetExtension*
/// @param callback const char** func(const QDesignerMemberSheetExtension* self, int index)
///
void q_designermembersheetextension_on_parameter_names(void* self, const char** (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#dtor.QDesignerMemberSheetExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerMemberSheetExtension*
///
void q_designermembersheetextension_delete(void* self);

#endif
