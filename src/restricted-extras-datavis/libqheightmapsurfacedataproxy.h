#pragma once
#ifndef RESTRICTED_EXTRAS_DATAVIS_LIBQHEIGHTMAPSURFACEDATAPROXY_H
#define RESTRICTED_EXTRAS_DATAVIS_LIBQHEIGHTMAPSURFACEDATAPROXY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html)

/// q_heightmapsurfacedataproxy_new constructs a new QHeightMapSurfaceDataProxy object.
///
QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html)

/// q_heightmapsurfacedataproxy_new2 constructs a new QHeightMapSurfaceDataProxy object.
///
/// @param image QImage*
///
QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new2(const void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html)

/// q_heightmapsurfacedataproxy_new3 constructs a new QHeightMapSurfaceDataProxy object.
///
/// @param filename const char*
///
QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new3(const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html)

/// q_heightmapsurfacedataproxy_new4 constructs a new QHeightMapSurfaceDataProxy object.
///
/// @param parent QObject*
///
QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new4(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html)

/// q_heightmapsurfacedataproxy_new5 constructs a new QHeightMapSurfaceDataProxy object.
///
/// @param image QImage*
/// @param parent QObject*
///
QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new5(const void* image, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html)

/// q_heightmapsurfacedataproxy_new6 constructs a new QHeightMapSurfaceDataProxy object.
///
/// @param filename const char*
/// @param parent QObject*
///
QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new6(const char* filename, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
const QMetaObject* q_heightmapsurfacedataproxy_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback const QMetaObject* func(const QHeightMapSurfaceDataProxy* self)
///
void q_heightmapsurfacedataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QHeightMapSurfaceDataProxy*
///
const QMetaObject* q_heightmapsurfacedataproxy_super_meta_object(const void* self);

/// @param self QHeightMapSurfaceDataProxy*
/// @param param1 const char*
///
void* q_heightmapsurfacedataproxy_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void* func(QHeightMapSurfaceDataProxy* self, const char* param1)
///
void q_heightmapsurfacedataproxy_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param param1 const char*
///
void* q_heightmapsurfacedataproxy_super_metacast(void* self, const char* param1);

/// @param self QHeightMapSurfaceDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_heightmapsurfacedataproxy_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback int32_t func(QHeightMapSurfaceDataProxy* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_heightmapsurfacedataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_heightmapsurfacedataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_heightmapsurfacedataproxy_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setHeightMap)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param image QImage*
///
void q_heightmapsurfacedataproxy_set_height_map(void* self, const void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMap)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
QImage* q_heightmapsurfacedataproxy_height_map(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setHeightMapFile)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param filename const char*
///
void q_heightmapsurfacedataproxy_set_height_map_file(void* self, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMapFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QHeightMapSurfaceDataProxy*
///
const char* q_heightmapsurfacedataproxy_height_map_file(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setValueRanges)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param minX float
/// @param maxX float
/// @param minZ float
/// @param maxZ float
///
void q_heightmapsurfacedataproxy_set_value_ranges(void* self, float minX, float maxX, float minZ, float maxZ);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMinXValue)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param min float
///
void q_heightmapsurfacedataproxy_set_min_x_value(void* self, float min);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minXValue)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
float q_heightmapsurfacedataproxy_min_x_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMaxXValue)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param max float
///
void q_heightmapsurfacedataproxy_set_max_x_value(void* self, float max);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxXValue)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
float q_heightmapsurfacedataproxy_max_x_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMinZValue)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param min float
///
void q_heightmapsurfacedataproxy_set_min_z_value(void* self, float min);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minZValue)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
float q_heightmapsurfacedataproxy_min_z_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMaxZValue)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param max float
///
void q_heightmapsurfacedataproxy_set_max_z_value(void* self, float max);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxZValue)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
float q_heightmapsurfacedataproxy_max_z_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMinYValue)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param min float
///
void q_heightmapsurfacedataproxy_set_min_y_value(void* self, float min);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minYValue)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
float q_heightmapsurfacedataproxy_min_y_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setMaxYValue)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param max float
///
void q_heightmapsurfacedataproxy_set_max_y_value(void* self, float max);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxYValue)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
float q_heightmapsurfacedataproxy_max_y_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#setAutoScaleY)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param enabled bool
///
void q_heightmapsurfacedataproxy_set_auto_scale_y(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#autoScaleY)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
bool q_heightmapsurfacedataproxy_auto_scale_y(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMapChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param image QImage*
///
void q_heightmapsurfacedataproxy_height_map_changed(void* self, const void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMapChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, QImage* image)
///
void q_heightmapsurfacedataproxy_on_height_map_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMapFileChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param filename const char*
///
void q_heightmapsurfacedataproxy_height_map_file_changed(void* self, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#heightMapFileChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, const char* filename)
///
void q_heightmapsurfacedataproxy_on_height_map_file_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minXValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param value float
///
void q_heightmapsurfacedataproxy_min_x_value_changed(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minXValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, float value)
///
void q_heightmapsurfacedataproxy_on_min_x_value_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxXValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param value float
///
void q_heightmapsurfacedataproxy_max_x_value_changed(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxXValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, float value)
///
void q_heightmapsurfacedataproxy_on_max_x_value_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minZValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param value float
///
void q_heightmapsurfacedataproxy_min_z_value_changed(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minZValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, float value)
///
void q_heightmapsurfacedataproxy_on_min_z_value_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxZValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param value float
///
void q_heightmapsurfacedataproxy_max_z_value_changed(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxZValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, float value)
///
void q_heightmapsurfacedataproxy_on_max_z_value_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minYValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param value float
///
void q_heightmapsurfacedataproxy_min_y_value_changed(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#minYValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, float value)
///
void q_heightmapsurfacedataproxy_on_min_y_value_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxYValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param value float
///
void q_heightmapsurfacedataproxy_max_y_value_changed(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#maxYValueChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, float value)
///
void q_heightmapsurfacedataproxy_on_max_y_value_changed(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#autoScaleYChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param enabled bool
///
void q_heightmapsurfacedataproxy_auto_scale_y_changed(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#autoScaleYChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, bool enabled)
///
void q_heightmapsurfacedataproxy_on_auto_scale_y_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_heightmapsurfacedataproxy_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_heightmapsurfacedataproxy_tr3(const char* s, const char* c, int n);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#series)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
QSurface3DSeries* q_heightmapsurfacedataproxy_series(const void* self);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCount)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
int32_t q_heightmapsurfacedataproxy_row_count(const void* self);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCount)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
int32_t q_heightmapsurfacedataproxy_column_count(const void* self);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#array)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
/// @return libqt_list of libqt_list of QSurfaceDataItem*
///
libqt_list q_heightmapsurfacedataproxy_array(const void* self);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemAt)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param rowIndex int
/// @param columnIndex int
///
const QSurfaceDataItem* q_heightmapsurfacedataproxy_item_at(const void* self, int rowIndex, int columnIndex);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemAt)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param position QPoint*
///
const QSurfaceDataItem* q_heightmapsurfacedataproxy_item_at2(const void* self, const void* position);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#resetArray)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param newArray libqt_list of libqt_list of QSurfaceDataItem*
///
void q_heightmapsurfacedataproxy_reset_array(void* self, libqt_list newArray);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setRow)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QSurfaceDataItem*
///
void q_heightmapsurfacedataproxy_set_row(void* self, int rowIndex, libqt_list row);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setRows)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QSurfaceDataItem*
///
void q_heightmapsurfacedataproxy_set_rows(void* self, int rowIndex, libqt_list rows);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setItem)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param rowIndex int
/// @param columnIndex int
/// @param item QSurfaceDataItem*
///
void q_heightmapsurfacedataproxy_set_item(void* self, int rowIndex, int columnIndex, const void* item);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#setItem)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param position QPoint*
/// @param item QSurfaceDataItem*
///
void q_heightmapsurfacedataproxy_set_item2(void* self, const void* position, const void* item);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#addRow)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param row libqt_list of QSurfaceDataItem*
///
int32_t q_heightmapsurfacedataproxy_add_row(void* self, libqt_list row);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#addRows)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param rows libqt_list of libqt_list of QSurfaceDataItem*
///
int32_t q_heightmapsurfacedataproxy_add_rows(void* self, libqt_list rows);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#insertRow)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param rowIndex int
/// @param row libqt_list of QSurfaceDataItem*
///
void q_heightmapsurfacedataproxy_insert_row(void* self, int rowIndex, libqt_list row);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#insertRows)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param rowIndex int
/// @param rows libqt_list of libqt_list of QSurfaceDataItem*
///
void q_heightmapsurfacedataproxy_insert_rows(void* self, int rowIndex, libqt_list rows);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#removeRows)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param rowIndex int
/// @param removeCount int
///
void q_heightmapsurfacedataproxy_remove_rows(void* self, int rowIndex, int removeCount);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#arrayReset)
///
/// @param self QHeightMapSurfaceDataProxy*
///
void q_heightmapsurfacedataproxy_array_reset(void* self);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#arrayReset)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self)
///
void q_heightmapsurfacedataproxy_on_array_reset(void* self, void (*callback)(void*));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsAdded)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_heightmapsurfacedataproxy_rows_added(void* self, int startIndex, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsAdded)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, int startIndex, int count)
///
void q_heightmapsurfacedataproxy_on_rows_added(void* self, void (*callback)(void*, int, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_heightmapsurfacedataproxy_rows_changed(void* self, int startIndex, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, int startIndex, int count)
///
void q_heightmapsurfacedataproxy_on_rows_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsRemoved)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_heightmapsurfacedataproxy_rows_removed(void* self, int startIndex, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsRemoved)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, int startIndex, int count)
///
void q_heightmapsurfacedataproxy_on_rows_removed(void* self, void (*callback)(void*, int, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsInserted)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param startIndex int
/// @param count int
///
void q_heightmapsurfacedataproxy_rows_inserted(void* self, int startIndex, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowsInserted)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, int startIndex, int count)
///
void q_heightmapsurfacedataproxy_on_rows_inserted(void* self, void (*callback)(void*, int, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param rowIndex int
/// @param columnIndex int
///
void q_heightmapsurfacedataproxy_item_changed(void* self, int rowIndex, int columnIndex);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#itemChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, int rowIndex, int columnIndex)
///
void q_heightmapsurfacedataproxy_on_item_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCountChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param count int
///
void q_heightmapsurfacedataproxy_row_count_changed(void* self, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#rowCountChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, int count)
///
void q_heightmapsurfacedataproxy_on_row_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCountChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param count int
///
void q_heightmapsurfacedataproxy_column_count_changed(void* self, int count);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#columnCountChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, int count)
///
void q_heightmapsurfacedataproxy_on_column_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#seriesChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param series QSurface3DSeries*
///
void q_heightmapsurfacedataproxy_series_changed(void* self, void* series);

/// Inherited from QSurfaceDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsurfacedataproxy.html#seriesChanged)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, QSurface3DSeries* series)
///
void q_heightmapsurfacedataproxy_on_series_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractDataProxy
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractdataproxy.html#type)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
/// @return enum QAbstractDataProxy__DataType
///
int32_t q_heightmapsurfacedataproxy_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QHeightMapSurfaceDataProxy*
///
const char* q_heightmapsurfacedataproxy_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param name const char*
///
void q_heightmapsurfacedataproxy_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
bool q_heightmapsurfacedataproxy_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
bool q_heightmapsurfacedataproxy_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
bool q_heightmapsurfacedataproxy_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
bool q_heightmapsurfacedataproxy_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param b bool
///
bool q_heightmapsurfacedataproxy_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
QThread* q_heightmapsurfacedataproxy_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param thread QThread*
///
bool q_heightmapsurfacedataproxy_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param interval int
///
int32_t q_heightmapsurfacedataproxy_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param time int64_t of nanoseconds
///
int32_t q_heightmapsurfacedataproxy_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param id int
///
void q_heightmapsurfacedataproxy_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param id enum Qt__TimerId
///
void q_heightmapsurfacedataproxy_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
/// @return libqt_list of QObject*
///
libqt_list q_heightmapsurfacedataproxy_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param parent QObject*
///
void q_heightmapsurfacedataproxy_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param filterObj QObject*
///
void q_heightmapsurfacedataproxy_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param obj QObject*
///
void q_heightmapsurfacedataproxy_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_heightmapsurfacedataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_heightmapsurfacedataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_heightmapsurfacedataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_heightmapsurfacedataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_heightmapsurfacedataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
bool q_heightmapsurfacedataproxy_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param receiver QObject*
///
bool q_heightmapsurfacedataproxy_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_heightmapsurfacedataproxy_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
void q_heightmapsurfacedataproxy_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
void q_heightmapsurfacedataproxy_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param name const char*
/// @param value QVariant*
///
bool q_heightmapsurfacedataproxy_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param name const char*
///
QVariant* q_heightmapsurfacedataproxy_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QHeightMapSurfaceDataProxy*
///
const char** q_heightmapsurfacedataproxy_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHeightMapSurfaceDataProxy*
///
QBindingStorage* q_heightmapsurfacedataproxy_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
const QBindingStorage* q_heightmapsurfacedataproxy_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHeightMapSurfaceDataProxy*
///
void q_heightmapsurfacedataproxy_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self)
///
void q_heightmapsurfacedataproxy_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QHeightMapSurfaceDataProxy*
///
QObject* q_heightmapsurfacedataproxy_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param classname const char*
///
bool q_heightmapsurfacedataproxy_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHeightMapSurfaceDataProxy*
///
void q_heightmapsurfacedataproxy_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_heightmapsurfacedataproxy_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_heightmapsurfacedataproxy_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_heightmapsurfacedataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_heightmapsurfacedataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_heightmapsurfacedataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param signal const char*
///
bool q_heightmapsurfacedataproxy_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_heightmapsurfacedataproxy_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_heightmapsurfacedataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param receiver QObject*
/// @param member const char*
///
bool q_heightmapsurfacedataproxy_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param param1 QObject*
///
void q_heightmapsurfacedataproxy_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, QObject* param1)
///
void q_heightmapsurfacedataproxy_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param event QEvent*
///
bool q_heightmapsurfacedataproxy_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param event QEvent*
///
bool q_heightmapsurfacedataproxy_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback bool func(QHeightMapSurfaceDataProxy* self, QEvent* event)
///
void q_heightmapsurfacedataproxy_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_heightmapsurfacedataproxy_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_heightmapsurfacedataproxy_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback bool func(QHeightMapSurfaceDataProxy* self, QObject* watched, QEvent* event)
///
void q_heightmapsurfacedataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param event QTimerEvent*
///
void q_heightmapsurfacedataproxy_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param event QTimerEvent*
///
void q_heightmapsurfacedataproxy_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, QTimerEvent* event)
///
void q_heightmapsurfacedataproxy_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param event QChildEvent*
///
void q_heightmapsurfacedataproxy_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param event QChildEvent*
///
void q_heightmapsurfacedataproxy_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, QChildEvent* event)
///
void q_heightmapsurfacedataproxy_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param event QEvent*
///
void q_heightmapsurfacedataproxy_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param event QEvent*
///
void q_heightmapsurfacedataproxy_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, QEvent* event)
///
void q_heightmapsurfacedataproxy_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_heightmapsurfacedataproxy_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_heightmapsurfacedataproxy_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, QMetaMethod* signal)
///
void q_heightmapsurfacedataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_heightmapsurfacedataproxy_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param signal QMetaMethod*
///
void q_heightmapsurfacedataproxy_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, QMetaMethod* signal)
///
void q_heightmapsurfacedataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHeightMapSurfaceDataProxy*
///
QObject* q_heightmapsurfacedataproxy_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHeightMapSurfaceDataProxy*
///
QObject* q_heightmapsurfacedataproxy_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback QObject* func(QHeightMapSurfaceDataProxy* self)
///
void q_heightmapsurfacedataproxy_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHeightMapSurfaceDataProxy*
///
int32_t q_heightmapsurfacedataproxy_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHeightMapSurfaceDataProxy*
///
int32_t q_heightmapsurfacedataproxy_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback int32_t func(QHeightMapSurfaceDataProxy* self)
///
void q_heightmapsurfacedataproxy_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param signal const char*
///
int32_t q_heightmapsurfacedataproxy_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param signal const char*
///
int32_t q_heightmapsurfacedataproxy_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback int32_t func(QHeightMapSurfaceDataProxy* self, const char* signal)
///
void q_heightmapsurfacedataproxy_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param signal QMetaMethod*
///
bool q_heightmapsurfacedataproxy_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QHeightMapSurfaceDataProxy*
/// @param signal QMetaMethod*
///
bool q_heightmapsurfacedataproxy_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback bool func(QHeightMapSurfaceDataProxy* self, QMetaMethod* signal)
///
void q_heightmapsurfacedataproxy_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHeightMapSurfaceDataProxy*
/// @param callback void func(QHeightMapSurfaceDataProxy* self, const char* objectName)
///
void q_heightmapsurfacedataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qheightmapsurfacedataproxy-qtdatavis.html#dtor.QHeightMapSurfaceDataProxy)
///
/// Delete this object from C++ memory.
///
/// @param self QHeightMapSurfaceDataProxy*
///
void q_heightmapsurfacedataproxy_delete(void* self);

#endif
