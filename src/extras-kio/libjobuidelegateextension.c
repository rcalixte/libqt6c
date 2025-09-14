#include "../libqurl.hpp"
#include "libjobuidelegateextension.hpp"
#include "libjobuidelegateextension.h"

bool k_io__jobuidelegateextension_ask_delete_confirmation(void* self, libqt_list urls, int32_t deletionType, int32_t confirmationType) {
    return KIO__JobUiDelegateExtension_AskDeleteConfirmation((KIO__JobUiDelegateExtension*)self, urls, deletionType, confirmationType);
}

void k_io__jobuidelegateextension_update_url_in_clipboard(void* self, void* src, void* dest) {
    KIO__JobUiDelegateExtension_UpdateUrlInClipboard((KIO__JobUiDelegateExtension*)self, (QUrl*)src, (QUrl*)dest);
}

KIO__JobUiDelegateExtension* k_io_default_job_ui_delegate_extension() {
    return KIO_DefaultJobUiDelegateExtension();
}

void k_io_set_default_job_ui_delegate_extension(void* param1) {
    KIO_SetDefaultJobUiDelegateExtension((KIO__JobUiDelegateExtension*)param1);
}
