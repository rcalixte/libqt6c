#include "../libqabstractitemmodel.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "libqcandlestickseries.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqcandlestickmodelmapper.hpp"
#include "libqcandlestickmodelmapper.h"

/// https://doc.qt.io/qt-6/qcandlestickmodelmapper.html

/// q_candlestickmodelmapper_new constructs a new QCandlestickModelMapper object.
///
///
QCandlestickModelMapper* q_candlestickmodelmapper_new() {
    return QCandlestickModelMapper_new();
}

/// q_candlestickmodelmapper_new2 constructs a new QCandlestickModelMapper object.
///
/// ``` QObject* parent ```
QCandlestickModelMapper* q_candlestickmodelmapper_new2(void* parent) {
    return QCandlestickModelMapper_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCandlestickModelMapper* self ```
QMetaObject* q_candlestickmodelmapper_meta_object(void* self) {
    return QCandlestickModelMapper_MetaObject((QCandlestickModelMapper*)self);
}

/// ``` QCandlestickModelMapper* self, const char* param1 ```
void* q_candlestickmodelmapper_metacast(void* self, const char* param1) {
    return QCandlestickModelMapper_Metacast((QCandlestickModelMapper*)self, param1);
}

/// ``` QCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickModelMapper_Metacall((QCandlestickModelMapper*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)(QCandlestickModelMapper*, enum QMetaObject__Call, int, void*) ```
void q_candlestickmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCandlestickModelMapper_OnMetacall((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickModelMapper_QBaseMetacall((QCandlestickModelMapper*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_candlestickmodelmapper_tr(const char* s) {
    libqt_string _str = QCandlestickModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setModel)
///
/// ``` QCandlestickModelMapper* self, QAbstractItemModel* model ```
void q_candlestickmodelmapper_set_model(void* self, void* model) {
    QCandlestickModelMapper_SetModel((QCandlestickModelMapper*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#model)
///
/// ``` QCandlestickModelMapper* self ```
QAbstractItemModel* q_candlestickmodelmapper_model(void* self) {
    return QCandlestickModelMapper_Model((QCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setSeries)
///
/// ``` QCandlestickModelMapper* self, QCandlestickSeries* series ```
void q_candlestickmodelmapper_set_series(void* self, void* series) {
    QCandlestickModelMapper_SetSeries((QCandlestickModelMapper*)self, (QCandlestickSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#series)
///
/// ``` QCandlestickModelMapper* self ```
QCandlestickSeries* q_candlestickmodelmapper_series(void* self) {
    return QCandlestickModelMapper_Series((QCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#orientation)
///
/// ``` QCandlestickModelMapper* self ```
int64_t q_candlestickmodelmapper_orientation(void* self) {
    return QCandlestickModelMapper_Orientation((QCandlestickModelMapper*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int64_t (*slot)() ```
void q_candlestickmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QCandlestickModelMapper_OnOrientation((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int64_t q_candlestickmodelmapper_qbase_orientation(void* self) {
    return QCandlestickModelMapper_QBaseOrientation((QCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#modelReplaced)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_model_replaced(void* self) {
    QCandlestickModelMapper_ModelReplaced((QCandlestickModelMapper*)self);
}

/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*) ```
void q_candlestickmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QCandlestickModelMapper_Connect_ModelReplaced((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#seriesReplaced)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_series_replaced(void* self) {
    QCandlestickModelMapper_SeriesReplaced((QCandlestickModelMapper*)self);
}

/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*) ```
void q_candlestickmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QCandlestickModelMapper_Connect_SeriesReplaced((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setTimestamp)
///
/// ``` QCandlestickModelMapper* self, int timestamp ```
void q_candlestickmodelmapper_set_timestamp(void* self, int timestamp) {
    QCandlestickModelMapper_SetTimestamp((QCandlestickModelMapper*)self, timestamp);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_timestamp(void* self, void (*slot)(void*, int)) {
    QCandlestickModelMapper_OnSetTimestamp((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int timestamp ```
void q_candlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp) {
    QCandlestickModelMapper_QBaseSetTimestamp((QCandlestickModelMapper*)self, timestamp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#timestamp)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_timestamp(void* self) {
    return QCandlestickModelMapper_Timestamp((QCandlestickModelMapper*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_timestamp(void* self, int32_t (*slot)()) {
    QCandlestickModelMapper_OnTimestamp((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_timestamp(void* self) {
    return QCandlestickModelMapper_QBaseTimestamp((QCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setOpen)
///
/// ``` QCandlestickModelMapper* self, int open ```
void q_candlestickmodelmapper_set_open(void* self, int open) {
    QCandlestickModelMapper_SetOpen((QCandlestickModelMapper*)self, open);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_open(void* self, void (*slot)(void*, int)) {
    QCandlestickModelMapper_OnSetOpen((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int open ```
void q_candlestickmodelmapper_qbase_set_open(void* self, int open) {
    QCandlestickModelMapper_QBaseSetOpen((QCandlestickModelMapper*)self, open);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#open)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_open(void* self) {
    return QCandlestickModelMapper_Open((QCandlestickModelMapper*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_open(void* self, int32_t (*slot)()) {
    QCandlestickModelMapper_OnOpen((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_open(void* self) {
    return QCandlestickModelMapper_QBaseOpen((QCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setHigh)
///
/// ``` QCandlestickModelMapper* self, int high ```
void q_candlestickmodelmapper_set_high(void* self, int high) {
    QCandlestickModelMapper_SetHigh((QCandlestickModelMapper*)self, high);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_high(void* self, void (*slot)(void*, int)) {
    QCandlestickModelMapper_OnSetHigh((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int high ```
void q_candlestickmodelmapper_qbase_set_high(void* self, int high) {
    QCandlestickModelMapper_QBaseSetHigh((QCandlestickModelMapper*)self, high);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#high)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_high(void* self) {
    return QCandlestickModelMapper_High((QCandlestickModelMapper*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_high(void* self, int32_t (*slot)()) {
    QCandlestickModelMapper_OnHigh((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_high(void* self) {
    return QCandlestickModelMapper_QBaseHigh((QCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLow)
///
/// ``` QCandlestickModelMapper* self, int low ```
void q_candlestickmodelmapper_set_low(void* self, int low) {
    QCandlestickModelMapper_SetLow((QCandlestickModelMapper*)self, low);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_low(void* self, void (*slot)(void*, int)) {
    QCandlestickModelMapper_OnSetLow((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int low ```
void q_candlestickmodelmapper_qbase_set_low(void* self, int low) {
    QCandlestickModelMapper_QBaseSetLow((QCandlestickModelMapper*)self, low);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#low)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_low(void* self) {
    return QCandlestickModelMapper_Low((QCandlestickModelMapper*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_low(void* self, int32_t (*slot)()) {
    QCandlestickModelMapper_OnLow((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_low(void* self) {
    return QCandlestickModelMapper_QBaseLow((QCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setClose)
///
/// ``` QCandlestickModelMapper* self, int close ```
void q_candlestickmodelmapper_set_close(void* self, int close) {
    QCandlestickModelMapper_SetClose((QCandlestickModelMapper*)self, close);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_close(void* self, void (*slot)(void*, int)) {
    QCandlestickModelMapper_OnSetClose((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int close ```
void q_candlestickmodelmapper_qbase_set_close(void* self, int close) {
    QCandlestickModelMapper_QBaseSetClose((QCandlestickModelMapper*)self, close);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#close)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_close(void* self) {
    return QCandlestickModelMapper_Close((QCandlestickModelMapper*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_close(void* self, int32_t (*slot)()) {
    QCandlestickModelMapper_OnClose((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_close(void* self) {
    return QCandlestickModelMapper_QBaseClose((QCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setFirstSetSection)
///
/// ``` QCandlestickModelMapper* self, int firstSetSection ```
void q_candlestickmodelmapper_set_first_set_section(void* self, int firstSetSection) {
    QCandlestickModelMapper_SetFirstSetSection((QCandlestickModelMapper*)self, firstSetSection);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_first_set_section(void* self, void (*slot)(void*, int)) {
    QCandlestickModelMapper_OnSetFirstSetSection((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int firstSetSection ```
void q_candlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection) {
    QCandlestickModelMapper_QBaseSetFirstSetSection((QCandlestickModelMapper*)self, firstSetSection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#firstSetSection)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_first_set_section(void* self) {
    return QCandlestickModelMapper_FirstSetSection((QCandlestickModelMapper*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_first_set_section(void* self, int32_t (*slot)()) {
    QCandlestickModelMapper_OnFirstSetSection((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_first_set_section(void* self) {
    return QCandlestickModelMapper_QBaseFirstSetSection((QCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#setLastSetSection)
///
/// ``` QCandlestickModelMapper* self, int lastSetSection ```
void q_candlestickmodelmapper_set_last_set_section(void* self, int lastSetSection) {
    QCandlestickModelMapper_SetLastSetSection((QCandlestickModelMapper*)self, lastSetSection);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, int) ```
void q_candlestickmodelmapper_on_set_last_set_section(void* self, void (*slot)(void*, int)) {
    QCandlestickModelMapper_OnSetLastSetSection((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self, int lastSetSection ```
void q_candlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection) {
    QCandlestickModelMapper_QBaseSetLastSetSection((QCandlestickModelMapper*)self, lastSetSection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickmodelmapper.html#lastSetSection)
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_last_set_section(void* self) {
    return QCandlestickModelMapper_LastSetSection((QCandlestickModelMapper*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_last_set_section(void* self, int32_t (*slot)()) {
    QCandlestickModelMapper_OnLastSetSection((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_last_set_section(void* self) {
    return QCandlestickModelMapper_QBaseLastSetSection((QCandlestickModelMapper*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_candlestickmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QCandlestickModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_candlestickmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCandlestickModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCandlestickModelMapper* self ```
const char* q_candlestickmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCandlestickModelMapper* self, const char* name ```
void q_candlestickmodelmapper_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCandlestickModelMapper* self ```
bool q_candlestickmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCandlestickModelMapper* self ```
bool q_candlestickmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCandlestickModelMapper* self ```
bool q_candlestickmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCandlestickModelMapper* self ```
bool q_candlestickmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCandlestickModelMapper* self, bool b ```
bool q_candlestickmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCandlestickModelMapper* self ```
QThread* q_candlestickmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCandlestickModelMapper* self, QThread* thread ```
void q_candlestickmodelmapper_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickModelMapper* self, int interval ```
int32_t q_candlestickmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCandlestickModelMapper* self, int id ```
void q_candlestickmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCandlestickModelMapper* self ```
libqt_list /* of QObject* */ q_candlestickmodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCandlestickModelMapper* self, QObject* parent ```
void q_candlestickmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCandlestickModelMapper* self, QObject* filterObj ```
void q_candlestickmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCandlestickModelMapper* self, QObject* obj ```
void q_candlestickmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_candlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickModelMapper* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_candlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_candlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_candlestickmodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCandlestickModelMapper* self, const char* name, QVariant* value ```
bool q_candlestickmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCandlestickModelMapper* self, const char* name ```
QVariant* q_candlestickmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCandlestickModelMapper* self ```
const char** q_candlestickmodelmapper_dynamic_property_names(void* self) {
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
/// ``` QCandlestickModelMapper* self ```
QBindingStorage* q_candlestickmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickModelMapper* self ```
QBindingStorage* q_candlestickmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QObject*) ```
void q_candlestickmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCandlestickModelMapper* self ```
QObject* q_candlestickmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCandlestickModelMapper* self, const char* classname ```
bool q_candlestickmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickModelMapper* self, int interval, enum Qt__TimerType timerType ```
int32_t q_candlestickmodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickModelMapper* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickModelMapper* self, QObject* param1 ```
void q_candlestickmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QObject*, QObject*) ```
void q_candlestickmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QEvent* event ```
bool q_candlestickmodelmapper_event(void* self, void* event) {
    return QCandlestickModelMapper_Event((QCandlestickModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QEvent* event ```
bool q_candlestickmodelmapper_qbase_event(void* self, void* event) {
    return QCandlestickModelMapper_QBaseEvent((QCandlestickModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, bool (*slot)(QCandlestickModelMapper*, QEvent*) ```
void q_candlestickmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QCandlestickModelMapper_OnEvent((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QObject* watched, QEvent* event ```
bool q_candlestickmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QCandlestickModelMapper_EventFilter((QCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QObject* watched, QEvent* event ```
bool q_candlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QCandlestickModelMapper_QBaseEventFilter((QCandlestickModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, bool (*slot)(QCandlestickModelMapper*, QObject*, QEvent*) ```
void q_candlestickmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCandlestickModelMapper_OnEventFilter((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QTimerEvent* event ```
void q_candlestickmodelmapper_timer_event(void* self, void* event) {
    QCandlestickModelMapper_TimerEvent((QCandlestickModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QTimerEvent* event ```
void q_candlestickmodelmapper_qbase_timer_event(void* self, void* event) {
    QCandlestickModelMapper_QBaseTimerEvent((QCandlestickModelMapper*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, QTimerEvent*) ```
void q_candlestickmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickModelMapper_OnTimerEvent((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QChildEvent* event ```
void q_candlestickmodelmapper_child_event(void* self, void* event) {
    QCandlestickModelMapper_ChildEvent((QCandlestickModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QChildEvent* event ```
void q_candlestickmodelmapper_qbase_child_event(void* self, void* event) {
    QCandlestickModelMapper_QBaseChildEvent((QCandlestickModelMapper*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, QChildEvent*) ```
void q_candlestickmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickModelMapper_OnChildEvent((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QEvent* event ```
void q_candlestickmodelmapper_custom_event(void* self, void* event) {
    QCandlestickModelMapper_CustomEvent((QCandlestickModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QEvent* event ```
void q_candlestickmodelmapper_qbase_custom_event(void* self, void* event) {
    QCandlestickModelMapper_QBaseCustomEvent((QCandlestickModelMapper*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, QEvent*) ```
void q_candlestickmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickModelMapper_OnCustomEvent((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
void q_candlestickmodelmapper_connect_notify(void* self, void* signal) {
    QCandlestickModelMapper_ConnectNotify((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
void q_candlestickmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QCandlestickModelMapper_QBaseConnectNotify((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, QMetaMethod*) ```
void q_candlestickmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCandlestickModelMapper_OnConnectNotify((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
void q_candlestickmodelmapper_disconnect_notify(void* self, void* signal) {
    QCandlestickModelMapper_DisconnectNotify((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
void q_candlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QCandlestickModelMapper_QBaseDisconnectNotify((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, void (*slot)(QCandlestickModelMapper*, QMetaMethod*) ```
void q_candlestickmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCandlestickModelMapper_OnDisconnectNotify((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self ```
QObject* q_candlestickmodelmapper_sender(void* self) {
    return QCandlestickModelMapper_Sender((QCandlestickModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self ```
QObject* q_candlestickmodelmapper_qbase_sender(void* self) {
    return QCandlestickModelMapper_QBaseSender((QCandlestickModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QObject* (*slot)() ```
void q_candlestickmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QCandlestickModelMapper_OnSender((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_sender_signal_index(void* self) {
    return QCandlestickModelMapper_SenderSignalIndex((QCandlestickModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self ```
int32_t q_candlestickmodelmapper_qbase_sender_signal_index(void* self) {
    return QCandlestickModelMapper_QBaseSenderSignalIndex((QCandlestickModelMapper*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)() ```
void q_candlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCandlestickModelMapper_OnSenderSignalIndex((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, const char* signal ```
int32_t q_candlestickmodelmapper_receivers(void* self, const char* signal) {
    return QCandlestickModelMapper_Receivers((QCandlestickModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, const char* signal ```
int32_t q_candlestickmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QCandlestickModelMapper_QBaseReceivers((QCandlestickModelMapper*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, int32_t (*slot)(QCandlestickModelMapper*, const char*) ```
void q_candlestickmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCandlestickModelMapper_OnReceivers((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
bool q_candlestickmodelmapper_is_signal_connected(void* self, void* signal) {
    return QCandlestickModelMapper_IsSignalConnected((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, QMetaMethod* signal ```
bool q_candlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QCandlestickModelMapper_QBaseIsSignalConnected((QCandlestickModelMapper*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickModelMapper* self, bool (*slot)(QCandlestickModelMapper*, QMetaMethod*) ```
void q_candlestickmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCandlestickModelMapper_OnIsSignalConnected((QCandlestickModelMapper*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCandlestickModelMapper* self ```
void q_candlestickmodelmapper_delete(void* self) {
    QCandlestickModelMapper_Delete((QCandlestickModelMapper*)(self));
}