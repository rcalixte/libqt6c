#include "libabstractformeditor.hpp"
#include "libabstractformwindow.hpp"
#include "libabstractresourcebrowser.hpp"
#include "../libqdialog.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libabstractlanguage.hpp"
#include "libabstractlanguage.h"

const char* q_designerlanguageextension_name(void* self) {
    libqt_string _str = QDesignerLanguageExtension_Name((QDesignerLanguageExtension*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDialog* q_designerlanguageextension_create_form_window_settings_dialog(void* self, void* formWindow, void* parentWidget) {
    return QDesignerLanguageExtension_CreateFormWindowSettingsDialog((QDesignerLanguageExtension*)self, (QDesignerFormWindowInterface*)formWindow, (QWidget*)parentWidget);
}

QDesignerResourceBrowserInterface* q_designerlanguageextension_create_resource_browser(void* self, void* parentWidget) {
    return QDesignerLanguageExtension_CreateResourceBrowser((QDesignerLanguageExtension*)self, (QWidget*)parentWidget);
}

QDialog* q_designerlanguageextension_create_promotion_dialog(void* self, void* formEditor, void* parentWidget) {
    return QDesignerLanguageExtension_CreatePromotionDialog((QDesignerLanguageExtension*)self, (QDesignerFormEditorInterface*)formEditor, (QWidget*)parentWidget);
}

bool q_designerlanguageextension_is_language_resource(void* self, const char* path) {
    return QDesignerLanguageExtension_IsLanguageResource((QDesignerLanguageExtension*)self, qstring(path));
}

const char* q_designerlanguageextension_class_name_of(void* self, void* object) {
    libqt_string _str = QDesignerLanguageExtension_ClassNameOf((QDesignerLanguageExtension*)self, (QObject*)object);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_designerlanguageextension_signal_matches_slot(void* self, const char* signal, const char* slot) {
    return QDesignerLanguageExtension_SignalMatchesSlot((QDesignerLanguageExtension*)self, qstring(signal), qstring(slot));
}

const char* q_designerlanguageextension_widget_box_contents(void* self) {
    libqt_string _str = QDesignerLanguageExtension_WidgetBoxContents((QDesignerLanguageExtension*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_designerlanguageextension_ui_extension(void* self) {
    libqt_string _str = QDesignerLanguageExtension_UiExtension((QDesignerLanguageExtension*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_designerlanguageextension_delete(void* self) {
    QDesignerLanguageExtension_Delete((QDesignerLanguageExtension*)(self));
}
