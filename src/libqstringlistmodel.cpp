#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
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
#include <QStringListModel>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qstringlistmodel.h>
#include "libqstringlistmodel.hpp"
#include "libqstringlistmodel.hxx"

QStringListModel* QStringListModel_new() {
    return new VirtualQStringListModel();
}

QStringListModel* QStringListModel_new2(libqt_list /* of libqt_string */ strings) {
    QStringList strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data.ptr);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQStringListModel(strings_QList);
}

QStringListModel* QStringListModel_new3(QObject* parent) {
    return new VirtualQStringListModel(parent);
}

QStringListModel* QStringListModel_new4(libqt_list /* of libqt_string */ strings, QObject* parent) {
    QStringList strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data.ptr);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQStringListModel(strings_QList, parent);
}

QMetaObject* QStringListModel_MetaObject(const QStringListModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStringListModel_Metacast(QStringListModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStringListModel_Metacall(QStringListModel* self, int param1, int param2, void** param3) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStringListModel_OnMetacall(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_Metacall_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStringListModel_QBaseMetacall(QStringListModel* self, int param1, int param2, void** param3) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_Metacall_IsBase(true);
        return vqstringlistmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStringListModel_Tr(const char* s) {
    QString _ret = QStringListModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QStringListModel_StringList(const QStringListModel* self) {
    QStringList _ret = self->stringList();
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

void QStringListModel_SetStringList(QStringListModel* self, libqt_list /* of libqt_string */ strings) {
    QStringList strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data.ptr);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    self->setStringList(strings_QList);
}

libqt_string QStringListModel_Tr2(const char* s, const char* c) {
    QString _ret = QStringListModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QStringListModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStringListModel::tr(s, c, static_cast<int>(n));
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
int QStringListModel_RowCount(const QStringListModel* self, QModelIndex* parent) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->rowCount(*parent);
    } else {
        return vqstringlistmodel->rowCount(*parent);
    }
}

// Base class handler implementation
int QStringListModel_QBaseRowCount(const QStringListModel* self, QModelIndex* parent) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_RowCount_IsBase(true);
        return vqstringlistmodel->rowCount(*parent);
    } else {
        return vqstringlistmodel->rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRowCount(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_RowCount_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, QModelIndex* idx) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return new QModelIndex(vqstringlistmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* QStringListModel_QBaseSibling(const QStringListModel* self, int row, int column, QModelIndex* idx) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Sibling_IsBase(true);
        return new QModelIndex(vqstringlistmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSibling(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Sibling_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QStringListModel_Data(const QStringListModel* self, QModelIndex* index, int role) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return new QVariant(vqstringlistmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QStringListModel_QBaseData(const QStringListModel* self, QModelIndex* index, int role) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Data_IsBase(true);
        return new QVariant(vqstringlistmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(self->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnData(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Data_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_SetData(QStringListModel* self, QModelIndex* index, QVariant* value, int role) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return vqstringlistmodel->setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QStringListModel_QBaseSetData(QStringListModel* self, QModelIndex* index, QVariant* value, int role) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_SetData_IsBase(true);
        return vqstringlistmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return vqstringlistmodel->setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSetData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_SetData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_ClearItemData(QStringListModel* self, QModelIndex* index) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->clearItemData(*index);
    } else {
        return vqstringlistmodel->clearItemData(*index);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseClearItemData(QStringListModel* self, QModelIndex* index) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ClearItemData_IsBase(true);
        return vqstringlistmodel->clearItemData(*index);
    } else {
        return vqstringlistmodel->clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnClearItemData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ClearItemData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
int QStringListModel_Flags(const QStringListModel* self, QModelIndex* index) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return static_cast<int>(vqstringlistmodel->flags(*index));
    } else {
        return static_cast<int>(vqstringlistmodel->flags(*index));
    }
}

// Base class handler implementation
int QStringListModel_QBaseFlags(const QStringListModel* self, QModelIndex* index) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Flags_IsBase(true);
        return static_cast<int>(vqstringlistmodel->flags(*index));
    } else {
        return static_cast<int>(vqstringlistmodel->flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnFlags(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Flags_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_InsertRows(QStringListModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqstringlistmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseInsertRows(QStringListModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_InsertRows_IsBase(true);
        return vqstringlistmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqstringlistmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnInsertRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_InsertRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqstringlistmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseRemoveRows(QStringListModel* self, int row, int count, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_RemoveRows_IsBase(true);
        return vqstringlistmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return vqstringlistmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRemoveRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_RemoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_MoveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqstringlistmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QStringListModel_QBaseMoveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_MoveRows_IsBase(true);
        return vqstringlistmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqstringlistmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMoveRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_MoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ QStringListModel_ItemData(const QStringListModel* self, QModelIndex* index) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        QMap<int, QVariant> _ret = vqstringlistmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = vqstringlistmodel->itemData(*index);
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
libqt_map /* of int to QVariant* */ QStringListModel_QBaseItemData(const QStringListModel* self, QModelIndex* index) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vqstringlistmodel->itemData(*index);
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
        QMap<int, QVariant> _ret = vqstringlistmodel->itemData(*index);
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
void QStringListModel_OnItemData(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_ItemData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_SetItemData(QStringListModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->setItemData(*index, roles_QMap);
    } else {
        return vqstringlistmodel->setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseSetItemData(QStringListModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles) {
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_SetItemData_IsBase(true);
        return vqstringlistmodel->setItemData(*index, roles_QMap);
    } else {
        return vqstringlistmodel->setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSetItemData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_SetItemData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_Sort(QStringListModel* self, int column, int order) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        vqstringlistmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void QStringListModel_QBaseSort(QStringListModel* self, int column, int order) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_Sort_IsBase(true);
        vqstringlistmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        vqstringlistmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSort(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_Sort_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
int QStringListModel_SupportedDropActions(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return static_cast<int>(vqstringlistmodel->supportedDropActions());
    } else {
        return static_cast<int>(vqstringlistmodel->supportedDropActions());
    }
}

// Base class handler implementation
int QStringListModel_QBaseSupportedDropActions(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqstringlistmodel->supportedDropActions());
    } else {
        return static_cast<int>(vqstringlistmodel->supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSupportedDropActions(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_SupportedDropActions_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStringListModel_Index(const QStringListModel* self, int row, int column, QModelIndex* parent) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return new QModelIndex(vqstringlistmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* QStringListModel_QBaseIndex(const QStringListModel* self, int row, int column, QModelIndex* parent) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Index_IsBase(true);
        return new QModelIndex(vqstringlistmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnIndex(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Index_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_DropMimeData(QStringListModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqstringlistmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseDropMimeData(QStringListModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_DropMimeData_IsBase(true);
        return vqstringlistmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqstringlistmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnDropMimeData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_DropMimeData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QStringListModel_HeaderData(const QStringListModel* self, int section, int orientation, int role) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return new QVariant(vqstringlistmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QStringListModel_QBaseHeaderData(const QStringListModel* self, int section, int orientation, int role) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_HeaderData_IsBase(true);
        return new QVariant(vqstringlistmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnHeaderData(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_HeaderData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_SetHeaderData(QStringListModel* self, int section, int orientation, QVariant* value, int role) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return vqstringlistmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool QStringListModel_QBaseSetHeaderData(QStringListModel* self, int section, int orientation, QVariant* value, int role) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_SetHeaderData_IsBase(true);
        return vqstringlistmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return vqstringlistmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSetHeaderData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_SetHeaderData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QStringListModel_MimeTypes(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        QStringList _ret = vqstringlistmodel->mimeTypes();
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
        QStringList _ret = vqstringlistmodel->mimeTypes();
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
libqt_list /* of libqt_string */ QStringListModel_QBaseMimeTypes(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_MimeTypes_IsBase(true);
        QStringList _ret = vqstringlistmodel->mimeTypes();
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
        QStringList _ret = vqstringlistmodel->mimeTypes();
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
void QStringListModel_OnMimeTypes(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_MimeTypes_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QStringListModel_MimeData(const QStringListModel* self, libqt_list /* of QModelIndex* */ indexes) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->mimeData(indexes_QList);
    } else {
        return vqstringlistmodel->mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* QStringListModel_QBaseMimeData(const QStringListModel* self, libqt_list /* of QModelIndex* */ indexes) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_MimeData_IsBase(true);
        return vqstringlistmodel->mimeData(indexes_QList);
    } else {
        return vqstringlistmodel->mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMimeData(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_MimeData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_CanDropMimeData(const QStringListModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqstringlistmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseCanDropMimeData(const QStringListModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_CanDropMimeData_IsBase(true);
        return vqstringlistmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return vqstringlistmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCanDropMimeData(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_CanDropMimeData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QStringListModel_SupportedDragActions(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return static_cast<int>(vqstringlistmodel->supportedDragActions());
    } else {
        return static_cast<int>(vqstringlistmodel->supportedDragActions());
    }
}

// Base class handler implementation
int QStringListModel_QBaseSupportedDragActions(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vqstringlistmodel->supportedDragActions());
    } else {
        return static_cast<int>(vqstringlistmodel->supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSupportedDragActions(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_SupportedDragActions_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_InsertColumns(QStringListModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqstringlistmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseInsertColumns(QStringListModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_InsertColumns_IsBase(true);
        return vqstringlistmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqstringlistmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnInsertColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_InsertColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_RemoveColumns(QStringListModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqstringlistmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseRemoveColumns(QStringListModel* self, int column, int count, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_RemoveColumns_IsBase(true);
        return vqstringlistmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return vqstringlistmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRemoveColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_RemoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_MoveColumns(QStringListModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqstringlistmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool QStringListModel_QBaseMoveColumns(QStringListModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_MoveColumns_IsBase(true);
        return vqstringlistmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return vqstringlistmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMoveColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_MoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_FetchMore(QStringListModel* self, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->fetchMore(*parent);
    } else {
        vqstringlistmodel->fetchMore(*parent);
    }
}

// Base class handler implementation
void QStringListModel_QBaseFetchMore(QStringListModel* self, QModelIndex* parent) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_FetchMore_IsBase(true);
        vqstringlistmodel->fetchMore(*parent);
    } else {
        vqstringlistmodel->fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnFetchMore(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_FetchMore_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_CanFetchMore(const QStringListModel* self, QModelIndex* parent) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->canFetchMore(*parent);
    } else {
        return vqstringlistmodel->canFetchMore(*parent);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseCanFetchMore(const QStringListModel* self, QModelIndex* parent) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_CanFetchMore_IsBase(true);
        return vqstringlistmodel->canFetchMore(*parent);
    } else {
        return vqstringlistmodel->canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCanFetchMore(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_CanFetchMore_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStringListModel_Buddy(const QStringListModel* self, QModelIndex* index) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return new QModelIndex(vqstringlistmodel->buddy(*index));
    } else {
        return new QModelIndex(self->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* QStringListModel_QBaseBuddy(const QStringListModel* self, QModelIndex* index) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Buddy_IsBase(true);
        return new QModelIndex(vqstringlistmodel->buddy(*index));
    } else {
        return new QModelIndex(self->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBuddy(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Buddy_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QStringListModel_Match(const QStringListModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        QModelIndexList _ret = vqstringlistmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QModelIndexList _ret = vqstringlistmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
libqt_list /* of QModelIndex* */ QStringListModel_QBaseMatch(const QStringListModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Match_IsBase(true);
        QModelIndexList _ret = vqstringlistmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
        QModelIndexList _ret = vqstringlistmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
void QStringListModel_OnMatch(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Match_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStringListModel_Span(const QStringListModel* self, QModelIndex* index) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return new QSize(vqstringlistmodel->span(*index));
    } else {
        return new QSize(self->span(*index));
    }
}

// Base class handler implementation
QSize* QStringListModel_QBaseSpan(const QStringListModel* self, QModelIndex* index) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Span_IsBase(true);
        return new QSize(vqstringlistmodel->span(*index));
    } else {
        return new QSize(self->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSpan(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Span_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ QStringListModel_RoleNames(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        QHash<int, QByteArray> _ret = vqstringlistmodel->roleNames();
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
        QHash<int, QByteArray> _ret = vqstringlistmodel->roleNames();
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
libqt_map /* of int to libqt_string */ QStringListModel_QBaseRoleNames(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vqstringlistmodel->roleNames();
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
        QHash<int, QByteArray> _ret = vqstringlistmodel->roleNames();
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
void QStringListModel_OnRoleNames(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_RoleNames_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_MultiData(const QStringListModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->multiData(*index, *roleDataSpan);
    } else {
        vqstringlistmodel->multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void QStringListModel_QBaseMultiData(const QStringListModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_MultiData_IsBase(true);
        vqstringlistmodel->multiData(*index, *roleDataSpan);
    } else {
        vqstringlistmodel->multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnMultiData(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_MultiData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_Submit(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->submit();
    } else {
        return vqstringlistmodel->submit();
    }
}

// Base class handler implementation
bool QStringListModel_QBaseSubmit(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_Submit_IsBase(true);
        return vqstringlistmodel->submit();
    } else {
        return vqstringlistmodel->submit();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSubmit(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_Submit_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_Revert(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->revert();
    } else {
        vqstringlistmodel->revert();
    }
}

// Base class handler implementation
void QStringListModel_QBaseRevert(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_Revert_IsBase(true);
        vqstringlistmodel->revert();
    } else {
        vqstringlistmodel->revert();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnRevert(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_Revert_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_ResetInternalData(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->resetInternalData();
    } else {
        vqstringlistmodel->resetInternalData();
    }
}

// Base class handler implementation
void QStringListModel_QBaseResetInternalData(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ResetInternalData_IsBase(true);
        vqstringlistmodel->resetInternalData();
    } else {
        vqstringlistmodel->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnResetInternalData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ResetInternalData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_Event(QStringListModel* self, QEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->event(event);
    } else {
        return vqstringlistmodel->event(event);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseEvent(QStringListModel* self, QEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_Event_IsBase(true);
        return vqstringlistmodel->event(event);
    } else {
        return vqstringlistmodel->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEvent(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_Event_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_EventFilter(QStringListModel* self, QObject* watched, QEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->eventFilter(watched, event);
    } else {
        return vqstringlistmodel->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseEventFilter(QStringListModel* self, QObject* watched, QEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EventFilter_IsBase(true);
        return vqstringlistmodel->eventFilter(watched, event);
    } else {
        return vqstringlistmodel->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEventFilter(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EventFilter_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_TimerEvent(QStringListModel* self, QTimerEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->timerEvent(event);
    } else {
        vqstringlistmodel->timerEvent(event);
    }
}

// Base class handler implementation
void QStringListModel_QBaseTimerEvent(QStringListModel* self, QTimerEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_TimerEvent_IsBase(true);
        vqstringlistmodel->timerEvent(event);
    } else {
        vqstringlistmodel->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnTimerEvent(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_TimerEvent_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_ChildEvent(QStringListModel* self, QChildEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->childEvent(event);
    } else {
        vqstringlistmodel->childEvent(event);
    }
}

// Base class handler implementation
void QStringListModel_QBaseChildEvent(QStringListModel* self, QChildEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ChildEvent_IsBase(true);
        vqstringlistmodel->childEvent(event);
    } else {
        vqstringlistmodel->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnChildEvent(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ChildEvent_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_CustomEvent(QStringListModel* self, QEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->customEvent(event);
    } else {
        vqstringlistmodel->customEvent(event);
    }
}

// Base class handler implementation
void QStringListModel_QBaseCustomEvent(QStringListModel* self, QEvent* event) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_CustomEvent_IsBase(true);
        vqstringlistmodel->customEvent(event);
    } else {
        vqstringlistmodel->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCustomEvent(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_CustomEvent_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_ConnectNotify(QStringListModel* self, QMetaMethod* signal) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->connectNotify(*signal);
    } else {
        vqstringlistmodel->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStringListModel_QBaseConnectNotify(QStringListModel* self, QMetaMethod* signal) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ConnectNotify_IsBase(true);
        vqstringlistmodel->connectNotify(*signal);
    } else {
        vqstringlistmodel->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnConnectNotify(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ConnectNotify_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_DisconnectNotify(QStringListModel* self, QMetaMethod* signal) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->disconnectNotify(*signal);
    } else {
        vqstringlistmodel->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStringListModel_QBaseDisconnectNotify(QStringListModel* self, QMetaMethod* signal) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_DisconnectNotify_IsBase(true);
        vqstringlistmodel->disconnectNotify(*signal);
    } else {
        vqstringlistmodel->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnDisconnectNotify(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_DisconnectNotify_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QStringListModel_CreateIndex(const QStringListModel* self, int row, int column) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return new QModelIndex(vqstringlistmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QStringListModel_QBaseCreateIndex(const QStringListModel* self, int row, int column) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_CreateIndex_IsBase(true);
        return new QModelIndex(vqstringlistmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnCreateIndex(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_CreateIndex_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EncodeData(const QStringListModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->encodeData(indexes_QList, *stream);
    } else {
        vqstringlistmodel->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void QStringListModel_QBaseEncodeData(const QStringListModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    QModelIndexList indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data.ptr);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_EncodeData_IsBase(true);
        vqstringlistmodel->encodeData(indexes_QList, *stream);
    } else {
        vqstringlistmodel->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEncodeData(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_EncodeData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_DecodeData(QStringListModel* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return vqstringlistmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseDecodeData(QStringListModel* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_DecodeData_IsBase(true);
        return vqstringlistmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return vqstringlistmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnDecodeData(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_DecodeData_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_BeginInsertRows(QStringListModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqstringlistmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStringListModel_QBaseBeginInsertRows(QStringListModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginInsertRows_IsBase(true);
        vqstringlistmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqstringlistmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginInsertRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginInsertRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndInsertRows(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->endInsertRows();
    } else {
        vqstringlistmodel->endInsertRows();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndInsertRows(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndInsertRows_IsBase(true);
        vqstringlistmodel->endInsertRows();
    } else {
        vqstringlistmodel->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndInsertRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndInsertRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_BeginRemoveRows(QStringListModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqstringlistmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStringListModel_QBaseBeginRemoveRows(QStringListModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginRemoveRows_IsBase(true);
        vqstringlistmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqstringlistmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginRemoveRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndRemoveRows(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->endRemoveRows();
    } else {
        vqstringlistmodel->endRemoveRows();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndRemoveRows(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndRemoveRows_IsBase(true);
        vqstringlistmodel->endRemoveRows();
    } else {
        vqstringlistmodel->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndRemoveRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndRemoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_BeginMoveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return vqstringlistmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool QStringListModel_QBaseBeginMoveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginMoveRows_IsBase(true);
        return vqstringlistmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return vqstringlistmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginMoveRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginMoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndMoveRows(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->endMoveRows();
    } else {
        vqstringlistmodel->endMoveRows();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndMoveRows(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndMoveRows_IsBase(true);
        vqstringlistmodel->endMoveRows();
    } else {
        vqstringlistmodel->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndMoveRows(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndMoveRows_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_BeginInsertColumns(QStringListModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqstringlistmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStringListModel_QBaseBeginInsertColumns(QStringListModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginInsertColumns_IsBase(true);
        vqstringlistmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqstringlistmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginInsertColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndInsertColumns(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->endInsertColumns();
    } else {
        vqstringlistmodel->endInsertColumns();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndInsertColumns(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndInsertColumns_IsBase(true);
        vqstringlistmodel->endInsertColumns();
    } else {
        vqstringlistmodel->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndInsertColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndInsertColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_BeginRemoveColumns(QStringListModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqstringlistmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QStringListModel_QBaseBeginRemoveColumns(QStringListModel* self, QModelIndex* parent, int first, int last) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginRemoveColumns_IsBase(true);
        vqstringlistmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqstringlistmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginRemoveColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndRemoveColumns(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->endRemoveColumns();
    } else {
        vqstringlistmodel->endRemoveColumns();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndRemoveColumns(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndRemoveColumns_IsBase(true);
        vqstringlistmodel->endRemoveColumns();
    } else {
        vqstringlistmodel->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndRemoveColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_BeginMoveColumns(QStringListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        return vqstringlistmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return vqstringlistmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool QStringListModel_QBaseBeginMoveColumns(QStringListModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginMoveColumns_IsBase(true);
        return vqstringlistmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return vqstringlistmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginMoveColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndMoveColumns(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->endMoveColumns();
    } else {
        vqstringlistmodel->endMoveColumns();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndMoveColumns(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndMoveColumns_IsBase(true);
        vqstringlistmodel->endMoveColumns();
    } else {
        vqstringlistmodel->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndMoveColumns(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndMoveColumns_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_BeginResetModel(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->beginResetModel();
    } else {
        vqstringlistmodel->beginResetModel();
    }
}

// Base class handler implementation
void QStringListModel_QBaseBeginResetModel(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginResetModel_IsBase(true);
        vqstringlistmodel->beginResetModel();
    } else {
        vqstringlistmodel->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnBeginResetModel(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_BeginResetModel_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_EndResetModel(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->endResetModel();
    } else {
        vqstringlistmodel->endResetModel();
    }
}

// Base class handler implementation
void QStringListModel_QBaseEndResetModel(QStringListModel* self) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndResetModel_IsBase(true);
        vqstringlistmodel->endResetModel();
    } else {
        vqstringlistmodel->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnEndResetModel(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_EndResetModel_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_ChangePersistentIndex(QStringListModel* self, QModelIndex* from, QModelIndex* to) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->changePersistentIndex(*from, *to);
    } else {
        vqstringlistmodel->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void QStringListModel_QBaseChangePersistentIndex(QStringListModel* self, QModelIndex* from, QModelIndex* to) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ChangePersistentIndex_IsBase(true);
        vqstringlistmodel->changePersistentIndex(*from, *to);
    } else {
        vqstringlistmodel->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnChangePersistentIndex(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QStringListModel_ChangePersistentIndexList(QStringListModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
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
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        vqstringlistmodel->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void QStringListModel_QBaseChangePersistentIndexList(QStringListModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to) {
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
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ChangePersistentIndexList_IsBase(true);
        vqstringlistmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        vqstringlistmodel->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnChangePersistentIndexList(QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = dynamic_cast<VirtualQStringListModel*>(self)) {
        vqstringlistmodel->setQStringListModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QStringListModel_PersistentIndexList(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        QModelIndexList _ret = vqstringlistmodel->persistentIndexList();
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
        QModelIndexList _ret = vqstringlistmodel->persistentIndexList();
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
libqt_list /* of QModelIndex* */ QStringListModel_QBasePersistentIndexList(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_PersistentIndexList_IsBase(true);
        QModelIndexList _ret = vqstringlistmodel->persistentIndexList();
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
        QModelIndexList _ret = vqstringlistmodel->persistentIndexList();
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
void QStringListModel_OnPersistentIndexList(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_PersistentIndexList_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStringListModel_Sender(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->sender();
    } else {
        return vqstringlistmodel->sender();
    }
}

// Base class handler implementation
QObject* QStringListModel_QBaseSender(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Sender_IsBase(true);
        return vqstringlistmodel->sender();
    } else {
        return vqstringlistmodel->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSender(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Sender_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStringListModel_SenderSignalIndex(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->senderSignalIndex();
    } else {
        return vqstringlistmodel->senderSignalIndex();
    }
}

// Base class handler implementation
int QStringListModel_QBaseSenderSignalIndex(const QStringListModel* self) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_SenderSignalIndex_IsBase(true);
        return vqstringlistmodel->senderSignalIndex();
    } else {
        return vqstringlistmodel->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnSenderSignalIndex(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStringListModel_Receivers(const QStringListModel* self, const char* signal) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->receivers(signal);
    } else {
        return vqstringlistmodel->receivers(signal);
    }
}

// Base class handler implementation
int QStringListModel_QBaseReceivers(const QStringListModel* self, const char* signal) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Receivers_IsBase(true);
        return vqstringlistmodel->receivers(signal);
    } else {
        return vqstringlistmodel->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnReceivers(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_Receivers_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStringListModel_IsSignalConnected(const QStringListModel* self, QMetaMethod* signal) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        return vqstringlistmodel->isSignalConnected(*signal);
    } else {
        return vqstringlistmodel->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStringListModel_QBaseIsSignalConnected(const QStringListModel* self, QMetaMethod* signal) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_IsSignalConnected_IsBase(true);
        return vqstringlistmodel->isSignalConnected(*signal);
    } else {
        return vqstringlistmodel->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStringListModel_OnIsSignalConnected(const QStringListModel* self, intptr_t slot) {
    if (auto* vqstringlistmodel = const_cast<VirtualQStringListModel*>(dynamic_cast<const VirtualQStringListModel*>(self))) {
        vqstringlistmodel->setQStringListModel_IsSignalConnected_Callback(reinterpret_cast<VirtualQStringListModel::QStringListModel_IsSignalConnected_Callback>(slot));
    }
}

void QStringListModel_Delete(QStringListModel* self) {
    delete self;
}
