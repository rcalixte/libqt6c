#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
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
#include <qabstractproxymodel.h>
#include "libqabstractproxymodel.hpp"
#include "libqabstractproxymodel.hxx"

QAbstractProxyModel* QAbstractProxyModel_new() {
    return new VirtualQAbstractProxyModel();
}

QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent) {
    return new VirtualQAbstractProxyModel(parent);
}

QMetaObject* QAbstractProxyModel_MetaObject(const QAbstractProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractProxyModel_Metacast(QAbstractProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractProxyModel_Metacall(QAbstractProxyModel* self, int param1, int param2, void** param3) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractProxyModel_OnMetacall(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_Metacall_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractProxyModel_QBaseMetacall(QAbstractProxyModel* self, int param1, int param2, void** param3) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_Metacall_IsBase(true);
        return vqabstractproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractProxyModel_Tr(const char* s) {
    QString _ret = QAbstractProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QAbstractProxyModel_SourceModel(const QAbstractProxyModel* self) {
    return self->sourceModel();
}

libqt_string QAbstractProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractProxyModel::tr(s, c, static_cast<int>(n));
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
void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setSourceModel(sourceModel);
    } else {
        vqabstractproxymodel->setSourceModel(sourceModel);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseSetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_SetSourceModel_IsBase(true);
        vqabstractproxymodel->setSourceModel(sourceModel);
    } else {
        vqabstractproxymodel->setSourceModel(sourceModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetSourceModel(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_SetSourceModel_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetSourceModel_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_MapToSource(const QAbstractProxyModel* self, QModelIndex* proxyIndex) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QModelIndex(vqabstractproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(self->mapToSource(*proxyIndex));
    }
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseMapToSource(const QAbstractProxyModel* self, QModelIndex* proxyIndex) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MapToSource_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->mapToSource(*proxyIndex));
    } else {
        return new QModelIndex(self->mapToSource(*proxyIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapToSource(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MapToSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_MapFromSource(const QAbstractProxyModel* self, QModelIndex* sourceIndex) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QModelIndex(vqabstractproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(self->mapFromSource(*sourceIndex));
    }
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseMapFromSource(const QAbstractProxyModel* self, QModelIndex* sourceIndex) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MapFromSource_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->mapFromSource(*sourceIndex));
    } else {
        return new QModelIndex(self->mapFromSource(*sourceIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapFromSource(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MapFromSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* QAbstractProxyModel_MapSelectionToSource(const QAbstractProxyModel* self, QItemSelection* selection) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QItemSelection(vqabstractproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(self->mapSelectionToSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* QAbstractProxyModel_QBaseMapSelectionToSource(const QAbstractProxyModel* self, QItemSelection* selection) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MapSelectionToSource_IsBase(true);
        return new QItemSelection(vqabstractproxymodel->mapSelectionToSource(*selection));
    } else {
        return new QItemSelection(self->mapSelectionToSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapSelectionToSource(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MapSelectionToSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapSelectionToSource_Callback>(slot));
    }
}

// Derived class handler implementation
QItemSelection* QAbstractProxyModel_MapSelectionFromSource(const QAbstractProxyModel* self, QItemSelection* selection) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QItemSelection(vqabstractproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(self->mapSelectionFromSource(*selection));
    }
}

// Base class handler implementation
QItemSelection* QAbstractProxyModel_QBaseMapSelectionFromSource(const QAbstractProxyModel* self, QItemSelection* selection) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MapSelectionFromSource_IsBase(true);
        return new QItemSelection(vqabstractproxymodel->mapSelectionFromSource(*selection));
    } else {
        return new QItemSelection(self->mapSelectionFromSource(*selection));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMapSelectionFromSource(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MapSelectionFromSource_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MapSelectionFromSource_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_Submit(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->submit();
    } else {
        return vqabstractproxymodel->submit();
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseSubmit(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_Submit_IsBase(true);
        return vqabstractproxymodel->submit();
    } else {
        return vqabstractproxymodel->submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSubmit(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_Submit_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_Revert(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->revert();
    } else {
        vqabstractproxymodel->revert();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseRevert(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_Revert_IsBase(true);
        vqabstractproxymodel->revert();
    } else {
        vqabstractproxymodel->revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRevert(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_Revert_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractProxyModel_Data(const QAbstractProxyModel* self, QModelIndex* proxyIndex, int role) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QVariant(vqabstractproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QAbstractProxyModel_QBaseData(const QAbstractProxyModel* self, QModelIndex* proxyIndex, int role) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Data_IsBase(true);
        return new QVariant(vqabstractproxymodel->data(*proxyIndex, static_cast<int>(role)));
    } else {
        return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnData(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Data_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractProxyModel_HeaderData(const QAbstractProxyModel* self, int section, int orientation, int role) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QVariant(vqabstractproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QAbstractProxyModel_QBaseHeaderData(const QAbstractProxyModel* self, int section, int orientation, int role) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_HeaderData_IsBase(true);
        return new QVariant(vqabstractproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnHeaderData(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QAbstractProxyModel_ItemData(const QAbstractProxyModel* self, QModelIndex* index) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        QMap<int, QVariant> _ret = vqabstractproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = vqabstractproxymodel->itemData(*index);
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
libqt_map /* of int to QVariant* */ QAbstractProxyModel_QBaseItemData(const QAbstractProxyModel* self, QModelIndex* index) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqabstractproxymodel->itemData(*index);
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
        QMap<int, QVariant> _ret = vqabstractproxymodel->itemData(*index);
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
void QAbstractProxyModel_OnItemData(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_ItemData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_Flags(const QAbstractProxyModel* self, QModelIndex* index) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return static_cast<int>(vqabstractproxymodel->flags(*index));
    } else {
        return static_cast<int>(vqabstractproxymodel->flags(*index));
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseFlags(const QAbstractProxyModel* self, QModelIndex* index) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Flags_IsBase(true);
        return static_cast<int>(vqabstractproxymodel->flags(*index));
    } else {
        return static_cast<int>(vqabstractproxymodel->flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnFlags(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Flags_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return vqabstractproxymodel->setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseSetData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_SetData_IsBase(true);
        return vqabstractproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return vqabstractproxymodel->setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_SetData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_SetItemData(QAbstractProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->setItemData(*index, roles_QMap);
    } else {
        return vqabstractproxymodel->setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseSetItemData(QAbstractProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_SetItemData_IsBase(true);
        return vqabstractproxymodel->setItemData(*index, roles_QMap);
    } else {
        return vqabstractproxymodel->setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetItemData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, int orientation, QVariant* value, int role) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return vqabstractproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseSetHeaderData(QAbstractProxyModel* self, int section, int orientation, QVariant* value, int role) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_SetHeaderData_IsBase(true);
        return vqabstractproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return vqabstractproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSetHeaderData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_ClearItemData(QAbstractProxyModel* self, QModelIndex* index) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->clearItemData(*index);
    } else {
        return vqabstractproxymodel->clearItemData(*index);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseClearItemData(QAbstractProxyModel* self, QModelIndex* index) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ClearItemData_IsBase(true);
        return vqabstractproxymodel->clearItemData(*index);
    } else {
        return vqabstractproxymodel->clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnClearItemData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_Buddy(const QAbstractProxyModel* self, QModelIndex* index) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QModelIndex(vqabstractproxymodel->buddy(*index));
    } else {
        return new QModelIndex(self->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseBuddy(const QAbstractProxyModel* self, QModelIndex* index) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->buddy(*index));
    } else {
        return new QModelIndex(self->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBuddy(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Buddy_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_CanFetchMore(const QAbstractProxyModel* self, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->canFetchMore(*parent);
    } else {
        return vqabstractproxymodel->canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseCanFetchMore(const QAbstractProxyModel* self, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_CanFetchMore_IsBase(true);
        return vqabstractproxymodel->canFetchMore(*parent);
    } else {
        return vqabstractproxymodel->canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCanFetchMore(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->fetchMore(*parent);
    } else {
        vqabstractproxymodel->fetchMore(*parent);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseFetchMore(QAbstractProxyModel* self, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_FetchMore_IsBase(true);
        vqabstractproxymodel->fetchMore(*parent);
    } else {
        vqabstractproxymodel->fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnFetchMore(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_FetchMore_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column, int order) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        vqabstractproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseSort(QAbstractProxyModel* self, int column, int order) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_Sort_IsBase(true);
        vqabstractproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        vqabstractproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSort(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_Sort_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractProxyModel_Span(const QAbstractProxyModel* self, QModelIndex* index) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QSize(vqabstractproxymodel->span(*index));
    } else {
        return new QSize(self->span(*index));
    }
}

// Base class handler implementation
QSize* QAbstractProxyModel_QBaseSpan(const QAbstractProxyModel* self, QModelIndex* index) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Span_IsBase(true);
        return new QSize(vqabstractproxymodel->span(*index));
    } else {
        return new QSize(self->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSpan(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Span_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_HasChildren(const QAbstractProxyModel* self, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->hasChildren(*parent);
    } else {
        return vqabstractproxymodel->hasChildren(*parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseHasChildren(const QAbstractProxyModel* self, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_HasChildren_IsBase(true);
        return vqabstractproxymodel->hasChildren(*parent);
    } else {
        return vqabstractproxymodel->hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnHasChildren(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_HasChildren_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_Sibling(const QAbstractProxyModel* self, int row, int column, QModelIndex* idx) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QModelIndex(vqabstractproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseSibling(const QAbstractProxyModel* self, int row, int column, QModelIndex* idx) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSibling(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Sibling_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QAbstractProxyModel_MimeData(const QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ indexes) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->mimeData(indexes_QList);
    } else {
        return vqabstractproxymodel->mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QAbstractProxyModel_QBaseMimeData(const QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ indexes) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MimeData_IsBase(true);
        return vqabstractproxymodel->mimeData(indexes_QList);
    } else {
        return vqabstractproxymodel->mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMimeData(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MimeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_CanDropMimeData(const QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqabstractproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseCanDropMimeData(const QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_CanDropMimeData_IsBase(true);
        return vqabstractproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqabstractproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCanDropMimeData(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqabstractproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseDropMimeData(QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_DropMimeData_IsBase(true);
        return vqabstractproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqabstractproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnDropMimeData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QAbstractProxyModel_MimeTypes(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        QStringList _ret = vqabstractproxymodel->mimeTypes();
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
        QStringList _ret = vqabstractproxymodel->mimeTypes();
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
libqt_list /* of libqt_string */ QAbstractProxyModel_QBaseMimeTypes(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MimeTypes_IsBase(true);
        QStringList _ret = vqabstractproxymodel->mimeTypes();
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
        QStringList _ret = vqabstractproxymodel->mimeTypes();
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
void QAbstractProxyModel_OnMimeTypes(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_SupportedDragActions(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return static_cast<int>(vqabstractproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(vqabstractproxymodel->supportedDragActions());
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseSupportedDragActions(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqabstractproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(vqabstractproxymodel->supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSupportedDragActions(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_SupportedDropActions(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return static_cast<int>(vqabstractproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(vqabstractproxymodel->supportedDropActions());
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseSupportedDropActions(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqabstractproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(vqabstractproxymodel->supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSupportedDropActions(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QAbstractProxyModel_RoleNames(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        QHash<int, QByteArray> _ret = vqabstractproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = vqabstractproxymodel->roleNames();
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
libqt_map /* of int to libqt_string */ QAbstractProxyModel_QBaseRoleNames(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqabstractproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = vqabstractproxymodel->roleNames();
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
void QAbstractProxyModel_OnRoleNames(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_RoleNames_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_Index(const QAbstractProxyModel* self, int row, int column, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QModelIndex(vqabstractproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseIndex(const QAbstractProxyModel* self, int row, int column, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Index_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnIndex(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Index_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_Parent(const QAbstractProxyModel* self, QModelIndex* child) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QModelIndex(vqabstractproxymodel->parent(*child));
    } else {
        return new QModelIndex(self->parent(*child));
    }
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseParent(const QAbstractProxyModel* self, QModelIndex* child) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Parent_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->parent(*child));
    } else {
        return new QModelIndex(self->parent(*child));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnParent(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Parent_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_RowCount(const QAbstractProxyModel* self, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->rowCount(*parent);
    } else {
        return vqabstractproxymodel->rowCount(*parent);
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseRowCount(const QAbstractProxyModel* self, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_RowCount_IsBase(true);
        return vqabstractproxymodel->rowCount(*parent);
    } else {
        return vqabstractproxymodel->rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRowCount(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_RowCount_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_ColumnCount(const QAbstractProxyModel* self, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->columnCount(*parent);
    } else {
        return vqabstractproxymodel->columnCount(*parent);
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseColumnCount(const QAbstractProxyModel* self, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_ColumnCount_IsBase(true);
        return vqabstractproxymodel->columnCount(*parent);
    } else {
        return vqabstractproxymodel->columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnColumnCount(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_InsertRows(QAbstractProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqabstractproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseInsertRows(QAbstractProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_InsertRows_IsBase(true);
        return vqabstractproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqabstractproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnInsertRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_InsertColumns(QAbstractProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqabstractproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseInsertColumns(QAbstractProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_InsertColumns_IsBase(true);
        return vqabstractproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqabstractproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnInsertColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_RemoveRows(QAbstractProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqabstractproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseRemoveRows(QAbstractProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_RemoveRows_IsBase(true);
        return vqabstractproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqabstractproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRemoveRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_RemoveColumns(QAbstractProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqabstractproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseRemoveColumns(QAbstractProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_RemoveColumns_IsBase(true);
        return vqabstractproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqabstractproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnRemoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_MoveRows(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqabstractproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseMoveRows(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_MoveRows_IsBase(true);
        return vqabstractproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqabstractproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMoveRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_MoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_MoveColumns(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqabstractproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseMoveColumns(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_MoveColumns_IsBase(true);
        return vqabstractproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqabstractproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractProxyModel_Match(const QAbstractProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        QModelIndexList _ret = vqabstractproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QModelIndexList _ret = vqabstractproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QAbstractProxyModel_QBaseMatch(const QAbstractProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Match_IsBase(true);
        QModelIndexList _ret = vqabstractproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QModelIndexList _ret = vqabstractproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QAbstractProxyModel_OnMatch(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Match_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_MultiData(const QAbstractProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->multiData(*index, *roleDataSpan);
    } else {
        vqabstractproxymodel->multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseMultiData(const QAbstractProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MultiData_IsBase(true);
        vqabstractproxymodel->multiData(*index, *roleDataSpan);
    } else {
        vqabstractproxymodel->multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnMultiData(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_MultiData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_ResetInternalData(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->resetInternalData();
    } else {
        vqabstractproxymodel->resetInternalData();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseResetInternalData(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ResetInternalData_IsBase(true);
        vqabstractproxymodel->resetInternalData();
    } else {
        vqabstractproxymodel->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnResetInternalData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_Event(QAbstractProxyModel* self, QEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->event(event);
    } else {
        return vqabstractproxymodel->event(event);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseEvent(QAbstractProxyModel* self, QEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_Event_IsBase(true);
        return vqabstractproxymodel->event(event);
    } else {
        return vqabstractproxymodel->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEvent(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_Event_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_EventFilter(QAbstractProxyModel* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->eventFilter(watched, event);
    } else {
        return vqabstractproxymodel->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseEventFilter(QAbstractProxyModel* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EventFilter_IsBase(true);
        return vqabstractproxymodel->eventFilter(watched, event);
    } else {
        return vqabstractproxymodel->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEventFilter(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EventFilter_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_TimerEvent(QAbstractProxyModel* self, QTimerEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->timerEvent(event);
    } else {
        vqabstractproxymodel->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseTimerEvent(QAbstractProxyModel* self, QTimerEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_TimerEvent_IsBase(true);
        vqabstractproxymodel->timerEvent(event);
    } else {
        vqabstractproxymodel->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnTimerEvent(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_ChildEvent(QAbstractProxyModel* self, QChildEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->childEvent(event);
    } else {
        vqabstractproxymodel->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseChildEvent(QAbstractProxyModel* self, QChildEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ChildEvent_IsBase(true);
        vqabstractproxymodel->childEvent(event);
    } else {
        vqabstractproxymodel->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnChildEvent(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_CustomEvent(QAbstractProxyModel* self, QEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->customEvent(event);
    } else {
        vqabstractproxymodel->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseCustomEvent(QAbstractProxyModel* self, QEvent* event) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_CustomEvent_IsBase(true);
        vqabstractproxymodel->customEvent(event);
    } else {
        vqabstractproxymodel->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCustomEvent(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_ConnectNotify(QAbstractProxyModel* self, QMetaMethod* signal) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->connectNotify(*signal);
    } else {
        vqabstractproxymodel->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseConnectNotify(QAbstractProxyModel* self, QMetaMethod* signal) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ConnectNotify_IsBase(true);
        vqabstractproxymodel->connectNotify(*signal);
    } else {
        vqabstractproxymodel->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnConnectNotify(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_DisconnectNotify(QAbstractProxyModel* self, QMetaMethod* signal) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->disconnectNotify(*signal);
    } else {
        vqabstractproxymodel->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseDisconnectNotify(QAbstractProxyModel* self, QMetaMethod* signal) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_DisconnectNotify_IsBase(true);
        vqabstractproxymodel->disconnectNotify(*signal);
    } else {
        vqabstractproxymodel->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnDisconnectNotify(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_CreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QModelIndex(vqabstractproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseCreateSourceIndex(const QAbstractProxyModel* self, int row, int col, void* internalPtr) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_CreateSourceIndex_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCreateSourceIndex(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_CreateSourceIndex_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CreateSourceIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractProxyModel_CreateIndex(const QAbstractProxyModel* self, int row, int column) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return new QModelIndex(vqabstractproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QAbstractProxyModel_QBaseCreateIndex(const QAbstractProxyModel* self, int row, int column) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqabstractproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnCreateIndex(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EncodeData(const QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->encodeData(indexes_QList, *stream);
    } else {
        vqabstractproxymodel->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEncodeData(const QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_EncodeData_IsBase(true);
        vqabstractproxymodel->encodeData(indexes_QList, *stream);
    } else {
        vqabstractproxymodel->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEncodeData(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_EncodeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_DecodeData(QAbstractProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return vqabstractproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseDecodeData(QAbstractProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_DecodeData_IsBase(true);
        return vqabstractproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return vqabstractproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnDecodeData(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_DecodeData_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_BeginInsertRows(QAbstractProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqabstractproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseBeginInsertRows(QAbstractProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginInsertRows_IsBase(true);
        vqabstractproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqabstractproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginInsertRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndInsertRows(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->endInsertRows();
    } else {
        vqabstractproxymodel->endInsertRows();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndInsertRows(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndInsertRows_IsBase(true);
        vqabstractproxymodel->endInsertRows();
    } else {
        vqabstractproxymodel->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndInsertRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_BeginRemoveRows(QAbstractProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqabstractproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseBeginRemoveRows(QAbstractProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginRemoveRows_IsBase(true);
        vqabstractproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqabstractproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginRemoveRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndRemoveRows(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->endRemoveRows();
    } else {
        vqabstractproxymodel->endRemoveRows();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndRemoveRows(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndRemoveRows_IsBase(true);
        vqabstractproxymodel->endRemoveRows();
    } else {
        vqabstractproxymodel->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndRemoveRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_BeginMoveRows(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return vqabstractproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseBeginMoveRows(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginMoveRows_IsBase(true);
        return vqabstractproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return vqabstractproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginMoveRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndMoveRows(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->endMoveRows();
    } else {
        vqabstractproxymodel->endMoveRows();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndMoveRows(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndMoveRows_IsBase(true);
        vqabstractproxymodel->endMoveRows();
    } else {
        vqabstractproxymodel->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndMoveRows(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_BeginInsertColumns(QAbstractProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqabstractproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseBeginInsertColumns(QAbstractProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginInsertColumns_IsBase(true);
        vqabstractproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqabstractproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginInsertColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndInsertColumns(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->endInsertColumns();
    } else {
        vqabstractproxymodel->endInsertColumns();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndInsertColumns(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndInsertColumns_IsBase(true);
        vqabstractproxymodel->endInsertColumns();
    } else {
        vqabstractproxymodel->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndInsertColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_BeginRemoveColumns(QAbstractProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqabstractproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseBeginRemoveColumns(QAbstractProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginRemoveColumns_IsBase(true);
        vqabstractproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqabstractproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginRemoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndRemoveColumns(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->endRemoveColumns();
    } else {
        vqabstractproxymodel->endRemoveColumns();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndRemoveColumns(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndRemoveColumns_IsBase(true);
        vqabstractproxymodel->endRemoveColumns();
    } else {
        vqabstractproxymodel->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndRemoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_BeginMoveColumns(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        return vqabstractproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return vqabstractproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseBeginMoveColumns(QAbstractProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginMoveColumns_IsBase(true);
        return vqabstractproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return vqabstractproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginMoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndMoveColumns(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->endMoveColumns();
    } else {
        vqabstractproxymodel->endMoveColumns();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndMoveColumns(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndMoveColumns_IsBase(true);
        vqabstractproxymodel->endMoveColumns();
    } else {
        vqabstractproxymodel->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndMoveColumns(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_BeginResetModel(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->beginResetModel();
    } else {
        vqabstractproxymodel->beginResetModel();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseBeginResetModel(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginResetModel_IsBase(true);
        vqabstractproxymodel->beginResetModel();
    } else {
        vqabstractproxymodel->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnBeginResetModel(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_EndResetModel(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->endResetModel();
    } else {
        vqabstractproxymodel->endResetModel();
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseEndResetModel(QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndResetModel_IsBase(true);
        vqabstractproxymodel->endResetModel();
    } else {
        vqabstractproxymodel->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnEndResetModel(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_ChangePersistentIndex(QAbstractProxyModel* self, QModelIndex* from, QModelIndex* to) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->changePersistentIndex(*from, *to);
    } else {
        vqabstractproxymodel->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseChangePersistentIndex(QAbstractProxyModel* self, QModelIndex* from, QModelIndex* to) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ChangePersistentIndex_IsBase(true);
        vqabstractproxymodel->changePersistentIndex(*from, *to);
    } else {
        vqabstractproxymodel->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnChangePersistentIndex(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractProxyModel_ChangePersistentIndexList(QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
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
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        vqabstractproxymodel->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QAbstractProxyModel_QBaseChangePersistentIndexList(QAbstractProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
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
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ChangePersistentIndexList_IsBase(true);
        vqabstractproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        vqabstractproxymodel->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnChangePersistentIndexList(QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = dynamic_cast<VirtualQAbstractProxyModel*>(self)) {
        vqabstractproxymodel->setQAbstractProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractProxyModel_PersistentIndexList(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        QModelIndexList _ret = vqabstractproxymodel->persistentIndexList();
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
        QModelIndexList _ret = vqabstractproxymodel->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QAbstractProxyModel_QBasePersistentIndexList(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_PersistentIndexList_IsBase(true);
        QModelIndexList _ret = vqabstractproxymodel->persistentIndexList();
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
        QModelIndexList _ret = vqabstractproxymodel->persistentIndexList();
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
void QAbstractProxyModel_OnPersistentIndexList(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractProxyModel_Sender(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->sender();
    } else {
        return vqabstractproxymodel->sender();
    }
}

// Base class handler implementation
QObject* QAbstractProxyModel_QBaseSender(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Sender_IsBase(true);
        return vqabstractproxymodel->sender();
    } else {
        return vqabstractproxymodel->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSender(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Sender_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_SenderSignalIndex(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->senderSignalIndex();
    } else {
        return vqabstractproxymodel->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseSenderSignalIndex(const QAbstractProxyModel* self) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_SenderSignalIndex_IsBase(true);
        return vqabstractproxymodel->senderSignalIndex();
    } else {
        return vqabstractproxymodel->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnSenderSignalIndex(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractProxyModel_Receivers(const QAbstractProxyModel* self, const char* signal) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->receivers(signal);
    } else {
        return vqabstractproxymodel->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractProxyModel_QBaseReceivers(const QAbstractProxyModel* self, const char* signal) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Receivers_IsBase(true);
        return vqabstractproxymodel->receivers(signal);
    } else {
        return vqabstractproxymodel->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnReceivers(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_Receivers_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractProxyModel_IsSignalConnected(const QAbstractProxyModel* self, QMetaMethod* signal) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        return vqabstractproxymodel->isSignalConnected(*signal);
    } else {
        return vqabstractproxymodel->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractProxyModel_QBaseIsSignalConnected(const QAbstractProxyModel* self, QMetaMethod* signal) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_IsSignalConnected_IsBase(true);
        return vqabstractproxymodel->isSignalConnected(*signal);
    } else {
        return vqabstractproxymodel->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractProxyModel_OnIsSignalConnected(const QAbstractProxyModel* self, intptr_t slot) {
    if (auto* vqabstractproxymodel = const_cast<VirtualQAbstractProxyModel*>(dynamic_cast<const VirtualQAbstractProxyModel*>(self))) {
        vqabstractproxymodel->setQAbstractProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractProxyModel::QAbstractProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractProxyModel_Delete(QAbstractProxyModel* self) {
    delete self;
}
