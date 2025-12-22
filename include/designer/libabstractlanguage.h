#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTLANGUAGE_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTLANGUAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerLanguageExtension*
///
const char* q_designerlanguageextension_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#createFormWindowSettingsDialog)
///
/// @param self QDesignerLanguageExtension*
/// @param formWindow QDesignerFormWindowInterface*
/// @param parentWidget QWidget*
///
QDialog* q_designerlanguageextension_create_form_window_settings_dialog(void* self, void* formWindow, void* parentWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#createResourceBrowser)
///
/// @param self QDesignerLanguageExtension*
/// @param parentWidget QWidget*
///
QDesignerResourceBrowserInterface* q_designerlanguageextension_create_resource_browser(void* self, void* parentWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#createPromotionDialog)
///
/// @param self QDesignerLanguageExtension*
/// @param formEditor QDesignerFormEditorInterface*
/// @param parentWidget QWidget*
///
QDialog* q_designerlanguageextension_create_promotion_dialog(void* self, void* formEditor, void* parentWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#isLanguageResource)
///
/// @param self QDesignerLanguageExtension*
/// @param path const char*
///
bool q_designerlanguageextension_is_language_resource(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#classNameOf)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerLanguageExtension*
/// @param object QObject*
///
const char* q_designerlanguageextension_class_name_of(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#signalMatchesSlot)
///
/// @param self QDesignerLanguageExtension*
/// @param signal const char*
/// @param slot const char*
///
bool q_designerlanguageextension_signal_matches_slot(void* self, const char* signal, const char* slot);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#widgetBoxContents)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerLanguageExtension*
///
const char* q_designerlanguageextension_widget_box_contents(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#uiExtension)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerLanguageExtension*
///
const char* q_designerlanguageextension_ui_extension(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#dtor.QDesignerLanguageExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerLanguageExtension*
///
void q_designerlanguageextension_delete(void* self);

#endif
