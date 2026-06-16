#include "../extras-kconfig/libkconfig.hpp"
#include "libkguiitem.hpp"
#include "libkmessageboxdontaskagaininterface.hpp"
#include "libkmessageboxnotifyinterface.hpp"
#include "../libqdialog.hpp"
#include "../libqdialogbuttonbox.hpp"
#include "../libqicon.hpp"
#include "../libqwidget.hpp"
#include "libkmessagebox.hpp"
#include "libkmessagebox.h"

int32_t k_messagebox_question_two_actions(void* parent, const char* text, const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options) {
    return KMessageBox_QuestionTwoActions((QWidget*)parent, qstring(text), qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, qstring(dontAskAgainName), options);
}

int32_t k_messagebox_question_two_actions_cancel(void* parent, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options) {
    return KMessageBox_QuestionTwoActionsCancel((QWidget*)parent, qstring(text), qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, (KGuiItem*)cancelAction, qstring(dontAskAgainName), options);
}

int32_t k_messagebox_question_two_actions_list(void* parent, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_question_two_actions_list\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    int32_t _out = KMessageBox_QuestionTwoActionsList((QWidget*)parent, qstring(text), strlist_list, qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, qstring(dontAskAgainName), options);
    free(strlist_qstr);
    return _out;
}

int32_t k_messagebox_warning_two_actions(void* parent, const char* text, const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options) {
    return KMessageBox_WarningTwoActions((QWidget*)parent, qstring(text), qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, qstring(dontAskAgainName), options);
}

int32_t k_messagebox_warning_two_actions_list(void* parent, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_two_actions_list\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    int32_t _out = KMessageBox_WarningTwoActionsList((QWidget*)parent, qstring(text), strlist_list, qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, qstring(dontAskAgainName), options);
    free(strlist_qstr);
    return _out;
}

int32_t k_messagebox_warning_continue_cancel(void* parent, const char* text, const char* title, void* buttonContinue, void* buttonCancel, const char* dontAskAgainName, int32_t options) {
    return KMessageBox_WarningContinueCancel((QWidget*)parent, qstring(text), qstring(title), (KGuiItem*)buttonContinue, (KGuiItem*)buttonCancel, qstring(dontAskAgainName), options);
}

int32_t k_messagebox_warning_continue_cancel_detailed(void* parent, const char* text, const char* title, void* buttonContinue, void* buttonCancel, const char* dontAskAgainName, int32_t options, const char* details) {
    return KMessageBox_WarningContinueCancelDetailed((QWidget*)parent, qstring(text), qstring(title), (KGuiItem*)buttonContinue, (KGuiItem*)buttonCancel, qstring(dontAskAgainName), options, qstring(details));
}

int32_t k_messagebox_warning_continue_cancel_list(void* parent, const char* text, const char* strlist[static 1], const char* title, void* buttonContinue, void* buttonCancel, const char* dontAskAgainName, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_continue_cancel_list\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    int32_t _out = KMessageBox_WarningContinueCancelList((QWidget*)parent, qstring(text), strlist_list, qstring(title), (KGuiItem*)buttonContinue, (KGuiItem*)buttonCancel, qstring(dontAskAgainName), options);
    free(strlist_qstr);
    return _out;
}

int32_t k_messagebox_warning_two_actions_cancel(void* parent, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options) {
    return KMessageBox_WarningTwoActionsCancel((QWidget*)parent, qstring(text), qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, (KGuiItem*)cancelAction, qstring(dontAskAgainName), options);
}

int32_t k_messagebox_warning_two_actions_cancel_list(void* parent, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_two_actions_cancel_list\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    int32_t _out = KMessageBox_WarningTwoActionsCancelList((QWidget*)parent, qstring(text), strlist_list, qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, (KGuiItem*)cancelAction, qstring(dontAskAgainName), options);
    free(strlist_qstr);
    return _out;
}

void k_messagebox_error(void* parent, const char* text, const char* title, int32_t options) {
    KMessageBox_Error((QWidget*)parent, qstring(text), qstring(title), options);
}

void k_messagebox_error2(void* parent, const char* text, const char* title, void* buttonOk, int32_t options) {
    KMessageBox_Error2((QWidget*)parent, qstring(text), qstring(title), (KGuiItem*)buttonOk, options);
}

void k_messagebox_error_list(void* parent, const char* text, const char* strlist[static 1], const char* title, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_error_list\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    KMessageBox_ErrorList((QWidget*)parent, qstring(text), strlist_list, qstring(title), options);
    free(strlist_qstr);
}

void k_messagebox_detailed_error(void* parent, const char* text, const char* details, const char* title, int32_t options) {
    KMessageBox_DetailedError((QWidget*)parent, qstring(text), qstring(details), qstring(title), options);
}

void k_messagebox_detailed_error2(void* parent, const char* text, const char* details, const char* title, void* buttonOk, int32_t options) {
    KMessageBox_DetailedError2((QWidget*)parent, qstring(text), qstring(details), qstring(title), (KGuiItem*)buttonOk, options);
}

void k_messagebox_information(void* parent, const char* text, const char* title, const char* dontShowAgainName, int32_t options) {
    KMessageBox_Information((QWidget*)parent, qstring(text), qstring(title), qstring(dontShowAgainName), options);
}

void k_messagebox_information_list(void* parent, const char* text, const char* strlist[static 1], const char* title, const char* dontShowAgainName, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_information_list\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    KMessageBox_InformationList((QWidget*)parent, qstring(text), strlist_list, qstring(title), qstring(dontShowAgainName), options);
    free(strlist_qstr);
}

void k_messagebox_enable_all_messages() {
    KMessageBox_EnableAllMessages();
}

void k_messagebox_enable_message(const char* dontShowAgainName) {
    KMessageBox_EnableMessage(qstring(dontShowAgainName));
}

int32_t k_messagebox_message_box(void* parent, int32_t type, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontShowAskAgainName, int32_t options) {
    return KMessageBox_MessageBox((QWidget*)parent, type, qstring(text), qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, (KGuiItem*)cancelAction, qstring(dontShowAskAgainName), options);
}

bool k_messagebox_should_be_shown_two_actions(const char* dontShowAgainName, int32_t* result) {
    return KMessageBox_ShouldBeShownTwoActions(qstring(dontShowAgainName), result);
}

bool k_messagebox_should_be_shown_continue(const char* dontShowAgainName) {
    return KMessageBox_ShouldBeShownContinue(qstring(dontShowAgainName));
}

void k_messagebox_save_dont_show_again_two_actions(const char* dontShowAgainName, int32_t result) {
    KMessageBox_SaveDontShowAgainTwoActions(qstring(dontShowAgainName), result);
}

void k_messagebox_save_dont_show_again_continue(const char* dontShowAgainName) {
    KMessageBox_SaveDontShowAgainContinue(qstring(dontShowAgainName));
}

void k_messagebox_set_dont_show_again_config(void* cfg) {
    KMessageBox_SetDontShowAgainConfig((KConfig*)cfg);
}

void k_messagebox_set_dont_show_again_interface(void* dontAskAgainInterface) {
    KMessageBox_SetDontShowAgainInterface((KMessageBoxDontAskAgainInterface*)dontAskAgainInterface);
}

void k_messagebox_set_notify_interface(void* notifyInterface) {
    KMessageBox_SetNotifyInterface((KMessageBoxNotifyInterface*)notifyInterface);
}

int32_t k_messagebox_create_k_message_box(void* dialog, void* buttons, int32_t icon, const char* text, const char* strlist[static 1], const char* ask, bool* checkboxReturn, int32_t options, const char* details) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_create_k_message_box\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    int32_t _out = KMessageBox_CreateKMessageBox((QDialog*)dialog, (QDialogButtonBox*)buttons, icon, qstring(text), strlist_list, qstring(ask), (bool*)checkboxReturn, options, qstring(details));
    free(strlist_qstr);
    return _out;
}

int32_t k_messagebox_create_k_message_box2(void* dialog, void* buttons, void* icon, const char* text, const char* strlist[static 1], const char* ask, bool* checkboxReturn, int32_t options, const char* details, int32_t notifyType) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_create_k_message_box2\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    int32_t _out = KMessageBox_CreateKMessageBox2((QDialog*)dialog, (QDialogButtonBox*)buttons, (QIcon*)icon, qstring(text), strlist_list, qstring(ask), (bool*)checkboxReturn, options, qstring(details), notifyType);
    free(strlist_qstr);
    return _out;
}

int32_t k_messagebox_question_two_actions_w_id(uintptr_t parent_id, const char* text, const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options) {
    return KMessageBox_QuestionTwoActionsWId(parent_id, qstring(text), qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, qstring(dontAskAgainName), options);
}

int32_t k_messagebox_question_two_actions_cancel_w_id(uintptr_t parent_id, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options) {
    return KMessageBox_QuestionTwoActionsCancelWId(parent_id, qstring(text), qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, (KGuiItem*)cancelAction, qstring(dontAskAgainName), options);
}

int32_t k_messagebox_question_two_actions_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_question_two_actions_list_w_id\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    int32_t _out = KMessageBox_QuestionTwoActionsListWId(parent_id, qstring(text), strlist_list, qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, qstring(dontAskAgainName), options);
    free(strlist_qstr);
    return _out;
}

int32_t k_messagebox_warning_two_actions_w_id(uintptr_t parent_id, const char* text, const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options) {
    return KMessageBox_WarningTwoActionsWId(parent_id, qstring(text), qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, qstring(dontAskAgainName), options);
}

int32_t k_messagebox_warning_two_actions_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_two_actions_list_w_id\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    int32_t _out = KMessageBox_WarningTwoActionsListWId(parent_id, qstring(text), strlist_list, qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, qstring(dontAskAgainName), options);
    free(strlist_qstr);
    return _out;
}

int32_t k_messagebox_warning_continue_cancel_w_id(uintptr_t parent_id, const char* text, const char* title, void* buttonContinue, void* buttonCancel, const char* dontAskAgainName, int32_t options) {
    return KMessageBox_WarningContinueCancelWId(parent_id, qstring(text), qstring(title), (KGuiItem*)buttonContinue, (KGuiItem*)buttonCancel, qstring(dontAskAgainName), options);
}

int32_t k_messagebox_warning_continue_cancel_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, void* buttonContinue, void* buttonCancel, const char* dontAskAgainName, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_continue_cancel_list_w_id\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    int32_t _out = KMessageBox_WarningContinueCancelListWId(parent_id, qstring(text), strlist_list, qstring(title), (KGuiItem*)buttonContinue, (KGuiItem*)buttonCancel, qstring(dontAskAgainName), options);
    free(strlist_qstr);
    return _out;
}

int32_t k_messagebox_warning_two_actions_cancel_w_id(uintptr_t parent_id, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options) {
    return KMessageBox_WarningTwoActionsCancelWId(parent_id, qstring(text), qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, (KGuiItem*)cancelAction, qstring(dontAskAgainName), options);
}

int32_t k_messagebox_warning_two_actions_cancel_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_two_actions_cancel_list_w_id\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    int32_t _out = KMessageBox_WarningTwoActionsCancelListWId(parent_id, qstring(text), strlist_list, qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, (KGuiItem*)cancelAction, qstring(dontAskAgainName), options);
    free(strlist_qstr);
    return _out;
}

void k_messagebox_error_w_id(uintptr_t parent_id, const char* text, const char* title, int32_t options) {
    KMessageBox_ErrorWId(parent_id, qstring(text), qstring(title), options);
}

void k_messagebox_error_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_error_list_w_id\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    KMessageBox_ErrorListWId(parent_id, qstring(text), strlist_list, qstring(title), options);
    free(strlist_qstr);
}

void k_messagebox_detailed_error_w_id(uintptr_t parent_id, const char* text, const char* details, const char* title, int32_t options) {
    KMessageBox_DetailedErrorWId(parent_id, qstring(text), qstring(details), qstring(title), options);
}

void k_messagebox_detailed_error_w_id2(uintptr_t parent_id, const char* text, const char* details, const char* title, void* buttonOk, int32_t options) {
    KMessageBox_DetailedErrorWId2(parent_id, qstring(text), qstring(details), qstring(title), (KGuiItem*)buttonOk, options);
}

void k_messagebox_information_w_id(uintptr_t parent_id, const char* text, const char* title, const char* dontShowAgainName, int32_t options) {
    KMessageBox_InformationWId(parent_id, qstring(text), qstring(title), qstring(dontShowAgainName), options);
}

void k_messagebox_information_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, const char* dontShowAgainName, int32_t options) {
    size_t strlist_len = libqt_strv_length(strlist);
    libqt_string* strlist_qstr = (libqt_string*)malloc(strlist_len * sizeof(libqt_string));
    if (strlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_information_list_w_id\n");
        abort();
    }
    for (size_t i = 0; i < strlist_len; ++i) {
        strlist_qstr[i] = qstring(strlist[i]);
    }
    libqt_list strlist_list = qlist(strlist_qstr, strlist_len);
    KMessageBox_InformationListWId(parent_id, qstring(text), strlist_list, qstring(title), qstring(dontShowAgainName), options);
    free(strlist_qstr);
}

int32_t k_messagebox_message_box_w_id(uintptr_t parent_id, int32_t type, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontShowAskAgainName, int32_t options) {
    return KMessageBox_MessageBoxWId(parent_id, type, qstring(text), qstring(title), (KGuiItem*)primaryAction, (KGuiItem*)secondaryAction, (KGuiItem*)cancelAction, qstring(dontShowAskAgainName), options);
}
