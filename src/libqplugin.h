#pragma once
#ifndef SRC_QT6C_LIBQPLUGIN_H
#define SRC_QT6C_LIBQPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html)

/// q_staticplugin_new constructs a new QStaticPlugin object.
///
/// @param other QStaticPlugin*
///
QStaticPlugin* q_staticplugin_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html)

/// q_staticplugin_new2 constructs a new QStaticPlugin object and invalidates the source QStaticPlugin object.
///
/// @param other QStaticPlugin*
///
QStaticPlugin* q_staticplugin_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html)

/// q_staticplugin_new3 constructs a new QStaticPlugin object.
///
/// @param param1 QStaticPlugin*
///
QStaticPlugin* q_staticplugin_new3(void* param1);

/// q_staticplugin_copy_assign shallow copies `other` into `self`.
///
/// @param self QStaticPlugin*
/// @param other QStaticPlugin*
///
void q_staticplugin_copy_assign(void* self, void* other);

/// q_staticplugin_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QStaticPlugin*
/// @param other QStaticPlugin*
///
void q_staticplugin_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#instance-var)
///
/// @param self QStaticPlugin*
///
/// @return QObject* (*QObject__void__Function)()
///
QObject__void__Function q_staticplugin_instance(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#instance-var)
///
/// @param self QStaticPlugin*
/// @param instance QObject* func()
///
void q_staticplugin_set_instance(void* self, QObject* (*instance)());

/// [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#metaData)
///
/// @param self QStaticPlugin*
///
QJsonObject* q_staticplugin_meta_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#dtor.QStaticPlugin)
///
/// Delete this object from C++ memory.
///
/// @param self QStaticPlugin*
///
void q_staticplugin_delete(void* self);

#endif
