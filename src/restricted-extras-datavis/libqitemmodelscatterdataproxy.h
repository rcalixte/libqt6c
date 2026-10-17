#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSCATTERDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSCATTERDATAPROXY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html)

/// q_itemmodelscatterdataproxy_new constructs a new QItemModelScatterDataProxy object.
///
QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html)

/// q_itemmodelscatterdataproxy_new2 constructs a new QItemModelScatterDataProxy object.
///
/// @param itemModel QAbstractItemModel*
///
QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new2(void* itemModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html)

/// q_itemmodelscatterdataproxy_new3 constructs a new QItemModelScatterDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param xPosRole const char*
/// @param yPosRole const char*
/// @param zPosRole const char*
///
QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new3(void* itemModel, const char* xPosRole, const char* yPosRole, const char* zPosRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html)

/// q_itemmodelscatterdataproxy_new4 constructs a new QItemModelScatterDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param xPosRole const char*
/// @param yPosRole const char*
/// @param zPosRole const char*
/// @param rotationRole const char*
///
QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new4(void* itemModel, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rotationRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html)

/// q_itemmodelscatterdataproxy_new5 constructs a new QItemModelScatterDataProxy object.
///
/// @param parent QObject*
///
QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new5(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html)

/// q_itemmodelscatterdataproxy_new6 constructs a new QItemModelScatterDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param parent QObject*
///
QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new6(void* itemModel, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html)

/// q_itemmodelscatterdataproxy_new7 constructs a new QItemModelScatterDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param xPosRole const char*
/// @param yPosRole const char*
/// @param zPosRole const char*
/// @param parent QObject*
///
QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new7(void* itemModel, const char* xPosRole, const char* yPosRole, const char* zPosRole, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html)

/// q_itemmodelscatterdataproxy_new8 constructs a new QItemModelScatterDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param xPosRole const char*
/// @param yPosRole const char*
/// @param zPosRole const char*
/// @param rotationRole const char*
/// @param parent QObject*
///
QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new8(void* itemModel, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rotationRole, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QItemModelScatterDataProxy*
///
const QMetaObject* q_itemmodelscatterdataproxy_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback const QMetaObject* func(const QItemModelScatterDataProxy* self)
///
void q_itemmodelscatterdataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QItemModelScatterDataProxy*
///
const QMetaObject* q_itemmodelscatterdataproxy_super_meta_object(const void* self);

/// @param self QItemModelScatterDataProxy*
/// @param param1 const char*
///
void* q_itemmodelscatterdataproxy_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void* func(QItemModelScatterDataProxy* self, const char* param1)
///
void q_itemmodelscatterdataproxy_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QItemModelScatterDataProxy*
/// @param param1 const char*
///
void* q_itemmodelscatterdataproxy_super_metacast(void* self, const char* param1);

/// @param self QItemModelScatterDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_itemmodelscatterdataproxy_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback int32_t func(QItemModelScatterDataProxy* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_itemmodelscatterdataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QItemModelScatterDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_itemmodelscatterdataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_itemmodelscatterdataproxy_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setItemModel)
///
/// @param self QItemModelScatterDataProxy*
/// @param itemModel QAbstractItemModel*
///
void q_itemmodelscatterdataproxy_set_item_model(void* self, void* itemModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#itemModel)
///
/// @param self const QItemModelScatterDataProxy*
///
QAbstractItemModel* q_itemmodelscatterdataproxy_item_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setXPosRole)
///
/// @param self QItemModelScatterDataProxy*
/// @param role const char*
///
void q_itemmodelscatterdataproxy_set_x_pos_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelScatterDataProxy*
///
const char* q_itemmodelscatterdataproxy_x_pos_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setYPosRole)
///
/// @param self QItemModelScatterDataProxy*
/// @param role const char*
///
void q_itemmodelscatterdataproxy_set_y_pos_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelScatterDataProxy*
///
const char* q_itemmodelscatterdataproxy_y_pos_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setZPosRole)
///
/// @param self QItemModelScatterDataProxy*
/// @param role const char*
///
void q_itemmodelscatterdataproxy_set_z_pos_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelScatterDataProxy*
///
const char* q_itemmodelscatterdataproxy_z_pos_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setRotationRole)
///
/// @param self QItemModelScatterDataProxy*
/// @param role const char*
///
void q_itemmodelscatterdataproxy_set_rotation_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelScatterDataProxy*
///
const char* q_itemmodelscatterdataproxy_rotation_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#remap)
///
/// @param self QItemModelScatterDataProxy*
/// @param xPosRole const char*
/// @param yPosRole const char*
/// @param zPosRole const char*
/// @param rotationRole const char*
///
void q_itemmodelscatterdataproxy_remap(void* self, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rotationRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setXPosRolePattern)
///
/// @param self QItemModelScatterDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelscatterdataproxy_set_x_pos_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRolePattern)
///
/// @param self const QItemModelScatterDataProxy*
///
QRegularExpression* q_itemmodelscatterdataproxy_x_pos_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setYPosRolePattern)
///
/// @param self QItemModelScatterDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelscatterdataproxy_set_y_pos_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRolePattern)
///
/// @param self const QItemModelScatterDataProxy*
///
QRegularExpression* q_itemmodelscatterdataproxy_y_pos_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setZPosRolePattern)
///
/// @param self QItemModelScatterDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelscatterdataproxy_set_z_pos_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRolePattern)
///
/// @param self const QItemModelScatterDataProxy*
///
QRegularExpression* q_itemmodelscatterdataproxy_z_pos_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setRotationRolePattern)
///
/// @param self QItemModelScatterDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelscatterdataproxy_set_rotation_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRolePattern)
///
/// @param self const QItemModelScatterDataProxy*
///
QRegularExpression* q_itemmodelscatterdataproxy_rotation_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setXPosRoleReplace)
///
/// @param self QItemModelScatterDataProxy*
/// @param replace const char*
///
void q_itemmodelscatterdataproxy_set_x_pos_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelScatterDataProxy*
///
const char* q_itemmodelscatterdataproxy_x_pos_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setYPosRoleReplace)
///
/// @param self QItemModelScatterDataProxy*
/// @param replace const char*
///
void q_itemmodelscatterdataproxy_set_y_pos_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelScatterDataProxy*
///
const char* q_itemmodelscatterdataproxy_y_pos_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setZPosRoleReplace)
///
/// @param self QItemModelScatterDataProxy*
/// @param replace const char*
///
void q_itemmodelscatterdataproxy_set_z_pos_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelScatterDataProxy*
///
const char* q_itemmodelscatterdataproxy_z_pos_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#setRotationRoleReplace)
///
/// @param self QItemModelScatterDataProxy*
/// @param replace const char*
///
void q_itemmodelscatterdataproxy_set_rotation_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelScatterDataProxy*
///
const char* q_itemmodelscatterdataproxy_rotation_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#itemModelChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param itemModel QAbstractItemModel*
///
void q_itemmodelscatterdataproxy_item_model_changed(void* self, const void* itemModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#itemModelChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QAbstractItemModel* itemModel)
///
void q_itemmodelscatterdataproxy_on_item_model_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRoleChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param role const char*
///
void q_itemmodelscatterdataproxy_x_pos_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRoleChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, const char* role)
///
void q_itemmodelscatterdataproxy_on_x_pos_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRoleChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param role const char*
///
void q_itemmodelscatterdataproxy_y_pos_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRoleChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, const char* role)
///
void q_itemmodelscatterdataproxy_on_y_pos_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRoleChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param role const char*
///
void q_itemmodelscatterdataproxy_z_pos_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRoleChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, const char* role)
///
void q_itemmodelscatterdataproxy_on_z_pos_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRoleChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param role const char*
///
void q_itemmodelscatterdataproxy_rotation_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRoleChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, const char* role)
///
void q_itemmodelscatterdataproxy_on_rotation_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRolePatternChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelscatterdataproxy_x_pos_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRolePatternChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelscatterdataproxy_on_x_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRolePatternChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelscatterdataproxy_y_pos_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRolePatternChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelscatterdataproxy_on_y_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRolePatternChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelscatterdataproxy_z_pos_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRolePatternChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelscatterdataproxy_on_z_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRolePatternChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelscatterdataproxy_rotation_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRolePatternChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelscatterdataproxy_on_rotation_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRoleReplaceChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param replace const char*
///
void q_itemmodelscatterdataproxy_rotation_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#rotationRoleReplaceChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, const char* replace)
///
void q_itemmodelscatterdataproxy_on_rotation_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRoleReplaceChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param replace const char*
///
void q_itemmodelscatterdataproxy_x_pos_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#xPosRoleReplaceChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, const char* replace)
///
void q_itemmodelscatterdataproxy_on_x_pos_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRoleReplaceChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param replace const char*
///
void q_itemmodelscatterdataproxy_y_pos_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#yPosRoleReplaceChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, const char* replace)
///
void q_itemmodelscatterdataproxy_on_y_pos_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRoleReplaceChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param replace const char*
///
void q_itemmodelscatterdataproxy_z_pos_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#zPosRoleReplaceChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, const char* replace)
///
void q_itemmodelscatterdataproxy_on_z_pos_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_itemmodelscatterdataproxy_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_itemmodelscatterdataproxy_tr3(const char* s, const char* c, int n);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#series)
///
/// @param self const QItemModelScatterDataProxy*
///
QScatter3DSeries* q_itemmodelscatterdataproxy_series(const void* self);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemCount)
///
/// @param self const QItemModelScatterDataProxy*
///
int32_t q_itemmodelscatterdataproxy_item_count(const void* self);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#array)
///
/// @param self const QItemModelScatterDataProxy*
///
/// @return libqt_list of QScatterDataItem*
///
libqt_list q_itemmodelscatterdataproxy_array(const void* self);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemAt)
///
/// @param self const QItemModelScatterDataProxy*
/// @param index int
///
const QScatterDataItem* q_itemmodelscatterdataproxy_item_at(const void* self, int index);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#resetArray)
///
/// @param self QItemModelScatterDataProxy*
/// @param newArray libqt_list of QScatterDataItem*
///
void q_itemmodelscatterdataproxy_reset_array(void* self, libqt_list newArray);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#setItem)
///
/// @param self QItemModelScatterDataProxy*
/// @param index int
/// @param item QScatterDataItem*
///
void q_itemmodelscatterdataproxy_set_item(void* self, int index, const void* item);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#setItems)
///
/// @param self QItemModelScatterDataProxy*
/// @param index int
/// @param items libqt_list of QScatterDataItem*
///
void q_itemmodelscatterdataproxy_set_items(void* self, int index, libqt_list items);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#addItem)
///
/// @param self QItemModelScatterDataProxy*
/// @param item QScatterDataItem*
///
int32_t q_itemmodelscatterdataproxy_add_item(void* self, const void* item);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#addItems)
///
/// @param self QItemModelScatterDataProxy*
/// @param items libqt_list of QScatterDataItem*
///
int32_t q_itemmodelscatterdataproxy_add_items(void* self, libqt_list items);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#insertItem)
///
/// @param self QItemModelScatterDataProxy*
/// @param index int
/// @param item QScatterDataItem*
///
void q_itemmodelscatterdataproxy_insert_item(void* self, int index, const void* item);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#insertItems)
///
/// @param self QItemModelScatterDataProxy*
/// @param index int
/// @param items libqt_list of QScatterDataItem*
///
void q_itemmodelscatterdataproxy_insert_items(void* self, int index, libqt_list items);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#removeItems)
///
/// @param self QItemModelScatterDataProxy*
/// @param index int
/// @param removeCount int
///
void q_itemmodelscatterdataproxy_remove_items(void* self, int index, int removeCount);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#arrayReset)
///
/// @param self QItemModelScatterDataProxy*
///
void q_itemmodelscatterdataproxy_array_reset(void* self);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#arrayReset)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self)
///
void q_itemmodelscatterdataproxy_on_array_reset(void* self, void (*callback)(void*));

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsAdded)
///
/// @param self QItemModelScatterDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelscatterdataproxy_items_added(void* self, int startIndex, int count);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsAdded)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, int startIndex, int count)
///
void q_itemmodelscatterdataproxy_on_items_added(void* self, void (*callback)(void*, int, int));

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelscatterdataproxy_items_changed(void* self, int startIndex, int count);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, int startIndex, int count)
///
void q_itemmodelscatterdataproxy_on_items_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsRemoved)
///
/// @param self QItemModelScatterDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelscatterdataproxy_items_removed(void* self, int startIndex, int count);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsRemoved)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, int startIndex, int count)
///
void q_itemmodelscatterdataproxy_on_items_removed(void* self, void (*callback)(void*, int, int));

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsInserted)
///
/// @param self QItemModelScatterDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelscatterdataproxy_items_inserted(void* self, int startIndex, int count);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemsInserted)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, int startIndex, int count)
///
void q_itemmodelscatterdataproxy_on_items_inserted(void* self, void (*callback)(void*, int, int));

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemCountChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param count int
///
void q_itemmodelscatterdataproxy_item_count_changed(void* self, int count);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#itemCountChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, int count)
///
void q_itemmodelscatterdataproxy_on_item_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#seriesChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param series QScatter3DSeries*
///
void q_itemmodelscatterdataproxy_series_changed(void* self, void* series);

/// Inherited from QScatterDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qscatterdataproxy.html#seriesChanged)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QScatter3DSeries* series)
///
void q_itemmodelscatterdataproxy_on_series_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractdataproxy.html#type)
///
/// @param self const QItemModelScatterDataProxy*
///
/// @return enum QAbstractDataProxy__DataType
///
int32_t q_itemmodelscatterdataproxy_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelScatterDataProxy*
///
const char* q_itemmodelscatterdataproxy_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QItemModelScatterDataProxy*
/// @param name const char*
///
void q_itemmodelscatterdataproxy_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QItemModelScatterDataProxy*
///
bool q_itemmodelscatterdataproxy_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QItemModelScatterDataProxy*
///
bool q_itemmodelscatterdataproxy_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QItemModelScatterDataProxy*
///
bool q_itemmodelscatterdataproxy_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QItemModelScatterDataProxy*
///
bool q_itemmodelscatterdataproxy_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QItemModelScatterDataProxy*
/// @param b bool
///
bool q_itemmodelscatterdataproxy_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QItemModelScatterDataProxy*
///
QThread* q_itemmodelscatterdataproxy_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QItemModelScatterDataProxy*
/// @param thread QThread*
///
bool q_itemmodelscatterdataproxy_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelScatterDataProxy*
/// @param interval int
///
int32_t q_itemmodelscatterdataproxy_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelScatterDataProxy*
/// @param time int64_t of nanoseconds
///
int32_t q_itemmodelscatterdataproxy_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QItemModelScatterDataProxy*
/// @param id int
///
void q_itemmodelscatterdataproxy_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QItemModelScatterDataProxy*
/// @param id enum Qt__TimerId
///
void q_itemmodelscatterdataproxy_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QItemModelScatterDataProxy*
///
/// @return libqt_list of QObject*
///
libqt_list q_itemmodelscatterdataproxy_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QItemModelScatterDataProxy*
/// @param parent QObject*
///
void q_itemmodelscatterdataproxy_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QItemModelScatterDataProxy*
/// @param filterObj QObject*
///
void q_itemmodelscatterdataproxy_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QItemModelScatterDataProxy*
/// @param obj QObject*
///
void q_itemmodelscatterdataproxy_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_itemmodelscatterdataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_itemmodelscatterdataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QItemModelScatterDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_itemmodelscatterdataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemmodelscatterdataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_itemmodelscatterdataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelScatterDataProxy*
///
bool q_itemmodelscatterdataproxy_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelScatterDataProxy*
/// @param receiver QObject*
///
bool q_itemmodelscatterdataproxy_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_itemmodelscatterdataproxy_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QItemModelScatterDataProxy*
///
void q_itemmodelscatterdataproxy_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QItemModelScatterDataProxy*
///
void q_itemmodelscatterdataproxy_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QItemModelScatterDataProxy*
/// @param name const char*
/// @param value QVariant*
///
bool q_itemmodelscatterdataproxy_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QItemModelScatterDataProxy*
/// @param name const char*
///
QVariant* q_itemmodelscatterdataproxy_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemModelScatterDataProxy*
///
const char** q_itemmodelscatterdataproxy_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QItemModelScatterDataProxy*
///
QBindingStorage* q_itemmodelscatterdataproxy_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QItemModelScatterDataProxy*
///
const QBindingStorage* q_itemmodelscatterdataproxy_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelScatterDataProxy*
///
void q_itemmodelscatterdataproxy_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self)
///
void q_itemmodelscatterdataproxy_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QItemModelScatterDataProxy*
///
QObject* q_itemmodelscatterdataproxy_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QItemModelScatterDataProxy*
/// @param classname const char*
///
bool q_itemmodelscatterdataproxy_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QItemModelScatterDataProxy*
///
void q_itemmodelscatterdataproxy_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelScatterDataProxy*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_itemmodelscatterdataproxy_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelScatterDataProxy*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_itemmodelscatterdataproxy_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_itemmodelscatterdataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_itemmodelscatterdataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QItemModelScatterDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_itemmodelscatterdataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelScatterDataProxy*
/// @param signal const char*
///
bool q_itemmodelscatterdataproxy_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelScatterDataProxy*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_itemmodelscatterdataproxy_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelScatterDataProxy*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemmodelscatterdataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelScatterDataProxy*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemmodelscatterdataproxy_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelScatterDataProxy*
/// @param param1 QObject*
///
void q_itemmodelscatterdataproxy_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QObject* param1)
///
void q_itemmodelscatterdataproxy_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param event QEvent*
///
bool q_itemmodelscatterdataproxy_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param event QEvent*
///
bool q_itemmodelscatterdataproxy_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback bool func(QItemModelScatterDataProxy* self, QEvent* event)
///
void q_itemmodelscatterdataproxy_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_itemmodelscatterdataproxy_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_itemmodelscatterdataproxy_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback bool func(QItemModelScatterDataProxy* self, QObject* watched, QEvent* event)
///
void q_itemmodelscatterdataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param event QTimerEvent*
///
void q_itemmodelscatterdataproxy_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param event QTimerEvent*
///
void q_itemmodelscatterdataproxy_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QTimerEvent* event)
///
void q_itemmodelscatterdataproxy_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param event QChildEvent*
///
void q_itemmodelscatterdataproxy_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param event QChildEvent*
///
void q_itemmodelscatterdataproxy_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QChildEvent* event)
///
void q_itemmodelscatterdataproxy_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param event QEvent*
///
void q_itemmodelscatterdataproxy_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param event QEvent*
///
void q_itemmodelscatterdataproxy_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QEvent* event)
///
void q_itemmodelscatterdataproxy_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelscatterdataproxy_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelscatterdataproxy_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QMetaMethod* signal)
///
void q_itemmodelscatterdataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelscatterdataproxy_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelscatterdataproxy_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, QMetaMethod* signal)
///
void q_itemmodelscatterdataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelScatterDataProxy*
///
QObject* q_itemmodelscatterdataproxy_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelScatterDataProxy*
///
QObject* q_itemmodelscatterdataproxy_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback QObject* func(QItemModelScatterDataProxy* self)
///
void q_itemmodelscatterdataproxy_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelScatterDataProxy*
///
int32_t q_itemmodelscatterdataproxy_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelScatterDataProxy*
///
int32_t q_itemmodelscatterdataproxy_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback int32_t func(QItemModelScatterDataProxy* self)
///
void q_itemmodelscatterdataproxy_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelScatterDataProxy*
/// @param signal const char*
///
int32_t q_itemmodelscatterdataproxy_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelScatterDataProxy*
/// @param signal const char*
///
int32_t q_itemmodelscatterdataproxy_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback int32_t func(QItemModelScatterDataProxy* self, const char* signal)
///
void q_itemmodelscatterdataproxy_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelScatterDataProxy*
/// @param signal QMetaMethod*
///
bool q_itemmodelscatterdataproxy_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelScatterDataProxy*
/// @param signal QMetaMethod*
///
bool q_itemmodelscatterdataproxy_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelScatterDataProxy*
/// @param callback bool func(QItemModelScatterDataProxy* self, QMetaMethod* signal)
///
void q_itemmodelscatterdataproxy_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QItemModelScatterDataProxy*
/// @param callback void func(QItemModelScatterDataProxy* self, const char* objectName)
///
void q_itemmodelscatterdataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelscatterdataproxy-qtdatavis.html#dtor.QItemModelScatterDataProxy)
///
/// Delete this object from C++ memory.
///
/// @param self QItemModelScatterDataProxy*
///
void q_itemmodelscatterdataproxy_delete(void* self);

#endif
