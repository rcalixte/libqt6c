#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELBARDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQITEMMODELBARDATAPROXY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new constructs a new QItemModelBarDataProxy object.
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new2 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new2(void* itemModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new3 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param valueRole const char*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new3(void* itemModel, const char* valueRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new4 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param valueRole const char*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new4(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new5 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param valueRole const char*
/// @param rotationRole const char*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new5(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rotationRole);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new6 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param valueRole const char*
/// @param rowCategories const char**
/// @param columnCategories const char**
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new6(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rowCategories[static 1], const char* columnCategories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new7 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param valueRole const char*
/// @param rotationRole const char*
/// @param rowCategories const char**
/// @param columnCategories const char**
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new7(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rotationRole, const char* rowCategories[static 1], const char* columnCategories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new8 constructs a new QItemModelBarDataProxy object.
///
/// @param parent QObject*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new8(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new9 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param parent QObject*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new9(void* itemModel, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new10 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param valueRole const char*
/// @param parent QObject*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new10(void* itemModel, const char* valueRole, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new11 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param valueRole const char*
/// @param parent QObject*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new11(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new12 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param valueRole const char*
/// @param rotationRole const char*
/// @param parent QObject*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new12(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rotationRole, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new13 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param valueRole const char*
/// @param rowCategories const char**
/// @param columnCategories const char**
/// @param parent QObject*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new13(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rowCategories[static 1], const char* columnCategories[static 1], void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html)

/// q_itemmodelbardataproxy_new14 constructs a new QItemModelBarDataProxy object.
///
/// @param itemModel QAbstractItemModel*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param valueRole const char*
/// @param rotationRole const char*
/// @param rowCategories const char**
/// @param columnCategories const char**
/// @param parent QObject*
///
QItemModelBarDataProxy* q_itemmodelbardataproxy_new14(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rotationRole, const char* rowCategories[static 1], const char* columnCategories[static 1], void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QItemModelBarDataProxy*
///
const QMetaObject* q_itemmodelbardataproxy_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QItemModelBarDataProxy*
/// @param callback const QMetaObject* func(const QItemModelBarDataProxy* self)
///
void q_itemmodelbardataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QItemModelBarDataProxy*
///
const QMetaObject* q_itemmodelbardataproxy_super_meta_object(const void* self);

/// @param self QItemModelBarDataProxy*
/// @param param1 const char*
///
void* q_itemmodelbardataproxy_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QItemModelBarDataProxy*
/// @param callback void* func(QItemModelBarDataProxy* self, const char* param1)
///
void q_itemmodelbardataproxy_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QItemModelBarDataProxy*
/// @param param1 const char*
///
void* q_itemmodelbardataproxy_super_metacast(void* self, const char* param1);

/// @param self QItemModelBarDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_itemmodelbardataproxy_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QItemModelBarDataProxy*
/// @param callback int32_t func(QItemModelBarDataProxy* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_itemmodelbardataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QItemModelBarDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_itemmodelbardataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_itemmodelbardataproxy_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setItemModel)
///
/// @param self QItemModelBarDataProxy*
/// @param itemModel QAbstractItemModel*
///
void q_itemmodelbardataproxy_set_item_model(void* self, void* itemModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#itemModel)
///
/// @param self const QItemModelBarDataProxy*
///
QAbstractItemModel* q_itemmodelbardataproxy_item_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRowRole)
///
/// @param self QItemModelBarDataProxy*
/// @param role const char*
///
void q_itemmodelbardataproxy_set_row_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char* q_itemmodelbardataproxy_row_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setColumnRole)
///
/// @param self QItemModelBarDataProxy*
/// @param role const char*
///
void q_itemmodelbardataproxy_set_column_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char* q_itemmodelbardataproxy_column_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setValueRole)
///
/// @param self QItemModelBarDataProxy*
/// @param role const char*
///
void q_itemmodelbardataproxy_set_value_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char* q_itemmodelbardataproxy_value_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRotationRole)
///
/// @param self QItemModelBarDataProxy*
/// @param role const char*
///
void q_itemmodelbardataproxy_set_rotation_role(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char* q_itemmodelbardataproxy_rotation_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRowCategories)
///
/// @param self QItemModelBarDataProxy*
/// @param categories const char**
///
void q_itemmodelbardataproxy_set_row_categories(void* self, const char* categories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowCategories)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char** q_itemmodelbardataproxy_row_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setColumnCategories)
///
/// @param self QItemModelBarDataProxy*
/// @param categories const char**
///
void q_itemmodelbardataproxy_set_column_categories(void* self, const char* categories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnCategories)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char** q_itemmodelbardataproxy_column_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setUseModelCategories)
///
/// @param self QItemModelBarDataProxy*
/// @param enable bool
///
void q_itemmodelbardataproxy_set_use_model_categories(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#useModelCategories)
///
/// @param self const QItemModelBarDataProxy*
///
bool q_itemmodelbardataproxy_use_model_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setAutoRowCategories)
///
/// @param self QItemModelBarDataProxy*
/// @param enable bool
///
void q_itemmodelbardataproxy_set_auto_row_categories(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoRowCategories)
///
/// @param self const QItemModelBarDataProxy*
///
bool q_itemmodelbardataproxy_auto_row_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setAutoColumnCategories)
///
/// @param self QItemModelBarDataProxy*
/// @param enable bool
///
void q_itemmodelbardataproxy_set_auto_column_categories(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoColumnCategories)
///
/// @param self const QItemModelBarDataProxy*
///
bool q_itemmodelbardataproxy_auto_column_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#remap)
///
/// @param self QItemModelBarDataProxy*
/// @param rowRole const char*
/// @param columnRole const char*
/// @param valueRole const char*
/// @param rotationRole const char*
/// @param rowCategories const char**
/// @param columnCategories const char**
///
void q_itemmodelbardataproxy_remap(void* self, const char* rowRole, const char* columnRole, const char* valueRole, const char* rotationRole, const char* rowCategories[static 1], const char* columnCategories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowCategoryIndex)
///
/// @param self QItemModelBarDataProxy*
/// @param category const char*
///
int32_t q_itemmodelbardataproxy_row_category_index(void* self, const char* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnCategoryIndex)
///
/// @param self QItemModelBarDataProxy*
/// @param category const char*
///
int32_t q_itemmodelbardataproxy_column_category_index(void* self, const char* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRowRolePattern)
///
/// @param self QItemModelBarDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelbardataproxy_set_row_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRolePattern)
///
/// @param self const QItemModelBarDataProxy*
///
QRegularExpression* q_itemmodelbardataproxy_row_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setColumnRolePattern)
///
/// @param self QItemModelBarDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelbardataproxy_set_column_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRolePattern)
///
/// @param self const QItemModelBarDataProxy*
///
QRegularExpression* q_itemmodelbardataproxy_column_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setValueRolePattern)
///
/// @param self QItemModelBarDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelbardataproxy_set_value_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRolePattern)
///
/// @param self const QItemModelBarDataProxy*
///
QRegularExpression* q_itemmodelbardataproxy_value_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRotationRolePattern)
///
/// @param self QItemModelBarDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelbardataproxy_set_rotation_role_pattern(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRolePattern)
///
/// @param self const QItemModelBarDataProxy*
///
QRegularExpression* q_itemmodelbardataproxy_rotation_role_pattern(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRowRoleReplace)
///
/// @param self QItemModelBarDataProxy*
/// @param replace const char*
///
void q_itemmodelbardataproxy_set_row_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char* q_itemmodelbardataproxy_row_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setColumnRoleReplace)
///
/// @param self QItemModelBarDataProxy*
/// @param replace const char*
///
void q_itemmodelbardataproxy_set_column_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char* q_itemmodelbardataproxy_column_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setValueRoleReplace)
///
/// @param self QItemModelBarDataProxy*
/// @param replace const char*
///
void q_itemmodelbardataproxy_set_value_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char* q_itemmodelbardataproxy_value_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setRotationRoleReplace)
///
/// @param self QItemModelBarDataProxy*
/// @param replace const char*
///
void q_itemmodelbardataproxy_set_rotation_role_replace(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRoleReplace)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char* q_itemmodelbardataproxy_rotation_role_replace(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#setMultiMatchBehavior)
///
/// @param self QItemModelBarDataProxy*
/// @param behavior enum QItemModelBarDataProxy__MultiMatchBehavior
///
void q_itemmodelbardataproxy_set_multi_match_behavior(void* self, int32_t behavior);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#multiMatchBehavior)
///
/// @param self const QItemModelBarDataProxy*
///
/// @return enum QItemModelBarDataProxy__MultiMatchBehavior
///
int32_t q_itemmodelbardataproxy_multi_match_behavior(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#itemModelChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param itemModel QAbstractItemModel*
///
void q_itemmodelbardataproxy_item_model_changed(void* self, const void* itemModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#itemModelChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QAbstractItemModel* itemModel)
///
void q_itemmodelbardataproxy_on_item_model_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRoleChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param role const char*
///
void q_itemmodelbardataproxy_row_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRoleChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, const char* role)
///
void q_itemmodelbardataproxy_on_row_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRoleChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param role const char*
///
void q_itemmodelbardataproxy_column_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRoleChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, const char* role)
///
void q_itemmodelbardataproxy_on_column_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRoleChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param role const char*
///
void q_itemmodelbardataproxy_value_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRoleChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, const char* role)
///
void q_itemmodelbardataproxy_on_value_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRoleChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param role const char*
///
void q_itemmodelbardataproxy_rotation_role_changed(void* self, const char* role);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRoleChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, const char* role)
///
void q_itemmodelbardataproxy_on_rotation_role_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowCategoriesChanged)
///
/// @param self QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_row_categories_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowCategoriesChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self)
///
void q_itemmodelbardataproxy_on_row_categories_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnCategoriesChanged)
///
/// @param self QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_column_categories_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnCategoriesChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self)
///
void q_itemmodelbardataproxy_on_column_categories_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#useModelCategoriesChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param enable bool
///
void q_itemmodelbardataproxy_use_model_categories_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#useModelCategoriesChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, bool enable)
///
void q_itemmodelbardataproxy_on_use_model_categories_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoRowCategoriesChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param enable bool
///
void q_itemmodelbardataproxy_auto_row_categories_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoRowCategoriesChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, bool enable)
///
void q_itemmodelbardataproxy_on_auto_row_categories_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoColumnCategoriesChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param enable bool
///
void q_itemmodelbardataproxy_auto_column_categories_changed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#autoColumnCategoriesChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, bool enable)
///
void q_itemmodelbardataproxy_on_auto_column_categories_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRolePatternChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelbardataproxy_row_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRolePatternChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelbardataproxy_on_row_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRolePatternChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelbardataproxy_column_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRolePatternChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelbardataproxy_on_column_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRolePatternChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelbardataproxy_value_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRolePatternChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelbardataproxy_on_value_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRolePatternChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param pattern QRegularExpression*
///
void q_itemmodelbardataproxy_rotation_role_pattern_changed(void* self, const void* pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRolePatternChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QRegularExpression* pattern)
///
void q_itemmodelbardataproxy_on_rotation_role_pattern_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRoleReplaceChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param replace const char*
///
void q_itemmodelbardataproxy_row_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rowRoleReplaceChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, const char* replace)
///
void q_itemmodelbardataproxy_on_row_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRoleReplaceChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param replace const char*
///
void q_itemmodelbardataproxy_column_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#columnRoleReplaceChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, const char* replace)
///
void q_itemmodelbardataproxy_on_column_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRoleReplaceChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param replace const char*
///
void q_itemmodelbardataproxy_value_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#valueRoleReplaceChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, const char* replace)
///
void q_itemmodelbardataproxy_on_value_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRoleReplaceChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param replace const char*
///
void q_itemmodelbardataproxy_rotation_role_replace_changed(void* self, const char* replace);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#rotationRoleReplaceChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, const char* replace)
///
void q_itemmodelbardataproxy_on_rotation_role_replace_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#multiMatchBehaviorChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param behavior enum QItemModelBarDataProxy__MultiMatchBehavior
///
void q_itemmodelbardataproxy_multi_match_behavior_changed(void* self, int32_t behavior);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#multiMatchBehaviorChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, enum QItemModelBarDataProxy__MultiMatchBehavior behavior)
///
void q_itemmodelbardataproxy_on_multi_match_behavior_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_itemmodelbardataproxy_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_itemmodelbardataproxy_tr3(const char* s, const char* c, int n);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#series)
///
/// @param self const QItemModelBarDataProxy*
///
QBar3DSeries* q_itemmodelbardataproxy_series(const void* self);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowCount)
///
/// @param self const QItemModelBarDataProxy*
///
int32_t q_itemmodelbardataproxy_row_count(const void* self);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowLabels)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char** q_itemmodelbardataproxy_row_labels(const void* self);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setRowLabels)
///
/// @param self QItemModelBarDataProxy*
/// @param labels const char**
///
void q_itemmodelbardataproxy_set_row_labels(void* self, const char* labels[static 1]);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#columnLabels)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char** q_itemmodelbardataproxy_column_labels(const void* self);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setColumnLabels)
///
/// @param self QItemModelBarDataProxy*
/// @param labels const char**
///
void q_itemmodelbardataproxy_set_column_labels(void* self, const char* labels[static 1]);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#array)
///
/// @param self const QItemModelBarDataProxy*
///
/// @return libqt_list of libqt_list of QBarDataItem*
///
libqt_list q_itemmodelbardataproxy_array(const void* self);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowAt)
///
/// @param self const QItemModelBarDataProxy*
/// @param rowIndex int
///
/// @return libqt_list of QBarDataItem*
///
libqt_list q_itemmodelbardataproxy_row_at(const void* self, int rowIndex);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#itemAt)
///
/// @param self const QItemModelBarDataProxy*
/// @param rowIndex int
/// @param columnIndex int
///
const QBarDataItem* q_itemmodelbardataproxy_item_at(const void* self, int rowIndex, int columnIndex);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#itemAt)
///
/// @param self const QItemModelBarDataProxy*
/// @param position QPoint*
///
const QBarDataItem* q_itemmodelbardataproxy_item_at2(const void* self, const void* position);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#resetArray)
///
/// @param self QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_reset_array(void* self);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#resetArray)
///
/// @param self QItemModelBarDataProxy*
/// @param newArray libqt_list of libqt_list of QBarDataItem*
///
void q_itemmodelbardataproxy_reset_array2(void* self, libqt_list newArray);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#resetArray)
///
/// @param self QItemModelBarDataProxy*
/// @param newArray libqt_list of libqt_list of QBarDataItem*
/// @param rowLabels const char**
/// @param columnLabels const char**
///
void q_itemmodelbardataproxy_reset_array3(void* self, libqt_list newArray, const char* rowLabels[static 1], const char* columnLabels[static 1]);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setRow)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QBarDataItem*
///
void q_itemmodelbardataproxy_set_row(void* self, int rowIndex, libqt_list row);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setRow)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QBarDataItem*
/// @param label const char*
///
void q_itemmodelbardataproxy_set_row2(void* self, int rowIndex, libqt_list row, const char* label);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setRows)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QBarDataItem*
///
void q_itemmodelbardataproxy_set_rows(void* self, int rowIndex, libqt_list rows);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setRows)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QBarDataItem*
/// @param labels const char**
///
void q_itemmodelbardataproxy_set_rows2(void* self, int rowIndex, libqt_list rows, const char* labels[static 1]);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setItem)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param columnIndex int
/// @param item QBarDataItem*
///
void q_itemmodelbardataproxy_set_item(void* self, int rowIndex, int columnIndex, const void* item);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#setItem)
///
/// @param self QItemModelBarDataProxy*
/// @param position QPoint*
/// @param item QBarDataItem*
///
void q_itemmodelbardataproxy_set_item2(void* self, const void* position, const void* item);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#addRow)
///
/// @param self QItemModelBarDataProxy*
/// @param row libqt_list of QBarDataItem*
///
int32_t q_itemmodelbardataproxy_add_row(void* self, libqt_list row);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#addRow)
///
/// @param self QItemModelBarDataProxy*
/// @param row libqt_list of QBarDataItem*
/// @param label const char*
///
int32_t q_itemmodelbardataproxy_add_row2(void* self, libqt_list row, const char* label);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#addRows)
///
/// @param self QItemModelBarDataProxy*
/// @param rows libqt_list of libqt_list of QBarDataItem*
///
int32_t q_itemmodelbardataproxy_add_rows(void* self, libqt_list rows);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#addRows)
///
/// @param self QItemModelBarDataProxy*
/// @param rows libqt_list of libqt_list of QBarDataItem*
/// @param labels const char**
///
int32_t q_itemmodelbardataproxy_add_rows2(void* self, libqt_list rows, const char* labels[static 1]);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#insertRow)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QBarDataItem*
///
void q_itemmodelbardataproxy_insert_row(void* self, int rowIndex, libqt_list row);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#insertRow)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QBarDataItem*
/// @param label const char*
///
void q_itemmodelbardataproxy_insert_row2(void* self, int rowIndex, libqt_list row, const char* label);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#insertRows)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QBarDataItem*
///
void q_itemmodelbardataproxy_insert_rows(void* self, int rowIndex, libqt_list rows);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#insertRows)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QBarDataItem*
/// @param labels const char**
///
void q_itemmodelbardataproxy_insert_rows2(void* self, int rowIndex, libqt_list rows, const char* labels[static 1]);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#removeRows)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param removeCount int
///
void q_itemmodelbardataproxy_remove_rows(void* self, int rowIndex, int removeCount);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#arrayReset)
///
/// @param self QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_array_reset(void* self);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#arrayReset)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self)
///
void q_itemmodelbardataproxy_on_array_reset(void* self, void (*callback)(void*));

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsAdded)
///
/// @param self QItemModelBarDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelbardataproxy_rows_added(void* self, int startIndex, int count);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsAdded)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, int startIndex, int count)
///
void q_itemmodelbardataproxy_on_rows_added(void* self, void (*callback)(void*, int, int));

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelbardataproxy_rows_changed(void* self, int startIndex, int count);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, int startIndex, int count)
///
void q_itemmodelbardataproxy_on_rows_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsRemoved)
///
/// @param self QItemModelBarDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelbardataproxy_rows_removed(void* self, int startIndex, int count);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsRemoved)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, int startIndex, int count)
///
void q_itemmodelbardataproxy_on_rows_removed(void* self, void (*callback)(void*, int, int));

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsInserted)
///
/// @param self QItemModelBarDataProxy*
/// @param startIndex int
/// @param count int
///
void q_itemmodelbardataproxy_rows_inserted(void* self, int startIndex, int count);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowsInserted)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, int startIndex, int count)
///
void q_itemmodelbardataproxy_on_rows_inserted(void* self, void (*callback)(void*, int, int));

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#itemChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param columnIndex int
///
void q_itemmodelbardataproxy_item_changed(void* self, int rowIndex, int columnIndex);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#itemChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, int rowIndex, int columnIndex)
///
void q_itemmodelbardataproxy_on_item_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowCountChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param count int
///
void q_itemmodelbardataproxy_row_count_changed(void* self, int count);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowCountChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, int count)
///
void q_itemmodelbardataproxy_on_row_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowLabelsChanged)
///
/// @param self QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_row_labels_changed(void* self);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#rowLabelsChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self)
///
void q_itemmodelbardataproxy_on_row_labels_changed(void* self, void (*callback)(void*));

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#columnLabelsChanged)
///
/// @param self QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_column_labels_changed(void* self);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#columnLabelsChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self)
///
void q_itemmodelbardataproxy_on_column_labels_changed(void* self, void (*callback)(void*));

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#seriesChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param series QBar3DSeries*
///
void q_itemmodelbardataproxy_series_changed(void* self, void* series);

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#seriesChanged)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QBar3DSeries* series)
///
void q_itemmodelbardataproxy_on_series_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QBarDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qbardataproxy.html#removeRows)
///
/// @param self QItemModelBarDataProxy*
/// @param rowIndex int
/// @param removeCount int
/// @param removeLabels bool
///
void q_itemmodelbardataproxy_remove_rows3(void* self, int rowIndex, int removeCount, bool removeLabels);

/// Inherited from QAbstractDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractdataproxy.html#type)
///
/// @param self const QItemModelBarDataProxy*
///
/// @return enum QAbstractDataProxy__DataType
///
int32_t q_itemmodelbardataproxy_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char* q_itemmodelbardataproxy_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QItemModelBarDataProxy*
/// @param name const char*
///
void q_itemmodelbardataproxy_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QItemModelBarDataProxy*
///
bool q_itemmodelbardataproxy_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QItemModelBarDataProxy*
///
bool q_itemmodelbardataproxy_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QItemModelBarDataProxy*
///
bool q_itemmodelbardataproxy_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QItemModelBarDataProxy*
///
bool q_itemmodelbardataproxy_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QItemModelBarDataProxy*
/// @param b bool
///
bool q_itemmodelbardataproxy_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QItemModelBarDataProxy*
///
QThread* q_itemmodelbardataproxy_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QItemModelBarDataProxy*
/// @param thread QThread*
///
bool q_itemmodelbardataproxy_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelBarDataProxy*
/// @param interval int
///
int32_t q_itemmodelbardataproxy_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelBarDataProxy*
/// @param time int64_t of nanoseconds
///
int32_t q_itemmodelbardataproxy_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QItemModelBarDataProxy*
/// @param id int
///
void q_itemmodelbardataproxy_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QItemModelBarDataProxy*
/// @param id enum Qt__TimerId
///
void q_itemmodelbardataproxy_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QItemModelBarDataProxy*
///
/// @return libqt_list of QObject*
///
libqt_list q_itemmodelbardataproxy_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QItemModelBarDataProxy*
/// @param parent QObject*
///
void q_itemmodelbardataproxy_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QItemModelBarDataProxy*
/// @param filterObj QObject*
///
void q_itemmodelbardataproxy_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QItemModelBarDataProxy*
/// @param obj QObject*
///
void q_itemmodelbardataproxy_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_itemmodelbardataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_itemmodelbardataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QItemModelBarDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_itemmodelbardataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemmodelbardataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_itemmodelbardataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelBarDataProxy*
///
bool q_itemmodelbardataproxy_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelBarDataProxy*
/// @param receiver QObject*
///
bool q_itemmodelbardataproxy_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_itemmodelbardataproxy_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QItemModelBarDataProxy*
/// @param name const char*
/// @param value QVariant*
///
bool q_itemmodelbardataproxy_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QItemModelBarDataProxy*
/// @param name const char*
///
QVariant* q_itemmodelbardataproxy_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QItemModelBarDataProxy*
///
const char** q_itemmodelbardataproxy_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QItemModelBarDataProxy*
///
QBindingStorage* q_itemmodelbardataproxy_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QItemModelBarDataProxy*
///
const QBindingStorage* q_itemmodelbardataproxy_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self)
///
void q_itemmodelbardataproxy_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QItemModelBarDataProxy*
///
QObject* q_itemmodelbardataproxy_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QItemModelBarDataProxy*
/// @param classname const char*
///
bool q_itemmodelbardataproxy_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelBarDataProxy*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_itemmodelbardataproxy_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QItemModelBarDataProxy*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_itemmodelbardataproxy_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_itemmodelbardataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_itemmodelbardataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QItemModelBarDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_itemmodelbardataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelBarDataProxy*
/// @param signal const char*
///
bool q_itemmodelbardataproxy_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelBarDataProxy*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_itemmodelbardataproxy_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelBarDataProxy*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemmodelbardataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QItemModelBarDataProxy*
/// @param receiver QObject*
/// @param member const char*
///
bool q_itemmodelbardataproxy_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelBarDataProxy*
/// @param param1 QObject*
///
void q_itemmodelbardataproxy_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QObject* param1)
///
void q_itemmodelbardataproxy_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param event QEvent*
///
bool q_itemmodelbardataproxy_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param event QEvent*
///
bool q_itemmodelbardataproxy_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback bool func(QItemModelBarDataProxy* self, QEvent* event)
///
void q_itemmodelbardataproxy_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_itemmodelbardataproxy_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_itemmodelbardataproxy_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback bool func(QItemModelBarDataProxy* self, QObject* watched, QEvent* event)
///
void q_itemmodelbardataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param event QTimerEvent*
///
void q_itemmodelbardataproxy_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param event QTimerEvent*
///
void q_itemmodelbardataproxy_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QTimerEvent* event)
///
void q_itemmodelbardataproxy_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param event QChildEvent*
///
void q_itemmodelbardataproxy_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param event QChildEvent*
///
void q_itemmodelbardataproxy_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QChildEvent* event)
///
void q_itemmodelbardataproxy_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param event QEvent*
///
void q_itemmodelbardataproxy_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param event QEvent*
///
void q_itemmodelbardataproxy_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QEvent* event)
///
void q_itemmodelbardataproxy_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelbardataproxy_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelbardataproxy_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QMetaMethod* signal)
///
void q_itemmodelbardataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelbardataproxy_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param signal QMetaMethod*
///
void q_itemmodelbardataproxy_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, QMetaMethod* signal)
///
void q_itemmodelbardataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelBarDataProxy*
///
QObject* q_itemmodelbardataproxy_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelBarDataProxy*
///
QObject* q_itemmodelbardataproxy_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback QObject* func(QItemModelBarDataProxy* self)
///
void q_itemmodelbardataproxy_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelBarDataProxy*
///
int32_t q_itemmodelbardataproxy_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelBarDataProxy*
///
int32_t q_itemmodelbardataproxy_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback int32_t func(QItemModelBarDataProxy* self)
///
void q_itemmodelbardataproxy_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelBarDataProxy*
/// @param signal const char*
///
int32_t q_itemmodelbardataproxy_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelBarDataProxy*
/// @param signal const char*
///
int32_t q_itemmodelbardataproxy_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback int32_t func(QItemModelBarDataProxy* self, const char* signal)
///
void q_itemmodelbardataproxy_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QItemModelBarDataProxy*
/// @param signal QMetaMethod*
///
bool q_itemmodelbardataproxy_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QItemModelBarDataProxy*
/// @param signal QMetaMethod*
///
bool q_itemmodelbardataproxy_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QItemModelBarDataProxy*
/// @param callback bool func(QItemModelBarDataProxy* self, QMetaMethod* signal)
///
void q_itemmodelbardataproxy_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QItemModelBarDataProxy*
/// @param callback void func(QItemModelBarDataProxy* self, const char* objectName)
///
void q_itemmodelbardataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#dtor.QItemModelBarDataProxy)
///
/// Delete this object from C++ memory.
///
/// @param self QItemModelBarDataProxy*
///
void q_itemmodelbardataproxy_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qitemmodelbardataproxy-qtdatavis.html#public-types)

typedef enum {
    QITEMMODELBARDATAPROXY_MULTIMATCHBEHAVIOR_MMBFIRST = 0,
    QITEMMODELBARDATAPROXY_MULTIMATCHBEHAVIOR_MMBLAST = 1,
    QITEMMODELBARDATAPROXY_MULTIMATCHBEHAVIOR_MMBAVERAGE = 2,
    QITEMMODELBARDATAPROXY_MULTIMATCHBEHAVIOR_MMBCUMULATIVE = 3
} QItemModelBarDataProxy__MultiMatchBehavior;

#endif
