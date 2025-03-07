#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QList>
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
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qabstractitemdelegate.h>
#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemdelegate.hxx"

QAbstractItemDelegate* QAbstractItemDelegate_new() {
    return new VirtualQAbstractItemDelegate();
}

QAbstractItemDelegate* QAbstractItemDelegate_new2(QObject* parent) {
    return new VirtualQAbstractItemDelegate(parent);
}

QMetaObject* QAbstractItemDelegate_MetaObject(const QAbstractItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractItemDelegate_Metacast(QAbstractItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractItemDelegate_Metacall(QAbstractItemDelegate* self, int param1, int param2, void** param3) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractItemDelegate_OnMetacall(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Metacall_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractItemDelegate_QBaseMetacall(QAbstractItemDelegate* self, int param1, int param2, void** param3) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Metacall_IsBase(true);
        return vqabstractitemdelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractItemDelegate_Tr(const char* s) {
    QString _ret = QAbstractItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractItemDelegate_CommitData(QAbstractItemDelegate* self, QWidget* editor) {
    self->commitData(editor);
}

void QAbstractItemDelegate_Connect_CommitData(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::commitData, [self, slotFunc](QWidget* editor) {
        QWidget* sigval1 = editor;
        slotFunc(self, sigval1);
    });
}

void QAbstractItemDelegate_CloseEditor(QAbstractItemDelegate* self, QWidget* editor) {
    self->closeEditor(editor);
}

void QAbstractItemDelegate_Connect_CloseEditor(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::closeEditor, [self, slotFunc](QWidget* editor) {
        QWidget* sigval1 = editor;
        slotFunc(self, sigval1);
    });
}

void QAbstractItemDelegate_SizeHintChanged(QAbstractItemDelegate* self, QModelIndex* param1) {
    self->sizeHintChanged(*param1);
}

void QAbstractItemDelegate_Connect_SizeHintChanged(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QModelIndex*)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::sizeHintChanged, [self, slotFunc](const QModelIndex& param1) {
        const QModelIndex& param1_ret = param1;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QAbstractItemDelegate_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractItemDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractItemDelegate::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractItemDelegate_CloseEditor2(QAbstractItemDelegate* self, QWidget* editor, int hint) {
    self->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

void QAbstractItemDelegate_Connect_CloseEditor2(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*, int) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*, int)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::closeEditor, [self, slotFunc](QWidget* editor, QAbstractItemDelegate::EndEditHint hint) {
        QWidget* sigval1 = editor;
        int sigval2 = static_cast<int>(hint);
        slotFunc(self, sigval1, sigval2);
    });
}

// Derived class handler implementation
void QAbstractItemDelegate_Paint(const QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->paint(painter, *option, *index);
    } else {
        vqabstractitemdelegate->paint(painter, *option, *index);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBasePaint(const QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Paint_IsBase(true);
        vqabstractitemdelegate->paint(painter, *option, *index);
    } else {
        vqabstractitemdelegate->paint(painter, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnPaint(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Paint_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractItemDelegate_SizeHint(const QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        return new QSize(vqabstractitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(self->sizeHint(*option, *index));
    }
}

// Base class handler implementation
QSize* QAbstractItemDelegate_QBaseSizeHint(const QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SizeHint_IsBase(true);
        return new QSize(vqabstractitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(self->sizeHint(*option, *index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSizeHint(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QAbstractItemDelegate_CreateEditor(const QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        return vqabstractitemdelegate->createEditor(parent, *option, *index);
    } else {
        return vqabstractitemdelegate->createEditor(parent, *option, *index);
    }
}

// Base class handler implementation
QWidget* QAbstractItemDelegate_QBaseCreateEditor(const QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_CreateEditor_IsBase(true);
        return vqabstractitemdelegate->createEditor(parent, *option, *index);
    } else {
        return vqabstractitemdelegate->createEditor(parent, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnCreateEditor(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_CreateEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_DestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->destroyEditor(editor, *index);
    } else {
        vqabstractitemdelegate->destroyEditor(editor, *index);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseDestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_DestroyEditor_IsBase(true);
        vqabstractitemdelegate->destroyEditor(editor, *index);
    } else {
        vqabstractitemdelegate->destroyEditor(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnDestroyEditor(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_DestroyEditor_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_DestroyEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_SetEditorData(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setEditorData(editor, *index);
    } else {
        vqabstractitemdelegate->setEditorData(editor, *index);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseSetEditorData(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SetEditorData_IsBase(true);
        vqabstractitemdelegate->setEditorData(editor, *index);
    } else {
        vqabstractitemdelegate->setEditorData(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSetEditorData(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SetEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_SetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setModelData(editor, model, *index);
    } else {
        vqabstractitemdelegate->setModelData(editor, model, *index);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseSetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SetModelData_IsBase(true);
        vqabstractitemdelegate->setModelData(editor, model, *index);
    } else {
        vqabstractitemdelegate->setModelData(editor, model, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSetModelData(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SetModelData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_UpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        vqabstractitemdelegate->updateEditorGeometry(editor, *option, *index);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseUpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_UpdateEditorGeometry_IsBase(true);
        vqabstractitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        vqabstractitemdelegate->updateEditorGeometry(editor, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnUpdateEditorGeometry(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_UpdateEditorGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemDelegate_EditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        return vqabstractitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return vqabstractitemdelegate->editorEvent(event, model, *option, *index);
    }
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseEditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_EditorEvent_IsBase(true);
        return vqabstractitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return vqabstractitemdelegate->editorEvent(event, model, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnEditorEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_EditorEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemDelegate_HelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        return vqabstractitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return vqabstractitemdelegate->helpEvent(event, view, *option, *index);
    }
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseHelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_HelpEvent_IsBase(true);
        return vqabstractitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return vqabstractitemdelegate->helpEvent(event, view, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnHelpEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_HelpEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_HelpEvent_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of int */ QAbstractItemDelegate_PaintingRoles(const QAbstractItemDelegate* self) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        QList<int> _ret = vqabstractitemdelegate->paintingRoles();
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
        QList<int> _ret = vqabstractitemdelegate->paintingRoles();
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
libqt_list /* of int */ QAbstractItemDelegate_QBasePaintingRoles(const QAbstractItemDelegate* self) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_PaintingRoles_IsBase(true);
        QList<int> _ret = vqabstractitemdelegate->paintingRoles();
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
        QList<int> _ret = vqabstractitemdelegate->paintingRoles();
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
void QAbstractItemDelegate_OnPaintingRoles(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_PaintingRoles_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_PaintingRoles_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemDelegate_Event(QAbstractItemDelegate* self, QEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        return vqabstractitemdelegate->event(event);
    } else {
        return vqabstractitemdelegate->event(event);
    }
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseEvent(QAbstractItemDelegate* self, QEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Event_IsBase(true);
        return vqabstractitemdelegate->event(event);
    } else {
        return vqabstractitemdelegate->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Event_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemDelegate_EventFilter(QAbstractItemDelegate* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        return vqabstractitemdelegate->eventFilter(watched, event);
    } else {
        return vqabstractitemdelegate->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseEventFilter(QAbstractItemDelegate* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_EventFilter_IsBase(true);
        return vqabstractitemdelegate->eventFilter(watched, event);
    } else {
        return vqabstractitemdelegate->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnEventFilter(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_EventFilter_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_TimerEvent(QAbstractItemDelegate* self, QTimerEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->timerEvent(event);
    } else {
        vqabstractitemdelegate->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseTimerEvent(QAbstractItemDelegate* self, QTimerEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_TimerEvent_IsBase(true);
        vqabstractitemdelegate->timerEvent(event);
    } else {
        vqabstractitemdelegate->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnTimerEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_ChildEvent(QAbstractItemDelegate* self, QChildEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->childEvent(event);
    } else {
        vqabstractitemdelegate->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseChildEvent(QAbstractItemDelegate* self, QChildEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_ChildEvent_IsBase(true);
        vqabstractitemdelegate->childEvent(event);
    } else {
        vqabstractitemdelegate->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnChildEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_CustomEvent(QAbstractItemDelegate* self, QEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->customEvent(event);
    } else {
        vqabstractitemdelegate->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseCustomEvent(QAbstractItemDelegate* self, QEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_CustomEvent_IsBase(true);
        vqabstractitemdelegate->customEvent(event);
    } else {
        vqabstractitemdelegate->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnCustomEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_ConnectNotify(QAbstractItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->connectNotify(*signal);
    } else {
        vqabstractitemdelegate->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseConnectNotify(QAbstractItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_ConnectNotify_IsBase(true);
        vqabstractitemdelegate->connectNotify(*signal);
    } else {
        vqabstractitemdelegate->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnConnectNotify(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_DisconnectNotify(QAbstractItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->disconnectNotify(*signal);
    } else {
        vqabstractitemdelegate->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseDisconnectNotify(QAbstractItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_DisconnectNotify_IsBase(true);
        vqabstractitemdelegate->disconnectNotify(*signal);
    } else {
        vqabstractitemdelegate->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnDisconnectNotify(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->setQAbstractItemDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractItemDelegate_Sender(const QAbstractItemDelegate* self) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        return vqabstractitemdelegate->sender();
    } else {
        return vqabstractitemdelegate->sender();
    }
}

// Base class handler implementation
QObject* QAbstractItemDelegate_QBaseSender(const QAbstractItemDelegate* self) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Sender_IsBase(true);
        return vqabstractitemdelegate->sender();
    } else {
        return vqabstractitemdelegate->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSender(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Sender_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemDelegate_SenderSignalIndex(const QAbstractItemDelegate* self) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        return vqabstractitemdelegate->senderSignalIndex();
    } else {
        return vqabstractitemdelegate->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractItemDelegate_QBaseSenderSignalIndex(const QAbstractItemDelegate* self) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SenderSignalIndex_IsBase(true);
        return vqabstractitemdelegate->senderSignalIndex();
    } else {
        return vqabstractitemdelegate->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSenderSignalIndex(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemDelegate_Receivers(const QAbstractItemDelegate* self, const char* signal) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        return vqabstractitemdelegate->receivers(signal);
    } else {
        return vqabstractitemdelegate->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractItemDelegate_QBaseReceivers(const QAbstractItemDelegate* self, const char* signal) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Receivers_IsBase(true);
        return vqabstractitemdelegate->receivers(signal);
    } else {
        return vqabstractitemdelegate->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnReceivers(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Receivers_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemDelegate_IsSignalConnected(const QAbstractItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        return vqabstractitemdelegate->isSignalConnected(*signal);
    } else {
        return vqabstractitemdelegate->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseIsSignalConnected(const QAbstractItemDelegate* self, QMetaMethod* signal) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_IsSignalConnected_IsBase(true);
        return vqabstractitemdelegate->isSignalConnected(*signal);
    } else {
        return vqabstractitemdelegate->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnIsSignalConnected(const QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        vqabstractitemdelegate->setQAbstractItemDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractItemDelegate_Delete(QAbstractItemDelegate* self) {
    delete self;
}
