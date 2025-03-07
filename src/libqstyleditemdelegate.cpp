#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QItemEditorFactory>
#include <QList>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QStyledItemDelegate>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qstyleditemdelegate.h>
#include "libqstyleditemdelegate.hpp"
#include "libqstyleditemdelegate.hxx"

QStyledItemDelegate* QStyledItemDelegate_new() {
    return new VirtualQStyledItemDelegate();
}

QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent) {
    return new VirtualQStyledItemDelegate(parent);
}

QMetaObject* QStyledItemDelegate_MetaObject(const QStyledItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStyledItemDelegate_Metacast(QStyledItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStyledItemDelegate_Metacall(QStyledItemDelegate* self, int param1, int param2, void** param3) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnMetacall(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_Metacall_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStyledItemDelegate_QBaseMetacall(QStyledItemDelegate* self, int param1, int param2, void** param3) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_Metacall_IsBase(true);
        return vqstyleditemdelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStyledItemDelegate_Tr(const char* s) {
    QString _ret = QStyledItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(const QStyledItemDelegate* self) {
    return self->itemEditorFactory();
}

void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory) {
    self->setItemEditorFactory(factory);
}

libqt_string QStyledItemDelegate_Tr2(const char* s, const char* c) {
    QString _ret = QStyledItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QStyledItemDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStyledItemDelegate::tr(s, c, static_cast<int>(n));
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
void QStyledItemDelegate_Paint(const QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->paint(painter, *option, *index);
    } else {
        vqstyleditemdelegate->paint(painter, *option, *index);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBasePaint(const QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_Paint_IsBase(true);
        vqstyleditemdelegate->paint(painter, *option, *index);
    } else {
        vqstyleditemdelegate->paint(painter, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnPaint(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_Paint_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStyledItemDelegate_SizeHint(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        return new QSize(vqstyleditemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(self->sizeHint(*option, *index));
    }
}

// Base class handler implementation
QSize* QStyledItemDelegate_QBaseSizeHint(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_SizeHint_IsBase(true);
        return new QSize(vqstyleditemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(self->sizeHint(*option, *index));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSizeHint(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QStyledItemDelegate_CreateEditor(const QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        return vqstyleditemdelegate->createEditor(parent, *option, *index);
    } else {
        return vqstyleditemdelegate->createEditor(parent, *option, *index);
    }
}

// Base class handler implementation
QWidget* QStyledItemDelegate_QBaseCreateEditor(const QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_CreateEditor_IsBase(true);
        return vqstyleditemdelegate->createEditor(parent, *option, *index);
    } else {
        return vqstyleditemdelegate->createEditor(parent, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnCreateEditor(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_CreateEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_SetEditorData(const QStyledItemDelegate* self, QWidget* editor, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setEditorData(editor, *index);
    } else {
        vqstyleditemdelegate->setEditorData(editor, *index);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseSetEditorData(const QStyledItemDelegate* self, QWidget* editor, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_SetEditorData_IsBase(true);
        vqstyleditemdelegate->setEditorData(editor, *index);
    } else {
        vqstyleditemdelegate->setEditorData(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSetEditorData(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SetEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_SetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setModelData(editor, model, *index);
    } else {
        vqstyleditemdelegate->setModelData(editor, model, *index);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseSetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_SetModelData_IsBase(true);
        vqstyleditemdelegate->setModelData(editor, model, *index);
    } else {
        vqstyleditemdelegate->setModelData(editor, model, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSetModelData(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SetModelData_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_UpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        vqstyleditemdelegate->updateEditorGeometry(editor, *option, *index);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseUpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_UpdateEditorGeometry_IsBase(true);
        vqstyleditemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        vqstyleditemdelegate->updateEditorGeometry(editor, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnUpdateEditorGeometry(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_UpdateEditorGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QStyledItemDelegate_DisplayText(const QStyledItemDelegate* self, QVariant* value, QLocale* locale) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        QString _ret = vqstyleditemdelegate->displayText(*value, *locale);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqstyleditemdelegate->displayText(*value, *locale);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QStyledItemDelegate_QBaseDisplayText(const QStyledItemDelegate* self, QVariant* value, QLocale* locale) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_DisplayText_IsBase(true);
        QString _ret = vqstyleditemdelegate->displayText(*value, *locale);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqstyleditemdelegate->displayText(*value, *locale);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnDisplayText(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_DisplayText_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_DisplayText_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_InitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->initStyleOption(option, *index);
    } else {
        vqstyleditemdelegate->initStyleOption(option, *index);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseInitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_InitStyleOption_IsBase(true);
        vqstyleditemdelegate->initStyleOption(option, *index);
    } else {
        vqstyleditemdelegate->initStyleOption(option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnInitStyleOption(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_InitStyleOption_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyledItemDelegate_EventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        return vqstyleditemdelegate->eventFilter(object, event);
    } else {
        return vqstyleditemdelegate->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QStyledItemDelegate_QBaseEventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_EventFilter_IsBase(true);
        return vqstyleditemdelegate->eventFilter(object, event);
    } else {
        return vqstyleditemdelegate->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnEventFilter(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_EventFilter_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyledItemDelegate_EditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        return vqstyleditemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return vqstyleditemdelegate->editorEvent(event, model, *option, *index);
    }
}

// Base class handler implementation
bool QStyledItemDelegate_QBaseEditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_EditorEvent_IsBase(true);
        return vqstyleditemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return vqstyleditemdelegate->editorEvent(event, model, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnEditorEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_EditorEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_DestroyEditor(const QStyledItemDelegate* self, QWidget* editor, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->destroyEditor(editor, *index);
    } else {
        vqstyleditemdelegate->destroyEditor(editor, *index);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseDestroyEditor(const QStyledItemDelegate* self, QWidget* editor, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_DestroyEditor_IsBase(true);
        vqstyleditemdelegate->destroyEditor(editor, *index);
    } else {
        vqstyleditemdelegate->destroyEditor(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnDestroyEditor(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_DestroyEditor_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_DestroyEditor_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyledItemDelegate_HelpEvent(QStyledItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        return vqstyleditemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return vqstyleditemdelegate->helpEvent(event, view, *option, *index);
    }
}

// Base class handler implementation
bool QStyledItemDelegate_QBaseHelpEvent(QStyledItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_HelpEvent_IsBase(true);
        return vqstyleditemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return vqstyleditemdelegate->helpEvent(event, view, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnHelpEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_HelpEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_HelpEvent_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of int */ QStyledItemDelegate_PaintingRoles(const QStyledItemDelegate* self) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        QList<int> _ret = vqstyleditemdelegate->paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ints = _arr;
        return _out;
    } else {
        QList<int> _ret = vqstyleditemdelegate->paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ints = _arr;
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of int */ QStyledItemDelegate_QBasePaintingRoles(const QStyledItemDelegate* self) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_PaintingRoles_IsBase(true);
        QList<int> _ret = vqstyleditemdelegate->paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ints = _arr;
        return _out;
    } else {
        QList<int> _ret = vqstyleditemdelegate->paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ints = _arr;
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnPaintingRoles(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_PaintingRoles_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_PaintingRoles_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyledItemDelegate_Event(QStyledItemDelegate* self, QEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        return vqstyleditemdelegate->event(event);
    } else {
        return vqstyleditemdelegate->event(event);
    }
}

// Base class handler implementation
bool QStyledItemDelegate_QBaseEvent(QStyledItemDelegate* self, QEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_Event_IsBase(true);
        return vqstyleditemdelegate->event(event);
    } else {
        return vqstyleditemdelegate->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_Event_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_TimerEvent(QStyledItemDelegate* self, QTimerEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->timerEvent(event);
    } else {
        vqstyleditemdelegate->timerEvent(event);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseTimerEvent(QStyledItemDelegate* self, QTimerEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_TimerEvent_IsBase(true);
        vqstyleditemdelegate->timerEvent(event);
    } else {
        vqstyleditemdelegate->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnTimerEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_TimerEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_ChildEvent(QStyledItemDelegate* self, QChildEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->childEvent(event);
    } else {
        vqstyleditemdelegate->childEvent(event);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseChildEvent(QStyledItemDelegate* self, QChildEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_ChildEvent_IsBase(true);
        vqstyleditemdelegate->childEvent(event);
    } else {
        vqstyleditemdelegate->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnChildEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_ChildEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_CustomEvent(QStyledItemDelegate* self, QEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->customEvent(event);
    } else {
        vqstyleditemdelegate->customEvent(event);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseCustomEvent(QStyledItemDelegate* self, QEvent* event) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_CustomEvent_IsBase(true);
        vqstyleditemdelegate->customEvent(event);
    } else {
        vqstyleditemdelegate->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnCustomEvent(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_CustomEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_ConnectNotify(QStyledItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->connectNotify(*signal);
    } else {
        vqstyleditemdelegate->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseConnectNotify(QStyledItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_ConnectNotify_IsBase(true);
        vqstyleditemdelegate->connectNotify(*signal);
    } else {
        vqstyleditemdelegate->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnConnectNotify(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_DisconnectNotify(QStyledItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->disconnectNotify(*signal);
    } else {
        vqstyleditemdelegate->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseDisconnectNotify(QStyledItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_DisconnectNotify_IsBase(true);
        vqstyleditemdelegate->disconnectNotify(*signal);
    } else {
        vqstyleditemdelegate->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnDisconnectNotify(QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self)) {
        vqstyleditemdelegate->setQStyledItemDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStyledItemDelegate_Sender(const QStyledItemDelegate* self) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        return vqstyleditemdelegate->sender();
    } else {
        return vqstyleditemdelegate->sender();
    }
}

// Base class handler implementation
QObject* QStyledItemDelegate_QBaseSender(const QStyledItemDelegate* self) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_Sender_IsBase(true);
        return vqstyleditemdelegate->sender();
    } else {
        return vqstyleditemdelegate->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSender(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_Sender_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyledItemDelegate_SenderSignalIndex(const QStyledItemDelegate* self) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        return vqstyleditemdelegate->senderSignalIndex();
    } else {
        return vqstyleditemdelegate->senderSignalIndex();
    }
}

// Base class handler implementation
int QStyledItemDelegate_QBaseSenderSignalIndex(const QStyledItemDelegate* self) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_SenderSignalIndex_IsBase(true);
        return vqstyleditemdelegate->senderSignalIndex();
    } else {
        return vqstyleditemdelegate->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSenderSignalIndex(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyledItemDelegate_Receivers(const QStyledItemDelegate* self, const char* signal) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        return vqstyleditemdelegate->receivers(signal);
    } else {
        return vqstyleditemdelegate->receivers(signal);
    }
}

// Base class handler implementation
int QStyledItemDelegate_QBaseReceivers(const QStyledItemDelegate* self, const char* signal) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_Receivers_IsBase(true);
        return vqstyleditemdelegate->receivers(signal);
    } else {
        return vqstyleditemdelegate->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnReceivers(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_Receivers_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyledItemDelegate_IsSignalConnected(const QStyledItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        return vqstyleditemdelegate->isSignalConnected(*signal);
    } else {
        return vqstyleditemdelegate->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStyledItemDelegate_QBaseIsSignalConnected(const QStyledItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_IsSignalConnected_IsBase(true);
        return vqstyleditemdelegate->isSignalConnected(*signal);
    } else {
        return vqstyleditemdelegate->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnIsSignalConnected(const QStyledItemDelegate* self, intptr_t slot) {
    if (auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self))) {
        vqstyleditemdelegate->setQStyledItemDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_IsSignalConnected_Callback>(slot));
    }
}

void QStyledItemDelegate_Delete(QStyledItemDelegate* self) {
    delete self;
}
