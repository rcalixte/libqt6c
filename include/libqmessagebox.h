#pragma once
#ifndef SRCQT6C_LIBQMESSAGEBOX_H
#define SRCQT6C_LIBQMESSAGEBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qmessagebox.html

/// q_messagebox_new constructs a new QMessageBox object.
///
/// @param parent QWidget*
QMessageBox* q_messagebox_new(void* parent);

/// q_messagebox_new2 constructs a new QMessageBox object.
///
QMessageBox* q_messagebox_new2();

/// q_messagebox_new3 constructs a new QMessageBox object.
///
/// @param icon enum QMessageBox__Icon
/// @param title const char*
/// @param text const char*
QMessageBox* q_messagebox_new3(int32_t icon, const char* title, const char* text);

/// q_messagebox_new4 constructs a new QMessageBox object.
///
/// @param title const char*
/// @param text const char*
/// @param icon enum QMessageBox__Icon
/// @param button0 int
/// @param button1 int
/// @param button2 int
QMessageBox* q_messagebox_new4(const char* title, const char* text, int32_t icon, int button0, int button1, int button2);

/// q_messagebox_new5 constructs a new QMessageBox object.
///
/// @param icon enum QMessageBox__Icon
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
QMessageBox* q_messagebox_new5(int32_t icon, const char* title, const char* text, int32_t buttons);

/// q_messagebox_new6 constructs a new QMessageBox object.
///
/// @param icon enum QMessageBox__Icon
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
/// @param parent QWidget*
QMessageBox* q_messagebox_new6(int32_t icon, const char* title, const char* text, int32_t buttons, void* parent);

/// q_messagebox_new7 constructs a new QMessageBox object.
///
/// @param icon enum QMessageBox__Icon
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QMessageBox* q_messagebox_new7(int32_t icon, const char* title, const char* text, int32_t buttons, void* parent, int64_t flags);

/// q_messagebox_new8 constructs a new QMessageBox object.
///
/// @param title const char*
/// @param text const char*
/// @param icon enum QMessageBox__Icon
/// @param button0 int
/// @param button1 int
/// @param button2 int
/// @param parent QWidget*
QMessageBox* q_messagebox_new8(const char* title, const char* text, int32_t icon, int button0, int button1, int button2, void* parent);

/// q_messagebox_new9 constructs a new QMessageBox object.
///
/// @param title const char*
/// @param text const char*
/// @param icon enum QMessageBox__Icon
/// @param button0 int
/// @param button1 int
/// @param button2 int
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
QMessageBox* q_messagebox_new9(const char* title, const char* text, int32_t icon, int button0, int button1, int button2, void* parent, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMessageBox*
const QMetaObject* q_messagebox_meta_object(void* self);

/// @param self QMessageBox*
/// @param param1 const char*
void* q_messagebox_metacast(void* self, const char* param1);

/// @param self QMessageBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_messagebox_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMessageBox*
/// @param callback int32_t func(QMessageBox* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_messagebox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QMessageBox*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_messagebox_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_messagebox_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
///
/// @param self QMessageBox*
/// @param button QAbstractButton*
/// @param role enum QMessageBox__ButtonRole
void q_messagebox_add_button(void* self, void* button, int32_t role);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
///
/// @param self QMessageBox*
/// @param text const char*
/// @param role enum QMessageBox__ButtonRole
QPushButton* q_messagebox_add_button2(void* self, const char* text, int32_t role);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
///
/// @param self QMessageBox*
/// @param button enum QMessageBox__StandardButton
QPushButton* q_messagebox_add_button3(void* self, int32_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#removeButton)
///
/// @param self QMessageBox*
/// @param button QAbstractButton*
void q_messagebox_remove_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttons)
///
/// @param self QMessageBox*
libqt_list /* of QAbstractButton* */ q_messagebox_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonRole)
///
/// @param self QMessageBox*
/// @param button QAbstractButton*
///
/// @return enum QMessageBox__ButtonRole
int32_t q_messagebox_button_role(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setStandardButtons)
///
/// @param self QMessageBox*
/// @param buttons flag of enum QMessageBox__StandardButton
void q_messagebox_set_standard_buttons(void* self, int32_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#standardButtons)
///
/// @param self QMessageBox*
///
/// @return flag of enum QMessageBox__StandardButton
int32_t q_messagebox_standard_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#standardButton)
///
/// @param self QMessageBox*
/// @param button QAbstractButton*
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_standard_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#button)
///
/// @param self QMessageBox*
/// @param which enum QMessageBox__StandardButton
QAbstractButton* q_messagebox_button(void* self, int32_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#defaultButton)
///
/// @param self QMessageBox*
QPushButton* q_messagebox_default_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setDefaultButton)
///
/// @param self QMessageBox*
/// @param button QPushButton*
void q_messagebox_set_default_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setDefaultButton)
///
/// @param self QMessageBox*
/// @param button enum QMessageBox__StandardButton
void q_messagebox_set_default_button2(void* self, int32_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#escapeButton)
///
/// @param self QMessageBox*
QAbstractButton* q_messagebox_escape_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setEscapeButton)
///
/// @param self QMessageBox*
/// @param button QAbstractButton*
void q_messagebox_set_escape_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setEscapeButton)
///
/// @param self QMessageBox*
/// @param button enum QMessageBox__StandardButton
void q_messagebox_set_escape_button2(void* self, int32_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#clickedButton)
///
/// @param self QMessageBox*
QAbstractButton* q_messagebox_clicked_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setText)
///
/// @param self QMessageBox*
/// @param text const char*
void q_messagebox_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#icon)
///
/// @param self QMessageBox*
///
/// @return enum QMessageBox__Icon
int32_t q_messagebox_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setIcon)
///
/// @param self QMessageBox*
/// @param icon enum QMessageBox__Icon
void q_messagebox_set_icon(void* self, int32_t icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#iconPixmap)
///
/// @param self QMessageBox*
QPixmap* q_messagebox_icon_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setIconPixmap)
///
/// @param self QMessageBox*
/// @param pixmap QPixmap*
void q_messagebox_set_icon_pixmap(void* self, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#textFormat)
///
/// @param self QMessageBox*
///
/// @return enum Qt__TextFormat
int32_t q_messagebox_text_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setTextFormat)
///
/// @param self QMessageBox*
/// @param format enum Qt__TextFormat
void q_messagebox_set_text_format(void* self, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setTextInteractionFlags)
///
/// @param self QMessageBox*
/// @param flags flag of enum Qt__TextInteractionFlag
void q_messagebox_set_text_interaction_flags(void* self, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#textInteractionFlags)
///
/// @param self QMessageBox*
///
/// @return flag of enum Qt__TextInteractionFlag
int32_t q_messagebox_text_interaction_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setCheckBox)
///
/// @param self QMessageBox*
/// @param cb QCheckBox*
void q_messagebox_set_check_box(void* self, void* cb);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#checkBox)
///
/// @param self QMessageBox*
QCheckBox* q_messagebox_check_box(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setOption)
///
/// @param self QMessageBox*
/// @param option enum QMessageBox__Option
void q_messagebox_set_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#testOption)
///
/// @param self QMessageBox*
/// @param option enum QMessageBox__Option
bool q_messagebox_test_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setOptions)
///
/// @param self QMessageBox*
/// @param options flag of enum QMessageBox__Option
void q_messagebox_set_options(void* self, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#options)
///
/// @param self QMessageBox*
///
/// @return flag of enum QMessageBox__Option
int32_t q_messagebox_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_information(void* parent, const char* title, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 enum QMessageBox__StandardButton
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_information2(void* parent, const char* title, const char* text, int32_t button0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_question(void* parent, const char* title, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 enum QMessageBox__StandardButton
/// @param button1 enum QMessageBox__StandardButton
int32_t q_messagebox_question2(void* parent, const char* title, const char* text, int32_t button0, int32_t button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_warning(void* parent, const char* title, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 enum QMessageBox__StandardButton
/// @param button1 enum QMessageBox__StandardButton
int32_t q_messagebox_warning2(void* parent, const char* title, const char* text, int32_t button0, int32_t button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_critical(void* parent, const char* title, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 enum QMessageBox__StandardButton
/// @param button1 enum QMessageBox__StandardButton
int32_t q_messagebox_critical2(void* parent, const char* title, const char* text, int32_t button0, int32_t button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#about)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
void q_messagebox_about(void* parent, const char* title, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#aboutQt)
///
/// @param parent QWidget*
void q_messagebox_about_qt(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 int
int32_t q_messagebox_information3(void* parent, const char* title, const char* text, int button0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
int32_t q_messagebox_information4(void* parent, const char* title, const char* text, const char* button0Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 int
int32_t q_messagebox_question3(void* parent, const char* title, const char* text, int button0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
int32_t q_messagebox_question4(void* parent, const char* title, const char* text, const char* button0Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 int
/// @param button1 int
int32_t q_messagebox_warning3(void* parent, const char* title, const char* text, int button0, int button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
int32_t q_messagebox_warning4(void* parent, const char* title, const char* text, const char* button0Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 int
/// @param button1 int
int32_t q_messagebox_critical3(void* parent, const char* title, const char* text, int button0, int button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
int32_t q_messagebox_critical4(void* parent, const char* title, const char* text, const char* button0Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
/// @param button int
const char* q_messagebox_button_text(void* self, int button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setButtonText)
///
/// @param self QMessageBox*
/// @param button int
/// @param text const char*
void q_messagebox_set_button_text(void* self, int button, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#informativeText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_informative_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setInformativeText)
///
/// @param self QMessageBox*
/// @param text const char*
void q_messagebox_set_informative_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#detailedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_detailed_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setDetailedText)
///
/// @param self QMessageBox*
/// @param text const char*
void q_messagebox_set_detailed_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setWindowTitle)
///
/// @param self QMessageBox*
/// @param title const char*
void q_messagebox_set_window_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setWindowModality)
///
/// @param self QMessageBox*
/// @param windowModality enum Qt__WindowModality
void q_messagebox_set_window_modality(void* self, int32_t windowModality);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#standardIcon)
///
/// @param icon enum QMessageBox__Icon
QPixmap* q_messagebox_standard_icon(int32_t icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonClicked)
///
/// @param self QMessageBox*
/// @param button QAbstractButton*
void q_messagebox_button_clicked(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonClicked)
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QAbstractButton* button)
void q_messagebox_on_button_clicked(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#event)
///
/// @param self QMessageBox*
/// @param e QEvent*
bool q_messagebox_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QMessageBox*
/// @param callback bool func(QMessageBox* self, QEvent* e)
void q_messagebox_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#event)
///
/// Base class method implementation
///
/// @param self QMessageBox*
/// @param e QEvent*
bool q_messagebox_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#resizeEvent)
///
/// @param self QMessageBox*
/// @param event QResizeEvent*
void q_messagebox_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QResizeEvent* event)
void q_messagebox_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QMessageBox*
/// @param event QResizeEvent*
void q_messagebox_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#showEvent)
///
/// @param self QMessageBox*
/// @param event QShowEvent*
void q_messagebox_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QShowEvent* event)
void q_messagebox_on_show_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#showEvent)
///
/// Base class method implementation
///
/// @param self QMessageBox*
/// @param event QShowEvent*
void q_messagebox_qbase_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#closeEvent)
///
/// @param self QMessageBox*
/// @param event QCloseEvent*
void q_messagebox_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QCloseEvent* event)
void q_messagebox_on_close_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#closeEvent)
///
/// Base class method implementation
///
/// @param self QMessageBox*
/// @param event QCloseEvent*
void q_messagebox_qbase_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#keyPressEvent)
///
/// @param self QMessageBox*
/// @param event QKeyEvent*
void q_messagebox_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QKeyEvent* event)
void q_messagebox_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QMessageBox*
/// @param event QKeyEvent*
void q_messagebox_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#changeEvent)
///
/// @param self QMessageBox*
/// @param event QEvent*
void q_messagebox_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QEvent* event)
void q_messagebox_on_change_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QMessageBox*
/// @param event QEvent*
void q_messagebox_qbase_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_messagebox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_messagebox_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setOption)
///
/// @param self QMessageBox*
/// @param option enum QMessageBox__Option
/// @param on bool
void q_messagebox_set_option2(void* self, int32_t option, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_information42(void* parent, const char* title, const char* text, int32_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
/// @param defaultButton enum QMessageBox__StandardButton
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_information5(void* parent, const char* title, const char* text, int32_t buttons, int32_t defaultButton);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 enum QMessageBox__StandardButton
/// @param button1 enum QMessageBox__StandardButton
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_information52(void* parent, const char* title, const char* text, int32_t button0, int32_t button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_question42(void* parent, const char* title, const char* text, int32_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
/// @param defaultButton enum QMessageBox__StandardButton
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_question5(void* parent, const char* title, const char* text, int32_t buttons, int32_t defaultButton);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_warning42(void* parent, const char* title, const char* text, int32_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
/// @param defaultButton enum QMessageBox__StandardButton
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_warning5(void* parent, const char* title, const char* text, int32_t buttons, int32_t defaultButton);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_critical42(void* parent, const char* title, const char* text, int32_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param buttons flag of enum QMessageBox__StandardButton
/// @param defaultButton enum QMessageBox__StandardButton
///
/// @return enum QMessageBox__StandardButton
int32_t q_messagebox_critical5(void* parent, const char* title, const char* text, int32_t buttons, int32_t defaultButton);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#aboutQt)
///
/// @param parent QWidget*
/// @param title const char*
void q_messagebox_about_qt2(void* parent, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 int
/// @param button1 int
int32_t q_messagebox_information53(void* parent, const char* title, const char* text, int button0, int button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 int
/// @param button1 int
/// @param button2 int
int32_t q_messagebox_information6(void* parent, const char* title, const char* text, int button0, int button1, int button2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
int32_t q_messagebox_information54(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
int32_t q_messagebox_information62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
/// @param defaultButtonNumber int
int32_t q_messagebox_information7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
/// @param defaultButtonNumber int
/// @param escapeButtonNumber int
int32_t q_messagebox_information8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 int
/// @param button1 int
int32_t q_messagebox_question52(void* parent, const char* title, const char* text, int button0, int button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 int
/// @param button1 int
/// @param button2 int
int32_t q_messagebox_question6(void* parent, const char* title, const char* text, int button0, int button1, int button2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
int32_t q_messagebox_question53(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
int32_t q_messagebox_question62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
/// @param defaultButtonNumber int
int32_t q_messagebox_question7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
/// @param defaultButtonNumber int
/// @param escapeButtonNumber int
int32_t q_messagebox_question8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 int
/// @param button1 int
/// @param button2 int
int32_t q_messagebox_warning6(void* parent, const char* title, const char* text, int button0, int button1, int button2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
int32_t q_messagebox_warning52(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
int32_t q_messagebox_warning62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
/// @param defaultButtonNumber int
int32_t q_messagebox_warning7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
/// @param defaultButtonNumber int
/// @param escapeButtonNumber int
int32_t q_messagebox_warning8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0 int
/// @param button1 int
/// @param button2 int
int32_t q_messagebox_critical6(void* parent, const char* title, const char* text, int button0, int button1, int button2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
int32_t q_messagebox_critical52(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
int32_t q_messagebox_critical62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
/// @param defaultButtonNumber int
int32_t q_messagebox_critical7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// @param parent QWidget*
/// @param title const char*
/// @param text const char*
/// @param button0Text const char*
/// @param button1Text const char*
/// @param button2Text const char*
/// @param defaultButtonNumber int
/// @param escapeButtonNumber int
int32_t q_messagebox_critical8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self QMessageBox*
int32_t q_messagebox_result(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self QMessageBox*
/// @param sizeGripEnabled bool
void q_messagebox_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self QMessageBox*
bool q_messagebox_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self QMessageBox*
/// @param modal bool
void q_messagebox_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self QMessageBox*
/// @param r int
void q_messagebox_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QMessageBox*
/// @param result int
void q_messagebox_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, int result)
void q_messagebox_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self QMessageBox*
void q_messagebox_accepted(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self)
void q_messagebox_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QMessageBox*
void q_messagebox_rejected(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self)
void q_messagebox_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QMessageBox*
uintptr_t q_messagebox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QMessageBox*
void q_messagebox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QMessageBox*
uintptr_t q_messagebox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QMessageBox*
uintptr_t q_messagebox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QMessageBox*
QStyle* q_messagebox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QMessageBox*
/// @param style QStyle*
void q_messagebox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QMessageBox*
bool q_messagebox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QMessageBox*
bool q_messagebox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QMessageBox*
bool q_messagebox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QMessageBox*
///
/// @return enum Qt__WindowModality
int32_t q_messagebox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QMessageBox*
bool q_messagebox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QMessageBox*
/// @param param1 QWidget*
bool q_messagebox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QMessageBox*
/// @param enabled bool
void q_messagebox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QMessageBox*
/// @param disabled bool
void q_messagebox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QMessageBox*
/// @param windowModified bool
void q_messagebox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QMessageBox*
QRect* q_messagebox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QMessageBox*
const QRect* q_messagebox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QMessageBox*
QRect* q_messagebox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QMessageBox*
int32_t q_messagebox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QMessageBox*
int32_t q_messagebox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QMessageBox*
QPoint* q_messagebox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QMessageBox*
QSize* q_messagebox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QMessageBox*
QSize* q_messagebox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QMessageBox*
int32_t q_messagebox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QMessageBox*
int32_t q_messagebox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QMessageBox*
QRect* q_messagebox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QMessageBox*
QRect* q_messagebox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QMessageBox*
QRegion* q_messagebox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QMessageBox*
QSize* q_messagebox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QMessageBox*
QSize* q_messagebox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QMessageBox*
int32_t q_messagebox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QMessageBox*
int32_t q_messagebox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QMessageBox*
int32_t q_messagebox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QMessageBox*
int32_t q_messagebox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QMessageBox*
/// @param minimumSize QSize*
void q_messagebox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QMessageBox*
/// @param minw int
/// @param minh int
void q_messagebox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QMessageBox*
/// @param maximumSize QSize*
void q_messagebox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QMessageBox*
/// @param maxw int
/// @param maxh int
void q_messagebox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QMessageBox*
/// @param minw int
void q_messagebox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QMessageBox*
/// @param minh int
void q_messagebox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QMessageBox*
/// @param maxw int
void q_messagebox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QMessageBox*
/// @param maxh int
void q_messagebox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QMessageBox*
QSize* q_messagebox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QMessageBox*
/// @param sizeIncrement QSize*
void q_messagebox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QMessageBox*
/// @param w int
/// @param h int
void q_messagebox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QMessageBox*
QSize* q_messagebox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QMessageBox*
/// @param baseSize QSize*
void q_messagebox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QMessageBox*
/// @param basew int
/// @param baseh int
void q_messagebox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QMessageBox*
/// @param fixedSize QSize*
void q_messagebox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QMessageBox*
/// @param w int
/// @param h int
void q_messagebox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QMessageBox*
/// @param w int
void q_messagebox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QMessageBox*
/// @param h int
void q_messagebox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QMessageBox*
/// @param param1 QPointF*
QPointF* q_messagebox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QMessageBox*
/// @param param1 QPoint*
QPoint* q_messagebox_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QMessageBox*
/// @param param1 QPointF*
QPointF* q_messagebox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QMessageBox*
/// @param param1 QPoint*
QPoint* q_messagebox_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QMessageBox*
/// @param param1 QPointF*
QPointF* q_messagebox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QMessageBox*
/// @param param1 QPoint*
QPoint* q_messagebox_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QMessageBox*
/// @param param1 QPointF*
QPointF* q_messagebox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QMessageBox*
/// @param param1 QPoint*
QPoint* q_messagebox_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QMessageBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_messagebox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QMessageBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_messagebox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QMessageBox*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_messagebox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QMessageBox*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_messagebox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QMessageBox*
QWidget* q_messagebox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QMessageBox*
QWidget* q_messagebox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QMessageBox*
QWidget* q_messagebox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QMessageBox*
const QPalette* q_messagebox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QMessageBox*
/// @param palette QPalette*
void q_messagebox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QMessageBox*
/// @param backgroundRole enum QPalette__ColorRole
void q_messagebox_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QMessageBox*
///
/// @return enum QPalette__ColorRole
int32_t q_messagebox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QMessageBox*
/// @param foregroundRole enum QPalette__ColorRole
void q_messagebox_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QMessageBox*
///
/// @return enum QPalette__ColorRole
int32_t q_messagebox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QMessageBox*
const QFont* q_messagebox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QMessageBox*
/// @param font QFont*
void q_messagebox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QMessageBox*
QFontMetrics* q_messagebox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QMessageBox*
QFontInfo* q_messagebox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QMessageBox*
QCursor* q_messagebox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QMessageBox*
/// @param cursor QCursor*
void q_messagebox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QMessageBox*
void q_messagebox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QMessageBox*
/// @param enable bool
void q_messagebox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QMessageBox*
bool q_messagebox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QMessageBox*
bool q_messagebox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QMessageBox*
/// @param enable bool
void q_messagebox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QMessageBox*
bool q_messagebox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QMessageBox*
/// @param mask QBitmap*
void q_messagebox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QMessageBox*
/// @param mask QRegion*
void q_messagebox_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QMessageBox*
QRegion* q_messagebox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QMessageBox*
void q_messagebox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMessageBox*
/// @param target QPaintDevice*
void q_messagebox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMessageBox*
/// @param painter QPainter*
void q_messagebox_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QMessageBox*
QPixmap* q_messagebox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QMessageBox*
QGraphicsEffect* q_messagebox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QMessageBox*
/// @param effect QGraphicsEffect*
void q_messagebox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QMessageBox*
/// @param typeVal enum Qt__GestureType
void q_messagebox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QMessageBox*
/// @param typeVal enum Qt__GestureType
void q_messagebox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QMessageBox*
/// @param styleSheet const char*
void q_messagebox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QMessageBox*
/// @param icon QIcon*
void q_messagebox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QMessageBox*
QIcon* q_messagebox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QMessageBox*
/// @param windowIconText const char*
void q_messagebox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QMessageBox*
/// @param windowRole const char*
void q_messagebox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QMessageBox*
/// @param filePath const char*
void q_messagebox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QMessageBox*
/// @param level double
void q_messagebox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QMessageBox*
double q_messagebox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QMessageBox*
bool q_messagebox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QMessageBox*
/// @param toolTip const char*
void q_messagebox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QMessageBox*
/// @param msec int
void q_messagebox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QMessageBox*
int32_t q_messagebox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QMessageBox*
/// @param statusTip const char*
void q_messagebox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QMessageBox*
/// @param whatsThis const char*
void q_messagebox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QMessageBox*
/// @param name const char*
void q_messagebox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QMessageBox*
/// @param description const char*
void q_messagebox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QMessageBox*
/// @param direction enum Qt__LayoutDirection
void q_messagebox_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QMessageBox*
///
/// @return enum Qt__LayoutDirection
int32_t q_messagebox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QMessageBox*
void q_messagebox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QMessageBox*
/// @param locale QLocale*
void q_messagebox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QMessageBox*
QLocale* q_messagebox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QMessageBox*
void q_messagebox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QMessageBox*
bool q_messagebox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QMessageBox*
bool q_messagebox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QMessageBox*
void q_messagebox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QMessageBox*
bool q_messagebox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QMessageBox*
void q_messagebox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QMessageBox*
void q_messagebox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QMessageBox*
/// @param reason enum Qt__FocusReason
void q_messagebox_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QMessageBox*
///
/// @return enum Qt__FocusPolicy
int32_t q_messagebox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QMessageBox*
/// @param policy enum Qt__FocusPolicy
void q_messagebox_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QMessageBox*
bool q_messagebox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_messagebox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QMessageBox*
/// @param focusProxy QWidget*
void q_messagebox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QMessageBox*
QWidget* q_messagebox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QMessageBox*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_messagebox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QMessageBox*
/// @param policy enum Qt__ContextMenuPolicy
void q_messagebox_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QMessageBox*
void q_messagebox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QMessageBox*
/// @param param1 QCursor*
void q_messagebox_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QMessageBox*
void q_messagebox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QMessageBox*
void q_messagebox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QMessageBox*
void q_messagebox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QMessageBox*
/// @param key QKeySequence*
int32_t q_messagebox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QMessageBox*
/// @param id int
void q_messagebox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QMessageBox*
/// @param id int
void q_messagebox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QMessageBox*
/// @param id int
void q_messagebox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_messagebox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_messagebox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QMessageBox*
bool q_messagebox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QMessageBox*
/// @param enable bool
void q_messagebox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QMessageBox*
QGraphicsProxyWidget* q_messagebox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMessageBox*
void q_messagebox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMessageBox*
void q_messagebox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMessageBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_messagebox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMessageBox*
/// @param param1 QRect*
void q_messagebox_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QMessageBox*
/// @param param1 QRegion*
void q_messagebox_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMessageBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_messagebox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMessageBox*
/// @param param1 QRect*
void q_messagebox_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QMessageBox*
/// @param param1 QRegion*
void q_messagebox_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QMessageBox*
/// @param hidden bool
void q_messagebox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QMessageBox*
void q_messagebox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QMessageBox*
void q_messagebox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QMessageBox*
void q_messagebox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QMessageBox*
void q_messagebox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QMessageBox*
void q_messagebox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QMessageBox*
void q_messagebox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QMessageBox*
bool q_messagebox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QMessageBox*
void q_messagebox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QMessageBox*
void q_messagebox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QMessageBox*
/// @param param1 QWidget*
void q_messagebox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QMessageBox*
/// @param x int
/// @param y int
void q_messagebox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QMessageBox*
/// @param param1 QPoint*
void q_messagebox_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QMessageBox*
/// @param w int
/// @param h int
void q_messagebox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QMessageBox*
/// @param param1 QSize*
void q_messagebox_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QMessageBox*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_messagebox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QMessageBox*
/// @param geometry QRect*
void q_messagebox_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
char* q_messagebox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QMessageBox*
/// @param geometry const char*
bool q_messagebox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QMessageBox*
void q_messagebox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QMessageBox*
bool q_messagebox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QMessageBox*
/// @param param1 QWidget*
bool q_messagebox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QMessageBox*
bool q_messagebox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QMessageBox*
bool q_messagebox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QMessageBox*
bool q_messagebox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QMessageBox*
bool q_messagebox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QMessageBox*
///
/// @return flag of enum Qt__WindowState
int32_t q_messagebox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QMessageBox*
/// @param state flag of enum Qt__WindowState
void q_messagebox_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QMessageBox*
/// @param state flag of enum Qt__WindowState
void q_messagebox_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QMessageBox*
QSizePolicy* q_messagebox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QMessageBox*
/// @param sizePolicy QSizePolicy*
void q_messagebox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QMessageBox*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_messagebox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QMessageBox*
QRegion* q_messagebox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QMessageBox*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_messagebox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QMessageBox*
/// @param margins QMargins*
void q_messagebox_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QMessageBox*
QMargins* q_messagebox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QMessageBox*
QRect* q_messagebox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QMessageBox*
QLayout* q_messagebox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QMessageBox*
/// @param layout QLayout*
void q_messagebox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QMessageBox*
void q_messagebox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QMessageBox*
/// @param parent QWidget*
void q_messagebox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QMessageBox*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_messagebox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QMessageBox*
/// @param dx int
/// @param dy int
void q_messagebox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QMessageBox*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_messagebox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QMessageBox*
QWidget* q_messagebox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QMessageBox*
QWidget* q_messagebox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QMessageBox*
QWidget* q_messagebox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QMessageBox*
bool q_messagebox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QMessageBox*
/// @param on bool
void q_messagebox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMessageBox*
/// @param action QAction*
void q_messagebox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QMessageBox*
/// @param actions libqt_list /* of QAction* */
void q_messagebox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QMessageBox*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_messagebox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QMessageBox*
/// @param before QAction*
/// @param action QAction*
void q_messagebox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QMessageBox*
/// @param action QAction*
void q_messagebox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QMessageBox*
libqt_list /* of QAction* */ q_messagebox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMessageBox*
/// @param text const char*
QAction* q_messagebox_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMessageBox*
/// @param icon QIcon*
/// @param text const char*
QAction* q_messagebox_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMessageBox*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_messagebox_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QMessageBox*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_messagebox_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QMessageBox*
QWidget* q_messagebox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QMessageBox*
/// @param typeVal flag of enum Qt__WindowType
void q_messagebox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QMessageBox*
///
/// @return flag of enum Qt__WindowType
int64_t q_messagebox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QMessageBox*
/// @param param1 enum Qt__WindowType
void q_messagebox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QMessageBox*
/// @param typeVal flag of enum Qt__WindowType
void q_messagebox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QMessageBox*
///
/// @return enum Qt__WindowType
int64_t q_messagebox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_messagebox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMessageBox*
/// @param x int
/// @param y int
QWidget* q_messagebox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMessageBox*
/// @param p QPoint*
QWidget* q_messagebox_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QMessageBox*
/// @param p QPointF*
QWidget* q_messagebox_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QMessageBox*
/// @param param1 enum Qt__WidgetAttribute
void q_messagebox_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QMessageBox*
/// @param param1 enum Qt__WidgetAttribute
bool q_messagebox_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QMessageBox*
void q_messagebox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QMessageBox*
/// @param child QWidget*
bool q_messagebox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QMessageBox*
bool q_messagebox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QMessageBox*
/// @param enabled bool
void q_messagebox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QMessageBox*
QBackingStore* q_messagebox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QMessageBox*
QWindow* q_messagebox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QMessageBox*
QScreen* q_messagebox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QMessageBox*
/// @param screen QScreen*
void q_messagebox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_messagebox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QMessageBox*
/// @param title const char*
void q_messagebox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, const char* title)
void q_messagebox_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QMessageBox*
/// @param icon QIcon*
void q_messagebox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QIcon* icon)
void q_messagebox_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QMessageBox*
/// @param iconText const char*
void q_messagebox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, const char* iconText)
void q_messagebox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QMessageBox*
/// @param pos QPoint*
void q_messagebox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QPoint* pos)
void q_messagebox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QMessageBox*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_messagebox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QMessageBox*
/// @param hints flag of enum Qt__InputMethodHint
void q_messagebox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMessageBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_messagebox_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMessageBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_messagebox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMessageBox*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_messagebox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMessageBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_messagebox_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMessageBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_messagebox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QMessageBox*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_messagebox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QMessageBox*
/// @param rectangle QRect*
QPixmap* q_messagebox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QMessageBox*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_messagebox_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QMessageBox*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_messagebox_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QMessageBox*
/// @param id int
/// @param enable bool
void q_messagebox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QMessageBox*
/// @param id int
/// @param enable bool
void q_messagebox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QMessageBox*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_messagebox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QMessageBox*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_messagebox_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_messagebox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_messagebox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char* q_messagebox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMessageBox*
/// @param name char*
void q_messagebox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMessageBox*
bool q_messagebox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMessageBox*
bool q_messagebox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMessageBox*
bool q_messagebox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMessageBox*
bool q_messagebox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMessageBox*
/// @param b bool
bool q_messagebox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMessageBox*
QThread* q_messagebox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMessageBox*
/// @param thread QThread*
bool q_messagebox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMessageBox*
/// @param interval int
int32_t q_messagebox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMessageBox*
/// @param id int
void q_messagebox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMessageBox*
/// @param id enum Qt__TimerId
void q_messagebox_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMessageBox*
libqt_list /* of QObject* */ q_messagebox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMessageBox*
/// @param filterObj QObject*
void q_messagebox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMessageBox*
/// @param obj QObject*
void q_messagebox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_messagebox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMessageBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_messagebox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_messagebox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_messagebox_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMessageBox*
void q_messagebox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMessageBox*
void q_messagebox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMessageBox*
/// @param name const char*
/// @param value QVariant*
bool q_messagebox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMessageBox*
/// @param name const char*
QVariant* q_messagebox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMessageBox*
const char** q_messagebox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMessageBox*
QBindingStorage* q_messagebox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMessageBox*
const QBindingStorage* q_messagebox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMessageBox*
void q_messagebox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self)
void q_messagebox_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMessageBox*
QObject* q_messagebox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMessageBox*
/// @param classname const char*
bool q_messagebox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMessageBox*
void q_messagebox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMessageBox*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_messagebox_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMessageBox*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_messagebox_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_messagebox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMessageBox*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_messagebox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMessageBox*
/// @param param1 QObject*
void q_messagebox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QObject* param1)
void q_messagebox_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QMessageBox*
bool q_messagebox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QMessageBox*
int32_t q_messagebox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QMessageBox*
int32_t q_messagebox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QMessageBox*
int32_t q_messagebox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QMessageBox*
int32_t q_messagebox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QMessageBox*
int32_t q_messagebox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QMessageBox*
int32_t q_messagebox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QMessageBox*
double q_messagebox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QMessageBox*
double q_messagebox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QMessageBox*
int32_t q_messagebox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QMessageBox*
int32_t q_messagebox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_messagebox_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_messagebox_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param visible bool
void q_messagebox_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param visible bool
void q_messagebox_qbase_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, bool visible)
void q_messagebox_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
QSize* q_messagebox_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
QSize* q_messagebox_qbase_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback QSize* func()
void q_messagebox_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
QSize* q_messagebox_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
QSize* q_messagebox_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback QSize* func()
void q_messagebox_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func()
void q_messagebox_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
int32_t q_messagebox_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
int32_t q_messagebox_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback int32_t func()
void q_messagebox_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 int
void q_messagebox_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 int
void q_messagebox_qbase_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, int param1)
void q_messagebox_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_qbase_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func()
void q_messagebox_on_accept(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func()
void q_messagebox_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 QContextMenuEvent*
void q_messagebox_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 QContextMenuEvent*
void q_messagebox_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QContextMenuEvent* param1)
void q_messagebox_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_messagebox_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_messagebox_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback bool func(QMessageBox* self, QObject* param1, QEvent* param2)
void q_messagebox_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
int32_t q_messagebox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
int32_t q_messagebox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback int32_t func()
void q_messagebox_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 int
int32_t q_messagebox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 int
int32_t q_messagebox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback int32_t func(QMessageBox* self, int param1)
void q_messagebox_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
bool q_messagebox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
bool q_messagebox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback bool func()
void q_messagebox_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
QPaintEngine* q_messagebox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
QPaintEngine* q_messagebox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback QPaintEngine* func()
void q_messagebox_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QMouseEvent*
void q_messagebox_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QMouseEvent*
void q_messagebox_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QMouseEvent* event)
void q_messagebox_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QMouseEvent*
void q_messagebox_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QMouseEvent*
void q_messagebox_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QMouseEvent* event)
void q_messagebox_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QMouseEvent*
void q_messagebox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QMouseEvent*
void q_messagebox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QMouseEvent* event)
void q_messagebox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QMouseEvent*
void q_messagebox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QMouseEvent*
void q_messagebox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QMouseEvent* event)
void q_messagebox_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QWheelEvent*
void q_messagebox_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QWheelEvent*
void q_messagebox_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QWheelEvent* event)
void q_messagebox_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QKeyEvent*
void q_messagebox_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QKeyEvent*
void q_messagebox_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QKeyEvent* event)
void q_messagebox_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QFocusEvent*
void q_messagebox_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QFocusEvent*
void q_messagebox_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QFocusEvent* event)
void q_messagebox_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QFocusEvent*
void q_messagebox_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QFocusEvent*
void q_messagebox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QFocusEvent* event)
void q_messagebox_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QEnterEvent*
void q_messagebox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QEnterEvent*
void q_messagebox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QEnterEvent* event)
void q_messagebox_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QEvent*
void q_messagebox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QEvent*
void q_messagebox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QEvent* event)
void q_messagebox_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QPaintEvent*
void q_messagebox_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QPaintEvent*
void q_messagebox_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QPaintEvent* event)
void q_messagebox_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QMoveEvent*
void q_messagebox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QMoveEvent*
void q_messagebox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QMoveEvent* event)
void q_messagebox_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QTabletEvent*
void q_messagebox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QTabletEvent*
void q_messagebox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QTabletEvent* event)
void q_messagebox_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QActionEvent*
void q_messagebox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QActionEvent*
void q_messagebox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QActionEvent* event)
void q_messagebox_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QDragEnterEvent*
void q_messagebox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QDragEnterEvent*
void q_messagebox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QDragEnterEvent* event)
void q_messagebox_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QDragMoveEvent*
void q_messagebox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QDragMoveEvent*
void q_messagebox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QDragMoveEvent* event)
void q_messagebox_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QDragLeaveEvent*
void q_messagebox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QDragLeaveEvent*
void q_messagebox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QDragLeaveEvent* event)
void q_messagebox_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QDropEvent*
void q_messagebox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QDropEvent*
void q_messagebox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QDropEvent* event)
void q_messagebox_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QHideEvent*
void q_messagebox_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QHideEvent*
void q_messagebox_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QHideEvent* event)
void q_messagebox_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_messagebox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_messagebox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback bool func(QMessageBox* self, const char* eventType, void* message, intptr_t* result)
void q_messagebox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_messagebox_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_messagebox_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback int32_t func(QMessageBox* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_messagebox_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param painter QPainter*
void q_messagebox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param painter QPainter*
void q_messagebox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QPainter* painter)
void q_messagebox_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param offset QPoint*
QPaintDevice* q_messagebox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param offset QPoint*
QPaintDevice* q_messagebox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback QPaintDevice* func(QMessageBox* self, QPoint* offset)
void q_messagebox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
QPainter* q_messagebox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
QPainter* q_messagebox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback QPainter* func()
void q_messagebox_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 QInputMethodEvent*
void q_messagebox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 QInputMethodEvent*
void q_messagebox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QInputMethodEvent* param1)
void q_messagebox_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_messagebox_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_messagebox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback QVariant* func(QMessageBox* self, enum Qt__InputMethodQuery param1)
void q_messagebox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param next bool
bool q_messagebox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param next bool
bool q_messagebox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback bool func(QMessageBox* self, bool next)
void q_messagebox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QTimerEvent*
void q_messagebox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QTimerEvent*
void q_messagebox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QTimerEvent* event)
void q_messagebox_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QChildEvent*
void q_messagebox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QChildEvent*
void q_messagebox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QChildEvent* event)
void q_messagebox_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param event QEvent*
void q_messagebox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param event QEvent*
void q_messagebox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QEvent* event)
void q_messagebox_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param signal QMetaMethod*
void q_messagebox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param signal QMetaMethod*
void q_messagebox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QMetaMethod* signal)
void q_messagebox_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param signal QMetaMethod*
void q_messagebox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param signal QMetaMethod*
void q_messagebox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QMetaMethod* signal)
void q_messagebox_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 QWidget*
void q_messagebox_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param param1 QWidget*
void q_messagebox_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, QWidget* param1)
void q_messagebox_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func()
void q_messagebox_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func()
void q_messagebox_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
void q_messagebox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback void func()
void q_messagebox_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
bool q_messagebox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
bool q_messagebox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback bool func()
void q_messagebox_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
bool q_messagebox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
bool q_messagebox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback bool func()
void q_messagebox_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
QObject* q_messagebox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
QObject* q_messagebox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback QObject* func()
void q_messagebox_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
int32_t q_messagebox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
int32_t q_messagebox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback int32_t func()
void q_messagebox_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param signal const char*
int32_t q_messagebox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param signal const char*
int32_t q_messagebox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback int32_t func(QMessageBox* self, const char* signal)
void q_messagebox_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param signal QMetaMethod*
bool q_messagebox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param signal QMetaMethod*
bool q_messagebox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback bool func(QMessageBox* self, QMetaMethod* signal)
void q_messagebox_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMessageBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_messagebox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMessageBox*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_messagebox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMessageBox*
/// @param callback double func(QMessageBox* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_messagebox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMessageBox*
/// @param callback void func(QMessageBox* self, const char* objectName)
void q_messagebox_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#dtor.QMessageBox)
///
/// Delete this object from C++ memory.
///
/// @param self QMessageBox*
void q_messagebox_delete(void* self);

/// https://doc.qt.io/qt-6/qmessagebox.html#types

typedef enum {
    QMESSAGEBOX_OPTION_DONTUSENATIVEDIALOG = 1
} QMessageBox__Option;

typedef enum {
    QMESSAGEBOX_ICON_NOICON = 0,
    QMESSAGEBOX_ICON_INFORMATION = 1,
    QMESSAGEBOX_ICON_WARNING = 2,
    QMESSAGEBOX_ICON_CRITICAL = 3,
    QMESSAGEBOX_ICON_QUESTION = 4
} QMessageBox__Icon;

typedef enum {
    QMESSAGEBOX_BUTTONROLE_INVALIDROLE = -1,
    QMESSAGEBOX_BUTTONROLE_ACCEPTROLE = 0,
    QMESSAGEBOX_BUTTONROLE_REJECTROLE = 1,
    QMESSAGEBOX_BUTTONROLE_DESTRUCTIVEROLE = 2,
    QMESSAGEBOX_BUTTONROLE_ACTIONROLE = 3,
    QMESSAGEBOX_BUTTONROLE_HELPROLE = 4,
    QMESSAGEBOX_BUTTONROLE_YESROLE = 5,
    QMESSAGEBOX_BUTTONROLE_NOROLE = 6,
    QMESSAGEBOX_BUTTONROLE_RESETROLE = 7,
    QMESSAGEBOX_BUTTONROLE_APPLYROLE = 8,
    QMESSAGEBOX_BUTTONROLE_NROLES = 9
} QMessageBox__ButtonRole;

typedef enum {
    QMESSAGEBOX_STANDARDBUTTON_NOBUTTON = 0,
    QMESSAGEBOX_STANDARDBUTTON_OK = 1024,
    QMESSAGEBOX_STANDARDBUTTON_SAVE = 2048,
    QMESSAGEBOX_STANDARDBUTTON_SAVEALL = 4096,
    QMESSAGEBOX_STANDARDBUTTON_OPEN = 8192,
    QMESSAGEBOX_STANDARDBUTTON_YES = 16384,
    QMESSAGEBOX_STANDARDBUTTON_YESTOALL = 32768,
    QMESSAGEBOX_STANDARDBUTTON_NO = 65536,
    QMESSAGEBOX_STANDARDBUTTON_NOTOALL = 131072,
    QMESSAGEBOX_STANDARDBUTTON_ABORT = 262144,
    QMESSAGEBOX_STANDARDBUTTON_RETRY = 524288,
    QMESSAGEBOX_STANDARDBUTTON_IGNORE = 1048576,
    QMESSAGEBOX_STANDARDBUTTON_CLOSE = 2097152,
    QMESSAGEBOX_STANDARDBUTTON_CANCEL = 4194304,
    QMESSAGEBOX_STANDARDBUTTON_DISCARD = 8388608,
    QMESSAGEBOX_STANDARDBUTTON_HELP = 16777216,
    QMESSAGEBOX_STANDARDBUTTON_APPLY = 33554432,
    QMESSAGEBOX_STANDARDBUTTON_RESET = 67108864,
    QMESSAGEBOX_STANDARDBUTTON_RESTOREDEFAULTS = 134217728,
    QMESSAGEBOX_STANDARDBUTTON_FIRSTBUTTON = 1024,
    QMESSAGEBOX_STANDARDBUTTON_LASTBUTTON = 134217728,
    QMESSAGEBOX_STANDARDBUTTON_YESALL = 32768,
    QMESSAGEBOX_STANDARDBUTTON_NOALL = 131072,
    QMESSAGEBOX_STANDARDBUTTON_DEFAULT = 256,
    QMESSAGEBOX_STANDARDBUTTON_ESCAPE = 512,
    QMESSAGEBOX_STANDARDBUTTON_FLAGMASK = 768,
    QMESSAGEBOX_STANDARDBUTTON_BUTTONMASK = -769
} QMessageBox__StandardButton;

#endif
