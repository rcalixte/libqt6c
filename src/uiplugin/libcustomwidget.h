#pragma once
#ifndef UIPLUGIN_LIBCUSTOMWIDGET_H
#define UIPLUGIN_LIBCUSTOMWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#isInitialized)
///
/// @param self const QDesignerCustomWidgetInterface*
///
bool q_designercustomwidgetinterface_is_initialized(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#initialize)
///
/// @param self QDesignerCustomWidgetInterface*
/// @param core QDesignerFormEditorInterface*
///
void q_designercustomwidgetinterface_initialize(void* self, void* core);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#domXml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerCustomWidgetInterface*
///
const char* q_designercustomwidgetinterface_dom_xml(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#codeTemplate)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDesignerCustomWidgetInterface*
///
const char* q_designercustomwidgetinterface_code_template(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#operator-eq)
///
/// @param self QDesignerCustomWidgetInterface*
/// @param param1 QDesignerCustomWidgetInterface*
///
void q_designercustomwidgetinterface_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#dtor.QDesignerCustomWidgetInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerCustomWidgetInterface*
///
void q_designercustomwidgetinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#operator-eq)
///
/// @param self QDesignerCustomWidgetCollectionInterface*
/// @param param1 QDesignerCustomWidgetCollectionInterface*
///
void q_designercustomwidgetcollectioninterface_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#dtor.QDesignerCustomWidgetCollectionInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerCustomWidgetCollectionInterface*
///
void q_designercustomwidgetcollectioninterface_delete(void* self);

#endif
