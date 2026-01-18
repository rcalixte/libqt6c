#pragma once
#ifndef SRC_QT6C_LIBQWIZARD_H
#define SRC_QT6C_LIBQWIZARD_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html)

/// q_wizard_new constructs a new QWizard object.
///
/// @param parent QWidget*
///
QWizard* q_wizard_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html)

/// q_wizard_new2 constructs a new QWizard object.
///
QWizard* q_wizard_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html)

/// q_wizard_new3 constructs a new QWizard object.
///
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWizard* q_wizard_new3(void* parent, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWizard*
///
const QMetaObject* q_wizard_meta_object(void* self);

/// @param self QWizard*
/// @param param1 const char*
///
void* q_wizard_metacast(void* self, const char* param1);

/// @param self QWizard*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_wizard_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback int32_t func(QWizard* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_wizard_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWizard*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_wizard_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_wizard_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#addPage)
///
/// @param self QWizard*
/// @param page QWizardPage*
///
int32_t q_wizard_add_page(void* self, void* page);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setPage)
///
/// @param self QWizard*
/// @param id int
/// @param page QWizardPage*
///
void q_wizard_set_page(void* self, int id, void* page);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#removePage)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_remove_page(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#page)
///
/// @param self QWizard*
/// @param id int
///
QWizardPage* q_wizard_page(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#hasVisitedPage)
///
/// @param self QWizard*
/// @param id int
///
bool q_wizard_has_visited_page(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#visitedIds)
///
/// @param self QWizard*
///
/// @return libqt_list of int
///
libqt_list q_wizard_visited_ids(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#pageIds)
///
/// @param self QWizard*
///
/// @return libqt_list of int
///
libqt_list q_wizard_page_ids(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setStartId)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_set_start_id(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#startId)
///
/// @param self QWizard*
///
int32_t q_wizard_start_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#currentPage)
///
/// @param self QWizard*
///
QWizardPage* q_wizard_current_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#currentId)
///
/// @param self QWizard*
///
int32_t q_wizard_current_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#validateCurrentPage)
///
/// @param self QWizard*
///
bool q_wizard_validate_current_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#validateCurrentPage)
///
/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback bool func()
///
void q_wizard_on_validate_current_page(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#validateCurrentPage)
///
/// Base class method implementation
///
/// @param self QWizard*
///
bool q_wizard_qbase_validate_current_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#nextId)
///
/// @param self QWizard*
///
int32_t q_wizard_next_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#nextId)
///
/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback int32_t func()
///
void q_wizard_on_next_id(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#nextId)
///
/// Base class method implementation
///
/// @param self QWizard*
///
int32_t q_wizard_qbase_next_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setField)
///
/// @param self QWizard*
/// @param name const char*
/// @param value QVariant*
///
void q_wizard_set_field(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#field)
///
/// @param self QWizard*
/// @param name const char*
///
QVariant* q_wizard_field(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setWizardStyle)
///
/// @param self QWizard*
/// @param style enum QWizard__WizardStyle
///
void q_wizard_set_wizard_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#wizardStyle)
///
/// @param self QWizard*
///
/// @return enum QWizard__WizardStyle
///
int32_t q_wizard_wizard_style(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setOption)
///
/// @param self QWizard*
/// @param option enum QWizard__WizardOption
///
void q_wizard_set_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#testOption)
///
/// @param self QWizard*
/// @param option enum QWizard__WizardOption
///
bool q_wizard_test_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setOptions)
///
/// @param self QWizard*
/// @param options flag of enum QWizard__WizardOption
///
void q_wizard_set_options(void* self, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#options)
///
/// @param self QWizard*
///
/// @return flag of enum QWizard__WizardOption
///
int32_t q_wizard_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setButtonText)
///
/// @param self QWizard*
/// @param which enum QWizard__WizardButton
/// @param text const char*
///
void q_wizard_set_button_text(void* self, int32_t which, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#buttonText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
/// @param which enum QWizard__WizardButton
///
const char* q_wizard_button_text(void* self, int32_t which);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setButtonLayout)
///
/// @param self QWizard*
/// @param layout libqt_list of enum QWizard__WizardButton
///
void q_wizard_set_button_layout(void* self, libqt_list /* of enum QWizard__WizardButton */ layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setButton)
///
/// @param self QWizard*
/// @param which enum QWizard__WizardButton
/// @param button QAbstractButton*
///
void q_wizard_set_button(void* self, int32_t which, void* button);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#button)
///
/// @param self QWizard*
/// @param which enum QWizard__WizardButton
///
QAbstractButton* q_wizard_button(void* self, int32_t which);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setTitleFormat)
///
/// @param self QWizard*
/// @param format enum Qt__TextFormat
///
void q_wizard_set_title_format(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#titleFormat)
///
/// @param self QWizard*
///
/// @return enum Qt__TextFormat
///
int32_t q_wizard_title_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setSubTitleFormat)
///
/// @param self QWizard*
/// @param format enum Qt__TextFormat
///
void q_wizard_set_sub_title_format(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#subTitleFormat)
///
/// @param self QWizard*
///
/// @return enum Qt__TextFormat
///
int32_t q_wizard_sub_title_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setPixmap)
///
/// @param self QWizard*
/// @param which enum QWizard__WizardPixmap
/// @param pixmap QPixmap*
///
void q_wizard_set_pixmap(void* self, int32_t which, void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#pixmap)
///
/// @param self QWizard*
/// @param which enum QWizard__WizardPixmap
///
QPixmap* q_wizard_pixmap(void* self, int32_t which);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setSideWidget)
///
/// @param self QWizard*
/// @param widget QWidget*
///
void q_wizard_set_side_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#sideWidget)
///
/// @param self QWizard*
///
QWidget* q_wizard_side_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setDefaultProperty)
///
/// @param self QWizard*
/// @param className const char*
/// @param property const char*
/// @param changedSignal const char*
///
void q_wizard_set_default_property(void* self, const char* className, const char* property, const char* changedSignal);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setVisible)
///
/// @param self QWizard*
/// @param visible bool
///
void q_wizard_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setVisible)
///
/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, bool visible)
///
void q_wizard_on_set_visible(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setVisible)
///
/// Base class method implementation
///
/// @param self QWizard*
/// @param visible bool
///
void q_wizard_qbase_set_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#sizeHint)
///
/// @param self QWizard*
///
QSize* q_wizard_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback QSize* func()
///
void q_wizard_on_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QWizard*
///
QSize* q_wizard_qbase_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#currentIdChanged)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_current_id_changed(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#currentIdChanged)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, int id)
///
void q_wizard_on_current_id_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#helpRequested)
///
/// @param self QWizard*
///
void q_wizard_help_requested(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#helpRequested)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self)
///
void q_wizard_on_help_requested(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#customButtonClicked)
///
/// @param self QWizard*
/// @param which int
///
void q_wizard_custom_button_clicked(void* self, int which);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#customButtonClicked)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, int which)
///
void q_wizard_on_custom_button_clicked(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#pageAdded)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_page_added(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#pageAdded)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, int id)
///
void q_wizard_on_page_added(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#pageRemoved)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_page_removed(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#pageRemoved)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, int id)
///
void q_wizard_on_page_removed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#back)
///
/// @param self QWizard*
///
void q_wizard_back(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#next)
///
/// @param self QWizard*
///
void q_wizard_next(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setCurrentId)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_set_current_id(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#restart)
///
/// @param self QWizard*
///
void q_wizard_restart(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#event)
///
/// @param self QWizard*
/// @param event QEvent*
///
bool q_wizard_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback bool func(QWizard* self, QEvent* event)
///
void q_wizard_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#event)
///
/// Base class method implementation
///
/// @param self QWizard*
/// @param event QEvent*
///
bool q_wizard_qbase_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#resizeEvent)
///
/// @param self QWizard*
/// @param event QResizeEvent*
///
void q_wizard_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QResizeEvent* event)
///
void q_wizard_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QWizard*
/// @param event QResizeEvent*
///
void q_wizard_qbase_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#paintEvent)
///
/// @param self QWizard*
/// @param event QPaintEvent*
///
void q_wizard_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QPaintEvent* event)
///
void q_wizard_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QWizard*
/// @param event QPaintEvent*
///
void q_wizard_qbase_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#done)
///
/// @param self QWizard*
/// @param result int
///
void q_wizard_done(void* self, int result);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#done)
///
/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, int result)
///
void q_wizard_on_done(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#done)
///
/// Base class method implementation
///
/// @param self QWizard*
/// @param result int
///
void q_wizard_qbase_done(void* self, int result);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#initializePage)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_initialize_page(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#initializePage)
///
/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, int id)
///
void q_wizard_on_initialize_page(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#initializePage)
///
/// Base class method implementation
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_qbase_initialize_page(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#cleanupPage)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_cleanup_page(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#cleanupPage)
///
/// Allows for overriding the related default method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, int id)
///
void q_wizard_on_cleanup_page(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#cleanupPage)
///
/// Base class method implementation
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_qbase_cleanup_page(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_wizard_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_wizard_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#setOption)
///
/// @param self QWizard*
/// @param option enum QWizard__WizardOption
/// @param on bool
///
void q_wizard_set_option2(void* self, int32_t option, bool on);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self QWizard*
///
int32_t q_wizard_result(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self QWizard*
/// @param sizeGripEnabled bool
///
void q_wizard_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self QWizard*
///
bool q_wizard_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self QWizard*
/// @param modal bool
///
void q_wizard_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self QWizard*
/// @param r int
///
void q_wizard_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QWizard*
/// @param result int
///
void q_wizard_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, int result)
///
void q_wizard_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self QWizard*
///
void q_wizard_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self)
///
void q_wizard_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QWizard*
///
void q_wizard_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self)
///
void q_wizard_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QWizard*
///
uintptr_t q_wizard_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QWizard*
///
void q_wizard_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QWizard*
///
uintptr_t q_wizard_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QWizard*
///
uintptr_t q_wizard_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QWizard*
///
QStyle* q_wizard_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QWizard*
/// @param style QStyle*
///
void q_wizard_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QWizard*
///
bool q_wizard_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QWizard*
///
bool q_wizard_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QWizard*
///
bool q_wizard_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QWizard*
///
/// @return enum Qt__WindowModality
///
int32_t q_wizard_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QWizard*
/// @param windowModality enum Qt__WindowModality
///
void q_wizard_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QWizard*
///
bool q_wizard_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QWizard*
/// @param param1 QWidget*
///
bool q_wizard_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QWizard*
/// @param enabled bool
///
void q_wizard_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QWizard*
/// @param disabled bool
///
void q_wizard_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QWizard*
/// @param windowModified bool
///
void q_wizard_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QWizard*
///
QRect* q_wizard_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QWizard*
///
const QRect* q_wizard_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QWizard*
///
QRect* q_wizard_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QWizard*
///
int32_t q_wizard_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QWizard*
///
int32_t q_wizard_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QWizard*
///
QPoint* q_wizard_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QWizard*
///
QSize* q_wizard_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QWizard*
///
QSize* q_wizard_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QWizard*
///
int32_t q_wizard_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QWizard*
///
int32_t q_wizard_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QWizard*
///
QRect* q_wizard_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QWizard*
///
QRect* q_wizard_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QWizard*
///
QRegion* q_wizard_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QWizard*
///
QSize* q_wizard_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QWizard*
///
QSize* q_wizard_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QWizard*
///
int32_t q_wizard_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QWizard*
///
int32_t q_wizard_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QWizard*
///
int32_t q_wizard_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QWizard*
///
int32_t q_wizard_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QWizard*
/// @param minimumSize QSize*
///
void q_wizard_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QWizard*
/// @param minw int
/// @param minh int
///
void q_wizard_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QWizard*
/// @param maximumSize QSize*
///
void q_wizard_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QWizard*
/// @param maxw int
/// @param maxh int
///
void q_wizard_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QWizard*
/// @param minw int
///
void q_wizard_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QWizard*
/// @param minh int
///
void q_wizard_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QWizard*
/// @param maxw int
///
void q_wizard_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QWizard*
/// @param maxh int
///
void q_wizard_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QWizard*
///
QSize* q_wizard_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QWizard*
/// @param sizeIncrement QSize*
///
void q_wizard_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QWizard*
/// @param w int
/// @param h int
///
void q_wizard_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QWizard*
///
QSize* q_wizard_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QWizard*
/// @param baseSize QSize*
///
void q_wizard_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QWizard*
/// @param basew int
/// @param baseh int
///
void q_wizard_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QWizard*
/// @param fixedSize QSize*
///
void q_wizard_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QWizard*
/// @param w int
/// @param h int
///
void q_wizard_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QWizard*
/// @param w int
///
void q_wizard_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QWizard*
/// @param h int
///
void q_wizard_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QWizard*
/// @param param1 QPointF*
///
QPointF* q_wizard_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QWizard*
/// @param param1 QPoint*
///
QPoint* q_wizard_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QWizard*
/// @param param1 QPointF*
///
QPointF* q_wizard_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QWizard*
/// @param param1 QPoint*
///
QPoint* q_wizard_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QWizard*
/// @param param1 QPointF*
///
QPointF* q_wizard_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QWizard*
/// @param param1 QPoint*
///
QPoint* q_wizard_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QWizard*
/// @param param1 QPointF*
///
QPointF* q_wizard_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QWizard*
/// @param param1 QPoint*
///
QPoint* q_wizard_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QWizard*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_wizard_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QWizard*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_wizard_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QWizard*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_wizard_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QWizard*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_wizard_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QWizard*
///
QWidget* q_wizard_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QWizard*
///
QWidget* q_wizard_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QWizard*
///
QWidget* q_wizard_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QWizard*
///
const QPalette* q_wizard_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QWizard*
/// @param palette QPalette*
///
void q_wizard_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QWizard*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_wizard_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QWizard*
///
/// @return enum QPalette__ColorRole
///
int32_t q_wizard_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QWizard*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_wizard_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QWizard*
///
/// @return enum QPalette__ColorRole
///
int32_t q_wizard_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QWizard*
///
const QFont* q_wizard_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QWizard*
/// @param font QFont*
///
void q_wizard_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QWizard*
///
QFontMetrics* q_wizard_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QWizard*
///
QFontInfo* q_wizard_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QWizard*
///
QCursor* q_wizard_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QWizard*
/// @param cursor QCursor*
///
void q_wizard_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QWizard*
///
void q_wizard_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QWizard*
/// @param enable bool
///
void q_wizard_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QWizard*
///
bool q_wizard_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QWizard*
///
bool q_wizard_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QWizard*
/// @param enable bool
///
void q_wizard_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QWizard*
///
bool q_wizard_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QWizard*
/// @param mask QBitmap*
///
void q_wizard_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QWizard*
/// @param mask QRegion*
///
void q_wizard_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QWizard*
///
QRegion* q_wizard_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QWizard*
///
void q_wizard_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizard*
/// @param target QPaintDevice*
///
void q_wizard_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizard*
/// @param painter QPainter*
///
void q_wizard_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QWizard*
///
QPixmap* q_wizard_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QWizard*
///
QGraphicsEffect* q_wizard_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QWizard*
/// @param effect QGraphicsEffect*
///
void q_wizard_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QWizard*
/// @param type enum Qt__GestureType
///
void q_wizard_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QWizard*
/// @param type enum Qt__GestureType
///
void q_wizard_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QWizard*
/// @param windowTitle const char*
///
void q_wizard_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QWizard*
/// @param styleSheet const char*
///
void q_wizard_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QWizard*
/// @param icon QIcon*
///
void q_wizard_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QWizard*
///
QIcon* q_wizard_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QWizard*
/// @param windowIconText const char*
///
void q_wizard_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QWizard*
/// @param windowRole const char*
///
void q_wizard_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QWizard*
/// @param filePath const char*
///
void q_wizard_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QWizard*
/// @param level double
///
void q_wizard_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QWizard*
///
double q_wizard_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QWizard*
///
bool q_wizard_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QWizard*
/// @param toolTip const char*
///
void q_wizard_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QWizard*
/// @param msec int
///
void q_wizard_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QWizard*
///
int32_t q_wizard_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QWizard*
/// @param statusTip const char*
///
void q_wizard_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QWizard*
/// @param whatsThis const char*
///
void q_wizard_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QWizard*
/// @param name const char*
///
void q_wizard_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QWizard*
/// @param description const char*
///
void q_wizard_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QWizard*
/// @param direction enum Qt__LayoutDirection
///
void q_wizard_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QWizard*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_wizard_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QWizard*
///
void q_wizard_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QWizard*
/// @param locale QLocale*
///
void q_wizard_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QWizard*
///
QLocale* q_wizard_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QWizard*
///
void q_wizard_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QWizard*
///
bool q_wizard_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QWizard*
///
bool q_wizard_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QWizard*
///
void q_wizard_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QWizard*
///
bool q_wizard_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QWizard*
///
void q_wizard_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QWizard*
///
void q_wizard_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QWizard*
/// @param reason enum Qt__FocusReason
///
void q_wizard_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QWizard*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_wizard_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QWizard*
/// @param policy enum Qt__FocusPolicy
///
void q_wizard_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QWizard*
///
bool q_wizard_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_wizard_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QWizard*
/// @param focusProxy QWidget*
///
void q_wizard_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QWizard*
///
QWidget* q_wizard_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QWizard*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_wizard_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QWizard*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_wizard_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QWizard*
///
void q_wizard_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QWizard*
/// @param param1 QCursor*
///
void q_wizard_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QWizard*
///
void q_wizard_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QWizard*
///
void q_wizard_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QWizard*
///
void q_wizard_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QWizard*
/// @param key QKeySequence*
///
int32_t q_wizard_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_wizard_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_wizard_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QWizard*
///
bool q_wizard_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QWizard*
/// @param enable bool
///
void q_wizard_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QWizard*
///
QGraphicsProxyWidget* q_wizard_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWizard*
///
void q_wizard_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWizard*
///
void q_wizard_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWizard*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_wizard_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWizard*
/// @param param1 QRect*
///
void q_wizard_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWizard*
/// @param param1 QRegion*
///
void q_wizard_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWizard*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_wizard_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWizard*
/// @param param1 QRect*
///
void q_wizard_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWizard*
/// @param param1 QRegion*
///
void q_wizard_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QWizard*
/// @param hidden bool
///
void q_wizard_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QWizard*
///
void q_wizard_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QWizard*
///
void q_wizard_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QWizard*
///
void q_wizard_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QWizard*
///
void q_wizard_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QWizard*
///
void q_wizard_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QWizard*
///
void q_wizard_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QWizard*
///
bool q_wizard_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QWizard*
///
void q_wizard_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QWizard*
///
void q_wizard_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QWizard*
/// @param param1 QWidget*
///
void q_wizard_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QWizard*
/// @param x int
/// @param y int
///
void q_wizard_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QWizard*
/// @param param1 QPoint*
///
void q_wizard_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QWizard*
/// @param w int
/// @param h int
///
void q_wizard_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QWizard*
/// @param param1 QSize*
///
void q_wizard_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QWizard*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_wizard_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QWizard*
/// @param geometry QRect*
///
void q_wizard_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWizard*
///
char* q_wizard_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QWizard*
/// @param geometry const char*
///
bool q_wizard_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QWizard*
///
void q_wizard_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QWizard*
///
bool q_wizard_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QWizard*
/// @param param1 QWidget*
///
bool q_wizard_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QWizard*
///
bool q_wizard_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QWizard*
///
bool q_wizard_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QWizard*
///
bool q_wizard_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QWizard*
///
bool q_wizard_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QWizard*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_wizard_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QWizard*
/// @param state flag of enum Qt__WindowState
///
void q_wizard_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QWizard*
/// @param state flag of enum Qt__WindowState
///
void q_wizard_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QWizard*
///
QSizePolicy* q_wizard_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QWizard*
/// @param sizePolicy QSizePolicy*
///
void q_wizard_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QWizard*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_wizard_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QWizard*
///
QRegion* q_wizard_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QWizard*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_wizard_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QWizard*
/// @param margins QMargins*
///
void q_wizard_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QWizard*
///
QMargins* q_wizard_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QWizard*
///
QRect* q_wizard_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QWizard*
///
QLayout* q_wizard_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QWizard*
/// @param layout QLayout*
///
void q_wizard_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QWizard*
///
void q_wizard_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QWizard*
/// @param parent QWidget*
///
void q_wizard_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QWizard*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_wizard_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QWizard*
/// @param dx int
/// @param dy int
///
void q_wizard_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QWizard*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_wizard_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QWizard*
///
QWidget* q_wizard_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QWizard*
///
QWidget* q_wizard_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QWizard*
///
QWidget* q_wizard_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QWizard*
///
bool q_wizard_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QWizard*
/// @param on bool
///
void q_wizard_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWizard*
/// @param action QAction*
///
void q_wizard_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QWizard*
/// @param actions libqt_list of QAction*
///
void q_wizard_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QWizard*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_wizard_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QWizard*
/// @param before QAction*
/// @param action QAction*
///
void q_wizard_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QWizard*
/// @param action QAction*
///
void q_wizard_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QWizard*
///
/// @return libqt_list of QAction*
///
libqt_list q_wizard_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWizard*
/// @param text const char*
///
QAction* q_wizard_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWizard*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_wizard_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWizard*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_wizard_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWizard*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_wizard_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QWizard*
///
QWidget* q_wizard_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QWizard*
/// @param type flag of enum Qt__WindowType
///
void q_wizard_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QWizard*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_wizard_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QWizard*
/// @param param1 enum Qt__WindowType
///
void q_wizard_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QWizard*
/// @param type flag of enum Qt__WindowType
///
void q_wizard_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QWizard*
///
/// @return enum Qt__WindowType
///
int32_t q_wizard_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_wizard_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWizard*
/// @param x int
/// @param y int
///
QWidget* q_wizard_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWizard*
/// @param p QPoint*
///
QWidget* q_wizard_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWizard*
/// @param p QPointF*
///
QWidget* q_wizard_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QWizard*
/// @param param1 enum Qt__WidgetAttribute
///
void q_wizard_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QWizard*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_wizard_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QWizard*
///
void q_wizard_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QWizard*
/// @param child QWidget*
///
bool q_wizard_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QWizard*
///
bool q_wizard_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QWizard*
/// @param enabled bool
///
void q_wizard_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QWizard*
///
QBackingStore* q_wizard_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QWizard*
///
QWindow* q_wizard_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QWizard*
///
QScreen* q_wizard_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QWizard*
/// @param screen QScreen*
///
void q_wizard_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_wizard_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QWizard*
/// @param title const char*
///
void q_wizard_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, const char* title)
///
void q_wizard_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QWizard*
/// @param icon QIcon*
///
void q_wizard_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QIcon* icon)
///
void q_wizard_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QWizard*
/// @param iconText const char*
///
void q_wizard_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, const char* iconText)
///
void q_wizard_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QWizard*
/// @param pos QPoint*
///
void q_wizard_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QPoint* pos)
///
void q_wizard_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QWizard*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_wizard_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QWizard*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_wizard_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizard*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_wizard_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizard*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_wizard_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizard*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_wizard_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizard*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_wizard_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizard*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_wizard_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizard*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_wizard_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QWizard*
/// @param rectangle QRect*
///
QPixmap* q_wizard_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QWizard*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_wizard_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QWizard*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_wizard_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QWizard*
/// @param id int
/// @param enable bool
///
void q_wizard_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QWizard*
/// @param id int
/// @param enable bool
///
void q_wizard_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QWizard*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_wizard_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QWizard*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_wizard_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_wizard_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_wizard_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizard*
///
const char* q_wizard_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWizard*
/// @param name char*
///
void q_wizard_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWizard*
///
bool q_wizard_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWizard*
///
bool q_wizard_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWizard*
///
bool q_wizard_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWizard*
///
bool q_wizard_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWizard*
/// @param b bool
///
bool q_wizard_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWizard*
///
QThread* q_wizard_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWizard*
/// @param thread QThread*
///
bool q_wizard_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWizard*
/// @param interval int
///
int32_t q_wizard_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWizard*
/// @param id int
///
void q_wizard_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWizard*
/// @param id enum Qt__TimerId
///
void q_wizard_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWizard*
///
/// @return libqt_list of QObject*
///
libqt_list q_wizard_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWizard*
/// @param filterObj QObject*
///
void q_wizard_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWizard*
/// @param obj QObject*
///
void q_wizard_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_wizard_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWizard*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_wizard_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_wizard_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_wizard_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWizard*
///
void q_wizard_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWizard*
///
void q_wizard_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWizard*
/// @param name const char*
/// @param value QVariant*
///
bool q_wizard_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWizard*
/// @param name const char*
///
QVariant* q_wizard_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWizard*
///
const char** q_wizard_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWizard*
///
QBindingStorage* q_wizard_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWizard*
///
const QBindingStorage* q_wizard_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWizard*
///
void q_wizard_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self)
///
void q_wizard_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWizard*
///
QObject* q_wizard_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWizard*
/// @param classname const char*
///
bool q_wizard_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWizard*
///
void q_wizard_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWizard*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_wizard_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWizard*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_wizard_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_wizard_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWizard*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_wizard_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWizard*
/// @param param1 QObject*
///
void q_wizard_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QObject* param1)
///
void q_wizard_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QWizard*
///
bool q_wizard_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QWizard*
///
int32_t q_wizard_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QWizard*
///
int32_t q_wizard_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QWizard*
///
int32_t q_wizard_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QWizard*
///
int32_t q_wizard_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QWizard*
///
int32_t q_wizard_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QWizard*
///
int32_t q_wizard_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QWizard*
///
double q_wizard_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QWizard*
///
double q_wizard_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QWizard*
///
int32_t q_wizard_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QWizard*
///
int32_t q_wizard_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_wizard_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_wizard_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
QSize* q_wizard_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
QSize* q_wizard_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback QSize* func()
///
void q_wizard_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func()
///
void q_wizard_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
int32_t q_wizard_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
int32_t q_wizard_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback int32_t func()
///
void q_wizard_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_qbase_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func()
///
void q_wizard_on_accept(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func()
///
void q_wizard_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 QKeyEvent*
///
void q_wizard_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 QKeyEvent*
///
void q_wizard_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QKeyEvent* param1)
///
void q_wizard_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 QCloseEvent*
///
void q_wizard_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 QCloseEvent*
///
void q_wizard_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QCloseEvent* param1)
///
void q_wizard_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 QShowEvent*
///
void q_wizard_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 QShowEvent*
///
void q_wizard_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QShowEvent* param1)
///
void q_wizard_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 QContextMenuEvent*
///
void q_wizard_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 QContextMenuEvent*
///
void q_wizard_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QContextMenuEvent* param1)
///
void q_wizard_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_wizard_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_wizard_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback bool func(QWizard* self, QObject* param1, QEvent* param2)
///
void q_wizard_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
int32_t q_wizard_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
int32_t q_wizard_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback int32_t func()
///
void q_wizard_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 int
///
int32_t q_wizard_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 int
///
int32_t q_wizard_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback int32_t func(QWizard* self, int param1)
///
void q_wizard_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
bool q_wizard_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
bool q_wizard_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback bool func()
///
void q_wizard_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
QPaintEngine* q_wizard_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
QPaintEngine* q_wizard_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback QPaintEngine* func()
///
void q_wizard_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QMouseEvent*
///
void q_wizard_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QMouseEvent*
///
void q_wizard_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QMouseEvent* event)
///
void q_wizard_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QMouseEvent*
///
void q_wizard_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QMouseEvent*
///
void q_wizard_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QMouseEvent* event)
///
void q_wizard_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QMouseEvent*
///
void q_wizard_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QMouseEvent*
///
void q_wizard_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QMouseEvent* event)
///
void q_wizard_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QMouseEvent*
///
void q_wizard_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QMouseEvent*
///
void q_wizard_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QMouseEvent* event)
///
void q_wizard_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QWheelEvent*
///
void q_wizard_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QWheelEvent*
///
void q_wizard_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QWheelEvent* event)
///
void q_wizard_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QKeyEvent*
///
void q_wizard_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QKeyEvent*
///
void q_wizard_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QKeyEvent* event)
///
void q_wizard_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QFocusEvent*
///
void q_wizard_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QFocusEvent*
///
void q_wizard_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QFocusEvent* event)
///
void q_wizard_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QFocusEvent*
///
void q_wizard_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QFocusEvent*
///
void q_wizard_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QFocusEvent* event)
///
void q_wizard_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QEnterEvent*
///
void q_wizard_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QEnterEvent*
///
void q_wizard_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QEnterEvent* event)
///
void q_wizard_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QEvent*
///
void q_wizard_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QEvent*
///
void q_wizard_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QEvent* event)
///
void q_wizard_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QMoveEvent*
///
void q_wizard_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QMoveEvent*
///
void q_wizard_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QMoveEvent* event)
///
void q_wizard_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QTabletEvent*
///
void q_wizard_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QTabletEvent*
///
void q_wizard_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QTabletEvent* event)
///
void q_wizard_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QActionEvent*
///
void q_wizard_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QActionEvent*
///
void q_wizard_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QActionEvent* event)
///
void q_wizard_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QDragEnterEvent*
///
void q_wizard_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QDragEnterEvent*
///
void q_wizard_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QDragEnterEvent* event)
///
void q_wizard_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QDragMoveEvent*
///
void q_wizard_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QDragMoveEvent*
///
void q_wizard_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QDragMoveEvent* event)
///
void q_wizard_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QDragLeaveEvent*
///
void q_wizard_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QDragLeaveEvent*
///
void q_wizard_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QDragLeaveEvent* event)
///
void q_wizard_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QDropEvent*
///
void q_wizard_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QDropEvent*
///
void q_wizard_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QDropEvent* event)
///
void q_wizard_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QHideEvent*
///
void q_wizard_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QHideEvent*
///
void q_wizard_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QHideEvent* event)
///
void q_wizard_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_wizard_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_wizard_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback bool func(QWizard* self, const char* eventType, void* message, intptr_t* result)
///
void q_wizard_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 QEvent*
///
void q_wizard_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 QEvent*
///
void q_wizard_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QEvent* param1)
///
void q_wizard_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_wizard_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_wizard_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback int32_t func(QWizard* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_wizard_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param painter QPainter*
///
void q_wizard_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param painter QPainter*
///
void q_wizard_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QPainter* painter)
///
void q_wizard_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param offset QPoint*
///
QPaintDevice* q_wizard_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param offset QPoint*
///
QPaintDevice* q_wizard_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback QPaintDevice* func(QWizard* self, QPoint* offset)
///
void q_wizard_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
QPainter* q_wizard_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
QPainter* q_wizard_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback QPainter* func()
///
void q_wizard_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 QInputMethodEvent*
///
void q_wizard_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 QInputMethodEvent*
///
void q_wizard_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QInputMethodEvent* param1)
///
void q_wizard_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_wizard_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_wizard_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback QVariant* func(QWizard* self, enum Qt__InputMethodQuery param1)
///
void q_wizard_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param next bool
///
bool q_wizard_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param next bool
///
bool q_wizard_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback bool func(QWizard* self, bool next)
///
void q_wizard_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QTimerEvent*
///
void q_wizard_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QTimerEvent*
///
void q_wizard_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QTimerEvent* event)
///
void q_wizard_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QChildEvent*
///
void q_wizard_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QChildEvent*
///
void q_wizard_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QChildEvent* event)
///
void q_wizard_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param event QEvent*
///
void q_wizard_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param event QEvent*
///
void q_wizard_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QEvent* event)
///
void q_wizard_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param signal QMetaMethod*
///
void q_wizard_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param signal QMetaMethod*
///
void q_wizard_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QMetaMethod* signal)
///
void q_wizard_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param signal QMetaMethod*
///
void q_wizard_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param signal QMetaMethod*
///
void q_wizard_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QMetaMethod* signal)
///
void q_wizard_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param param1 QWidget*
///
void q_wizard_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param param1 QWidget*
///
void q_wizard_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, QWidget* param1)
///
void q_wizard_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func()
///
void q_wizard_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func()
///
void q_wizard_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
void q_wizard_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback void func()
///
void q_wizard_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
bool q_wizard_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
bool q_wizard_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback bool func()
///
void q_wizard_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
bool q_wizard_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
bool q_wizard_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback bool func()
///
void q_wizard_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
QObject* q_wizard_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
QObject* q_wizard_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback QObject* func()
///
void q_wizard_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
///
int32_t q_wizard_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
///
int32_t q_wizard_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback int32_t func()
///
void q_wizard_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param signal const char*
///
int32_t q_wizard_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param signal const char*
///
int32_t q_wizard_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback int32_t func(QWizard* self, const char* signal)
///
void q_wizard_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param signal QMetaMethod*
///
bool q_wizard_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param signal QMetaMethod*
///
bool q_wizard_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback bool func(QWizard* self, QMetaMethod* signal)
///
void q_wizard_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizard*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_wizard_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizard*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_wizard_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizard*
/// @param callback double func(QWizard* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_wizard_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWizard*
/// @param callback void func(QWizard* self, const char* objectName)
///
void q_wizard_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#dtor.QWizard)
///
/// Delete this object from C++ memory.
///
/// @param self QWizard*
///
void q_wizard_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html)

/// q_wizardpage_new constructs a new QWizardPage object.
///
/// @param parent QWidget*
///
QWizardPage* q_wizardpage_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html)

/// q_wizardpage_new2 constructs a new QWizardPage object.
///
QWizardPage* q_wizardpage_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWizardPage*
///
const QMetaObject* q_wizardpage_meta_object(void* self);

/// @param self QWizardPage*
/// @param param1 const char*
///
void* q_wizardpage_metacast(void* self, const char* param1);

/// @param self QWizardPage*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_wizardpage_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback int32_t func(QWizardPage* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_wizardpage_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWizardPage*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_wizardpage_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_wizardpage_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#setTitle)
///
/// @param self QWizardPage*
/// @param title const char*
///
void q_wizardpage_set_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#setSubTitle)
///
/// @param self QWizardPage*
/// @param subTitle const char*
///
void q_wizardpage_set_sub_title(void* self, const char* subTitle);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#subTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_sub_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#setPixmap)
///
/// @param self QWizardPage*
/// @param which enum QWizard__WizardPixmap
/// @param pixmap QPixmap*
///
void q_wizardpage_set_pixmap(void* self, int32_t which, void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#pixmap)
///
/// @param self QWizardPage*
/// @param which enum QWizard__WizardPixmap
///
QPixmap* q_wizardpage_pixmap(void* self, int32_t which);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#setFinalPage)
///
/// @param self QWizardPage*
/// @param finalPage bool
///
void q_wizardpage_set_final_page(void* self, bool finalPage);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#isFinalPage)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_final_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#setCommitPage)
///
/// @param self QWizardPage*
/// @param commitPage bool
///
void q_wizardpage_set_commit_page(void* self, bool commitPage);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#isCommitPage)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_commit_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#setButtonText)
///
/// @param self QWizardPage*
/// @param which enum QWizard__WizardButton
/// @param text const char*
///
void q_wizardpage_set_button_text(void* self, int32_t which, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#buttonText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
/// @param which enum QWizard__WizardButton
///
const char* q_wizardpage_button_text(void* self, int32_t which);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#initializePage)
///
/// @param self QWizardPage*
///
void q_wizardpage_initialize_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#initializePage)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback void func()
///
void q_wizardpage_on_initialize_page(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#initializePage)
///
/// Base class method implementation
///
/// @param self QWizardPage*
///
void q_wizardpage_qbase_initialize_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#cleanupPage)
///
/// @param self QWizardPage*
///
void q_wizardpage_cleanup_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#cleanupPage)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback void func()
///
void q_wizardpage_on_cleanup_page(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#cleanupPage)
///
/// Base class method implementation
///
/// @param self QWizardPage*
///
void q_wizardpage_qbase_cleanup_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#validatePage)
///
/// @param self QWizardPage*
///
bool q_wizardpage_validate_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#validatePage)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback bool func()
///
void q_wizardpage_on_validate_page(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#validatePage)
///
/// Base class method implementation
///
/// @param self QWizardPage*
///
bool q_wizardpage_qbase_validate_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#isComplete)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#isComplete)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback bool func()
///
void q_wizardpage_on_is_complete(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#isComplete)
///
/// Base class method implementation
///
/// @param self QWizardPage*
///
bool q_wizardpage_qbase_is_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#nextId)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_next_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#nextId)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback int32_t func()
///
void q_wizardpage_on_next_id(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#nextId)
///
/// Base class method implementation
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_qbase_next_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#completeChanged)
///
/// @param self QWizardPage*
///
void q_wizardpage_complete_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#completeChanged)
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self)
///
void q_wizardpage_on_complete_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#setField)
///
/// @param self QWizardPage*
/// @param name const char*
/// @param value QVariant*
///
void q_wizardpage_set_field(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#setField)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, const char* name, QVariant* value)
///
void q_wizardpage_on_set_field(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#setField)
///
/// Base class method implementation
///
/// @param self QWizardPage*
/// @param name const char*
/// @param value QVariant*
///
void q_wizardpage_qbase_set_field(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#field)
///
/// @param self QWizardPage*
/// @param name const char*
///
QVariant* q_wizardpage_field(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#field)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback QVariant* func(QWizardPage* self, const char* name)
///
void q_wizardpage_on_field(void* self, QVariant* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#field)
///
/// Base class method implementation
///
/// @param self QWizardPage*
/// @param name const char*
///
QVariant* q_wizardpage_qbase_field(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// @param self QWizardPage*
/// @param name const char*
/// @param widget QWidget*
///
void q_wizardpage_register_field(void* self, const char* name, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, const char* name, QWidget* widget)
///
void q_wizardpage_on_register_field(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// Base class method implementation
///
/// @param self QWizardPage*
/// @param name const char*
/// @param widget QWidget*
///
void q_wizardpage_qbase_register_field(void* self, const char* name, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#wizard)
///
/// @param self QWizardPage*
///
QWizard* q_wizardpage_wizard(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#wizard)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback QWizard* func()
///
void q_wizardpage_on_wizard(void* self, QWizard* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#wizard)
///
/// Base class method implementation
///
/// @param self QWizardPage*
///
QWizard* q_wizardpage_qbase_wizard(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_wizardpage_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_wizardpage_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// @param self QWizardPage*
/// @param name const char*
/// @param widget QWidget*
/// @param property const char*
///
void q_wizardpage_register_field3(void* self, const char* name, void* widget, const char* property);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, const char* name, QWidget* widget, const char* property)
///
void q_wizardpage_on_register_field3(void* self, void (*callback)(void*, const char*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// Base class method implementation
///
/// @param self QWizardPage*
/// @param name const char*
/// @param widget QWidget*
/// @param property const char*
///
void q_wizardpage_qbase_register_field3(void* self, const char* name, void* widget, const char* property);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// @param self QWizardPage*
/// @param name const char*
/// @param widget QWidget*
/// @param property const char*
/// @param changedSignal const char*
///
void q_wizardpage_register_field4(void* self, const char* name, void* widget, const char* property, const char* changedSignal);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// Allows for overriding the related default method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, const char* name, QWidget* widget, const char* property, const char* changedSignal)
///
void q_wizardpage_on_register_field4(void* self, void (*callback)(void*, const char*, void*, const char*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#registerField)
///
/// Base class method implementation
///
/// @param self QWizardPage*
/// @param name const char*
/// @param widget QWidget*
/// @param property const char*
/// @param changedSignal const char*
///
void q_wizardpage_qbase_register_field4(void* self, const char* name, void* widget, const char* property, const char* changedSignal);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QWizardPage*
///
uintptr_t q_wizardpage_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QWizardPage*
///
void q_wizardpage_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QWizardPage*
///
uintptr_t q_wizardpage_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QWizardPage*
///
uintptr_t q_wizardpage_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QWizardPage*
///
QStyle* q_wizardpage_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QWizardPage*
/// @param style QStyle*
///
void q_wizardpage_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QWizardPage*
///
/// @return enum Qt__WindowModality
///
int32_t q_wizardpage_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QWizardPage*
/// @param windowModality enum Qt__WindowModality
///
void q_wizardpage_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QWizardPage*
/// @param param1 QWidget*
///
bool q_wizardpage_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QWizardPage*
/// @param enabled bool
///
void q_wizardpage_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QWizardPage*
/// @param disabled bool
///
void q_wizardpage_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QWizardPage*
/// @param windowModified bool
///
void q_wizardpage_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QWizardPage*
///
QRect* q_wizardpage_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QWizardPage*
///
const QRect* q_wizardpage_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QWizardPage*
///
QRect* q_wizardpage_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QWizardPage*
///
QPoint* q_wizardpage_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QWizardPage*
///
QSize* q_wizardpage_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QWizardPage*
///
QSize* q_wizardpage_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QWizardPage*
///
QRect* q_wizardpage_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QWizardPage*
///
QRect* q_wizardpage_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QWizardPage*
///
QRegion* q_wizardpage_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QWizardPage*
///
QSize* q_wizardpage_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QWizardPage*
///
QSize* q_wizardpage_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QWizardPage*
/// @param minimumSize QSize*
///
void q_wizardpage_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QWizardPage*
/// @param minw int
/// @param minh int
///
void q_wizardpage_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QWizardPage*
/// @param maximumSize QSize*
///
void q_wizardpage_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QWizardPage*
/// @param maxw int
/// @param maxh int
///
void q_wizardpage_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QWizardPage*
/// @param minw int
///
void q_wizardpage_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QWizardPage*
/// @param minh int
///
void q_wizardpage_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QWizardPage*
/// @param maxw int
///
void q_wizardpage_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QWizardPage*
/// @param maxh int
///
void q_wizardpage_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QWizardPage*
///
QSize* q_wizardpage_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QWizardPage*
/// @param sizeIncrement QSize*
///
void q_wizardpage_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QWizardPage*
/// @param w int
/// @param h int
///
void q_wizardpage_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QWizardPage*
///
QSize* q_wizardpage_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QWizardPage*
/// @param baseSize QSize*
///
void q_wizardpage_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QWizardPage*
/// @param basew int
/// @param baseh int
///
void q_wizardpage_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QWizardPage*
/// @param fixedSize QSize*
///
void q_wizardpage_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QWizardPage*
/// @param w int
/// @param h int
///
void q_wizardpage_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QWizardPage*
/// @param w int
///
void q_wizardpage_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QWizardPage*
/// @param h int
///
void q_wizardpage_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QWizardPage*
/// @param param1 QPointF*
///
QPointF* q_wizardpage_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QWizardPage*
/// @param param1 QPoint*
///
QPoint* q_wizardpage_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QWizardPage*
/// @param param1 QPointF*
///
QPointF* q_wizardpage_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QWizardPage*
/// @param param1 QPoint*
///
QPoint* q_wizardpage_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QWizardPage*
/// @param param1 QPointF*
///
QPointF* q_wizardpage_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QWizardPage*
/// @param param1 QPoint*
///
QPoint* q_wizardpage_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QWizardPage*
/// @param param1 QPointF*
///
QPointF* q_wizardpage_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QWizardPage*
/// @param param1 QPoint*
///
QPoint* q_wizardpage_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QWizardPage*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_wizardpage_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QWizardPage*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_wizardpage_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QWizardPage*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_wizardpage_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QWizardPage*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_wizardpage_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QWizardPage*
///
QWidget* q_wizardpage_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QWizardPage*
///
QWidget* q_wizardpage_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QWizardPage*
///
QWidget* q_wizardpage_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QWizardPage*
///
const QPalette* q_wizardpage_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QWizardPage*
/// @param palette QPalette*
///
void q_wizardpage_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QWizardPage*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_wizardpage_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QWizardPage*
///
/// @return enum QPalette__ColorRole
///
int32_t q_wizardpage_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QWizardPage*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_wizardpage_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QWizardPage*
///
/// @return enum QPalette__ColorRole
///
int32_t q_wizardpage_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QWizardPage*
///
const QFont* q_wizardpage_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QWizardPage*
/// @param font QFont*
///
void q_wizardpage_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QWizardPage*
///
QFontMetrics* q_wizardpage_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QWizardPage*
///
QFontInfo* q_wizardpage_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QWizardPage*
///
QCursor* q_wizardpage_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QWizardPage*
/// @param cursor QCursor*
///
void q_wizardpage_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QWizardPage*
///
void q_wizardpage_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QWizardPage*
/// @param enable bool
///
void q_wizardpage_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QWizardPage*
///
bool q_wizardpage_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QWizardPage*
///
bool q_wizardpage_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QWizardPage*
/// @param enable bool
///
void q_wizardpage_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QWizardPage*
///
bool q_wizardpage_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QWizardPage*
/// @param mask QBitmap*
///
void q_wizardpage_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QWizardPage*
/// @param mask QRegion*
///
void q_wizardpage_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QWizardPage*
///
QRegion* q_wizardpage_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QWizardPage*
///
void q_wizardpage_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizardPage*
/// @param target QPaintDevice*
///
void q_wizardpage_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizardPage*
/// @param painter QPainter*
///
void q_wizardpage_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QWizardPage*
///
QPixmap* q_wizardpage_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QWizardPage*
///
QGraphicsEffect* q_wizardpage_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QWizardPage*
/// @param effect QGraphicsEffect*
///
void q_wizardpage_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QWizardPage*
/// @param type enum Qt__GestureType
///
void q_wizardpage_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QWizardPage*
/// @param type enum Qt__GestureType
///
void q_wizardpage_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QWizardPage*
/// @param windowTitle const char*
///
void q_wizardpage_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QWizardPage*
/// @param styleSheet const char*
///
void q_wizardpage_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QWizardPage*
/// @param icon QIcon*
///
void q_wizardpage_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QWizardPage*
///
QIcon* q_wizardpage_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QWizardPage*
/// @param windowIconText const char*
///
void q_wizardpage_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QWizardPage*
/// @param windowRole const char*
///
void q_wizardpage_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QWizardPage*
/// @param filePath const char*
///
void q_wizardpage_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QWizardPage*
/// @param level double
///
void q_wizardpage_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QWizardPage*
///
double q_wizardpage_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QWizardPage*
/// @param toolTip const char*
///
void q_wizardpage_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QWizardPage*
/// @param msec int
///
void q_wizardpage_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QWizardPage*
/// @param statusTip const char*
///
void q_wizardpage_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QWizardPage*
/// @param whatsThis const char*
///
void q_wizardpage_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QWizardPage*
/// @param name const char*
///
void q_wizardpage_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QWizardPage*
/// @param description const char*
///
void q_wizardpage_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QWizardPage*
/// @param direction enum Qt__LayoutDirection
///
void q_wizardpage_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QWizardPage*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_wizardpage_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QWizardPage*
///
void q_wizardpage_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QWizardPage*
/// @param locale QLocale*
///
void q_wizardpage_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QWizardPage*
///
QLocale* q_wizardpage_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QWizardPage*
///
void q_wizardpage_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QWizardPage*
///
void q_wizardpage_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QWizardPage*
///
void q_wizardpage_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QWizardPage*
///
void q_wizardpage_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QWizardPage*
/// @param reason enum Qt__FocusReason
///
void q_wizardpage_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QWizardPage*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_wizardpage_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QWizardPage*
/// @param policy enum Qt__FocusPolicy
///
void q_wizardpage_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QWizardPage*
///
bool q_wizardpage_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_wizardpage_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QWizardPage*
/// @param focusProxy QWidget*
///
void q_wizardpage_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QWizardPage*
///
QWidget* q_wizardpage_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QWizardPage*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_wizardpage_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QWizardPage*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_wizardpage_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QWizardPage*
///
void q_wizardpage_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QWizardPage*
/// @param param1 QCursor*
///
void q_wizardpage_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QWizardPage*
///
void q_wizardpage_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QWizardPage*
///
void q_wizardpage_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QWizardPage*
///
void q_wizardpage_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QWizardPage*
/// @param key QKeySequence*
///
int32_t q_wizardpage_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QWizardPage*
/// @param id int
///
void q_wizardpage_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QWizardPage*
/// @param id int
///
void q_wizardpage_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QWizardPage*
/// @param id int
///
void q_wizardpage_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_wizardpage_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_wizardpage_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QWizardPage*
///
bool q_wizardpage_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QWizardPage*
/// @param enable bool
///
void q_wizardpage_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QWizardPage*
///
QGraphicsProxyWidget* q_wizardpage_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWizardPage*
///
void q_wizardpage_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWizardPage*
///
void q_wizardpage_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWizardPage*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_wizardpage_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWizardPage*
/// @param param1 QRect*
///
void q_wizardpage_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QWizardPage*
/// @param param1 QRegion*
///
void q_wizardpage_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWizardPage*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_wizardpage_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWizardPage*
/// @param param1 QRect*
///
void q_wizardpage_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QWizardPage*
/// @param param1 QRegion*
///
void q_wizardpage_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QWizardPage*
/// @param hidden bool
///
void q_wizardpage_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QWizardPage*
///
void q_wizardpage_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QWizardPage*
///
void q_wizardpage_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QWizardPage*
///
void q_wizardpage_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QWizardPage*
///
void q_wizardpage_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QWizardPage*
///
void q_wizardpage_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QWizardPage*
///
void q_wizardpage_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QWizardPage*
///
bool q_wizardpage_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QWizardPage*
///
void q_wizardpage_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QWizardPage*
///
void q_wizardpage_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QWizardPage*
/// @param param1 QWidget*
///
void q_wizardpage_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QWizardPage*
/// @param x int
/// @param y int
///
void q_wizardpage_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QWizardPage*
/// @param param1 QPoint*
///
void q_wizardpage_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QWizardPage*
/// @param w int
/// @param h int
///
void q_wizardpage_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QWizardPage*
/// @param param1 QSize*
///
void q_wizardpage_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QWizardPage*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_wizardpage_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QWizardPage*
/// @param geometry QRect*
///
void q_wizardpage_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWizardPage*
///
char* q_wizardpage_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QWizardPage*
/// @param geometry const char*
///
bool q_wizardpage_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QWizardPage*
///
void q_wizardpage_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QWizardPage*
/// @param param1 QWidget*
///
bool q_wizardpage_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QWizardPage*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_wizardpage_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QWizardPage*
/// @param state flag of enum Qt__WindowState
///
void q_wizardpage_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QWizardPage*
/// @param state flag of enum Qt__WindowState
///
void q_wizardpage_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QWizardPage*
///
QSizePolicy* q_wizardpage_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QWizardPage*
/// @param sizePolicy QSizePolicy*
///
void q_wizardpage_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QWizardPage*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_wizardpage_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QWizardPage*
///
QRegion* q_wizardpage_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QWizardPage*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_wizardpage_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QWizardPage*
/// @param margins QMargins*
///
void q_wizardpage_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QWizardPage*
///
QMargins* q_wizardpage_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QWizardPage*
///
QRect* q_wizardpage_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QWizardPage*
///
QLayout* q_wizardpage_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QWizardPage*
/// @param layout QLayout*
///
void q_wizardpage_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QWizardPage*
///
void q_wizardpage_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QWizardPage*
/// @param parent QWidget*
///
void q_wizardpage_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QWizardPage*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_wizardpage_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QWizardPage*
/// @param dx int
/// @param dy int
///
void q_wizardpage_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QWizardPage*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_wizardpage_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QWizardPage*
///
QWidget* q_wizardpage_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QWizardPage*
///
QWidget* q_wizardpage_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QWizardPage*
///
QWidget* q_wizardpage_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QWizardPage*
///
bool q_wizardpage_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QWizardPage*
/// @param on bool
///
void q_wizardpage_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWizardPage*
/// @param action QAction*
///
void q_wizardpage_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QWizardPage*
/// @param actions libqt_list of QAction*
///
void q_wizardpage_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QWizardPage*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_wizardpage_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QWizardPage*
/// @param before QAction*
/// @param action QAction*
///
void q_wizardpage_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QWizardPage*
/// @param action QAction*
///
void q_wizardpage_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QWizardPage*
///
/// @return libqt_list of QAction*
///
libqt_list q_wizardpage_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWizardPage*
/// @param text const char*
///
QAction* q_wizardpage_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWizardPage*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_wizardpage_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWizardPage*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_wizardpage_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QWizardPage*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_wizardpage_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QWizardPage*
///
QWidget* q_wizardpage_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QWizardPage*
/// @param type flag of enum Qt__WindowType
///
void q_wizardpage_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QWizardPage*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_wizardpage_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QWizardPage*
/// @param param1 enum Qt__WindowType
///
void q_wizardpage_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QWizardPage*
/// @param type flag of enum Qt__WindowType
///
void q_wizardpage_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QWizardPage*
///
/// @return enum Qt__WindowType
///
int32_t q_wizardpage_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_wizardpage_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWizardPage*
/// @param x int
/// @param y int
///
QWidget* q_wizardpage_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWizardPage*
/// @param p QPoint*
///
QWidget* q_wizardpage_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QWizardPage*
/// @param p QPointF*
///
QWidget* q_wizardpage_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QWizardPage*
/// @param param1 enum Qt__WidgetAttribute
///
void q_wizardpage_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QWizardPage*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_wizardpage_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QWizardPage*
///
void q_wizardpage_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QWizardPage*
/// @param child QWidget*
///
bool q_wizardpage_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QWizardPage*
///
bool q_wizardpage_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QWizardPage*
/// @param enabled bool
///
void q_wizardpage_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QWizardPage*
///
QBackingStore* q_wizardpage_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QWizardPage*
///
QWindow* q_wizardpage_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QWizardPage*
///
QScreen* q_wizardpage_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QWizardPage*
/// @param screen QScreen*
///
void q_wizardpage_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_wizardpage_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QWizardPage*
/// @param title const char*
///
void q_wizardpage_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, const char* title)
///
void q_wizardpage_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QWizardPage*
/// @param icon QIcon*
///
void q_wizardpage_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QIcon* icon)
///
void q_wizardpage_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QWizardPage*
/// @param iconText const char*
///
void q_wizardpage_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, const char* iconText)
///
void q_wizardpage_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QWizardPage*
/// @param pos QPoint*
///
void q_wizardpage_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QPoint* pos)
///
void q_wizardpage_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QWizardPage*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_wizardpage_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QWizardPage*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_wizardpage_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizardPage*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_wizardpage_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizardPage*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_wizardpage_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizardPage*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_wizardpage_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizardPage*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_wizardpage_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizardPage*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_wizardpage_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QWizardPage*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_wizardpage_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QWizardPage*
/// @param rectangle QRect*
///
QPixmap* q_wizardpage_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QWizardPage*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_wizardpage_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QWizardPage*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_wizardpage_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QWizardPage*
/// @param id int
/// @param enable bool
///
void q_wizardpage_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QWizardPage*
/// @param id int
/// @param enable bool
///
void q_wizardpage_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QWizardPage*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_wizardpage_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QWizardPage*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_wizardpage_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_wizardpage_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_wizardpage_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWizardPage*
///
const char* q_wizardpage_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWizardPage*
/// @param name char*
///
void q_wizardpage_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWizardPage*
///
bool q_wizardpage_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWizardPage*
///
bool q_wizardpage_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWizardPage*
/// @param b bool
///
bool q_wizardpage_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWizardPage*
///
QThread* q_wizardpage_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWizardPage*
/// @param thread QThread*
///
bool q_wizardpage_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWizardPage*
/// @param interval int
///
int32_t q_wizardpage_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWizardPage*
/// @param id int
///
void q_wizardpage_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWizardPage*
/// @param id enum Qt__TimerId
///
void q_wizardpage_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWizardPage*
///
/// @return libqt_list of QObject*
///
libqt_list q_wizardpage_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWizardPage*
/// @param filterObj QObject*
///
void q_wizardpage_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWizardPage*
/// @param obj QObject*
///
void q_wizardpage_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_wizardpage_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWizardPage*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_wizardpage_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_wizardpage_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_wizardpage_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWizardPage*
///
void q_wizardpage_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWizardPage*
///
void q_wizardpage_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWizardPage*
/// @param name const char*
/// @param value QVariant*
///
bool q_wizardpage_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWizardPage*
/// @param name const char*
///
QVariant* q_wizardpage_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWizardPage*
///
const char** q_wizardpage_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWizardPage*
///
QBindingStorage* q_wizardpage_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWizardPage*
///
const QBindingStorage* q_wizardpage_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWizardPage*
///
void q_wizardpage_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self)
///
void q_wizardpage_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWizardPage*
///
QObject* q_wizardpage_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWizardPage*
/// @param classname const char*
///
bool q_wizardpage_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWizardPage*
///
void q_wizardpage_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWizardPage*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_wizardpage_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWizardPage*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_wizardpage_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_wizardpage_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWizardPage*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_wizardpage_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWizardPage*
/// @param param1 QObject*
///
void q_wizardpage_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QObject* param1)
///
void q_wizardpage_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QWizardPage*
///
bool q_wizardpage_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QWizardPage*
///
double q_wizardpage_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QWizardPage*
///
double q_wizardpage_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_wizardpage_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_wizardpage_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback int32_t func()
///
void q_wizardpage_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param visible bool
///
void q_wizardpage_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param visible bool
///
void q_wizardpage_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, bool visible)
///
void q_wizardpage_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
QSize* q_wizardpage_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
QSize* q_wizardpage_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback QSize* func()
///
void q_wizardpage_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
QSize* q_wizardpage_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
QSize* q_wizardpage_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback QSize* func()
///
void q_wizardpage_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param param1 int
///
int32_t q_wizardpage_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param param1 int
///
int32_t q_wizardpage_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback int32_t func(QWizardPage* self, int param1)
///
void q_wizardpage_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
bool q_wizardpage_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
bool q_wizardpage_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback bool func()
///
void q_wizardpage_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
QPaintEngine* q_wizardpage_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
QPaintEngine* q_wizardpage_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback QPaintEngine* func()
///
void q_wizardpage_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QEvent*
///
bool q_wizardpage_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QEvent*
///
bool q_wizardpage_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback bool func(QWizardPage* self, QEvent* event)
///
void q_wizardpage_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QMouseEvent*
///
void q_wizardpage_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QMouseEvent*
///
void q_wizardpage_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QMouseEvent* event)
///
void q_wizardpage_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QMouseEvent*
///
void q_wizardpage_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QMouseEvent*
///
void q_wizardpage_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QMouseEvent* event)
///
void q_wizardpage_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QMouseEvent*
///
void q_wizardpage_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QMouseEvent*
///
void q_wizardpage_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QMouseEvent* event)
///
void q_wizardpage_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QMouseEvent*
///
void q_wizardpage_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QMouseEvent*
///
void q_wizardpage_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QMouseEvent* event)
///
void q_wizardpage_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QWheelEvent*
///
void q_wizardpage_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QWheelEvent*
///
void q_wizardpage_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QWheelEvent* event)
///
void q_wizardpage_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QKeyEvent*
///
void q_wizardpage_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QKeyEvent*
///
void q_wizardpage_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QKeyEvent* event)
///
void q_wizardpage_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QKeyEvent*
///
void q_wizardpage_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QKeyEvent*
///
void q_wizardpage_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QKeyEvent* event)
///
void q_wizardpage_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QFocusEvent*
///
void q_wizardpage_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QFocusEvent*
///
void q_wizardpage_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QFocusEvent* event)
///
void q_wizardpage_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QFocusEvent*
///
void q_wizardpage_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QFocusEvent*
///
void q_wizardpage_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QFocusEvent* event)
///
void q_wizardpage_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QEnterEvent*
///
void q_wizardpage_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QEnterEvent*
///
void q_wizardpage_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QEnterEvent* event)
///
void q_wizardpage_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QEvent*
///
void q_wizardpage_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QEvent*
///
void q_wizardpage_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QEvent* event)
///
void q_wizardpage_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QPaintEvent*
///
void q_wizardpage_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QPaintEvent*
///
void q_wizardpage_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QPaintEvent* event)
///
void q_wizardpage_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QMoveEvent*
///
void q_wizardpage_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QMoveEvent*
///
void q_wizardpage_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QMoveEvent* event)
///
void q_wizardpage_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QResizeEvent*
///
void q_wizardpage_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QResizeEvent*
///
void q_wizardpage_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QResizeEvent* event)
///
void q_wizardpage_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QCloseEvent*
///
void q_wizardpage_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QCloseEvent*
///
void q_wizardpage_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QCloseEvent* event)
///
void q_wizardpage_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QContextMenuEvent*
///
void q_wizardpage_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QContextMenuEvent*
///
void q_wizardpage_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QContextMenuEvent* event)
///
void q_wizardpage_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QTabletEvent*
///
void q_wizardpage_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QTabletEvent*
///
void q_wizardpage_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QTabletEvent* event)
///
void q_wizardpage_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QActionEvent*
///
void q_wizardpage_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QActionEvent*
///
void q_wizardpage_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QActionEvent* event)
///
void q_wizardpage_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QDragEnterEvent*
///
void q_wizardpage_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QDragEnterEvent*
///
void q_wizardpage_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QDragEnterEvent* event)
///
void q_wizardpage_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QDragMoveEvent*
///
void q_wizardpage_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QDragMoveEvent*
///
void q_wizardpage_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QDragMoveEvent* event)
///
void q_wizardpage_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QDragLeaveEvent*
///
void q_wizardpage_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QDragLeaveEvent*
///
void q_wizardpage_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QDragLeaveEvent* event)
///
void q_wizardpage_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QDropEvent*
///
void q_wizardpage_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QDropEvent*
///
void q_wizardpage_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QDropEvent* event)
///
void q_wizardpage_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QShowEvent*
///
void q_wizardpage_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QShowEvent*
///
void q_wizardpage_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QShowEvent* event)
///
void q_wizardpage_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QHideEvent*
///
void q_wizardpage_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QHideEvent*
///
void q_wizardpage_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QHideEvent* event)
///
void q_wizardpage_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_wizardpage_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_wizardpage_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback bool func(QWizardPage* self, const char* eventType, void* message, intptr_t* result)
///
void q_wizardpage_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param param1 QEvent*
///
void q_wizardpage_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param param1 QEvent*
///
void q_wizardpage_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QEvent* param1)
///
void q_wizardpage_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_wizardpage_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_wizardpage_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback int32_t func(QWizardPage* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_wizardpage_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param painter QPainter*
///
void q_wizardpage_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param painter QPainter*
///
void q_wizardpage_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QPainter* painter)
///
void q_wizardpage_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param offset QPoint*
///
QPaintDevice* q_wizardpage_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param offset QPoint*
///
QPaintDevice* q_wizardpage_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback QPaintDevice* func(QWizardPage* self, QPoint* offset)
///
void q_wizardpage_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
QPainter* q_wizardpage_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
QPainter* q_wizardpage_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback QPainter* func()
///
void q_wizardpage_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param param1 QInputMethodEvent*
///
void q_wizardpage_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param param1 QInputMethodEvent*
///
void q_wizardpage_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QInputMethodEvent* param1)
///
void q_wizardpage_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_wizardpage_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_wizardpage_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback QVariant* func(QWizardPage* self, enum Qt__InputMethodQuery param1)
///
void q_wizardpage_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param next bool
///
bool q_wizardpage_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param next bool
///
bool q_wizardpage_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback bool func(QWizardPage* self, bool next)
///
void q_wizardpage_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_wizardpage_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_wizardpage_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback bool func(QWizardPage* self, QObject* watched, QEvent* event)
///
void q_wizardpage_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QTimerEvent*
///
void q_wizardpage_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QTimerEvent*
///
void q_wizardpage_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QTimerEvent* event)
///
void q_wizardpage_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QChildEvent*
///
void q_wizardpage_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QChildEvent*
///
void q_wizardpage_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QChildEvent* event)
///
void q_wizardpage_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param event QEvent*
///
void q_wizardpage_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param event QEvent*
///
void q_wizardpage_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QEvent* event)
///
void q_wizardpage_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param signal QMetaMethod*
///
void q_wizardpage_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param signal QMetaMethod*
///
void q_wizardpage_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QMetaMethod* signal)
///
void q_wizardpage_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param signal QMetaMethod*
///
void q_wizardpage_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param signal QMetaMethod*
///
void q_wizardpage_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, QMetaMethod* signal)
///
void q_wizardpage_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
void q_wizardpage_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
void q_wizardpage_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func()
///
void q_wizardpage_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
void q_wizardpage_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
void q_wizardpage_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func()
///
void q_wizardpage_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
void q_wizardpage_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
void q_wizardpage_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback void func()
///
void q_wizardpage_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
bool q_wizardpage_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
bool q_wizardpage_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback bool func()
///
void q_wizardpage_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
bool q_wizardpage_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
bool q_wizardpage_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback bool func()
///
void q_wizardpage_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
QObject* q_wizardpage_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
QObject* q_wizardpage_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback QObject* func()
///
void q_wizardpage_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
///
int32_t q_wizardpage_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback int32_t func()
///
void q_wizardpage_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param signal const char*
///
int32_t q_wizardpage_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param signal const char*
///
int32_t q_wizardpage_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback int32_t func(QWizardPage* self, const char* signal)
///
void q_wizardpage_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param signal QMetaMethod*
///
bool q_wizardpage_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param signal QMetaMethod*
///
bool q_wizardpage_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback bool func(QWizardPage* self, QMetaMethod* signal)
///
void q_wizardpage_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWizardPage*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_wizardpage_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWizardPage*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_wizardpage_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWizardPage*
/// @param callback double func(QWizardPage* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_wizardpage_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWizardPage*
/// @param callback void func(QWizardPage* self, const char* objectName)
///
void q_wizardpage_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwizardpage.html#dtor.QWizardPage)
///
/// Delete this object from C++ memory.
///
/// @param self QWizardPage*
///
void q_wizardpage_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#public-types)

typedef enum {
    QWIZARD_WIZARDBUTTON_BACKBUTTON = 0,
    QWIZARD_WIZARDBUTTON_NEXTBUTTON = 1,
    QWIZARD_WIZARDBUTTON_COMMITBUTTON = 2,
    QWIZARD_WIZARDBUTTON_FINISHBUTTON = 3,
    QWIZARD_WIZARDBUTTON_CANCELBUTTON = 4,
    QWIZARD_WIZARDBUTTON_HELPBUTTON = 5,
    QWIZARD_WIZARDBUTTON_CUSTOMBUTTON1 = 6,
    QWIZARD_WIZARDBUTTON_CUSTOMBUTTON2 = 7,
    QWIZARD_WIZARDBUTTON_CUSTOMBUTTON3 = 8,
    QWIZARD_WIZARDBUTTON_STRETCH = 9,
    QWIZARD_WIZARDBUTTON_NOBUTTON = -1,
    QWIZARD_WIZARDBUTTON_NSTANDARDBUTTONS = 6,
    QWIZARD_WIZARDBUTTON_NBUTTONS = 9
} QWizard__WizardButton;

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#public-types)

typedef enum {
    QWIZARD_WIZARDPIXMAP_WATERMARKPIXMAP = 0,
    QWIZARD_WIZARDPIXMAP_LOGOPIXMAP = 1,
    QWIZARD_WIZARDPIXMAP_BANNERPIXMAP = 2,
    QWIZARD_WIZARDPIXMAP_BACKGROUNDPIXMAP = 3,
    QWIZARD_WIZARDPIXMAP_NPIXMAPS = 4
} QWizard__WizardPixmap;

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#public-types)

typedef enum {
    QWIZARD_WIZARDSTYLE_CLASSICSTYLE = 0,
    QWIZARD_WIZARDSTYLE_MODERNSTYLE = 1,
    QWIZARD_WIZARDSTYLE_MACSTYLE = 2,
    QWIZARD_WIZARDSTYLE_AEROSTYLE = 3,
    QWIZARD_WIZARDSTYLE_NSTYLES = 4
} QWizard__WizardStyle;

/// [Upstream resources](https://doc.qt.io/qt-6/qwizard.html#public-types)

typedef enum {
    QWIZARD_WIZARDOPTION_INDEPENDENTPAGES = 1,
    QWIZARD_WIZARDOPTION_IGNORESUBTITLES = 2,
    QWIZARD_WIZARDOPTION_EXTENDEDWATERMARKPIXMAP = 4,
    QWIZARD_WIZARDOPTION_NODEFAULTBUTTON = 8,
    QWIZARD_WIZARDOPTION_NOBACKBUTTONONSTARTPAGE = 16,
    QWIZARD_WIZARDOPTION_NOBACKBUTTONONLASTPAGE = 32,
    QWIZARD_WIZARDOPTION_DISABLEDBACKBUTTONONLASTPAGE = 64,
    QWIZARD_WIZARDOPTION_HAVENEXTBUTTONONLASTPAGE = 128,
    QWIZARD_WIZARDOPTION_HAVEFINISHBUTTONONEARLYPAGES = 256,
    QWIZARD_WIZARDOPTION_NOCANCELBUTTON = 512,
    QWIZARD_WIZARDOPTION_CANCELBUTTONONLEFT = 1024,
    QWIZARD_WIZARDOPTION_HAVEHELPBUTTON = 2048,
    QWIZARD_WIZARDOPTION_HELPBUTTONONRIGHT = 4096,
    QWIZARD_WIZARDOPTION_HAVECUSTOMBUTTON1 = 8192,
    QWIZARD_WIZARDOPTION_HAVECUSTOMBUTTON2 = 16384,
    QWIZARD_WIZARDOPTION_HAVECUSTOMBUTTON3 = 32768,
    QWIZARD_WIZARDOPTION_NOCANCELBUTTONONLASTPAGE = 65536
} QWizard__WizardOption;

#endif
