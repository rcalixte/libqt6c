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

int32_t k_messagebox_question_two_actions(void* param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int32_t param7) {
    return KMessageBox_QuestionTwoActions((QWidget*)param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, qstring(param6), param7);
}

int32_t k_messagebox_question_two_actions_cancel(void* param1, const char* param2, const char* param3, void* param4, void* param5, void* param6, const char* param7, int32_t param8) {
    return KMessageBox_QuestionTwoActionsCancel((QWidget*)param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, (KGuiItem*)param6, qstring(param7), param8);
}

int32_t k_messagebox_question_two_actions_list(void* param1, const char* param2, const char* param3[static 1], const char* param4, void* param5, void* param6, const char* param7, int32_t param8) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_question_two_actions_list");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    int32_t _out = KMessageBox_QuestionTwoActionsList((QWidget*)param1, qstring(param2), param3_list, qstring(param4), (KGuiItem*)param5, (KGuiItem*)param6, qstring(param7), param8);
    free(param3_qstr);
    return _out;
}

int32_t k_messagebox_warning_two_actions(void* param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int32_t param7) {
    return KMessageBox_WarningTwoActions((QWidget*)param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, qstring(param6), param7);
}

int32_t k_messagebox_warning_two_actions_list(void* param1, const char* param2, const char* param3[static 1], const char* param4, void* param5, void* param6, const char* param7, int32_t param8) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_two_actions_list");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    int32_t _out = KMessageBox_WarningTwoActionsList((QWidget*)param1, qstring(param2), param3_list, qstring(param4), (KGuiItem*)param5, (KGuiItem*)param6, qstring(param7), param8);
    free(param3_qstr);
    return _out;
}

int32_t k_messagebox_warning_continue_cancel(void* param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int32_t param7) {
    return KMessageBox_WarningContinueCancel((QWidget*)param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, qstring(param6), param7);
}

int32_t k_messagebox_warning_continue_cancel_detailed(void* param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int32_t param7, const char* param8) {
    return KMessageBox_WarningContinueCancelDetailed((QWidget*)param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, qstring(param6), param7, qstring(param8));
}

int32_t k_messagebox_warning_continue_cancel_list(void* param1, const char* param2, const char* param3[static 1], const char* param4, void* param5, void* param6, const char* param7, int32_t param8) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_continue_cancel_list");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    int32_t _out = KMessageBox_WarningContinueCancelList((QWidget*)param1, qstring(param2), param3_list, qstring(param4), (KGuiItem*)param5, (KGuiItem*)param6, qstring(param7), param8);
    free(param3_qstr);
    return _out;
}

int32_t k_messagebox_warning_two_actions_cancel(void* param1, const char* param2, const char* param3, void* param4, void* param5, void* param6, const char* param7, int32_t param8) {
    return KMessageBox_WarningTwoActionsCancel((QWidget*)param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, (KGuiItem*)param6, qstring(param7), param8);
}

int32_t k_messagebox_warning_two_actions_cancel_list(void* param1, const char* param2, const char* param3[static 1], const char* param4, void* param5, void* param6, void* param7, const char* param8, int32_t param9) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_two_actions_cancel_list");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    int32_t _out = KMessageBox_WarningTwoActionsCancelList((QWidget*)param1, qstring(param2), param3_list, qstring(param4), (KGuiItem*)param5, (KGuiItem*)param6, (KGuiItem*)param7, qstring(param8), param9);
    free(param3_qstr);
    return _out;
}

void k_messagebox_error(void* param1, const char* param2, const char* param3, int32_t param4) {
    KMessageBox_Error((QWidget*)param1, qstring(param2), qstring(param3), param4);
}

void k_messagebox_error2(void* param1, const char* param2, const char* param3, void* param4, int32_t param5) {
    KMessageBox_Error2((QWidget*)param1, qstring(param2), qstring(param3), (KGuiItem*)param4, param5);
}

void k_messagebox_error_list(void* param1, const char* param2, const char* param3[static 1], const char* param4, int32_t param5) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_error_list");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    KMessageBox_ErrorList((QWidget*)param1, qstring(param2), param3_list, qstring(param4), param5);
    free(param3_qstr);
}

void k_messagebox_detailed_error(void* param1, const char* param2, const char* param3, const char* param4, int32_t param5) {
    KMessageBox_DetailedError((QWidget*)param1, qstring(param2), qstring(param3), qstring(param4), param5);
}

void k_messagebox_detailed_error2(void* param1, const char* param2, const char* param3, const char* param4, void* param5, int32_t param6) {
    KMessageBox_DetailedError2((QWidget*)param1, qstring(param2), qstring(param3), qstring(param4), (KGuiItem*)param5, param6);
}

void k_messagebox_information(void* param1, const char* param2, const char* param3, const char* param4, int32_t param5) {
    KMessageBox_Information((QWidget*)param1, qstring(param2), qstring(param3), qstring(param4), param5);
}

void k_messagebox_information_list(void* param1, const char* param2, const char* param3[static 1], const char* param4, const char* param5, int32_t param6) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_information_list");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    KMessageBox_InformationList((QWidget*)param1, qstring(param2), param3_list, qstring(param4), qstring(param5), param6);
    free(param3_qstr);
}

void k_messagebox_enable_all_messages() {
    KMessageBox_EnableAllMessages();
}

void k_messagebox_enable_message(const char* param1) {
    KMessageBox_EnableMessage(qstring(param1));
}

int32_t k_messagebox_message_box(void* param1, int32_t param2, const char* param3, const char* param4, void* param5, void* param6, void* param7, const char* param8, int32_t param9) {
    return KMessageBox_MessageBox((QWidget*)param1, param2, qstring(param3), qstring(param4), (KGuiItem*)param5, (KGuiItem*)param6, (KGuiItem*)param7, qstring(param8), param9);
}

bool k_messagebox_should_be_shown_two_actions(const char* param1, int32_t* param2) {
    return KMessageBox_ShouldBeShownTwoActions(qstring(param1), param2);
}

bool k_messagebox_should_be_shown_continue(const char* param1) {
    return KMessageBox_ShouldBeShownContinue(qstring(param1));
}

void k_messagebox_save_dont_show_again_two_actions(const char* param1, int32_t param2) {
    KMessageBox_SaveDontShowAgainTwoActions(qstring(param1), param2);
}

void k_messagebox_save_dont_show_again_continue(const char* param1) {
    KMessageBox_SaveDontShowAgainContinue(qstring(param1));
}

void k_messagebox_set_dont_show_again_config(void* param1) {
    KMessageBox_SetDontShowAgainConfig((KConfig*)param1);
}

void k_messagebox_set_dont_show_again_interface(void* param1) {
    KMessageBox_SetDontShowAgainInterface((KMessageBoxDontAskAgainInterface*)param1);
}

void k_messagebox_set_notify_interface(void* param1) {
    KMessageBox_SetNotifyInterface((KMessageBoxNotifyInterface*)param1);
}

int32_t k_messagebox_create_k_message_box(void* param1, void* param2, int32_t param3, const char* param4, const char* param5[static 1], const char* param6, bool* param7, int32_t param8, const char* param9) {
    size_t param5_len = libqt_strv_length(param5);
    libqt_string* param5_qstr = (libqt_string*)malloc(param5_len * sizeof(libqt_string));
    if (param5_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_create_k_message_box");
        abort();
    }
    for (size_t i = 0; i < param5_len; ++i) {
        param5_qstr[i] = qstring(param5[i]);
    }
    libqt_list param5_list = qlist(param5_qstr, param5_len);
    int32_t _out = KMessageBox_CreateKMessageBox((QDialog*)param1, (QDialogButtonBox*)param2, param3, qstring(param4), param5_list, qstring(param6), (bool*)param7, param8, qstring(param9));
    free(param5_qstr);
    return _out;
}

int32_t k_messagebox_create_k_message_box2(void* param1, void* param2, void* param3, const char* param4, const char* param5[static 1], const char* param6, bool* param7, int32_t param8, const char* param9, int32_t param10) {
    size_t param5_len = libqt_strv_length(param5);
    libqt_string* param5_qstr = (libqt_string*)malloc(param5_len * sizeof(libqt_string));
    if (param5_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_create_k_message_box2");
        abort();
    }
    for (size_t i = 0; i < param5_len; ++i) {
        param5_qstr[i] = qstring(param5[i]);
    }
    libqt_list param5_list = qlist(param5_qstr, param5_len);
    int32_t _out = KMessageBox_CreateKMessageBox2((QDialog*)param1, (QDialogButtonBox*)param2, (QIcon*)param3, qstring(param4), param5_list, qstring(param6), (bool*)param7, param8, qstring(param9), param10);
    free(param5_qstr);
    return _out;
}

int32_t k_messagebox_question_two_actions_w_id(uintptr_t param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int32_t param7) {
    return KMessageBox_QuestionTwoActionsWId(param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, qstring(param6), param7);
}

int32_t k_messagebox_question_two_actions_cancel_w_id(uintptr_t param1, const char* param2, const char* param3, void* param4, void* param5, void* param6, const char* param7, int32_t param8) {
    return KMessageBox_QuestionTwoActionsCancelWId(param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, (KGuiItem*)param6, qstring(param7), param8);
}

int32_t k_messagebox_question_two_actions_list_w_id(uintptr_t param1, const char* param2, const char* param3[static 1], const char* param4, void* param5, void* param6, const char* param7, int32_t param8) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_question_two_actions_list_w_id");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    int32_t _out = KMessageBox_QuestionTwoActionsListWId(param1, qstring(param2), param3_list, qstring(param4), (KGuiItem*)param5, (KGuiItem*)param6, qstring(param7), param8);
    free(param3_qstr);
    return _out;
}

int32_t k_messagebox_warning_two_actions_w_id(uintptr_t param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int32_t param7) {
    return KMessageBox_WarningTwoActionsWId(param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, qstring(param6), param7);
}

int32_t k_messagebox_warning_two_actions_list_w_id(uintptr_t param1, const char* param2, const char* param3[static 1], const char* param4, void* param5, void* param6, const char* param7, int32_t param8) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_two_actions_list_w_id");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    int32_t _out = KMessageBox_WarningTwoActionsListWId(param1, qstring(param2), param3_list, qstring(param4), (KGuiItem*)param5, (KGuiItem*)param6, qstring(param7), param8);
    free(param3_qstr);
    return _out;
}

int32_t k_messagebox_warning_continue_cancel_w_id(uintptr_t param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int32_t param7) {
    return KMessageBox_WarningContinueCancelWId(param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, qstring(param6), param7);
}

int32_t k_messagebox_warning_continue_cancel_list_w_id(uintptr_t param1, const char* param2, const char* param3[static 1], const char* param4, void* param5, void* param6, const char* param7, int32_t param8) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_continue_cancel_list_w_id");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    int32_t _out = KMessageBox_WarningContinueCancelListWId(param1, qstring(param2), param3_list, qstring(param4), (KGuiItem*)param5, (KGuiItem*)param6, qstring(param7), param8);
    free(param3_qstr);
    return _out;
}

int32_t k_messagebox_warning_two_actions_cancel_w_id(uintptr_t param1, const char* param2, const char* param3, void* param4, void* param5, void* param6, const char* param7, int32_t param8) {
    return KMessageBox_WarningTwoActionsCancelWId(param1, qstring(param2), qstring(param3), (KGuiItem*)param4, (KGuiItem*)param5, (KGuiItem*)param6, qstring(param7), param8);
}

int32_t k_messagebox_warning_two_actions_cancel_list_w_id(uintptr_t param1, const char* param2, const char* param3[static 1], const char* param4, void* param5, void* param6, void* param7, const char* param8, int32_t param9) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_warning_two_actions_cancel_list_w_id");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    int32_t _out = KMessageBox_WarningTwoActionsCancelListWId(param1, qstring(param2), param3_list, qstring(param4), (KGuiItem*)param5, (KGuiItem*)param6, (KGuiItem*)param7, qstring(param8), param9);
    free(param3_qstr);
    return _out;
}

void k_messagebox_error_w_id(uintptr_t param1, const char* param2, const char* param3, int32_t param4) {
    KMessageBox_ErrorWId(param1, qstring(param2), qstring(param3), param4);
}

void k_messagebox_error_list_w_id(uintptr_t param1, const char* param2, const char* param3[static 1], const char* param4, int32_t param5) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_error_list_w_id");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    KMessageBox_ErrorListWId(param1, qstring(param2), param3_list, qstring(param4), param5);
    free(param3_qstr);
}

void k_messagebox_detailed_error_w_id(uintptr_t param1, const char* param2, const char* param3, const char* param4, int32_t param5) {
    KMessageBox_DetailedErrorWId(param1, qstring(param2), qstring(param3), qstring(param4), param5);
}

void k_messagebox_detailed_error_w_id2(uintptr_t param1, const char* param2, const char* param3, const char* param4, void* param5, int32_t param6) {
    KMessageBox_DetailedErrorWId2(param1, qstring(param2), qstring(param3), qstring(param4), (KGuiItem*)param5, param6);
}

void k_messagebox_information_w_id(uintptr_t param1, const char* param2, const char* param3, const char* param4, int32_t param5) {
    KMessageBox_InformationWId(param1, qstring(param2), qstring(param3), qstring(param4), param5);
}

void k_messagebox_information_list_w_id(uintptr_t param1, const char* param2, const char* param3[static 1], const char* param4, const char* param5, int32_t param6) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_messagebox_information_list_w_id");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    KMessageBox_InformationListWId(param1, qstring(param2), param3_list, qstring(param4), qstring(param5), param6);
    free(param3_qstr);
}

int32_t k_messagebox_message_box_w_id(uintptr_t param1, int32_t param2, const char* param3, const char* param4, void* param5, void* param6, void* param7, const char* param8, int32_t param9) {
    return KMessageBox_MessageBoxWId(param1, param2, qstring(param3), qstring(param4), (KGuiItem*)param5, (KGuiItem*)param6, (KGuiItem*)param7, qstring(param8), param9);
}
