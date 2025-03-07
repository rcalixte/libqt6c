#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTFILEICONPROVIDER_H
#define SRCC_LIBVIRTUALQABSTRACTFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractFileIconProvider so that we can call protected methods
class VirtualQAbstractFileIconProvider : public QAbstractFileIconProvider {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractFileIconProvider_Icon_Callback = QIcon (*)(const QAbstractFileIconProvider*, QAbstractFileIconProvider::IconType);
    using QAbstractFileIconProvider_IconWithQFileInfo_Callback = QIcon (*)(const QAbstractFileIconProvider*, const QFileInfo&);
    using QAbstractFileIconProvider_Type_Callback = QString (*)(const QAbstractFileIconProvider*, const QFileInfo&);
    using QAbstractFileIconProvider_SetOptions_Callback = void (*)(QAbstractFileIconProvider*, QFlags<QAbstractFileIconProvider::Option>);
    using QAbstractFileIconProvider_Options_Callback = QAbstractFileIconProvider::Options (*)();

  protected:
    // Instance callback storage
    QAbstractFileIconProvider_Icon_Callback qabstractfileiconprovider_icon_callback = nullptr;
    QAbstractFileIconProvider_IconWithQFileInfo_Callback qabstractfileiconprovider_iconwithqfileinfo_callback = nullptr;
    QAbstractFileIconProvider_Type_Callback qabstractfileiconprovider_type_callback = nullptr;
    QAbstractFileIconProvider_SetOptions_Callback qabstractfileiconprovider_setoptions_callback = nullptr;
    QAbstractFileIconProvider_Options_Callback qabstractfileiconprovider_options_callback = nullptr;

    // Instance base flags
    mutable bool qabstractfileiconprovider_icon_isbase = false;
    mutable bool qabstractfileiconprovider_iconwithqfileinfo_isbase = false;
    mutable bool qabstractfileiconprovider_type_isbase = false;
    mutable bool qabstractfileiconprovider_setoptions_isbase = false;
    mutable bool qabstractfileiconprovider_options_isbase = false;

  public:
    VirtualQAbstractFileIconProvider() : QAbstractFileIconProvider(){};

    ~VirtualQAbstractFileIconProvider() {
        qabstractfileiconprovider_icon_callback = nullptr;
        qabstractfileiconprovider_iconwithqfileinfo_callback = nullptr;
        qabstractfileiconprovider_type_callback = nullptr;
        qabstractfileiconprovider_setoptions_callback = nullptr;
        qabstractfileiconprovider_options_callback = nullptr;
    }

    // Callback setters
    void setQAbstractFileIconProvider_Icon_Callback(QAbstractFileIconProvider_Icon_Callback cb) { qabstractfileiconprovider_icon_callback = cb; }
    void setQAbstractFileIconProvider_IconWithQFileInfo_Callback(QAbstractFileIconProvider_IconWithQFileInfo_Callback cb) { qabstractfileiconprovider_iconwithqfileinfo_callback = cb; }
    void setQAbstractFileIconProvider_Type_Callback(QAbstractFileIconProvider_Type_Callback cb) { qabstractfileiconprovider_type_callback = cb; }
    void setQAbstractFileIconProvider_SetOptions_Callback(QAbstractFileIconProvider_SetOptions_Callback cb) { qabstractfileiconprovider_setoptions_callback = cb; }
    void setQAbstractFileIconProvider_Options_Callback(QAbstractFileIconProvider_Options_Callback cb) { qabstractfileiconprovider_options_callback = cb; }

    // Base flag setters
    void setQAbstractFileIconProvider_Icon_IsBase(bool value) const { qabstractfileiconprovider_icon_isbase = value; }
    void setQAbstractFileIconProvider_IconWithQFileInfo_IsBase(bool value) const { qabstractfileiconprovider_iconwithqfileinfo_isbase = value; }
    void setQAbstractFileIconProvider_Type_IsBase(bool value) const { qabstractfileiconprovider_type_isbase = value; }
    void setQAbstractFileIconProvider_SetOptions_IsBase(bool value) const { qabstractfileiconprovider_setoptions_isbase = value; }
    void setQAbstractFileIconProvider_Options_IsBase(bool value) const { qabstractfileiconprovider_options_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon(QAbstractFileIconProvider::IconType param1) const override {
        if (qabstractfileiconprovider_icon_isbase) {
            qabstractfileiconprovider_icon_isbase = false;
            return QAbstractFileIconProvider::icon(param1);
        } else if (qabstractfileiconprovider_icon_callback != nullptr) {
            return qabstractfileiconprovider_icon_callback(this, param1);
        } else {
            return QAbstractFileIconProvider::icon(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon(const QFileInfo& param1) const override {
        if (qabstractfileiconprovider_iconwithqfileinfo_isbase) {
            qabstractfileiconprovider_iconwithqfileinfo_isbase = false;
            return QAbstractFileIconProvider::icon(param1);
        } else if (qabstractfileiconprovider_iconwithqfileinfo_callback != nullptr) {
            return qabstractfileiconprovider_iconwithqfileinfo_callback(this, param1);
        } else {
            return QAbstractFileIconProvider::icon(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString type(const QFileInfo& param1) const override {
        if (qabstractfileiconprovider_type_isbase) {
            qabstractfileiconprovider_type_isbase = false;
            return QAbstractFileIconProvider::type(param1);
        } else if (qabstractfileiconprovider_type_callback != nullptr) {
            return qabstractfileiconprovider_type_callback(this, param1);
        } else {
            return QAbstractFileIconProvider::type(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOptions(QFlags<QAbstractFileIconProvider::Option> options) override {
        if (qabstractfileiconprovider_setoptions_isbase) {
            qabstractfileiconprovider_setoptions_isbase = false;
            QAbstractFileIconProvider::setOptions(options);
        } else if (qabstractfileiconprovider_setoptions_callback != nullptr) {
            qabstractfileiconprovider_setoptions_callback(this, options);
        } else {
            QAbstractFileIconProvider::setOptions(options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractFileIconProvider::Options options() const override {
        if (qabstractfileiconprovider_options_isbase) {
            qabstractfileiconprovider_options_isbase = false;
            return QAbstractFileIconProvider::options();
        } else if (qabstractfileiconprovider_options_callback != nullptr) {
            return qabstractfileiconprovider_options_callback();
        } else {
            return QAbstractFileIconProvider::options();
        }
    }
};

#endif
