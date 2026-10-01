#pragma once
#ifndef DESIGNER_LIBABSTRACTSETTINGS_H
#define DESIGNER_LIBABSTRACTSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html)

/// q_designersettingsinterface_new constructs a new QDesignerSettingsInterface object.
///
QDesignerSettingsInterface* q_designersettingsinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#beginGroup)
///
/// @warning This method must be implemented with `q_designersettingsinterface_on_begin_group` before it can be called.
///
/// @param self QDesignerSettingsInterface*
/// @param prefix const char*
///
void q_designersettingsinterface_begin_group(void* self, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#beginGroup)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerSettingsInterface*
/// @param callback void func(QDesignerSettingsInterface* self, const char* prefix)
///
void q_designersettingsinterface_on_begin_group(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
///
/// @warning This method must be implemented with `q_designersettingsinterface_on_end_group` before it can be called.
///
/// @param self QDesignerSettingsInterface*
///
void q_designersettingsinterface_end_group(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerSettingsInterface*
/// @param callback void func(QDesignerSettingsInterface* self)
///
void q_designersettingsinterface_on_end_group(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
///
/// @warning This method must be implemented with `q_designersettingsinterface_on_contains` before it can be called.
///
/// @param self const QDesignerSettingsInterface*
/// @param key const char*
///
bool q_designersettingsinterface_contains(const void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerSettingsInterface*
/// @param callback bool func(const QDesignerSettingsInterface* self, const char* key)
///
void q_designersettingsinterface_on_contains(const void* self, bool (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
///
/// @warning This method must be implemented with `q_designersettingsinterface_on_set_value` before it can be called.
///
/// @param self QDesignerSettingsInterface*
/// @param key const char*
/// @param value QVariant*
///
void q_designersettingsinterface_set_value(void* self, const char* key, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerSettingsInterface*
/// @param callback void func(QDesignerSettingsInterface* self, const char* key, QVariant* value)
///
void q_designersettingsinterface_on_set_value(void* self, void (*callback)(void*, const char*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
///
/// @warning This method must be implemented with `q_designersettingsinterface_on_value` before it can be called.
///
/// @param self const QDesignerSettingsInterface*
/// @param key const char*
/// @param defaultValue QVariant*
///
QVariant* q_designersettingsinterface_value(const void* self, const char* key, const void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerSettingsInterface*
/// @param callback QVariant* func(const QDesignerSettingsInterface* self, const char* key, QVariant* defaultValue)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_designersettingsinterface_on_value(const void* self, QVariant* (*callback)(const void*, const char*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#remove)
///
/// @warning This method must be implemented with `q_designersettingsinterface_on_remove` before it can be called.
///
/// @param self QDesignerSettingsInterface*
/// @param key const char*
///
void q_designersettingsinterface_remove(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#remove)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerSettingsInterface*
/// @param callback void func(QDesignerSettingsInterface* self, const char* key)
///
void q_designersettingsinterface_on_remove(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#dtor.QDesignerSettingsInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerSettingsInterface*
///
void q_designersettingsinterface_delete(void* self);

#endif
