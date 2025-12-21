#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTSETTINGS_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html)

/// q_designersettingsinterface_new constructs a new QDesignerSettingsInterface object.
///
QDesignerSettingsInterface* q_designersettingsinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#beginGroup)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#beginGroup)
///
/// Base class method implementation
///
/// @param self QDesignerSettingsInterface*
/// @param prefix const char*
///
void q_designersettingsinterface_qbase_begin_group(void* self, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
///
/// @param self QDesignerSettingsInterface*
///
void q_designersettingsinterface_end_group(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerSettingsInterface*
/// @param callback void func()
///
void q_designersettingsinterface_on_end_group(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
///
/// Base class method implementation
///
/// @param self QDesignerSettingsInterface*
///
void q_designersettingsinterface_qbase_end_group(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
///
/// @param self QDesignerSettingsInterface*
/// @param key const char*
///
bool q_designersettingsinterface_contains(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerSettingsInterface*
/// @param callback bool func(QDesignerSettingsInterface* self, const char* key)
///
void q_designersettingsinterface_on_contains(void* self, bool (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
///
/// Base class method implementation
///
/// @param self QDesignerSettingsInterface*
/// @param key const char*
///
bool q_designersettingsinterface_qbase_contains(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
///
/// @param self QDesignerSettingsInterface*
/// @param key const char*
/// @param value QVariant*
///
void q_designersettingsinterface_set_value(void* self, const char* key, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerSettingsInterface*
/// @param callback void func(QDesignerSettingsInterface* self, const char* key, QVariant* value)
///
void q_designersettingsinterface_on_set_value(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
///
/// Base class method implementation
///
/// @param self QDesignerSettingsInterface*
/// @param key const char*
/// @param value QVariant*
///
void q_designersettingsinterface_qbase_set_value(void* self, const char* key, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
///
/// @param self QDesignerSettingsInterface*
/// @param key const char*
/// @param defaultValue QVariant*
///
QVariant* q_designersettingsinterface_value(void* self, const char* key, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerSettingsInterface*
/// @param callback QVariant* func(QDesignerSettingsInterface* self, const char* key, QVariant* defaultValue)
///
void q_designersettingsinterface_on_value(void* self, QVariant* (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
///
/// Base class method implementation
///
/// @param self QDesignerSettingsInterface*
/// @param key const char*
/// @param defaultValue QVariant*
///
QVariant* q_designersettingsinterface_qbase_value(void* self, const char* key, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#remove)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#remove)
///
/// Base class method implementation
///
/// @param self QDesignerSettingsInterface*
/// @param key const char*
///
void q_designersettingsinterface_qbase_remove(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#dtor.QDesignerSettingsInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerSettingsInterface*
///
void q_designersettingsinterface_delete(void* self);

#endif
