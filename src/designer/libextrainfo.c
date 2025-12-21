#include "libabstractformeditor.hpp"
#include "../libqwidget.hpp"
#include "libextrainfo.hpp"
#include "libextrainfo.h"

QDesignerFormEditorInterface* q_designerextrainfoextension_core(void* self) {
    return QDesignerExtraInfoExtension_Core((QDesignerExtraInfoExtension*)self);
}

QWidget* q_designerextrainfoextension_widget(void* self) {
    return QDesignerExtraInfoExtension_Widget((QDesignerExtraInfoExtension*)self);
}

const char* q_designerextrainfoextension_working_directory(void* self) {
    libqt_string _str = QDesignerExtraInfoExtension_WorkingDirectory((QDesignerExtraInfoExtension*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerextrainfoextension_set_working_directory(void* self, const char* workingDirectory) {
    QDesignerExtraInfoExtension_SetWorkingDirectory((QDesignerExtraInfoExtension*)self, qstring(workingDirectory));
}

void q_designerextrainfoextension_delete(void* self) {
    QDesignerExtraInfoExtension_Delete((QDesignerExtraInfoExtension*)(self));
}
