#include "../libqwidget.hpp"
#include "libkmimetypeeditor.hpp"
#include "libkmimetypeeditor.h"

void k_mimetypeeditor_edit_mime_type(const char* param1, void* param2) {
    KMimeTypeEditor_EditMimeType(qstring(param1), (QWidget*)param2);
}
