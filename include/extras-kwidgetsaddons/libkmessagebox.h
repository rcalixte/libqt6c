#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKMESSAGEBOX_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKMESSAGEBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kmessagebox.html)

/// [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActions)
///
/// @param parent QWidget*
/// @param text const char*
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_question_two_actions(void* parent, const char* text, const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsCancel)
///
/// @param parent QWidget*
/// @param text const char*
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param cancelAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_question_two_actions_cancel(void* parent, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsList)
///
/// @param parent QWidget*
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_question_two_actions_list(void* parent, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActions)
///
/// @param parent QWidget*
/// @param text const char*
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_two_actions(void* parent, const char* text, const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsList)
///
/// @param parent QWidget*
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_two_actions_list(void* parent, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancel)
///
/// @param parent QWidget*
/// @param text const char*
/// @param title const char*
/// @param buttonContinue KGuiItem*
/// @param buttonCancel KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_continue_cancel(void* parent, const char* text, const char* title, void* buttonContinue, void* buttonCancel, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelDetailed)
///
/// @param parent QWidget*
/// @param text const char*
/// @param title const char*
/// @param buttonContinue KGuiItem*
/// @param buttonCancel KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
/// @param details const char*
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_continue_cancel_detailed(void* parent, const char* text, const char* title, void* buttonContinue, void* buttonCancel, const char* dontAskAgainName, int32_t options, const char* details);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelList)
///
/// @param parent QWidget*
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param buttonContinue KGuiItem*
/// @param buttonCancel KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_continue_cancel_list(void* parent, const char* text, const char* strlist[static 1], const char* title, void* buttonContinue, void* buttonCancel, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancel)
///
/// @param parent QWidget*
/// @param text const char*
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param cancelAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_two_actions_cancel(void* parent, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelList)
///
/// @param parent QWidget*
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param cancelAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_two_actions_cancel_list(void* parent, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#error)
///
/// @param parent QWidget*
/// @param text const char*
/// @param title const char*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_error(void* parent, const char* text, const char* title, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#error)
///
/// @param parent QWidget*
/// @param text const char*
/// @param title const char*
/// @param buttonOk KGuiItem*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_error2(void* parent, const char* text, const char* title, void* buttonOk, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#errorList)
///
/// @param parent QWidget*
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_error_list(void* parent, const char* text, const char* strlist[static 1], const char* title, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#detailedError)
///
/// @param parent QWidget*
/// @param text const char*
/// @param details const char*
/// @param title const char*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_detailed_error(void* parent, const char* text, const char* details, const char* title, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#detailedError)
///
/// @param parent QWidget*
/// @param text const char*
/// @param details const char*
/// @param title const char*
/// @param buttonOk KGuiItem*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_detailed_error2(void* parent, const char* text, const char* details, const char* title, void* buttonOk, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#information)
///
/// @param parent QWidget*
/// @param text const char*
/// @param title const char*
/// @param dontShowAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_information(void* parent, const char* text, const char* title, const char* dontShowAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#informationList)
///
/// @param parent QWidget*
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param dontShowAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_information_list(void* parent, const char* text, const char* strlist[static 1], const char* title, const char* dontShowAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#enableAllMessages)
///
void k_messagebox_enable_all_messages();

/// [Upstream resources](https://api.kde.org/kmessagebox.html#enableMessage)
///
/// @param dontShowAgainName const char*
///
void k_messagebox_enable_message(const char* dontShowAgainName);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#messageBox)
///
/// @param parent QWidget*
/// @param type enum KMessageBox__DialogType
/// @param text const char*
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param cancelAction KGuiItem*
/// @param dontShowAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_message_box(void* parent, int32_t type, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontShowAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#shouldBeShownTwoActions)
///
/// @param dontShowAgainName const char*
/// @param result enum KMessageBox__ButtonCode*
///
bool k_messagebox_should_be_shown_two_actions(const char* dontShowAgainName, int32_t* result);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#shouldBeShownContinue)
///
/// @param dontShowAgainName const char*
///
bool k_messagebox_should_be_shown_continue(const char* dontShowAgainName);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#saveDontShowAgainTwoActions)
///
/// @param dontShowAgainName const char*
/// @param result enum KMessageBox__ButtonCode
///
void k_messagebox_save_dont_show_again_two_actions(const char* dontShowAgainName, int32_t result);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#saveDontShowAgainContinue)
///
/// @param dontShowAgainName const char*
///
void k_messagebox_save_dont_show_again_continue(const char* dontShowAgainName);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#setDontShowAgainConfig)
///
/// @param cfg KConfig*
///
void k_messagebox_set_dont_show_again_config(void* cfg);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#setDontShowAgainInterface)
///
/// @param dontAskAgainInterface KMessageBoxDontAskAgainInterface*
///
void k_messagebox_set_dont_show_again_interface(void* dontAskAgainInterface);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#setNotifyInterface)
///
/// @param notifyInterface KMessageBoxNotifyInterface*
///
void k_messagebox_set_notify_interface(void* notifyInterface);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#createKMessageBox)
///
/// @param dialog QDialog*
/// @param buttons QDialogButtonBox*
/// @param icon enum QMessageBox__Icon
/// @param text const char*
/// @param strlist const char**
/// @param ask const char*
/// @param checkboxReturn bool*
/// @param options flag of enum KMessageBox__Option
/// @param details const char*
///
/// @return enum QDialogButtonBox__StandardButton
///
int32_t k_messagebox_create_k_message_box(void* dialog, void* buttons, int32_t icon, const char* text, const char* strlist[static 1], const char* ask, bool* checkboxReturn, int32_t options, const char* details);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#createKMessageBox)
///
/// @param dialog QDialog*
/// @param buttons QDialogButtonBox*
/// @param icon QIcon*
/// @param text const char*
/// @param strlist const char**
/// @param ask const char*
/// @param checkboxReturn bool*
/// @param options flag of enum KMessageBox__Option
/// @param details const char*
/// @param notifyType enum QMessageBox__Icon
///
/// @return enum QDialogButtonBox__StandardButton
///
int32_t k_messagebox_create_k_message_box2(void* dialog, void* buttons, void* icon, const char* text, const char* strlist[static 1], const char* ask, bool* checkboxReturn, int32_t options, const char* details, int32_t notifyType);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_question_two_actions_w_id(uintptr_t parent_id, const char* text, const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsCancelWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param cancelAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_question_two_actions_cancel_w_id(uintptr_t parent_id, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#questionTwoActionsListWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_question_two_actions_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_two_actions_w_id(uintptr_t parent_id, const char* text, const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsListWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_two_actions_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param title const char*
/// @param buttonContinue KGuiItem*
/// @param buttonCancel KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_continue_cancel_w_id(uintptr_t parent_id, const char* text, const char* title, void* buttonContinue, void* buttonCancel, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningContinueCancelListWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param buttonContinue KGuiItem*
/// @param buttonCancel KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_continue_cancel_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, void* buttonContinue, void* buttonCancel, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param cancelAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_two_actions_cancel_w_id(uintptr_t parent_id, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#warningTwoActionsCancelListWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param cancelAction KGuiItem*
/// @param dontAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_warning_two_actions_cancel_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#errorWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param title const char*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_error_w_id(uintptr_t parent_id, const char* text, const char* title, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#errorListWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_error_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#detailedErrorWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param details const char*
/// @param title const char*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_detailed_error_w_id(uintptr_t parent_id, const char* text, const char* details, const char* title, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#detailedErrorWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param details const char*
/// @param title const char*
/// @param buttonOk KGuiItem*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_detailed_error_w_id2(uintptr_t parent_id, const char* text, const char* details, const char* title, void* buttonOk, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#informationWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param title const char*
/// @param dontShowAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_information_w_id(uintptr_t parent_id, const char* text, const char* title, const char* dontShowAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#informationListWId)
///
/// @param parent_id uintptr_t
/// @param text const char*
/// @param strlist const char**
/// @param title const char*
/// @param dontShowAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
void k_messagebox_information_list_w_id(uintptr_t parent_id, const char* text, const char* strlist[static 1], const char* title, const char* dontShowAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#messageBoxWId)
///
/// @param parent_id uintptr_t
/// @param type enum KMessageBox__DialogType
/// @param text const char*
/// @param title const char*
/// @param primaryAction KGuiItem*
/// @param secondaryAction KGuiItem*
/// @param cancelAction KGuiItem*
/// @param dontShowAskAgainName const char*
/// @param options flag of enum KMessageBox__Option
///
/// @return enum KMessageBox__ButtonCode
///
int32_t k_messagebox_message_box_w_id(uintptr_t parent_id, int32_t type, const char* text, const char* title, void* primaryAction, void* secondaryAction, void* cancelAction, const char* dontShowAskAgainName, int32_t options);

/// [Upstream resources](https://api.kde.org/kmessagebox.html#public-types)

typedef enum {
    KMESSAGEBOX_BUTTONCODE_OK = 1,
    KMESSAGEBOX_BUTTONCODE_CANCEL = 2,
    KMESSAGEBOX_BUTTONCODE_PRIMARYACTION = 3,
    KMESSAGEBOX_BUTTONCODE_SECONDARYACTION = 4,
    KMESSAGEBOX_BUTTONCODE_CONTINUE = 5
} KMessageBox__ButtonCode;

/// [Upstream resources](https://api.kde.org/kmessagebox.html#public-types)

typedef enum {
    KMESSAGEBOX_DIALOGTYPE_QUESTIONTWOACTIONS = 1,
    KMESSAGEBOX_DIALOGTYPE_WARNINGTWOACTIONS = 2,
    KMESSAGEBOX_DIALOGTYPE_WARNINGCONTINUECANCEL = 3,
    KMESSAGEBOX_DIALOGTYPE_WARNINGTWOACTIONSCANCEL = 4,
    KMESSAGEBOX_DIALOGTYPE_INFORMATION = 5,
    KMESSAGEBOX_DIALOGTYPE_ERROR = 8,
    KMESSAGEBOX_DIALOGTYPE_QUESTIONTWOACTIONSCANCEL = 9
} KMessageBox__DialogType;

/// [Upstream resources](https://api.kde.org/kmessagebox.html#public-types)

typedef enum {
    KMESSAGEBOX_OPTION_NOTIFY = 1,
    KMESSAGEBOX_OPTION_ALLOWLINK = 2,
    KMESSAGEBOX_OPTION_DANGEROUS = 4,
    KMESSAGEBOX_OPTION_NOEXEC = 16,
    KMESSAGEBOX_OPTION_WINDOWMODAL = 32,
    KMESSAGEBOX_OPTION_PLAINTEXT = 64
} KMessageBox__Option;

#endif
