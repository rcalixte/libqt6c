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
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFrame>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator
#include <QTextFrameFormat>
#include <QTextFrameLayoutData>
#include <QTextObject>
#include <QTextTable>
#include <QTextTableCell>
#include <QTextTableFormat>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qtexttable.h>
#include "libqtexttable.hpp"
#include "libqtexttable.hxx"

QTextTableCell* QTextTableCell_new() {
    return new QTextTableCell();
}

QTextTableCell* QTextTableCell_new2(QTextTableCell* o) {
    return new QTextTableCell(*o);
}

void QTextTableCell_OperatorAssign(QTextTableCell* self, QTextTableCell* o) {
    self->operator=(*o);
}

void QTextTableCell_SetFormat(QTextTableCell* self, QTextCharFormat* format) {
    self->setFormat(*format);
}

QTextCharFormat* QTextTableCell_Format(const QTextTableCell* self) {
    return new QTextCharFormat(self->format());
}

int QTextTableCell_Row(const QTextTableCell* self) {
    return self->row();
}

int QTextTableCell_Column(const QTextTableCell* self) {
    return self->column();
}

int QTextTableCell_RowSpan(const QTextTableCell* self) {
    return self->rowSpan();
}

int QTextTableCell_ColumnSpan(const QTextTableCell* self) {
    return self->columnSpan();
}

bool QTextTableCell_IsValid(const QTextTableCell* self) {
    return self->isValid();
}

QTextCursor* QTextTableCell_FirstCursorPosition(const QTextTableCell* self) {
    return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextTableCell_LastCursorPosition(const QTextTableCell* self) {
    return new QTextCursor(self->lastCursorPosition());
}

int QTextTableCell_FirstPosition(const QTextTableCell* self) {
    return self->firstPosition();
}

int QTextTableCell_LastPosition(const QTextTableCell* self) {
    return self->lastPosition();
}

bool QTextTableCell_OperatorEqual(const QTextTableCell* self, QTextTableCell* other) {
    return (*self == *other);
}

bool QTextTableCell_OperatorNotEqual(const QTextTableCell* self, QTextTableCell* other) {
    return (*self != *other);
}

QTextFrame__iterator* QTextTableCell_Begin(const QTextTableCell* self) {
    return new QTextFrame::iterator(self->begin());
}

QTextFrame__iterator* QTextTableCell_End(const QTextTableCell* self) {
    return new QTextFrame::iterator(self->end());
}

int QTextTableCell_TableCellFormatIndex(const QTextTableCell* self) {
    return self->tableCellFormatIndex();
}

void QTextTableCell_Delete(QTextTableCell* self) {
    delete self;
}

QTextTable* QTextTable_new(QTextDocument* doc) {
    return new VirtualQTextTable(doc);
}

QMetaObject* QTextTable_MetaObject(const QTextTable* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTextTable_Metacast(QTextTable* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTextTable_Metacall(QTextTable* self, int param1, int param2, void** param3) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTextTable_OnMetacall(QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_Metacall_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTextTable_QBaseMetacall(QTextTable* self, int param1, int param2, void** param3) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_Metacall_IsBase(true);
        return vqtexttable->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTextTable_Tr(const char* s) {
    QString _ret = QTextTable::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTextTable_Resize(QTextTable* self, int rows, int cols) {
    self->resize(static_cast<int>(rows), static_cast<int>(cols));
}

void QTextTable_InsertRows(QTextTable* self, int pos, int num) {
    self->insertRows(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_InsertColumns(QTextTable* self, int pos, int num) {
    self->insertColumns(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_AppendRows(QTextTable* self, int count) {
    self->appendRows(static_cast<int>(count));
}

void QTextTable_AppendColumns(QTextTable* self, int count) {
    self->appendColumns(static_cast<int>(count));
}

void QTextTable_RemoveRows(QTextTable* self, int pos, int num) {
    self->removeRows(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_RemoveColumns(QTextTable* self, int pos, int num) {
    self->removeColumns(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_MergeCells(QTextTable* self, int row, int col, int numRows, int numCols) {
    self->mergeCells(static_cast<int>(row), static_cast<int>(col), static_cast<int>(numRows), static_cast<int>(numCols));
}

void QTextTable_MergeCellsWithCursor(QTextTable* self, QTextCursor* cursor) {
    self->mergeCells(*cursor);
}

void QTextTable_SplitCell(QTextTable* self, int row, int col, int numRows, int numCols) {
    self->splitCell(static_cast<int>(row), static_cast<int>(col), static_cast<int>(numRows), static_cast<int>(numCols));
}

int QTextTable_Rows(const QTextTable* self) {
    return self->rows();
}

int QTextTable_Columns(const QTextTable* self) {
    return self->columns();
}

QTextTableCell* QTextTable_CellAt(const QTextTable* self, int row, int col) {
    return new QTextTableCell(self->cellAt(static_cast<int>(row), static_cast<int>(col)));
}

QTextTableCell* QTextTable_CellAtWithPosition(const QTextTable* self, int position) {
    return new QTextTableCell(self->cellAt(static_cast<int>(position)));
}

QTextTableCell* QTextTable_CellAtWithQTextCursor(const QTextTable* self, QTextCursor* c) {
    return new QTextTableCell(self->cellAt(*c));
}

QTextCursor* QTextTable_RowStart(const QTextTable* self, QTextCursor* c) {
    return new QTextCursor(self->rowStart(*c));
}

QTextCursor* QTextTable_RowEnd(const QTextTable* self, QTextCursor* c) {
    return new QTextCursor(self->rowEnd(*c));
}

void QTextTable_SetFormat(QTextTable* self, QTextTableFormat* format) {
    self->setFormat(*format);
}

QTextTableFormat* QTextTable_Format(const QTextTable* self) {
    return new QTextTableFormat(self->format());
}

libqt_string QTextTable_Tr2(const char* s, const char* c) {
    QString _ret = QTextTable::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTextTable_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTextTable::tr(s, c, static_cast<int>(n));
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
bool QTextTable_Event(QTextTable* self, QEvent* event) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        return vqtexttable->event(event);
    } else {
        return vqtexttable->event(event);
    }
}

// Base class handler implementation
bool QTextTable_QBaseEvent(QTextTable* self, QEvent* event) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_Event_IsBase(true);
        return vqtexttable->event(event);
    } else {
        return vqtexttable->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnEvent(QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_Event_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextTable_EventFilter(QTextTable* self, QObject* watched, QEvent* event) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        return vqtexttable->eventFilter(watched, event);
    } else {
        return vqtexttable->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTextTable_QBaseEventFilter(QTextTable* self, QObject* watched, QEvent* event) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_EventFilter_IsBase(true);
        return vqtexttable->eventFilter(watched, event);
    } else {
        return vqtexttable->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnEventFilter(QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_EventFilter_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextTable_TimerEvent(QTextTable* self, QTimerEvent* event) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->timerEvent(event);
    } else {
        vqtexttable->timerEvent(event);
    }
}

// Base class handler implementation
void QTextTable_QBaseTimerEvent(QTextTable* self, QTimerEvent* event) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_TimerEvent_IsBase(true);
        vqtexttable->timerEvent(event);
    } else {
        vqtexttable->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnTimerEvent(QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_TimerEvent_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextTable_ChildEvent(QTextTable* self, QChildEvent* event) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->childEvent(event);
    } else {
        vqtexttable->childEvent(event);
    }
}

// Base class handler implementation
void QTextTable_QBaseChildEvent(QTextTable* self, QChildEvent* event) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_ChildEvent_IsBase(true);
        vqtexttable->childEvent(event);
    } else {
        vqtexttable->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnChildEvent(QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_ChildEvent_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextTable_CustomEvent(QTextTable* self, QEvent* event) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->customEvent(event);
    } else {
        vqtexttable->customEvent(event);
    }
}

// Base class handler implementation
void QTextTable_QBaseCustomEvent(QTextTable* self, QEvent* event) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_CustomEvent_IsBase(true);
        vqtexttable->customEvent(event);
    } else {
        vqtexttable->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnCustomEvent(QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_CustomEvent_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextTable_ConnectNotify(QTextTable* self, QMetaMethod* signal) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->connectNotify(*signal);
    } else {
        vqtexttable->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTextTable_QBaseConnectNotify(QTextTable* self, QMetaMethod* signal) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_ConnectNotify_IsBase(true);
        vqtexttable->connectNotify(*signal);
    } else {
        vqtexttable->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnConnectNotify(QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_ConnectNotify_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextTable_DisconnectNotify(QTextTable* self, QMetaMethod* signal) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->disconnectNotify(*signal);
    } else {
        vqtexttable->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTextTable_QBaseDisconnectNotify(QTextTable* self, QMetaMethod* signal) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_DisconnectNotify_IsBase(true);
        vqtexttable->disconnectNotify(*signal);
    } else {
        vqtexttable->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnDisconnectNotify(QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = dynamic_cast<VirtualQTextTable*>(self)) {
        vqtexttable->setQTextTable_DisconnectNotify_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTextTable_Sender(const QTextTable* self) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        return vqtexttable->sender();
    } else {
        return vqtexttable->sender();
    }
}

// Base class handler implementation
QObject* QTextTable_QBaseSender(const QTextTable* self) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        vqtexttable->setQTextTable_Sender_IsBase(true);
        return vqtexttable->sender();
    } else {
        return vqtexttable->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnSender(const QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        vqtexttable->setQTextTable_Sender_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextTable_SenderSignalIndex(const QTextTable* self) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        return vqtexttable->senderSignalIndex();
    } else {
        return vqtexttable->senderSignalIndex();
    }
}

// Base class handler implementation
int QTextTable_QBaseSenderSignalIndex(const QTextTable* self) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        vqtexttable->setQTextTable_SenderSignalIndex_IsBase(true);
        return vqtexttable->senderSignalIndex();
    } else {
        return vqtexttable->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnSenderSignalIndex(const QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        vqtexttable->setQTextTable_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextTable_Receivers(const QTextTable* self, const char* signal) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        return vqtexttable->receivers(signal);
    } else {
        return vqtexttable->receivers(signal);
    }
}

// Base class handler implementation
int QTextTable_QBaseReceivers(const QTextTable* self, const char* signal) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        vqtexttable->setQTextTable_Receivers_IsBase(true);
        return vqtexttable->receivers(signal);
    } else {
        return vqtexttable->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnReceivers(const QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        vqtexttable->setQTextTable_Receivers_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextTable_IsSignalConnected(const QTextTable* self, QMetaMethod* signal) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        return vqtexttable->isSignalConnected(*signal);
    } else {
        return vqtexttable->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTextTable_QBaseIsSignalConnected(const QTextTable* self, QMetaMethod* signal) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        vqtexttable->setQTextTable_IsSignalConnected_IsBase(true);
        return vqtexttable->isSignalConnected(*signal);
    } else {
        return vqtexttable->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextTable_OnIsSignalConnected(const QTextTable* self, intptr_t slot) {
    if (auto* vqtexttable = const_cast<VirtualQTextTable*>(dynamic_cast<const VirtualQTextTable*>(self))) {
        vqtexttable->setQTextTable_IsSignalConnected_Callback(reinterpret_cast<VirtualQTextTable::QTextTable_IsSignalConnected_Callback>(slot));
    }
}

void QTextTable_Delete(QTextTable* self) {
    delete self;
}
