#include "libabstractformeditor.hpp"
#include "libabstractformwindow.hpp"
#include "libabstractresourcebrowser.hpp"
#include "../libqdialog.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libabstractlanguage.hpp"
#include "libabstractlanguage.h"

void q_designerlanguageextension_delete(void* self) {
    QDesignerLanguageExtension_Delete((QDesignerLanguageExtension*)(self));
}
