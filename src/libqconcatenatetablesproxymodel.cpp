#include <QAbstractItemModel>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QConcatenateTablesProxyModel>
#include <QDataStream>
#include <QEvent>
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
#include <qconcatenatetablesproxymodel.h>
#include "libqconcatenatetablesproxymodel.hpp"
#include "libqconcatenatetablesproxymodel.hxx"

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new() {
    return new VirtualQConcatenateTablesProxyModel();
}

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent) {
    return new VirtualQConcatenateTablesProxyModel(parent);
}

QMetaObject* QConcatenateTablesProxyModel_MetaObject(const QConcatenateTablesProxyModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QConcatenateTablesProxyModel_Metacast(QConcatenateTablesProxyModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QConcatenateTablesProxyModel_Metacall(QConcatenateTablesProxyModel* self, int param1, int param2, void** param3) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QConcatenateTablesProxyModel_OnMetacall(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Metacall_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QConcatenateTablesProxyModel_QBaseMetacall(QConcatenateTablesProxyModel* self, int param1, int param2, void** param3) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Metacall_IsBase(true);
        return vqconcatenatetablesproxymodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QConcatenateTablesProxyModel_Tr(const char* s) {
    QString _ret = QConcatenateTablesProxyModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAbstractItemModel* */ QConcatenateTablesProxyModel_SourceModels(const QConcatenateTablesProxyModel* self) {
    QList<QAbstractItemModel*> _ret = self->sourceModels();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractItemModel** _arr = static_cast<QAbstractItemModel**>(malloc(sizeof(QAbstractItemModel*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QConcatenateTablesProxyModel_AddSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
    self->addSourceModel(sourceModel);
}

void QConcatenateTablesProxyModel_RemoveSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
    self->removeSourceModel(sourceModel);
}

QModelIndex* QConcatenateTablesProxyModel_MapFromSource(const QConcatenateTablesProxyModel* self, QModelIndex* sourceIndex) {
    return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QConcatenateTablesProxyModel_MapToSource(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex) {
    return new QModelIndex(self->mapToSource(*proxyIndex));
}

libqt_string QConcatenateTablesProxyModel_Tr2(const char* s, const char* c) {
    QString _ret = QConcatenateTablesProxyModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QConcatenateTablesProxyModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QConcatenateTablesProxyModel::tr(s, c, static_cast<int>(n));
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
QVariant* QConcatenateTablesProxyModel_Data(const QConcatenateTablesProxyModel* self, QModelIndex* index, int role) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return new QVariant(vqconcatenatetablesproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QConcatenateTablesProxyModel_QBaseData(const QConcatenateTablesProxyModel* self, QModelIndex* index, int role) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Data_IsBase(true);
        return new QVariant(vqconcatenatetablesproxymodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Data_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_SetData(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return vqconcatenatetablesproxymodel->setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseSetData(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetData_IsBase(true);
        return vqconcatenatetablesproxymodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return vqconcatenatetablesproxymodel->setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QConcatenateTablesProxyModel_ItemData(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        QMap<int, QVariant> _ret = vqconcatenatetablesproxymodel->itemData(*proxyIndex);
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
        QMap<int, QVariant> _ret = vqconcatenatetablesproxymodel->itemData(*proxyIndex);
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
libqt_map /* of int to QVariant* */ QConcatenateTablesProxyModel_QBaseItemData(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqconcatenatetablesproxymodel->itemData(*proxyIndex);
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
        QMap<int, QVariant> _ret = vqconcatenatetablesproxymodel->itemData(*proxyIndex);
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
void QConcatenateTablesProxyModel_OnItemData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ItemData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_SetItemData(QConcatenateTablesProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->setItemData(*index, roles_QMap);
    } else {
        return vqconcatenatetablesproxymodel->setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseSetItemData(QConcatenateTablesProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetItemData_IsBase(true);
        return vqconcatenatetablesproxymodel->setItemData(*index, roles_QMap);
    } else {
        return vqconcatenatetablesproxymodel->setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetItemData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetItemData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_Flags(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return static_cast<int>(vqconcatenatetablesproxymodel->flags(*index));
    } else {
        return static_cast<int>(vqconcatenatetablesproxymodel->flags(*index));
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseFlags(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Flags_IsBase(true);
        return static_cast<int>(vqconcatenatetablesproxymodel->flags(*index));
    } else {
        return static_cast<int>(vqconcatenatetablesproxymodel->flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnFlags(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Flags_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_Index(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return new QModelIndex(vqconcatenatetablesproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseIndex(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Index_IsBase(true);
        return new QModelIndex(vqconcatenatetablesproxymodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnIndex(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Index_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_Parent(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return new QModelIndex(vqconcatenatetablesproxymodel->parent(*index));
    } else {
        return new QModelIndex(self->parent(*index));
    }
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseParent(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Parent_IsBase(true);
        return new QModelIndex(vqconcatenatetablesproxymodel->parent(*index));
    } else {
        return new QModelIndex(self->parent(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnParent(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Parent_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_RowCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->rowCount(*parent);
    } else {
        return vqconcatenatetablesproxymodel->rowCount(*parent);
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseRowCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RowCount_IsBase(true);
        return vqconcatenatetablesproxymodel->rowCount(*parent);
    } else {
        return vqconcatenatetablesproxymodel->rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRowCount(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RowCount_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QConcatenateTablesProxyModel_HeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return new QVariant(vqconcatenatetablesproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QConcatenateTablesProxyModel_QBaseHeaderData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_HeaderData_IsBase(true);
        return new QVariant(vqconcatenatetablesproxymodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnHeaderData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_HeaderData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_ColumnCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->columnCount(*parent);
    } else {
        return vqconcatenatetablesproxymodel->columnCount(*parent);
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseColumnCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ColumnCount_IsBase(true);
        return vqconcatenatetablesproxymodel->columnCount(*parent);
    } else {
        return vqconcatenatetablesproxymodel->columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnColumnCount(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ColumnCount_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QConcatenateTablesProxyModel_MimeTypes(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        QStringList _ret = vqconcatenatetablesproxymodel->mimeTypes();
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
        QStringList _ret = vqconcatenatetablesproxymodel->mimeTypes();
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
libqt_list /* of libqt_string */ QConcatenateTablesProxyModel_QBaseMimeTypes(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeTypes_IsBase(true);
        QStringList _ret = vqconcatenatetablesproxymodel->mimeTypes();
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
        QStringList _ret = vqconcatenatetablesproxymodel->mimeTypes();
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
void QConcatenateTablesProxyModel_OnMimeTypes(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeTypes_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QConcatenateTablesProxyModel_MimeData(const QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->mimeData(indexes_QList);
    } else {
        return vqconcatenatetablesproxymodel->mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QConcatenateTablesProxyModel_QBaseMimeData(const QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeData_IsBase(true);
        return vqconcatenatetablesproxymodel->mimeData(indexes_QList);
    } else {
        return vqconcatenatetablesproxymodel->mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMimeData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MimeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_CanDropMimeData(const QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqconcatenatetablesproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseCanDropMimeData(const QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CanDropMimeData_IsBase(true);
        return vqconcatenatetablesproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqconcatenatetablesproxymodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCanDropMimeData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_DropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqconcatenatetablesproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseDropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DropMimeData_IsBase(true);
        return vqconcatenatetablesproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqconcatenatetablesproxymodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnDropMimeData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DropMimeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QConcatenateTablesProxyModel_Span(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return new QSize(vqconcatenatetablesproxymodel->span(*index));
    } else {
        return new QSize(self->span(*index));
    }
}

// Base class handler implementation
QSize* QConcatenateTablesProxyModel_QBaseSpan(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Span_IsBase(true);
        return new QSize(vqconcatenatetablesproxymodel->span(*index));
    } else {
        return new QSize(self->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSpan(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Span_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_Sibling(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* idx) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return new QModelIndex(vqconcatenatetablesproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseSibling(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* idx) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sibling_IsBase(true);
        return new QModelIndex(vqconcatenatetablesproxymodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSibling(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sibling_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_HasChildren(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->hasChildren(*parent);
    } else {
        return vqconcatenatetablesproxymodel->hasChildren(*parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseHasChildren(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_HasChildren_IsBase(true);
        return vqconcatenatetablesproxymodel->hasChildren(*parent);
    } else {
        return vqconcatenatetablesproxymodel->hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnHasChildren(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_HasChildren_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_SetHeaderData(QConcatenateTablesProxyModel* self, int section, int orientation, QVariant* value, int role) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return vqconcatenatetablesproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseSetHeaderData(QConcatenateTablesProxyModel* self, int section, int orientation, QVariant* value, int role) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetHeaderData_IsBase(true);
        return vqconcatenatetablesproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return vqconcatenatetablesproxymodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSetHeaderData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SetHeaderData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_ClearItemData(QConcatenateTablesProxyModel* self, QModelIndex* index) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->clearItemData(*index);
    } else {
        return vqconcatenatetablesproxymodel->clearItemData(*index);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseClearItemData(QConcatenateTablesProxyModel* self, QModelIndex* index) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ClearItemData_IsBase(true);
        return vqconcatenatetablesproxymodel->clearItemData(*index);
    } else {
        return vqconcatenatetablesproxymodel->clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnClearItemData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ClearItemData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_SupportedDropActions(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDropActions());
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseSupportedDropActions(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDropActions());
    } else {
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSupportedDropActions(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_SupportedDragActions(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDragActions());
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseSupportedDragActions(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDragActions());
    } else {
        return static_cast<int>(vqconcatenatetablesproxymodel->supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSupportedDragActions(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_InsertRows(QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqconcatenatetablesproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseInsertRows(QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_InsertRows_IsBase(true);
        return vqconcatenatetablesproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqconcatenatetablesproxymodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnInsertRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_InsertRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_InsertColumns(QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqconcatenatetablesproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseInsertColumns(QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_InsertColumns_IsBase(true);
        return vqconcatenatetablesproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqconcatenatetablesproxymodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnInsertColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_InsertColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_RemoveRows(QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqconcatenatetablesproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseRemoveRows(QConcatenateTablesProxyModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RemoveRows_IsBase(true);
        return vqconcatenatetablesproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqconcatenatetablesproxymodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRemoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RemoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_RemoveColumns(QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqconcatenatetablesproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseRemoveColumns(QConcatenateTablesProxyModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RemoveColumns_IsBase(true);
        return vqconcatenatetablesproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqconcatenatetablesproxymodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRemoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RemoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_MoveRows(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqconcatenatetablesproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseMoveRows(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MoveRows_IsBase(true);
        return vqconcatenatetablesproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqconcatenatetablesproxymodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_MoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqconcatenatetablesproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseMoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MoveColumns_IsBase(true);
        return vqconcatenatetablesproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqconcatenatetablesproxymodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_FetchMore(QConcatenateTablesProxyModel* self, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->fetchMore(*parent);
    } else {
        vqconcatenatetablesproxymodel->fetchMore(*parent);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseFetchMore(QConcatenateTablesProxyModel* self, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_FetchMore_IsBase(true);
        vqconcatenatetablesproxymodel->fetchMore(*parent);
    } else {
        vqconcatenatetablesproxymodel->fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnFetchMore(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_FetchMore_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_CanFetchMore(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->canFetchMore(*parent);
    } else {
        return vqconcatenatetablesproxymodel->canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseCanFetchMore(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CanFetchMore_IsBase(true);
        return vqconcatenatetablesproxymodel->canFetchMore(*parent);
    } else {
        return vqconcatenatetablesproxymodel->canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCanFetchMore(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CanFetchMore_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_Sort(QConcatenateTablesProxyModel* self, int column, int order) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        vqconcatenatetablesproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseSort(QConcatenateTablesProxyModel* self, int column, int order) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sort_IsBase(true);
        vqconcatenatetablesproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        vqconcatenatetablesproxymodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSort(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sort_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_Buddy(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return new QModelIndex(vqconcatenatetablesproxymodel->buddy(*index));
    } else {
        return new QModelIndex(self->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseBuddy(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Buddy_IsBase(true);
        return new QModelIndex(vqconcatenatetablesproxymodel->buddy(*index));
    } else {
        return new QModelIndex(self->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBuddy(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Buddy_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_Match(const QConcatenateTablesProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        QModelIndexList _ret = vqconcatenatetablesproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QModelIndexList _ret = vqconcatenatetablesproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_QBaseMatch(const QConcatenateTablesProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Match_IsBase(true);
        QModelIndexList _ret = vqconcatenatetablesproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QModelIndexList _ret = vqconcatenatetablesproxymodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QConcatenateTablesProxyModel_OnMatch(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Match_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QConcatenateTablesProxyModel_RoleNames(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        QHash<int, QByteArray> _ret = vqconcatenatetablesproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = vqconcatenatetablesproxymodel->roleNames();
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
libqt_map /* of int to libqt_string */ QConcatenateTablesProxyModel_QBaseRoleNames(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqconcatenatetablesproxymodel->roleNames();
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
        QHash<int, QByteArray> _ret = vqconcatenatetablesproxymodel->roleNames();
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
void QConcatenateTablesProxyModel_OnRoleNames(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_RoleNames_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_MultiData(const QConcatenateTablesProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->multiData(*index, *roleDataSpan);
    } else {
        vqconcatenatetablesproxymodel->multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseMultiData(const QConcatenateTablesProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MultiData_IsBase(true);
        vqconcatenatetablesproxymodel->multiData(*index, *roleDataSpan);
    } else {
        vqconcatenatetablesproxymodel->multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnMultiData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_MultiData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_Submit(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->submit();
    } else {
        return vqconcatenatetablesproxymodel->submit();
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseSubmit(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Submit_IsBase(true);
        return vqconcatenatetablesproxymodel->submit();
    } else {
        return vqconcatenatetablesproxymodel->submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSubmit(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Submit_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_Revert(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->revert();
    } else {
        vqconcatenatetablesproxymodel->revert();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseRevert(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Revert_IsBase(true);
        vqconcatenatetablesproxymodel->revert();
    } else {
        vqconcatenatetablesproxymodel->revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnRevert(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Revert_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ResetInternalData(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->resetInternalData();
    } else {
        vqconcatenatetablesproxymodel->resetInternalData();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseResetInternalData(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ResetInternalData_IsBase(true);
        vqconcatenatetablesproxymodel->resetInternalData();
    } else {
        vqconcatenatetablesproxymodel->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnResetInternalData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ResetInternalData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_Event(QConcatenateTablesProxyModel* self, QEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->event(event);
    } else {
        return vqconcatenatetablesproxymodel->event(event);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseEvent(QConcatenateTablesProxyModel* self, QEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Event_IsBase(true);
        return vqconcatenatetablesproxymodel->event(event);
    } else {
        return vqconcatenatetablesproxymodel->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Event_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_EventFilter(QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->eventFilter(watched, event);
    } else {
        return vqconcatenatetablesproxymodel->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseEventFilter(QConcatenateTablesProxyModel* self, QObject* watched, QEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EventFilter_IsBase(true);
        return vqconcatenatetablesproxymodel->eventFilter(watched, event);
    } else {
        return vqconcatenatetablesproxymodel->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEventFilter(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EventFilter_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_TimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->timerEvent(event);
    } else {
        vqconcatenatetablesproxymodel->timerEvent(event);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseTimerEvent(QConcatenateTablesProxyModel* self, QTimerEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_TimerEvent_IsBase(true);
        vqconcatenatetablesproxymodel->timerEvent(event);
    } else {
        vqconcatenatetablesproxymodel->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnTimerEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_TimerEvent_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->childEvent(event);
    } else {
        vqconcatenatetablesproxymodel->childEvent(event);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseChildEvent(QConcatenateTablesProxyModel* self, QChildEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChildEvent_IsBase(true);
        vqconcatenatetablesproxymodel->childEvent(event);
    } else {
        vqconcatenatetablesproxymodel->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnChildEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChildEvent_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_CustomEvent(QConcatenateTablesProxyModel* self, QEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->customEvent(event);
    } else {
        vqconcatenatetablesproxymodel->customEvent(event);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseCustomEvent(QConcatenateTablesProxyModel* self, QEvent* event) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CustomEvent_IsBase(true);
        vqconcatenatetablesproxymodel->customEvent(event);
    } else {
        vqconcatenatetablesproxymodel->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCustomEvent(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CustomEvent_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ConnectNotify(QConcatenateTablesProxyModel* self, QMetaMethod* signal) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->connectNotify(*signal);
    } else {
        vqconcatenatetablesproxymodel->connectNotify(*signal);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseConnectNotify(QConcatenateTablesProxyModel* self, QMetaMethod* signal) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ConnectNotify_IsBase(true);
        vqconcatenatetablesproxymodel->connectNotify(*signal);
    } else {
        vqconcatenatetablesproxymodel->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnConnectNotify(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ConnectNotify_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_DisconnectNotify(QConcatenateTablesProxyModel* self, QMetaMethod* signal) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->disconnectNotify(*signal);
    } else {
        vqconcatenatetablesproxymodel->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseDisconnectNotify(QConcatenateTablesProxyModel* self, QMetaMethod* signal) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DisconnectNotify_IsBase(true);
        vqconcatenatetablesproxymodel->disconnectNotify(*signal);
    } else {
        vqconcatenatetablesproxymodel->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnDisconnectNotify(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QConcatenateTablesProxyModel_CreateIndex(const QConcatenateTablesProxyModel* self, int row, int column) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return new QModelIndex(vqconcatenatetablesproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QConcatenateTablesProxyModel_QBaseCreateIndex(const QConcatenateTablesProxyModel* self, int row, int column) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqconcatenatetablesproxymodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnCreateIndex(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_CreateIndex_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EncodeData(const QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->encodeData(indexes_QList, *stream);
    } else {
        vqconcatenatetablesproxymodel->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEncodeData(const QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EncodeData_IsBase(true);
        vqconcatenatetablesproxymodel->encodeData(indexes_QList, *stream);
    } else {
        vqconcatenatetablesproxymodel->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEncodeData(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EncodeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_DecodeData(QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return vqconcatenatetablesproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseDecodeData(QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DecodeData_IsBase(true);
        return vqconcatenatetablesproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return vqconcatenatetablesproxymodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnDecodeData(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_DecodeData_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_BeginInsertRows(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqconcatenatetablesproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseBeginInsertRows(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginInsertRows_IsBase(true);
        vqconcatenatetablesproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqconcatenatetablesproxymodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginInsertRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndInsertRows(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->endInsertRows();
    } else {
        vqconcatenatetablesproxymodel->endInsertRows();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndInsertRows(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndInsertRows_IsBase(true);
        vqconcatenatetablesproxymodel->endInsertRows();
    } else {
        vqconcatenatetablesproxymodel->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndInsertRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndInsertRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_BeginRemoveRows(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqconcatenatetablesproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseBeginRemoveRows(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginRemoveRows_IsBase(true);
        vqconcatenatetablesproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqconcatenatetablesproxymodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginRemoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndRemoveRows(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->endRemoveRows();
    } else {
        vqconcatenatetablesproxymodel->endRemoveRows();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndRemoveRows(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndRemoveRows_IsBase(true);
        vqconcatenatetablesproxymodel->endRemoveRows();
    } else {
        vqconcatenatetablesproxymodel->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndRemoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_BeginMoveRows(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return vqconcatenatetablesproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseBeginMoveRows(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginMoveRows_IsBase(true);
        return vqconcatenatetablesproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return vqconcatenatetablesproxymodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginMoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndMoveRows(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->endMoveRows();
    } else {
        vqconcatenatetablesproxymodel->endMoveRows();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndMoveRows(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndMoveRows_IsBase(true);
        vqconcatenatetablesproxymodel->endMoveRows();
    } else {
        vqconcatenatetablesproxymodel->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndMoveRows(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndMoveRows_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_BeginInsertColumns(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqconcatenatetablesproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseBeginInsertColumns(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginInsertColumns_IsBase(true);
        vqconcatenatetablesproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqconcatenatetablesproxymodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginInsertColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndInsertColumns(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->endInsertColumns();
    } else {
        vqconcatenatetablesproxymodel->endInsertColumns();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndInsertColumns(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndInsertColumns_IsBase(true);
        vqconcatenatetablesproxymodel->endInsertColumns();
    } else {
        vqconcatenatetablesproxymodel->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndInsertColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_BeginRemoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqconcatenatetablesproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseBeginRemoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginRemoveColumns_IsBase(true);
        vqconcatenatetablesproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqconcatenatetablesproxymodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginRemoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndRemoveColumns(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->endRemoveColumns();
    } else {
        vqconcatenatetablesproxymodel->endRemoveColumns();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndRemoveColumns(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndRemoveColumns_IsBase(true);
        vqconcatenatetablesproxymodel->endRemoveColumns();
    } else {
        vqconcatenatetablesproxymodel->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndRemoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_BeginMoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        return vqconcatenatetablesproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return vqconcatenatetablesproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseBeginMoveColumns(QConcatenateTablesProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginMoveColumns_IsBase(true);
        return vqconcatenatetablesproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return vqconcatenatetablesproxymodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginMoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndMoveColumns(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->endMoveColumns();
    } else {
        vqconcatenatetablesproxymodel->endMoveColumns();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndMoveColumns(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndMoveColumns_IsBase(true);
        vqconcatenatetablesproxymodel->endMoveColumns();
    } else {
        vqconcatenatetablesproxymodel->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndMoveColumns(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_BeginResetModel(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->beginResetModel();
    } else {
        vqconcatenatetablesproxymodel->beginResetModel();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseBeginResetModel(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginResetModel_IsBase(true);
        vqconcatenatetablesproxymodel->beginResetModel();
    } else {
        vqconcatenatetablesproxymodel->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnBeginResetModel(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_BeginResetModel_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_EndResetModel(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->endResetModel();
    } else {
        vqconcatenatetablesproxymodel->endResetModel();
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseEndResetModel(QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndResetModel_IsBase(true);
        vqconcatenatetablesproxymodel->endResetModel();
    } else {
        vqconcatenatetablesproxymodel->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnEndResetModel(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_EndResetModel_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ChangePersistentIndex(QConcatenateTablesProxyModel* self, QModelIndex* from, QModelIndex* to) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->changePersistentIndex(*from, *to);
    } else {
        vqconcatenatetablesproxymodel->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseChangePersistentIndex(QConcatenateTablesProxyModel* self, QModelIndex* from, QModelIndex* to) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChangePersistentIndex_IsBase(true);
        vqconcatenatetablesproxymodel->changePersistentIndex(*from, *to);
    } else {
        vqconcatenatetablesproxymodel->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnChangePersistentIndex(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QConcatenateTablesProxyModel_ChangePersistentIndexList(QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
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
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        vqconcatenatetablesproxymodel->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QConcatenateTablesProxyModel_QBaseChangePersistentIndexList(QConcatenateTablesProxyModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
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
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChangePersistentIndexList_IsBase(true);
        vqconcatenatetablesproxymodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        vqconcatenatetablesproxymodel->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnChangePersistentIndexList(QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = dynamic_cast<VirtualQConcatenateTablesProxyModel*>(self)) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_PersistentIndexList(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        QModelIndexList _ret = vqconcatenatetablesproxymodel->persistentIndexList();
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
        QModelIndexList _ret = vqconcatenatetablesproxymodel->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QConcatenateTablesProxyModel_QBasePersistentIndexList(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_PersistentIndexList_IsBase(true);
        QModelIndexList _ret = vqconcatenatetablesproxymodel->persistentIndexList();
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
        QModelIndexList _ret = vqconcatenatetablesproxymodel->persistentIndexList();
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
void QConcatenateTablesProxyModel_OnPersistentIndexList(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QConcatenateTablesProxyModel_Sender(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->sender();
    } else {
        return vqconcatenatetablesproxymodel->sender();
    }
}

// Base class handler implementation
QObject* QConcatenateTablesProxyModel_QBaseSender(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sender_IsBase(true);
        return vqconcatenatetablesproxymodel->sender();
    } else {
        return vqconcatenatetablesproxymodel->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSender(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Sender_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_SenderSignalIndex(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->senderSignalIndex();
    } else {
        return vqconcatenatetablesproxymodel->senderSignalIndex();
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseSenderSignalIndex(const QConcatenateTablesProxyModel* self) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SenderSignalIndex_IsBase(true);
        return vqconcatenatetablesproxymodel->senderSignalIndex();
    } else {
        return vqconcatenatetablesproxymodel->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnSenderSignalIndex(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QConcatenateTablesProxyModel_Receivers(const QConcatenateTablesProxyModel* self, const char* signal) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->receivers(signal);
    } else {
        return vqconcatenatetablesproxymodel->receivers(signal);
    }
}

// Base class handler implementation
int QConcatenateTablesProxyModel_QBaseReceivers(const QConcatenateTablesProxyModel* self, const char* signal) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Receivers_IsBase(true);
        return vqconcatenatetablesproxymodel->receivers(signal);
    } else {
        return vqconcatenatetablesproxymodel->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnReceivers(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_Receivers_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QConcatenateTablesProxyModel_IsSignalConnected(const QConcatenateTablesProxyModel* self, QMetaMethod* signal) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        return vqconcatenatetablesproxymodel->isSignalConnected(*signal);
    } else {
        return vqconcatenatetablesproxymodel->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QConcatenateTablesProxyModel_QBaseIsSignalConnected(const QConcatenateTablesProxyModel* self, QMetaMethod* signal) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_IsSignalConnected_IsBase(true);
        return vqconcatenatetablesproxymodel->isSignalConnected(*signal);
    } else {
        return vqconcatenatetablesproxymodel->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QConcatenateTablesProxyModel_OnIsSignalConnected(const QConcatenateTablesProxyModel* self, intptr_t slot) {
    if (auto* vqconcatenatetablesproxymodel = const_cast<VirtualQConcatenateTablesProxyModel*>(dynamic_cast<const VirtualQConcatenateTablesProxyModel*>(self))) {
        vqconcatenatetablesproxymodel->setQConcatenateTablesProxyModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQConcatenateTablesProxyModel::QConcatenateTablesProxyModel_IsSignalConnected_Callback>(slot));
    }
}

void QConcatenateTablesProxyModel_Delete(QConcatenateTablesProxyModel* self) {
    delete self;
}
