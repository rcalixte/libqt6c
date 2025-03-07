#pragma once
#ifndef SRCC_LIBVIRTUALQITEMEDITORFACTORY_H
#define SRCC_LIBVIRTUALQITEMEDITORFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QItemEditorFactory so that we can call protected methods
class VirtualQItemEditorFactory : public QItemEditorFactory {

  public:
    // Virtual class public types (including callbacks)
    using QItemEditorFactory_CreateEditor_Callback = QWidget* (*)(const QItemEditorFactory*, int, QWidget*);
    using QItemEditorFactory_ValuePropertyName_Callback = QByteArray (*)(const QItemEditorFactory*, int);

  protected:
    // Instance callback storage
    QItemEditorFactory_CreateEditor_Callback qitemeditorfactory_createeditor_callback = nullptr;
    QItemEditorFactory_ValuePropertyName_Callback qitemeditorfactory_valuepropertyname_callback = nullptr;

    // Instance base flags
    mutable bool qitemeditorfactory_createeditor_isbase = false;
    mutable bool qitemeditorfactory_valuepropertyname_isbase = false;

  public:
    VirtualQItemEditorFactory() : QItemEditorFactory(){};
    VirtualQItemEditorFactory(const QItemEditorFactory& param1) : QItemEditorFactory(param1){};

    ~VirtualQItemEditorFactory() {
        qitemeditorfactory_createeditor_callback = nullptr;
        qitemeditorfactory_valuepropertyname_callback = nullptr;
    }

    // Callback setters
    void setQItemEditorFactory_CreateEditor_Callback(QItemEditorFactory_CreateEditor_Callback cb) { qitemeditorfactory_createeditor_callback = cb; }
    void setQItemEditorFactory_ValuePropertyName_Callback(QItemEditorFactory_ValuePropertyName_Callback cb) { qitemeditorfactory_valuepropertyname_callback = cb; }

    // Base flag setters
    void setQItemEditorFactory_CreateEditor_IsBase(bool value) const { qitemeditorfactory_createeditor_isbase = value; }
    void setQItemEditorFactory_ValuePropertyName_IsBase(bool value) const { qitemeditorfactory_valuepropertyname_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(int userType, QWidget* parent) const override {
        if (qitemeditorfactory_createeditor_isbase) {
            qitemeditorfactory_createeditor_isbase = false;
            return QItemEditorFactory::createEditor(userType, parent);
        } else if (qitemeditorfactory_createeditor_callback != nullptr) {
            return qitemeditorfactory_createeditor_callback(this, userType, parent);
        } else {
            return QItemEditorFactory::createEditor(userType, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray valuePropertyName(int userType) const override {
        if (qitemeditorfactory_valuepropertyname_isbase) {
            qitemeditorfactory_valuepropertyname_isbase = false;
            return QItemEditorFactory::valuePropertyName(userType);
        } else if (qitemeditorfactory_valuepropertyname_callback != nullptr) {
            return qitemeditorfactory_valuepropertyname_callback(this, userType);
        } else {
            return QItemEditorFactory::valuePropertyName(userType);
        }
    }
};

#endif
