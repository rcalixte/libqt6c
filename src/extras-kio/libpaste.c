#include "libkfileitem.hpp"
#include "../libqmimedata.hpp"
#include "libpaste.hpp"
#include "libpaste.h"

bool k_io_can_paste_mime_data(void* data) {
    return KIO_CanPasteMimeData((QMimeData*)data);
}

const char* k_io_paste_action_text(void* mimeData, bool* enable, void* destItem) {
    libqt_string _str = KIO_PasteActionText((QMimeData*)mimeData, (bool*)enable, (KFileItem*)destItem);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io_set_clipboard_data_cut(void* mimeData, bool cut) {
    KIO_SetClipboardDataCut((QMimeData*)mimeData, cut);
}

bool k_io_is_clipboard_data_cut(void* mimeData) {
    return KIO_IsClipboardDataCut((QMimeData*)mimeData);
}
