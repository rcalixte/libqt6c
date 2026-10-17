#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSURFACEDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELSURFACEDATAPROXY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new constructs a new QItemModelSurfaceDataProxy object.
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new2 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new2(void* itemModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new3 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param yPosRole const char*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new3(void* itemModel, const char* yPosRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new4 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param yPosRole const char*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new4(void* itemModel, const char* rowRole, const char* columnRole, const char* yPosRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new5 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param xPosRole const char*
/// @param yPosRole const char*
/// @param zPosRole const char*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new5(void* itemModel, const char* rowRole, const char* columnRole, const char* xPosRole, const char* yPosRole, const char* zPosRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new6 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param yPosRole const char*
/// @param rowCategories const char**
/// @param columnCategories const char**
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new6(void* itemModel, const char* rowRole, const char* columnRole, const char* yPosRole, const char* rowCategories[static 1], const char* columnCategories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new7 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param xPosRole const char*
/// @param yPosRole const char*
/// @param zPosRole const char*
/// @param rowCategories const char**
/// @param columnCategories const char**
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new7(void* itemModel, const char* rowRole, const char* columnRole, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rowCategories[static 1], const char* columnCategories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new8 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param parent QObject*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new8(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new9 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param parent QObject*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new9(void* itemModel, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new10 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param yPosRole const char*
/// @param parent QObject*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new10(void* itemModel, const char* yPosRole, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new11 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param yPosRole const char*
/// @param parent QObject*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new11(void* itemModel, const char* rowRole, const char* columnRole, const char* yPosRole, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new12 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param xPosRole const char*
/// @param yPosRole const char*
/// @param zPosRole const char*
/// @param parent QObject*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new12(void* itemModel, const char* rowRole, const char* columnRole, const char* xPosRole, const char* yPosRole, const char* zPosRole, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new13 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param yPosRole const char*
/// @param rowCategories const char**
/// @param columnCategories const char**
/// @param parent QObject*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new13(void* itemModel, const char* rowRole, const char* columnRole, const char* yPosRole, const char* rowCategories[static 1], const char* columnCategories[static 1], void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html)

/// q_itemmodelsurfacedataproxy_new14 constructs a new QItemModelSurfaceDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param xPosRole const char*
/// @param yPosRole const char*
/// @param zPosRole const char*
/// @param rowCategories const char**
/// @param columnCategories const char**
/// @param parent QObject*
///
QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new14(void* itemModel, const char* rowRole, const char* columnRole, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rowCategories[static 1], const char* columnCategories[static 1], void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QItemModelSurfaceDataProxy*
///
const QMetaObject* q_itemmodelsurfacedataproxy_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback const QMetaObject* func(const QItemModelSurfaceDataProxy* self)
///
void q_itemmodelsurfacedataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QItemModelSurfaceDataProxy*
///
const QMetaObject* q_itemmodelsurfacedataproxy_super_meta_object(const void* self);

/// @param self QItemModelSurfaceDataProxy*
/// @param param1 const char*
///
void* q_itemmodelsurfacedataproxy_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void* func(QItemModelSurfaceDataProxy* self, const char* param1)
///
void q_itemmodelsurfacedataproxy_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QItemModelSurfaceDataProxy*
/// @param param1 const char*
///
void* q_itemmodelsurfacedataproxy_super_metacast(void* self, const char* param1);

/// @param self QItemModelSurfaceDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_itemmodelsurfacedataproxy_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback int32_t func(QItemModelSurfaceDataProxy* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_itemmodelsurfacedataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QItemModelSurfaceDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_itemmodelsurfacedataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_itemmodelsurfacedataproxy_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setItemModel)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param itemModel QAbstractItemModel*
///
void q_itemmodelsurfacedataproxy_set_item_model(void* self, void* itemModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#itemModel)
///
/// @param self const QItemModelSurfaceDataProxy*
///
QAbstractItemModel* q_itemmodelsurfacedataproxy_item_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setRowRole)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param role const char*
///
void q_itemmodelsurfacedataproxy_set_row_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_row_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setColumnRole)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param role const char*
///
void q_itemmodelsurfacedataproxy_set_column_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_column_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setXPosRole)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param role const char*
///
void q_itemmodelsurfacedataproxy_set_x_pos_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_x_pos_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setYPosRole)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param role const char*
///
void q_itemmodelsurfacedataproxy_set_y_pos_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_y_pos_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setZPosRole)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param role const char*
///
void q_itemmodelsurfacedataproxy_set_z_pos_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_z_pos_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setRowCategories)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param categories const char**
///
void q_itemmodelsurfacedataproxy_set_row_categories(void* self, const char* categories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowCategories)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char** q_itemmodelsurfacedataproxy_row_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setColumnCategories)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param categories const char**
///
void q_itemmodelsurfacedataproxy_set_column_categories(void* self, const char* categories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnCategories)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char** q_itemmodelsurfacedataproxy_column_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setUseModelCategories)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param enable bool
///
void q_itemmodelsurfacedataproxy_set_use_model_categories(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#useModelCategories)
///
/// @param self const QItemModelSurfaceDataProxy*
///
bool q_itemmodelsurfacedataproxy_use_model_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setAutoRowCategories)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param enable bool
///
void q_itemmodelsurfacedataproxy_set_auto_row_categories(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoRowCategories)
///
/// @param self const QItemModelSurfaceDataProxy*
///
bool q_itemmodelsurfacedataproxy_auto_row_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setAutoColumnCategories)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param enable bool
///
void q_itemmodelsurfacedataproxy_set_auto_column_categories(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoColumnCategories)
///
/// @param self const QItemModelSurfaceDataProxy*
///
bool q_itemmodelsurfacedataproxy_auto_column_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#remap)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param xPosRole const char*
/// @param yPosRole const char*
/// @param zPosRole const char*
/// @param rowCategories const char**
/// @param columnCategories const char**
///
void q_itemmodelsurfacedataproxy_remap(void* self, const char* rowRole, const char* columnRole, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rowCategories[static 1], const char* columnCategories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowCategoryIndex)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param category const char*
///
int32_t q_itemmodelsurfacedataproxy_row_category_index(void* self, const char* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnCategoryIndex)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param category const char*
///
int32_t q_itemmodelsurfacedataproxy_column_category_index(void* self, const char* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setRowRolePattern)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelsurfacedataproxy_set_row_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRolePattern)
///
/// @param self const QItemModelSurfaceDataProxy*
///
QRegularExpression* q_itemmodelsurfacedataproxy_row_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setColumnRolePattern)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelsurfacedataproxy_set_column_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRolePattern)
///
/// @param self const QItemModelSurfaceDataProxy*
///
QRegularExpression* q_itemmodelsurfacedataproxy_column_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setXPosRolePattern)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelsurfacedataproxy_set_x_pos_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRolePattern)
///
/// @param self const QItemModelSurfaceDataProxy*
///
QRegularExpression* q_itemmodelsurfacedataproxy_x_pos_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setYPosRolePattern)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelsurfacedataproxy_set_y_pos_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRolePattern)
///
/// @param self const QItemModelSurfaceDataProxy*
///
QRegularExpression* q_itemmodelsurfacedataproxy_y_pos_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setZPosRolePattern)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelsurfacedataproxy_set_z_pos_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRolePattern)
///
/// @param self const QItemModelSurfaceDataProxy*
///
QRegularExpression* q_itemmodelsurfacedataproxy_z_pos_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setRowRoleReplace)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param replace const char*
///
void q_itemmodelsurfacedataproxy_set_row_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_row_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setColumnRoleReplace)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param replace const char*
///
void q_itemmodelsurfacedataproxy_set_column_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_column_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setXPosRoleReplace)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param replace const char*
///
void q_itemmodelsurfacedataproxy_set_x_pos_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_x_pos_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setYPosRoleReplace)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param replace const char*
///
void q_itemmodelsurfacedataproxy_set_y_pos_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_y_pos_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setZPosRoleReplace)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param replace const char*
///
void q_itemmodelsurfacedataproxy_set_z_pos_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_z_pos_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#setMultiMatchBehavior)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param behavior enum QItemModelSurfaceDataProxy__MultiMatchBehavior
///
void q_itemmodelsurfacedataproxy_set_multi_match_behavior(void* self, int32_t behavior);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#multiMatchBehavior)
///
/// @param self const QItemModelSurfaceDataProxy*
///
/// @return enum QItemModelSurfaceDataProxy__MultiMatchBehavior
///
int32_t q_itemmodelsurfacedataproxy_multi_match_behavior(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#itemModelChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param itemModel QAbstractItemModel*
///
void q_itemmodelsurfacedataproxy_item_model_changed(void* self, const void* itemModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#itemModelChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QAbstractItemModel* itemModel)
///
void q_itemmodelsurfacedataproxy_on_item_model_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRoleChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param role const char*
///
void q_itemmodelsurfacedataproxy_row_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRoleChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* role)
///
void q_itemmodelsurfacedataproxy_on_row_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRoleChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param role const char*
///
void q_itemmodelsurfacedataproxy_column_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRoleChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* role)
///
void q_itemmodelsurfacedataproxy_on_column_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRoleChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param role const char*
///
void q_itemmodelsurfacedataproxy_x_pos_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRoleChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* role)
///
void q_itemmodelsurfacedataproxy_on_x_pos_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRoleChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param role const char*
///
void q_itemmodelsurfacedataproxy_y_pos_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRoleChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* role)
///
void q_itemmodelsurfacedataproxy_on_y_pos_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRoleChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param role const char*
///
void q_itemmodelsurfacedataproxy_z_pos_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRoleChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* role)
///
void q_itemmodelsurfacedataproxy_on_z_pos_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowCategoriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
///
void q_itemmodelsurfacedataproxy_row_categories_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowCategoriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self)
///
void q_itemmodelsurfacedataproxy_on_row_categories_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnCategoriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
///
void q_itemmodelsurfacedataproxy_column_categories_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnCategoriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self)
///
void q_itemmodelsurfacedataproxy_on_column_categories_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#useModelCategoriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param enable bool
///
void q_itemmodelsurfacedataproxy_use_model_categories_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#useModelCategoriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, bool enable)
///
void q_itemmodelsurfacedataproxy_on_use_model_categories_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoRowCategoriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param enable bool
///
void q_itemmodelsurfacedataproxy_auto_row_categories_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoRowCategoriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, bool enable)
///
void q_itemmodelsurfacedataproxy_on_auto_row_categories_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoColumnCategoriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param enable bool
///
void q_itemmodelsurfacedataproxy_auto_column_categories_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#autoColumnCategoriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, bool enable)
///
void q_itemmodelsurfacedataproxy_on_auto_column_categories_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRolePatternChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelsurfacedataproxy_row_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRolePatternChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelsurfacedataproxy_on_row_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRolePatternChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelsurfacedataproxy_column_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRolePatternChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelsurfacedataproxy_on_column_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRolePatternChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelsurfacedataproxy_x_pos_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRolePatternChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelsurfacedataproxy_on_x_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRolePatternChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelsurfacedataproxy_y_pos_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRolePatternChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelsurfacedataproxy_on_y_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRolePatternChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelsurfacedataproxy_z_pos_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRolePatternChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelsurfacedataproxy_on_z_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRoleReplaceChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param replace const char*
///
void q_itemmodelsurfacedataproxy_row_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#rowRoleReplaceChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* replace)
///
void q_itemmodelsurfacedataproxy_on_row_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRoleReplaceChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param replace const char*
///
void q_itemmodelsurfacedataproxy_column_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#columnRoleReplaceChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* replace)
///
void q_itemmodelsurfacedataproxy_on_column_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRoleReplaceChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param replace const char*
///
void q_itemmodelsurfacedataproxy_x_pos_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#xPosRoleReplaceChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* replace)
///
void q_itemmodelsurfacedataproxy_on_x_pos_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRoleReplaceChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param replace const char*
///
void q_itemmodelsurfacedataproxy_y_pos_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#yPosRoleReplaceChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* replace)
///
void q_itemmodelsurfacedataproxy_on_y_pos_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRoleReplaceChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param replace const char*
///
void q_itemmodelsurfacedataproxy_z_pos_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#zPosRoleReplaceChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* replace)
///
void q_itemmodelsurfacedataproxy_on_z_pos_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#multiMatchBehaviorChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param behavior enum QItemModelSurfaceDataProxy__MultiMatchBehavior
///
void q_itemmodelsurfacedataproxy_multi_match_behavior_changed(void* self, int32_t behavior);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#multiMatchBehaviorChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, enum QItemModelSurfaceDataProxy__MultiMatchBehavior behavior)
///
void q_itemmodelsurfacedataproxy_on_multi_match_behavior_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_itemmodelsurfacedataproxy_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_itemmodelsurfacedataproxy_tr3(const char* s, const char* c, int n);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#series)
///
/// @param self const QItemModelSurfaceDataProxy*
///
QSurface3DSeries* q_itemmodelsurfacedataproxy_series(const void* self);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCount)
///
/// @param self const QItemModelSurfaceDataProxy*
///
int32_t q_itemmodelsurfacedataproxy_row_count(const void* self);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCount)
///
/// @param self const QItemModelSurfaceDataProxy*
///
int32_t q_itemmodelsurfacedataproxy_column_count(const void* self);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#array)
///
/// @param self const QItemModelSurfaceDataProxy*
///
/// @return libqt_list of libqt_list of QSurfaceDataItem*
///
libqt_list q_itemmodelsurfacedataproxy_array(const void* self);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemAt)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param rowIndex int
/// @param columnIndex int
///
const QSurfaceDataItem* q_itemmodelsurfacedataproxy_item_at(const void* self, int rowIndex, int columnIndex);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemAt)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param position QPoint*
///
const QSurfaceDataItem* q_itemmodelsurfacedataproxy_item_at2(const void* self, const void* position);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#resetArray)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param newArray libqt_list of libqt_list of QSurfaceDataItem*
///
void q_itemmodelsurfacedataproxy_reset_array(void* self, libqt_list newArray);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setRow)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QSurfaceDataItem*
///
void q_itemmodelsurfacedataproxy_set_row(void* self, int rowIndex, libqt_list row);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setRows)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QSurfaceDataItem*
///
void q_itemmodelsurfacedataproxy_set_rows(void* self, int rowIndex, libqt_list rows);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setItem)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param rowIndex int
/// @param columnIndex int
/// @param item QSurfaceDataItem*
///
void q_itemmodelsurfacedataproxy_set_item(void* self, int rowIndex, int columnIndex, const void* item);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setItem)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param position QPoint*
/// @param item QSurfaceDataItem*
///
void q_itemmodelsurfacedataproxy_set_item2(void* self, const void* position, const void* item);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#addRow)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param row libqt_list of QSurfaceDataItem*
///
int32_t q_itemmodelsurfacedataproxy_add_row(void* self, libqt_list row);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#addRows)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param rows libqt_list of libqt_list of QSurfaceDataItem*
///
int32_t q_itemmodelsurfacedataproxy_add_rows(void* self, libqt_list rows);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#insertRow)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QSurfaceDataItem*
///
void q_itemmodelsurfacedataproxy_insert_row(void* self, int rowIndex, libqt_list row);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#insertRows)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QSurfaceDataItem*
///
void q_itemmodelsurfacedataproxy_insert_rows(void* self, int rowIndex, libqt_list rows);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#removeRows)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param rowIndex int
/// @param removeCount int
///
void q_itemmodelsurfacedataproxy_remove_rows(void* self, int rowIndex, int removeCount);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#arrayReset)
///
/// @param self QItemModelSurfaceDataProxy*
///
void q_itemmodelsurfacedataproxy_array_reset(void* self);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#arrayReset)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self)
///
void q_itemmodelsurfacedataproxy_on_array_reset(void* self, void (*callback)(void*));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsAdded)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelsurfacedataproxy_rows_added(void* self, int startIndex, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsAdded)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, int startIndex, int count)
///
void q_itemmodelsurfacedataproxy_on_rows_added(void* self, void (*callback)(void*, int, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelsurfacedataproxy_rows_changed(void* self, int startIndex, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, int startIndex, int count)
///
void q_itemmodelsurfacedataproxy_on_rows_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsRemoved)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelsurfacedataproxy_rows_removed(void* self, int startIndex, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsRemoved)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, int startIndex, int count)
///
void q_itemmodelsurfacedataproxy_on_rows_removed(void* self, void (*callback)(void*, int, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsInserted)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelsurfacedataproxy_rows_inserted(void* self, int startIndex, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsInserted)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, int startIndex, int count)
///
void q_itemmodelsurfacedataproxy_on_rows_inserted(void* self, void (*callback)(void*, int, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param rowIndex int
/// @param columnIndex int
///
void q_itemmodelsurfacedataproxy_item_changed(void* self, int rowIndex, int columnIndex);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, int rowIndex, int columnIndex)
///
void q_itemmodelsurfacedataproxy_on_item_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCountChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param count int
///
void q_itemmodelsurfacedataproxy_row_count_changed(void* self, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCountChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, int count)
///
void q_itemmodelsurfacedataproxy_on_row_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCountChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param count int
///
void q_itemmodelsurfacedataproxy_column_count_changed(void* self, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCountChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, int count)
///
void q_itemmodelsurfacedataproxy_on_column_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#seriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param series QSurface3DSeries*
///
void q_itemmodelsurfacedataproxy_series_changed(void* self, void* series);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#seriesChanged)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QSurface3DSeries* series)
///
void q_itemmodelsurfacedataproxy_on_series_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractdataproxy.html#type)
///
/// @param self const QItemModelSurfaceDataProxy*
///
/// @return enum QAbstractDataProxy__DataType
///
int32_t q_itemmodelsurfacedataproxy_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char* q_itemmodelsurfacedataproxy_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param name const char*
///
void q_itemmodelsurfacedataproxy_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QItemModelSurfaceDataProxy*
///
bool q_itemmodelsurfacedataproxy_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QItemModelSurfaceDataProxy*
///
bool q_itemmodelsurfacedataproxy_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QItemModelSurfaceDataProxy*
///
bool q_itemmodelsurfacedataproxy_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QItemModelSurfaceDataProxy*
///
bool q_itemmodelsurfacedataproxy_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param b bool
///
bool q_itemmodelsurfacedataproxy_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QItemModelSurfaceDataProxy*
///
QThread* q_itemmodelsurfacedataproxy_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param thread QThread*
///
bool q_itemmodelsurfacedataproxy_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param interval int
///
int32_t q_itemmodelsurfacedataproxy_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param time int64_t of nanoseconds
///
int32_t q_itemmodelsurfacedataproxy_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param id int
///
void q_itemmodelsurfacedataproxy_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param id enum Qt__TimerId
///
void q_itemmodelsurfacedataproxy_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QItemModelSurfaceDataProxy*
///
/// @return libqt_list of QObject*
///
libqt_list q_itemmodelsurfacedataproxy_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param parent QObject*
///
void q_itemmodelsurfacedataproxy_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param filterObj QObject*
///
void q_itemmodelsurfacedataproxy_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param obj QObject*
///
void q_itemmodelsurfacedataproxy_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemmodelsurfacedataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_itemmodelsurfacedataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelSurfaceDataProxy*
///
bool q_itemmodelsurfacedataproxy_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param receiver QObject*
///
bool q_itemmodelsurfacedataproxy_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_itemmodelsurfacedataproxy_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QItemModelSurfaceDataProxy*
///
void q_itemmodelsurfacedataproxy_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QItemModelSurfaceDataProxy*
///
void q_itemmodelsurfacedataproxy_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param name const char*
/// @param value QVariant*
///
bool q_itemmodelsurfacedataproxy_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param name const char*
///
QVariant* q_itemmodelsurfacedataproxy_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemModelSurfaceDataProxy*
///
const char** q_itemmodelsurfacedataproxy_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QItemModelSurfaceDataProxy*
///
QBindingStorage* q_itemmodelsurfacedataproxy_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QItemModelSurfaceDataProxy*
///
const QBindingStorage* q_itemmodelsurfacedataproxy_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelSurfaceDataProxy*
///
void q_itemmodelsurfacedataproxy_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self)
///
void q_itemmodelsurfacedataproxy_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QItemModelSurfaceDataProxy*
///
QObject* q_itemmodelsurfacedataproxy_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param classname const char*
///
bool q_itemmodelsurfacedataproxy_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QItemModelSurfaceDataProxy*
///
void q_itemmodelsurfacedataproxy_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_itemmodelsurfacedataproxy_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_itemmodelsurfacedataproxy_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param signal const char*
///
bool q_itemmodelsurfacedataproxy_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_itemmodelsurfacedataproxy_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemmodelsurfacedataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemmodelsurfacedataproxy_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param param1 QObject*
///
void q_itemmodelsurfacedataproxy_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QObject* param1)
///
void q_itemmodelsurfacedataproxy_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param event QEvent*
///
bool q_itemmodelsurfacedataproxy_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param event QEvent*
///
bool q_itemmodelsurfacedataproxy_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback bool func(QItemModelSurfaceDataProxy* self, QEvent* event)
///
void q_itemmodelsurfacedataproxy_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_itemmodelsurfacedataproxy_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_itemmodelsurfacedataproxy_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback bool func(QItemModelSurfaceDataProxy* self, QObject* watched, QEvent* event)
///
void q_itemmodelsurfacedataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param event QTimerEvent*
///
void q_itemmodelsurfacedataproxy_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param event QTimerEvent*
///
void q_itemmodelsurfacedataproxy_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QTimerEvent* event)
///
void q_itemmodelsurfacedataproxy_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param event QChildEvent*
///
void q_itemmodelsurfacedataproxy_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param event QChildEvent*
///
void q_itemmodelsurfacedataproxy_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QChildEvent* event)
///
void q_itemmodelsurfacedataproxy_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param event QEvent*
///
void q_itemmodelsurfacedataproxy_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param event QEvent*
///
void q_itemmodelsurfacedataproxy_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QEvent* event)
///
void q_itemmodelsurfacedataproxy_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelsurfacedataproxy_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelsurfacedataproxy_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QMetaMethod* signal)
///
void q_itemmodelsurfacedataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelsurfacedataproxy_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelsurfacedataproxy_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, QMetaMethod* signal)
///
void q_itemmodelsurfacedataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelSurfaceDataProxy*
///
QObject* q_itemmodelsurfacedataproxy_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelSurfaceDataProxy*
///
QObject* q_itemmodelsurfacedataproxy_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback QObject* func(QItemModelSurfaceDataProxy* self)
///
void q_itemmodelsurfacedataproxy_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelSurfaceDataProxy*
///
int32_t q_itemmodelsurfacedataproxy_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelSurfaceDataProxy*
///
int32_t q_itemmodelsurfacedataproxy_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback int32_t func(QItemModelSurfaceDataProxy* self)
///
void q_itemmodelsurfacedataproxy_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param signal const char*
///
int32_t q_itemmodelsurfacedataproxy_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param signal const char*
///
int32_t q_itemmodelsurfacedataproxy_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback int32_t func(QItemModelSurfaceDataProxy* self, const char* signal)
///
void q_itemmodelsurfacedataproxy_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param signal QMetaMethod*
///
bool q_itemmodelsurfacedataproxy_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelSurfaceDataProxy*
/// @param signal QMetaMethod*
///
bool q_itemmodelsurfacedataproxy_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback bool func(QItemModelSurfaceDataProxy* self, QMetaMethod* signal)
///
void q_itemmodelsurfacedataproxy_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QItemModelSurfaceDataProxy*
/// @param callback void func(QItemModelSurfaceDataProxy* self, const char* objectName)
///
void q_itemmodelsurfacedataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#dtor.QItemModelSurfaceDataProxy)
///
/// Delete this object from C++ memory.
///
/// @param self QItemModelSurfaceDataProxy*
///
void q_itemmodelsurfacedataproxy_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelsurfacedataproxy-qtdatavis.html#public-types)

typedef enum {
    QITEMMODELSURFACEDATAPROXY_MULTIMATCHBEHAVIOR_MMBFIRST = 0,
    QITEMMODELSURFACEDATAPROXY_MULTIMATCHBEHAVIOR_MMBLAST = 1,
    QITEMMODELSURFACEDATAPROXY_MULTIMATCHBEHAVIOR_MMBAVERAGE = 2,
    QITEMMODELSURFACEDATAPROXY_MULTIMATCHBEHAVIOR_MMBCUMULATIVEY = 3
} QItemModelSurfaceDataProxy__MultiMatchBehavior;

#endif
