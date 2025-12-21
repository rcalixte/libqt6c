#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKFILEPLACESMODEL_H
#define SRC_EXTRAS_KIO_QT6C_LIBKFILEPLACESMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html)

/// k_fileplacesmodel_new constructs a new KFilePlacesModel object.
///
KFilePlacesModel* k_fileplacesmodel_new();

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html)

/// k_fileplacesmodel_new2 constructs a new KFilePlacesModel object.
///
/// @param parent QObject*
///
KFilePlacesModel* k_fileplacesmodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KFilePlacesModel*
///
const QMetaObject* k_fileplacesmodel_meta_object(void* self);

/// @param self KFilePlacesModel*
/// @param param1 const char*
///
void* k_fileplacesmodel_metacast(void* self, const char* param1);

/// @param self KFilePlacesModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_fileplacesmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback int32_t func(KFilePlacesModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_fileplacesmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFilePlacesModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_fileplacesmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_fileplacesmodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#url)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
QUrl* k_fileplacesmodel_url(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setupNeeded)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
bool k_fileplacesmodel_setup_needed(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isTeardownAllowed)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
bool k_fileplacesmodel_is_teardown_allowed(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isEjectAllowed)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
bool k_fileplacesmodel_is_eject_allowed(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isTeardownOverlayRecommended)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
bool k_fileplacesmodel_is_teardown_overlay_recommended(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#deviceAccessibility)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
/// @return enum KFilePlacesModel__DeviceAccessibility
///
int32_t k_fileplacesmodel_device_accessibility(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#icon)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
QIcon* k_fileplacesmodel_icon(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#text)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
const char* k_fileplacesmodel_text(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isHidden)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
bool k_fileplacesmodel_is_hidden(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isGroupHidden)
///
/// @param self KFilePlacesModel*
/// @param type enum KFilePlacesModel__GroupType
///
bool k_fileplacesmodel_is_group_hidden(void* self, int32_t type);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isGroupHidden)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
bool k_fileplacesmodel_is_group_hidden2(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isDevice)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
bool k_fileplacesmodel_is_device(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#deviceForIndex)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
Solid__Device* k_fileplacesmodel_device_for_index(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#bookmarkForIndex)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
KBookmark* k_fileplacesmodel_bookmark_for_index(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#bookmarkForUrl)
///
/// @param self KFilePlacesModel*
/// @param searchUrl QUrl*
///
KBookmark* k_fileplacesmodel_bookmark_for_url(void* self, void* searchUrl);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#groupType)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
/// @return enum KFilePlacesModel__GroupType
///
int32_t k_fileplacesmodel_group_type(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#groupIndexes)
///
/// @param self KFilePlacesModel*
/// @param type enum KFilePlacesModel__GroupType
///
libqt_list /* of QModelIndex* */ k_fileplacesmodel_group_indexes(void* self, int32_t type);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#teardownActionForIndex)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
QAction* k_fileplacesmodel_teardown_action_for_index(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#ejectActionForIndex)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
QAction* k_fileplacesmodel_eject_action_for_index(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#partitionActionForIndex)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
QAction* k_fileplacesmodel_partition_action_for_index(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#requestTeardown)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
void k_fileplacesmodel_request_teardown(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#requestEject)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
void k_fileplacesmodel_request_eject(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#requestSetup)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
void k_fileplacesmodel_request_setup(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#addPlace)
///
/// @param self KFilePlacesModel*
/// @param text const char*
/// @param url QUrl*
///
void k_fileplacesmodel_add_place(void* self, const char* text, void* url);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#addPlace)
///
/// @param self KFilePlacesModel*
/// @param text const char*
/// @param url QUrl*
/// @param iconName const char*
/// @param appName const char*
/// @param after QModelIndex*
///
void k_fileplacesmodel_add_place2(void* self, const char* text, void* url, const char* iconName, const char* appName, void* after);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#editPlace)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param text const char*
/// @param url QUrl*
///
void k_fileplacesmodel_edit_place(void* self, void* index, const char* text, void* url);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#removePlace)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
void k_fileplacesmodel_remove_place(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setPlaceHidden)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param hidden bool
///
void k_fileplacesmodel_set_place_hidden(void* self, void* index, bool hidden);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setGroupHidden)
///
/// @param self KFilePlacesModel*
/// @param type enum KFilePlacesModel__GroupType
/// @param hidden bool
///
void k_fileplacesmodel_set_group_hidden(void* self, int32_t type, bool hidden);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#movePlace)
///
/// @param self KFilePlacesModel*
/// @param itemRow int
/// @param row int
///
bool k_fileplacesmodel_move_place(void* self, int itemRow, int row);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#hiddenCount)
///
/// @param self KFilePlacesModel*
///
int32_t k_fileplacesmodel_hidden_count(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#data)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_fileplacesmodel_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback QVariant* func(KFilePlacesModel* self, QModelIndex* index, int role)
///
void k_fileplacesmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#data)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_fileplacesmodel_qbase_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#index)
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_fileplacesmodel_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback QModelIndex* func(KFilePlacesModel* self, int row, int column, QModelIndex* parent)
///
void k_fileplacesmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#index)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_fileplacesmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#parent)
///
/// @param self KFilePlacesModel*
/// @param child QModelIndex*
///
QModelIndex* k_fileplacesmodel_parent(void* self, void* child);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback QModelIndex* func(KFilePlacesModel* self, QModelIndex* child)
///
void k_fileplacesmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#parent)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
/// @param child QModelIndex*
///
QModelIndex* k_fileplacesmodel_qbase_parent(void* self, void* child);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#roleNames)
///
/// @param self KFilePlacesModel*
///
libqt_map /* of int to char* */ k_fileplacesmodel_role_names(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback libqt_map /* of int to char* */ func()
///
void k_fileplacesmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
///
libqt_map /* of int to char* */ k_fileplacesmodel_qbase_role_names(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#rowCount)
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
///
int32_t k_fileplacesmodel_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback int32_t func(KFilePlacesModel* self, QModelIndex* parent)
///
void k_fileplacesmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
///
int32_t k_fileplacesmodel_qbase_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#columnCount)
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
///
int32_t k_fileplacesmodel_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback int32_t func(KFilePlacesModel* self, QModelIndex* parent)
///
void k_fileplacesmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
///
int32_t k_fileplacesmodel_qbase_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#closestItem)
///
/// @param self KFilePlacesModel*
/// @param url QUrl*
///
QModelIndex* k_fileplacesmodel_closest_item(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedDropActions)
///
/// @param self KFilePlacesModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_fileplacesmodel_supported_drop_actions(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback int32_t func()
///
void k_fileplacesmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_fileplacesmodel_qbase_supported_drop_actions(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#flags)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_fileplacesmodel_flags(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback int32_t func(KFilePlacesModel* self, QModelIndex* index)
///
void k_fileplacesmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#flags)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_fileplacesmodel_qbase_flags(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KFilePlacesModel*
///
const char** k_fileplacesmodel_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback const char** func()
///
void k_fileplacesmodel_on_mime_types(void* self, const char** (*callback)());

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
///
const char** k_fileplacesmodel_qbase_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeData)
///
/// @param self KFilePlacesModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* k_fileplacesmodel_mime_data(void* self, libqt_list indexes);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback QMimeData* func(KFilePlacesModel* self, QModelIndex** indexes)
///
void k_fileplacesmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* k_fileplacesmodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#dropMimeData)
///
/// @param self KFilePlacesModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_fileplacesmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self KFilePlacesModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#refresh)
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_refresh(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#convertedUrl)
///
/// @param url QUrl*
///
QUrl* k_fileplacesmodel_converted_url(void* url);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setSupportedSchemes)
///
/// @param self KFilePlacesModel*
/// @param schemes const char**
///
void k_fileplacesmodel_set_supported_schemes(void* self, const char* schemes[static 1]);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedSchemes)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KFilePlacesModel*
///
const char** k_fileplacesmodel_supported_schemes(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#errorMessage)
///
/// @param self KFilePlacesModel*
/// @param message const char*
///
void k_fileplacesmodel_error_message(void* self, const char* message);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#errorMessage)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, const char* message)
///
void k_fileplacesmodel_on_error_message(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setupDone)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param success bool
///
void k_fileplacesmodel_setup_done(void* self, void* index, bool success);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setupDone)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* index, bool success)
///
void k_fileplacesmodel_on_setup_done(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#teardownDone)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param error enum Solid__ErrorType
/// @param errorData QVariant*
///
void k_fileplacesmodel_teardown_done(void* self, void* index, int32_t error, void* errorData);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#teardownDone)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* index, enum Solid__ErrorType error, QVariant* errorData)
///
void k_fileplacesmodel_on_teardown_done(void* self, void (*callback)(void*, void*, int32_t, void*));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#groupHiddenChanged)
///
/// @param self KFilePlacesModel*
/// @param group enum KFilePlacesModel__GroupType
/// @param hidden bool
///
void k_fileplacesmodel_group_hidden_changed(void* self, int32_t group, bool hidden);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#groupHiddenChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, enum KFilePlacesModel__GroupType group, bool hidden)
///
void k_fileplacesmodel_on_group_hidden_changed(void* self, void (*callback)(void*, int32_t, bool));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#reloaded)
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_reloaded(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#reloaded)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self)
///
void k_fileplacesmodel_on_reloaded(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedSchemesChanged)
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_supported_schemes_changed(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedSchemesChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self)
///
void k_fileplacesmodel_on_supported_schemes_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_fileplacesmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_fileplacesmodel_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#addPlace)
///
/// @param self KFilePlacesModel*
/// @param text const char*
/// @param url QUrl*
/// @param iconName const char*
///
void k_fileplacesmodel_add_place3(void* self, const char* text, void* url, const char* iconName);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#addPlace)
///
/// @param self KFilePlacesModel*
/// @param text const char*
/// @param url QUrl*
/// @param iconName const char*
/// @param appName const char*
///
void k_fileplacesmodel_add_place4(void* self, const char* text, void* url, const char* iconName, const char* appName);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#editPlace)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param text const char*
/// @param url QUrl*
/// @param iconName const char*
///
void k_fileplacesmodel_edit_place4(void* self, void* index, const char* text, void* url, const char* iconName);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#editPlace)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param text const char*
/// @param url QUrl*
/// @param iconName const char*
/// @param appName const char*
///
void k_fileplacesmodel_edit_place5(void* self, void* index, const char* text, void* url, const char* iconName, const char* appName);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param column int
///
bool k_fileplacesmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KFilePlacesModel*
/// @param row int
///
bool k_fileplacesmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KFilePlacesModel*
/// @param column int
///
bool k_fileplacesmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KFilePlacesModel*
/// @param row int
///
bool k_fileplacesmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KFilePlacesModel*
/// @param column int
///
bool k_fileplacesmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KFilePlacesModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_fileplacesmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KFilePlacesModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_fileplacesmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
bool k_fileplacesmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KFilePlacesModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_fileplacesmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_fileplacesmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KFilePlacesModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_fileplacesmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_fileplacesmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self)
///
void k_fileplacesmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self)
///
void k_fileplacesmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KFilePlacesModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KFilePlacesModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_fileplacesmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KFilePlacesModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void k_fileplacesmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
///
void k_fileplacesmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KFilePlacesModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void k_fileplacesmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QPersistentModelIndex** parents)
///
void k_fileplacesmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KFilePlacesModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_fileplacesmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_fileplacesmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KFilePlacesModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void k_fileplacesmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QPersistentModelIndex** parents)
///
void k_fileplacesmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KFilePlacesModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_fileplacesmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_fileplacesmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KFilePlacesModel*
///
const char* k_fileplacesmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFilePlacesModel*
/// @param name char*
///
void k_fileplacesmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KFilePlacesModel*
///
bool k_fileplacesmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KFilePlacesModel*
///
bool k_fileplacesmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KFilePlacesModel*
///
bool k_fileplacesmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KFilePlacesModel*
///
bool k_fileplacesmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFilePlacesModel*
/// @param b bool
///
bool k_fileplacesmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KFilePlacesModel*
///
QThread* k_fileplacesmodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFilePlacesModel*
/// @param thread QThread*
///
bool k_fileplacesmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePlacesModel*
/// @param interval int
///
int32_t k_fileplacesmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFilePlacesModel*
/// @param id int
///
void k_fileplacesmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFilePlacesModel*
/// @param id enum Qt__TimerId
///
void k_fileplacesmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KFilePlacesModel*
///
libqt_list /* of QObject* */ k_fileplacesmodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KFilePlacesModel*
/// @param parent QObject*
///
void k_fileplacesmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFilePlacesModel*
/// @param filterObj QObject*
///
void k_fileplacesmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFilePlacesModel*
/// @param obj QObject*
///
void k_fileplacesmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_fileplacesmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFilePlacesModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_fileplacesmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_fileplacesmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_fileplacesmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFilePlacesModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_fileplacesmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KFilePlacesModel*
/// @param name const char*
///
QVariant* k_fileplacesmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KFilePlacesModel*
///
const char** k_fileplacesmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFilePlacesModel*
///
QBindingStorage* k_fileplacesmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFilePlacesModel*
///
const QBindingStorage* k_fileplacesmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self)
///
void k_fileplacesmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KFilePlacesModel*
/// @param classname const char*
///
bool k_fileplacesmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFilePlacesModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_fileplacesmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFilePlacesModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_fileplacesmodel_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_fileplacesmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFilePlacesModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_fileplacesmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlacesModel*
/// @param param1 QObject*
///
void k_fileplacesmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QObject* param1)
///
void k_fileplacesmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_fileplacesmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_fileplacesmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback QModelIndex* func(KFilePlacesModel* self, int row, int column, QModelIndex* idx)
///
void k_fileplacesmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QModelIndex* parent)
///
void k_fileplacesmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_fileplacesmodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_fileplacesmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_fileplacesmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_fileplacesmodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_fileplacesmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback QVariant* func(KFilePlacesModel* self, int section, enum Qt__Orientation orientation, int role)
///
void k_fileplacesmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_fileplacesmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_fileplacesmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_fileplacesmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ k_fileplacesmodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ k_fileplacesmodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback libqt_map /* of int to QVariant* */ func(KFilePlacesModel* self, QModelIndex* index)
///
void k_fileplacesmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool k_fileplacesmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool k_fileplacesmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
///
void k_fileplacesmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
bool k_fileplacesmodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
bool k_fileplacesmodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QModelIndex* index)
///
void k_fileplacesmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_fileplacesmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_fileplacesmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_fileplacesmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback int32_t func()
///
void k_fileplacesmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, int row, int count, QModelIndex* parent)
///
void k_fileplacesmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, int column, int count, QModelIndex* parent)
///
void k_fileplacesmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, int row, int count, QModelIndex* parent)
///
void k_fileplacesmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, int column, int count, QModelIndex* parent)
///
void k_fileplacesmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_fileplacesmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_fileplacesmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_fileplacesmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_fileplacesmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_fileplacesmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_fileplacesmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
///
void k_fileplacesmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
///
void k_fileplacesmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent)
///
void k_fileplacesmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
///
bool k_fileplacesmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QModelIndex* parent)
///
void k_fileplacesmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_fileplacesmodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_fileplacesmodel_qbase_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, int column, enum Qt__SortOrder order)
///
void k_fileplacesmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
QModelIndex* k_fileplacesmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
QModelIndex* k_fileplacesmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback QModelIndex* func(KFilePlacesModel* self, QModelIndex* index)
///
void k_fileplacesmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ k_fileplacesmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ k_fileplacesmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback QModelIndex** func(KFilePlacesModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_fileplacesmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
QSize* k_fileplacesmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
///
QSize* k_fileplacesmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback QSize* func(KFilePlacesModel* self, QModelIndex* index)
///
void k_fileplacesmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_fileplacesmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_fileplacesmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_fileplacesmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
bool k_fileplacesmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
bool k_fileplacesmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func()
///
void k_fileplacesmodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func()
///
void k_fileplacesmodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func()
///
void k_fileplacesmodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param event QEvent*
///
bool k_fileplacesmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param event QEvent*
///
bool k_fileplacesmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QEvent* event)
///
void k_fileplacesmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_fileplacesmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_fileplacesmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QObject* watched, QEvent* event)
///
void k_fileplacesmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param event QTimerEvent*
///
void k_fileplacesmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param event QTimerEvent*
///
void k_fileplacesmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QTimerEvent* event)
///
void k_fileplacesmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param event QChildEvent*
///
void k_fileplacesmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param event QChildEvent*
///
void k_fileplacesmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QChildEvent* event)
///
void k_fileplacesmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param event QEvent*
///
void k_fileplacesmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param event QEvent*
///
void k_fileplacesmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QEvent* event)
///
void k_fileplacesmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param signal QMetaMethod*
///
void k_fileplacesmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param signal QMetaMethod*
///
void k_fileplacesmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QMetaMethod* signal)
///
void k_fileplacesmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param signal QMetaMethod*
///
void k_fileplacesmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param signal QMetaMethod*
///
void k_fileplacesmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QMetaMethod* signal)
///
void k_fileplacesmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param column int
///
QModelIndex* k_fileplacesmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param column int
///
QModelIndex* k_fileplacesmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback QModelIndex* func(KFilePlacesModel* self, int row, int column)
///
void k_fileplacesmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void k_fileplacesmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void k_fileplacesmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex** indexes, QDataStream* stream)
///
void k_fileplacesmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_fileplacesmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_fileplacesmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_fileplacesmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_fileplacesmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_fileplacesmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func()
///
void k_fileplacesmodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_fileplacesmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_fileplacesmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func()
///
void k_fileplacesmodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_fileplacesmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_fileplacesmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_fileplacesmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func()
///
void k_fileplacesmodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_fileplacesmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_fileplacesmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func()
///
void k_fileplacesmodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_fileplacesmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_fileplacesmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func()
///
void k_fileplacesmodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_fileplacesmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_fileplacesmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_fileplacesmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func()
///
void k_fileplacesmodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func()
///
void k_fileplacesmodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func()
///
void k_fileplacesmodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_fileplacesmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_fileplacesmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* from, QModelIndex* to)
///
void k_fileplacesmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void k_fileplacesmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void k_fileplacesmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex** from, QModelIndex** to)
///
void k_fileplacesmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
libqt_list /* of QModelIndex* */ k_fileplacesmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
libqt_list /* of QModelIndex* */ k_fileplacesmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback QModelIndex** func()
///
void k_fileplacesmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
QObject* k_fileplacesmodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
QObject* k_fileplacesmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback QObject* func()
///
void k_fileplacesmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
///
int32_t k_fileplacesmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
///
int32_t k_fileplacesmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback int32_t func()
///
void k_fileplacesmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param signal const char*
///
int32_t k_fileplacesmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param signal const char*
///
int32_t k_fileplacesmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback int32_t func(KFilePlacesModel* self, const char* signal)
///
void k_fileplacesmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param signal QMetaMethod*
///
bool k_fileplacesmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param signal QMetaMethod*
///
bool k_fileplacesmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFilePlacesModel*
/// @param callback bool func(KFilePlacesModel* self, QMetaMethod* signal)
///
void k_fileplacesmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* parent, int first, int last)
///
void k_fileplacesmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self)
///
void k_fileplacesmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self)
///
void k_fileplacesmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_fileplacesmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_fileplacesmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_fileplacesmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_fileplacesmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFilePlacesModel*
/// @param callback void func(KFilePlacesModel* self, const char* objectName)
///
void k_fileplacesmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#dtor.KFilePlacesModel)
///
/// Delete this object from C++ memory.
///
/// @param self KFilePlacesModel*
///
void k_fileplacesmodel_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#public-types)

typedef enum {
    KFILEPLACESMODEL_ADDITIONALROLES_URLROLE = 110940459,
    KFILEPLACESMODEL_ADDITIONALROLES_HIDDENROLE = 121752236,
    KFILEPLACESMODEL_ADDITIONALROLES_SETUPNEEDEDROLE = 94016349,
    KFILEPLACESMODEL_ADDITIONALROLES_FIXEDDEVICEROLE = 858298049,
    KFILEPLACESMODEL_ADDITIONALROLES_CAPACITYBARRECOMMENDEDROLE = 357090756,
    KFILEPLACESMODEL_ADDITIONALROLES_GROUPROLE = 173761774,
    KFILEPLACESMODEL_ADDITIONALROLES_ICONNAMEROLE = 10771456,
    KFILEPLACESMODEL_ADDITIONALROLES_GROUPHIDDENROLE = 564443446,
    KFILEPLACESMODEL_ADDITIONALROLES_TEARDOWNALLOWEDROLE = 39007076,
    KFILEPLACESMODEL_ADDITIONALROLES_EJECTALLOWEDROLE = 169258075,
    KFILEPLACESMODEL_ADDITIONALROLES_TEARDOWNOVERLAYRECOMMENDEDROLE = 53402830,
    KFILEPLACESMODEL_ADDITIONALROLES_DEVICEACCESSIBILITYROLE = 37748115
} KFilePlacesModel__AdditionalRoles;

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#public-types)

typedef enum {
    KFILEPLACESMODEL_GROUPTYPE_PLACESTYPE = 0,
    KFILEPLACESMODEL_GROUPTYPE_REMOTETYPE = 1,
    KFILEPLACESMODEL_GROUPTYPE_RECENTLYSAVEDTYPE = 2,
    KFILEPLACESMODEL_GROUPTYPE_SEARCHFORTYPE = 3,
    KFILEPLACESMODEL_GROUPTYPE_DEVICESTYPE = 4,
    KFILEPLACESMODEL_GROUPTYPE_REMOVABLEDEVICESTYPE = 5,
    KFILEPLACESMODEL_GROUPTYPE_UNKNOWNTYPE = 6,
    KFILEPLACESMODEL_GROUPTYPE_TAGSTYPE = 7
} KFilePlacesModel__GroupType;

/// [Upstream resources](https://api.kde.org/kfileplacesmodel.html#public-types)

typedef enum {
    KFILEPLACESMODEL_DEVICEACCESSIBILITY_SETUPNEEDED = 0,
    KFILEPLACESMODEL_DEVICEACCESSIBILITY_SETUPINPROGRESS = 1,
    KFILEPLACESMODEL_DEVICEACCESSIBILITY_ACCESSIBLE = 2,
    KFILEPLACESMODEL_DEVICEACCESSIBILITY_TEARDOWNINPROGRESS = 3
} KFilePlacesModel__DeviceAccessibility;

#endif
