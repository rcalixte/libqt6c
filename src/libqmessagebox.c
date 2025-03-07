#include "libqabstractbutton.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcheckbox.hpp"
#include "libqcursor.hpp"
#include "libqdialog.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqpushbutton.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqmessagebox.hpp"
#include "libqmessagebox.h"

/// https://doc.qt.io/qt-6/qmessagebox.html

/// q_messagebox_new constructs a new QMessageBox object.
///
/// ``` QWidget* parent ```
QMessageBox* q_messagebox_new(void* parent) {
    return QMessageBox_new((QWidget*)parent);
}

/// q_messagebox_new2 constructs a new QMessageBox object.
///
///
QMessageBox* q_messagebox_new2() {
    return QMessageBox_new2();
}

/// q_messagebox_new3 constructs a new QMessageBox object.
///
/// ``` enum QMessageBox__Icon icon, const char* title, const char* text ```
QMessageBox* q_messagebox_new3(int64_t icon, const char* title, const char* text) {
    return QMessageBox_new3(icon, qstring(title), qstring(text));
}

/// q_messagebox_new4 constructs a new QMessageBox object.
///
/// ``` const char* title, const char* text, enum QMessageBox__Icon icon, int button0, int button1, int button2 ```
QMessageBox* q_messagebox_new4(const char* title, const char* text, int64_t icon, int button0, int button1, int button2) {
    return QMessageBox_new4(qstring(title), qstring(text), icon, button0, button1, button2);
}

/// q_messagebox_new5 constructs a new QMessageBox object.
///
/// ``` enum QMessageBox__Icon icon, const char* title, const char* text, int buttons ```
QMessageBox* q_messagebox_new5(int64_t icon, const char* title, const char* text, int64_t buttons) {
    return QMessageBox_new5(icon, qstring(title), qstring(text), buttons);
}

/// q_messagebox_new6 constructs a new QMessageBox object.
///
/// ``` enum QMessageBox__Icon icon, const char* title, const char* text, int buttons, QWidget* parent ```
QMessageBox* q_messagebox_new6(int64_t icon, const char* title, const char* text, int64_t buttons, void* parent) {
    return QMessageBox_new6(icon, qstring(title), qstring(text), buttons, (QWidget*)parent);
}

/// q_messagebox_new7 constructs a new QMessageBox object.
///
/// ``` enum QMessageBox__Icon icon, const char* title, const char* text, int buttons, QWidget* parent, int flags ```
QMessageBox* q_messagebox_new7(int64_t icon, const char* title, const char* text, int64_t buttons, void* parent, int64_t flags) {
    return QMessageBox_new7(icon, qstring(title), qstring(text), buttons, (QWidget*)parent, flags);
}

/// q_messagebox_new8 constructs a new QMessageBox object.
///
/// ``` const char* title, const char* text, enum QMessageBox__Icon icon, int button0, int button1, int button2, QWidget* parent ```
QMessageBox* q_messagebox_new8(const char* title, const char* text, int64_t icon, int button0, int button1, int button2, void* parent) {
    return QMessageBox_new8(qstring(title), qstring(text), icon, button0, button1, button2, (QWidget*)parent);
}

/// q_messagebox_new9 constructs a new QMessageBox object.
///
/// ``` const char* title, const char* text, enum QMessageBox__Icon icon, int button0, int button1, int button2, QWidget* parent, int f ```
QMessageBox* q_messagebox_new9(const char* title, const char* text, int64_t icon, int button0, int button1, int button2, void* parent, int64_t f) {
    return QMessageBox_new9(qstring(title), qstring(text), icon, button0, button1, button2, (QWidget*)parent, f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMessageBox* self ```
QMetaObject* q_messagebox_meta_object(void* self) {
    return QMessageBox_MetaObject((QMessageBox*)self);
}

/// ``` QMessageBox* self, const char* param1 ```
void* q_messagebox_metacast(void* self, const char* param1) {
    return QMessageBox_Metacast((QMessageBox*)self, param1);
}

/// ``` QMessageBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_messagebox_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMessageBox_Metacall((QMessageBox*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, int32_t (*slot)(QMessageBox*, enum QMetaObject__Call, int, void*) ```
void q_messagebox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMessageBox_OnMetacall((QMessageBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMessageBox* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_messagebox_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMessageBox_QBaseMetacall((QMessageBox*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_messagebox_tr(const char* s) {
    libqt_string _str = QMessageBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
///
/// ``` QMessageBox* self, QAbstractButton* button, enum QMessageBox__ButtonRole role ```
void q_messagebox_add_button(void* self, void* button, int64_t role) {
    QMessageBox_AddButton((QMessageBox*)self, (QAbstractButton*)button, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
///
/// ``` QMessageBox* self, const char* text, enum QMessageBox__ButtonRole role ```
QPushButton* q_messagebox_add_button2(void* self, const char* text, int64_t role) {
    return QMessageBox_AddButton2((QMessageBox*)self, qstring(text), role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
///
/// ``` QMessageBox* self, enum QMessageBox__StandardButton button ```
QPushButton* q_messagebox_add_button_with_button(void* self, int64_t button) {
    return QMessageBox_AddButtonWithButton((QMessageBox*)self, button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#removeButton)
///
/// ``` QMessageBox* self, QAbstractButton* button ```
void q_messagebox_remove_button(void* self, void* button) {
    QMessageBox_RemoveButton((QMessageBox*)self, (QAbstractButton*)button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttons)
///
/// ``` QMessageBox* self ```
libqt_list /* of QAbstractButton* */ q_messagebox_buttons(void* self) {
    libqt_list _arr = QMessageBox_Buttons((QMessageBox*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonRole)
///
/// ``` QMessageBox* self, QAbstractButton* button ```
int64_t q_messagebox_button_role(void* self, void* button) {
    return QMessageBox_ButtonRole((QMessageBox*)self, (QAbstractButton*)button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setStandardButtons)
///
/// ``` QMessageBox* self, int buttons ```
void q_messagebox_set_standard_buttons(void* self, int64_t buttons) {
    QMessageBox_SetStandardButtons((QMessageBox*)self, buttons);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#standardButtons)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_standard_buttons(void* self) {
    return QMessageBox_StandardButtons((QMessageBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#standardButton)
///
/// ``` QMessageBox* self, QAbstractButton* button ```
int64_t q_messagebox_standard_button(void* self, void* button) {
    return QMessageBox_StandardButton((QMessageBox*)self, (QAbstractButton*)button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#button)
///
/// ``` QMessageBox* self, enum QMessageBox__StandardButton which ```
QAbstractButton* q_messagebox_button(void* self, int64_t which) {
    return QMessageBox_Button((QMessageBox*)self, which);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#defaultButton)
///
/// ``` QMessageBox* self ```
QPushButton* q_messagebox_default_button(void* self) {
    return QMessageBox_DefaultButton((QMessageBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setDefaultButton)
///
/// ``` QMessageBox* self, QPushButton* button ```
void q_messagebox_set_default_button(void* self, void* button) {
    QMessageBox_SetDefaultButton((QMessageBox*)self, (QPushButton*)button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setDefaultButton)
///
/// ``` QMessageBox* self, enum QMessageBox__StandardButton button ```
void q_messagebox_set_default_button_with_button(void* self, int64_t button) {
    QMessageBox_SetDefaultButtonWithButton((QMessageBox*)self, button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#escapeButton)
///
/// ``` QMessageBox* self ```
QAbstractButton* q_messagebox_escape_button(void* self) {
    return QMessageBox_EscapeButton((QMessageBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setEscapeButton)
///
/// ``` QMessageBox* self, QAbstractButton* button ```
void q_messagebox_set_escape_button(void* self, void* button) {
    QMessageBox_SetEscapeButton((QMessageBox*)self, (QAbstractButton*)button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setEscapeButton)
///
/// ``` QMessageBox* self, enum QMessageBox__StandardButton button ```
void q_messagebox_set_escape_button_with_button(void* self, int64_t button) {
    QMessageBox_SetEscapeButtonWithButton((QMessageBox*)self, button);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#clickedButton)
///
/// ``` QMessageBox* self ```
QAbstractButton* q_messagebox_clicked_button(void* self) {
    return QMessageBox_ClickedButton((QMessageBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#text)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_text(void* self) {
    libqt_string _str = QMessageBox_Text((QMessageBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setText)
///
/// ``` QMessageBox* self, const char* text ```
void q_messagebox_set_text(void* self, const char* text) {
    QMessageBox_SetText((QMessageBox*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#icon)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_icon(void* self) {
    return QMessageBox_Icon((QMessageBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setIcon)
///
/// ``` QMessageBox* self, enum QMessageBox__Icon icon ```
void q_messagebox_set_icon(void* self, int64_t icon) {
    QMessageBox_SetIcon((QMessageBox*)self, icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#iconPixmap)
///
/// ``` QMessageBox* self ```
QPixmap* q_messagebox_icon_pixmap(void* self) {
    return QMessageBox_IconPixmap((QMessageBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setIconPixmap)
///
/// ``` QMessageBox* self, QPixmap* pixmap ```
void q_messagebox_set_icon_pixmap(void* self, void* pixmap) {
    QMessageBox_SetIconPixmap((QMessageBox*)self, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#textFormat)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_text_format(void* self) {
    return QMessageBox_TextFormat((QMessageBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setTextFormat)
///
/// ``` QMessageBox* self, enum Qt__TextFormat format ```
void q_messagebox_set_text_format(void* self, int64_t format) {
    QMessageBox_SetTextFormat((QMessageBox*)self, format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setTextInteractionFlags)
///
/// ``` QMessageBox* self, int flags ```
void q_messagebox_set_text_interaction_flags(void* self, int64_t flags) {
    QMessageBox_SetTextInteractionFlags((QMessageBox*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#textInteractionFlags)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_text_interaction_flags(void* self) {
    return QMessageBox_TextInteractionFlags((QMessageBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setCheckBox)
///
/// ``` QMessageBox* self, QCheckBox* cb ```
void q_messagebox_set_check_box(void* self, void* cb) {
    QMessageBox_SetCheckBox((QMessageBox*)self, (QCheckBox*)cb);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#checkBox)
///
/// ``` QMessageBox* self ```
QCheckBox* q_messagebox_check_box(void* self) {
    return QMessageBox_CheckBox((QMessageBox*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text ```
int64_t q_messagebox_information(void* parent, const char* title, const char* text) {
    return QMessageBox_Information((QWidget*)parent, qstring(title), qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, enum QMessageBox__StandardButton button0 ```
int64_t q_messagebox_information2(void* parent, const char* title, const char* text, int64_t button0) {
    return QMessageBox_Information2((QWidget*)parent, qstring(title), qstring(text), button0);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text ```
int64_t q_messagebox_question(void* parent, const char* title, const char* text) {
    return QMessageBox_Question((QWidget*)parent, qstring(title), qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, enum QMessageBox__StandardButton button0, enum QMessageBox__StandardButton button1 ```
int32_t q_messagebox_question2(void* parent, const char* title, const char* text, int64_t button0, int64_t button1) {
    return QMessageBox_Question2((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text ```
int64_t q_messagebox_warning(void* parent, const char* title, const char* text) {
    return QMessageBox_Warning((QWidget*)parent, qstring(title), qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, enum QMessageBox__StandardButton button0, enum QMessageBox__StandardButton button1 ```
int32_t q_messagebox_warning2(void* parent, const char* title, const char* text, int64_t button0, int64_t button1) {
    return QMessageBox_Warning2((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text ```
int64_t q_messagebox_critical(void* parent, const char* title, const char* text) {
    return QMessageBox_Critical((QWidget*)parent, qstring(title), qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, enum QMessageBox__StandardButton button0, enum QMessageBox__StandardButton button1 ```
int32_t q_messagebox_critical2(void* parent, const char* title, const char* text, int64_t button0, int64_t button1) {
    return QMessageBox_Critical2((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#about)
///
/// ``` QWidget* parent, const char* title, const char* text ```
void q_messagebox_about(void* parent, const char* title, const char* text) {
    QMessageBox_About((QWidget*)parent, qstring(title), qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#aboutQt)
///
/// ``` QWidget* parent ```
void q_messagebox_about_qt(void* parent) {
    QMessageBox_AboutQt((QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0 ```
int32_t q_messagebox_information3(void* parent, const char* title, const char* text, int button0) {
    return QMessageBox_Information3((QWidget*)parent, qstring(title), qstring(text), button0);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text ```
int32_t q_messagebox_information4(void* parent, const char* title, const char* text, const char* button0Text) {
    return QMessageBox_Information4((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0 ```
int32_t q_messagebox_question3(void* parent, const char* title, const char* text, int button0) {
    return QMessageBox_Question3((QWidget*)parent, qstring(title), qstring(text), button0);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text ```
int32_t q_messagebox_question4(void* parent, const char* title, const char* text, const char* button0Text) {
    return QMessageBox_Question4((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1 ```
int32_t q_messagebox_warning3(void* parent, const char* title, const char* text, int button0, int button1) {
    return QMessageBox_Warning3((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text ```
int32_t q_messagebox_warning4(void* parent, const char* title, const char* text, const char* button0Text) {
    return QMessageBox_Warning4((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1 ```
int32_t q_messagebox_critical3(void* parent, const char* title, const char* text, int button0, int button1) {
    return QMessageBox_Critical3((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text ```
int32_t q_messagebox_critical4(void* parent, const char* title, const char* text, const char* button0Text) {
    return QMessageBox_Critical4((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonText)
///
/// ``` QMessageBox* self, int button ```
const char* q_messagebox_button_text(void* self, int button) {
    libqt_string _str = QMessageBox_ButtonText((QMessageBox*)self, button);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setButtonText)
///
/// ``` QMessageBox* self, int button, const char* text ```
void q_messagebox_set_button_text(void* self, int button, const char* text) {
    QMessageBox_SetButtonText((QMessageBox*)self, button, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#informativeText)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_informative_text(void* self) {
    libqt_string _str = QMessageBox_InformativeText((QMessageBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setInformativeText)
///
/// ``` QMessageBox* self, const char* text ```
void q_messagebox_set_informative_text(void* self, const char* text) {
    QMessageBox_SetInformativeText((QMessageBox*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#detailedText)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_detailed_text(void* self) {
    libqt_string _str = QMessageBox_DetailedText((QMessageBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setDetailedText)
///
/// ``` QMessageBox* self, const char* text ```
void q_messagebox_set_detailed_text(void* self, const char* text) {
    QMessageBox_SetDetailedText((QMessageBox*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setWindowTitle)
///
/// ``` QMessageBox* self, const char* title ```
void q_messagebox_set_window_title(void* self, const char* title) {
    QMessageBox_SetWindowTitle((QMessageBox*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#setWindowModality)
///
/// ``` QMessageBox* self, enum Qt__WindowModality windowModality ```
void q_messagebox_set_window_modality(void* self, int64_t windowModality) {
    QMessageBox_SetWindowModality((QMessageBox*)self, windowModality);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#standardIcon)
///
/// ``` enum QMessageBox__Icon icon ```
QPixmap* q_messagebox_standard_icon(int64_t icon) {
    return QMessageBox_StandardIcon(icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#buttonClicked)
///
/// ``` QMessageBox* self, QAbstractButton* button ```
void q_messagebox_button_clicked(void* self, void* button) {
    QMessageBox_ButtonClicked((QMessageBox*)self, (QAbstractButton*)button);
}

/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QAbstractButton*) ```
void q_messagebox_on_button_clicked(void* self, void (*slot)(void*, void*)) {
    QMessageBox_Connect_ButtonClicked((QMessageBox*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#event)
///
/// ``` QMessageBox* self, QEvent* e ```
bool q_messagebox_event(void* self, void* e) {
    return QMessageBox_Event((QMessageBox*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, bool (*slot)(QMessageBox*, QEvent*) ```
void q_messagebox_on_event(void* self, bool (*slot)(void*, void*)) {
    QMessageBox_OnEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMessageBox* self, QEvent* e ```
bool q_messagebox_qbase_event(void* self, void* e) {
    return QMessageBox_QBaseEvent((QMessageBox*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#resizeEvent)
///
/// ``` QMessageBox* self, QResizeEvent* event ```
void q_messagebox_resize_event(void* self, void* event) {
    QMessageBox_ResizeEvent((QMessageBox*)self, (QResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QResizeEvent*) ```
void q_messagebox_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnResizeEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMessageBox* self, QResizeEvent* event ```
void q_messagebox_qbase_resize_event(void* self, void* event) {
    QMessageBox_QBaseResizeEvent((QMessageBox*)self, (QResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#showEvent)
///
/// ``` QMessageBox* self, QShowEvent* event ```
void q_messagebox_show_event(void* self, void* event) {
    QMessageBox_ShowEvent((QMessageBox*)self, (QShowEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QShowEvent*) ```
void q_messagebox_on_show_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnShowEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMessageBox* self, QShowEvent* event ```
void q_messagebox_qbase_show_event(void* self, void* event) {
    QMessageBox_QBaseShowEvent((QMessageBox*)self, (QShowEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#closeEvent)
///
/// ``` QMessageBox* self, QCloseEvent* event ```
void q_messagebox_close_event(void* self, void* event) {
    QMessageBox_CloseEvent((QMessageBox*)self, (QCloseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QCloseEvent*) ```
void q_messagebox_on_close_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnCloseEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMessageBox* self, QCloseEvent* event ```
void q_messagebox_qbase_close_event(void* self, void* event) {
    QMessageBox_QBaseCloseEvent((QMessageBox*)self, (QCloseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#keyPressEvent)
///
/// ``` QMessageBox* self, QKeyEvent* event ```
void q_messagebox_key_press_event(void* self, void* event) {
    QMessageBox_KeyPressEvent((QMessageBox*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QKeyEvent*) ```
void q_messagebox_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnKeyPressEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMessageBox* self, QKeyEvent* event ```
void q_messagebox_qbase_key_press_event(void* self, void* event) {
    QMessageBox_QBaseKeyPressEvent((QMessageBox*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#changeEvent)
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_change_event(void* self, void* event) {
    QMessageBox_ChangeEvent((QMessageBox*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QEvent*) ```
void q_messagebox_on_change_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnChangeEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_qbase_change_event(void* self, void* event) {
    QMessageBox_QBaseChangeEvent((QMessageBox*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_messagebox_tr2(const char* s, const char* c) {
    libqt_string _str = QMessageBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_messagebox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMessageBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons ```
int64_t q_messagebox_information42(void* parent, const char* title, const char* text, int64_t buttons) {
    return QMessageBox_Information42((QWidget*)parent, qstring(title), qstring(text), buttons);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons, enum QMessageBox__StandardButton defaultButton ```
int64_t q_messagebox_information5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton) {
    return QMessageBox_Information5((QWidget*)parent, qstring(title), qstring(text), buttons, defaultButton);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, enum QMessageBox__StandardButton button0, enum QMessageBox__StandardButton button1 ```
int64_t q_messagebox_information52(void* parent, const char* title, const char* text, int64_t button0, int64_t button1) {
    return QMessageBox_Information52((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons ```
int64_t q_messagebox_question42(void* parent, const char* title, const char* text, int64_t buttons) {
    return QMessageBox_Question42((QWidget*)parent, qstring(title), qstring(text), buttons);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons, enum QMessageBox__StandardButton defaultButton ```
int64_t q_messagebox_question5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton) {
    return QMessageBox_Question5((QWidget*)parent, qstring(title), qstring(text), buttons, defaultButton);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons ```
int64_t q_messagebox_warning42(void* parent, const char* title, const char* text, int64_t buttons) {
    return QMessageBox_Warning42((QWidget*)parent, qstring(title), qstring(text), buttons);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons, enum QMessageBox__StandardButton defaultButton ```
int64_t q_messagebox_warning5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton) {
    return QMessageBox_Warning5((QWidget*)parent, qstring(title), qstring(text), buttons, defaultButton);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons ```
int64_t q_messagebox_critical42(void* parent, const char* title, const char* text, int64_t buttons) {
    return QMessageBox_Critical42((QWidget*)parent, qstring(title), qstring(text), buttons);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, int buttons, enum QMessageBox__StandardButton defaultButton ```
int64_t q_messagebox_critical5(void* parent, const char* title, const char* text, int64_t buttons, int64_t defaultButton) {
    return QMessageBox_Critical5((QWidget*)parent, qstring(title), qstring(text), buttons, defaultButton);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#aboutQt)
///
/// ``` QWidget* parent, const char* title ```
void q_messagebox_about_qt2(void* parent, const char* title) {
    QMessageBox_AboutQt2((QWidget*)parent, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1 ```
int32_t q_messagebox_information53(void* parent, const char* title, const char* text, int button0, int button1) {
    return QMessageBox_Information53((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1, int button2 ```
int32_t q_messagebox_information6(void* parent, const char* title, const char* text, int button0, int button1, int button2) {
    return QMessageBox_Information6((QWidget*)parent, qstring(title), qstring(text), button0, button1, button2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text ```
int32_t q_messagebox_information54(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text) {
    return QMessageBox_Information54((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text ```
int32_t q_messagebox_information62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text) {
    return QMessageBox_Information62((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber ```
int32_t q_messagebox_information7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber) {
    return QMessageBox_Information7((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#information)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber ```
int32_t q_messagebox_information8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    return QMessageBox_Information8((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber, escapeButtonNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1 ```
int32_t q_messagebox_question52(void* parent, const char* title, const char* text, int button0, int button1) {
    return QMessageBox_Question52((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1, int button2 ```
int32_t q_messagebox_question6(void* parent, const char* title, const char* text, int button0, int button1, int button2) {
    return QMessageBox_Question6((QWidget*)parent, qstring(title), qstring(text), button0, button1, button2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text ```
int32_t q_messagebox_question53(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text) {
    return QMessageBox_Question53((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text ```
int32_t q_messagebox_question62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text) {
    return QMessageBox_Question62((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber ```
int32_t q_messagebox_question7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber) {
    return QMessageBox_Question7((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#question)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber ```
int32_t q_messagebox_question8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    return QMessageBox_Question8((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber, escapeButtonNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1, int button2 ```
int32_t q_messagebox_warning6(void* parent, const char* title, const char* text, int button0, int button1, int button2) {
    return QMessageBox_Warning6((QWidget*)parent, qstring(title), qstring(text), button0, button1, button2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text ```
int32_t q_messagebox_warning52(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text) {
    return QMessageBox_Warning52((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text ```
int32_t q_messagebox_warning62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text) {
    return QMessageBox_Warning62((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber ```
int32_t q_messagebox_warning7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber) {
    return QMessageBox_Warning7((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#warning)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber ```
int32_t q_messagebox_warning8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    return QMessageBox_Warning8((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber, escapeButtonNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, int button0, int button1, int button2 ```
int32_t q_messagebox_critical6(void* parent, const char* title, const char* text, int button0, int button1, int button2) {
    return QMessageBox_Critical6((QWidget*)parent, qstring(title), qstring(text), button0, button1, button2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text ```
int32_t q_messagebox_critical52(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text) {
    return QMessageBox_Critical52((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text ```
int32_t q_messagebox_critical62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text) {
    return QMessageBox_Critical62((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber ```
int32_t q_messagebox_critical7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber) {
    return QMessageBox_Critical7((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmessagebox.html#critical)
///
/// ``` QWidget* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber ```
int32_t q_messagebox_critical8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    return QMessageBox_Critical8((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber, escapeButtonNumber);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// ``` QMessageBox* self, bool sizeGripEnabled ```
void q_messagebox_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// ``` QMessageBox* self, bool modal ```
void q_messagebox_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// ``` QMessageBox* self, int r ```
void q_messagebox_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// ``` QMessageBox* self, int result ```
void q_messagebox_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

/// Inherited from QDialog
///
/// ``` QMessageBox* self, void (*slot)(QDialog*, int) ```
void q_messagebox_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// ``` QMessageBox* self ```
void q_messagebox_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QMessageBox* self, void (*slot)(QDialog*) ```
void q_messagebox_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// ``` QMessageBox* self ```
void q_messagebox_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

/// Inherited from QDialog
///
/// ``` QMessageBox* self, void (*slot)(QDialog*) ```
void q_messagebox_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMessageBox* self ```
uintptr_t q_messagebox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMessageBox* self ```
void q_messagebox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMessageBox* self ```
uintptr_t q_messagebox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMessageBox* self ```
uintptr_t q_messagebox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMessageBox* self ```
QStyle* q_messagebox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMessageBox* self, QStyle* style ```
void q_messagebox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMessageBox* self, QWidget* param1 ```
bool q_messagebox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMessageBox* self, bool enabled ```
void q_messagebox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMessageBox* self, bool disabled ```
void q_messagebox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMessageBox* self, bool windowModified ```
void q_messagebox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMessageBox* self ```
QPoint* q_messagebox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMessageBox* self ```
QRegion* q_messagebox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMessageBox* self, QSize* minimumSize ```
void q_messagebox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMessageBox* self, int minw, int minh ```
void q_messagebox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMessageBox* self, QSize* maximumSize ```
void q_messagebox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMessageBox* self, int maxw, int maxh ```
void q_messagebox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMessageBox* self, int minw ```
void q_messagebox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMessageBox* self, int minh ```
void q_messagebox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMessageBox* self, int maxw ```
void q_messagebox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMessageBox* self, int maxh ```
void q_messagebox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMessageBox* self, QSize* sizeIncrement ```
void q_messagebox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMessageBox* self, int w, int h ```
void q_messagebox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMessageBox* self, QSize* baseSize ```
void q_messagebox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMessageBox* self, int basew, int baseh ```
void q_messagebox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMessageBox* self, QSize* fixedSize ```
void q_messagebox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMessageBox* self, int w, int h ```
void q_messagebox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMessageBox* self, int w ```
void q_messagebox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMessageBox* self, int h ```
void q_messagebox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMessageBox* self, QPointF* param1 ```
QPointF* q_messagebox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMessageBox* self, QPoint* param1 ```
QPoint* q_messagebox_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMessageBox* self, QPointF* param1 ```
QPointF* q_messagebox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMessageBox* self, QPoint* param1 ```
QPoint* q_messagebox_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMessageBox* self, QPointF* param1 ```
QPointF* q_messagebox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMessageBox* self, QPoint* param1 ```
QPoint* q_messagebox_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMessageBox* self, QPointF* param1 ```
QPointF* q_messagebox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMessageBox* self, QPoint* param1 ```
QPoint* q_messagebox_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMessageBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_messagebox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMessageBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_messagebox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMessageBox* self, QWidget* param1, QPointF* param2 ```
QPointF* q_messagebox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMessageBox* self, QWidget* param1, QPoint* param2 ```
QPoint* q_messagebox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMessageBox* self ```
QPalette* q_messagebox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMessageBox* self, QPalette* palette ```
void q_messagebox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMessageBox* self, enum QPalette__ColorRole backgroundRole ```
void q_messagebox_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMessageBox* self, enum QPalette__ColorRole foregroundRole ```
void q_messagebox_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMessageBox* self ```
QFont* q_messagebox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMessageBox* self, QFont* font ```
void q_messagebox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMessageBox* self ```
QFontMetrics* q_messagebox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMessageBox* self ```
QFontInfo* q_messagebox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMessageBox* self ```
QCursor* q_messagebox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMessageBox* self, QCursor* cursor ```
void q_messagebox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMessageBox* self ```
void q_messagebox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMessageBox* self, bool enable ```
void q_messagebox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMessageBox* self ```
bool q_messagebox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMessageBox* self ```
bool q_messagebox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMessageBox* self, bool enable ```
void q_messagebox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMessageBox* self ```
bool q_messagebox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMessageBox* self, QBitmap* mask ```
void q_messagebox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMessageBox* self, QRegion* mask ```
void q_messagebox_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMessageBox* self ```
QRegion* q_messagebox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMessageBox* self ```
void q_messagebox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPaintDevice* target ```
void q_messagebox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPainter* painter ```
void q_messagebox_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMessageBox* self ```
QPixmap* q_messagebox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMessageBox* self ```
QGraphicsEffect* q_messagebox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMessageBox* self, QGraphicsEffect* effect ```
void q_messagebox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMessageBox* self, enum Qt__GestureType typeVal ```
void q_messagebox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMessageBox* self, enum Qt__GestureType typeVal ```
void q_messagebox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMessageBox* self, const char* styleSheet ```
void q_messagebox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMessageBox* self, QIcon* icon ```
void q_messagebox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMessageBox* self ```
QIcon* q_messagebox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMessageBox* self, const char* windowIconText ```
void q_messagebox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMessageBox* self, const char* windowRole ```
void q_messagebox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMessageBox* self, const char* filePath ```
void q_messagebox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMessageBox* self, double level ```
void q_messagebox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMessageBox* self ```
double q_messagebox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMessageBox* self, const char* toolTip ```
void q_messagebox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMessageBox* self, int msec ```
void q_messagebox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMessageBox* self, const char* statusTip ```
void q_messagebox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMessageBox* self, const char* whatsThis ```
void q_messagebox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMessageBox* self, const char* name ```
void q_messagebox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMessageBox* self, const char* description ```
void q_messagebox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMessageBox* self, enum Qt__LayoutDirection direction ```
void q_messagebox_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMessageBox* self ```
void q_messagebox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMessageBox* self, QLocale* locale ```
void q_messagebox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMessageBox* self ```
QLocale* q_messagebox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMessageBox* self ```
void q_messagebox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMessageBox* self ```
void q_messagebox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMessageBox* self ```
void q_messagebox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMessageBox* self ```
void q_messagebox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMessageBox* self, enum Qt__FocusReason reason ```
void q_messagebox_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMessageBox* self, enum Qt__FocusPolicy policy ```
void q_messagebox_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMessageBox* self ```
bool q_messagebox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_messagebox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMessageBox* self, QWidget* focusProxy ```
void q_messagebox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMessageBox* self, enum Qt__ContextMenuPolicy policy ```
void q_messagebox_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMessageBox* self ```
void q_messagebox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMessageBox* self, QCursor* param1 ```
void q_messagebox_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMessageBox* self ```
void q_messagebox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMessageBox* self ```
void q_messagebox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMessageBox* self ```
void q_messagebox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMessageBox* self, QKeySequence* key ```
int32_t q_messagebox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMessageBox* self, int id ```
void q_messagebox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMessageBox* self, int id ```
void q_messagebox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMessageBox* self, int id ```
void q_messagebox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_messagebox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_messagebox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMessageBox* self ```
bool q_messagebox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMessageBox* self, bool enable ```
void q_messagebox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMessageBox* self ```
QGraphicsProxyWidget* q_messagebox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMessageBox* self ```
void q_messagebox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMessageBox* self ```
void q_messagebox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMessageBox* self, int x, int y, int w, int h ```
void q_messagebox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMessageBox* self, QRect* param1 ```
void q_messagebox_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMessageBox* self, QRegion* param1 ```
void q_messagebox_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMessageBox* self, int x, int y, int w, int h ```
void q_messagebox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMessageBox* self, QRect* param1 ```
void q_messagebox_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMessageBox* self, QRegion* param1 ```
void q_messagebox_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMessageBox* self, bool hidden ```
void q_messagebox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMessageBox* self ```
void q_messagebox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMessageBox* self ```
void q_messagebox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMessageBox* self ```
void q_messagebox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMessageBox* self ```
void q_messagebox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMessageBox* self ```
void q_messagebox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMessageBox* self ```
void q_messagebox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMessageBox* self ```
bool q_messagebox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMessageBox* self ```
void q_messagebox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMessageBox* self ```
void q_messagebox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMessageBox* self, QWidget* param1 ```
void q_messagebox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMessageBox* self, int x, int y ```
void q_messagebox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMessageBox* self, QPoint* param1 ```
void q_messagebox_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMessageBox* self, int w, int h ```
void q_messagebox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMessageBox* self, QSize* param1 ```
void q_messagebox_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMessageBox* self, int x, int y, int w, int h ```
void q_messagebox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMessageBox* self, QRect* geometry ```
void q_messagebox_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMessageBox* self ```
char* q_messagebox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMessageBox* self, const char* geometry ```
bool q_messagebox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMessageBox* self ```
void q_messagebox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMessageBox* self, QWidget* param1 ```
bool q_messagebox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMessageBox* self, int state ```
void q_messagebox_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMessageBox* self, int state ```
void q_messagebox_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMessageBox* self ```
QSizePolicy* q_messagebox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMessageBox* self, QSizePolicy* sizePolicy ```
void q_messagebox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMessageBox* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_messagebox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMessageBox* self ```
QRegion* q_messagebox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMessageBox* self, int left, int top, int right, int bottom ```
void q_messagebox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMessageBox* self, QMargins* margins ```
void q_messagebox_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMessageBox* self ```
QMargins* q_messagebox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMessageBox* self ```
QRect* q_messagebox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMessageBox* self ```
QLayout* q_messagebox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMessageBox* self, QLayout* layout ```
void q_messagebox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMessageBox* self ```
void q_messagebox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMessageBox* self, QWidget* parent ```
void q_messagebox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMessageBox* self, QWidget* parent, int f ```
void q_messagebox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMessageBox* self, int dx, int dy ```
void q_messagebox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMessageBox* self, int dx, int dy, QRect* param3 ```
void q_messagebox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMessageBox* self ```
bool q_messagebox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMessageBox* self, bool on ```
void q_messagebox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMessageBox* self, QAction* action ```
void q_messagebox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMessageBox* self, QAction* actions[] ```
void q_messagebox_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QMessageBox* self, QAction* before, QAction* actions[] ```
void q_messagebox_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QMessageBox* self, QAction* before, QAction* action ```
void q_messagebox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMessageBox* self, QAction* action ```
void q_messagebox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMessageBox* self ```
libqt_list /* of QAction* */ q_messagebox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMessageBox* self, const char* text ```
QAction* q_messagebox_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMessageBox* self, QIcon* icon, const char* text ```
QAction* q_messagebox_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMessageBox* self, const char* text, QKeySequence* shortcut ```
QAction* q_messagebox_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMessageBox* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_messagebox_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMessageBox* self ```
QWidget* q_messagebox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMessageBox* self, int typeVal ```
void q_messagebox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMessageBox* self, enum Qt__WindowType param1 ```
void q_messagebox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMessageBox* self, int typeVal ```
void q_messagebox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_messagebox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMessageBox* self, int x, int y ```
QWidget* q_messagebox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMessageBox* self, QPoint* p ```
QWidget* q_messagebox_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMessageBox* self, enum Qt__WidgetAttribute param1 ```
void q_messagebox_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMessageBox* self, enum Qt__WidgetAttribute param1 ```
bool q_messagebox_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMessageBox* self ```
void q_messagebox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMessageBox* self, QWidget* child ```
bool q_messagebox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMessageBox* self ```
bool q_messagebox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMessageBox* self, bool enabled ```
void q_messagebox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMessageBox* self ```
QBackingStore* q_messagebox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMessageBox* self ```
QWindow* q_messagebox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMessageBox* self ```
QScreen* q_messagebox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMessageBox* self, QScreen* screen ```
void q_messagebox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_messagebox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMessageBox* self, const char* title ```
void q_messagebox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QMessageBox* self, void (*slot)(QWidget*, const char*) ```
void q_messagebox_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMessageBox* self, QIcon* icon ```
void q_messagebox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QMessageBox* self, void (*slot)(QWidget*, QIcon*) ```
void q_messagebox_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMessageBox* self, const char* iconText ```
void q_messagebox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QMessageBox* self, void (*slot)(QWidget*, const char*) ```
void q_messagebox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMessageBox* self, QPoint* pos ```
void q_messagebox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QMessageBox* self, void (*slot)(QWidget*, QPoint*) ```
void q_messagebox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMessageBox* self ```
int64_t q_messagebox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMessageBox* self, int hints ```
void q_messagebox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPaintDevice* target, QPoint* targetOffset ```
void q_messagebox_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_messagebox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_messagebox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPainter* painter, QPoint* targetOffset ```
void q_messagebox_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_messagebox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMessageBox* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_messagebox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMessageBox* self, QRect* rectangle ```
QPixmap* q_messagebox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMessageBox* self, enum Qt__GestureType typeVal, int flags ```
void q_messagebox_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMessageBox* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_messagebox_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMessageBox* self, int id, bool enable ```
void q_messagebox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMessageBox* self, int id, bool enable ```
void q_messagebox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMessageBox* self, enum Qt__WindowType param1, bool on ```
void q_messagebox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMessageBox* self, enum Qt__WidgetAttribute param1, bool on ```
void q_messagebox_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_messagebox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_messagebox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMessageBox* self ```
const char* q_messagebox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMessageBox* self, const char* name ```
void q_messagebox_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMessageBox* self ```
bool q_messagebox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMessageBox* self ```
bool q_messagebox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMessageBox* self, bool b ```
bool q_messagebox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMessageBox* self ```
QThread* q_messagebox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMessageBox* self, QThread* thread ```
void q_messagebox_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMessageBox* self, int interval ```
int32_t q_messagebox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMessageBox* self, int id ```
void q_messagebox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMessageBox* self ```
libqt_list /* of QObject* */ q_messagebox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMessageBox* self, QObject* filterObj ```
void q_messagebox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMessageBox* self, QObject* obj ```
void q_messagebox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_messagebox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMessageBox* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_messagebox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_messagebox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_messagebox_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMessageBox* self ```
void q_messagebox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMessageBox* self ```
void q_messagebox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMessageBox* self, const char* name, QVariant* value ```
bool q_messagebox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMessageBox* self, const char* name ```
QVariant* q_messagebox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMessageBox* self ```
const char** q_messagebox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMessageBox* self ```
QBindingStorage* q_messagebox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMessageBox* self ```
QBindingStorage* q_messagebox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMessageBox* self ```
void q_messagebox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMessageBox* self, void (*slot)(QObject*) ```
void q_messagebox_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMessageBox* self ```
QObject* q_messagebox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMessageBox* self, const char* classname ```
bool q_messagebox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMessageBox* self ```
void q_messagebox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMessageBox* self, int interval, enum Qt__TimerType timerType ```
int32_t q_messagebox_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_messagebox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMessageBox* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_messagebox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMessageBox* self, QObject* param1 ```
void q_messagebox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMessageBox* self, void (*slot)(QObject*, QObject*) ```
void q_messagebox_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMessageBox* self ```
bool q_messagebox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMessageBox* self ```
double q_messagebox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMessageBox* self ```
double q_messagebox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_messagebox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, bool visible ```
void q_messagebox_set_visible(void* self, bool visible) {
    QMessageBox_SetVisible((QMessageBox*)self, visible);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, bool visible ```
void q_messagebox_qbase_set_visible(void* self, bool visible) {
    QMessageBox_QBaseSetVisible((QMessageBox*)self, visible);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, bool) ```
void q_messagebox_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QMessageBox_OnSetVisible((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_size_hint(void* self) {
    return QMessageBox_SizeHint((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_qbase_size_hint(void* self) {
    return QMessageBox_QBaseSizeHint((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QSize* (*slot)() ```
void q_messagebox_on_size_hint(void* self, QSize* (*slot)()) {
    QMessageBox_OnSizeHint((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_minimum_size_hint(void* self) {
    return QMessageBox_MinimumSizeHint((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
QSize* q_messagebox_qbase_minimum_size_hint(void* self) {
    return QMessageBox_QBaseMinimumSizeHint((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QSize* (*slot)() ```
void q_messagebox_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QMessageBox_OnMinimumSizeHint((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_open(void* self) {
    QMessageBox_Open((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_open(void* self) {
    QMessageBox_QBaseOpen((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_open(void* self, void (*slot)()) {
    QMessageBox_OnOpen((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_exec(void* self) {
    return QMessageBox_Exec((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_qbase_exec(void* self) {
    return QMessageBox_QBaseExec((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)() ```
void q_messagebox_on_exec(void* self, int32_t (*slot)()) {
    QMessageBox_OnExec((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, int param1 ```
void q_messagebox_done(void* self, int param1) {
    QMessageBox_Done((QMessageBox*)self, param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, int param1 ```
void q_messagebox_qbase_done(void* self, int param1) {
    QMessageBox_QBaseDone((QMessageBox*)self, param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, int) ```
void q_messagebox_on_done(void* self, void (*slot)(void*, int)) {
    QMessageBox_OnDone((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_accept(void* self) {
    QMessageBox_Accept((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_accept(void* self) {
    QMessageBox_QBaseAccept((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_accept(void* self, void (*slot)()) {
    QMessageBox_OnAccept((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_reject(void* self) {
    QMessageBox_Reject((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_reject(void* self) {
    QMessageBox_QBaseReject((QMessageBox*)self);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_reject(void* self, void (*slot)()) {
    QMessageBox_OnReject((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QContextMenuEvent* param1 ```
void q_messagebox_context_menu_event(void* self, void* param1) {
    QMessageBox_ContextMenuEvent((QMessageBox*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QContextMenuEvent* param1 ```
void q_messagebox_qbase_context_menu_event(void* self, void* param1) {
    QMessageBox_QBaseContextMenuEvent((QMessageBox*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QContextMenuEvent*) ```
void q_messagebox_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnContextMenuEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QObject* param1, QEvent* param2 ```
bool q_messagebox_event_filter(void* self, void* param1, void* param2) {
    return QMessageBox_EventFilter((QMessageBox*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QObject* param1, QEvent* param2 ```
bool q_messagebox_qbase_event_filter(void* self, void* param1, void* param2) {
    return QMessageBox_QBaseEventFilter((QMessageBox*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)(QMessageBox*, QObject*, QEvent*) ```
void q_messagebox_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMessageBox_OnEventFilter((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_dev_type(void* self) {
    return QMessageBox_DevType((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_qbase_dev_type(void* self) {
    return QMessageBox_QBaseDevType((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)() ```
void q_messagebox_on_dev_type(void* self, int32_t (*slot)()) {
    QMessageBox_OnDevType((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, int param1 ```
int32_t q_messagebox_height_for_width(void* self, int param1) {
    return QMessageBox_HeightForWidth((QMessageBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, int param1 ```
int32_t q_messagebox_qbase_height_for_width(void* self, int param1) {
    return QMessageBox_QBaseHeightForWidth((QMessageBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)(QMessageBox*, int) ```
void q_messagebox_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QMessageBox_OnHeightForWidth((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_has_height_for_width(void* self) {
    return QMessageBox_HasHeightForWidth((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_qbase_has_height_for_width(void* self) {
    return QMessageBox_QBaseHasHeightForWidth((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)() ```
void q_messagebox_on_has_height_for_width(void* self, bool (*slot)()) {
    QMessageBox_OnHasHeightForWidth((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
QPaintEngine* q_messagebox_paint_engine(void* self) {
    return QMessageBox_PaintEngine((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
QPaintEngine* q_messagebox_qbase_paint_engine(void* self) {
    return QMessageBox_QBasePaintEngine((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QPaintEngine* (*slot)() ```
void q_messagebox_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QMessageBox_OnPaintEngine((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_mouse_press_event(void* self, void* event) {
    QMessageBox_MousePressEvent((QMessageBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_qbase_mouse_press_event(void* self, void* event) {
    QMessageBox_QBaseMousePressEvent((QMessageBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMouseEvent*) ```
void q_messagebox_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnMousePressEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_mouse_release_event(void* self, void* event) {
    QMessageBox_MouseReleaseEvent((QMessageBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_qbase_mouse_release_event(void* self, void* event) {
    QMessageBox_QBaseMouseReleaseEvent((QMessageBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMouseEvent*) ```
void q_messagebox_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnMouseReleaseEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_mouse_double_click_event(void* self, void* event) {
    QMessageBox_MouseDoubleClickEvent((QMessageBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_qbase_mouse_double_click_event(void* self, void* event) {
    QMessageBox_QBaseMouseDoubleClickEvent((QMessageBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMouseEvent*) ```
void q_messagebox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnMouseDoubleClickEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_mouse_move_event(void* self, void* event) {
    QMessageBox_MouseMoveEvent((QMessageBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMouseEvent* event ```
void q_messagebox_qbase_mouse_move_event(void* self, void* event) {
    QMessageBox_QBaseMouseMoveEvent((QMessageBox*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMouseEvent*) ```
void q_messagebox_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnMouseMoveEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QWheelEvent* event ```
void q_messagebox_wheel_event(void* self, void* event) {
    QMessageBox_WheelEvent((QMessageBox*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QWheelEvent* event ```
void q_messagebox_qbase_wheel_event(void* self, void* event) {
    QMessageBox_QBaseWheelEvent((QMessageBox*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QWheelEvent*) ```
void q_messagebox_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnWheelEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QKeyEvent* event ```
void q_messagebox_key_release_event(void* self, void* event) {
    QMessageBox_KeyReleaseEvent((QMessageBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QKeyEvent* event ```
void q_messagebox_qbase_key_release_event(void* self, void* event) {
    QMessageBox_QBaseKeyReleaseEvent((QMessageBox*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QKeyEvent*) ```
void q_messagebox_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnKeyReleaseEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QFocusEvent* event ```
void q_messagebox_focus_in_event(void* self, void* event) {
    QMessageBox_FocusInEvent((QMessageBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QFocusEvent* event ```
void q_messagebox_qbase_focus_in_event(void* self, void* event) {
    QMessageBox_QBaseFocusInEvent((QMessageBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QFocusEvent*) ```
void q_messagebox_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnFocusInEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QFocusEvent* event ```
void q_messagebox_focus_out_event(void* self, void* event) {
    QMessageBox_FocusOutEvent((QMessageBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QFocusEvent* event ```
void q_messagebox_qbase_focus_out_event(void* self, void* event) {
    QMessageBox_QBaseFocusOutEvent((QMessageBox*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QFocusEvent*) ```
void q_messagebox_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnFocusOutEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QEnterEvent* event ```
void q_messagebox_enter_event(void* self, void* event) {
    QMessageBox_EnterEvent((QMessageBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QEnterEvent* event ```
void q_messagebox_qbase_enter_event(void* self, void* event) {
    QMessageBox_QBaseEnterEvent((QMessageBox*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QEnterEvent*) ```
void q_messagebox_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnEnterEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_leave_event(void* self, void* event) {
    QMessageBox_LeaveEvent((QMessageBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_qbase_leave_event(void* self, void* event) {
    QMessageBox_QBaseLeaveEvent((QMessageBox*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QEvent*) ```
void q_messagebox_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnLeaveEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QPaintEvent* event ```
void q_messagebox_paint_event(void* self, void* event) {
    QMessageBox_PaintEvent((QMessageBox*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QPaintEvent* event ```
void q_messagebox_qbase_paint_event(void* self, void* event) {
    QMessageBox_QBasePaintEvent((QMessageBox*)self, (QPaintEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QPaintEvent*) ```
void q_messagebox_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnPaintEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMoveEvent* event ```
void q_messagebox_move_event(void* self, void* event) {
    QMessageBox_MoveEvent((QMessageBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMoveEvent* event ```
void q_messagebox_qbase_move_event(void* self, void* event) {
    QMessageBox_QBaseMoveEvent((QMessageBox*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMoveEvent*) ```
void q_messagebox_on_move_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnMoveEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QTabletEvent* event ```
void q_messagebox_tablet_event(void* self, void* event) {
    QMessageBox_TabletEvent((QMessageBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QTabletEvent* event ```
void q_messagebox_qbase_tablet_event(void* self, void* event) {
    QMessageBox_QBaseTabletEvent((QMessageBox*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QTabletEvent*) ```
void q_messagebox_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnTabletEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QActionEvent* event ```
void q_messagebox_action_event(void* self, void* event) {
    QMessageBox_ActionEvent((QMessageBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QActionEvent* event ```
void q_messagebox_qbase_action_event(void* self, void* event) {
    QMessageBox_QBaseActionEvent((QMessageBox*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QActionEvent*) ```
void q_messagebox_on_action_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnActionEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QDragEnterEvent* event ```
void q_messagebox_drag_enter_event(void* self, void* event) {
    QMessageBox_DragEnterEvent((QMessageBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QDragEnterEvent* event ```
void q_messagebox_qbase_drag_enter_event(void* self, void* event) {
    QMessageBox_QBaseDragEnterEvent((QMessageBox*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QDragEnterEvent*) ```
void q_messagebox_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnDragEnterEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QDragMoveEvent* event ```
void q_messagebox_drag_move_event(void* self, void* event) {
    QMessageBox_DragMoveEvent((QMessageBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QDragMoveEvent* event ```
void q_messagebox_qbase_drag_move_event(void* self, void* event) {
    QMessageBox_QBaseDragMoveEvent((QMessageBox*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QDragMoveEvent*) ```
void q_messagebox_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnDragMoveEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QDragLeaveEvent* event ```
void q_messagebox_drag_leave_event(void* self, void* event) {
    QMessageBox_DragLeaveEvent((QMessageBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QDragLeaveEvent* event ```
void q_messagebox_qbase_drag_leave_event(void* self, void* event) {
    QMessageBox_QBaseDragLeaveEvent((QMessageBox*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QDragLeaveEvent*) ```
void q_messagebox_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnDragLeaveEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QDropEvent* event ```
void q_messagebox_drop_event(void* self, void* event) {
    QMessageBox_DropEvent((QMessageBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QDropEvent* event ```
void q_messagebox_qbase_drop_event(void* self, void* event) {
    QMessageBox_QBaseDropEvent((QMessageBox*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QDropEvent*) ```
void q_messagebox_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnDropEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QHideEvent* event ```
void q_messagebox_hide_event(void* self, void* event) {
    QMessageBox_HideEvent((QMessageBox*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QHideEvent* event ```
void q_messagebox_qbase_hide_event(void* self, void* event) {
    QMessageBox_QBaseHideEvent((QMessageBox*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QHideEvent*) ```
void q_messagebox_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnHideEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_messagebox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMessageBox_NativeEvent((QMessageBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, const char* eventType, void* message, intptr_t* result ```
bool q_messagebox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMessageBox_QBaseNativeEvent((QMessageBox*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)(QMessageBox*, const char*, void*, intptr_t*) ```
void q_messagebox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QMessageBox_OnNativeEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_messagebox_metric(void* self, int64_t param1) {
    return QMessageBox_Metric((QMessageBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_messagebox_qbase_metric(void* self, int64_t param1) {
    return QMessageBox_QBaseMetric((QMessageBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)(QMessageBox*, enum QPaintDevice__PaintDeviceMetric) ```
void q_messagebox_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QMessageBox_OnMetric((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QPainter* painter ```
void q_messagebox_init_painter(void* self, void* painter) {
    QMessageBox_InitPainter((QMessageBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QPainter* painter ```
void q_messagebox_qbase_init_painter(void* self, void* painter) {
    QMessageBox_QBaseInitPainter((QMessageBox*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QPainter*) ```
void q_messagebox_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnInitPainter((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QPoint* offset ```
QPaintDevice* q_messagebox_redirected(void* self, void* offset) {
    return QMessageBox_Redirected((QMessageBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QPoint* offset ```
QPaintDevice* q_messagebox_qbase_redirected(void* self, void* offset) {
    return QMessageBox_QBaseRedirected((QMessageBox*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QPaintDevice* (*slot)(QMessageBox*, QPoint*) ```
void q_messagebox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QMessageBox_OnRedirected((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
QPainter* q_messagebox_shared_painter(void* self) {
    return QMessageBox_SharedPainter((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
QPainter* q_messagebox_qbase_shared_painter(void* self) {
    return QMessageBox_QBaseSharedPainter((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QPainter* (*slot)() ```
void q_messagebox_on_shared_painter(void* self, QPainter* (*slot)()) {
    QMessageBox_OnSharedPainter((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QInputMethodEvent* param1 ```
void q_messagebox_input_method_event(void* self, void* param1) {
    QMessageBox_InputMethodEvent((QMessageBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QInputMethodEvent* param1 ```
void q_messagebox_qbase_input_method_event(void* self, void* param1) {
    QMessageBox_QBaseInputMethodEvent((QMessageBox*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QInputMethodEvent*) ```
void q_messagebox_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnInputMethodEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_messagebox_input_method_query(void* self, int64_t param1) {
    return QMessageBox_InputMethodQuery((QMessageBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_messagebox_qbase_input_method_query(void* self, int64_t param1) {
    return QMessageBox_QBaseInputMethodQuery((QMessageBox*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QVariant* (*slot)(QMessageBox*, enum Qt__InputMethodQuery) ```
void q_messagebox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QMessageBox_OnInputMethodQuery((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, bool next ```
bool q_messagebox_focus_next_prev_child(void* self, bool next) {
    return QMessageBox_FocusNextPrevChild((QMessageBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, bool next ```
bool q_messagebox_qbase_focus_next_prev_child(void* self, bool next) {
    return QMessageBox_QBaseFocusNextPrevChild((QMessageBox*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)(QMessageBox*, bool) ```
void q_messagebox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QMessageBox_OnFocusNextPrevChild((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QTimerEvent* event ```
void q_messagebox_timer_event(void* self, void* event) {
    QMessageBox_TimerEvent((QMessageBox*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QTimerEvent* event ```
void q_messagebox_qbase_timer_event(void* self, void* event) {
    QMessageBox_QBaseTimerEvent((QMessageBox*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QTimerEvent*) ```
void q_messagebox_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnTimerEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QChildEvent* event ```
void q_messagebox_child_event(void* self, void* event) {
    QMessageBox_ChildEvent((QMessageBox*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QChildEvent* event ```
void q_messagebox_qbase_child_event(void* self, void* event) {
    QMessageBox_QBaseChildEvent((QMessageBox*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QChildEvent*) ```
void q_messagebox_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnChildEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_custom_event(void* self, void* event) {
    QMessageBox_CustomEvent((QMessageBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QEvent* event ```
void q_messagebox_qbase_custom_event(void* self, void* event) {
    QMessageBox_QBaseCustomEvent((QMessageBox*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QEvent*) ```
void q_messagebox_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnCustomEvent((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
void q_messagebox_connect_notify(void* self, void* signal) {
    QMessageBox_ConnectNotify((QMessageBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
void q_messagebox_qbase_connect_notify(void* self, void* signal) {
    QMessageBox_QBaseConnectNotify((QMessageBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMetaMethod*) ```
void q_messagebox_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnConnectNotify((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
void q_messagebox_disconnect_notify(void* self, void* signal) {
    QMessageBox_DisconnectNotify((QMessageBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
void q_messagebox_qbase_disconnect_notify(void* self, void* signal) {
    QMessageBox_QBaseDisconnectNotify((QMessageBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QMetaMethod*) ```
void q_messagebox_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnDisconnectNotify((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QWidget* param1 ```
void q_messagebox_adjust_position(void* self, void* param1) {
    QMessageBox_AdjustPosition((QMessageBox*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QWidget* param1 ```
void q_messagebox_qbase_adjust_position(void* self, void* param1) {
    QMessageBox_QBaseAdjustPosition((QMessageBox*)self, (QWidget*)param1);
}

/// Inherited from QDialog
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)(QMessageBox*, QWidget*) ```
void q_messagebox_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QMessageBox_OnAdjustPosition((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_update_micro_focus(void* self) {
    QMessageBox_UpdateMicroFocus((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_update_micro_focus(void* self) {
    QMessageBox_QBaseUpdateMicroFocus((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_update_micro_focus(void* self, void (*slot)()) {
    QMessageBox_OnUpdateMicroFocus((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_create(void* self) {
    QMessageBox_Create((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_create(void* self) {
    QMessageBox_QBaseCreate((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_create(void* self, void (*slot)()) {
    QMessageBox_OnCreate((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_destroy(void* self) {
    QMessageBox_Destroy((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
void q_messagebox_qbase_destroy(void* self) {
    QMessageBox_QBaseDestroy((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, void (*slot)() ```
void q_messagebox_on_destroy(void* self, void (*slot)()) {
    QMessageBox_OnDestroy((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_focus_next_child(void* self) {
    return QMessageBox_FocusNextChild((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_qbase_focus_next_child(void* self) {
    return QMessageBox_QBaseFocusNextChild((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)() ```
void q_messagebox_on_focus_next_child(void* self, bool (*slot)()) {
    QMessageBox_OnFocusNextChild((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_focus_previous_child(void* self) {
    return QMessageBox_FocusPreviousChild((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
bool q_messagebox_qbase_focus_previous_child(void* self) {
    return QMessageBox_QBaseFocusPreviousChild((QMessageBox*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)() ```
void q_messagebox_on_focus_previous_child(void* self, bool (*slot)()) {
    QMessageBox_OnFocusPreviousChild((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
QObject* q_messagebox_sender(void* self) {
    return QMessageBox_Sender((QMessageBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
QObject* q_messagebox_qbase_sender(void* self) {
    return QMessageBox_QBaseSender((QMessageBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, QObject* (*slot)() ```
void q_messagebox_on_sender(void* self, QObject* (*slot)()) {
    QMessageBox_OnSender((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_sender_signal_index(void* self) {
    return QMessageBox_SenderSignalIndex((QMessageBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self ```
int32_t q_messagebox_qbase_sender_signal_index(void* self) {
    return QMessageBox_QBaseSenderSignalIndex((QMessageBox*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)() ```
void q_messagebox_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMessageBox_OnSenderSignalIndex((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, const char* signal ```
int32_t q_messagebox_receivers(void* self, const char* signal) {
    return QMessageBox_Receivers((QMessageBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, const char* signal ```
int32_t q_messagebox_qbase_receivers(void* self, const char* signal) {
    return QMessageBox_QBaseReceivers((QMessageBox*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, int32_t (*slot)(QMessageBox*, const char*) ```
void q_messagebox_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMessageBox_OnReceivers((QMessageBox*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
bool q_messagebox_is_signal_connected(void* self, void* signal) {
    return QMessageBox_IsSignalConnected((QMessageBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMessageBox* self, QMetaMethod* signal ```
bool q_messagebox_qbase_is_signal_connected(void* self, void* signal) {
    return QMessageBox_QBaseIsSignalConnected((QMessageBox*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMessageBox* self, bool (*slot)(QMessageBox*, QMetaMethod*) ```
void q_messagebox_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMessageBox_OnIsSignalConnected((QMessageBox*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMessageBox* self ```
void q_messagebox_delete(void* self) {
    QMessageBox_Delete((QMessageBox*)(self));
}