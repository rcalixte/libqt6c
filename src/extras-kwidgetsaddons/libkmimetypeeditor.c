#include "../libqwidget.hpp"
#include "libkmimetypeeditor.hpp"
#include "libkmimetypeeditor.h"

void k_mimetypeeditor_edit_mime_type(const char* mimeType, void* widget) {
    KMimeTypeEditor_EditMimeType(qstring(mimeType), (QWidget*)widget);
}
