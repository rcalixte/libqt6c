#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextDocument>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qsyntaxhighlighter.h>
#include "libqsyntaxhighlighter.hpp"
#include "libqsyntaxhighlighter.hxx"

QSyntaxHighlighter* QSyntaxHighlighter_new(QObject* parent) {
    return new VirtualQSyntaxHighlighter(parent);
}

QSyntaxHighlighter* QSyntaxHighlighter_new2(QTextDocument* parent) {
    return new VirtualQSyntaxHighlighter(parent);
}

QMetaObject* QSyntaxHighlighter_MetaObject(const QSyntaxHighlighter* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSyntaxHighlighter_Metacast(QSyntaxHighlighter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSyntaxHighlighter_Metacall(QSyntaxHighlighter* self, int param1, int param2, void** param3) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSyntaxHighlighter_OnMetacall(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_Metacall_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSyntaxHighlighter_QBaseMetacall(QSyntaxHighlighter* self, int param1, int param2, void** param3) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_Metacall_IsBase(true);
        return vqsyntaxhighlighter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSyntaxHighlighter_Tr(const char* s) {
    QString _ret = QSyntaxHighlighter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc) {
    self->setDocument(doc);
}

QTextDocument* QSyntaxHighlighter_Document(const QSyntaxHighlighter* self) {
    return self->document();
}

void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self) {
    self->rehighlight();
}

void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, QTextBlock* block) {
    self->rehighlightBlock(*block);
}

libqt_string QSyntaxHighlighter_Tr2(const char* s, const char* c) {
    QString _ret = QSyntaxHighlighter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSyntaxHighlighter_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSyntaxHighlighter::tr(s, c, static_cast<int>(n));
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
void QSyntaxHighlighter_HighlightBlock(QSyntaxHighlighter* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->highlightBlock(text_QString);
    } else {
        vqsyntaxhighlighter->highlightBlock(text_QString);
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseHighlightBlock(QSyntaxHighlighter* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_HighlightBlock_IsBase(true);
        vqsyntaxhighlighter->highlightBlock(text_QString);
    } else {
        vqsyntaxhighlighter->highlightBlock(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnHighlightBlock(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_HighlightBlock_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_HighlightBlock_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSyntaxHighlighter_Event(QSyntaxHighlighter* self, QEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        return vqsyntaxhighlighter->event(event);
    } else {
        return vqsyntaxhighlighter->event(event);
    }
}

// Base class handler implementation
bool QSyntaxHighlighter_QBaseEvent(QSyntaxHighlighter* self, QEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_Event_IsBase(true);
        return vqsyntaxhighlighter->event(event);
    } else {
        return vqsyntaxhighlighter->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnEvent(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_Event_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSyntaxHighlighter_EventFilter(QSyntaxHighlighter* self, QObject* watched, QEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        return vqsyntaxhighlighter->eventFilter(watched, event);
    } else {
        return vqsyntaxhighlighter->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSyntaxHighlighter_QBaseEventFilter(QSyntaxHighlighter* self, QObject* watched, QEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_EventFilter_IsBase(true);
        return vqsyntaxhighlighter->eventFilter(watched, event);
    } else {
        return vqsyntaxhighlighter->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnEventFilter(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_EventFilter_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSyntaxHighlighter_TimerEvent(QSyntaxHighlighter* self, QTimerEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->timerEvent(event);
    } else {
        vqsyntaxhighlighter->timerEvent(event);
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseTimerEvent(QSyntaxHighlighter* self, QTimerEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_TimerEvent_IsBase(true);
        vqsyntaxhighlighter->timerEvent(event);
    } else {
        vqsyntaxhighlighter->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnTimerEvent(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_TimerEvent_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSyntaxHighlighter_ChildEvent(QSyntaxHighlighter* self, QChildEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->childEvent(event);
    } else {
        vqsyntaxhighlighter->childEvent(event);
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseChildEvent(QSyntaxHighlighter* self, QChildEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_ChildEvent_IsBase(true);
        vqsyntaxhighlighter->childEvent(event);
    } else {
        vqsyntaxhighlighter->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnChildEvent(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_ChildEvent_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSyntaxHighlighter_CustomEvent(QSyntaxHighlighter* self, QEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->customEvent(event);
    } else {
        vqsyntaxhighlighter->customEvent(event);
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseCustomEvent(QSyntaxHighlighter* self, QEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_CustomEvent_IsBase(true);
        vqsyntaxhighlighter->customEvent(event);
    } else {
        vqsyntaxhighlighter->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnCustomEvent(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_CustomEvent_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSyntaxHighlighter_ConnectNotify(QSyntaxHighlighter* self, QMetaMethod* signal) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->connectNotify(*signal);
    } else {
        vqsyntaxhighlighter->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseConnectNotify(QSyntaxHighlighter* self, QMetaMethod* signal) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_ConnectNotify_IsBase(true);
        vqsyntaxhighlighter->connectNotify(*signal);
    } else {
        vqsyntaxhighlighter->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnConnectNotify(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_ConnectNotify_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSyntaxHighlighter_DisconnectNotify(QSyntaxHighlighter* self, QMetaMethod* signal) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->disconnectNotify(*signal);
    } else {
        vqsyntaxhighlighter->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseDisconnectNotify(QSyntaxHighlighter* self, QMetaMethod* signal) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_DisconnectNotify_IsBase(true);
        vqsyntaxhighlighter->disconnectNotify(*signal);
    } else {
        vqsyntaxhighlighter->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnDisconnectNotify(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_DisconnectNotify_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSyntaxHighlighter_SetFormat(QSyntaxHighlighter* self, int start, int count, QTextCharFormat* format) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else {
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseSetFormat(QSyntaxHighlighter* self, int start, int count, QTextCharFormat* format) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat_IsBase(true);
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else {
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSetFormat(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SetFormat_Callback>(slot));
    }
}

// Derived class handler implementation
void QSyntaxHighlighter_SetFormat2(QSyntaxHighlighter* self, int start, int count, QColor* color) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *color);
    } else {
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *color);
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseSetFormat2(QSyntaxHighlighter* self, int start, int count, QColor* color) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat2_IsBase(true);
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *color);
    } else {
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *color);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSetFormat2(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat2_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SetFormat2_Callback>(slot));
    }
}

// Derived class handler implementation
void QSyntaxHighlighter_SetFormat3(QSyntaxHighlighter* self, int start, int count, QFont* font) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *font);
    } else {
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *font);
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseSetFormat3(QSyntaxHighlighter* self, int start, int count, QFont* font) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat3_IsBase(true);
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *font);
    } else {
        vqsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *font);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSetFormat3(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SetFormat3_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SetFormat3_Callback>(slot));
    }
}

// Derived class handler implementation
QTextCharFormat* QSyntaxHighlighter_Format(const QSyntaxHighlighter* self, int pos) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return new QTextCharFormat(vqsyntaxhighlighter->format(static_cast<int>(pos)));
    }
    return {};
}

// Base class handler implementation
QTextCharFormat* QSyntaxHighlighter_QBaseFormat(const QSyntaxHighlighter* self, int pos) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_Format_IsBase(true);
        return new QTextCharFormat(vqsyntaxhighlighter->format(static_cast<int>(pos)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnFormat(const QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_Format_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_Format_Callback>(slot));
    }
}

// Derived class handler implementation
int QSyntaxHighlighter_PreviousBlockState(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->previousBlockState();
    } else {
        return vqsyntaxhighlighter->previousBlockState();
    }
}

// Base class handler implementation
int QSyntaxHighlighter_QBasePreviousBlockState(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_PreviousBlockState_IsBase(true);
        return vqsyntaxhighlighter->previousBlockState();
    } else {
        return vqsyntaxhighlighter->previousBlockState();
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnPreviousBlockState(const QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_PreviousBlockState_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_PreviousBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
int QSyntaxHighlighter_CurrentBlockState(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->currentBlockState();
    } else {
        return vqsyntaxhighlighter->currentBlockState();
    }
}

// Base class handler implementation
int QSyntaxHighlighter_QBaseCurrentBlockState(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlockState_IsBase(true);
        return vqsyntaxhighlighter->currentBlockState();
    } else {
        return vqsyntaxhighlighter->currentBlockState();
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnCurrentBlockState(const QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlockState_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_CurrentBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
void QSyntaxHighlighter_SetCurrentBlockState(QSyntaxHighlighter* self, int newState) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setCurrentBlockState(static_cast<int>(newState));
    } else {
        vqsyntaxhighlighter->setCurrentBlockState(static_cast<int>(newState));
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseSetCurrentBlockState(QSyntaxHighlighter* self, int newState) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SetCurrentBlockState_IsBase(true);
        vqsyntaxhighlighter->setCurrentBlockState(static_cast<int>(newState));
    } else {
        vqsyntaxhighlighter->setCurrentBlockState(static_cast<int>(newState));
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSetCurrentBlockState(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SetCurrentBlockState_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SetCurrentBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
void QSyntaxHighlighter_SetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setCurrentBlockUserData(data);
    } else {
        vqsyntaxhighlighter->setCurrentBlockUserData(data);
    }
}

// Base class handler implementation
void QSyntaxHighlighter_QBaseSetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SetCurrentBlockUserData_IsBase(true);
        vqsyntaxhighlighter->setCurrentBlockUserData(data);
    } else {
        vqsyntaxhighlighter->setCurrentBlockUserData(data);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSetCurrentBlockUserData(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SetCurrentBlockUserData_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SetCurrentBlockUserData_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlockUserData* QSyntaxHighlighter_CurrentBlockUserData(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->currentBlockUserData();
    } else {
        return vqsyntaxhighlighter->currentBlockUserData();
    }
}

// Base class handler implementation
QTextBlockUserData* QSyntaxHighlighter_QBaseCurrentBlockUserData(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlockUserData_IsBase(true);
        return vqsyntaxhighlighter->currentBlockUserData();
    } else {
        return vqsyntaxhighlighter->currentBlockUserData();
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnCurrentBlockUserData(const QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlockUserData_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_CurrentBlockUserData_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlock* QSyntaxHighlighter_CurrentBlock(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return new QTextBlock(vqsyntaxhighlighter->currentBlock());
    }
    return {};
}

// Base class handler implementation
QTextBlock* QSyntaxHighlighter_QBaseCurrentBlock(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlock_IsBase(true);
        return new QTextBlock(vqsyntaxhighlighter->currentBlock());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnCurrentBlock(const QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_CurrentBlock_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_CurrentBlock_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSyntaxHighlighter_Sender(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->sender();
    } else {
        return vqsyntaxhighlighter->sender();
    }
}

// Base class handler implementation
QObject* QSyntaxHighlighter_QBaseSender(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_Sender_IsBase(true);
        return vqsyntaxhighlighter->sender();
    } else {
        return vqsyntaxhighlighter->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSender(const QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_Sender_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSyntaxHighlighter_SenderSignalIndex(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->senderSignalIndex();
    } else {
        return vqsyntaxhighlighter->senderSignalIndex();
    }
}

// Base class handler implementation
int QSyntaxHighlighter_QBaseSenderSignalIndex(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SenderSignalIndex_IsBase(true);
        return vqsyntaxhighlighter->senderSignalIndex();
    } else {
        return vqsyntaxhighlighter->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnSenderSignalIndex(const QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSyntaxHighlighter_Receivers(const QSyntaxHighlighter* self, const char* signal) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->receivers(signal);
    } else {
        return vqsyntaxhighlighter->receivers(signal);
    }
}

// Base class handler implementation
int QSyntaxHighlighter_QBaseReceivers(const QSyntaxHighlighter* self, const char* signal) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_Receivers_IsBase(true);
        return vqsyntaxhighlighter->receivers(signal);
    } else {
        return vqsyntaxhighlighter->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnReceivers(const QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_Receivers_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSyntaxHighlighter_IsSignalConnected(const QSyntaxHighlighter* self, QMetaMethod* signal) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->isSignalConnected(*signal);
    } else {
        return vqsyntaxhighlighter->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSyntaxHighlighter_QBaseIsSignalConnected(const QSyntaxHighlighter* self, QMetaMethod* signal) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_IsSignalConnected_IsBase(true);
        return vqsyntaxhighlighter->isSignalConnected(*signal);
    } else {
        return vqsyntaxhighlighter->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnIsSignalConnected(const QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        vqsyntaxhighlighter->setQSyntaxHighlighter_IsSignalConnected_Callback(reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_IsSignalConnected_Callback>(slot));
    }
}

void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self) {
    delete self;
}
