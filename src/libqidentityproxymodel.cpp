#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QIdentityProxyModel>
#include <QItemSelection>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qidentityproxymodel.h>
#include "libqidentityproxymodel.hpp"
#include "libqidentityproxymodel.hxx"

QIdentityProxyModel* QIdentityProxyModel_new() {
    return new VirtualQIdentityProxyModel();
}

QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent) {
    return new VirtualQIdentityProxyModel(parent);
}

QMetaObject* QIdentityProxyModel_MetaObject(const QIdentityProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QIdentityProxyModel_Metacast(QIdentityProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QIdentityProxyModel_Metacall(QIdentityProxyModel* self, int param1, int param2, void** param3) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QIdentityProxyModel_OnMetacall(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_Metacall_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QIdentityProxyModel_QBaseMetacall(QIdentityProxyModel* self, int param1, int param2, void** param3) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_Metacall_IsBase(true);
        return vqidentityproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QIdentityProxyModel_Tr(const char* s) {
    QString _ret = QIdentityProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QIdentityProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = QIdentityProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QIdentityProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QIdentityProxyModel::tr(s, c, static_cast<int>(n));
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
int QIdentityProxyModel_ColumnCount(const QIdentityProxyModel* self, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->columnCount(*parent);
    } else {
        return vqidentityproxymodel->columnCount(*parent);
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseColumnCount(const QIdentityProxyModel* self, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_ColumnCount_IsBase(true);
        return vqidentityproxymodel->columnCount(*parent);
    } else {
        return vqidentityproxymodel->columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnColumnCount(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_Index(const QIdentityProxyModel* self, int row, int column, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QModelIndex(vqidentityproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseIndex(const QIdentityProxyModel* self, int row, int column, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Index_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnIndex(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Index_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_MapFromSource(const QIdentityProxyModel* self, QModelIndex* sourceIndex) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QModelIndex(vqidentityproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(self->mapFromSource(*sourceIndex));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseMapFromSource(const QIdentityProxyModel* self, QModelIndex* sourceIndex) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(self->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapFromSource(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_MapToSource(const QIdentityProxyModel* self, QModelIndex* proxyIndex) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QModelIndex(vqidentityproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(self->mapToSource(*proxyIndex));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseMapToSource(const QIdentityProxyModel* self, QModelIndex* proxyIndex) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(self->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapToSource(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MapToSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_Parent(const QIdentityProxyModel* self, QModelIndex* child) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QModelIndex(vqidentityproxymodel->parent(*child));
    } else {
        return new QModelIndex(self->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseParent(const QIdentityProxyModel* self, QModelIndex* child) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Parent_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->parent(*child));
    } else {
        return new QModelIndex(self->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnParent(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Parent_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_RowCount(const QIdentityProxyModel* self, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->rowCount(*parent);
    } else {
        return vqidentityproxymodel->rowCount(*parent);
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseRowCount(const QIdentityProxyModel* self, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_RowCount_IsBase(true);
        return vqidentityproxymodel->rowCount(*parent);
    } else {
        return vqidentityproxymodel->rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRowCount(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_RowCount_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QIdentityProxyModel_HeaderData(const QIdentityProxyModel* self, int section, int orientation, int role) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QVariant(vqidentityproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QIdentityProxyModel_QBaseHeaderData(const QIdentityProxyModel* self, int section, int orientation, int role) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_HeaderData_IsBase(true);
        return new QVariant(vqidentityproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnHeaderData(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_DropMimeData(QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqidentityproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseDropMimeData(QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_DropMimeData_IsBase(true);
        return vqidentityproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqidentityproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnDropMimeData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_Sibling(const QIdentityProxyModel* self, int row, int column, QModelIndex* idx) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QModelIndex(vqidentityproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseSibling(const QIdentityProxyModel* self, int row, int column, QModelIndex* idx) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSibling(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Sibling_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* QIdentityProxyModel_MapSelectionFromSource(const QIdentityProxyModel* self, QItemSelection* selection) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QItemSelection(vqidentityproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(self->mapSelectionFromSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* QIdentityProxyModel_QBaseMapSelectionFromSource(const QIdentityProxyModel* self, QItemSelection* selection) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vqidentityproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(self->mapSelectionFromSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapSelectionFromSource(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* QIdentityProxyModel_MapSelectionToSource(const QIdentityProxyModel* self, QItemSelection* selection) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QItemSelection(vqidentityproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(self->mapSelectionToSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* QIdentityProxyModel_QBaseMapSelectionToSource(const QIdentityProxyModel* self, QItemSelection* selection) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vqidentityproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(self->mapSelectionToSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMapSelectionToSource(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QIdentityProxyModel_Match(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        QModelIndexList _ret = vqidentityproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = vqidentityproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QIdentityProxyModel_QBaseMatch(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Match_IsBase(true);
        QModelIndexList _ret = vqidentityproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = vqidentityproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMatch(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Match_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setSourceModel(sourceModel);
    } else {
        vqidentityproxymodel->setSourceModel(sourceModel);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseSetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_SetSourceModel_IsBase(true);
        vqidentityproxymodel->setSourceModel(sourceModel);
    } else {
        vqidentityproxymodel->setSourceModel(sourceModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetSourceModel(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqidentityproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseInsertColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_InsertColumns_IsBase(true);
        return vqidentityproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqidentityproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnInsertColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqidentityproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseInsertRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_InsertRows_IsBase(true);
        return vqidentityproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqidentityproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnInsertRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqidentityproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseRemoveColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_RemoveColumns_IsBase(true);
        return vqidentityproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqidentityproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRemoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqidentityproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseRemoveRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_RemoveRows_IsBase(true);
        return vqidentityproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqidentityproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRemoveRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqidentityproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseMoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_MoveRows_IsBase(true);
        return vqidentityproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqidentityproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMoveRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_MoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqidentityproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseMoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_MoveColumns_IsBase(true);
        return vqidentityproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqidentityproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_Submit(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->submit();
    } else {
        return vqidentityproxymodel->submit();
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseSubmit(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_Submit_IsBase(true);
        return vqidentityproxymodel->submit();
    } else {
        return vqidentityproxymodel->submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSubmit(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_Submit_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_Revert(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->revert();
    } else {
        vqidentityproxymodel->revert();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseRevert(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_Revert_IsBase(true);
        vqidentityproxymodel->revert();
    } else {
        vqidentityproxymodel->revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRevert(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_Revert_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QIdentityProxyModel_Data(const QIdentityProxyModel* self, QModelIndex* proxyIndex, int role) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QVariant(vqidentityproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QIdentityProxyModel_QBaseData(const QIdentityProxyModel* self, QModelIndex* proxyIndex, int role) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Data_IsBase(true);
        return new QVariant(vqidentityproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnData(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Data_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QIdentityProxyModel_ItemData(const QIdentityProxyModel* self, QModelIndex* index) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        QMap<int, QVariant> _ret = vqidentityproxymodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = vqidentityproxymodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ QIdentityProxyModel_QBaseItemData(const QIdentityProxyModel* self, QModelIndex* index) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqidentityproxymodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = vqidentityproxymodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnItemData(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_ItemData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_Flags(const QIdentityProxyModel* self, QModelIndex* index) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return static_cast<int>(vqidentityproxymodel->flags(*index));
    } else {
        return static_cast<int>(vqidentityproxymodel->flags(*index));
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseFlags(const QIdentityProxyModel* self, QModelIndex* index) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Flags_IsBase(true);
        return static_cast<int>(vqidentityproxymodel->flags(*index));
    } else {
        return static_cast<int>(vqidentityproxymodel->flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnFlags(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Flags_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_SetData(QIdentityProxyModel* self, QModelIndex* index, QVariant* value, int role) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return vqidentityproxymodel->setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseSetData(QIdentityProxyModel* self, QModelIndex* index, QVariant* value, int role) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_SetData_IsBase(true);
        return vqidentityproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return vqidentityproxymodel->setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_SetData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_SetItemData(QIdentityProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->setItemData(*index, roles_QMap);
    } else {
        return vqidentityproxymodel->setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseSetItemData(QIdentityProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_SetItemData_IsBase(true);
        return vqidentityproxymodel->setItemData(*index, roles_QMap);
    } else {
        return vqidentityproxymodel->setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetItemData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_SetHeaderData(QIdentityProxyModel* self, int section, int orientation, QVariant* value, int role) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return vqidentityproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseSetHeaderData(QIdentityProxyModel* self, int section, int orientation, QVariant* value, int role) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_SetHeaderData_IsBase(true);
        return vqidentityproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return vqidentityproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSetHeaderData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_ClearItemData(QIdentityProxyModel* self, QModelIndex* index) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->clearItemData(*index);
    } else {
        return vqidentityproxymodel->clearItemData(*index);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseClearItemData(QIdentityProxyModel* self, QModelIndex* index) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ClearItemData_IsBase(true);
        return vqidentityproxymodel->clearItemData(*index);
    } else {
        return vqidentityproxymodel->clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnClearItemData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_Buddy(const QIdentityProxyModel* self, QModelIndex* index) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QModelIndex(vqidentityproxymodel->buddy(*index));
    } else {
        return new QModelIndex(self->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseBuddy(const QIdentityProxyModel* self, QModelIndex* index) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->buddy(*index));
    } else {
        return new QModelIndex(self->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBuddy(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Buddy_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_CanFetchMore(const QIdentityProxyModel* self, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->canFetchMore(*parent);
    } else {
        return vqidentityproxymodel->canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseCanFetchMore(const QIdentityProxyModel* self, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_CanFetchMore_IsBase(true);
        return vqidentityproxymodel->canFetchMore(*parent);
    } else {
        return vqidentityproxymodel->canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCanFetchMore(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_FetchMore(QIdentityProxyModel* self, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->fetchMore(*parent);
    } else {
        vqidentityproxymodel->fetchMore(*parent);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseFetchMore(QIdentityProxyModel* self, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_FetchMore_IsBase(true);
        vqidentityproxymodel->fetchMore(*parent);
    } else {
        vqidentityproxymodel->fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnFetchMore(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_FetchMore_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_Sort(QIdentityProxyModel* self, int column, int order) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        vqidentityproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseSort(QIdentityProxyModel* self, int column, int order) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_Sort_IsBase(true);
        vqidentityproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        vqidentityproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSort(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_Sort_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QIdentityProxyModel_Span(const QIdentityProxyModel* self, QModelIndex* index) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QSize(vqidentityproxymodel->span(*index));
    } else {
        return new QSize(self->span(*index));
    }
}

// Base class handler implementation
QSize* QIdentityProxyModel_QBaseSpan(const QIdentityProxyModel* self, QModelIndex* index) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Span_IsBase(true);
        return new QSize(vqidentityproxymodel->span(*index));
    } else {
        return new QSize(self->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSpan(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Span_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_HasChildren(const QIdentityProxyModel* self, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->hasChildren(*parent);
    } else {
        return vqidentityproxymodel->hasChildren(*parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseHasChildren(const QIdentityProxyModel* self, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_HasChildren_IsBase(true);
        return vqidentityproxymodel->hasChildren(*parent);
    } else {
        return vqidentityproxymodel->hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnHasChildren(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_HasChildren_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QIdentityProxyModel_MimeData(const QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ indexes) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->mimeData(indexes_QList);
    } else {
        return vqidentityproxymodel->mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QIdentityProxyModel_QBaseMimeData(const QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ indexes) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MimeData_IsBase(true);
        return vqidentityproxymodel->mimeData(indexes_QList);
    } else {
        return vqidentityproxymodel->mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMimeData(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MimeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_CanDropMimeData(const QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqidentityproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseCanDropMimeData(const QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_CanDropMimeData_IsBase(true);
        return vqidentityproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqidentityproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCanDropMimeData(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QIdentityProxyModel_MimeTypes(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        QStringList _ret = vqidentityproxymodel->mimeTypes();
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
        QStringList _ret = vqidentityproxymodel->mimeTypes();
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
libqt_list /* of libqt_string */ QIdentityProxyModel_QBaseMimeTypes(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MimeTypes_IsBase(true);
        QStringList _ret = vqidentityproxymodel->mimeTypes();
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
        QStringList _ret = vqidentityproxymodel->mimeTypes();
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
void QIdentityProxyModel_OnMimeTypes(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_SupportedDragActions(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return static_cast<int>(vqidentityproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(vqidentityproxymodel->supportedDragActions());
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseSupportedDragActions(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqidentityproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(vqidentityproxymodel->supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSupportedDragActions(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_SupportedDropActions(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return static_cast<int>(vqidentityproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(vqidentityproxymodel->supportedDropActions());
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseSupportedDropActions(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqidentityproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(vqidentityproxymodel->supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSupportedDropActions(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QIdentityProxyModel_RoleNames(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        QHash<int, QByteArray> _ret = vqidentityproxymodel->roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
            memcpy(_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            _hashval_str.data[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = vqidentityproxymodel->roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
            memcpy(_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            _hashval_str.data[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ QIdentityProxyModel_QBaseRoleNames(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqidentityproxymodel->roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
            memcpy(_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            _hashval_str.data[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = vqidentityproxymodel->roleNames();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<char*>(malloc((_hashval_str.len + 1) * sizeof(char)));
            memcpy(_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            _hashval_str.data[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnRoleNames(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_RoleNames_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_MultiData(const QIdentityProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->multiData(*index, *roleDataSpan);
    } else {
        vqidentityproxymodel->multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseMultiData(const QIdentityProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MultiData_IsBase(true);
        vqidentityproxymodel->multiData(*index, *roleDataSpan);
    } else {
        vqidentityproxymodel->multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnMultiData(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_MultiData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_ResetInternalData(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->resetInternalData();
    } else {
        vqidentityproxymodel->resetInternalData();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseResetInternalData(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ResetInternalData_IsBase(true);
        vqidentityproxymodel->resetInternalData();
    } else {
        vqidentityproxymodel->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnResetInternalData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_Event(QIdentityProxyModel* self, QEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->event(event);
    } else {
        return vqidentityproxymodel->event(event);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseEvent(QIdentityProxyModel* self, QEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_Event_IsBase(true);
        return vqidentityproxymodel->event(event);
    } else {
        return vqidentityproxymodel->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEvent(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_Event_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_EventFilter(QIdentityProxyModel* self, QObject* watched, QEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->eventFilter(watched, event);
    } else {
        return vqidentityproxymodel->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseEventFilter(QIdentityProxyModel* self, QObject* watched, QEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EventFilter_IsBase(true);
        return vqidentityproxymodel->eventFilter(watched, event);
    } else {
        return vqidentityproxymodel->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEventFilter(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EventFilter_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_TimerEvent(QIdentityProxyModel* self, QTimerEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->timerEvent(event);
    } else {
        vqidentityproxymodel->timerEvent(event);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseTimerEvent(QIdentityProxyModel* self, QTimerEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_TimerEvent_IsBase(true);
        vqidentityproxymodel->timerEvent(event);
    } else {
        vqidentityproxymodel->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnTimerEvent(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_ChildEvent(QIdentityProxyModel* self, QChildEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->childEvent(event);
    } else {
        vqidentityproxymodel->childEvent(event);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseChildEvent(QIdentityProxyModel* self, QChildEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ChildEvent_IsBase(true);
        vqidentityproxymodel->childEvent(event);
    } else {
        vqidentityproxymodel->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnChildEvent(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_CustomEvent(QIdentityProxyModel* self, QEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->customEvent(event);
    } else {
        vqidentityproxymodel->customEvent(event);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseCustomEvent(QIdentityProxyModel* self, QEvent* event) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_CustomEvent_IsBase(true);
        vqidentityproxymodel->customEvent(event);
    } else {
        vqidentityproxymodel->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCustomEvent(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_ConnectNotify(QIdentityProxyModel* self, QMetaMethod* signal) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->connectNotify(*signal);
    } else {
        vqidentityproxymodel->connectNotify(*signal);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseConnectNotify(QIdentityProxyModel* self, QMetaMethod* signal) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ConnectNotify_IsBase(true);
        vqidentityproxymodel->connectNotify(*signal);
    } else {
        vqidentityproxymodel->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnConnectNotify(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_DisconnectNotify(QIdentityProxyModel* self, QMetaMethod* signal) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->disconnectNotify(*signal);
    } else {
        vqidentityproxymodel->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseDisconnectNotify(QIdentityProxyModel* self, QMetaMethod* signal) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_DisconnectNotify_IsBase(true);
        vqidentityproxymodel->disconnectNotify(*signal);
    } else {
        vqidentityproxymodel->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnDisconnectNotify(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_CreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QModelIndex(vqidentityproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseCreateSourceIndex(const QIdentityProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCreateSourceIndex(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QIdentityProxyModel_CreateIndex(const QIdentityProxyModel* self, int row, int column) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return new QModelIndex(vqidentityproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QIdentityProxyModel_QBaseCreateIndex(const QIdentityProxyModel* self, int row, int column) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqidentityproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnCreateIndex(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EncodeData(const QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->encodeData(indexes_QList, *stream);
    } else {
        vqidentityproxymodel->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEncodeData(const QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_EncodeData_IsBase(true);
        vqidentityproxymodel->encodeData(indexes_QList, *stream);
    } else {
        vqidentityproxymodel->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEncodeData(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_EncodeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_DecodeData(QIdentityProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return vqidentityproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseDecodeData(QIdentityProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_DecodeData_IsBase(true);
        return vqidentityproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return vqidentityproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnDecodeData(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_DecodeData_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_BeginInsertRows(QIdentityProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqidentityproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseBeginInsertRows(QIdentityProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginInsertRows_IsBase(true);
        vqidentityproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqidentityproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginInsertRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndInsertRows(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->endInsertRows();
    } else {
        vqidentityproxymodel->endInsertRows();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndInsertRows(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndInsertRows_IsBase(true);
        vqidentityproxymodel->endInsertRows();
    } else {
        vqidentityproxymodel->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndInsertRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_BeginRemoveRows(QIdentityProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqidentityproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseBeginRemoveRows(QIdentityProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginRemoveRows_IsBase(true);
        vqidentityproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqidentityproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginRemoveRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndRemoveRows(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->endRemoveRows();
    } else {
        vqidentityproxymodel->endRemoveRows();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndRemoveRows(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndRemoveRows_IsBase(true);
        vqidentityproxymodel->endRemoveRows();
    } else {
        vqidentityproxymodel->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndRemoveRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_BeginMoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return vqidentityproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseBeginMoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginMoveRows_IsBase(true);
        return vqidentityproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return vqidentityproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginMoveRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndMoveRows(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->endMoveRows();
    } else {
        vqidentityproxymodel->endMoveRows();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndMoveRows(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndMoveRows_IsBase(true);
        vqidentityproxymodel->endMoveRows();
    } else {
        vqidentityproxymodel->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndMoveRows(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_BeginInsertColumns(QIdentityProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqidentityproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseBeginInsertColumns(QIdentityProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginInsertColumns_IsBase(true);
        vqidentityproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqidentityproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginInsertColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndInsertColumns(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->endInsertColumns();
    } else {
        vqidentityproxymodel->endInsertColumns();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndInsertColumns(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndInsertColumns_IsBase(true);
        vqidentityproxymodel->endInsertColumns();
    } else {
        vqidentityproxymodel->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndInsertColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_BeginRemoveColumns(QIdentityProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqidentityproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseBeginRemoveColumns(QIdentityProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginRemoveColumns_IsBase(true);
        vqidentityproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqidentityproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginRemoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndRemoveColumns(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->endRemoveColumns();
    } else {
        vqidentityproxymodel->endRemoveColumns();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndRemoveColumns(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndRemoveColumns_IsBase(true);
        vqidentityproxymodel->endRemoveColumns();
    } else {
        vqidentityproxymodel->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndRemoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_BeginMoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        return vqidentityproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return vqidentityproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseBeginMoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginMoveColumns_IsBase(true);
        return vqidentityproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return vqidentityproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginMoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndMoveColumns(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->endMoveColumns();
    } else {
        vqidentityproxymodel->endMoveColumns();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndMoveColumns(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndMoveColumns_IsBase(true);
        vqidentityproxymodel->endMoveColumns();
    } else {
        vqidentityproxymodel->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndMoveColumns(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_BeginResetModel(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->beginResetModel();
    } else {
        vqidentityproxymodel->beginResetModel();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseBeginResetModel(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginResetModel_IsBase(true);
        vqidentityproxymodel->beginResetModel();
    } else {
        vqidentityproxymodel->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnBeginResetModel(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_EndResetModel(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->endResetModel();
    } else {
        vqidentityproxymodel->endResetModel();
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseEndResetModel(QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndResetModel_IsBase(true);
        vqidentityproxymodel->endResetModel();
    } else {
        vqidentityproxymodel->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnEndResetModel(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_ChangePersistentIndex(QIdentityProxyModel* self, QModelIndex* from, QModelIndex* to) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->changePersistentIndex(*from, *to);
    } else {
        vqidentityproxymodel->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseChangePersistentIndex(QIdentityProxyModel* self, QModelIndex* from, QModelIndex* to) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ChangePersistentIndex_IsBase(true);
        vqidentityproxymodel->changePersistentIndex(*from, *to);
    } else {
        vqidentityproxymodel->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnChangePersistentIndex(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QIdentityProxyModel_ChangePersistentIndexList(QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QModelIndexList from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data.ptr);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QModelIndexList to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data.ptr);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        vqidentityproxymodel->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QIdentityProxyModel_QBaseChangePersistentIndexList(QIdentityProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
    QModelIndexList from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data.ptr);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QModelIndexList to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data.ptr);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ChangePersistentIndexList_IsBase(true);
        vqidentityproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        vqidentityproxymodel->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnChangePersistentIndexList(QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = dynamic_cast<VirtualQIdentityProxyModel*>(self)) {
        vqidentityproxymodel->setQIdentityProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QIdentityProxyModel_PersistentIndexList(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        QModelIndexList _ret = vqidentityproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = vqidentityproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QIdentityProxyModel_QBasePersistentIndexList(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_PersistentIndexList_IsBase(true);
        QModelIndexList _ret = vqidentityproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = vqidentityproxymodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnPersistentIndexList(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QIdentityProxyModel_Sender(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->sender();
    } else {
        return vqidentityproxymodel->sender();
    }
}

// Base class handler implementation
QObject* QIdentityProxyModel_QBaseSender(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Sender_IsBase(true);
        return vqidentityproxymodel->sender();
    } else {
        return vqidentityproxymodel->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSender(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Sender_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_SenderSignalIndex(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->senderSignalIndex();
    } else {
        return vqidentityproxymodel->senderSignalIndex();
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseSenderSignalIndex(const QIdentityProxyModel* self) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_SenderSignalIndex_IsBase(true);
        return vqidentityproxymodel->senderSignalIndex();
    } else {
        return vqidentityproxymodel->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnSenderSignalIndex(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QIdentityProxyModel_Receivers(const QIdentityProxyModel* self, const char* signal) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->receivers(signal);
    } else {
        return vqidentityproxymodel->receivers(signal);
    }
}

// Base class handler implementation
int QIdentityProxyModel_QBaseReceivers(const QIdentityProxyModel* self, const char* signal) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Receivers_IsBase(true);
        return vqidentityproxymodel->receivers(signal);
    } else {
        return vqidentityproxymodel->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnReceivers(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_Receivers_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIdentityProxyModel_IsSignalConnected(const QIdentityProxyModel* self, QMetaMethod* signal) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        return vqidentityproxymodel->isSignalConnected(*signal);
    } else {
        return vqidentityproxymodel->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QIdentityProxyModel_QBaseIsSignalConnected(const QIdentityProxyModel* self, QMetaMethod* signal) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_IsSignalConnected_IsBase(true);
        return vqidentityproxymodel->isSignalConnected(*signal);
    } else {
        return vqidentityproxymodel->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QIdentityProxyModel_OnIsSignalConnected(const QIdentityProxyModel* self, intptr_t slot) {
    if (auto* vqidentityproxymodel = const_cast<VirtualQIdentityProxyModel*>(dynamic_cast<const VirtualQIdentityProxyModel*>(self))) {
        vqidentityproxymodel->setQIdentityProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQIdentityProxyModel::QIdentityProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void QIdentityProxyModel_Delete(QIdentityProxyModel* self) {
    delete self;
}
