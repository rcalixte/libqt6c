#include "libkfileitem.hpp"
#include "../libqmimedata.hpp"
#include "libpaste.hpp"
#include "libpaste.h"

bool k_io_can_paste_mime_data(void* param1) {
    return KIO_CanPasteMimeData((QMimeData*)param1);
}

const char* k_io_paste_action_text(void* param1, bool* param2, void* param3) {
    libqt_string _str = KIO_PasteActionText((QMimeData*)param1, (bool*)param2, (KFileItem*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io_set_clipboard_data_cut(void* param1, bool param2) {
    KIO_SetClipboardDataCut((QMimeData*)param1, param2);
}

bool k_io_is_clipboard_data_cut(void* param1) {
    return KIO_IsClipboardDataCut((QMimeData*)param1);
}
