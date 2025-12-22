#pragma once
#ifndef SRC_UIPLUGIN_QT6C_LIBCUSTOMWIDGET_H
#define SRC_UIPLUGIN_QT6C_LIBCUSTOMWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerCustomWidgetInterface*
///
const char* q_designercustomwidgetinterface_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#group)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerCustomWidgetInterface*
///
const char* q_designercustomwidgetinterface_group(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerCustomWidgetInterface*
///
const char* q_designercustomwidgetinterface_tool_tip(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerCustomWidgetInterface*
///
const char* q_designercustomwidgetinterface_whats_this(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#includeFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerCustomWidgetInterface*
///
const char* q_designercustomwidgetinterface_include_file(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#icon)
///
/// @param self QDesignerCustomWidgetInterface*
///
QIcon* q_designercustomwidgetinterface_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#isContainer)
///
/// @param self QDesignerCustomWidgetInterface*
///
bool q_designercustomwidgetinterface_is_container(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#createWidget)
///
/// @param self QDesignerCustomWidgetInterface*
/// @param parent QWidget*
///
QWidget* q_designercustomwidgetinterface_create_widget(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#isInitialized)
///
/// @param self QDesignerCustomWidgetInterface*
///
bool q_designercustomwidgetinterface_is_initialized(void* self);

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
/// @param self QDesignerCustomWidgetInterface*
///
const char* q_designercustomwidgetinterface_dom_xml(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#codeTemplate)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerCustomWidgetInterface*
///
const char* q_designercustomwidgetinterface_code_template(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#operator-eq)
///
/// @param self QDesignerCustomWidgetInterface*
/// @param param1 QDesignerCustomWidgetInterface*
///
void q_designercustomwidgetinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#dtor.QDesignerCustomWidgetInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerCustomWidgetInterface*
///
void q_designercustomwidgetinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#customWidgets)
///
/// @param self QDesignerCustomWidgetCollectionInterface*
///
libqt_list /* of QDesignerCustomWidgetInterface* */ q_designercustomwidgetcollectioninterface_custom_widgets(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#operator-eq)
///
/// @param self QDesignerCustomWidgetCollectionInterface*
/// @param param1 QDesignerCustomWidgetCollectionInterface*
///
void q_designercustomwidgetcollectioninterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#dtor.QDesignerCustomWidgetCollectionInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerCustomWidgetCollectionInterface*
///
void q_designercustomwidgetcollectioninterface_delete(void* self);

#endif
