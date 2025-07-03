#pragma once
#ifndef SRCQT6C_LIBQMESSAGEBOX_H
#define SRCQT6C_LIBQMESSAGEBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractbutton.h"
#include "libqevent.h"
#include "libqcheckbox.h"
#include "libqdialog.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqpushbutton.h"
#include "libqsize.h"
#include <string.h>
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qmessagebox.html

/// q_messagebox_new constructs a new QMessageBox object.
///
/// ``` QWidget* parent ```
QMessageBox* q_messagebox_new(void* parent);

/// q_messagebox_new2 constructs a new QMessageBox object.
///
///
QMessageBox* q_messagebox_new2();

/// q_messagebox_new3 constructs a new QMessageBox object.
///
/// ``` enum QMessageBox__Icon icon, const char* title, const char* text ```
QMessageBox* q_messagebox_new3(int64_t icon, const char* title, const char* text);

/// q_messagebox_new4 constructs a new QMessageBox object.
///
/// ``` const char* title, const char* text, enum QMessageBox__Icon icon, int button0, int button1, int button2 ```
QMessageBox* q_messagebox_new4(const char* title, const char* text, int64_t icon, int button0, int button1, int button2);

/// q_messagebox_new5 constructs a new QMessageBox object.
///
/// ``` enum QMessageBox__Icon icon, const char* title, const char* text, int buttons ```
QMessageBox* q_messagebox_new5(int64_t icon, const char* title, const char* text, int64_t buttons);

/// q_messagebox_new6 constructs a new QMessageBox object.
///
/// ``` enum QMessageBox__Icon icon, const char* title, const char* text, int buttons, QWidget* parent ```
QMessageBox* q_messagebox_new6(int64_t icon, const char* title, const char* text, int64_t buttons, void* parent);

/// q_messagebox_new7 constructs a new QMessageBox object.
///
/// ``` enum QMessageBox__Icon icon, const char* title, const char* text, int buttons, QWidget* parent, int flags ```
QMessageBox* q_messagebox_new7(int64_t icon, const char* title, const char* text, int64_t buttons, void* parent, int64_t flags);

/// q_messagebox_new8 constructs a new QMessageBox object.
///
/// ``` const char* title, const char* text, enum QMessageBox__Icon icon, int button0, int button1, int button2, QWidget* parent ```
QMessageBox* q_messagebox_new8(const char* title, const char* text, int64_t icon, int button0, int button1, int button2, void* parent);

/// q_messagebox_new9 constructs a new QMessageBox object.
///
/// ``` const char* title, const char* text, enum QMessageBox__Icon icon, int button0, int button1, int button2, QWidget* parent, int f ```
QMessageBox* q_messagebox_new9(const char* title, const char* text, int64_t icon, int button0, int button1, int button2, void* parent, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMessageBox* self ```
const QMetaObject* q_messagebox_meta_object(void* self);

/// ``` QMessageBox* self, const char* param1 ```
void* q_messagebox_metacast(void* self, const char* param1);

/// ``` QMessageBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_messagebox_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, int32_t (*slot)(QMessageBox*, enum QMetaObject__Call, int, void*) ```
void q_messagebox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QMessageBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_messagebox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_messagebox_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
///
/// ``` QMessageBox* self, QAbstractButton* button, enum QMessageBox__ButtonRole role ```
void q_messagebox_add_button(void* self, void* button, int64_t role);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
///
/// ``` QMessageBox* self, const char* text, enum QMessageBox__ButtonRole role ```
QPushButton* q_messagebox_add_button2(void* self, const char* text, int64_t role);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
///
/// ``` QMessageBox* self, enum QMessageBox__StandardButton button ```
QPushButton* q_messagebox_add_button_with_button(void* self, int64_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#removeButton)
///
/// ``` QMessageBox* self, QAbstractButton* button ```
void q_messagebox_remove_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttons)
///
/// ``` QMessageBox* self ```
libqt_list /* of QAbstractButton* */ q_messagebox_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonRole)
///
/// ``` QMessageBox* self, QAbstractButton* button ```
int64_t q_messagebox_button_role(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setStandardButtons)
///
/// ``` QMessageBox* self, int buttons ```
void q_messagebox_set_standard_buttons(void* self, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#standardButtons)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_standard_buttons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#standardButton)
///
/// ``` QMessageBox* self, QAbstractButton* button ```
int64_t q_messagebox_standard_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#button)
///
/// ``` QMessageBox* self, enum QMessageBox__StandardButton which ```
QAbstractButton* q_messagebox_button(void* self, int64_t which);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#defaultButton)
///
/// ``` QMessageBox* self ```
QPushButton* q_messagebox_default_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setDefaultButton)
///
/// ``` QMessageBox* self, QPushButton* button ```
void q_messagebox_set_default_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setDefaultButton)
///
/// ``` QMessageBox* self, enum QMessageBox__StandardButton button ```
void q_messagebox_set_default_button_with_button(void* self, int64_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#escapeButton)
///
/// ``` QMessageBox* self ```
QAbstractButton* q_messagebox_escape_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setEscapeButton)
///
/// ``` QMessageBox* self, QAbstractButton* button ```
void q_messagebox_set_escape_button(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setEscapeButton)
///
/// ``` QMessageBox* self, enum QMessageBox__StandardButton button ```
void q_messagebox_set_escape_button_with_button(void* self, int64_t button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#clickedButton)
///
/// ``` QMessageBox* self ```
QAbstractButton* q_messagebox_clicked_button(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#text)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setText)
///
/// ``` QMessageBox* self, const char* text ```
void q_messagebox_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#icon)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setIcon)
///
/// ``` QMessageBox* self, enum QMessageBox__Icon icon ```
void q_messagebox_set_icon(void* self, int64_t icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#iconPixmap)
///
/// ``` QMessageBox* self ```
QPixmap* q_messagebox_icon_pixmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setIconPixmap)
///
/// ``` QMessageBox* self, QPixmap* pixmap ```
void q_messagebox_set_icon_pixmap(void* self, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#textFormat)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_text_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setTextFormat)
///
/// ``` QMessageBox* self, enum Qt__TextFormat format ```
void q_messagebox_set_text_format(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setTextInteractionFlags)
///
/// ``` QMessageBox* self, int flags ```
void q_messagebox_set_text_interaction_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#textInteractionFlags)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_text_interaction_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setCheckBox)
///
/// ``` QMessageBox* self, QCheckBox* cb ```
void q_messagebox_set_check_box(void* self, void* cb);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#checkBox)
///
/// ``` QMessageBox* self ```
QCheckBox* q_messagebox_check_box(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text ```
int64_t q_messagebox_information(void* parent, const char* title, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, enum QMessageBox__StandardButton button0 ```
int64_t q_messagebox_information2(void* parent, const char* title, const char* text, int64_t button0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text ```
int64_t q_messagebox_question(void* parent, const char* title, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, enum QMessageBox__StandardButton button0, enum QMessageBox__StandardButton button1 ```
int32_t q_messagebox_question2(void* parent, const char* title, const char* text, int64_t button0, int64_t button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text ```
int64_t q_messagebox_warning(void* parent, const char* title, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, enum QMessageBox__StandardButton button0, enum QMessageBox__StandardButton button1 ```
int32_t q_messagebox_warning2(void* parent, const char* title, const char* text, int64_t button0, int64_t button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text ```
int64_t q_messagebox_critical(void* parent, const char* title, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, enum QMessageBox__StandardButton button0, enum QMessageBox__StandardButton button1 ```
int32_t q_messagebox_critical2(void* parent, const char* title, const char* text, int64_t button0, int64_t button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#about)
///
/// ``` QWidget* parent, const char* title, const char* text ```
void q_messagebox_about(void* parent, const char* title, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#aboutQt)
///
/// ``` QWidget* parent ```
void q_messagebox_about_qt(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0 ```
int32_t q_messagebox_information3(void* parent, const char* title, const char* text, int button0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text ```
int32_t q_messagebox_information4(void* parent, const char* title, const char* text, const char* button0Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0 ```
int32_t q_messagebox_question3(void* parent, const char* title, const char* text, int button0);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text ```
int32_t q_messagebox_question4(void* parent, const char* title, const char* text, const char* button0Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1 ```
int32_t q_messagebox_warning3(void* parent, const char* title, const char* text, int button0, int button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text ```
int32_t q_messagebox_warning4(void* parent, const char* title, const char* text, const char* button0Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1 ```
int32_t q_messagebox_critical3(void* parent, const char* title, const char* text, int button0, int button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text ```
int32_t q_messagebox_critical4(void* parent, const char* title, const char* text, const char* button0Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonText)
///
/// ``` QMessageBox* self, int button ```
const char* q_messagebox_button_text(void* self, int button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setButtonText)
///
/// ``` QMessageBox* self, int button, const char* text ```
void q_messagebox_set_button_text(void* self, int button, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#informativeText)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_informative_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setInformativeText)
///
/// ``` QMessageBox* self, const char* text ```
void q_messagebox_set_informative_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#detailedText)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_detailed_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setDetailedText)
///
/// ``` QMessageBox* self, const char* text ```
void q_messagebox_set_detailed_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setWindowTitle)
///
/// ``` QMessageBox* self, const char* title ```
void q_messagebox_set_window_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setWindowModality)
///
/// ``` QMessageBox* self, enum Qt__WindowModality windowModality ```
void q_messagebox_set_window_modality(void* self, int64_t windowModality);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#standardIcon)
///
/// ``` enum QMessageBox__Icon icon ```
QPixmap* q_messagebox_standard_icon(int64_t icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonClicked)
///
/// ``` QMessageBox* self, QAbstractButton* button ```
void q_messagebox_button_clicked(void* self, void* button);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonClicked)
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QAbstractButton*) ```
void q_messagebox_on_button_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#event)
///
/// ``` QMessageBox* self, QEvent* e ```
bool q_messagebox_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, bool (*slot)(QMessageBox*, QEvent*) ```
void q_messagebox_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#event)
///
/// Base class method implementation
///
/// ``` QMessageBox* self, QEvent* e ```
bool q_messagebox_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#resizeEvent)
///
/// ``` QMessageBox* self, QResizeEvent* event ```
void q_messagebox_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QResizeEvent*) ```
void q_messagebox_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QMessageBox* self, QResizeEvent* event ```
void q_messagebox_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#showEvent)
///
/// ``` QMessageBox* self, QShowEvent* event ```
void q_messagebox_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#showEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QShowEvent*) ```
void q_messagebox_on_show_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#showEvent)
///
/// Base class method implementation
///
/// ``` QMessageBox* self, QShowEvent* event ```
void q_messagebox_qbase_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#closeEvent)
///
/// ``` QMessageBox* self, QCloseEvent* event ```
void q_messagebox_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QCloseEvent*) ```
void q_messagebox_on_close_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#closeEvent)
///
/// Base class method implementation
///
/// ``` QMessageBox* self, QCloseEvent* event ```
void q_messagebox_qbase_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#keyPressEvent)
///
/// ``` QMessageBox* self, QKeyEvent* event ```
void q_messagebox_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QKeyEvent*) ```
void q_messagebox_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QMessageBox* self, QKeyEvent* event ```
void q_messagebox_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#changeEvent)
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QEvent*) ```
void q_messagebox_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_qbase_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_messagebox_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_messagebox_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons ```
int64_t q_messagebox_information42(void* parent, const char* title, const char* text, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons, enum QMessageBox__StandardButton defaultButton ```
int64_t q_messagebox_information5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, enum QMessageBox__StandardButton button0, enum QMessageBox__StandardButton button1 ```
int64_t q_messagebox_information52(void* parent, const char* title, const char* text, int64_t button0, int64_t button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons ```
int64_t q_messagebox_question42(void* parent, const char* title, const char* text, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons, enum QMessageBox__StandardButton defaultButton ```
int64_t q_messagebox_question5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons ```
int64_t q_messagebox_warning42(void* parent, const char* title, const char* text, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons, enum QMessageBox__StandardButton defaultButton ```
int64_t q_messagebox_warning5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons ```
int64_t q_messagebox_critical42(void* parent, const char* title, const char* text, int64_t buttons);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons, enum QMessageBox__StandardButton defaultButton ```
int64_t q_messagebox_critical5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#aboutQt)
///
/// ``` QWidget* parent, const char* title ```
void q_messagebox_about_qt2(void* parent, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1 ```
int32_t q_messagebox_information53(void* parent, const char* title, const char* text, int button0, int button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1, int button2 ```
int32_t q_messagebox_information6(void* parent, const char* title, const char* text, int button0, int button1, int button2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text ```
int32_t q_messagebox_information54(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text ```
int32_t q_messagebox_information62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber ```
int32_t q_messagebox_information7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber ```
int32_t q_messagebox_information8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1 ```
int32_t q_messagebox_question52(void* parent, const char* title, const char* text, int button0, int button1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1, int button2 ```
int32_t q_messagebox_question6(void* parent, const char* title, const char* text, int button0, int button1, int button2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text ```
int32_t q_messagebox_question53(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text ```
int32_t q_messagebox_question62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber ```
int32_t q_messagebox_question7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber ```
int32_t q_messagebox_question8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1, int button2 ```
int32_t q_messagebox_warning6(void* parent, const char* title, const char* text, int button0, int button1, int button2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text ```
int32_t q_messagebox_warning52(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text ```
int32_t q_messagebox_warning62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber ```
int32_t q_messagebox_warning7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber ```
int32_t q_messagebox_warning8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1, int button2 ```
int32_t q_messagebox_critical6(void* parent, const char* title, const char* text, int button0, int button1, int button2);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text ```
int32_t q_messagebox_critical52(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text ```
int32_t q_messagebox_critical62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber ```
int32_t q_messagebox_critical7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber ```
int32_t q_messagebox_critical8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_result(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QMessageBox* self, bool sizeGripEnabled ```
void q_messagebox_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QMessageBox* self, bool modal ```
void q_messagebox_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QMessageBox* self, int r ```
void q_messagebox_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QMessageBox* self, int result ```
void q_messagebox_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QMessageBox* self, void (*slot)(QDialog*, int) ```
void q_messagebox_on_finished(void* self, void (*slot)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QMessageBox* self ```
void q_messagebox_accepted(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QMessageBox* self, void (*slot)(QDialog*) ```
void q_messagebox_on_accepted(void* self, void (*slot)(void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QMessageBox* self ```
void q_messagebox_rejected(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QMessageBox* self, void (*slot)(QDialog*) ```
void q_messagebox_on_rejected(void* self, void (*slot)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMessageBox* self ```
uintptr_t q_messagebox_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMessageBox* self ```
void q_messagebox_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMessageBox* self ```
uintptr_t q_messagebox_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMessageBox* self ```
uintptr_t q_messagebox_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMessageBox* self ```
QStyle* q_messagebox_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMessageBox* self, QStyle* style ```
void q_messagebox_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMessageBox* self, QWidget* param1 ```
bool q_messagebox_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMessageBox* self, bool enabled ```
void q_messagebox_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMessageBox* self, bool disabled ```
void q_messagebox_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMessageBox* self, bool windowModified ```
void q_messagebox_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMessageBox* self ```
const QRect* q_messagebox_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMessageBox* self ```
QPoint* q_messagebox_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMessageBox* self ```
QRegion* q_messagebox_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMessageBox* self, QSize* minimumSize ```
void q_messagebox_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMessageBox* self, int minw, int minh ```
void q_messagebox_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMessageBox* self, QSize* maximumSize ```
void q_messagebox_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMessageBox* self, int maxw, int maxh ```
void q_messagebox_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMessageBox* self, int minw ```
void q_messagebox_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMessageBox* self, int minh ```
void q_messagebox_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMessageBox* self, int maxw ```
void q_messagebox_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMessageBox* self, int maxh ```
void q_messagebox_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMessageBox* self, QSize* sizeIncrement ```
void q_messagebox_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMessageBox* self, int w, int h ```
void q_messagebox_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMessageBox* self, QSize* baseSize ```
void q_messagebox_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMessageBox* self, int basew, int baseh ```
void q_messagebox_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMessageBox* self, QSize* fixedSize ```
void q_messagebox_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMessageBox* self, int w, int h ```
void q_messagebox_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMessageBox* self, int w ```
void q_messagebox_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMessageBox* self, int h ```
void q_messagebox_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMessageBox* self, QPointF* param1 ```
QPointF* q_messagebox_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMessageBox* self, QPoint* param1 ```
QPoint* q_messagebox_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMessageBox* self, QPointF* param1 ```
QPointF* q_messagebox_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMessageBox* self, QPoint* param1 ```
QPoint* q_messagebox_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMessageBox* self, QPointF* param1 ```
QPointF* q_messagebox_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMessageBox* self, QPoint* param1 ```
QPoint* q_messagebox_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMessageBox* self, QPointF* param1 ```
QPointF* q_messagebox_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMessageBox* self, QPoint* param1 ```
QPoint* q_messagebox_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMessageBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_messagebox_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMessageBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_messagebox_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMessageBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_messagebox_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMessageBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_messagebox_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMessageBox* self ```
const QPalette* q_messagebox_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMessageBox* self, QPalette* palette ```
void q_messagebox_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMessageBox* self, enum QPalette__ColorRole backgroundRole ```
void q_messagebox_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMessageBox* self, enum QPalette__ColorRole foregroundRole ```
void q_messagebox_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMessageBox* self ```
const QFont* q_messagebox_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMessageBox* self, QFont* font ```
void q_messagebox_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMessageBox* self ```
QFontMetrics* q_messagebox_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMessageBox* self ```
QFontInfo* q_messagebox_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMessageBox* self ```
QCursor* q_messagebox_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMessageBox* self, QCursor* cursor ```
void q_messagebox_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMessageBox* self ```
void q_messagebox_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMessageBox* self, bool enable ```
void q_messagebox_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMessageBox* self ```
bool q_messagebox_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMessageBox* self ```
bool q_messagebox_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMessageBox* self, bool enable ```
void q_messagebox_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMessageBox* self ```
bool q_messagebox_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMessageBox* self, QBitmap* mask ```
void q_messagebox_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMessageBox* self, QRegion* mask ```
void q_messagebox_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMessageBox* self ```
QRegion* q_messagebox_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMessageBox* self ```
void q_messagebox_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPaintDevice* target ```
void q_messagebox_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPainter* painter ```
void q_messagebox_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMessageBox* self ```
QPixmap* q_messagebox_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMessageBox* self ```
QGraphicsEffect* q_messagebox_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMessageBox* self, QGraphicsEffect* effect ```
void q_messagebox_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMessageBox* self, enum Qt__GestureType typeVal ```
void q_messagebox_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMessageBox* self, enum Qt__GestureType typeVal ```
void q_messagebox_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMessageBox* self, const char* styleSheet ```
void q_messagebox_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMessageBox* self, QIcon* icon ```
void q_messagebox_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMessageBox* self ```
QIcon* q_messagebox_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMessageBox* self, const char* windowIconText ```
void q_messagebox_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMessageBox* self, const char* windowRole ```
void q_messagebox_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMessageBox* self, const char* filePath ```
void q_messagebox_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMessageBox* self, double level ```
void q_messagebox_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMessageBox* self ```
double q_messagebox_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMessageBox* self, const char* toolTip ```
void q_messagebox_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMessageBox* self, int msec ```
void q_messagebox_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMessageBox* self, const char* statusTip ```
void q_messagebox_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMessageBox* self, const char* whatsThis ```
void q_messagebox_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMessageBox* self, const char* name ```
void q_messagebox_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMessageBox* self, const char* description ```
void q_messagebox_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMessageBox* self, enum Qt__LayoutDirection direction ```
void q_messagebox_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMessageBox* self ```
void q_messagebox_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMessageBox* self, QLocale* locale ```
void q_messagebox_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMessageBox* self ```
QLocale* q_messagebox_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMessageBox* self ```
void q_messagebox_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMessageBox* self ```
void q_messagebox_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMessageBox* self ```
void q_messagebox_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMessageBox* self ```
void q_messagebox_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMessageBox* self, enum Qt__FocusReason reason ```
void q_messagebox_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMessageBox* self, enum Qt__FocusPolicy policy ```
void q_messagebox_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMessageBox* self ```
bool q_messagebox_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_messagebox_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMessageBox* self, QWidget* focusProxy ```
void q_messagebox_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMessageBox* self, enum Qt__ContextMenuPolicy policy ```
void q_messagebox_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMessageBox* self ```
void q_messagebox_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMessageBox* self, QCursor* param1 ```
void q_messagebox_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMessageBox* self ```
void q_messagebox_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMessageBox* self ```
void q_messagebox_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMessageBox* self ```
void q_messagebox_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMessageBox* self, QKeySequence* key ```
int32_t q_messagebox_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMessageBox* self, int id ```
void q_messagebox_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMessageBox* self, int id ```
void q_messagebox_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMessageBox* self, int id ```
void q_messagebox_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_messagebox_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_messagebox_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMessageBox* self ```
bool q_messagebox_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMessageBox* self, bool enable ```
void q_messagebox_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMessageBox* self ```
QGraphicsProxyWidget* q_messagebox_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMessageBox* self ```
void q_messagebox_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMessageBox* self ```
void q_messagebox_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMessageBox* self, int x, int y, int w, int h ```
void q_messagebox_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMessageBox* self, QRect* param1 ```
void q_messagebox_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMessageBox* self, QRegion* param1 ```
void q_messagebox_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMessageBox* self, int x, int y, int w, int h ```
void q_messagebox_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMessageBox* self, QRect* param1 ```
void q_messagebox_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMessageBox* self, QRegion* param1 ```
void q_messagebox_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMessageBox* self, bool hidden ```
void q_messagebox_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMessageBox* self ```
void q_messagebox_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMessageBox* self ```
void q_messagebox_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMessageBox* self ```
void q_messagebox_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMessageBox* self ```
void q_messagebox_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMessageBox* self ```
void q_messagebox_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMessageBox* self ```
void q_messagebox_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMessageBox* self ```
bool q_messagebox_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMessageBox* self ```
void q_messagebox_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMessageBox* self ```
void q_messagebox_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMessageBox* self, QWidget* param1 ```
void q_messagebox_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMessageBox* self, int x, int y ```
void q_messagebox_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMessageBox* self, QPoint* param1 ```
void q_messagebox_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMessageBox* self, int w, int h ```
void q_messagebox_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMessageBox* self, QSize* param1 ```
void q_messagebox_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMessageBox* self, int x, int y, int w, int h ```
void q_messagebox_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMessageBox* self, QRect* geometry ```
void q_messagebox_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMessageBox* self ```
char* q_messagebox_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMessageBox* self, const char* geometry ```
bool q_messagebox_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMessageBox* self ```
void q_messagebox_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMessageBox* self, QWidget* param1 ```
bool q_messagebox_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMessageBox* self, int state ```
void q_messagebox_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMessageBox* self, int state ```
void q_messagebox_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMessageBox* self ```
QSizePolicy* q_messagebox_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMessageBox* self, QSizePolicy* sizePolicy ```
void q_messagebox_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMessageBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_messagebox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMessageBox* self ```
QRegion* q_messagebox_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMessageBox* self, int left, int top, int right, int bottom ```
void q_messagebox_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMessageBox* self, QMargins* margins ```
void q_messagebox_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMessageBox* self ```
QMargins* q_messagebox_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMessageBox* self ```
QLayout* q_messagebox_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMessageBox* self, QLayout* layout ```
void q_messagebox_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMessageBox* self ```
void q_messagebox_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMessageBox* self, QWidget* parent ```
void q_messagebox_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMessageBox* self, QWidget* parent, int f ```
void q_messagebox_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMessageBox* self, int dx, int dy ```
void q_messagebox_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMessageBox* self, int dx, int dy, QRect* param3 ```
void q_messagebox_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMessageBox* self ```
bool q_messagebox_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMessageBox* self, bool on ```
void q_messagebox_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMessageBox* self, QAction* action ```
void q_messagebox_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMessageBox* self, libqt_list /* of QAction* */ actions ```
void q_messagebox_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QMessageBox* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_messagebox_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QMessageBox* self, QAction* before, QAction* action ```
void q_messagebox_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMessageBox* self, QAction* action ```
void q_messagebox_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMessageBox* self ```
libqt_list /* of QAction* */ q_messagebox_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMessageBox* self, const char* text ```
QAction* q_messagebox_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMessageBox* self, QIcon* icon, const char* text ```
QAction* q_messagebox_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMessageBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_messagebox_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMessageBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_messagebox_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMessageBox* self, int typeVal ```
void q_messagebox_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMessageBox* self, enum Qt__WindowType param1 ```
void q_messagebox_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMessageBox* self, int typeVal ```
void q_messagebox_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_messagebox_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMessageBox* self, int x, int y ```
QWidget* q_messagebox_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMessageBox* self, QPoint* p ```
QWidget* q_messagebox_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMessageBox* self, enum Qt__WidgetAttribute param1 ```
void q_messagebox_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMessageBox* self, enum Qt__WidgetAttribute param1 ```
bool q_messagebox_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMessageBox* self ```
void q_messagebox_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMessageBox* self, QWidget* child ```
bool q_messagebox_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMessageBox* self ```
bool q_messagebox_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMessageBox* self, bool enabled ```
void q_messagebox_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMessageBox* self ```
QBackingStore* q_messagebox_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMessageBox* self ```
QWindow* q_messagebox_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMessageBox* self ```
QScreen* q_messagebox_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMessageBox* self, QScreen* screen ```
void q_messagebox_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_messagebox_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMessageBox* self, const char* title ```
void q_messagebox_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMessageBox* self, void (*slot)(QWidget*, const char*) ```
void q_messagebox_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMessageBox* self, QIcon* icon ```
void q_messagebox_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMessageBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_messagebox_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMessageBox* self, const char* iconText ```
void q_messagebox_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMessageBox* self, void (*slot)(QWidget*, const char*) ```
void q_messagebox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMessageBox* self, QPoint* pos ```
void q_messagebox_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMessageBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_messagebox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMessageBox* self, int hints ```
void q_messagebox_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_messagebox_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_messagebox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_messagebox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPainter* painter, QPoint* targetOffset ```
void q_messagebox_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_messagebox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_messagebox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMessageBox* self, QRect* rectangle ```
QPixmap* q_messagebox_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMessageBox* self, enum Qt__GestureType typeVal, int flags ```
void q_messagebox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMessageBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_messagebox_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMessageBox* self, int id, bool enable ```
void q_messagebox_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMessageBox* self, int id, bool enable ```
void q_messagebox_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMessageBox* self, enum Qt__WindowType param1, bool on ```
void q_messagebox_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMessageBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_messagebox_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_messagebox_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_messagebox_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMessageBox* self, char* name ```
void q_messagebox_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMessageBox* self ```
bool q_messagebox_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMessageBox* self, bool b ```
bool q_messagebox_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMessageBox* self ```
QThread* q_messagebox_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMessageBox* self, QThread* thread ```
void q_messagebox_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMessageBox* self, int interval ```
int32_t q_messagebox_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMessageBox* self, int id ```
void q_messagebox_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMessageBox* self ```
libqt_list /* of QObject* */ q_messagebox_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMessageBox* self, QObject* filterObj ```
void q_messagebox_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMessageBox* self, QObject* obj ```
void q_messagebox_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_messagebox_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMessageBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_messagebox_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_messagebox_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_messagebox_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMessageBox* self ```
void q_messagebox_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMessageBox* self ```
void q_messagebox_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMessageBox* self, const char* name, QVariant* value ```
bool q_messagebox_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMessageBox* self, const char* name ```
QVariant* q_messagebox_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMessageBox* self ```
const char** q_messagebox_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMessageBox* self ```
QBindingStorage* q_messagebox_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMessageBox* self ```
const QBindingStorage* q_messagebox_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMessageBox* self ```
void q_messagebox_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMessageBox* self, void (*slot)(QObject*) ```
void q_messagebox_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMessageBox* self ```
QObject* q_messagebox_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMessageBox* self, const char* classname ```
bool q_messagebox_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMessageBox* self ```
void q_messagebox_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMessageBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_messagebox_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_messagebox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMessageBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_messagebox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMessageBox* self, QObject* param1 ```
void q_messagebox_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMessageBox* self, void (*slot)(QObject*, QObject*) ```
void q_messagebox_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMessageBox* self ```
bool q_messagebox_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMessageBox* self ```
double q_messagebox_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMessageBox* self ```
double q_messagebox_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_messagebox_device_pixel_ratio_f_scale();

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, bool visible ```
void q_messagebox_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, bool visible ```
void q_messagebox_qbase_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, bool) ```
void q_messagebox_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_qbase_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QSize* (*slot)() ```
void q_messagebox_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QSize* (*slot)() ```
void q_messagebox_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_open(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)() ```
void q_messagebox_on_exec(void* self, int32_t (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, int param1 ```
void q_messagebox_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, int param1 ```
void q_messagebox_qbase_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, int) ```
void q_messagebox_on_done(void* self, void (*slot)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_accept(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_reject(void* self, void (*slot)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QContextMenuEvent* param1 ```
void q_messagebox_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QContextMenuEvent* param1 ```
void q_messagebox_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QContextMenuEvent*) ```
void q_messagebox_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QObject* param1, QEvent* param2 ```
bool q_messagebox_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QObject* param1, QEvent* param2 ```
bool q_messagebox_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)(QMessageBox*, QObject*, QEvent*) ```
void q_messagebox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)() ```
void q_messagebox_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, int param1 ```
int32_t q_messagebox_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, int param1 ```
int32_t q_messagebox_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)(QMessageBox*, int) ```
void q_messagebox_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)() ```
void q_messagebox_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
QPaintEngine* q_messagebox_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
QPaintEngine* q_messagebox_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QPaintEngine* (*slot)() ```
void q_messagebox_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMouseEvent*) ```
void q_messagebox_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMouseEvent*) ```
void q_messagebox_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMouseEvent*) ```
void q_messagebox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMouseEvent*) ```
void q_messagebox_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QWheelEvent* event ```
void q_messagebox_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QWheelEvent* event ```
void q_messagebox_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QWheelEvent*) ```
void q_messagebox_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QKeyEvent* event ```
void q_messagebox_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QKeyEvent* event ```
void q_messagebox_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QKeyEvent*) ```
void q_messagebox_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QFocusEvent* event ```
void q_messagebox_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QFocusEvent* event ```
void q_messagebox_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QFocusEvent*) ```
void q_messagebox_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QFocusEvent* event ```
void q_messagebox_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QFocusEvent* event ```
void q_messagebox_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QFocusEvent*) ```
void q_messagebox_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QEnterEvent* event ```
void q_messagebox_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QEnterEvent* event ```
void q_messagebox_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QEnterEvent*) ```
void q_messagebox_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QEvent*) ```
void q_messagebox_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QPaintEvent* event ```
void q_messagebox_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QPaintEvent* event ```
void q_messagebox_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QPaintEvent*) ```
void q_messagebox_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMoveEvent* event ```
void q_messagebox_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMoveEvent* event ```
void q_messagebox_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMoveEvent*) ```
void q_messagebox_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QTabletEvent* event ```
void q_messagebox_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QTabletEvent* event ```
void q_messagebox_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QTabletEvent*) ```
void q_messagebox_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QActionEvent* event ```
void q_messagebox_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QActionEvent* event ```
void q_messagebox_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QActionEvent*) ```
void q_messagebox_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QDragEnterEvent* event ```
void q_messagebox_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QDragEnterEvent* event ```
void q_messagebox_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QDragEnterEvent*) ```
void q_messagebox_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QDragMoveEvent* event ```
void q_messagebox_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QDragMoveEvent* event ```
void q_messagebox_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QDragMoveEvent*) ```
void q_messagebox_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QDragLeaveEvent* event ```
void q_messagebox_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QDragLeaveEvent* event ```
void q_messagebox_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QDragLeaveEvent*) ```
void q_messagebox_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QDropEvent* event ```
void q_messagebox_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QDropEvent* event ```
void q_messagebox_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QDropEvent*) ```
void q_messagebox_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QHideEvent* event ```
void q_messagebox_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QHideEvent* event ```
void q_messagebox_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QHideEvent*) ```
void q_messagebox_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_messagebox_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_messagebox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)(QMessageBox*, const char*, void*, intptr_t*) ```
void q_messagebox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_messagebox_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_messagebox_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)(QMessageBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_messagebox_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QPainter* painter ```
void q_messagebox_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QPainter* painter ```
void q_messagebox_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QPainter*) ```
void q_messagebox_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QPoint* offset ```
QPaintDevice* q_messagebox_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QPoint* offset ```
QPaintDevice* q_messagebox_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QPaintDevice* (*slot)(QMessageBox*, QPoint*) ```
void q_messagebox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
QPainter* q_messagebox_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
QPainter* q_messagebox_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QPainter* (*slot)() ```
void q_messagebox_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QInputMethodEvent* param1 ```
void q_messagebox_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QInputMethodEvent* param1 ```
void q_messagebox_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QInputMethodEvent*) ```
void q_messagebox_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_messagebox_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_messagebox_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QVariant* (*slot)(QMessageBox*, enum Qt__InputMethodQuery) ```
void q_messagebox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, bool next ```
bool q_messagebox_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, bool next ```
bool q_messagebox_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)(QMessageBox*, bool) ```
void q_messagebox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QTimerEvent* event ```
void q_messagebox_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QTimerEvent* event ```
void q_messagebox_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QTimerEvent*) ```
void q_messagebox_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QChildEvent* event ```
void q_messagebox_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QChildEvent* event ```
void q_messagebox_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QChildEvent*) ```
void q_messagebox_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QEvent*) ```
void q_messagebox_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
void q_messagebox_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
void q_messagebox_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMetaMethod*) ```
void q_messagebox_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
void q_messagebox_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
void q_messagebox_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMetaMethod*) ```
void q_messagebox_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QWidget* param1 ```
void q_messagebox_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QWidget* param1 ```
void q_messagebox_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QWidget*) ```
void q_messagebox_on_adjust_position(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)() ```
void q_messagebox_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)() ```
void q_messagebox_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
QObject* q_messagebox_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
QObject* q_messagebox_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QObject* (*slot)() ```
void q_messagebox_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)() ```
void q_messagebox_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, const char* signal ```
int32_t q_messagebox_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, const char* signal ```
int32_t q_messagebox_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)(QMessageBox*, const char*) ```
void q_messagebox_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
bool q_messagebox_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
bool q_messagebox_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)(QMessageBox*, QMetaMethod*) ```
void q_messagebox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QMessageBox* self, void (*slot)(QObject*, const char*) ```
void q_messagebox_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#dtor.QMessageBox)
///
/// Delete this object from C++ memory.
///
/// ``` QMessageBox* self ```
void q_messagebox_delete(void* self);

/// https://doc.qt.io/qt-6/qmessagebox.html#types

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
