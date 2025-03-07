#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEasingCurve>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QVariantAnimation>
#include <qvariantanimation.h>
#include "libqvariantanimation.hpp"
#include "libqvariantanimation.hxx"

QVariantAnimation* QVariantAnimation_new() {
    return new VirtualQVariantAnimation();
}

QVariantAnimation* QVariantAnimation_new2(QObject* parent) {
    return new VirtualQVariantAnimation(parent);
}

QMetaObject* QVariantAnimation_MetaObject(const QVariantAnimation* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVariantAnimation_Metacast(QVariantAnimation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVariantAnimation_Metacall(QVariantAnimation* self, int param1, int param2, void** param3) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVariantAnimation_OnMetacall(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_Metacall_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVariantAnimation_QBaseMetacall(QVariantAnimation* self, int param1, int param2, void** param3) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_Metacall_IsBase(true);
        return vqvariantanimation->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVariantAnimation_Tr(const char* s) {
    QString _ret = QVariantAnimation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QVariant* QVariantAnimation_StartValue(const QVariantAnimation* self) {
    return new QVariant(self->startValue());
}

void QVariantAnimation_SetStartValue(QVariantAnimation* self, QVariant* value) {
    self->setStartValue(*value);
}

QVariant* QVariantAnimation_EndValue(const QVariantAnimation* self) {
    return new QVariant(self->endValue());
}

void QVariantAnimation_SetEndValue(QVariantAnimation* self, QVariant* value) {
    self->setEndValue(*value);
}

QVariant* QVariantAnimation_KeyValueAt(const QVariantAnimation* self, double step) {
    return new QVariant(self->keyValueAt(static_cast<qreal>(step)));
}

void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, QVariant* value) {
    self->setKeyValueAt(static_cast<qreal>(step), *value);
}

libqt_list /* of libqt_pair  tuple of double and QVariant*  */ QVariantAnimation_KeyValues(const QVariantAnimation* self) {
    QVariantAnimation::KeyValues _ret = self->keyValues();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of double and QVariant* */* _arr = static_cast<libqt_pair /* tuple of double and QVariant* */*>(malloc(sizeof(libqt_pair /* tuple of double and QVariant* */) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QPair<double, QVariant> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        double* _lv_first = static_cast<double*>(malloc(sizeof(double)));
        QVariant** _lv_second = static_cast<QVariant**>(malloc(sizeof(QVariant*)));
        *_lv_first = _lv_ret.first;
        *_lv_second = new QVariant(_lv_ret.second);
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QVariantAnimation_SetKeyValues(QVariantAnimation* self, libqt_list /* of libqt_pair  tuple of double and QVariant*  */ values) {
    QVariantAnimation::KeyValues values_QList;
    values_QList.reserve(values.len);
    libqt_pair /* tuple of double and QVariant* */* values_arr = static_cast<libqt_pair /* tuple of double and QVariant* */*>(values.data.ptr);
    for (size_t i = 0; i < values.len; ++i) {
        QPair<double, QVariant> values_arr_i_QPair;
        double* values_arr_i_first = static_cast<double*>(values_arr[i].first);
        QVariant** values_arr_i_second = static_cast<QVariant**>(values_arr[i].second);
        values_arr_i_QPair.first = *values_arr_i_first;
        values_arr_i_QPair.second = **values_arr_i_second;
        values_QList.push_back(values_arr_i_QPair);
    }
    self->setKeyValues(values_QList);
}

QVariant* QVariantAnimation_CurrentValue(const QVariantAnimation* self) {
    return new QVariant(self->currentValue());
}

void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs) {
    self->setDuration(static_cast<int>(msecs));
}

QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self) {
    return new QEasingCurve(self->easingCurve());
}

void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, QEasingCurve* easing) {
    self->setEasingCurve(*easing);
}

void QVariantAnimation_ValueChanged(QVariantAnimation* self, QVariant* value) {
    self->valueChanged(*value);
}

void QVariantAnimation_Connect_ValueChanged(QVariantAnimation* self, intptr_t slot) {
    void (*slotFunc)(QVariantAnimation*, QVariant*) = reinterpret_cast<void (*)(QVariantAnimation*, QVariant*)>(slot);
    QVariantAnimation::connect(self, &QVariantAnimation::valueChanged, [self, slotFunc](const QVariant& value) {
        const QVariant& value_ret = value;
        // Cast returned reference into pointer
        QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QVariantAnimation_Tr2(const char* s, const char* c) {
    QString _ret = QVariantAnimation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QVariantAnimation_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVariantAnimation::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QVariantAnimation_Duration(const QVariantAnimation* self) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        return vqvariantanimation->duration();
    } else {
        return vqvariantanimation->duration();
    }
}

// Base class handler implementation
int QVariantAnimation_QBaseDuration(const QVariantAnimation* self) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_Duration_IsBase(true);
        return vqvariantanimation->duration();
    } else {
        return vqvariantanimation->duration();
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnDuration(const QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_Duration_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Duration_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVariantAnimation_Event(QVariantAnimation* self, QEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        return vqvariantanimation->event(event);
    } else {
        return vqvariantanimation->event(event);
    }
}

// Base class handler implementation
bool QVariantAnimation_QBaseEvent(QVariantAnimation* self, QEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_Event_IsBase(true);
        return vqvariantanimation->event(event);
    } else {
        return vqvariantanimation->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnEvent(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_Event_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QVariantAnimation_UpdateCurrentTime(QVariantAnimation* self, int param1) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->updateCurrentTime(static_cast<int>(param1));
    } else {
        vqvariantanimation->updateCurrentTime(static_cast<int>(param1));
    }
}

// Base class handler implementation
void QVariantAnimation_QBaseUpdateCurrentTime(QVariantAnimation* self, int param1) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_UpdateCurrentTime_IsBase(true);
        vqvariantanimation->updateCurrentTime(static_cast<int>(param1));
    } else {
        vqvariantanimation->updateCurrentTime(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateCurrentTime(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_UpdateCurrentTime_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateCurrentTime_Callback>(slot));
    }
}

// Derived class handler implementation
void QVariantAnimation_UpdateState(QVariantAnimation* self, int newState, int oldState) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        vqvariantanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Base class handler implementation
void QVariantAnimation_QBaseUpdateState(QVariantAnimation* self, int newState, int oldState) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_UpdateState_IsBase(true);
        vqvariantanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else {
        vqvariantanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateState(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_UpdateState_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateState_Callback>(slot));
    }
}

// Derived class handler implementation
void QVariantAnimation_UpdateCurrentValue(QVariantAnimation* self, QVariant* value) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->updateCurrentValue(*value);
    } else {
        vqvariantanimation->updateCurrentValue(*value);
    }
}

// Base class handler implementation
void QVariantAnimation_QBaseUpdateCurrentValue(QVariantAnimation* self, QVariant* value) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_UpdateCurrentValue_IsBase(true);
        vqvariantanimation->updateCurrentValue(*value);
    } else {
        vqvariantanimation->updateCurrentValue(*value);
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateCurrentValue(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_UpdateCurrentValue_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateCurrentValue_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QVariantAnimation_Interpolated(const QVariantAnimation* self, QVariant* from, QVariant* to, double progress) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        return new QVariant(vqvariantanimation->interpolated(*from, *to, static_cast<qreal>(progress)));
    }
    return {};
}

// Base class handler implementation
QVariant* QVariantAnimation_QBaseInterpolated(const QVariantAnimation* self, QVariant* from, QVariant* to, double progress) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_Interpolated_IsBase(true);
        return new QVariant(vqvariantanimation->interpolated(*from, *to, static_cast<qreal>(progress)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnInterpolated(const QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_Interpolated_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Interpolated_Callback>(slot));
    }
}

// Derived class handler implementation
void QVariantAnimation_UpdateDirection(QVariantAnimation* self, int direction) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        vqvariantanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Base class handler implementation
void QVariantAnimation_QBaseUpdateDirection(QVariantAnimation* self, int direction) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_UpdateDirection_IsBase(true);
        vqvariantanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        vqvariantanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateDirection(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_UpdateDirection_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateDirection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVariantAnimation_EventFilter(QVariantAnimation* self, QObject* watched, QEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        return vqvariantanimation->eventFilter(watched, event);
    } else {
        return vqvariantanimation->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVariantAnimation_QBaseEventFilter(QVariantAnimation* self, QObject* watched, QEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_EventFilter_IsBase(true);
        return vqvariantanimation->eventFilter(watched, event);
    } else {
        return vqvariantanimation->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnEventFilter(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_EventFilter_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVariantAnimation_TimerEvent(QVariantAnimation* self, QTimerEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->timerEvent(event);
    } else {
        vqvariantanimation->timerEvent(event);
    }
}

// Base class handler implementation
void QVariantAnimation_QBaseTimerEvent(QVariantAnimation* self, QTimerEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_TimerEvent_IsBase(true);
        vqvariantanimation->timerEvent(event);
    } else {
        vqvariantanimation->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnTimerEvent(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_TimerEvent_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVariantAnimation_ChildEvent(QVariantAnimation* self, QChildEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->childEvent(event);
    } else {
        vqvariantanimation->childEvent(event);
    }
}

// Base class handler implementation
void QVariantAnimation_QBaseChildEvent(QVariantAnimation* self, QChildEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_ChildEvent_IsBase(true);
        vqvariantanimation->childEvent(event);
    } else {
        vqvariantanimation->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnChildEvent(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_ChildEvent_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVariantAnimation_CustomEvent(QVariantAnimation* self, QEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->customEvent(event);
    } else {
        vqvariantanimation->customEvent(event);
    }
}

// Base class handler implementation
void QVariantAnimation_QBaseCustomEvent(QVariantAnimation* self, QEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_CustomEvent_IsBase(true);
        vqvariantanimation->customEvent(event);
    } else {
        vqvariantanimation->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnCustomEvent(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_CustomEvent_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVariantAnimation_ConnectNotify(QVariantAnimation* self, QMetaMethod* signal) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->connectNotify(*signal);
    } else {
        vqvariantanimation->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVariantAnimation_QBaseConnectNotify(QVariantAnimation* self, QMetaMethod* signal) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_ConnectNotify_IsBase(true);
        vqvariantanimation->connectNotify(*signal);
    } else {
        vqvariantanimation->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnConnectNotify(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_ConnectNotify_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVariantAnimation_DisconnectNotify(QVariantAnimation* self, QMetaMethod* signal) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->disconnectNotify(*signal);
    } else {
        vqvariantanimation->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVariantAnimation_QBaseDisconnectNotify(QVariantAnimation* self, QMetaMethod* signal) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_DisconnectNotify_IsBase(true);
        vqvariantanimation->disconnectNotify(*signal);
    } else {
        vqvariantanimation->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnDisconnectNotify(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->setQVariantAnimation_DisconnectNotify_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVariantAnimation_Sender(const QVariantAnimation* self) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        return vqvariantanimation->sender();
    } else {
        return vqvariantanimation->sender();
    }
}

// Base class handler implementation
QObject* QVariantAnimation_QBaseSender(const QVariantAnimation* self) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_Sender_IsBase(true);
        return vqvariantanimation->sender();
    } else {
        return vqvariantanimation->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnSender(const QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_Sender_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVariantAnimation_SenderSignalIndex(const QVariantAnimation* self) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        return vqvariantanimation->senderSignalIndex();
    } else {
        return vqvariantanimation->senderSignalIndex();
    }
}

// Base class handler implementation
int QVariantAnimation_QBaseSenderSignalIndex(const QVariantAnimation* self) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_SenderSignalIndex_IsBase(true);
        return vqvariantanimation->senderSignalIndex();
    } else {
        return vqvariantanimation->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnSenderSignalIndex(const QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVariantAnimation_Receivers(const QVariantAnimation* self, const char* signal) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        return vqvariantanimation->receivers(signal);
    } else {
        return vqvariantanimation->receivers(signal);
    }
}

// Base class handler implementation
int QVariantAnimation_QBaseReceivers(const QVariantAnimation* self, const char* signal) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_Receivers_IsBase(true);
        return vqvariantanimation->receivers(signal);
    } else {
        return vqvariantanimation->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnReceivers(const QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_Receivers_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVariantAnimation_IsSignalConnected(const QVariantAnimation* self, QMetaMethod* signal) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        return vqvariantanimation->isSignalConnected(*signal);
    } else {
        return vqvariantanimation->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVariantAnimation_QBaseIsSignalConnected(const QVariantAnimation* self, QMetaMethod* signal) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_IsSignalConnected_IsBase(true);
        return vqvariantanimation->isSignalConnected(*signal);
    } else {
        return vqvariantanimation->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnIsSignalConnected(const QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        vqvariantanimation->setQVariantAnimation_IsSignalConnected_Callback(reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_IsSignalConnected_Callback>(slot));
    }
}

void QVariantAnimation_Delete(QVariantAnimation* self) {
    delete self;
}
