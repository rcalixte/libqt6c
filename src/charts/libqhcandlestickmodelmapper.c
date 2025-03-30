#include "../libqabstractitemmodel.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "libqcandlestickmodelmapper.hpp"
#include "libqcandlestickseries.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqhcandlestickmodelmapper.hpp"
#include "libqhcandlestickmodelmapper.h"

/// https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html

/// q_hcandlestickmodelmapper_new constructs a new QHCandlestickModelMapper object.
///
///
QHCandlestickModelMapper* q_hcandlestickmodelmapper_new() {
    return QHCandlestickModelMapper_new();
}

/// q_hcandlestickmodelmapper_new2 constructs a new QHCandlestickModelMapper object.
///
/// ``` QObject* parent ```
QHCandlestickModelMapper* q_hcandlestickmodelmapper_new2(void* parent) {
    return QHCandlestickModelMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHCandlestickModelMapper* self ```
QMetaObject* q_hcandlestickmodelmapper_meta_object(void* self) {
    return QHCandlestickModelMapper_MetaObject((QHCandlestickModelMapper*)self);
}

/// ``` QHCandlestickModelMapper* self, const char* param1 ```
void* q_hcandlestickmodelmapper_metacast(void* self, const char* param1) {
    return QHCandlestickModelMapper_Metacast((QHCandlestickModelMapper*)self, param1);
}

/// ``` QHCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hcandlestickmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHCandlestickModelMapper_Metacall((QHCandlestickModelMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)(QHCandlestickModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_hcandlestickmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHCandlestickModelMapper_OnMetacall((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_hcandlestickmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHCandlestickModelMapper_QBaseMetacall((QHCandlestickModelMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_hcandlestickmodelmapper_tr(const char* s) {
    libqt_string _str = QHCandlestickModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#orientation)
///
/// ``` QHCandlestickModelMapper* self ```
int64_t q_hcandlestickmodelmapper_orientation(void* self) {
    return QHCandlestickModelMapper_Orientation((QHCandlestickModelMapper*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHCandlestickModelMapper* self, int64_t (*slot)() ```
void q_hcandlestickmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QHCandlestickModelMapper_OnOrientation((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHCandlestickModelMapper* self ```
int64_t q_hcandlestickmodelmapper_qbase_orientation(void* self) {
    return QHCandlestickModelMapper_QBaseOrientation((QHCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setTimestampColumn)
///
/// ``` QHCandlestickModelMapper* self, int timestampColumn ```
void q_hcandlestickmodelmapper_set_timestamp_column(void* self, int timestampColumn) {
    QHCandlestickModelMapper_SetTimestampColumn((QHCandlestickModelMapper*)self, timestampColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#timestampColumn)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_timestamp_column(void* self) {
    return QHCandlestickModelMapper_TimestampColumn((QHCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setOpenColumn)
///
/// ``` QHCandlestickModelMapper* self, int openColumn ```
void q_hcandlestickmodelmapper_set_open_column(void* self, int openColumn) {
    QHCandlestickModelMapper_SetOpenColumn((QHCandlestickModelMapper*)self, openColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#openColumn)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_open_column(void* self) {
    return QHCandlestickModelMapper_OpenColumn((QHCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setHighColumn)
///
/// ``` QHCandlestickModelMapper* self, int highColumn ```
void q_hcandlestickmodelmapper_set_high_column(void* self, int highColumn) {
    QHCandlestickModelMapper_SetHighColumn((QHCandlestickModelMapper*)self, highColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#highColumn)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_high_column(void* self) {
    return QHCandlestickModelMapper_HighColumn((QHCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setLowColumn)
///
/// ``` QHCandlestickModelMapper* self, int lowColumn ```
void q_hcandlestickmodelmapper_set_low_column(void* self, int lowColumn) {
    QHCandlestickModelMapper_SetLowColumn((QHCandlestickModelMapper*)self, lowColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#lowColumn)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_low_column(void* self) {
    return QHCandlestickModelMapper_LowColumn((QHCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setCloseColumn)
///
/// ``` QHCandlestickModelMapper* self, int closeColumn ```
void q_hcandlestickmodelmapper_set_close_column(void* self, int closeColumn) {
    QHCandlestickModelMapper_SetCloseColumn((QHCandlestickModelMapper*)self, closeColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#closeColumn)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_close_column(void* self) {
    return QHCandlestickModelMapper_CloseColumn((QHCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setFirstSetRow)
///
/// ``` QHCandlestickModelMapper* self, int firstSetRow ```
void q_hcandlestickmodelmapper_set_first_set_row(void* self, int firstSetRow) {
    QHCandlestickModelMapper_SetFirstSetRow((QHCandlestickModelMapper*)self, firstSetRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#firstSetRow)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_first_set_row(void* self) {
    return QHCandlestickModelMapper_FirstSetRow((QHCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#setLastSetRow)
///
/// ``` QHCandlestickModelMapper* self, int lastSetRow ```
void q_hcandlestickmodelmapper_set_last_set_row(void* self, int lastSetRow) {
    QHCandlestickModelMapper_SetLastSetRow((QHCandlestickModelMapper*)self, lastSetRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#lastSetRow)
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_last_set_row(void* self) {
    return QHCandlestickModelMapper_LastSetRow((QHCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#timestampColumnChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_timestamp_column_changed(void* self) {
    QHCandlestickModelMapper_TimestampColumnChanged((QHCandlestickModelMapper*)self);
}

/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_timestamp_column_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_TimestampColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#openColumnChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_open_column_changed(void* self) {
    QHCandlestickModelMapper_OpenColumnChanged((QHCandlestickModelMapper*)self);
}

/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_open_column_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_OpenColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#highColumnChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_high_column_changed(void* self) {
    QHCandlestickModelMapper_HighColumnChanged((QHCandlestickModelMapper*)self);
}

/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_high_column_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_HighColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#lowColumnChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_low_column_changed(void* self) {
    QHCandlestickModelMapper_LowColumnChanged((QHCandlestickModelMapper*)self);
}

/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_low_column_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_LowColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#closeColumnChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_close_column_changed(void* self) {
    QHCandlestickModelMapper_CloseColumnChanged((QHCandlestickModelMapper*)self);
}

/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_close_column_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_CloseColumnChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#firstSetRowChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_first_set_row_changed(void* self) {
    QHCandlestickModelMapper_FirstSetRowChanged((QHCandlestickModelMapper*)self);
}

/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_first_set_row_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_FirstSetRowChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhcandlestickmodelmapper.html#lastSetRowChanged)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_last_set_row_changed(void* self) {
    QHCandlestickModelMapper_LastSetRowChanged((QHCandlestickModelMapper*)self);
}

/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_last_set_row_changed(void* self, void (*slot)(void*)) {
    QHCandlestickModelMapper_Connect_LastSetRowChanged((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_hcandlestickmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QHCandlestickModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_hcandlestickmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHCandlestickModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
///
/// ``` QHCandlestickModelMapper* self, QAbstractItemModel* model ```
void q_hcandlestickmodelmapper_set_model(void* self, void* model) {
    QCandlestickModelMapper_SetModel((QCandlestickModelMapper*)self, (QAbstractItemModel*)model);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
///
/// ``` QHCandlestickModelMapper* self ```
QAbstractItemModel* q_hcandlestickmodelmapper_model(void* self) {
    return QCandlestickModelMapper_Model((QCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
///
/// ``` QHCandlestickModelMapper* self, QCandlestickSeries* series ```
void q_hcandlestickmodelmapper_set_series(void* self, void* series) {
    QCandlestickModelMapper_SetSeries((QCandlestickModelMapper*)self, (QCandlestickSeries*)series);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
///
/// ``` QHCandlestickModelMapper* self ```
QCandlestickSeries* q_hcandlestickmodelmapper_series(void* self) {
    return QCandlestickModelMapper_Series((QCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_model_replaced(void* self) {
    QCandlestickModelMapper_ModelReplaced((QCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QCandlestickModelMapper_Connect_ModelReplaced((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_series_replaced(void* self) {
    QCandlestickModelMapper_SeriesReplaced((QCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*) ```
void q_hcandlestickmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QCandlestickModelMapper_Connect_SeriesReplaced((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHCandlestickModelMapper* self ```
const char* q_hcandlestickmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHCandlestickModelMapper* self, const char* name ```
void q_hcandlestickmodelmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHCandlestickModelMapper* self ```
bool q_hcandlestickmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHCandlestickModelMapper* self ```
bool q_hcandlestickmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHCandlestickModelMapper* self ```
bool q_hcandlestickmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHCandlestickModelMapper* self ```
bool q_hcandlestickmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHCandlestickModelMapper* self, bool b ```
bool q_hcandlestickmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHCandlestickModelMapper* self ```
QThread* q_hcandlestickmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHCandlestickModelMapper* self, QThread* thread ```
void q_hcandlestickmodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHCandlestickModelMapper* self, int interval ```
int32_t q_hcandlestickmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHCandlestickModelMapper* self, int id ```
void q_hcandlestickmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHCandlestickModelMapper* self ```
libqt_list /* of QObject* */ q_hcandlestickmodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHCandlestickModelMapper* self, QObject* parent ```
void q_hcandlestickmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHCandlestickModelMapper* self, QObject* filterObj ```
void q_hcandlestickmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHCandlestickModelMapper* self, QObject* obj ```
void q_hcandlestickmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_hcandlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHCandlestickModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_hcandlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_hcandlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_hcandlestickmodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHCandlestickModelMapper* self, const char* name, QVariant* value ```
bool q_hcandlestickmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHCandlestickModelMapper* self, const char* name ```
QVariant* q_hcandlestickmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHCandlestickModelMapper* self ```
const char** q_hcandlestickmodelmapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHCandlestickModelMapper* self ```
QBindingStorage* q_hcandlestickmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHCandlestickModelMapper* self ```
QBindingStorage* q_hcandlestickmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QObject*) ```
void q_hcandlestickmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHCandlestickModelMapper* self ```
QObject* q_hcandlestickmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHCandlestickModelMapper* self, const char* classname ```
bool q_hcandlestickmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHCandlestickModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_hcandlestickmodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hcandlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHCandlestickModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_hcandlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHCandlestickModelMapper* self, QObject* param1 ```
void q_hcandlestickmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_hcandlestickmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QEvent* event ```
bool q_hcandlestickmodelmapper_event(void* self, void* event) {
    return QHCandlestickModelMapper_Event((QHCandlestickModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QEvent* event ```
bool q_hcandlestickmodelmapper_qbase_event(void* self, void* event) {
    return QHCandlestickModelMapper_QBaseEvent((QHCandlestickModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, bool (*slot)(QHCandlestickModelMapper*, QEvent*) ```
void q_hcandlestickmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnEvent((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QObject* watched, QEvent* event ```
bool q_hcandlestickmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHCandlestickModelMapper_EventFilter((QHCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QObject* watched, QEvent* event ```
bool q_hcandlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QHCandlestickModelMapper_QBaseEventFilter((QHCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, bool (*slot)(QHCandlestickModelMapper*, QObject*, QEvent*) ```
void q_hcandlestickmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHCandlestickModelMapper_OnEventFilter((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QTimerEvent* event ```
void q_hcandlestickmodelmapper_timer_event(void* self, void* event) {
    QHCandlestickModelMapper_TimerEvent((QHCandlestickModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QTimerEvent* event ```
void q_hcandlestickmodelmapper_qbase_timer_event(void* self, void* event) {
    QHCandlestickModelMapper_QBaseTimerEvent((QHCandlestickModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, QTimerEvent*) ```
void q_hcandlestickmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnTimerEvent((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QChildEvent* event ```
void q_hcandlestickmodelmapper_child_event(void* self, void* event) {
    QHCandlestickModelMapper_ChildEvent((QHCandlestickModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QChildEvent* event ```
void q_hcandlestickmodelmapper_qbase_child_event(void* self, void* event) {
    QHCandlestickModelMapper_QBaseChildEvent((QHCandlestickModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, QChildEvent*) ```
void q_hcandlestickmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnChildEvent((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QEvent* event ```
void q_hcandlestickmodelmapper_custom_event(void* self, void* event) {
    QHCandlestickModelMapper_CustomEvent((QHCandlestickModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QEvent* event ```
void q_hcandlestickmodelmapper_qbase_custom_event(void* self, void* event) {
    QHCandlestickModelMapper_QBaseCustomEvent((QHCandlestickModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, QEvent*) ```
void q_hcandlestickmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnCustomEvent((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
void q_hcandlestickmodelmapper_connect_notify(void* self, void* signal) {
    QHCandlestickModelMapper_ConnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
void q_hcandlestickmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QHCandlestickModelMapper_QBaseConnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, QMetaMethod*) ```
void q_hcandlestickmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnConnectNotify((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
void q_hcandlestickmodelmapper_disconnect_notify(void* self, void* signal) {
    QHCandlestickModelMapper_DisconnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
void q_hcandlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QHCandlestickModelMapper_QBaseDisconnectNotify((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, QMetaMethod*) ```
void q_hcandlestickmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnDisconnectNotify((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int timestamp ```
void q_hcandlestickmodelmapper_set_timestamp(void* self, int timestamp) {
    QHCandlestickModelMapper_SetTimestamp((QHCandlestickModelMapper*)self, timestamp);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int timestamp ```
void q_hcandlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp) {
    QHCandlestickModelMapper_QBaseSetTimestamp((QHCandlestickModelMapper*)self, timestamp);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_timestamp(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetTimestamp((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_timestamp(void* self) {
    return QHCandlestickModelMapper_Timestamp((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_timestamp(void* self) {
    return QHCandlestickModelMapper_QBaseTimestamp((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_timestamp(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnTimestamp((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int open ```
void q_hcandlestickmodelmapper_set_open(void* self, int open) {
    QHCandlestickModelMapper_SetOpen((QHCandlestickModelMapper*)self, open);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int open ```
void q_hcandlestickmodelmapper_qbase_set_open(void* self, int open) {
    QHCandlestickModelMapper_QBaseSetOpen((QHCandlestickModelMapper*)self, open);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_open(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetOpen((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_open(void* self) {
    return QHCandlestickModelMapper_Open((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_open(void* self) {
    return QHCandlestickModelMapper_QBaseOpen((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_open(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnOpen((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int high ```
void q_hcandlestickmodelmapper_set_high(void* self, int high) {
    QHCandlestickModelMapper_SetHigh((QHCandlestickModelMapper*)self, high);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int high ```
void q_hcandlestickmodelmapper_qbase_set_high(void* self, int high) {
    QHCandlestickModelMapper_QBaseSetHigh((QHCandlestickModelMapper*)self, high);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_high(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetHigh((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_high(void* self) {
    return QHCandlestickModelMapper_High((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_high(void* self) {
    return QHCandlestickModelMapper_QBaseHigh((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_high(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnHigh((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int low ```
void q_hcandlestickmodelmapper_set_low(void* self, int low) {
    QHCandlestickModelMapper_SetLow((QHCandlestickModelMapper*)self, low);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int low ```
void q_hcandlestickmodelmapper_qbase_set_low(void* self, int low) {
    QHCandlestickModelMapper_QBaseSetLow((QHCandlestickModelMapper*)self, low);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_low(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetLow((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_low(void* self) {
    return QHCandlestickModelMapper_Low((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_low(void* self) {
    return QHCandlestickModelMapper_QBaseLow((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_low(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnLow((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int close ```
void q_hcandlestickmodelmapper_set_close(void* self, int close) {
    QHCandlestickModelMapper_SetClose((QHCandlestickModelMapper*)self, close);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int close ```
void q_hcandlestickmodelmapper_qbase_set_close(void* self, int close) {
    QHCandlestickModelMapper_QBaseSetClose((QHCandlestickModelMapper*)self, close);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_close(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetClose((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_close(void* self) {
    return QHCandlestickModelMapper_Close((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_close(void* self) {
    return QHCandlestickModelMapper_QBaseClose((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_close(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnClose((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int firstSetSection ```
void q_hcandlestickmodelmapper_set_first_set_section(void* self, int firstSetSection) {
    QHCandlestickModelMapper_SetFirstSetSection((QHCandlestickModelMapper*)self, firstSetSection);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int firstSetSection ```
void q_hcandlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection) {
    QHCandlestickModelMapper_QBaseSetFirstSetSection((QHCandlestickModelMapper*)self, firstSetSection);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_first_set_section(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetFirstSetSection((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_first_set_section(void* self) {
    return QHCandlestickModelMapper_FirstSetSection((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_first_set_section(void* self) {
    return QHCandlestickModelMapper_QBaseFirstSetSection((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_first_set_section(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnFirstSetSection((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int lastSetSection ```
void q_hcandlestickmodelmapper_set_last_set_section(void* self, int lastSetSection) {
    QHCandlestickModelMapper_SetLastSetSection((QHCandlestickModelMapper*)self, lastSetSection);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int lastSetSection ```
void q_hcandlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection) {
    QHCandlestickModelMapper_QBaseSetLastSetSection((QHCandlestickModelMapper*)self, lastSetSection);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, void (*slot)(QHCandlestickModelMapper*, int) ```
void q_hcandlestickmodelmapper_on_set_last_set_section(void* self, void (*slot)(void*, int)) {
    QHCandlestickModelMapper_OnSetLastSetSection((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QCandlestickModelMapper
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_last_set_section(void* self) {
    return QHCandlestickModelMapper_LastSetSection((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_last_set_section(void* self) {
    return QHCandlestickModelMapper_QBaseLastSetSection((QHCandlestickModelMapper*)self);
}

/// Inherited from QCandlestickModelMapper
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_last_set_section(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnLastSetSection((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
QObject* q_hcandlestickmodelmapper_sender(void* self) {
    return QHCandlestickModelMapper_Sender((QHCandlestickModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
QObject* q_hcandlestickmodelmapper_qbase_sender(void* self) {
    return QHCandlestickModelMapper_QBaseSender((QHCandlestickModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QObject* (*slot)() ```
void q_hcandlestickmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QHCandlestickModelMapper_OnSender((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_sender_signal_index(void* self) {
    return QHCandlestickModelMapper_SenderSignalIndex((QHCandlestickModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self ```
int32_t q_hcandlestickmodelmapper_qbase_sender_signal_index(void* self) {
    return QHCandlestickModelMapper_QBaseSenderSignalIndex((QHCandlestickModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)() ```
void q_hcandlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHCandlestickModelMapper_OnSenderSignalIndex((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, const char* signal ```
int32_t q_hcandlestickmodelmapper_receivers(void* self, const char* signal) {
    return QHCandlestickModelMapper_Receivers((QHCandlestickModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, const char* signal ```
int32_t q_hcandlestickmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QHCandlestickModelMapper_QBaseReceivers((QHCandlestickModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, int32_t (*slot)(QHCandlestickModelMapper*, const char*) ```
void q_hcandlestickmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHCandlestickModelMapper_OnReceivers((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
bool q_hcandlestickmodelmapper_is_signal_connected(void* self, void* signal) {
    return QHCandlestickModelMapper_IsSignalConnected((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, QMetaMethod* signal ```
bool q_hcandlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QHCandlestickModelMapper_QBaseIsSignalConnected((QHCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHCandlestickModelMapper* self, bool (*slot)(QHCandlestickModelMapper*, QMetaMethod*) ```
void q_hcandlestickmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHCandlestickModelMapper_OnIsSignalConnected((QHCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHCandlestickModelMapper* self ```
void q_hcandlestickmodelmapper_delete(void* self) {
    QHCandlestickModelMapper_Delete((QHCandlestickModelMapper*)(self));
}