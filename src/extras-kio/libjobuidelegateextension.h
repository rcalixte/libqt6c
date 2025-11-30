#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBJOBUIDELEGATEEXTENSION_H
#define SRC_EXTRAS_KIO_QT6C_LIBJOBUIDELEGATEEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-jobuidelegateextension.html

/// [Upstream resources](https://api.kde.org/kio-jobuidelegateextension.html#askDeleteConfirmation)
///
/// @param self KIO__JobUiDelegateExtension*
/// @param urls libqt_list /* of QUrl* */
/// @param deletionType enum KIO__JobUiDelegateExtension__DeletionType
/// @param confirmationType enum KIO__JobUiDelegateExtension__ConfirmationType
bool k_io__jobuidelegateextension_ask_delete_confirmation(void* self, libqt_list urls, int32_t deletionType, int32_t confirmationType);

/// [Upstream resources](https://api.kde.org/kio-jobuidelegateextension.html#updateUrlInClipboard)
///
/// @param self KIO__JobUiDelegateExtension*
/// @param src QUrl*
/// @param dest QUrl*
void k_io__jobuidelegateextension_update_url_in_clipboard(void* self, void* src, void* dest);

/// https://api.kde.org/kio.html

/// [Upstream resources](https://api.kde.org/kio.html#defaultJobUiDelegateExtension)
///
KIO__JobUiDelegateExtension* k_io_default_job_ui_delegate_extension();

/// [Upstream resources](https://api.kde.org/kio.html#setDefaultJobUiDelegateExtension)
///
/// @param param1 KIO__JobUiDelegateExtension*
void k_io_set_default_job_ui_delegate_extension(void* param1);

/// https://api.kde.org/kio-jobuidelegateextension.html#types

typedef enum {
    KIO_RENAMEDIALOG_OPTION_RENAMEDIALOG_OVERWRITE = 1,
    KIO_RENAMEDIALOG_OPTION_RENAMEDIALOG_OVERWRITEITSELF = 2,
    KIO_RENAMEDIALOG_OPTION_RENAMEDIALOG_SKIP = 4,
    KIO_RENAMEDIALOG_OPTION_RENAMEDIALOG_MULTIPLEITEMS = 8,
    KIO_RENAMEDIALOG_OPTION_RENAMEDIALOG_RESUME = 16,
    KIO_RENAMEDIALOG_OPTION_RENAMEDIALOG_NORENAME = 64,
    KIO_RENAMEDIALOG_OPTION_RENAMEDIALOG_DESTISDIRECTORY = 128,
    KIO_RENAMEDIALOG_OPTION_RENAMEDIALOG_SOURCEISDIRECTORY = 256
} KIO__RenameDialog_Option;

typedef enum {
    KIO_SKIPDIALOG_OPTION_SKIPDIALOG_MULTIPLEITEMS = 8,
    KIO_SKIPDIALOG_OPTION_SKIPDIALOG_REPLACE_INVALID_CHARS = 16,
    KIO_SKIPDIALOG_OPTION_SKIPDIALOG_HIDE_RETRY = 32
} KIO__SkipDialog_Option;

typedef enum {
    KIO_RENAMEDIALOG_RESULT_RESULT_CANCEL = 0,
    KIO_RENAMEDIALOG_RESULT_RESULT_RENAME = 1,
    KIO_RENAMEDIALOG_RESULT_RESULT_SKIP = 2,
    KIO_RENAMEDIALOG_RESULT_RESULT_AUTOSKIP = 3,
    KIO_RENAMEDIALOG_RESULT_RESULT_OVERWRITE = 4,
    KIO_RENAMEDIALOG_RESULT_RESULT_OVERWRITEALL = 5,
    KIO_RENAMEDIALOG_RESULT_RESULT_RESUME = 6,
    KIO_RENAMEDIALOG_RESULT_RESULT_RESUMEALL = 7,
    KIO_RENAMEDIALOG_RESULT_RESULT_AUTORENAME = 8,
    KIO_RENAMEDIALOG_RESULT_RESULT_RETRY = 9,
    KIO_RENAMEDIALOG_RESULT_RESULT_OVERWRITEWHENOLDER = 10,
    KIO_RENAMEDIALOG_RESULT_RESULT_REPLACEINVALIDCHARS = 11,
    KIO_RENAMEDIALOG_RESULT_RESULT_REPLACEALLINVALIDCHARS = 12
} KIO__RenameDialog_Result;

typedef enum {
    KIO_JOBUIDELEGATEEXTENSION_DELETIONTYPE_DELETE = 0,
    KIO_JOBUIDELEGATEEXTENSION_DELETIONTYPE_TRASH = 1,
    KIO_JOBUIDELEGATEEXTENSION_DELETIONTYPE_EMPTYTRASH = 2
} KIO__JobUiDelegateExtension__DeletionType;

typedef enum {
    KIO_JOBUIDELEGATEEXTENSION_CONFIRMATIONTYPE_DEFAULTCONFIRMATION = 0,
    KIO_JOBUIDELEGATEEXTENSION_CONFIRMATIONTYPE_FORCECONFIRMATION = 1
} KIO__JobUiDelegateExtension__ConfirmationType;

typedef enum {
    KIO_JOBUIDELEGATEEXTENSION_CLIPBOARDUPDATERMODE_UPDATECONTENT = 0,
    KIO_JOBUIDELEGATEEXTENSION_CLIPBOARDUPDATERMODE_OVERWRITECONTENT = 1,
    KIO_JOBUIDELEGATEEXTENSION_CLIPBOARDUPDATERMODE_REMOVECONTENT = 2
} KIO__JobUiDelegateExtension__ClipboardUpdaterMode;

#endif
