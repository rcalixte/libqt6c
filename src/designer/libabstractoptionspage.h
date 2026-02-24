#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTOPTIONSPAGE_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTOPTIONSPAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html)

/// q_designeroptionspageinterface_new constructs a new QDesignerOptionsPageInterface object.
///
QDesignerOptionsPageInterface* q_designeroptionspageinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerOptionsPageInterface*
///
const char* q_designeroptionspageinterface_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerOptionsPageInterface*
/// @param callback const char* func()
///
void q_designeroptionspageinterface_on_name(void* self, const char* (*callback)());

/// @warning DEPRECATED: Use `q_designeroptionspageinterface_super_name` instead
///
#define q_designeroptionspageinterface_qbase_name q_designeroptionspageinterface_super_name

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
///
/// Base class method implementation
///
/// @param self QDesignerOptionsPageInterface*
///
const char* q_designeroptionspageinterface_super_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
///
/// @param self QDesignerOptionsPageInterface*
/// @param parent QWidget*
///
QWidget* q_designeroptionspageinterface_create_page(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerOptionsPageInterface*
/// @param callback QWidget* func(QDesignerOptionsPageInterface* self, QWidget* parent)
///
void q_designeroptionspageinterface_on_create_page(void* self, QWidget* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_designeroptionspageinterface_super_create_page` instead
///
#define q_designeroptionspageinterface_qbase_create_page q_designeroptionspageinterface_super_create_page

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
///
/// Base class method implementation
///
/// @param self QDesignerOptionsPageInterface*
/// @param parent QWidget*
///
QWidget* q_designeroptionspageinterface_super_create_page(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
///
/// @param self QDesignerOptionsPageInterface*
///
void q_designeroptionspageinterface_apply(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerOptionsPageInterface*
/// @param callback void func()
///
void q_designeroptionspageinterface_on_apply(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_designeroptionspageinterface_super_apply` instead
///
#define q_designeroptionspageinterface_qbase_apply q_designeroptionspageinterface_super_apply

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
///
/// Base class method implementation
///
/// @param self QDesignerOptionsPageInterface*
///
void q_designeroptionspageinterface_super_apply(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
///
/// @param self QDesignerOptionsPageInterface*
///
void q_designeroptionspageinterface_finish(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerOptionsPageInterface*
/// @param callback void func()
///
void q_designeroptionspageinterface_on_finish(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_designeroptionspageinterface_super_finish` instead
///
#define q_designeroptionspageinterface_qbase_finish q_designeroptionspageinterface_super_finish

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
///
/// Base class method implementation
///
/// @param self QDesignerOptionsPageInterface*
///
void q_designeroptionspageinterface_super_finish(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#dtor.QDesignerOptionsPageInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerOptionsPageInterface*
///
void q_designeroptionspageinterface_delete(void* self);

#endif
