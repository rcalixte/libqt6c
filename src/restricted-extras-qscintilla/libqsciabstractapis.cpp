#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qsciabstractapis.h>
#include "libqsciabstractapis.hpp"
#include "libqsciabstractapis.hxx"

QsciAbstractAPIs* QsciAbstractAPIs_new(QsciLexer* lexer) {
    return new VirtualQsciAbstractAPIs(lexer);
}

QMetaObject* QsciAbstractAPIs_MetaObject(const QsciAbstractAPIs* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciAbstractAPIs_Metacast(QsciAbstractAPIs* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciAbstractAPIs_Metacall(QsciAbstractAPIs* self, int param1, int param2, void** param3) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciAbstractAPIs_OnMetacall(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_Metacall_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciAbstractAPIs_QBaseMetacall(QsciAbstractAPIs* self, int param1, int param2, void** param3) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_Metacall_IsBase(true);
        return vqsciabstractapis->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciAbstractAPIs_Tr(const char* s) {
    QString _ret = QsciAbstractAPIs::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QsciLexer* QsciAbstractAPIs_Lexer(const QsciAbstractAPIs* self) {
    return self->lexer();
}

libqt_string QsciAbstractAPIs_Tr2(const char* s, const char* c) {
    QString _ret = QsciAbstractAPIs::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciAbstractAPIs_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciAbstractAPIs::tr(s, c, static_cast<int>(n));
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
void QsciAbstractAPIs_UpdateAutoCompletionList(QsciAbstractAPIs* self, libqt_list /* of libqt_string */ context, libqt_list /* of libqt_string */ list) {
    QStringList context_QList;
    context_QList.reserve(context.len);
    libqt_string* context_arr = static_cast<libqt_string*>(context.data.ptr);
    for (size_t i = 0; i < context.len; ++i) {
        QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
        context_QList.push_back(context_arr_i_QString);
    }
    QStringList list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data.ptr);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->updateAutoCompletionList(context_QList, list_QList);
    } else {
        vqsciabstractapis->updateAutoCompletionList(context_QList, list_QList);
    }
}

// Base class handler implementation
void QsciAbstractAPIs_QBaseUpdateAutoCompletionList(QsciAbstractAPIs* self, libqt_list /* of libqt_string */ context, libqt_list /* of libqt_string */ list) {
    QStringList context_QList;
    context_QList.reserve(context.len);
    libqt_string* context_arr = static_cast<libqt_string*>(context.data.ptr);
    for (size_t i = 0; i < context.len; ++i) {
        QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
        context_QList.push_back(context_arr_i_QString);
    }
    QStringList list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data.ptr);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_UpdateAutoCompletionList_IsBase(true);
        vqsciabstractapis->updateAutoCompletionList(context_QList, list_QList);
    } else {
        vqsciabstractapis->updateAutoCompletionList(context_QList, list_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnUpdateAutoCompletionList(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_UpdateAutoCompletionList_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_UpdateAutoCompletionList_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAbstractAPIs_AutoCompletionSelected(QsciAbstractAPIs* self, libqt_string selection) {
    QString selection_QString = QString::fromUtf8(selection.data, selection.len);
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->autoCompletionSelected(selection_QString);
    } else {
        vqsciabstractapis->autoCompletionSelected(selection_QString);
    }
}

// Base class handler implementation
void QsciAbstractAPIs_QBaseAutoCompletionSelected(QsciAbstractAPIs* self, libqt_string selection) {
    QString selection_QString = QString::fromUtf8(selection.data, selection.len);
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_AutoCompletionSelected_IsBase(true);
        vqsciabstractapis->autoCompletionSelected(selection_QString);
    } else {
        vqsciabstractapis->autoCompletionSelected(selection_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnAutoCompletionSelected(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_AutoCompletionSelected_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_AutoCompletionSelected_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciAbstractAPIs_CallTips(QsciAbstractAPIs* self, libqt_list /* of libqt_string */ context, int commas, int style, libqt_list /* of int */ shifts) {
    QStringList context_QList;
    context_QList.reserve(context.len);
    libqt_string* context_arr = static_cast<libqt_string*>(context.data.ptr);
    for (size_t i = 0; i < context.len; ++i) {
        QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
        context_QList.push_back(context_arr_i_QString);
    }
    QList<int> shifts_QList;
    shifts_QList.reserve(shifts.len);
    int* shifts_arr = static_cast<int*>(shifts.data.ints);
    for (size_t i = 0; i < shifts.len; ++i) {
        shifts_QList.push_back(static_cast<int>(shifts_arr[i]));
    }
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        QStringList _ret = vqsciabstractapis->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = vqsciabstractapis->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciAbstractAPIs_QBaseCallTips(QsciAbstractAPIs* self, libqt_list /* of libqt_string */ context, int commas, int style, libqt_list /* of int */ shifts) {
    QStringList context_QList;
    context_QList.reserve(context.len);
    libqt_string* context_arr = static_cast<libqt_string*>(context.data.ptr);
    for (size_t i = 0; i < context.len; ++i) {
        QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
        context_QList.push_back(context_arr_i_QString);
    }
    QList<int> shifts_QList;
    shifts_QList.reserve(shifts.len);
    int* shifts_arr = static_cast<int*>(shifts.data.ints);
    for (size_t i = 0; i < shifts.len; ++i) {
        shifts_QList.push_back(static_cast<int>(shifts_arr[i]));
    }
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_CallTips_IsBase(true);
        QStringList _ret = vqsciabstractapis->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QStringList _ret = vqsciabstractapis->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
            _lv_str.data[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnCallTips(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_CallTips_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_CallTips_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciAbstractAPIs_Event(QsciAbstractAPIs* self, QEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        return vqsciabstractapis->event(event);
    } else {
        return vqsciabstractapis->event(event);
    }
}

// Base class handler implementation
bool QsciAbstractAPIs_QBaseEvent(QsciAbstractAPIs* self, QEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_Event_IsBase(true);
        return vqsciabstractapis->event(event);
    } else {
        return vqsciabstractapis->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnEvent(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_Event_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciAbstractAPIs_EventFilter(QsciAbstractAPIs* self, QObject* watched, QEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        return vqsciabstractapis->eventFilter(watched, event);
    } else {
        return vqsciabstractapis->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciAbstractAPIs_QBaseEventFilter(QsciAbstractAPIs* self, QObject* watched, QEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_EventFilter_IsBase(true);
        return vqsciabstractapis->eventFilter(watched, event);
    } else {
        return vqsciabstractapis->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnEventFilter(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_EventFilter_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAbstractAPIs_TimerEvent(QsciAbstractAPIs* self, QTimerEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->timerEvent(event);
    } else {
        vqsciabstractapis->timerEvent(event);
    }
}

// Base class handler implementation
void QsciAbstractAPIs_QBaseTimerEvent(QsciAbstractAPIs* self, QTimerEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_TimerEvent_IsBase(true);
        vqsciabstractapis->timerEvent(event);
    } else {
        vqsciabstractapis->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnTimerEvent(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_TimerEvent_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAbstractAPIs_ChildEvent(QsciAbstractAPIs* self, QChildEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->childEvent(event);
    } else {
        vqsciabstractapis->childEvent(event);
    }
}

// Base class handler implementation
void QsciAbstractAPIs_QBaseChildEvent(QsciAbstractAPIs* self, QChildEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_ChildEvent_IsBase(true);
        vqsciabstractapis->childEvent(event);
    } else {
        vqsciabstractapis->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnChildEvent(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_ChildEvent_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAbstractAPIs_CustomEvent(QsciAbstractAPIs* self, QEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->customEvent(event);
    } else {
        vqsciabstractapis->customEvent(event);
    }
}

// Base class handler implementation
void QsciAbstractAPIs_QBaseCustomEvent(QsciAbstractAPIs* self, QEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_CustomEvent_IsBase(true);
        vqsciabstractapis->customEvent(event);
    } else {
        vqsciabstractapis->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnCustomEvent(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_CustomEvent_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAbstractAPIs_ConnectNotify(QsciAbstractAPIs* self, QMetaMethod* signal) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->connectNotify(*signal);
    } else {
        vqsciabstractapis->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciAbstractAPIs_QBaseConnectNotify(QsciAbstractAPIs* self, QMetaMethod* signal) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_ConnectNotify_IsBase(true);
        vqsciabstractapis->connectNotify(*signal);
    } else {
        vqsciabstractapis->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnConnectNotify(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_ConnectNotify_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAbstractAPIs_DisconnectNotify(QsciAbstractAPIs* self, QMetaMethod* signal) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->disconnectNotify(*signal);
    } else {
        vqsciabstractapis->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciAbstractAPIs_QBaseDisconnectNotify(QsciAbstractAPIs* self, QMetaMethod* signal) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_DisconnectNotify_IsBase(true);
        vqsciabstractapis->disconnectNotify(*signal);
    } else {
        vqsciabstractapis->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnDisconnectNotify(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->setQsciAbstractAPIs_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciAbstractAPIs_Sender(const QsciAbstractAPIs* self) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        return vqsciabstractapis->sender();
    } else {
        return vqsciabstractapis->sender();
    }
}

// Base class handler implementation
QObject* QsciAbstractAPIs_QBaseSender(const QsciAbstractAPIs* self) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        vqsciabstractapis->setQsciAbstractAPIs_Sender_IsBase(true);
        return vqsciabstractapis->sender();
    } else {
        return vqsciabstractapis->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnSender(const QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        vqsciabstractapis->setQsciAbstractAPIs_Sender_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciAbstractAPIs_SenderSignalIndex(const QsciAbstractAPIs* self) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        return vqsciabstractapis->senderSignalIndex();
    } else {
        return vqsciabstractapis->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciAbstractAPIs_QBaseSenderSignalIndex(const QsciAbstractAPIs* self) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        vqsciabstractapis->setQsciAbstractAPIs_SenderSignalIndex_IsBase(true);
        return vqsciabstractapis->senderSignalIndex();
    } else {
        return vqsciabstractapis->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnSenderSignalIndex(const QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        vqsciabstractapis->setQsciAbstractAPIs_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciAbstractAPIs_Receivers(const QsciAbstractAPIs* self, const char* signal) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        return vqsciabstractapis->receivers(signal);
    } else {
        return vqsciabstractapis->receivers(signal);
    }
}

// Base class handler implementation
int QsciAbstractAPIs_QBaseReceivers(const QsciAbstractAPIs* self, const char* signal) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        vqsciabstractapis->setQsciAbstractAPIs_Receivers_IsBase(true);
        return vqsciabstractapis->receivers(signal);
    } else {
        return vqsciabstractapis->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnReceivers(const QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        vqsciabstractapis->setQsciAbstractAPIs_Receivers_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciAbstractAPIs_IsSignalConnected(const QsciAbstractAPIs* self, QMetaMethod* signal) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        return vqsciabstractapis->isSignalConnected(*signal);
    } else {
        return vqsciabstractapis->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciAbstractAPIs_QBaseIsSignalConnected(const QsciAbstractAPIs* self, QMetaMethod* signal) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        vqsciabstractapis->setQsciAbstractAPIs_IsSignalConnected_IsBase(true);
        return vqsciabstractapis->isSignalConnected(*signal);
    } else {
        return vqsciabstractapis->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnIsSignalConnected(const QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        vqsciabstractapis->setQsciAbstractAPIs_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_IsSignalConnected_Callback>(slot));
    }
}

void QsciAbstractAPIs_Delete(QsciAbstractAPIs* self) {
    delete self;
}
