#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSQT6C_LIBKCONFIGDIALOG_H
#define SRC_EXTRAS_KCONFIGWIDGETSQT6C_LIBKCONFIGDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kconfigdialog.html

/// k_configdialog_new constructs a new KConfigDialog object.
///
/// @param parent QWidget*
/// @param name const char*
/// @param config KCoreConfigSkeleton*
KConfigDialog* k_configdialog_new(void* parent, const char* name, void* config);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KConfigDialog*
const QMetaObject* k_configdialog_meta_object(void* self);

/// @param self KConfigDialog*
/// @param param1 const char*
void* k_configdialog_metacast(void* self, const char* param1);

/// @param self KConfigDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_configdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback int32_t func(KConfigDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_configdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KConfigDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_configdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_configdialog_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#widgetModified)
///
/// @param self KConfigDialog*
void k_configdialog_widget_modified(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#widgetModified)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self)
void k_configdialog_on_widget_modified(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#settingsChanged)
///
/// @param self KConfigDialog*
/// @param dialogName const char*
void k_configdialog_settings_changed(void* self, const char* dialogName);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#settingsChanged)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, const char* dialogName)
void k_configdialog_on_settings_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#addPage)
///
/// @param self KConfigDialog*
/// @param page QWidget*
/// @param itemName const char*
KPageWidgetItem* k_configdialog_add_page(void* self, void* page, const char* itemName);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#addPage)
///
/// @param self KConfigDialog*
/// @param page QWidget*
/// @param config KCoreConfigSkeleton*
/// @param itemName const char*
KPageWidgetItem* k_configdialog_add_page2(void* self, void* page, void* config, const char* itemName);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#exists)
///
/// @param name const char*
KConfigDialog* k_configdialog_exists(const char* name);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#showDialog)
///
/// @param name const char*
bool k_configdialog_show_dialog(const char* name);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateSettings)
///
/// @param self KConfigDialog*
void k_configdialog_update_settings(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateSettings)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_update_settings(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateSettings)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
void k_configdialog_qbase_update_settings(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateWidgets)
///
/// @param self KConfigDialog*
void k_configdialog_update_widgets(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateWidgets)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_update_widgets(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateWidgets)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
void k_configdialog_qbase_update_widgets(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateWidgetsDefault)
///
/// @param self KConfigDialog*
void k_configdialog_update_widgets_default(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateWidgetsDefault)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_update_widgets_default(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateWidgetsDefault)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
void k_configdialog_qbase_update_widgets_default(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateButtons)
///
/// @param self KConfigDialog*
void k_configdialog_update_buttons(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateButtons)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_update_buttons(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#updateButtons)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
void k_configdialog_qbase_update_buttons(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#settingsChangedSlot)
///
/// @param self KConfigDialog*
void k_configdialog_settings_changed_slot(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#settingsChangedSlot)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_settings_changed_slot(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#settingsChangedSlot)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
void k_configdialog_qbase_settings_changed_slot(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#setHelp)
///
/// @param self KConfigDialog*
/// @param anchor const char*
void k_configdialog_set_help(void* self, const char* anchor);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#setHelp)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, const char* anchor)
void k_configdialog_on_set_help(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#setHelp)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
/// @param anchor const char*
void k_configdialog_qbase_set_help(void* self, const char* anchor);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#showHelp)
///
/// @param self KConfigDialog*
void k_configdialog_show_help(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#showHelp)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_show_help(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#showHelp)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
void k_configdialog_qbase_show_help(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#hasChanged)
///
/// @param self KConfigDialog*
bool k_configdialog_has_changed(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#hasChanged)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback bool func()
void k_configdialog_on_has_changed(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#hasChanged)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
bool k_configdialog_qbase_has_changed(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#isDefault)
///
/// @param self KConfigDialog*
bool k_configdialog_is_default(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#isDefault)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback bool func()
void k_configdialog_on_is_default(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#isDefault)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
bool k_configdialog_qbase_is_default(void* self);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#showEvent)
///
/// @param self KConfigDialog*
/// @param e QShowEvent*
void k_configdialog_show_event(void* self, void* e);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QShowEvent* e)
void k_configdialog_on_show_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#showEvent)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
/// @param e QShowEvent*
void k_configdialog_qbase_show_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_configdialog_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_configdialog_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#addPage)
///
/// @param self KConfigDialog*
/// @param page QWidget*
/// @param itemName const char*
/// @param pixmapName const char*
KPageWidgetItem* k_configdialog_add_page3(void* self, void* page, const char* itemName, const char* pixmapName);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#addPage)
///
/// @param self KConfigDialog*
/// @param page QWidget*
/// @param itemName const char*
/// @param pixmapName const char*
/// @param header const char*
KPageWidgetItem* k_configdialog_add_page4(void* self, void* page, const char* itemName, const char* pixmapName, const char* header);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#addPage)
///
/// @param self KConfigDialog*
/// @param page QWidget*
/// @param itemName const char*
/// @param pixmapName const char*
/// @param header const char*
/// @param manage bool
KPageWidgetItem* k_configdialog_add_page5(void* self, void* page, const char* itemName, const char* pixmapName, const char* header, bool manage);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#addPage)
///
/// @param self KConfigDialog*
/// @param page QWidget*
/// @param config KCoreConfigSkeleton*
/// @param itemName const char*
/// @param pixmapName const char*
KPageWidgetItem* k_configdialog_add_page42(void* self, void* page, void* config, const char* itemName, const char* pixmapName);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#addPage)
///
/// @param self KConfigDialog*
/// @param page QWidget*
/// @param config KCoreConfigSkeleton*
/// @param itemName const char*
/// @param pixmapName const char*
/// @param header const char*
KPageWidgetItem* k_configdialog_add_page52(void* self, void* page, void* config, const char* itemName, const char* pixmapName, const char* header);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#setHelp)
///
/// @param self KConfigDialog*
/// @param anchor const char*
/// @param appname const char*
void k_configdialog_set_help2(void* self, const char* anchor, const char* appname);

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#setHelp)
///
/// Allows for overriding the related default method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, const char* anchor, const char* appname)
void k_configdialog_on_set_help2(void* self, void (*callback)(void*, const char*, const char*));

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#setHelp)
///
/// Base class method implementation
///
/// @param self KConfigDialog*
/// @param anchor const char*
/// @param appname const char*
void k_configdialog_qbase_set_help2(void* self, const char* anchor, const char* appname);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#setFaceType)
///
/// @param self KConfigDialog*
/// @param faceType enum KPageDialog__FaceType
void k_configdialog_set_face_type(void* self, int32_t faceType);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#insertPage)
///
/// @param self KConfigDialog*
/// @param before KPageWidgetItem*
/// @param widget QWidget*
/// @param name const char*
KPageWidgetItem* k_configdialog_insert_page(void* self, void* before, void* widget, const char* name);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#insertPage)
///
/// @param self KConfigDialog*
/// @param before KPageWidgetItem*
/// @param item KPageWidgetItem*
void k_configdialog_insert_page2(void* self, void* before, void* item);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#addSubPage)
///
/// @param self KConfigDialog*
/// @param parent KPageWidgetItem*
/// @param widget QWidget*
/// @param name const char*
KPageWidgetItem* k_configdialog_add_sub_page(void* self, void* parent, void* widget, const char* name);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#addSubPage)
///
/// @param self KConfigDialog*
/// @param parent KPageWidgetItem*
/// @param item KPageWidgetItem*
void k_configdialog_add_sub_page2(void* self, void* parent, void* item);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#removePage)
///
/// @param self KConfigDialog*
/// @param item KPageWidgetItem*
void k_configdialog_remove_page(void* self, void* item);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#setCurrentPage)
///
/// @param self KConfigDialog*
/// @param item KPageWidgetItem*
void k_configdialog_set_current_page(void* self, void* item);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#currentPage)
///
/// @param self KConfigDialog*
KPageWidgetItem* k_configdialog_current_page(void* self);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#setStandardButtons)
///
/// @param self KConfigDialog*
/// @param buttons flag of enum QDialogButtonBox__StandardButton
void k_configdialog_set_standard_buttons(void* self, int32_t buttons);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#button)
///
/// @param self KConfigDialog*
/// @param which enum QDialogButtonBox__StandardButton
QPushButton* k_configdialog_button(void* self, int32_t which);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#addActionButton)
///
/// @param self KConfigDialog*
/// @param button QAbstractButton*
void k_configdialog_add_action_button(void* self, void* button);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#currentPageChanged)
///
/// @param self KConfigDialog*
/// @param current KPageWidgetItem*
/// @param before KPageWidgetItem*
void k_configdialog_current_page_changed(void* self, void* current, void* before);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#currentPageChanged)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, KPageWidgetItem* current, KPageWidgetItem* before)
void k_configdialog_on_current_page_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#pageRemoved)
///
/// @param self KConfigDialog*
/// @param page KPageWidgetItem*
void k_configdialog_page_removed(void* self, void* page);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#pageRemoved)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, KPageWidgetItem* page)
void k_configdialog_on_page_removed(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self KConfigDialog*
int32_t k_configdialog_result(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self KConfigDialog*
/// @param sizeGripEnabled bool
void k_configdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self KConfigDialog*
bool k_configdialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self KConfigDialog*
/// @param modal bool
void k_configdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self KConfigDialog*
/// @param r int
void k_configdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KConfigDialog*
/// @param result int
void k_configdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, int result)
void k_configdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KConfigDialog*
void k_configdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self)
void k_configdialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KConfigDialog*
void k_configdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self)
void k_configdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KConfigDialog*
uintptr_t k_configdialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KConfigDialog*
void k_configdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KConfigDialog*
uintptr_t k_configdialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KConfigDialog*
uintptr_t k_configdialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KConfigDialog*
QStyle* k_configdialog_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KConfigDialog*
/// @param style QStyle*
void k_configdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KConfigDialog*
bool k_configdialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KConfigDialog*
bool k_configdialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KConfigDialog*
bool k_configdialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KConfigDialog*
///
/// @return enum Qt__WindowModality
int32_t k_configdialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KConfigDialog*
/// @param windowModality enum Qt__WindowModality
void k_configdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KConfigDialog*
bool k_configdialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KConfigDialog*
/// @param param1 QWidget*
bool k_configdialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KConfigDialog*
/// @param enabled bool
void k_configdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KConfigDialog*
/// @param disabled bool
void k_configdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KConfigDialog*
/// @param windowModified bool
void k_configdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KConfigDialog*
QRect* k_configdialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KConfigDialog*
const QRect* k_configdialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KConfigDialog*
QRect* k_configdialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KConfigDialog*
int32_t k_configdialog_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KConfigDialog*
int32_t k_configdialog_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KConfigDialog*
QPoint* k_configdialog_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KConfigDialog*
QSize* k_configdialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KConfigDialog*
QSize* k_configdialog_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KConfigDialog*
int32_t k_configdialog_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KConfigDialog*
int32_t k_configdialog_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KConfigDialog*
QRect* k_configdialog_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KConfigDialog*
QRect* k_configdialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KConfigDialog*
QRegion* k_configdialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KConfigDialog*
QSize* k_configdialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KConfigDialog*
QSize* k_configdialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KConfigDialog*
int32_t k_configdialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KConfigDialog*
int32_t k_configdialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KConfigDialog*
int32_t k_configdialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KConfigDialog*
int32_t k_configdialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KConfigDialog*
/// @param minimumSize QSize*
void k_configdialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KConfigDialog*
/// @param minw int
/// @param minh int
void k_configdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KConfigDialog*
/// @param maximumSize QSize*
void k_configdialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KConfigDialog*
/// @param maxw int
/// @param maxh int
void k_configdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KConfigDialog*
/// @param minw int
void k_configdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KConfigDialog*
/// @param minh int
void k_configdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KConfigDialog*
/// @param maxw int
void k_configdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KConfigDialog*
/// @param maxh int
void k_configdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KConfigDialog*
QSize* k_configdialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KConfigDialog*
/// @param sizeIncrement QSize*
void k_configdialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KConfigDialog*
/// @param w int
/// @param h int
void k_configdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KConfigDialog*
QSize* k_configdialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KConfigDialog*
/// @param baseSize QSize*
void k_configdialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KConfigDialog*
/// @param basew int
/// @param baseh int
void k_configdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KConfigDialog*
/// @param fixedSize QSize*
void k_configdialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KConfigDialog*
/// @param w int
/// @param h int
void k_configdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KConfigDialog*
/// @param w int
void k_configdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KConfigDialog*
/// @param h int
void k_configdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KConfigDialog*
/// @param param1 QPointF*
QPointF* k_configdialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KConfigDialog*
/// @param param1 QPoint*
QPoint* k_configdialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KConfigDialog*
/// @param param1 QPointF*
QPointF* k_configdialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KConfigDialog*
/// @param param1 QPoint*
QPoint* k_configdialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KConfigDialog*
/// @param param1 QPointF*
QPointF* k_configdialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KConfigDialog*
/// @param param1 QPoint*
QPoint* k_configdialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KConfigDialog*
/// @param param1 QPointF*
QPointF* k_configdialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KConfigDialog*
/// @param param1 QPoint*
QPoint* k_configdialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KConfigDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_configdialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KConfigDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_configdialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KConfigDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_configdialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KConfigDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_configdialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KConfigDialog*
QWidget* k_configdialog_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KConfigDialog*
QWidget* k_configdialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KConfigDialog*
QWidget* k_configdialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KConfigDialog*
const QPalette* k_configdialog_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KConfigDialog*
/// @param palette QPalette*
void k_configdialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KConfigDialog*
/// @param backgroundRole enum QPalette__ColorRole
void k_configdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KConfigDialog*
///
/// @return enum QPalette__ColorRole
int32_t k_configdialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KConfigDialog*
/// @param foregroundRole enum QPalette__ColorRole
void k_configdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KConfigDialog*
///
/// @return enum QPalette__ColorRole
int32_t k_configdialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KConfigDialog*
const QFont* k_configdialog_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KConfigDialog*
/// @param font QFont*
void k_configdialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KConfigDialog*
QFontMetrics* k_configdialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KConfigDialog*
QFontInfo* k_configdialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KConfigDialog*
QCursor* k_configdialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KConfigDialog*
/// @param cursor QCursor*
void k_configdialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KConfigDialog*
void k_configdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KConfigDialog*
/// @param enable bool
void k_configdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KConfigDialog*
bool k_configdialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KConfigDialog*
bool k_configdialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KConfigDialog*
/// @param enable bool
void k_configdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KConfigDialog*
bool k_configdialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KConfigDialog*
/// @param mask QBitmap*
void k_configdialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KConfigDialog*
/// @param mask QRegion*
void k_configdialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KConfigDialog*
QRegion* k_configdialog_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KConfigDialog*
void k_configdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KConfigDialog*
/// @param target QPaintDevice*
void k_configdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KConfigDialog*
/// @param painter QPainter*
void k_configdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KConfigDialog*
QPixmap* k_configdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KConfigDialog*
QGraphicsEffect* k_configdialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KConfigDialog*
/// @param effect QGraphicsEffect*
void k_configdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KConfigDialog*
/// @param type enum Qt__GestureType
void k_configdialog_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KConfigDialog*
/// @param type enum Qt__GestureType
void k_configdialog_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KConfigDialog*
/// @param windowTitle const char*
void k_configdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KConfigDialog*
/// @param styleSheet const char*
void k_configdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KConfigDialog*
/// @param icon QIcon*
void k_configdialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KConfigDialog*
QIcon* k_configdialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KConfigDialog*
/// @param windowIconText const char*
void k_configdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KConfigDialog*
/// @param windowRole const char*
void k_configdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KConfigDialog*
/// @param filePath const char*
void k_configdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KConfigDialog*
/// @param level double
void k_configdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KConfigDialog*
double k_configdialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KConfigDialog*
bool k_configdialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KConfigDialog*
/// @param toolTip const char*
void k_configdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KConfigDialog*
/// @param msec int
void k_configdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KConfigDialog*
int32_t k_configdialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KConfigDialog*
/// @param statusTip const char*
void k_configdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KConfigDialog*
/// @param whatsThis const char*
void k_configdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KConfigDialog*
/// @param name const char*
void k_configdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KConfigDialog*
/// @param description const char*
void k_configdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KConfigDialog*
/// @param direction enum Qt__LayoutDirection
void k_configdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KConfigDialog*
///
/// @return enum Qt__LayoutDirection
int32_t k_configdialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KConfigDialog*
void k_configdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KConfigDialog*
/// @param locale QLocale*
void k_configdialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KConfigDialog*
QLocale* k_configdialog_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KConfigDialog*
void k_configdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KConfigDialog*
bool k_configdialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KConfigDialog*
bool k_configdialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KConfigDialog*
void k_configdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KConfigDialog*
bool k_configdialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KConfigDialog*
void k_configdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KConfigDialog*
void k_configdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KConfigDialog*
/// @param reason enum Qt__FocusReason
void k_configdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KConfigDialog*
///
/// @return enum Qt__FocusPolicy
int32_t k_configdialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KConfigDialog*
/// @param policy enum Qt__FocusPolicy
void k_configdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KConfigDialog*
bool k_configdialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_configdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KConfigDialog*
/// @param focusProxy QWidget*
void k_configdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KConfigDialog*
QWidget* k_configdialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KConfigDialog*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_configdialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KConfigDialog*
/// @param policy enum Qt__ContextMenuPolicy
void k_configdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KConfigDialog*
void k_configdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KConfigDialog*
/// @param param1 QCursor*
void k_configdialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KConfigDialog*
void k_configdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KConfigDialog*
void k_configdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KConfigDialog*
void k_configdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KConfigDialog*
/// @param key QKeySequence*
int32_t k_configdialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KConfigDialog*
/// @param id int
void k_configdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KConfigDialog*
/// @param id int
void k_configdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KConfigDialog*
/// @param id int
void k_configdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_configdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_configdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KConfigDialog*
bool k_configdialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KConfigDialog*
/// @param enable bool
void k_configdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KConfigDialog*
QGraphicsProxyWidget* k_configdialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KConfigDialog*
void k_configdialog_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KConfigDialog*
void k_configdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KConfigDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_configdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KConfigDialog*
/// @param param1 QRect*
void k_configdialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KConfigDialog*
/// @param param1 QRegion*
void k_configdialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KConfigDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_configdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KConfigDialog*
/// @param param1 QRect*
void k_configdialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KConfigDialog*
/// @param param1 QRegion*
void k_configdialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KConfigDialog*
/// @param hidden bool
void k_configdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KConfigDialog*
void k_configdialog_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KConfigDialog*
void k_configdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KConfigDialog*
void k_configdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KConfigDialog*
void k_configdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KConfigDialog*
void k_configdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KConfigDialog*
void k_configdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KConfigDialog*
bool k_configdialog_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KConfigDialog*
void k_configdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KConfigDialog*
void k_configdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KConfigDialog*
/// @param param1 QWidget*
void k_configdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KConfigDialog*
/// @param x int
/// @param y int
void k_configdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KConfigDialog*
/// @param param1 QPoint*
void k_configdialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KConfigDialog*
/// @param w int
/// @param h int
void k_configdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KConfigDialog*
/// @param param1 QSize*
void k_configdialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KConfigDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_configdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KConfigDialog*
/// @param geometry QRect*
void k_configdialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
char* k_configdialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KConfigDialog*
/// @param geometry const char*
bool k_configdialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KConfigDialog*
void k_configdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KConfigDialog*
bool k_configdialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KConfigDialog*
/// @param param1 QWidget*
bool k_configdialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KConfigDialog*
bool k_configdialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KConfigDialog*
bool k_configdialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KConfigDialog*
bool k_configdialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KConfigDialog*
bool k_configdialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KConfigDialog*
///
/// @return flag of enum Qt__WindowState
int32_t k_configdialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KConfigDialog*
/// @param state flag of enum Qt__WindowState
void k_configdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KConfigDialog*
/// @param state flag of enum Qt__WindowState
void k_configdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KConfigDialog*
QSizePolicy* k_configdialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KConfigDialog*
/// @param sizePolicy QSizePolicy*
void k_configdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KConfigDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_configdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KConfigDialog*
QRegion* k_configdialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KConfigDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_configdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KConfigDialog*
/// @param margins QMargins*
void k_configdialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KConfigDialog*
QMargins* k_configdialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KConfigDialog*
QRect* k_configdialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KConfigDialog*
QLayout* k_configdialog_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KConfigDialog*
/// @param layout QLayout*
void k_configdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KConfigDialog*
void k_configdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KConfigDialog*
/// @param parent QWidget*
void k_configdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KConfigDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_configdialog_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KConfigDialog*
/// @param dx int
/// @param dy int
void k_configdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KConfigDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_configdialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KConfigDialog*
QWidget* k_configdialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KConfigDialog*
QWidget* k_configdialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KConfigDialog*
QWidget* k_configdialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KConfigDialog*
bool k_configdialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KConfigDialog*
/// @param on bool
void k_configdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KConfigDialog*
/// @param action QAction*
void k_configdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KConfigDialog*
/// @param actions libqt_list /* of QAction* */
void k_configdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KConfigDialog*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_configdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KConfigDialog*
/// @param before QAction*
/// @param action QAction*
void k_configdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KConfigDialog*
/// @param action QAction*
void k_configdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KConfigDialog*
libqt_list /* of QAction* */ k_configdialog_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KConfigDialog*
/// @param text const char*
QAction* k_configdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KConfigDialog*
/// @param icon QIcon*
/// @param text const char*
QAction* k_configdialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KConfigDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_configdialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KConfigDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_configdialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KConfigDialog*
QWidget* k_configdialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KConfigDialog*
/// @param type flag of enum Qt__WindowType
void k_configdialog_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KConfigDialog*
///
/// @return flag of enum Qt__WindowType
int64_t k_configdialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KConfigDialog*
/// @param param1 enum Qt__WindowType
void k_configdialog_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KConfigDialog*
/// @param type flag of enum Qt__WindowType
void k_configdialog_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KConfigDialog*
///
/// @return enum Qt__WindowType
int64_t k_configdialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_configdialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KConfigDialog*
/// @param x int
/// @param y int
QWidget* k_configdialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KConfigDialog*
/// @param p QPoint*
QWidget* k_configdialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KConfigDialog*
/// @param p QPointF*
QWidget* k_configdialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KConfigDialog*
/// @param param1 enum Qt__WidgetAttribute
void k_configdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KConfigDialog*
/// @param param1 enum Qt__WidgetAttribute
bool k_configdialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KConfigDialog*
void k_configdialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KConfigDialog*
/// @param child QWidget*
bool k_configdialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KConfigDialog*
bool k_configdialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KConfigDialog*
/// @param enabled bool
void k_configdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KConfigDialog*
QBackingStore* k_configdialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KConfigDialog*
QWindow* k_configdialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KConfigDialog*
QScreen* k_configdialog_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KConfigDialog*
/// @param screen QScreen*
void k_configdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_configdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KConfigDialog*
/// @param title const char*
void k_configdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, const char* title)
void k_configdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KConfigDialog*
/// @param icon QIcon*
void k_configdialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QIcon* icon)
void k_configdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KConfigDialog*
/// @param iconText const char*
void k_configdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, const char* iconText)
void k_configdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KConfigDialog*
/// @param pos QPoint*
void k_configdialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QPoint* pos)
void k_configdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KConfigDialog*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_configdialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KConfigDialog*
/// @param hints flag of enum Qt__InputMethodHint
void k_configdialog_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KConfigDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_configdialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KConfigDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_configdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KConfigDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_configdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KConfigDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_configdialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KConfigDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_configdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KConfigDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_configdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KConfigDialog*
/// @param rectangle QRect*
QPixmap* k_configdialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KConfigDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_configdialog_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KConfigDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_configdialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KConfigDialog*
/// @param id int
/// @param enable bool
void k_configdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KConfigDialog*
/// @param id int
/// @param enable bool
void k_configdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KConfigDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_configdialog_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KConfigDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_configdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_configdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_configdialog_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char* k_configdialog_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KConfigDialog*
/// @param name char*
void k_configdialog_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KConfigDialog*
bool k_configdialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KConfigDialog*
bool k_configdialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KConfigDialog*
bool k_configdialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KConfigDialog*
bool k_configdialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KConfigDialog*
/// @param b bool
bool k_configdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KConfigDialog*
QThread* k_configdialog_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KConfigDialog*
/// @param thread QThread*
bool k_configdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigDialog*
/// @param interval int
int32_t k_configdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KConfigDialog*
/// @param id int
void k_configdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KConfigDialog*
/// @param id enum Qt__TimerId
void k_configdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KConfigDialog*
libqt_list /* of QObject* */ k_configdialog_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KConfigDialog*
/// @param filterObj QObject*
void k_configdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KConfigDialog*
/// @param obj QObject*
void k_configdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_configdialog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KConfigDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_configdialog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_configdialog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_configdialog_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KConfigDialog*
void k_configdialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KConfigDialog*
void k_configdialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KConfigDialog*
/// @param name const char*
/// @param value QVariant*
bool k_configdialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KConfigDialog*
/// @param name const char*
QVariant* k_configdialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KConfigDialog*
const char** k_configdialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KConfigDialog*
QBindingStorage* k_configdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KConfigDialog*
const QBindingStorage* k_configdialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigDialog*
void k_configdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self)
void k_configdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KConfigDialog*
QObject* k_configdialog_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KConfigDialog*
/// @param classname const char*
bool k_configdialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KConfigDialog*
void k_configdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KConfigDialog*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_configdialog_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KConfigDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_configdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_configdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KConfigDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_configdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigDialog*
/// @param param1 QObject*
void k_configdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QObject* param1)
void k_configdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KConfigDialog*
bool k_configdialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KConfigDialog*
int32_t k_configdialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KConfigDialog*
int32_t k_configdialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KConfigDialog*
int32_t k_configdialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KConfigDialog*
int32_t k_configdialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KConfigDialog*
int32_t k_configdialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KConfigDialog*
int32_t k_configdialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KConfigDialog*
double k_configdialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KConfigDialog*
double k_configdialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KConfigDialog*
int32_t k_configdialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KConfigDialog*
int32_t k_configdialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_configdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_configdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param visible bool
void k_configdialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param visible bool
void k_configdialog_qbase_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, bool visible)
void k_configdialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
QSize* k_configdialog_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
QSize* k_configdialog_qbase_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback QSize* func()
void k_configdialog_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
QSize* k_configdialog_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
QSize* k_configdialog_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback QSize* func()
void k_configdialog_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
int32_t k_configdialog_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
int32_t k_configdialog_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback int32_t func()
void k_configdialog_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 int
void k_configdialog_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 int
void k_configdialog_qbase_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, int param1)
void k_configdialog_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_qbase_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_accept(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QKeyEvent*
void k_configdialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QKeyEvent*
void k_configdialog_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QKeyEvent* param1)
void k_configdialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QCloseEvent*
void k_configdialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QCloseEvent*
void k_configdialog_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QCloseEvent* param1)
void k_configdialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QResizeEvent*
void k_configdialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QResizeEvent*
void k_configdialog_qbase_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QResizeEvent* param1)
void k_configdialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QContextMenuEvent*
void k_configdialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QContextMenuEvent*
void k_configdialog_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QContextMenuEvent* param1)
void k_configdialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_configdialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_configdialog_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback bool func(KConfigDialog* self, QObject* param1, QEvent* param2)
void k_configdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
int32_t k_configdialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
int32_t k_configdialog_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback int32_t func()
void k_configdialog_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 int
int32_t k_configdialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 int
int32_t k_configdialog_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback int32_t func(KConfigDialog* self, int param1)
void k_configdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
bool k_configdialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
bool k_configdialog_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback bool func()
void k_configdialog_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
QPaintEngine* k_configdialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
QPaintEngine* k_configdialog_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback QPaintEngine* func()
void k_configdialog_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QEvent*
bool k_configdialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QEvent*
bool k_configdialog_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback bool func(KConfigDialog* self, QEvent* event)
void k_configdialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QMouseEvent*
void k_configdialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QMouseEvent*
void k_configdialog_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QMouseEvent* event)
void k_configdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QMouseEvent*
void k_configdialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QMouseEvent*
void k_configdialog_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QMouseEvent* event)
void k_configdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QMouseEvent*
void k_configdialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QMouseEvent*
void k_configdialog_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QMouseEvent* event)
void k_configdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QMouseEvent*
void k_configdialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QMouseEvent*
void k_configdialog_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QMouseEvent* event)
void k_configdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QWheelEvent*
void k_configdialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QWheelEvent*
void k_configdialog_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QWheelEvent* event)
void k_configdialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QKeyEvent*
void k_configdialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QKeyEvent*
void k_configdialog_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QKeyEvent* event)
void k_configdialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QFocusEvent*
void k_configdialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QFocusEvent*
void k_configdialog_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QFocusEvent* event)
void k_configdialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QFocusEvent*
void k_configdialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QFocusEvent*
void k_configdialog_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QFocusEvent* event)
void k_configdialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QEnterEvent*
void k_configdialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QEnterEvent*
void k_configdialog_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QEnterEvent* event)
void k_configdialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QEvent*
void k_configdialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QEvent*
void k_configdialog_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QEvent* event)
void k_configdialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QPaintEvent*
void k_configdialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QPaintEvent*
void k_configdialog_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QPaintEvent* event)
void k_configdialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QMoveEvent*
void k_configdialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QMoveEvent*
void k_configdialog_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QMoveEvent* event)
void k_configdialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QTabletEvent*
void k_configdialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QTabletEvent*
void k_configdialog_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QTabletEvent* event)
void k_configdialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QActionEvent*
void k_configdialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QActionEvent*
void k_configdialog_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QActionEvent* event)
void k_configdialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QDragEnterEvent*
void k_configdialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QDragEnterEvent*
void k_configdialog_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QDragEnterEvent* event)
void k_configdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QDragMoveEvent*
void k_configdialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QDragMoveEvent*
void k_configdialog_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QDragMoveEvent* event)
void k_configdialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QDragLeaveEvent*
void k_configdialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QDragLeaveEvent*
void k_configdialog_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QDragLeaveEvent* event)
void k_configdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QDropEvent*
void k_configdialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QDropEvent*
void k_configdialog_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QDropEvent* event)
void k_configdialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QHideEvent*
void k_configdialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QHideEvent*
void k_configdialog_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QHideEvent* event)
void k_configdialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_configdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_configdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback bool func(KConfigDialog* self, const char* eventType, void* message, intptr_t* result)
void k_configdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QEvent*
void k_configdialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QEvent*
void k_configdialog_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QEvent* param1)
void k_configdialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_configdialog_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_configdialog_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback int32_t func(KConfigDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_configdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param painter QPainter*
void k_configdialog_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param painter QPainter*
void k_configdialog_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QPainter* painter)
void k_configdialog_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param offset QPoint*
QPaintDevice* k_configdialog_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param offset QPoint*
QPaintDevice* k_configdialog_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback QPaintDevice* func(KConfigDialog* self, QPoint* offset)
void k_configdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
QPainter* k_configdialog_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
QPainter* k_configdialog_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback QPainter* func()
void k_configdialog_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QInputMethodEvent*
void k_configdialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QInputMethodEvent*
void k_configdialog_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QInputMethodEvent* param1)
void k_configdialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_configdialog_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_configdialog_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback QVariant* func(KConfigDialog* self, enum Qt__InputMethodQuery param1)
void k_configdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param next bool
bool k_configdialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param next bool
bool k_configdialog_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback bool func(KConfigDialog* self, bool next)
void k_configdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QTimerEvent*
void k_configdialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QTimerEvent*
void k_configdialog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QTimerEvent* event)
void k_configdialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QChildEvent*
void k_configdialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QChildEvent*
void k_configdialog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QChildEvent* event)
void k_configdialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QEvent*
void k_configdialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param event QEvent*
void k_configdialog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QEvent* event)
void k_configdialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param signal QMetaMethod*
void k_configdialog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param signal QMetaMethod*
void k_configdialog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QMetaMethod* signal)
void k_configdialog_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param signal QMetaMethod*
void k_configdialog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param signal QMetaMethod*
void k_configdialog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QMetaMethod* signal)
void k_configdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#pageWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
KPageWidget* k_configdialog_page_widget(void* self);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#pageWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
KPageWidget* k_configdialog_qbase_page_widget(void* self);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#pageWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback KPageWidget* func()
void k_configdialog_on_page_widget(void* self, KPageWidget* (*callback)());

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#setPageWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param widget KPageWidget*
void k_configdialog_set_page_widget(void* self, void* widget);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#setPageWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param widget KPageWidget*
void k_configdialog_qbase_set_page_widget(void* self, void* widget);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#setPageWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, KPageWidget* widget)
void k_configdialog_on_set_page_widget(void* self, void (*callback)(void*, void*));

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#buttonBox)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
QDialogButtonBox* k_configdialog_button_box(void* self);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#buttonBox)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
QDialogButtonBox* k_configdialog_qbase_button_box(void* self);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#buttonBox)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback QDialogButtonBox* func()
void k_configdialog_on_button_box(void* self, QDialogButtonBox* (*callback)());

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#setButtonBox)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param box QDialogButtonBox*
void k_configdialog_set_button_box(void* self, void* box);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#setButtonBox)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param box QDialogButtonBox*
void k_configdialog_qbase_set_button_box(void* self, void* box);

/// Inherited from KPageDialog
///
/// [Qt documentation](https://api.kde.org/kpagedialog.html#setButtonBox)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QDialogButtonBox* box)
void k_configdialog_on_set_button_box(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QWidget*
void k_configdialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param param1 QWidget*
void k_configdialog_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, QWidget* param1)
void k_configdialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
void k_configdialog_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback void func()
void k_configdialog_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
bool k_configdialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
bool k_configdialog_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback bool func()
void k_configdialog_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
bool k_configdialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
bool k_configdialog_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback bool func()
void k_configdialog_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
QObject* k_configdialog_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
QObject* k_configdialog_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback QObject* func()
void k_configdialog_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
int32_t k_configdialog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
int32_t k_configdialog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback int32_t func()
void k_configdialog_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param signal const char*
int32_t k_configdialog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param signal const char*
int32_t k_configdialog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback int32_t func(KConfigDialog* self, const char* signal)
void k_configdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param signal QMetaMethod*
bool k_configdialog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param signal QMetaMethod*
bool k_configdialog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback bool func(KConfigDialog* self, QMetaMethod* signal)
void k_configdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_configdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_configdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigDialog*
/// @param callback double func(KConfigDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_configdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KConfigDialog*
/// @param callback void func(KConfigDialog* self, const char* objectName)
void k_configdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kconfigdialog.html#dtor.KConfigDialog)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigDialog*
void k_configdialog_delete(void* self);

#endif
