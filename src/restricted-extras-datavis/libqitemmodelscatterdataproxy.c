#include "libqabstractdataproxy.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqregularexpression.hpp"
#include "libqscatterdataproxy.hpp"
#include "libqitemmodelscatterdataproxy.hpp"
#include "libqitemmodelscatterdataproxy.h"

QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new() {
    return QItemModelScatterDataProxy_New();
}

QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new2(void* itemModel) {
    return QItemModelScatterDataProxy_New2((QAbstractItemModel*)itemModel);
}

QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new3(void* itemModel, const char* xPosRole, const char* yPosRole, const char* zPosRole) {
    return QItemModelScatterDataProxy_New3((QAbstractItemModel*)itemModel, qstring(xPosRole), qstring(yPosRole), qstring(zPosRole));
}

QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new4(void* itemModel, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rotationRole) {
    return QItemModelScatterDataProxy_New4((QAbstractItemModel*)itemModel, qstring(xPosRole), qstring(yPosRole), qstring(zPosRole), qstring(rotationRole));
}

QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new5(void* parent) {
    return QItemModelScatterDataProxy_New5((QObject*)parent);
}

QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new6(void* itemModel, void* parent) {
    return QItemModelScatterDataProxy_New6((QAbstractItemModel*)itemModel, (QObject*)parent);
}

QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new7(void* itemModel, const char* xPosRole, const char* yPosRole, const char* zPosRole, void* parent) {
    return QItemModelScatterDataProxy_New7((QAbstractItemModel*)itemModel, qstring(xPosRole), qstring(yPosRole), qstring(zPosRole), (QObject*)parent);
}

QItemModelScatterDataProxy* q_itemmodelscatterdataproxy_new8(void* itemModel, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rotationRole, void* parent) {
    return QItemModelScatterDataProxy_New8((QAbstractItemModel*)itemModel, qstring(xPosRole), qstring(yPosRole), qstring(zPosRole), qstring(rotationRole), (QObject*)parent);
}

const QMetaObject* q_itemmodelscatterdataproxy_meta_object(const void* self) {
    return QItemModelScatterDataProxy_MetaObject((QItemModelScatterDataProxy*)self);
}

void q_itemmodelscatterdataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QItemModelScatterDataProxy_OnMetaObject((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

const QMetaObject* q_itemmodelscatterdataproxy_super_meta_object(const void* self) {
    return QItemModelScatterDataProxy_SuperMetaObject((QItemModelScatterDataProxy*)self);
}

void* q_itemmodelscatterdataproxy_metacast(void* self, const char* param1) {
    return QItemModelScatterDataProxy_Metacast((QItemModelScatterDataProxy*)self, param1);
}

void q_itemmodelscatterdataproxy_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QItemModelScatterDataProxy_OnMetacast((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void* q_itemmodelscatterdataproxy_super_metacast(void* self, const char* param1) {
    return QItemModelScatterDataProxy_SuperMetacast((QItemModelScatterDataProxy*)self, param1);
}

int32_t q_itemmodelscatterdataproxy_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QItemModelScatterDataProxy_Metacall((QItemModelScatterDataProxy*)self, param1, param2, param3);
}

void q_itemmodelscatterdataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QItemModelScatterDataProxy_OnMetacall((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

int32_t q_itemmodelscatterdataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QItemModelScatterDataProxy_SuperMetacall((QItemModelScatterDataProxy*)self, param1, param2, param3);
}

const char* q_itemmodelscatterdataproxy_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelscatterdataproxy_set_item_model(void* self, void* itemModel) {
    QItemModelScatterDataProxy_SetItemModel((QItemModelScatterDataProxy*)self, (QAbstractItemModel*)itemModel);
}

QAbstractItemModel* q_itemmodelscatterdataproxy_item_model(const void* self) {
    return QItemModelScatterDataProxy_ItemModel((QItemModelScatterDataProxy*)self);
}

void q_itemmodelscatterdataproxy_set_x_pos_role(void* self, const char* role) {
    QItemModelScatterDataProxy_SetXPosRole((QItemModelScatterDataProxy*)self, qstring(role));
}

const char* q_itemmodelscatterdataproxy_x_pos_role(const void* self) {
    libqt_string _str = QItemModelScatterDataProxy_XPosRole((QItemModelScatterDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelscatterdataproxy_set_y_pos_role(void* self, const char* role) {
    QItemModelScatterDataProxy_SetYPosRole((QItemModelScatterDataProxy*)self, qstring(role));
}

const char* q_itemmodelscatterdataproxy_y_pos_role(const void* self) {
    libqt_string _str = QItemModelScatterDataProxy_YPosRole((QItemModelScatterDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelscatterdataproxy_set_z_pos_role(void* self, const char* role) {
    QItemModelScatterDataProxy_SetZPosRole((QItemModelScatterDataProxy*)self, qstring(role));
}

const char* q_itemmodelscatterdataproxy_z_pos_role(const void* self) {
    libqt_string _str = QItemModelScatterDataProxy_ZPosRole((QItemModelScatterDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelscatterdataproxy_set_rotation_role(void* self, const char* role) {
    QItemModelScatterDataProxy_SetRotationRole((QItemModelScatterDataProxy*)self, qstring(role));
}

const char* q_itemmodelscatterdataproxy_rotation_role(const void* self) {
    libqt_string _str = QItemModelScatterDataProxy_RotationRole((QItemModelScatterDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelscatterdataproxy_remap(void* self, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rotationRole) {
    QItemModelScatterDataProxy_Remap((QItemModelScatterDataProxy*)self, qstring(xPosRole), qstring(yPosRole), qstring(zPosRole), qstring(rotationRole));
}

void q_itemmodelscatterdataproxy_set_x_pos_role_pattern(void* self, const void* pattern) {
    QItemModelScatterDataProxy_SetXPosRolePattern((QItemModelScatterDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelscatterdataproxy_x_pos_role_pattern(const void* self) {
    return QItemModelScatterDataProxy_XPosRolePattern((QItemModelScatterDataProxy*)self);
}

void q_itemmodelscatterdataproxy_set_y_pos_role_pattern(void* self, const void* pattern) {
    QItemModelScatterDataProxy_SetYPosRolePattern((QItemModelScatterDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelscatterdataproxy_y_pos_role_pattern(const void* self) {
    return QItemModelScatterDataProxy_YPosRolePattern((QItemModelScatterDataProxy*)self);
}

void q_itemmodelscatterdataproxy_set_z_pos_role_pattern(void* self, const void* pattern) {
    QItemModelScatterDataProxy_SetZPosRolePattern((QItemModelScatterDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelscatterdataproxy_z_pos_role_pattern(const void* self) {
    return QItemModelScatterDataProxy_ZPosRolePattern((QItemModelScatterDataProxy*)self);
}

void q_itemmodelscatterdataproxy_set_rotation_role_pattern(void* self, const void* pattern) {
    QItemModelScatterDataProxy_SetRotationRolePattern((QItemModelScatterDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelscatterdataproxy_rotation_role_pattern(const void* self) {
    return QItemModelScatterDataProxy_RotationRolePattern((QItemModelScatterDataProxy*)self);
}

void q_itemmodelscatterdataproxy_set_x_pos_role_replace(void* self, const char* replace) {
    QItemModelScatterDataProxy_SetXPosRoleReplace((QItemModelScatterDataProxy*)self, qstring(replace));
}

const char* q_itemmodelscatterdataproxy_x_pos_role_replace(const void* self) {
    libqt_string _str = QItemModelScatterDataProxy_XPosRoleReplace((QItemModelScatterDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelscatterdataproxy_set_y_pos_role_replace(void* self, const char* replace) {
    QItemModelScatterDataProxy_SetYPosRoleReplace((QItemModelScatterDataProxy*)self, qstring(replace));
}

const char* q_itemmodelscatterdataproxy_y_pos_role_replace(const void* self) {
    libqt_string _str = QItemModelScatterDataProxy_YPosRoleReplace((QItemModelScatterDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelscatterdataproxy_set_z_pos_role_replace(void* self, const char* replace) {
    QItemModelScatterDataProxy_SetZPosRoleReplace((QItemModelScatterDataProxy*)self, qstring(replace));
}

const char* q_itemmodelscatterdataproxy_z_pos_role_replace(const void* self) {
    libqt_string _str = QItemModelScatterDataProxy_ZPosRoleReplace((QItemModelScatterDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelscatterdataproxy_set_rotation_role_replace(void* self, const char* replace) {
    QItemModelScatterDataProxy_SetRotationRoleReplace((QItemModelScatterDataProxy*)self, qstring(replace));
}

const char* q_itemmodelscatterdataproxy_rotation_role_replace(const void* self) {
    libqt_string _str = QItemModelScatterDataProxy_RotationRoleReplace((QItemModelScatterDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelscatterdataproxy_item_model_changed(void* self, const void* itemModel) {
    QItemModelScatterDataProxy_ItemModelChanged((QItemModelScatterDataProxy*)self, (QAbstractItemModel*)itemModel);
}

void q_itemmodelscatterdataproxy_on_item_model_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelScatterDataProxy_Connect_ItemModelChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_x_pos_role_changed(void* self, const char* role) {
    QItemModelScatterDataProxy_XPosRoleChanged((QItemModelScatterDataProxy*)self, qstring(role));
}

void q_itemmodelscatterdataproxy_on_x_pos_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelScatterDataProxy_Connect_XPosRoleChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_y_pos_role_changed(void* self, const char* role) {
    QItemModelScatterDataProxy_YPosRoleChanged((QItemModelScatterDataProxy*)self, qstring(role));
}

void q_itemmodelscatterdataproxy_on_y_pos_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelScatterDataProxy_Connect_YPosRoleChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_z_pos_role_changed(void* self, const char* role) {
    QItemModelScatterDataProxy_ZPosRoleChanged((QItemModelScatterDataProxy*)self, qstring(role));
}

void q_itemmodelscatterdataproxy_on_z_pos_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelScatterDataProxy_Connect_ZPosRoleChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_rotation_role_changed(void* self, const char* role) {
    QItemModelScatterDataProxy_RotationRoleChanged((QItemModelScatterDataProxy*)self, qstring(role));
}

void q_itemmodelscatterdataproxy_on_rotation_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelScatterDataProxy_Connect_RotationRoleChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_x_pos_role_pattern_changed(void* self, const void* pattern) {
    QItemModelScatterDataProxy_XPosRolePatternChanged((QItemModelScatterDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelscatterdataproxy_on_x_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelScatterDataProxy_Connect_XPosRolePatternChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_y_pos_role_pattern_changed(void* self, const void* pattern) {
    QItemModelScatterDataProxy_YPosRolePatternChanged((QItemModelScatterDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelscatterdataproxy_on_y_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelScatterDataProxy_Connect_YPosRolePatternChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_z_pos_role_pattern_changed(void* self, const void* pattern) {
    QItemModelScatterDataProxy_ZPosRolePatternChanged((QItemModelScatterDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelscatterdataproxy_on_z_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelScatterDataProxy_Connect_ZPosRolePatternChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_rotation_role_pattern_changed(void* self, const void* pattern) {
    QItemModelScatterDataProxy_RotationRolePatternChanged((QItemModelScatterDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelscatterdataproxy_on_rotation_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelScatterDataProxy_Connect_RotationRolePatternChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_rotation_role_replace_changed(void* self, const char* replace) {
    QItemModelScatterDataProxy_RotationRoleReplaceChanged((QItemModelScatterDataProxy*)self, qstring(replace));
}

void q_itemmodelscatterdataproxy_on_rotation_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelScatterDataProxy_Connect_RotationRoleReplaceChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_x_pos_role_replace_changed(void* self, const char* replace) {
    QItemModelScatterDataProxy_XPosRoleReplaceChanged((QItemModelScatterDataProxy*)self, qstring(replace));
}

void q_itemmodelscatterdataproxy_on_x_pos_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelScatterDataProxy_Connect_XPosRoleReplaceChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_y_pos_role_replace_changed(void* self, const char* replace) {
    QItemModelScatterDataProxy_YPosRoleReplaceChanged((QItemModelScatterDataProxy*)self, qstring(replace));
}

void q_itemmodelscatterdataproxy_on_y_pos_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelScatterDataProxy_Connect_YPosRoleReplaceChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_z_pos_role_replace_changed(void* self, const char* replace) {
    QItemModelScatterDataProxy_ZPosRoleReplaceChanged((QItemModelScatterDataProxy*)self, qstring(replace));
}

void q_itemmodelscatterdataproxy_on_z_pos_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelScatterDataProxy_Connect_ZPosRoleReplaceChanged((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

const char* q_itemmodelscatterdataproxy_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_itemmodelscatterdataproxy_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QScatter3DSeries* q_itemmodelscatterdataproxy_series(const void* self) {
    return QScatterDataProxy_Series((QScatterDataProxy*)self);
}

int32_t q_itemmodelscatterdataproxy_item_count(const void* self) {
    return QScatterDataProxy_ItemCount((QScatterDataProxy*)self);
}

libqt_list /* of QScatterDataItem* */ q_itemmodelscatterdataproxy_array(const void* self) {
    libqt_list _arr = QScatterDataProxy_Array((QScatterDataProxy*)self);
    return _arr;
}

const QScatterDataItem* q_itemmodelscatterdataproxy_item_at(const void* self, int index) {
    return QScatterDataProxy_ItemAt((QScatterDataProxy*)self, index);
}

void q_itemmodelscatterdataproxy_reset_array(void* self, libqt_list /* of QScatterDataItem* */ newArray) {
    QScatterDataProxy_ResetArray((QScatterDataProxy*)self, newArray);
}

void q_itemmodelscatterdataproxy_set_item(void* self, int index, const void* item) {
    QScatterDataProxy_SetItem((QScatterDataProxy*)self, index, (QScatterDataItem*)item);
}

void q_itemmodelscatterdataproxy_set_items(void* self, int index, libqt_list /* of QScatterDataItem* */ items) {
    QScatterDataProxy_SetItems((QScatterDataProxy*)self, index, items);
}

int32_t q_itemmodelscatterdataproxy_add_item(void* self, const void* item) {
    return QScatterDataProxy_AddItem((QScatterDataProxy*)self, (QScatterDataItem*)item);
}

int32_t q_itemmodelscatterdataproxy_add_items(void* self, libqt_list /* of QScatterDataItem* */ items) {
    return QScatterDataProxy_AddItems((QScatterDataProxy*)self, items);
}

void q_itemmodelscatterdataproxy_insert_item(void* self, int index, const void* item) {
    QScatterDataProxy_InsertItem((QScatterDataProxy*)self, index, (QScatterDataItem*)item);
}

void q_itemmodelscatterdataproxy_insert_items(void* self, int index, libqt_list /* of QScatterDataItem* */ items) {
    QScatterDataProxy_InsertItems((QScatterDataProxy*)self, index, items);
}

void q_itemmodelscatterdataproxy_remove_items(void* self, int index, int removeCount) {
    QScatterDataProxy_RemoveItems((QScatterDataProxy*)self, index, removeCount);
}

void q_itemmodelscatterdataproxy_array_reset(void* self) {
    QScatterDataProxy_ArrayReset((QScatterDataProxy*)self);
}

void q_itemmodelscatterdataproxy_on_array_reset(void* self, void (*callback)(void*)) {
    QScatterDataProxy_Connect_ArrayReset((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_items_added(void* self, int startIndex, int count) {
    QScatterDataProxy_ItemsAdded((QScatterDataProxy*)self, startIndex, count);
}

void q_itemmodelscatterdataproxy_on_items_added(void* self, void (*callback)(void*, int, int)) {
    QScatterDataProxy_Connect_ItemsAdded((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_items_changed(void* self, int startIndex, int count) {
    QScatterDataProxy_ItemsChanged((QScatterDataProxy*)self, startIndex, count);
}

void q_itemmodelscatterdataproxy_on_items_changed(void* self, void (*callback)(void*, int, int)) {
    QScatterDataProxy_Connect_ItemsChanged((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_items_removed(void* self, int startIndex, int count) {
    QScatterDataProxy_ItemsRemoved((QScatterDataProxy*)self, startIndex, count);
}

void q_itemmodelscatterdataproxy_on_items_removed(void* self, void (*callback)(void*, int, int)) {
    QScatterDataProxy_Connect_ItemsRemoved((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_items_inserted(void* self, int startIndex, int count) {
    QScatterDataProxy_ItemsInserted((QScatterDataProxy*)self, startIndex, count);
}

void q_itemmodelscatterdataproxy_on_items_inserted(void* self, void (*callback)(void*, int, int)) {
    QScatterDataProxy_Connect_ItemsInserted((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_item_count_changed(void* self, int count) {
    QScatterDataProxy_ItemCountChanged((QScatterDataProxy*)self, count);
}

void q_itemmodelscatterdataproxy_on_item_count_changed(void* self, void (*callback)(void*, int)) {
    QScatterDataProxy_Connect_ItemCountChanged((QScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_series_changed(void* self, void* series) {
    QScatterDataProxy_SeriesChanged((QScatterDataProxy*)self, (QScatter3DSeries*)series);
}

void q_itemmodelscatterdataproxy_on_series_changed(void* self, void (*callback)(void*, void*)) {
    QScatterDataProxy_Connect_SeriesChanged((QScatterDataProxy*)self, (intptr_t)callback);
}

int32_t q_itemmodelscatterdataproxy_type(const void* self) {
    return QAbstractDataProxy_Type((QAbstractDataProxy*)self);
}

const char* q_itemmodelscatterdataproxy_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelscatterdataproxy_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_itemmodelscatterdataproxy_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_itemmodelscatterdataproxy_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_itemmodelscatterdataproxy_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_itemmodelscatterdataproxy_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_itemmodelscatterdataproxy_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_itemmodelscatterdataproxy_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_itemmodelscatterdataproxy_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_itemmodelscatterdataproxy_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_itemmodelscatterdataproxy_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_itemmodelscatterdataproxy_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_itemmodelscatterdataproxy_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_itemmodelscatterdataproxy_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_itemmodelscatterdataproxy_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_itemmodelscatterdataproxy_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_itemmodelscatterdataproxy_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_itemmodelscatterdataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_itemmodelscatterdataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_itemmodelscatterdataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_itemmodelscatterdataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_itemmodelscatterdataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_itemmodelscatterdataproxy_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_itemmodelscatterdataproxy_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_itemmodelscatterdataproxy_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_itemmodelscatterdataproxy_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_itemmodelscatterdataproxy_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_itemmodelscatterdataproxy_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_itemmodelscatterdataproxy_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_itemmodelscatterdataproxy_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelscatterdataproxy_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_itemmodelscatterdataproxy_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_itemmodelscatterdataproxy_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_itemmodelscatterdataproxy_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_itemmodelscatterdataproxy_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_itemmodelscatterdataproxy_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_itemmodelscatterdataproxy_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_itemmodelscatterdataproxy_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_itemmodelscatterdataproxy_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_itemmodelscatterdataproxy_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_itemmodelscatterdataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_itemmodelscatterdataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_itemmodelscatterdataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_itemmodelscatterdataproxy_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_itemmodelscatterdataproxy_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_itemmodelscatterdataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_itemmodelscatterdataproxy_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_itemmodelscatterdataproxy_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_itemmodelscatterdataproxy_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_itemmodelscatterdataproxy_event(void* self, void* event) {
    return QItemModelScatterDataProxy_Event((QItemModelScatterDataProxy*)self, (QEvent*)event);
}

bool q_itemmodelscatterdataproxy_super_event(void* self, void* event) {
    return QItemModelScatterDataProxy_SuperEvent((QItemModelScatterDataProxy*)self, (QEvent*)event);
}

void q_itemmodelscatterdataproxy_on_event(void* self, bool (*callback)(void*, void*)) {
    QItemModelScatterDataProxy_OnEvent((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

bool q_itemmodelscatterdataproxy_event_filter(void* self, void* watched, void* event) {
    return QItemModelScatterDataProxy_EventFilter((QItemModelScatterDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

bool q_itemmodelscatterdataproxy_super_event_filter(void* self, void* watched, void* event) {
    return QItemModelScatterDataProxy_SuperEventFilter((QItemModelScatterDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

void q_itemmodelscatterdataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QItemModelScatterDataProxy_OnEventFilter((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_timer_event(void* self, void* event) {
    QItemModelScatterDataProxy_TimerEvent((QItemModelScatterDataProxy*)self, (QTimerEvent*)event);
}

void q_itemmodelscatterdataproxy_super_timer_event(void* self, void* event) {
    QItemModelScatterDataProxy_SuperTimerEvent((QItemModelScatterDataProxy*)self, (QTimerEvent*)event);
}

void q_itemmodelscatterdataproxy_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QItemModelScatterDataProxy_OnTimerEvent((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_child_event(void* self, void* event) {
    QItemModelScatterDataProxy_ChildEvent((QItemModelScatterDataProxy*)self, (QChildEvent*)event);
}

void q_itemmodelscatterdataproxy_super_child_event(void* self, void* event) {
    QItemModelScatterDataProxy_SuperChildEvent((QItemModelScatterDataProxy*)self, (QChildEvent*)event);
}

void q_itemmodelscatterdataproxy_on_child_event(void* self, void (*callback)(void*, void*)) {
    QItemModelScatterDataProxy_OnChildEvent((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_custom_event(void* self, void* event) {
    QItemModelScatterDataProxy_CustomEvent((QItemModelScatterDataProxy*)self, (QEvent*)event);
}

void q_itemmodelscatterdataproxy_super_custom_event(void* self, void* event) {
    QItemModelScatterDataProxy_SuperCustomEvent((QItemModelScatterDataProxy*)self, (QEvent*)event);
}

void q_itemmodelscatterdataproxy_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QItemModelScatterDataProxy_OnCustomEvent((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_connect_notify(void* self, const void* signal) {
    QItemModelScatterDataProxy_ConnectNotify((QItemModelScatterDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelscatterdataproxy_super_connect_notify(void* self, const void* signal) {
    QItemModelScatterDataProxy_SuperConnectNotify((QItemModelScatterDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelscatterdataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QItemModelScatterDataProxy_OnConnectNotify((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_disconnect_notify(void* self, const void* signal) {
    QItemModelScatterDataProxy_DisconnectNotify((QItemModelScatterDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelscatterdataproxy_super_disconnect_notify(void* self, const void* signal) {
    QItemModelScatterDataProxy_SuperDisconnectNotify((QItemModelScatterDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelscatterdataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QItemModelScatterDataProxy_OnDisconnectNotify((QItemModelScatterDataProxy*)self, (intptr_t)callback);
}

QObject* q_itemmodelscatterdataproxy_sender(const void* self) {
    return QItemModelScatterDataProxy_Sender((QItemModelScatterDataProxy*)self);
}

int32_t q_itemmodelscatterdataproxy_sender_signal_index(const void* self) {
    return QItemModelScatterDataProxy_SenderSignalIndex((QItemModelScatterDataProxy*)self);
}

int32_t q_itemmodelscatterdataproxy_receivers(const void* self, const char* signal) {
    return QItemModelScatterDataProxy_Receivers((QItemModelScatterDataProxy*)self, signal);
}

bool q_itemmodelscatterdataproxy_is_signal_connected(const void* self, const void* signal) {
    return QItemModelScatterDataProxy_IsSignalConnected((QItemModelScatterDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelscatterdataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_itemmodelscatterdataproxy_delete(void* self) {
    QItemModelScatterDataProxy_Delete((QItemModelScatterDataProxy*)(self));
}
