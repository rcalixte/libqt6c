#pragma once
#ifndef SRCC_LIBVIRTUALQFILEICONPROVIDER_H
#define SRCC_LIBVIRTUALQFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileIconProvider so that we can call protected methods
class VirtualQFileIconProvider : public QFileIconProvider {

  public:
    // Virtual class public types (including callbacks)
    using QFileIconProvider_Icon_Callback = QIcon (*)(const QFileIconProvider*, QAbstractFileIconProvider::IconType);
    using QFileIconProvider_IconWithInfo_Callback = QIcon (*)(const QFileIconProvider*, const QFileInfo&);
    using QFileIconProvider_Type_Callback = QString (*)(const QFileIconProvider*, const QFileInfo&);
    using QFileIconProvider_SetOptions_Callback = void (*)(QFileIconProvider*, QFlags<QAbstractFileIconProvider::Option>);
    using QFileIconProvider_Options_Callback = QAbstractFileIconProvider::Options (*)();

  protected:
    // Instance callback storage
    QFileIconProvider_Icon_Callback qfileiconprovider_icon_callback = nullptr;
    QFileIconProvider_IconWithInfo_Callback qfileiconprovider_iconwithinfo_callback = nullptr;
    QFileIconProvider_Type_Callback qfileiconprovider_type_callback = nullptr;
    QFileIconProvider_SetOptions_Callback qfileiconprovider_setoptions_callback = nullptr;
    QFileIconProvider_Options_Callback qfileiconprovider_options_callback = nullptr;

    // Instance base flags
    mutable bool qfileiconprovider_icon_isbase = false;
    mutable bool qfileiconprovider_iconwithinfo_isbase = false;
    mutable bool qfileiconprovider_type_isbase = false;
    mutable bool qfileiconprovider_setoptions_isbase = false;
    mutable bool qfileiconprovider_options_isbase = false;

  public:
    VirtualQFileIconProvider() : QFileIconProvider(){};

    ~VirtualQFileIconProvider() {
        qfileiconprovider_icon_callback = nullptr;
        qfileiconprovider_iconwithinfo_callback = nullptr;
        qfileiconprovider_type_callback = nullptr;
        qfileiconprovider_setoptions_callback = nullptr;
        qfileiconprovider_options_callback = nullptr;
    }

    // Callback setters
    void setQFileIconProvider_Icon_Callback(QFileIconProvider_Icon_Callback cb) { qfileiconprovider_icon_callback = cb; }
    void setQFileIconProvider_IconWithInfo_Callback(QFileIconProvider_IconWithInfo_Callback cb) { qfileiconprovider_iconwithinfo_callback = cb; }
    void setQFileIconProvider_Type_Callback(QFileIconProvider_Type_Callback cb) { qfileiconprovider_type_callback = cb; }
    void setQFileIconProvider_SetOptions_Callback(QFileIconProvider_SetOptions_Callback cb) { qfileiconprovider_setoptions_callback = cb; }
    void setQFileIconProvider_Options_Callback(QFileIconProvider_Options_Callback cb) { qfileiconprovider_options_callback = cb; }

    // Base flag setters
    void setQFileIconProvider_Icon_IsBase(bool value) const { qfileiconprovider_icon_isbase = value; }
    void setQFileIconProvider_IconWithInfo_IsBase(bool value) const { qfileiconprovider_iconwithinfo_isbase = value; }
    void setQFileIconProvider_Type_IsBase(bool value) const { qfileiconprovider_type_isbase = value; }
    void setQFileIconProvider_SetOptions_IsBase(bool value) const { qfileiconprovider_setoptions_isbase = value; }
    void setQFileIconProvider_Options_IsBase(bool value) const { qfileiconprovider_options_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon(QAbstractFileIconProvider::IconType typeVal) const override {
        if (qfileiconprovider_icon_isbase) {
            qfileiconprovider_icon_isbase = false;
            return QFileIconProvider::icon(typeVal);
        } else if (qfileiconprovider_icon_callback != nullptr) {
            return qfileiconprovider_icon_callback(this, typeVal);
        } else {
            return QFileIconProvider::icon(typeVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon(const QFileInfo& info) const override {
        if (qfileiconprovider_iconwithinfo_isbase) {
            qfileiconprovider_iconwithinfo_isbase = false;
            return QFileIconProvider::icon(info);
        } else if (qfileiconprovider_iconwithinfo_callback != nullptr) {
            return qfileiconprovider_iconwithinfo_callback(this, info);
        } else {
            return QFileIconProvider::icon(info);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString type(const QFileInfo& param1) const override {
        if (qfileiconprovider_type_isbase) {
            qfileiconprovider_type_isbase = false;
            return QFileIconProvider::type(param1);
        } else if (qfileiconprovider_type_callback != nullptr) {
            return qfileiconprovider_type_callback(this, param1);
        } else {
            return QFileIconProvider::type(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOptions(QFlags<QAbstractFileIconProvider::Option> options) override {
        if (qfileiconprovider_setoptions_isbase) {
            qfileiconprovider_setoptions_isbase = false;
            QFileIconProvider::setOptions(options);
        } else if (qfileiconprovider_setoptions_callback != nullptr) {
            qfileiconprovider_setoptions_callback(this, options);
        } else {
            QFileIconProvider::setOptions(options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractFileIconProvider::Options options() const override {
        if (qfileiconprovider_options_isbase) {
            qfileiconprovider_options_isbase = false;
            return QFileIconProvider::options();
        } else if (qfileiconprovider_options_callback != nullptr) {
            return qfileiconprovider_options_callback();
        } else {
            return QFileIconProvider::options();
        }
    }
};

#endif
