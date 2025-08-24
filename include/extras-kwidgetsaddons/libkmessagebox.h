#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKMESSAGEBOX_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKMESSAGEBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kmessagebox.html

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#questionTwoActions)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 const char*
/// @param param7 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_question_two_actions(void* param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int64_t param7);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#questionTwoActionsCancel)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 const char*
/// @param param8 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_question_two_actions_cancel(void* param1, const char* param2, const char* param3, void* param4, void* param5, void* param6, const char* param7, int64_t param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#questionTwoActionsList)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 const char*
/// @param param8 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_question_two_actions_list(void* param1, const char* param2, const char* param3[], const char* param4, void* param5, void* param6, const char* param7, int64_t param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningTwoActions)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 const char*
/// @param param7 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_two_actions(void* param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int64_t param7);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningTwoActionsList)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 const char*
/// @param param8 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_two_actions_list(void* param1, const char* param2, const char* param3[], const char* param4, void* param5, void* param6, const char* param7, int64_t param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningContinueCancel)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 const char*
/// @param param7 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_continue_cancel(void* param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int64_t param7);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningContinueCancelDetailed)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 const char*
/// @param param7 flag of enum KMessageBox__Option
/// @param param8 const char*
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_continue_cancel_detailed(void* param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int64_t param7, const char* param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningContinueCancelList)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 const char*
/// @param param8 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_continue_cancel_list(void* param1, const char* param2, const char* param3[], const char* param4, void* param5, void* param6, const char* param7, int64_t param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningTwoActionsCancel)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 const char*
/// @param param8 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_two_actions_cancel(void* param1, const char* param2, const char* param3, void* param4, void* param5, void* param6, const char* param7, int64_t param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningTwoActionsCancelList)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 KGuiItem*
/// @param param8 const char*
/// @param param9 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_two_actions_cancel_list(void* param1, const char* param2, const char* param3[], const char* param4, void* param5, void* param6, void* param7, const char* param8, int64_t param9);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#error)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 flag of enum KMessageBox__Option
void k_messagebox_error(void* param1, const char* param2, const char* param3, int64_t param4);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#error)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 flag of enum KMessageBox__Option
void k_messagebox_error2(void* param1, const char* param2, const char* param3, void* param4, int64_t param5);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#errorList)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 flag of enum KMessageBox__Option
void k_messagebox_error_list(void* param1, const char* param2, const char* param3[], const char* param4, int64_t param5);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#detailedError)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 const char*
/// @param param5 flag of enum KMessageBox__Option
void k_messagebox_detailed_error(void* param1, const char* param2, const char* param3, const char* param4, int64_t param5);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#detailedError)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 flag of enum KMessageBox__Option
void k_messagebox_detailed_error2(void* param1, const char* param2, const char* param3, const char* param4, void* param5, int64_t param6);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#information)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 const char*
/// @param param5 flag of enum KMessageBox__Option
void k_messagebox_information(void* param1, const char* param2, const char* param3, const char* param4, int64_t param5);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#informationList)
///
/// @param param1 QWidget*
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 const char*
/// @param param6 flag of enum KMessageBox__Option
void k_messagebox_information_list(void* param1, const char* param2, const char* param3[], const char* param4, const char* param5, int64_t param6);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#enableAllMessages)
///
void k_messagebox_enable_all_messages();

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#enableMessage)
///
/// @param param1 const char*
void k_messagebox_enable_message(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#messageBox)
///
/// @param param1 QWidget*
/// @param param2 enum KMessageBox__DialogType
/// @param param3 const char*
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 KGuiItem*
/// @param param8 const char*
/// @param param9 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_message_box(void* param1, int32_t param2, const char* param3, const char* param4, void* param5, void* param6, void* param7, const char* param8, int64_t param9);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#shouldBeShownTwoActions)
///
/// @param param1 const char*
/// @param param2 enum KMessageBox__ButtonCode*
bool k_messagebox_should_be_shown_two_actions(const char* param1, int32_t* param2);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#shouldBeShownContinue)
///
/// @param param1 const char*
bool k_messagebox_should_be_shown_continue(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#saveDontShowAgainTwoActions)
///
/// @param param1 const char*
/// @param param2 enum KMessageBox__ButtonCode
void k_messagebox_save_dont_show_again_two_actions(const char* param1, int32_t param2);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#saveDontShowAgainContinue)
///
/// @param param1 const char*
void k_messagebox_save_dont_show_again_continue(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#setDontShowAgainConfig)
///
/// @param param1 KConfig*
void k_messagebox_set_dont_show_again_config(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#setDontShowAgainInterface)
///
/// @param param1 KMessageBoxDontAskAgainInterface*
void k_messagebox_set_dont_show_again_interface(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#setNotifyInterface)
///
/// @param param1 KMessageBoxNotifyInterface*
void k_messagebox_set_notify_interface(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#createKMessageBox)
///
/// @param param1 QDialog*
/// @param param2 QDialogButtonBox*
/// @param param3 enum QMessageBox__Icon
/// @param param4 const char*
/// @param param5 const char**
/// @param param6 const char*
/// @param param7 bool*
/// @param param8 flag of enum KMessageBox__Option
/// @param param9 const char*
///
/// @return enum QDialogButtonBox__StandardButton
int32_t k_messagebox_create_k_message_box(void* param1, void* param2, int32_t param3, const char* param4, const char* param5[], const char* param6, bool* param7, int64_t param8, const char* param9);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#createKMessageBox)
///
/// @param param1 QDialog*
/// @param param2 QDialogButtonBox*
/// @param param3 QIcon*
/// @param param4 const char*
/// @param param5 const char**
/// @param param6 const char*
/// @param param7 bool*
/// @param param8 flag of enum KMessageBox__Option
/// @param param9 const char*
/// @param param10 enum QMessageBox__Icon
///
/// @return enum QDialogButtonBox__StandardButton
int32_t k_messagebox_create_k_message_box2(void* param1, void* param2, void* param3, const char* param4, const char* param5[], const char* param6, bool* param7, int64_t param8, const char* param9, int32_t param10);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#questionTwoActionsWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 const char*
/// @param param7 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_question_two_actions_w_id(uintptr_t param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int64_t param7);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#questionTwoActionsCancelWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 const char*
/// @param param8 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_question_two_actions_cancel_w_id(uintptr_t param1, const char* param2, const char* param3, void* param4, void* param5, void* param6, const char* param7, int64_t param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#questionTwoActionsListWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 const char*
/// @param param8 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_question_two_actions_list_w_id(uintptr_t param1, const char* param2, const char* param3[], const char* param4, void* param5, void* param6, const char* param7, int64_t param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningTwoActionsWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 const char*
/// @param param7 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_two_actions_w_id(uintptr_t param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int64_t param7);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningTwoActionsListWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 const char*
/// @param param8 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_two_actions_list_w_id(uintptr_t param1, const char* param2, const char* param3[], const char* param4, void* param5, void* param6, const char* param7, int64_t param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningContinueCancelWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 const char*
/// @param param7 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_continue_cancel_w_id(uintptr_t param1, const char* param2, const char* param3, void* param4, void* param5, const char* param6, int64_t param7);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningContinueCancelListWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 const char*
/// @param param8 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_continue_cancel_list_w_id(uintptr_t param1, const char* param2, const char* param3[], const char* param4, void* param5, void* param6, const char* param7, int64_t param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningTwoActionsCancelWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 KGuiItem*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 const char*
/// @param param8 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_two_actions_cancel_w_id(uintptr_t param1, const char* param2, const char* param3, void* param4, void* param5, void* param6, const char* param7, int64_t param8);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#warningTwoActionsCancelListWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 KGuiItem*
/// @param param8 const char*
/// @param param9 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_warning_two_actions_cancel_list_w_id(uintptr_t param1, const char* param2, const char* param3[], const char* param4, void* param5, void* param6, void* param7, const char* param8, int64_t param9);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#errorWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 flag of enum KMessageBox__Option
void k_messagebox_error_w_id(uintptr_t param1, const char* param2, const char* param3, int64_t param4);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#errorListWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 flag of enum KMessageBox__Option
void k_messagebox_error_list_w_id(uintptr_t param1, const char* param2, const char* param3[], const char* param4, int64_t param5);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#detailedErrorWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 const char*
/// @param param5 flag of enum KMessageBox__Option
void k_messagebox_detailed_error_w_id(uintptr_t param1, const char* param2, const char* param3, const char* param4, int64_t param5);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#detailedErrorWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 flag of enum KMessageBox__Option
void k_messagebox_detailed_error_w_id2(uintptr_t param1, const char* param2, const char* param3, const char* param4, void* param5, int64_t param6);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#informationWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 const char*
/// @param param5 flag of enum KMessageBox__Option
void k_messagebox_information_w_id(uintptr_t param1, const char* param2, const char* param3, const char* param4, int64_t param5);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#informationListWId)
///
/// @param param1 uintptr_t
/// @param param2 const char*
/// @param param3 const char**
/// @param param4 const char*
/// @param param5 const char*
/// @param param6 flag of enum KMessageBox__Option
void k_messagebox_information_list_w_id(uintptr_t param1, const char* param2, const char* param3[], const char* param4, const char* param5, int64_t param6);

/// [Qt documentation](https://api-staging.kde.org/kmessagebox.html#messageBoxWId)
///
/// @param param1 uintptr_t
/// @param param2 enum KMessageBox__DialogType
/// @param param3 const char*
/// @param param4 const char*
/// @param param5 KGuiItem*
/// @param param6 KGuiItem*
/// @param param7 KGuiItem*
/// @param param8 const char*
/// @param param9 flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
int32_t k_messagebox_message_box_w_id(uintptr_t param1, int32_t param2, const char* param3, const char* param4, void* param5, void* param6, void* param7, const char* param8, int64_t param9);

/// https://api-staging.kde.org/kmessagebox.html#types

typedef enum {
    KMESSAGEBOX_BUTTONCODE_OK = 1,
    KMESSAGEBOX_BUTTONCODE_CANCEL = 2,
    KMESSAGEBOX_BUTTONCODE_PRIMARYACTION = 3,
    KMESSAGEBOX_BUTTONCODE_SECONDARYACTION = 4,
    KMESSAGEBOX_BUTTONCODE_CONTINUE = 5
} KMessageBox__ButtonCode;

typedef enum {
    KMESSAGEBOX_DIALOGTYPE_QUESTIONTWOACTIONS = 1,
    KMESSAGEBOX_DIALOGTYPE_WARNINGTWOACTIONS = 2,
    KMESSAGEBOX_DIALOGTYPE_WARNINGCONTINUECANCEL = 3,
    KMESSAGEBOX_DIALOGTYPE_WARNINGTWOACTIONSCANCEL = 4,
    KMESSAGEBOX_DIALOGTYPE_INFORMATION = 5,
    KMESSAGEBOX_DIALOGTYPE_ERROR = 8,
    KMESSAGEBOX_DIALOGTYPE_QUESTIONTWOACTIONSCANCEL = 9
} KMessageBox__DialogType;

typedef enum {
    KMESSAGEBOX_OPTION_NOTIFY = 1,
    KMESSAGEBOX_OPTION_ALLOWLINK = 2,
    KMESSAGEBOX_OPTION_DANGEROUS = 4,
    KMESSAGEBOX_OPTION_NOEXEC = 16,
    KMESSAGEBOX_OPTION_WINDOWMODAL = 32,
    KMESSAGEBOX_OPTION_PLAINTEXT = 64
} KMessageBox__Option;

#endif
