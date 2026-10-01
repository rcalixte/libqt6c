#pragma once
#ifndef DESIGNER_LIBABSTRACTOPTIONSPAGE_H
#define DESIGNER_LIBABSTRACTOPTIONSPAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html)

/// q_designeroptionspageinterface_new constructs a new QDesignerOptionsPageInterface object.
///
QDesignerOptionsPageInterface* q_designeroptionspageinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
///
/// @warning This method must be implemented with `q_designeroptionspageinterface_on_name` before it can be called.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerOptionsPageInterface*
///
const char* q_designeroptionspageinterface_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#name)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerOptionsPageInterface*
/// @param callback const char* func(const QDesignerOptionsPageInterface* self)
///
void q_designeroptionspageinterface_on_name(void* self, const char* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#createPage)
///
/// @warning This method must be implemented with `q_designeroptionspageinterface_on_create_page` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
///
/// @warning This method must be implemented with `q_designeroptionspageinterface_on_apply` before it can be called.
///
/// @param self QDesignerOptionsPageInterface*
///
void q_designeroptionspageinterface_apply(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#apply)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerOptionsPageInterface*
/// @param callback void func(QDesignerOptionsPageInterface* self)
///
void q_designeroptionspageinterface_on_apply(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
///
/// @warning This method must be implemented with `q_designeroptionspageinterface_on_finish` before it can be called.
///
/// @param self QDesignerOptionsPageInterface*
///
void q_designeroptionspageinterface_finish(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#finish)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerOptionsPageInterface*
/// @param callback void func(QDesignerOptionsPageInterface* self)
///
void q_designeroptionspageinterface_on_finish(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesigneroptionspageinterface.html#dtor.QDesignerOptionsPageInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerOptionsPageInterface*
///
void q_designeroptionspageinterface_delete(void* self);

#endif
