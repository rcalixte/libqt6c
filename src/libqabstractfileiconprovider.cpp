#include <QAbstractFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractfileiconprovider.h>
#include "libqabstractfileiconprovider.hpp"
#include "libqabstractfileiconprovider.hxx"

QAbstractFileIconProvider* QAbstractFileIconProvider_new() {
    return new VirtualQAbstractFileIconProvider();
}

// Derived class handler implementation
QIcon* QAbstractFileIconProvider_Icon(const QAbstractFileIconProvider* self, int param1) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        return new QIcon(vqabstractfileiconprovider->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
    } else {
        return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
    }
}

// Base class handler implementation
QIcon* QAbstractFileIconProvider_QBaseIcon(const QAbstractFileIconProvider* self, int param1) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Icon_IsBase(true);
        return new QIcon(vqabstractfileiconprovider->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
    } else {
        return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFileIconProvider_OnIcon(const QAbstractFileIconProvider* self, intptr_t slot) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Icon_Callback(reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Icon_Callback>(slot));
    }
}

// Derived class handler implementation
QIcon* QAbstractFileIconProvider_IconWithQFileInfo(const QAbstractFileIconProvider* self, QFileInfo* param1) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        return new QIcon(vqabstractfileiconprovider->icon(*param1));
    } else {
        return new QIcon(self->icon(*param1));
    }
}

// Base class handler implementation
QIcon* QAbstractFileIconProvider_QBaseIconWithQFileInfo(const QAbstractFileIconProvider* self, QFileInfo* param1) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_IconWithQFileInfo_IsBase(true);
        return new QIcon(vqabstractfileiconprovider->icon(*param1));
    } else {
        return new QIcon(self->icon(*param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFileIconProvider_OnIconWithQFileInfo(const QAbstractFileIconProvider* self, intptr_t slot) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_IconWithQFileInfo_Callback(reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_IconWithQFileInfo_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QAbstractFileIconProvider_Type(const QAbstractFileIconProvider* self, QFileInfo* param1) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        QString _ret = vqabstractfileiconprovider->type(*param1);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqabstractfileiconprovider->type(*param1);
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
libqt_string QAbstractFileIconProvider_QBaseType(const QAbstractFileIconProvider* self, QFileInfo* param1) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Type_IsBase(true);
        QString _ret = vqabstractfileiconprovider->type(*param1);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqabstractfileiconprovider->type(*param1);
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
void QAbstractFileIconProvider_OnType(const QAbstractFileIconProvider* self, intptr_t slot) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Type_Callback(reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractFileIconProvider_SetOptions(QAbstractFileIconProvider* self, int options) {
    if (auto* vqabstractfileiconprovider = dynamic_cast<VirtualQAbstractFileIconProvider*>(self)) {
        vqabstractfileiconprovider->setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    } else {
        vqabstractfileiconprovider->setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    }
}

// Base class handler implementation
void QAbstractFileIconProvider_QBaseSetOptions(QAbstractFileIconProvider* self, int options) {
    if (auto* vqabstractfileiconprovider = dynamic_cast<VirtualQAbstractFileIconProvider*>(self)) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_SetOptions_IsBase(true);
        vqabstractfileiconprovider->setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    } else {
        vqabstractfileiconprovider->setOptions(static_cast<QFlags<QAbstractFileIconProvider::Option>>(options));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFileIconProvider_OnSetOptions(QAbstractFileIconProvider* self, intptr_t slot) {
    if (auto* vqabstractfileiconprovider = dynamic_cast<VirtualQAbstractFileIconProvider*>(self)) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_SetOptions_Callback(reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_SetOptions_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractFileIconProvider_Options(const QAbstractFileIconProvider* self) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        return static_cast<int>(vqabstractfileiconprovider->options());
    } else {
        return static_cast<int>(vqabstractfileiconprovider->options());
    }
}

// Base class handler implementation
int QAbstractFileIconProvider_QBaseOptions(const QAbstractFileIconProvider* self) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Options_IsBase(true);
        return static_cast<int>(vqabstractfileiconprovider->options());
    } else {
        return static_cast<int>(vqabstractfileiconprovider->options());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFileIconProvider_OnOptions(const QAbstractFileIconProvider* self, intptr_t slot) {
    if (auto* vqabstractfileiconprovider = const_cast<VirtualQAbstractFileIconProvider*>(dynamic_cast<const VirtualQAbstractFileIconProvider*>(self))) {
        vqabstractfileiconprovider->setQAbstractFileIconProvider_Options_Callback(reinterpret_cast<VirtualQAbstractFileIconProvider::QAbstractFileIconProvider_Options_Callback>(slot));
    }
}

void QAbstractFileIconProvider_Delete(QAbstractFileIconProvider* self) {
    delete self;
}
