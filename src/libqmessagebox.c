#include "libqabstractbutton.hpp"
#include "libqevent.hpp"
#include "libqcheckbox.hpp"
#include "libqcoreevent.hpp"
#include "libqdialog.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqpushbutton.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqmessagebox.hpp"
#include "libqmessagebox.h"

QMessageBox* q_messagebox_new(void* parent) {
    return QMessageBox_new((QWidget*)parent);
}

QMessageBox* q_messagebox_new2() {
    return QMessageBox_new2();
}

QMessageBox* q_messagebox_new3(int32_t icon, const char* title, const char* text) {
    return QMessageBox_new3(icon, qstring(title), qstring(text));
}

QMessageBox* q_messagebox_new4(const char* title, const char* text, int32_t icon, int button0, int button1, int button2) {
    return QMessageBox_new4(qstring(title), qstring(text), icon, button0, button1, button2);
}

QMessageBox* q_messagebox_new5(int32_t icon, const char* title, const char* text, int32_t buttons) {
    return QMessageBox_new5(icon, qstring(title), qstring(text), buttons);
}

QMessageBox* q_messagebox_new6(int32_t icon, const char* title, const char* text, int32_t buttons, void* parent) {
    return QMessageBox_new6(icon, qstring(title), qstring(text), buttons, (QWidget*)parent);
}

QMessageBox* q_messagebox_new7(int32_t icon, const char* title, const char* text, int32_t buttons, void* parent, int64_t flags) {
    return QMessageBox_new7(icon, qstring(title), qstring(text), buttons, (QWidget*)parent, flags);
}

QMessageBox* q_messagebox_new8(const char* title, const char* text, int32_t icon, int button0, int button1, int button2, void* parent) {
    return QMessageBox_new8(qstring(title), qstring(text), icon, button0, button1, button2, (QWidget*)parent);
}

QMessageBox* q_messagebox_new9(const char* title, const char* text, int32_t icon, int button0, int button1, int button2, void* parent, int64_t f) {
    return QMessageBox_new9(qstring(title), qstring(text), icon, button0, button1, button2, (QWidget*)parent, f);
}

const QMetaObject* q_messagebox_meta_object(void* self) {
    return QMessageBox_MetaObject((QMessageBox*)self);
}

void* q_messagebox_metacast(void* self, const char* param1) {
    return QMessageBox_Metacast((QMessageBox*)self, param1);
}

int32_t q_messagebox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMessageBox_Metacall((QMessageBox*)self, param1, param2, param3);
}

void q_messagebox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QMessageBox_OnMetacall((QMessageBox*)self, (intptr_t)callback);
}

int32_t q_messagebox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QMessageBox_QBaseMetacall((QMessageBox*)self, param1, param2, param3);
}

const char* q_messagebox_tr(const char* s) {
    libqt_string _str = QMessageBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_add_button(void* self, void* button, int32_t role) {
    QMessageBox_AddButton((QMessageBox*)self, (QAbstractButton*)button, role);
}

QPushButton* q_messagebox_add_button2(void* self, const char* text, int32_t role) {
    return QMessageBox_AddButton2((QMessageBox*)self, qstring(text), role);
}

QPushButton* q_messagebox_add_button3(void* self, int32_t button) {
    return QMessageBox_AddButton3((QMessageBox*)self, button);
}

void q_messagebox_remove_button(void* self, void* button) {
    QMessageBox_RemoveButton((QMessageBox*)self, (QAbstractButton*)button);
}

libqt_list /* of QAbstractButton* */ q_messagebox_buttons(void* self) {
    libqt_list _arr = QMessageBox_Buttons((QMessageBox*)self);
    return _arr;
}

int32_t q_messagebox_button_role(void* self, void* button) {
    return QMessageBox_ButtonRole((QMessageBox*)self, (QAbstractButton*)button);
}

void q_messagebox_set_standard_buttons(void* self, int32_t buttons) {
    QMessageBox_SetStandardButtons((QMessageBox*)self, buttons);
}

int32_t q_messagebox_standard_buttons(void* self) {
    return QMessageBox_StandardButtons((QMessageBox*)self);
}

int32_t q_messagebox_standard_button(void* self, void* button) {
    return QMessageBox_StandardButton((QMessageBox*)self, (QAbstractButton*)button);
}

QAbstractButton* q_messagebox_button(void* self, int32_t which) {
    return QMessageBox_Button((QMessageBox*)self, which);
}

QPushButton* q_messagebox_default_button(void* self) {
    return QMessageBox_DefaultButton((QMessageBox*)self);
}

void q_messagebox_set_default_button(void* self, void* button) {
    QMessageBox_SetDefaultButton((QMessageBox*)self, (QPushButton*)button);
}

void q_messagebox_set_default_button2(void* self, int32_t button) {
    QMessageBox_SetDefaultButton2((QMessageBox*)self, button);
}

QAbstractButton* q_messagebox_escape_button(void* self) {
    return QMessageBox_EscapeButton((QMessageBox*)self);
}

void q_messagebox_set_escape_button(void* self, void* button) {
    QMessageBox_SetEscapeButton((QMessageBox*)self, (QAbstractButton*)button);
}

void q_messagebox_set_escape_button2(void* self, int32_t button) {
    QMessageBox_SetEscapeButton2((QMessageBox*)self, button);
}

QAbstractButton* q_messagebox_clicked_button(void* self) {
    return QMessageBox_ClickedButton((QMessageBox*)self);
}

const char* q_messagebox_text(void* self) {
    libqt_string _str = QMessageBox_Text((QMessageBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_text(void* self, const char* text) {
    QMessageBox_SetText((QMessageBox*)self, qstring(text));
}

int32_t q_messagebox_icon(void* self) {
    return QMessageBox_Icon((QMessageBox*)self);
}

void q_messagebox_set_icon(void* self, int32_t icon) {
    QMessageBox_SetIcon((QMessageBox*)self, icon);
}

QPixmap* q_messagebox_icon_pixmap(void* self) {
    return QMessageBox_IconPixmap((QMessageBox*)self);
}

void q_messagebox_set_icon_pixmap(void* self, void* pixmap) {
    QMessageBox_SetIconPixmap((QMessageBox*)self, (QPixmap*)pixmap);
}

int32_t q_messagebox_text_format(void* self) {
    return QMessageBox_TextFormat((QMessageBox*)self);
}

void q_messagebox_set_text_format(void* self, int32_t format) {
    QMessageBox_SetTextFormat((QMessageBox*)self, format);
}

void q_messagebox_set_text_interaction_flags(void* self, int32_t flags) {
    QMessageBox_SetTextInteractionFlags((QMessageBox*)self, flags);
}

int32_t q_messagebox_text_interaction_flags(void* self) {
    return QMessageBox_TextInteractionFlags((QMessageBox*)self);
}

void q_messagebox_set_check_box(void* self, void* cb) {
    QMessageBox_SetCheckBox((QMessageBox*)self, (QCheckBox*)cb);
}

QCheckBox* q_messagebox_check_box(void* self) {
    return QMessageBox_CheckBox((QMessageBox*)self);
}

void q_messagebox_set_option(void* self, int32_t option) {
    QMessageBox_SetOption((QMessageBox*)self, option);
}

bool q_messagebox_test_option(void* self, int32_t option) {
    return QMessageBox_TestOption((QMessageBox*)self, option);
}

void q_messagebox_set_options(void* self, int32_t options) {
    QMessageBox_SetOptions((QMessageBox*)self, options);
}

int32_t q_messagebox_options(void* self) {
    return QMessageBox_Options((QMessageBox*)self);
}

int32_t q_messagebox_information(void* parent, const char* title, const char* text) {
    return QMessageBox_Information((QWidget*)parent, qstring(title), qstring(text));
}

int32_t q_messagebox_information2(void* parent, const char* title, const char* text, int32_t button0) {
    return QMessageBox_Information2((QWidget*)parent, qstring(title), qstring(text), button0);
}

int32_t q_messagebox_question(void* parent, const char* title, const char* text) {
    return QMessageBox_Question((QWidget*)parent, qstring(title), qstring(text));
}

int32_t q_messagebox_question2(void* parent, const char* title, const char* text, int32_t button0, int32_t button1) {
    return QMessageBox_Question2((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

int32_t q_messagebox_warning(void* parent, const char* title, const char* text) {
    return QMessageBox_Warning((QWidget*)parent, qstring(title), qstring(text));
}

int32_t q_messagebox_warning2(void* parent, const char* title, const char* text, int32_t button0, int32_t button1) {
    return QMessageBox_Warning2((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

int32_t q_messagebox_critical(void* parent, const char* title, const char* text) {
    return QMessageBox_Critical((QWidget*)parent, qstring(title), qstring(text));
}

int32_t q_messagebox_critical2(void* parent, const char* title, const char* text, int32_t button0, int32_t button1) {
    return QMessageBox_Critical2((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

void q_messagebox_about(void* parent, const char* title, const char* text) {
    QMessageBox_About((QWidget*)parent, qstring(title), qstring(text));
}

void q_messagebox_about_qt(void* parent) {
    QMessageBox_AboutQt((QWidget*)parent);
}

int32_t q_messagebox_information3(void* parent, const char* title, const char* text, int button0) {
    return QMessageBox_Information3((QWidget*)parent, qstring(title), qstring(text), button0);
}

int32_t q_messagebox_information4(void* parent, const char* title, const char* text, const char* button0Text) {
    return QMessageBox_Information4((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text));
}

int32_t q_messagebox_question3(void* parent, const char* title, const char* text, int button0) {
    return QMessageBox_Question3((QWidget*)parent, qstring(title), qstring(text), button0);
}

int32_t q_messagebox_question4(void* parent, const char* title, const char* text, const char* button0Text) {
    return QMessageBox_Question4((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text));
}

int32_t q_messagebox_warning3(void* parent, const char* title, const char* text, int button0, int button1) {
    return QMessageBox_Warning3((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

int32_t q_messagebox_warning4(void* parent, const char* title, const char* text, const char* button0Text) {
    return QMessageBox_Warning4((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text));
}

int32_t q_messagebox_critical3(void* parent, const char* title, const char* text, int button0, int button1) {
    return QMessageBox_Critical3((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

int32_t q_messagebox_critical4(void* parent, const char* title, const char* text, const char* button0Text) {
    return QMessageBox_Critical4((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text));
}

const char* q_messagebox_button_text(void* self, int button) {
    libqt_string _str = QMessageBox_ButtonText((QMessageBox*)self, button);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_button_text(void* self, int button, const char* text) {
    QMessageBox_SetButtonText((QMessageBox*)self, button, qstring(text));
}

const char* q_messagebox_informative_text(void* self) {
    libqt_string _str = QMessageBox_InformativeText((QMessageBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_informative_text(void* self, const char* text) {
    QMessageBox_SetInformativeText((QMessageBox*)self, qstring(text));
}

const char* q_messagebox_detailed_text(void* self) {
    libqt_string _str = QMessageBox_DetailedText((QMessageBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_detailed_text(void* self, const char* text) {
    QMessageBox_SetDetailedText((QMessageBox*)self, qstring(text));
}

void q_messagebox_set_window_title(void* self, const char* title) {
    QMessageBox_SetWindowTitle((QMessageBox*)self, qstring(title));
}

void q_messagebox_set_window_modality(void* self, int32_t windowModality) {
    QMessageBox_SetWindowModality((QMessageBox*)self, windowModality);
}

QPixmap* q_messagebox_standard_icon(int32_t icon) {
    return QMessageBox_StandardIcon(icon);
}

void q_messagebox_button_clicked(void* self, void* button) {
    QMessageBox_ButtonClicked((QMessageBox*)self, (QAbstractButton*)button);
}

void q_messagebox_on_button_clicked(void* self, void (*callback)(void*, void*)) {
    QMessageBox_Connect_ButtonClicked((QMessageBox*)self, (intptr_t)callback);
}

bool q_messagebox_event(void* self, void* e) {
    return QMessageBox_Event((QMessageBox*)self, (QEvent*)e);
}

void q_messagebox_on_event(void* self, bool (*callback)(void*, void*)) {
    QMessageBox_OnEvent((QMessageBox*)self, (intptr_t)callback);
}

bool q_messagebox_qbase_event(void* self, void* e) {
    return QMessageBox_QBaseEvent((QMessageBox*)self, (QEvent*)e);
}

void q_messagebox_resize_event(void* self, void* event) {
    QMessageBox_ResizeEvent((QMessageBox*)self, (QResizeEvent*)event);
}

void q_messagebox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnResizeEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_qbase_resize_event(void* self, void* event) {
    QMessageBox_QBaseResizeEvent((QMessageBox*)self, (QResizeEvent*)event);
}

void q_messagebox_show_event(void* self, void* event) {
    QMessageBox_ShowEvent((QMessageBox*)self, (QShowEvent*)event);
}

void q_messagebox_on_show_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnShowEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_qbase_show_event(void* self, void* event) {
    QMessageBox_QBaseShowEvent((QMessageBox*)self, (QShowEvent*)event);
}

void q_messagebox_close_event(void* self, void* event) {
    QMessageBox_CloseEvent((QMessageBox*)self, (QCloseEvent*)event);
}

void q_messagebox_on_close_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnCloseEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_qbase_close_event(void* self, void* event) {
    QMessageBox_QBaseCloseEvent((QMessageBox*)self, (QCloseEvent*)event);
}

void q_messagebox_key_press_event(void* self, void* event) {
    QMessageBox_KeyPressEvent((QMessageBox*)self, (QKeyEvent*)event);
}

void q_messagebox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnKeyPressEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_qbase_key_press_event(void* self, void* event) {
    QMessageBox_QBaseKeyPressEvent((QMessageBox*)self, (QKeyEvent*)event);
}

void q_messagebox_change_event(void* self, void* event) {
    QMessageBox_ChangeEvent((QMessageBox*)self, (QEvent*)event);
}

void q_messagebox_on_change_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnChangeEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_qbase_change_event(void* self, void* event) {
    QMessageBox_QBaseChangeEvent((QMessageBox*)self, (QEvent*)event);
}

const char* q_messagebox_tr2(const char* s, const char* c) {
    libqt_string _str = QMessageBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_messagebox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMessageBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_option2(void* self, int32_t option, bool on) {
    QMessageBox_SetOption2((QMessageBox*)self, option, on);
}

int32_t q_messagebox_information42(void* parent, const char* title, const char* text, int32_t buttons) {
    return QMessageBox_Information42((QWidget*)parent, qstring(title), qstring(text), buttons);
}

int32_t q_messagebox_information5(void* parent, const char* title, const char* text, int32_t buttons, int32_t defaultButton) {
    return QMessageBox_Information5((QWidget*)parent, qstring(title), qstring(text), buttons, defaultButton);
}

int32_t q_messagebox_information52(void* parent, const char* title, const char* text, int32_t button0, int32_t button1) {
    return QMessageBox_Information52((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

int32_t q_messagebox_question42(void* parent, const char* title, const char* text, int32_t buttons) {
    return QMessageBox_Question42((QWidget*)parent, qstring(title), qstring(text), buttons);
}

int32_t q_messagebox_question5(void* parent, const char* title, const char* text, int32_t buttons, int32_t defaultButton) {
    return QMessageBox_Question5((QWidget*)parent, qstring(title), qstring(text), buttons, defaultButton);
}

int32_t q_messagebox_warning42(void* parent, const char* title, const char* text, int32_t buttons) {
    return QMessageBox_Warning42((QWidget*)parent, qstring(title), qstring(text), buttons);
}

int32_t q_messagebox_warning5(void* parent, const char* title, const char* text, int32_t buttons, int32_t defaultButton) {
    return QMessageBox_Warning5((QWidget*)parent, qstring(title), qstring(text), buttons, defaultButton);
}

int32_t q_messagebox_critical42(void* parent, const char* title, const char* text, int32_t buttons) {
    return QMessageBox_Critical42((QWidget*)parent, qstring(title), qstring(text), buttons);
}

int32_t q_messagebox_critical5(void* parent, const char* title, const char* text, int32_t buttons, int32_t defaultButton) {
    return QMessageBox_Critical5((QWidget*)parent, qstring(title), qstring(text), buttons, defaultButton);
}

void q_messagebox_about_qt2(void* parent, const char* title) {
    QMessageBox_AboutQt2((QWidget*)parent, qstring(title));
}

int32_t q_messagebox_information53(void* parent, const char* title, const char* text, int button0, int button1) {
    return QMessageBox_Information53((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

int32_t q_messagebox_information6(void* parent, const char* title, const char* text, int button0, int button1, int button2) {
    return QMessageBox_Information6((QWidget*)parent, qstring(title), qstring(text), button0, button1, button2);
}

int32_t q_messagebox_information54(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text) {
    return QMessageBox_Information54((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text));
}

int32_t q_messagebox_information62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text) {
    return QMessageBox_Information62((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text));
}

int32_t q_messagebox_information7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber) {
    return QMessageBox_Information7((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber);
}

int32_t q_messagebox_information8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    return QMessageBox_Information8((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber, escapeButtonNumber);
}

int32_t q_messagebox_question52(void* parent, const char* title, const char* text, int button0, int button1) {
    return QMessageBox_Question52((QWidget*)parent, qstring(title), qstring(text), button0, button1);
}

int32_t q_messagebox_question6(void* parent, const char* title, const char* text, int button0, int button1, int button2) {
    return QMessageBox_Question6((QWidget*)parent, qstring(title), qstring(text), button0, button1, button2);
}

int32_t q_messagebox_question53(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text) {
    return QMessageBox_Question53((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text));
}

int32_t q_messagebox_question62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text) {
    return QMessageBox_Question62((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text));
}

int32_t q_messagebox_question7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber) {
    return QMessageBox_Question7((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber);
}

int32_t q_messagebox_question8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    return QMessageBox_Question8((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber, escapeButtonNumber);
}

int32_t q_messagebox_warning6(void* parent, const char* title, const char* text, int button0, int button1, int button2) {
    return QMessageBox_Warning6((QWidget*)parent, qstring(title), qstring(text), button0, button1, button2);
}

int32_t q_messagebox_warning52(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text) {
    return QMessageBox_Warning52((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text));
}

int32_t q_messagebox_warning62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text) {
    return QMessageBox_Warning62((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text));
}

int32_t q_messagebox_warning7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber) {
    return QMessageBox_Warning7((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber);
}

int32_t q_messagebox_warning8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    return QMessageBox_Warning8((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber, escapeButtonNumber);
}

int32_t q_messagebox_critical6(void* parent, const char* title, const char* text, int button0, int button1, int button2) {
    return QMessageBox_Critical6((QWidget*)parent, qstring(title), qstring(text), button0, button1, button2);
}

int32_t q_messagebox_critical52(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text) {
    return QMessageBox_Critical52((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text));
}

int32_t q_messagebox_critical62(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text) {
    return QMessageBox_Critical62((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text));
}

int32_t q_messagebox_critical7(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber) {
    return QMessageBox_Critical7((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber);
}

int32_t q_messagebox_critical8(void* parent, const char* title, const char* text, const char* button0Text, const char* button1Text, const char* button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    return QMessageBox_Critical8((QWidget*)parent, qstring(title), qstring(text), qstring(button0Text), qstring(button1Text), qstring(button2Text), defaultButtonNumber, escapeButtonNumber);
}

int32_t q_messagebox_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_messagebox_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_messagebox_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_messagebox_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_messagebox_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_messagebox_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_messagebox_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void q_messagebox_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_messagebox_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void q_messagebox_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_messagebox_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t q_messagebox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_messagebox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_messagebox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_messagebox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_messagebox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_messagebox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_messagebox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_messagebox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_messagebox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_messagebox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

bool q_messagebox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_messagebox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_messagebox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_messagebox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_messagebox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_messagebox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_messagebox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_messagebox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_messagebox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_messagebox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_messagebox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_messagebox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_messagebox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_messagebox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_messagebox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_messagebox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_messagebox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_messagebox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_messagebox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_messagebox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_messagebox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_messagebox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_messagebox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_messagebox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_messagebox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_messagebox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_messagebox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_messagebox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_messagebox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_messagebox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_messagebox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_messagebox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_messagebox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_messagebox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_messagebox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_messagebox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_messagebox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_messagebox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_messagebox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_messagebox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_messagebox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_messagebox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_messagebox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_messagebox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_messagebox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_messagebox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_messagebox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_messagebox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_messagebox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_messagebox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_messagebox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_messagebox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_messagebox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_messagebox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_messagebox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_messagebox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_messagebox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_messagebox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_messagebox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_messagebox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_messagebox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_messagebox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_messagebox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_messagebox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_messagebox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_messagebox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_messagebox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_messagebox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_messagebox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_messagebox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_messagebox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_messagebox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_messagebox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_messagebox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_messagebox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_messagebox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_messagebox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_messagebox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_messagebox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_messagebox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_messagebox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_messagebox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_messagebox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_messagebox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_messagebox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_messagebox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_messagebox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_messagebox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_messagebox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_messagebox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_messagebox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_messagebox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_messagebox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_messagebox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_messagebox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_messagebox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_messagebox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_messagebox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_messagebox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_messagebox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_messagebox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_messagebox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_messagebox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_messagebox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_messagebox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_messagebox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_messagebox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_messagebox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_messagebox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_messagebox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_messagebox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_messagebox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_messagebox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_messagebox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_messagebox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_messagebox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_messagebox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_messagebox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_messagebox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_messagebox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_messagebox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_messagebox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_messagebox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_messagebox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_messagebox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_messagebox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_messagebox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_messagebox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_messagebox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_messagebox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_messagebox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_messagebox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_messagebox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_messagebox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_messagebox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_messagebox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_messagebox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_messagebox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_messagebox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_messagebox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_messagebox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_messagebox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_messagebox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_messagebox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_messagebox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_messagebox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_messagebox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_messagebox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_messagebox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_messagebox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_messagebox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_messagebox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_messagebox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_messagebox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_messagebox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_messagebox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_messagebox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_messagebox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_messagebox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_messagebox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_messagebox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_messagebox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_messagebox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_messagebox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_messagebox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_messagebox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_messagebox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_messagebox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_messagebox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_messagebox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_messagebox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_messagebox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_messagebox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_messagebox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_messagebox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_messagebox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_messagebox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_messagebox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_messagebox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_messagebox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_messagebox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_messagebox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_messagebox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_messagebox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_messagebox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_messagebox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_messagebox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_messagebox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_messagebox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_messagebox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_messagebox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_messagebox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_messagebox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_messagebox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_messagebox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_messagebox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_messagebox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_messagebox_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_messagebox_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_messagebox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_messagebox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_messagebox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_messagebox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_messagebox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_messagebox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_messagebox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_messagebox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_messagebox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_messagebox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_messagebox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_messagebox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_messagebox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_messagebox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_messagebox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_messagebox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_messagebox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_messagebox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_messagebox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_messagebox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_messagebox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_messagebox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_messagebox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_messagebox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_messagebox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_messagebox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_messagebox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_messagebox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_messagebox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_messagebox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_messagebox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_messagebox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_messagebox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_messagebox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_messagebox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_messagebox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_messagebox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_messagebox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_messagebox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_messagebox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_messagebox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_messagebox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_messagebox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_messagebox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_messagebox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_messagebox_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_messagebox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_messagebox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_messagebox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_messagebox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_messagebox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_messagebox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_messagebox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_messagebox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messagebox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_messagebox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_messagebox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_messagebox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_messagebox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_messagebox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_messagebox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_messagebox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_messagebox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_messagebox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_messagebox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_messagebox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_messagebox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_messagebox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_messagebox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_messagebox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_messagebox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_messagebox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_messagebox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_messagebox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_messagebox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_messagebox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_messagebox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_messagebox_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_messagebox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_messagebox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_messagebox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_messagebox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_messagebox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_messagebox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_messagebox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_messagebox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_messagebox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_messagebox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_messagebox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_messagebox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_messagebox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_messagebox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_messagebox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_messagebox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_messagebox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_messagebox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_messagebox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_messagebox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_messagebox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_messagebox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_messagebox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_messagebox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_messagebox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_messagebox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_messagebox_set_visible(void* self, bool visible) {
    QMessageBox_SetVisible((QMessageBox*)self, visible);
}

void q_messagebox_qbase_set_visible(void* self, bool visible) {
    QMessageBox_QBaseSetVisible((QMessageBox*)self, visible);
}

void q_messagebox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QMessageBox_OnSetVisible((QMessageBox*)self, (intptr_t)callback);
}

QSize* q_messagebox_size_hint(void* self) {
    return QMessageBox_SizeHint((QMessageBox*)self);
}

QSize* q_messagebox_qbase_size_hint(void* self) {
    return QMessageBox_QBaseSizeHint((QMessageBox*)self);
}

void q_messagebox_on_size_hint(void* self, QSize* (*callback)()) {
    QMessageBox_OnSizeHint((QMessageBox*)self, (intptr_t)callback);
}

QSize* q_messagebox_minimum_size_hint(void* self) {
    return QMessageBox_MinimumSizeHint((QMessageBox*)self);
}

QSize* q_messagebox_qbase_minimum_size_hint(void* self) {
    return QMessageBox_QBaseMinimumSizeHint((QMessageBox*)self);
}

void q_messagebox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QMessageBox_OnMinimumSizeHint((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_open(void* self) {
    QMessageBox_Open((QMessageBox*)self);
}

void q_messagebox_qbase_open(void* self) {
    QMessageBox_QBaseOpen((QMessageBox*)self);
}

void q_messagebox_on_open(void* self, void (*callback)()) {
    QMessageBox_OnOpen((QMessageBox*)self, (intptr_t)callback);
}

int32_t q_messagebox_exec(void* self) {
    return QMessageBox_Exec((QMessageBox*)self);
}

int32_t q_messagebox_qbase_exec(void* self) {
    return QMessageBox_QBaseExec((QMessageBox*)self);
}

void q_messagebox_on_exec(void* self, int32_t (*callback)()) {
    QMessageBox_OnExec((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_done(void* self, int param1) {
    QMessageBox_Done((QMessageBox*)self, param1);
}

void q_messagebox_qbase_done(void* self, int param1) {
    QMessageBox_QBaseDone((QMessageBox*)self, param1);
}

void q_messagebox_on_done(void* self, void (*callback)(void*, int)) {
    QMessageBox_OnDone((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_accept(void* self) {
    QMessageBox_Accept((QMessageBox*)self);
}

void q_messagebox_qbase_accept(void* self) {
    QMessageBox_QBaseAccept((QMessageBox*)self);
}

void q_messagebox_on_accept(void* self, void (*callback)()) {
    QMessageBox_OnAccept((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_reject(void* self) {
    QMessageBox_Reject((QMessageBox*)self);
}

void q_messagebox_qbase_reject(void* self) {
    QMessageBox_QBaseReject((QMessageBox*)self);
}

void q_messagebox_on_reject(void* self, void (*callback)()) {
    QMessageBox_OnReject((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_context_menu_event(void* self, void* param1) {
    QMessageBox_ContextMenuEvent((QMessageBox*)self, (QContextMenuEvent*)param1);
}

void q_messagebox_qbase_context_menu_event(void* self, void* param1) {
    QMessageBox_QBaseContextMenuEvent((QMessageBox*)self, (QContextMenuEvent*)param1);
}

void q_messagebox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnContextMenuEvent((QMessageBox*)self, (intptr_t)callback);
}

bool q_messagebox_event_filter(void* self, void* param1, void* param2) {
    return QMessageBox_EventFilter((QMessageBox*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_messagebox_qbase_event_filter(void* self, void* param1, void* param2) {
    return QMessageBox_QBaseEventFilter((QMessageBox*)self, (QObject*)param1, (QEvent*)param2);
}

void q_messagebox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QMessageBox_OnEventFilter((QMessageBox*)self, (intptr_t)callback);
}

int32_t q_messagebox_dev_type(void* self) {
    return QMessageBox_DevType((QMessageBox*)self);
}

int32_t q_messagebox_qbase_dev_type(void* self) {
    return QMessageBox_QBaseDevType((QMessageBox*)self);
}

void q_messagebox_on_dev_type(void* self, int32_t (*callback)()) {
    QMessageBox_OnDevType((QMessageBox*)self, (intptr_t)callback);
}

int32_t q_messagebox_height_for_width(void* self, int param1) {
    return QMessageBox_HeightForWidth((QMessageBox*)self, param1);
}

int32_t q_messagebox_qbase_height_for_width(void* self, int param1) {
    return QMessageBox_QBaseHeightForWidth((QMessageBox*)self, param1);
}

void q_messagebox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QMessageBox_OnHeightForWidth((QMessageBox*)self, (intptr_t)callback);
}

bool q_messagebox_has_height_for_width(void* self) {
    return QMessageBox_HasHeightForWidth((QMessageBox*)self);
}

bool q_messagebox_qbase_has_height_for_width(void* self) {
    return QMessageBox_QBaseHasHeightForWidth((QMessageBox*)self);
}

void q_messagebox_on_has_height_for_width(void* self, bool (*callback)()) {
    QMessageBox_OnHasHeightForWidth((QMessageBox*)self, (intptr_t)callback);
}

QPaintEngine* q_messagebox_paint_engine(void* self) {
    return QMessageBox_PaintEngine((QMessageBox*)self);
}

QPaintEngine* q_messagebox_qbase_paint_engine(void* self) {
    return QMessageBox_QBasePaintEngine((QMessageBox*)self);
}

void q_messagebox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QMessageBox_OnPaintEngine((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_mouse_press_event(void* self, void* event) {
    QMessageBox_MousePressEvent((QMessageBox*)self, (QMouseEvent*)event);
}

void q_messagebox_qbase_mouse_press_event(void* self, void* event) {
    QMessageBox_QBaseMousePressEvent((QMessageBox*)self, (QMouseEvent*)event);
}

void q_messagebox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnMousePressEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_mouse_release_event(void* self, void* event) {
    QMessageBox_MouseReleaseEvent((QMessageBox*)self, (QMouseEvent*)event);
}

void q_messagebox_qbase_mouse_release_event(void* self, void* event) {
    QMessageBox_QBaseMouseReleaseEvent((QMessageBox*)self, (QMouseEvent*)event);
}

void q_messagebox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnMouseReleaseEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_mouse_double_click_event(void* self, void* event) {
    QMessageBox_MouseDoubleClickEvent((QMessageBox*)self, (QMouseEvent*)event);
}

void q_messagebox_qbase_mouse_double_click_event(void* self, void* event) {
    QMessageBox_QBaseMouseDoubleClickEvent((QMessageBox*)self, (QMouseEvent*)event);
}

void q_messagebox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnMouseDoubleClickEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_mouse_move_event(void* self, void* event) {
    QMessageBox_MouseMoveEvent((QMessageBox*)self, (QMouseEvent*)event);
}

void q_messagebox_qbase_mouse_move_event(void* self, void* event) {
    QMessageBox_QBaseMouseMoveEvent((QMessageBox*)self, (QMouseEvent*)event);
}

void q_messagebox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnMouseMoveEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_wheel_event(void* self, void* event) {
    QMessageBox_WheelEvent((QMessageBox*)self, (QWheelEvent*)event);
}

void q_messagebox_qbase_wheel_event(void* self, void* event) {
    QMessageBox_QBaseWheelEvent((QMessageBox*)self, (QWheelEvent*)event);
}

void q_messagebox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnWheelEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_key_release_event(void* self, void* event) {
    QMessageBox_KeyReleaseEvent((QMessageBox*)self, (QKeyEvent*)event);
}

void q_messagebox_qbase_key_release_event(void* self, void* event) {
    QMessageBox_QBaseKeyReleaseEvent((QMessageBox*)self, (QKeyEvent*)event);
}

void q_messagebox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnKeyReleaseEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_focus_in_event(void* self, void* event) {
    QMessageBox_FocusInEvent((QMessageBox*)self, (QFocusEvent*)event);
}

void q_messagebox_qbase_focus_in_event(void* self, void* event) {
    QMessageBox_QBaseFocusInEvent((QMessageBox*)self, (QFocusEvent*)event);
}

void q_messagebox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnFocusInEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_focus_out_event(void* self, void* event) {
    QMessageBox_FocusOutEvent((QMessageBox*)self, (QFocusEvent*)event);
}

void q_messagebox_qbase_focus_out_event(void* self, void* event) {
    QMessageBox_QBaseFocusOutEvent((QMessageBox*)self, (QFocusEvent*)event);
}

void q_messagebox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnFocusOutEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_enter_event(void* self, void* event) {
    QMessageBox_EnterEvent((QMessageBox*)self, (QEnterEvent*)event);
}

void q_messagebox_qbase_enter_event(void* self, void* event) {
    QMessageBox_QBaseEnterEvent((QMessageBox*)self, (QEnterEvent*)event);
}

void q_messagebox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnEnterEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_leave_event(void* self, void* event) {
    QMessageBox_LeaveEvent((QMessageBox*)self, (QEvent*)event);
}

void q_messagebox_qbase_leave_event(void* self, void* event) {
    QMessageBox_QBaseLeaveEvent((QMessageBox*)self, (QEvent*)event);
}

void q_messagebox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnLeaveEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_paint_event(void* self, void* event) {
    QMessageBox_PaintEvent((QMessageBox*)self, (QPaintEvent*)event);
}

void q_messagebox_qbase_paint_event(void* self, void* event) {
    QMessageBox_QBasePaintEvent((QMessageBox*)self, (QPaintEvent*)event);
}

void q_messagebox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnPaintEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_move_event(void* self, void* event) {
    QMessageBox_MoveEvent((QMessageBox*)self, (QMoveEvent*)event);
}

void q_messagebox_qbase_move_event(void* self, void* event) {
    QMessageBox_QBaseMoveEvent((QMessageBox*)self, (QMoveEvent*)event);
}

void q_messagebox_on_move_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnMoveEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_tablet_event(void* self, void* event) {
    QMessageBox_TabletEvent((QMessageBox*)self, (QTabletEvent*)event);
}

void q_messagebox_qbase_tablet_event(void* self, void* event) {
    QMessageBox_QBaseTabletEvent((QMessageBox*)self, (QTabletEvent*)event);
}

void q_messagebox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnTabletEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_action_event(void* self, void* event) {
    QMessageBox_ActionEvent((QMessageBox*)self, (QActionEvent*)event);
}

void q_messagebox_qbase_action_event(void* self, void* event) {
    QMessageBox_QBaseActionEvent((QMessageBox*)self, (QActionEvent*)event);
}

void q_messagebox_on_action_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnActionEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_drag_enter_event(void* self, void* event) {
    QMessageBox_DragEnterEvent((QMessageBox*)self, (QDragEnterEvent*)event);
}

void q_messagebox_qbase_drag_enter_event(void* self, void* event) {
    QMessageBox_QBaseDragEnterEvent((QMessageBox*)self, (QDragEnterEvent*)event);
}

void q_messagebox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnDragEnterEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_drag_move_event(void* self, void* event) {
    QMessageBox_DragMoveEvent((QMessageBox*)self, (QDragMoveEvent*)event);
}

void q_messagebox_qbase_drag_move_event(void* self, void* event) {
    QMessageBox_QBaseDragMoveEvent((QMessageBox*)self, (QDragMoveEvent*)event);
}

void q_messagebox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnDragMoveEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_drag_leave_event(void* self, void* event) {
    QMessageBox_DragLeaveEvent((QMessageBox*)self, (QDragLeaveEvent*)event);
}

void q_messagebox_qbase_drag_leave_event(void* self, void* event) {
    QMessageBox_QBaseDragLeaveEvent((QMessageBox*)self, (QDragLeaveEvent*)event);
}

void q_messagebox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnDragLeaveEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_drop_event(void* self, void* event) {
    QMessageBox_DropEvent((QMessageBox*)self, (QDropEvent*)event);
}

void q_messagebox_qbase_drop_event(void* self, void* event) {
    QMessageBox_QBaseDropEvent((QMessageBox*)self, (QDropEvent*)event);
}

void q_messagebox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnDropEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_hide_event(void* self, void* event) {
    QMessageBox_HideEvent((QMessageBox*)self, (QHideEvent*)event);
}

void q_messagebox_qbase_hide_event(void* self, void* event) {
    QMessageBox_QBaseHideEvent((QMessageBox*)self, (QHideEvent*)event);
}

void q_messagebox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnHideEvent((QMessageBox*)self, (intptr_t)callback);
}

bool q_messagebox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMessageBox_NativeEvent((QMessageBox*)self, qstring(eventType), message, result);
}

bool q_messagebox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMessageBox_QBaseNativeEvent((QMessageBox*)self, qstring(eventType), message, result);
}

void q_messagebox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QMessageBox_OnNativeEvent((QMessageBox*)self, (intptr_t)callback);
}

int32_t q_messagebox_metric(void* self, int32_t param1) {
    return QMessageBox_Metric((QMessageBox*)self, param1);
}

int32_t q_messagebox_qbase_metric(void* self, int32_t param1) {
    return QMessageBox_QBaseMetric((QMessageBox*)self, param1);
}

void q_messagebox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QMessageBox_OnMetric((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_init_painter(void* self, void* painter) {
    QMessageBox_InitPainter((QMessageBox*)self, (QPainter*)painter);
}

void q_messagebox_qbase_init_painter(void* self, void* painter) {
    QMessageBox_QBaseInitPainter((QMessageBox*)self, (QPainter*)painter);
}

void q_messagebox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnInitPainter((QMessageBox*)self, (intptr_t)callback);
}

QPaintDevice* q_messagebox_redirected(void* self, void* offset) {
    return QMessageBox_Redirected((QMessageBox*)self, (QPoint*)offset);
}

QPaintDevice* q_messagebox_qbase_redirected(void* self, void* offset) {
    return QMessageBox_QBaseRedirected((QMessageBox*)self, (QPoint*)offset);
}

void q_messagebox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QMessageBox_OnRedirected((QMessageBox*)self, (intptr_t)callback);
}

QPainter* q_messagebox_shared_painter(void* self) {
    return QMessageBox_SharedPainter((QMessageBox*)self);
}

QPainter* q_messagebox_qbase_shared_painter(void* self) {
    return QMessageBox_QBaseSharedPainter((QMessageBox*)self);
}

void q_messagebox_on_shared_painter(void* self, QPainter* (*callback)()) {
    QMessageBox_OnSharedPainter((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_input_method_event(void* self, void* param1) {
    QMessageBox_InputMethodEvent((QMessageBox*)self, (QInputMethodEvent*)param1);
}

void q_messagebox_qbase_input_method_event(void* self, void* param1) {
    QMessageBox_QBaseInputMethodEvent((QMessageBox*)self, (QInputMethodEvent*)param1);
}

void q_messagebox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnInputMethodEvent((QMessageBox*)self, (intptr_t)callback);
}

QVariant* q_messagebox_input_method_query(void* self, int64_t param1) {
    return QMessageBox_InputMethodQuery((QMessageBox*)self, param1);
}

QVariant* q_messagebox_qbase_input_method_query(void* self, int64_t param1) {
    return QMessageBox_QBaseInputMethodQuery((QMessageBox*)self, param1);
}

void q_messagebox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QMessageBox_OnInputMethodQuery((QMessageBox*)self, (intptr_t)callback);
}

bool q_messagebox_focus_next_prev_child(void* self, bool next) {
    return QMessageBox_FocusNextPrevChild((QMessageBox*)self, next);
}

bool q_messagebox_qbase_focus_next_prev_child(void* self, bool next) {
    return QMessageBox_QBaseFocusNextPrevChild((QMessageBox*)self, next);
}

void q_messagebox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QMessageBox_OnFocusNextPrevChild((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_timer_event(void* self, void* event) {
    QMessageBox_TimerEvent((QMessageBox*)self, (QTimerEvent*)event);
}

void q_messagebox_qbase_timer_event(void* self, void* event) {
    QMessageBox_QBaseTimerEvent((QMessageBox*)self, (QTimerEvent*)event);
}

void q_messagebox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnTimerEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_child_event(void* self, void* event) {
    QMessageBox_ChildEvent((QMessageBox*)self, (QChildEvent*)event);
}

void q_messagebox_qbase_child_event(void* self, void* event) {
    QMessageBox_QBaseChildEvent((QMessageBox*)self, (QChildEvent*)event);
}

void q_messagebox_on_child_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnChildEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_custom_event(void* self, void* event) {
    QMessageBox_CustomEvent((QMessageBox*)self, (QEvent*)event);
}

void q_messagebox_qbase_custom_event(void* self, void* event) {
    QMessageBox_QBaseCustomEvent((QMessageBox*)self, (QEvent*)event);
}

void q_messagebox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnCustomEvent((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_connect_notify(void* self, void* signal) {
    QMessageBox_ConnectNotify((QMessageBox*)self, (QMetaMethod*)signal);
}

void q_messagebox_qbase_connect_notify(void* self, void* signal) {
    QMessageBox_QBaseConnectNotify((QMessageBox*)self, (QMetaMethod*)signal);
}

void q_messagebox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnConnectNotify((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_disconnect_notify(void* self, void* signal) {
    QMessageBox_DisconnectNotify((QMessageBox*)self, (QMetaMethod*)signal);
}

void q_messagebox_qbase_disconnect_notify(void* self, void* signal) {
    QMessageBox_QBaseDisconnectNotify((QMessageBox*)self, (QMetaMethod*)signal);
}

void q_messagebox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnDisconnectNotify((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_adjust_position(void* self, void* param1) {
    QMessageBox_AdjustPosition((QMessageBox*)self, (QWidget*)param1);
}

void q_messagebox_qbase_adjust_position(void* self, void* param1) {
    QMessageBox_QBaseAdjustPosition((QMessageBox*)self, (QWidget*)param1);
}

void q_messagebox_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    QMessageBox_OnAdjustPosition((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_update_micro_focus(void* self) {
    QMessageBox_UpdateMicroFocus((QMessageBox*)self);
}

void q_messagebox_qbase_update_micro_focus(void* self) {
    QMessageBox_QBaseUpdateMicroFocus((QMessageBox*)self);
}

void q_messagebox_on_update_micro_focus(void* self, void (*callback)()) {
    QMessageBox_OnUpdateMicroFocus((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_create(void* self) {
    QMessageBox_Create((QMessageBox*)self);
}

void q_messagebox_qbase_create(void* self) {
    QMessageBox_QBaseCreate((QMessageBox*)self);
}

void q_messagebox_on_create(void* self, void (*callback)()) {
    QMessageBox_OnCreate((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_destroy(void* self) {
    QMessageBox_Destroy((QMessageBox*)self);
}

void q_messagebox_qbase_destroy(void* self) {
    QMessageBox_QBaseDestroy((QMessageBox*)self);
}

void q_messagebox_on_destroy(void* self, void (*callback)()) {
    QMessageBox_OnDestroy((QMessageBox*)self, (intptr_t)callback);
}

bool q_messagebox_focus_next_child(void* self) {
    return QMessageBox_FocusNextChild((QMessageBox*)self);
}

bool q_messagebox_qbase_focus_next_child(void* self) {
    return QMessageBox_QBaseFocusNextChild((QMessageBox*)self);
}

void q_messagebox_on_focus_next_child(void* self, bool (*callback)()) {
    QMessageBox_OnFocusNextChild((QMessageBox*)self, (intptr_t)callback);
}

bool q_messagebox_focus_previous_child(void* self) {
    return QMessageBox_FocusPreviousChild((QMessageBox*)self);
}

bool q_messagebox_qbase_focus_previous_child(void* self) {
    return QMessageBox_QBaseFocusPreviousChild((QMessageBox*)self);
}

void q_messagebox_on_focus_previous_child(void* self, bool (*callback)()) {
    QMessageBox_OnFocusPreviousChild((QMessageBox*)self, (intptr_t)callback);
}

QObject* q_messagebox_sender(void* self) {
    return QMessageBox_Sender((QMessageBox*)self);
}

QObject* q_messagebox_qbase_sender(void* self) {
    return QMessageBox_QBaseSender((QMessageBox*)self);
}

void q_messagebox_on_sender(void* self, QObject* (*callback)()) {
    QMessageBox_OnSender((QMessageBox*)self, (intptr_t)callback);
}

int32_t q_messagebox_sender_signal_index(void* self) {
    return QMessageBox_SenderSignalIndex((QMessageBox*)self);
}

int32_t q_messagebox_qbase_sender_signal_index(void* self) {
    return QMessageBox_QBaseSenderSignalIndex((QMessageBox*)self);
}

void q_messagebox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QMessageBox_OnSenderSignalIndex((QMessageBox*)self, (intptr_t)callback);
}

int32_t q_messagebox_receivers(void* self, const char* signal) {
    return QMessageBox_Receivers((QMessageBox*)self, signal);
}

int32_t q_messagebox_qbase_receivers(void* self, const char* signal) {
    return QMessageBox_QBaseReceivers((QMessageBox*)self, signal);
}

void q_messagebox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QMessageBox_OnReceivers((QMessageBox*)self, (intptr_t)callback);
}

bool q_messagebox_is_signal_connected(void* self, void* signal) {
    return QMessageBox_IsSignalConnected((QMessageBox*)self, (QMetaMethod*)signal);
}

bool q_messagebox_qbase_is_signal_connected(void* self, void* signal) {
    return QMessageBox_QBaseIsSignalConnected((QMessageBox*)self, (QMetaMethod*)signal);
}

void q_messagebox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QMessageBox_OnIsSignalConnected((QMessageBox*)self, (intptr_t)callback);
}

double q_messagebox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QMessageBox_GetDecodedMetricF((QMessageBox*)self, metricA, metricB);
}

double q_messagebox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QMessageBox_QBaseGetDecodedMetricF((QMessageBox*)self, metricA, metricB);
}

void q_messagebox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QMessageBox_OnGetDecodedMetricF((QMessageBox*)self, (intptr_t)callback);
}

void q_messagebox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_messagebox_delete(void* self) {
    QMessageBox_Delete((QMessageBox*)(self));
}
