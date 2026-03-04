#include "libpoppler_link.hpp"
#include "libpoppler_converter.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqrect.hpp"
#include "libpoppler_form.hpp"
#include "libpoppler_form.h"

Poppler__FormFieldIcon* q_poppler__formfieldicon_new(void* ffIcon) {
    return Poppler__FormFieldIcon_new((Poppler__FormFieldIcon*)ffIcon);
}

void q_poppler__formfieldicon_operator_assign(void* self, void* ffIcon) {
    Poppler__FormFieldIcon_OperatorAssign((Poppler__FormFieldIcon*)self, (Poppler__FormFieldIcon*)ffIcon);
}

void q_poppler__formfieldicon_delete(void* self) {
    Poppler__FormFieldIcon_Delete((Poppler__FormFieldIcon*)(self));
}

int32_t q_poppler__formfield_type(void* self) {
    return Poppler__FormField_Type((Poppler__FormField*)self);
}

QRectF* q_poppler__formfield_rect(void* self) {
    return Poppler__FormField_Rect((Poppler__FormField*)self);
}

int32_t q_poppler__formfield_id(void* self) {
    return Poppler__FormField_Id((Poppler__FormField*)self);
}

const char* q_poppler__formfield_name(void* self) {
    libqt_string _str = Poppler__FormField_Name((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__formfield_set_name(void* self, const char* name) {
    Poppler__FormField_SetName((Poppler__FormField*)self, qstring(name));
}

const char* q_poppler__formfield_fully_qualified_name(void* self) {
    libqt_string _str = Poppler__FormField_FullyQualifiedName((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__formfield_ui_name(void* self) {
    libqt_string _str = Poppler__FormField_UiName((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__formfield_is_read_only(void* self) {
    return Poppler__FormField_IsReadOnly((Poppler__FormField*)self);
}

void q_poppler__formfield_set_read_only(void* self, bool value) {
    Poppler__FormField_SetReadOnly((Poppler__FormField*)self, value);
}

bool q_poppler__formfield_is_visible(void* self) {
    return Poppler__FormField_IsVisible((Poppler__FormField*)self);
}

void q_poppler__formfield_set_visible(void* self, bool value) {
    Poppler__FormField_SetVisible((Poppler__FormField*)self, value);
}

bool q_poppler__formfield_is_printable(void* self) {
    return Poppler__FormField_IsPrintable((Poppler__FormField*)self);
}

void q_poppler__formfield_set_printable(void* self, bool value) {
    Poppler__FormField_SetPrintable((Poppler__FormField*)self, value);
}

Poppler__Link* q_poppler__formfield_activation_action(void* self) {
    return Poppler__FormField_ActivationAction((Poppler__FormField*)self);
}

Poppler__Link* q_poppler__formfield_additional_action(void* self, int32_t type) {
    return Poppler__FormField_AdditionalAction((Poppler__FormField*)self, type);
}

Poppler__Link* q_poppler__formfield_additional_action2(void* self, int32_t type) {
    return Poppler__FormField_AdditionalAction2((Poppler__FormField*)self, type);
}

void q_poppler__formfield_delete(void* self) {
    Poppler__FormField_Delete((Poppler__FormField*)(self));
}

int32_t q_poppler__formfieldbutton_type(void* self) {
    return Poppler__FormFieldButton_Type((Poppler__FormFieldButton*)self);
}

int32_t q_poppler__formfieldbutton_button_type(void* self) {
    return Poppler__FormFieldButton_ButtonType((Poppler__FormFieldButton*)self);
}

const char* q_poppler__formfieldbutton_caption(void* self) {
    libqt_string _str = Poppler__FormFieldButton_Caption((Poppler__FormFieldButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Poppler__FormFieldIcon* q_poppler__formfieldbutton_icon(void* self) {
    return Poppler__FormFieldButton_Icon((Poppler__FormFieldButton*)self);
}

void q_poppler__formfieldbutton_set_icon(void* self, void* icon) {
    Poppler__FormFieldButton_SetIcon((Poppler__FormFieldButton*)self, (Poppler__FormFieldIcon*)icon);
}

bool q_poppler__formfieldbutton_state(void* self) {
    return Poppler__FormFieldButton_State((Poppler__FormFieldButton*)self);
}

void q_poppler__formfieldbutton_set_state(void* self, bool state) {
    Poppler__FormFieldButton_SetState((Poppler__FormFieldButton*)self, state);
}

libqt_list /* of int */ q_poppler__formfieldbutton_siblings(void* self) {
    libqt_list _arr = Poppler__FormFieldButton_Siblings((Poppler__FormFieldButton*)self);
    return _arr;
}

QRectF* q_poppler__formfieldbutton_rect(void* self) {
    return Poppler__FormField_Rect((Poppler__FormField*)self);
}

int32_t q_poppler__formfieldbutton_id(void* self) {
    return Poppler__FormField_Id((Poppler__FormField*)self);
}

const char* q_poppler__formfieldbutton_name(void* self) {
    libqt_string _str = Poppler__FormField_Name((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__formfieldbutton_set_name(void* self, const char* name) {
    Poppler__FormField_SetName((Poppler__FormField*)self, qstring(name));
}

const char* q_poppler__formfieldbutton_fully_qualified_name(void* self) {
    libqt_string _str = Poppler__FormField_FullyQualifiedName((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__formfieldbutton_ui_name(void* self) {
    libqt_string _str = Poppler__FormField_UiName((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__formfieldbutton_is_read_only(void* self) {
    return Poppler__FormField_IsReadOnly((Poppler__FormField*)self);
}

void q_poppler__formfieldbutton_set_read_only(void* self, bool value) {
    Poppler__FormField_SetReadOnly((Poppler__FormField*)self, value);
}

bool q_poppler__formfieldbutton_is_visible(void* self) {
    return Poppler__FormField_IsVisible((Poppler__FormField*)self);
}

void q_poppler__formfieldbutton_set_visible(void* self, bool value) {
    Poppler__FormField_SetVisible((Poppler__FormField*)self, value);
}

bool q_poppler__formfieldbutton_is_printable(void* self) {
    return Poppler__FormField_IsPrintable((Poppler__FormField*)self);
}

void q_poppler__formfieldbutton_set_printable(void* self, bool value) {
    Poppler__FormField_SetPrintable((Poppler__FormField*)self, value);
}

Poppler__Link* q_poppler__formfieldbutton_activation_action(void* self) {
    return Poppler__FormField_ActivationAction((Poppler__FormField*)self);
}

Poppler__Link* q_poppler__formfieldbutton_additional_action(void* self, int32_t type) {
    return Poppler__FormField_AdditionalAction((Poppler__FormField*)self, type);
}

Poppler__Link* q_poppler__formfieldbutton_additional_action2(void* self, int32_t type) {
    return Poppler__FormField_AdditionalAction2((Poppler__FormField*)self, type);
}

void q_poppler__formfieldbutton_delete(void* self) {
    Poppler__FormFieldButton_Delete((Poppler__FormFieldButton*)(self));
}

int32_t q_poppler__formfieldtext_type(void* self) {
    return Poppler__FormFieldText_Type((Poppler__FormFieldText*)self);
}

int32_t q_poppler__formfieldtext_text_type(void* self) {
    return Poppler__FormFieldText_TextType((Poppler__FormFieldText*)self);
}

const char* q_poppler__formfieldtext_text(void* self) {
    libqt_string _str = Poppler__FormFieldText_Text((Poppler__FormFieldText*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__formfieldtext_set_text(void* self, const char* text) {
    Poppler__FormFieldText_SetText((Poppler__FormFieldText*)self, qstring(text));
}

void q_poppler__formfieldtext_set_appearance_text(void* self, const char* text) {
    Poppler__FormFieldText_SetAppearanceText((Poppler__FormFieldText*)self, qstring(text));
}

bool q_poppler__formfieldtext_is_password(void* self) {
    return Poppler__FormFieldText_IsPassword((Poppler__FormFieldText*)self);
}

bool q_poppler__formfieldtext_is_rich_text(void* self) {
    return Poppler__FormFieldText_IsRichText((Poppler__FormFieldText*)self);
}

int32_t q_poppler__formfieldtext_maximum_length(void* self) {
    return Poppler__FormFieldText_MaximumLength((Poppler__FormFieldText*)self);
}

int32_t q_poppler__formfieldtext_text_alignment(void* self) {
    return Poppler__FormFieldText_TextAlignment((Poppler__FormFieldText*)self);
}

bool q_poppler__formfieldtext_can_be_spell_checked(void* self) {
    return Poppler__FormFieldText_CanBeSpellChecked((Poppler__FormFieldText*)self);
}

double q_poppler__formfieldtext_get_font_size(void* self) {
    return Poppler__FormFieldText_GetFontSize((Poppler__FormFieldText*)self);
}

void q_poppler__formfieldtext_set_font_size(void* self, int fontSize) {
    Poppler__FormFieldText_SetFontSize((Poppler__FormFieldText*)self, fontSize);
}

QRectF* q_poppler__formfieldtext_rect(void* self) {
    return Poppler__FormField_Rect((Poppler__FormField*)self);
}

int32_t q_poppler__formfieldtext_id(void* self) {
    return Poppler__FormField_Id((Poppler__FormField*)self);
}

const char* q_poppler__formfieldtext_name(void* self) {
    libqt_string _str = Poppler__FormField_Name((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__formfieldtext_set_name(void* self, const char* name) {
    Poppler__FormField_SetName((Poppler__FormField*)self, qstring(name));
}

const char* q_poppler__formfieldtext_fully_qualified_name(void* self) {
    libqt_string _str = Poppler__FormField_FullyQualifiedName((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__formfieldtext_ui_name(void* self) {
    libqt_string _str = Poppler__FormField_UiName((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__formfieldtext_is_read_only(void* self) {
    return Poppler__FormField_IsReadOnly((Poppler__FormField*)self);
}

void q_poppler__formfieldtext_set_read_only(void* self, bool value) {
    Poppler__FormField_SetReadOnly((Poppler__FormField*)self, value);
}

bool q_poppler__formfieldtext_is_visible(void* self) {
    return Poppler__FormField_IsVisible((Poppler__FormField*)self);
}

void q_poppler__formfieldtext_set_visible(void* self, bool value) {
    Poppler__FormField_SetVisible((Poppler__FormField*)self, value);
}

bool q_poppler__formfieldtext_is_printable(void* self) {
    return Poppler__FormField_IsPrintable((Poppler__FormField*)self);
}

void q_poppler__formfieldtext_set_printable(void* self, bool value) {
    Poppler__FormField_SetPrintable((Poppler__FormField*)self, value);
}

Poppler__Link* q_poppler__formfieldtext_activation_action(void* self) {
    return Poppler__FormField_ActivationAction((Poppler__FormField*)self);
}

Poppler__Link* q_poppler__formfieldtext_additional_action(void* self, int32_t type) {
    return Poppler__FormField_AdditionalAction((Poppler__FormField*)self, type);
}

Poppler__Link* q_poppler__formfieldtext_additional_action2(void* self, int32_t type) {
    return Poppler__FormField_AdditionalAction2((Poppler__FormField*)self, type);
}

void q_poppler__formfieldtext_delete(void* self) {
    Poppler__FormFieldText_Delete((Poppler__FormFieldText*)(self));
}

int32_t q_poppler__formfieldchoice_type(void* self) {
    return Poppler__FormFieldChoice_Type((Poppler__FormFieldChoice*)self);
}

int32_t q_poppler__formfieldchoice_choice_type(void* self) {
    return Poppler__FormFieldChoice_ChoiceType((Poppler__FormFieldChoice*)self);
}

const char** q_poppler__formfieldchoice_choices(void* self) {
    libqt_list _arr = Poppler__FormFieldChoice_Choices((Poppler__FormFieldChoice*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_poppler__formfieldchoice_choices\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

libqt_list /* of libqt_pair tuple of const char* and const char* */ q_poppler__formfieldchoice_choices_with_export_values(void* self) {
    libqt_list _arr = Poppler__FormFieldChoice_ChoicesWithExportValues((Poppler__FormFieldChoice*)self);
    libqt_pair* _data = (libqt_pair*)_arr.data.ptr;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string* _first_str = (libqt_string*)_data[i].first;
        const char* _first_str_data = _first_str->data;
        libqt_string* _second_str = (libqt_string*)_data[i].second;
        const char* _second_str_data = _second_str->data;
        free(_first_str);
        free(_second_str);
        _data[i].first = (void*)_first_str_data;
        _data[i].second = (void*)_second_str_data;
    }
    return _arr;
}

bool q_poppler__formfieldchoice_is_editable(void* self) {
    return Poppler__FormFieldChoice_IsEditable((Poppler__FormFieldChoice*)self);
}

bool q_poppler__formfieldchoice_multi_select(void* self) {
    return Poppler__FormFieldChoice_MultiSelect((Poppler__FormFieldChoice*)self);
}

libqt_list /* of int */ q_poppler__formfieldchoice_current_choices(void* self) {
    libqt_list _arr = Poppler__FormFieldChoice_CurrentChoices((Poppler__FormFieldChoice*)self);
    return _arr;
}

void q_poppler__formfieldchoice_set_current_choices(void* self, libqt_list /* of int */ choice) {
    Poppler__FormFieldChoice_SetCurrentChoices((Poppler__FormFieldChoice*)self, choice);
}

const char* q_poppler__formfieldchoice_edit_choice(void* self) {
    libqt_string _str = Poppler__FormFieldChoice_EditChoice((Poppler__FormFieldChoice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__formfieldchoice_set_edit_choice(void* self, const char* text) {
    Poppler__FormFieldChoice_SetEditChoice((Poppler__FormFieldChoice*)self, qstring(text));
}

int32_t q_poppler__formfieldchoice_text_alignment(void* self) {
    return Poppler__FormFieldChoice_TextAlignment((Poppler__FormFieldChoice*)self);
}

bool q_poppler__formfieldchoice_can_be_spell_checked(void* self) {
    return Poppler__FormFieldChoice_CanBeSpellChecked((Poppler__FormFieldChoice*)self);
}

void q_poppler__formfieldchoice_set_appearance_choice_text(void* self, const char* text) {
    Poppler__FormFieldChoice_SetAppearanceChoiceText((Poppler__FormFieldChoice*)self, qstring(text));
}

QRectF* q_poppler__formfieldchoice_rect(void* self) {
    return Poppler__FormField_Rect((Poppler__FormField*)self);
}

int32_t q_poppler__formfieldchoice_id(void* self) {
    return Poppler__FormField_Id((Poppler__FormField*)self);
}

const char* q_poppler__formfieldchoice_name(void* self) {
    libqt_string _str = Poppler__FormField_Name((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__formfieldchoice_set_name(void* self, const char* name) {
    Poppler__FormField_SetName((Poppler__FormField*)self, qstring(name));
}

const char* q_poppler__formfieldchoice_fully_qualified_name(void* self) {
    libqt_string _str = Poppler__FormField_FullyQualifiedName((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__formfieldchoice_ui_name(void* self) {
    libqt_string _str = Poppler__FormField_UiName((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__formfieldchoice_is_read_only(void* self) {
    return Poppler__FormField_IsReadOnly((Poppler__FormField*)self);
}

void q_poppler__formfieldchoice_set_read_only(void* self, bool value) {
    Poppler__FormField_SetReadOnly((Poppler__FormField*)self, value);
}

bool q_poppler__formfieldchoice_is_visible(void* self) {
    return Poppler__FormField_IsVisible((Poppler__FormField*)self);
}

void q_poppler__formfieldchoice_set_visible(void* self, bool value) {
    Poppler__FormField_SetVisible((Poppler__FormField*)self, value);
}

bool q_poppler__formfieldchoice_is_printable(void* self) {
    return Poppler__FormField_IsPrintable((Poppler__FormField*)self);
}

void q_poppler__formfieldchoice_set_printable(void* self, bool value) {
    Poppler__FormField_SetPrintable((Poppler__FormField*)self, value);
}

Poppler__Link* q_poppler__formfieldchoice_activation_action(void* self) {
    return Poppler__FormField_ActivationAction((Poppler__FormField*)self);
}

Poppler__Link* q_poppler__formfieldchoice_additional_action(void* self, int32_t type) {
    return Poppler__FormField_AdditionalAction((Poppler__FormField*)self, type);
}

Poppler__Link* q_poppler__formfieldchoice_additional_action2(void* self, int32_t type) {
    return Poppler__FormField_AdditionalAction2((Poppler__FormField*)self, type);
}

void q_poppler__formfieldchoice_delete(void* self) {
    Poppler__FormFieldChoice_Delete((Poppler__FormFieldChoice*)(self));
}

Poppler__CertificateInfo* q_poppler__certificateinfo_new() {
    return Poppler__CertificateInfo_new();
}

Poppler__CertificateInfo* q_poppler__certificateinfo_new2(void* other) {
    return Poppler__CertificateInfo_new2((Poppler__CertificateInfo*)other);
}

bool q_poppler__certificateinfo_is_null(void* self) {
    return Poppler__CertificateInfo_IsNull((Poppler__CertificateInfo*)self);
}

int32_t q_poppler__certificateinfo_version(void* self) {
    return Poppler__CertificateInfo_Version((Poppler__CertificateInfo*)self);
}

char* q_poppler__certificateinfo_serial_number(void* self) {
    libqt_string _str = Poppler__CertificateInfo_SerialNumber((Poppler__CertificateInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__certificateinfo_issuer_info(void* self, int32_t key) {
    libqt_string _str = Poppler__CertificateInfo_IssuerInfo((Poppler__CertificateInfo*)self, key);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__certificateinfo_subject_info(void* self, int32_t key) {
    libqt_string _str = Poppler__CertificateInfo_SubjectInfo((Poppler__CertificateInfo*)self, key);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__certificateinfo_nick_name(void* self) {
    libqt_string _str = Poppler__CertificateInfo_NickName((Poppler__CertificateInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_poppler__certificateinfo_validity_start(void* self) {
    return Poppler__CertificateInfo_ValidityStart((Poppler__CertificateInfo*)self);
}

QDateTime* q_poppler__certificateinfo_validity_end(void* self) {
    return Poppler__CertificateInfo_ValidityEnd((Poppler__CertificateInfo*)self);
}

int32_t q_poppler__certificateinfo_key_usage_extensions(void* self) {
    return Poppler__CertificateInfo_KeyUsageExtensions((Poppler__CertificateInfo*)self);
}

char* q_poppler__certificateinfo_public_key(void* self) {
    libqt_string _str = Poppler__CertificateInfo_PublicKey((Poppler__CertificateInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_poppler__certificateinfo_public_key_type(void* self) {
    return Poppler__CertificateInfo_PublicKeyType((Poppler__CertificateInfo*)self);
}

int32_t q_poppler__certificateinfo_public_key_strength(void* self) {
    return Poppler__CertificateInfo_PublicKeyStrength((Poppler__CertificateInfo*)self);
}

bool q_poppler__certificateinfo_is_self_signed(void* self) {
    return Poppler__CertificateInfo_IsSelfSigned((Poppler__CertificateInfo*)self);
}

bool q_poppler__certificateinfo_is_qualified(void* self) {
    return Poppler__CertificateInfo_IsQualified((Poppler__CertificateInfo*)self);
}

int32_t q_poppler__certificateinfo_certificate_type(void* self) {
    return Poppler__CertificateInfo_CertificateType((Poppler__CertificateInfo*)self);
}

char* q_poppler__certificateinfo_certificate_data(void* self) {
    libqt_string _str = Poppler__CertificateInfo_CertificateData((Poppler__CertificateInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__certificateinfo_check_password(void* self, const char* password) {
    return Poppler__CertificateInfo_CheckPassword((Poppler__CertificateInfo*)self, qstring(password));
}

int32_t q_poppler__certificateinfo_key_location(void* self) {
    return Poppler__CertificateInfo_KeyLocation((Poppler__CertificateInfo*)self);
}

void q_poppler__certificateinfo_operator_assign(void* self, void* other) {
    Poppler__CertificateInfo_OperatorAssign((Poppler__CertificateInfo*)self, (Poppler__CertificateInfo*)other);
}

void q_poppler__certificateinfo_delete(void* self) {
    Poppler__CertificateInfo_Delete((Poppler__CertificateInfo*)(self));
}

Poppler__SignatureValidationInfo* q_poppler__signaturevalidationinfo_new(void* other) {
    return Poppler__SignatureValidationInfo_new((Poppler__SignatureValidationInfo*)other);
}

int32_t q_poppler__signaturevalidationinfo_signature_status(void* self) {
    return Poppler__SignatureValidationInfo_SignatureStatus((Poppler__SignatureValidationInfo*)self);
}

int32_t q_poppler__signaturevalidationinfo_certificate_status(void* self) {
    return Poppler__SignatureValidationInfo_CertificateStatus((Poppler__SignatureValidationInfo*)self);
}

const char* q_poppler__signaturevalidationinfo_signer_name(void* self) {
    libqt_string _str = Poppler__SignatureValidationInfo_SignerName((Poppler__SignatureValidationInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__signaturevalidationinfo_signer_subject_d_n(void* self) {
    libqt_string _str = Poppler__SignatureValidationInfo_SignerSubjectDN((Poppler__SignatureValidationInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__signaturevalidationinfo_location(void* self) {
    libqt_string _str = Poppler__SignatureValidationInfo_Location((Poppler__SignatureValidationInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__signaturevalidationinfo_reason(void* self) {
    libqt_string _str = Poppler__SignatureValidationInfo_Reason((Poppler__SignatureValidationInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_poppler__signaturevalidationinfo_hash_algorithm(void* self) {
    return Poppler__SignatureValidationInfo_HashAlgorithm((Poppler__SignatureValidationInfo*)self);
}

time_t q_poppler__signaturevalidationinfo_signing_time(void* self) {
    return (int)Poppler__SignatureValidationInfo_SigningTime((Poppler__SignatureValidationInfo*)self);
}

char* q_poppler__signaturevalidationinfo_signature(void* self) {
    libqt_string _str = Poppler__SignatureValidationInfo_Signature((Poppler__SignatureValidationInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of long long */ q_poppler__signaturevalidationinfo_signed_range_bounds(void* self) {
    libqt_list _arr = Poppler__SignatureValidationInfo_SignedRangeBounds((Poppler__SignatureValidationInfo*)self);
    return _arr;
}

bool q_poppler__signaturevalidationinfo_signs_total_document(void* self) {
    return Poppler__SignatureValidationInfo_SignsTotalDocument((Poppler__SignatureValidationInfo*)self);
}

Poppler__CertificateInfo* q_poppler__signaturevalidationinfo_certificate_info(void* self) {
    return Poppler__SignatureValidationInfo_CertificateInfo((Poppler__SignatureValidationInfo*)self);
}

void q_poppler__signaturevalidationinfo_operator_assign(void* self, void* other) {
    Poppler__SignatureValidationInfo_OperatorAssign((Poppler__SignatureValidationInfo*)self, (Poppler__SignatureValidationInfo*)other);
}

void q_poppler__signaturevalidationinfo_delete(void* self) {
    Poppler__SignatureValidationInfo_Delete((Poppler__SignatureValidationInfo*)(self));
}

Poppler__AsyncObject* q_poppler__asyncobject_new() {
    return Poppler__AsyncObject_new();
}

const QMetaObject* q_poppler__asyncobject_meta_object(void* self) {
    return Poppler__AsyncObject_MetaObject((Poppler__AsyncObject*)self);
}

void q_poppler__asyncobject_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Poppler__AsyncObject_OnMetaObject((Poppler__AsyncObject*)self, (intptr_t)callback);
}

const QMetaObject* q_poppler__asyncobject_super_meta_object(void* self) {
    return Poppler__AsyncObject_SuperMetaObject((Poppler__AsyncObject*)self);
}

void* q_poppler__asyncobject_metacast(void* self, const char* param1) {
    return Poppler__AsyncObject_Metacast((Poppler__AsyncObject*)self, param1);
}

void q_poppler__asyncobject_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Poppler__AsyncObject_OnMetacast((Poppler__AsyncObject*)self, (intptr_t)callback);
}

void* q_poppler__asyncobject_super_metacast(void* self, const char* param1) {
    return Poppler__AsyncObject_SuperMetacast((Poppler__AsyncObject*)self, param1);
}

int32_t q_poppler__asyncobject_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Poppler__AsyncObject_Metacall((Poppler__AsyncObject*)self, param1, param2, param3);
}

void q_poppler__asyncobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Poppler__AsyncObject_OnMetacall((Poppler__AsyncObject*)self, (intptr_t)callback);
}

int32_t q_poppler__asyncobject_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Poppler__AsyncObject_SuperMetacall((Poppler__AsyncObject*)self, param1, param2, param3);
}

const char* q_poppler__asyncobject_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__asyncobject_done(void* self) {
    Poppler__AsyncObject_Done((Poppler__AsyncObject*)self);
}

void q_poppler__asyncobject_on_done(void* self, void (*callback)(void*)) {
    Poppler__AsyncObject_Connect_Done((Poppler__AsyncObject*)self, (intptr_t)callback);
}

const char* q_poppler__asyncobject_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__asyncobject_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__asyncobject_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__asyncobject_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_poppler__asyncobject_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_poppler__asyncobject_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_poppler__asyncobject_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_poppler__asyncobject_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_poppler__asyncobject_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_poppler__asyncobject_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_poppler__asyncobject_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_poppler__asyncobject_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_poppler__asyncobject_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_poppler__asyncobject_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_poppler__asyncobject_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_poppler__asyncobject_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_poppler__asyncobject_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_poppler__asyncobject_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_poppler__asyncobject_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_poppler__asyncobject_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_poppler__asyncobject_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_poppler__asyncobject_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_poppler__asyncobject_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_poppler__asyncobject_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_poppler__asyncobject_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_poppler__asyncobject_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_poppler__asyncobject_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_poppler__asyncobject_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_poppler__asyncobject_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_poppler__asyncobject_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_poppler__asyncobject_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_poppler__asyncobject_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_poppler__asyncobject_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_poppler__asyncobject_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_poppler__asyncobject_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_poppler__asyncobject_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_poppler__asyncobject_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_poppler__asyncobject_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_poppler__asyncobject_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_poppler__asyncobject_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_poppler__asyncobject_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_poppler__asyncobject_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_poppler__asyncobject_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_poppler__asyncobject_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_poppler__asyncobject_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_poppler__asyncobject_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_poppler__asyncobject_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_poppler__asyncobject_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_poppler__asyncobject_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_poppler__asyncobject_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_poppler__asyncobject_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_poppler__asyncobject_event(void* self, void* event) {
    return Poppler__AsyncObject_Event((Poppler__AsyncObject*)self, (QEvent*)event);
}

bool q_poppler__asyncobject_super_event(void* self, void* event) {
    return Poppler__AsyncObject_SuperEvent((Poppler__AsyncObject*)self, (QEvent*)event);
}

void q_poppler__asyncobject_on_event(void* self, bool (*callback)(void*, void*)) {
    Poppler__AsyncObject_OnEvent((Poppler__AsyncObject*)self, (intptr_t)callback);
}

bool q_poppler__asyncobject_event_filter(void* self, void* watched, void* event) {
    return Poppler__AsyncObject_EventFilter((Poppler__AsyncObject*)self, (QObject*)watched, (QEvent*)event);
}

bool q_poppler__asyncobject_super_event_filter(void* self, void* watched, void* event) {
    return Poppler__AsyncObject_SuperEventFilter((Poppler__AsyncObject*)self, (QObject*)watched, (QEvent*)event);
}

void q_poppler__asyncobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Poppler__AsyncObject_OnEventFilter((Poppler__AsyncObject*)self, (intptr_t)callback);
}

void q_poppler__asyncobject_timer_event(void* self, void* event) {
    Poppler__AsyncObject_TimerEvent((Poppler__AsyncObject*)self, (QTimerEvent*)event);
}

void q_poppler__asyncobject_super_timer_event(void* self, void* event) {
    Poppler__AsyncObject_SuperTimerEvent((Poppler__AsyncObject*)self, (QTimerEvent*)event);
}

void q_poppler__asyncobject_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Poppler__AsyncObject_OnTimerEvent((Poppler__AsyncObject*)self, (intptr_t)callback);
}

void q_poppler__asyncobject_child_event(void* self, void* event) {
    Poppler__AsyncObject_ChildEvent((Poppler__AsyncObject*)self, (QChildEvent*)event);
}

void q_poppler__asyncobject_super_child_event(void* self, void* event) {
    Poppler__AsyncObject_SuperChildEvent((Poppler__AsyncObject*)self, (QChildEvent*)event);
}

void q_poppler__asyncobject_on_child_event(void* self, void (*callback)(void*, void*)) {
    Poppler__AsyncObject_OnChildEvent((Poppler__AsyncObject*)self, (intptr_t)callback);
}

void q_poppler__asyncobject_custom_event(void* self, void* event) {
    Poppler__AsyncObject_CustomEvent((Poppler__AsyncObject*)self, (QEvent*)event);
}

void q_poppler__asyncobject_super_custom_event(void* self, void* event) {
    Poppler__AsyncObject_SuperCustomEvent((Poppler__AsyncObject*)self, (QEvent*)event);
}

void q_poppler__asyncobject_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Poppler__AsyncObject_OnCustomEvent((Poppler__AsyncObject*)self, (intptr_t)callback);
}

void q_poppler__asyncobject_connect_notify(void* self, void* signal) {
    Poppler__AsyncObject_ConnectNotify((Poppler__AsyncObject*)self, (QMetaMethod*)signal);
}

void q_poppler__asyncobject_super_connect_notify(void* self, void* signal) {
    Poppler__AsyncObject_SuperConnectNotify((Poppler__AsyncObject*)self, (QMetaMethod*)signal);
}

void q_poppler__asyncobject_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Poppler__AsyncObject_OnConnectNotify((Poppler__AsyncObject*)self, (intptr_t)callback);
}

void q_poppler__asyncobject_disconnect_notify(void* self, void* signal) {
    Poppler__AsyncObject_DisconnectNotify((Poppler__AsyncObject*)self, (QMetaMethod*)signal);
}

void q_poppler__asyncobject_super_disconnect_notify(void* self, void* signal) {
    Poppler__AsyncObject_SuperDisconnectNotify((Poppler__AsyncObject*)self, (QMetaMethod*)signal);
}

void q_poppler__asyncobject_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Poppler__AsyncObject_OnDisconnectNotify((Poppler__AsyncObject*)self, (intptr_t)callback);
}

QObject* q_poppler__asyncobject_sender(void* self) {
    return Poppler__AsyncObject_Sender((Poppler__AsyncObject*)self);
}

QObject* q_poppler__asyncobject_super_sender(void* self) {
    return Poppler__AsyncObject_SuperSender((Poppler__AsyncObject*)self);
}

void q_poppler__asyncobject_on_sender(void* self, QObject* (*callback)()) {
    Poppler__AsyncObject_OnSender((Poppler__AsyncObject*)self, (intptr_t)callback);
}

int32_t q_poppler__asyncobject_sender_signal_index(void* self) {
    return Poppler__AsyncObject_SenderSignalIndex((Poppler__AsyncObject*)self);
}

int32_t q_poppler__asyncobject_super_sender_signal_index(void* self) {
    return Poppler__AsyncObject_SuperSenderSignalIndex((Poppler__AsyncObject*)self);
}

void q_poppler__asyncobject_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Poppler__AsyncObject_OnSenderSignalIndex((Poppler__AsyncObject*)self, (intptr_t)callback);
}

int32_t q_poppler__asyncobject_receivers(void* self, const char* signal) {
    return Poppler__AsyncObject_Receivers((Poppler__AsyncObject*)self, signal);
}

int32_t q_poppler__asyncobject_super_receivers(void* self, const char* signal) {
    return Poppler__AsyncObject_SuperReceivers((Poppler__AsyncObject*)self, signal);
}

void q_poppler__asyncobject_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Poppler__AsyncObject_OnReceivers((Poppler__AsyncObject*)self, (intptr_t)callback);
}

bool q_poppler__asyncobject_is_signal_connected(void* self, void* signal) {
    return Poppler__AsyncObject_IsSignalConnected((Poppler__AsyncObject*)self, (QMetaMethod*)signal);
}

bool q_poppler__asyncobject_super_is_signal_connected(void* self, void* signal) {
    return Poppler__AsyncObject_SuperIsSignalConnected((Poppler__AsyncObject*)self, (QMetaMethod*)signal);
}

void q_poppler__asyncobject_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Poppler__AsyncObject_OnIsSignalConnected((Poppler__AsyncObject*)self, (intptr_t)callback);
}

void q_poppler__asyncobject_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_poppler__asyncobject_delete(void* self) {
    Poppler__AsyncObject_Delete((Poppler__AsyncObject*)(self));
}

int32_t q_poppler__formfieldsignature_type(void* self) {
    return Poppler__FormFieldSignature_Type((Poppler__FormFieldSignature*)self);
}

int32_t q_poppler__formfieldsignature_signature_type(void* self) {
    return Poppler__FormFieldSignature_SignatureType((Poppler__FormFieldSignature*)self);
}

Poppler__SignatureValidationInfo* q_poppler__formfieldsignature_validate(void* self, int32_t opt) {
    return Poppler__FormFieldSignature_Validate((Poppler__FormFieldSignature*)self, opt);
}

Poppler__SignatureValidationInfo* q_poppler__formfieldsignature_validate2(void* self, int opt, void* validationTime) {
    return Poppler__FormFieldSignature_Validate2((Poppler__FormFieldSignature*)self, opt, (QDateTime*)validationTime);
}

int32_t q_poppler__formfieldsignature_validate_result(void* self) {
    return Poppler__FormFieldSignature_ValidateResult((Poppler__FormFieldSignature*)self);
}

int32_t q_poppler__formfieldsignature_sign(void* self, const char* outputFileName, void* data) {
    return Poppler__FormFieldSignature_Sign((Poppler__FormFieldSignature*)self, qstring(outputFileName), (Poppler__PDFConverter__NewSignatureData*)data);
}

QRectF* q_poppler__formfieldsignature_rect(void* self) {
    return Poppler__FormField_Rect((Poppler__FormField*)self);
}

int32_t q_poppler__formfieldsignature_id(void* self) {
    return Poppler__FormField_Id((Poppler__FormField*)self);
}

const char* q_poppler__formfieldsignature_name(void* self) {
    libqt_string _str = Poppler__FormField_Name((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__formfieldsignature_set_name(void* self, const char* name) {
    Poppler__FormField_SetName((Poppler__FormField*)self, qstring(name));
}

const char* q_poppler__formfieldsignature_fully_qualified_name(void* self) {
    libqt_string _str = Poppler__FormField_FullyQualifiedName((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__formfieldsignature_ui_name(void* self) {
    libqt_string _str = Poppler__FormField_UiName((Poppler__FormField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__formfieldsignature_is_read_only(void* self) {
    return Poppler__FormField_IsReadOnly((Poppler__FormField*)self);
}

void q_poppler__formfieldsignature_set_read_only(void* self, bool value) {
    Poppler__FormField_SetReadOnly((Poppler__FormField*)self, value);
}

bool q_poppler__formfieldsignature_is_visible(void* self) {
    return Poppler__FormField_IsVisible((Poppler__FormField*)self);
}

void q_poppler__formfieldsignature_set_visible(void* self, bool value) {
    Poppler__FormField_SetVisible((Poppler__FormField*)self, value);
}

bool q_poppler__formfieldsignature_is_printable(void* self) {
    return Poppler__FormField_IsPrintable((Poppler__FormField*)self);
}

void q_poppler__formfieldsignature_set_printable(void* self, bool value) {
    Poppler__FormField_SetPrintable((Poppler__FormField*)self, value);
}

Poppler__Link* q_poppler__formfieldsignature_activation_action(void* self) {
    return Poppler__FormField_ActivationAction((Poppler__FormField*)self);
}

Poppler__Link* q_poppler__formfieldsignature_additional_action(void* self, int32_t type) {
    return Poppler__FormField_AdditionalAction((Poppler__FormField*)self, type);
}

Poppler__Link* q_poppler__formfieldsignature_additional_action2(void* self, int32_t type) {
    return Poppler__FormField_AdditionalAction2((Poppler__FormField*)self, type);
}

void q_poppler__formfieldsignature_delete(void* self) {
    Poppler__FormFieldSignature_Delete((Poppler__FormFieldSignature*)(self));
}

libqt_list /* of enum Poppler__CryptoSignBackend */ q_poppler_available_crypto_sign_backends() {
    libqt_list _arr = Poppler_AvailableCryptoSignBackends();
    return _arr;
}

bool q_poppler_set_active_crypto_sign_backend(int32_t param1) {
    return Poppler_SetActiveCryptoSignBackend(param1);
}

bool q_poppler_has_crypto_sign_backend_feature(int32_t param1, int32_t param2) {
    return Poppler_HasCryptoSignBackendFeature(param1, param2);
}

bool q_poppler_has_n_s_s_support() {
    return Poppler_HasNSSSupport();
}

libqt_list /* of Poppler__CertificateInfo* */ q_poppler_get_available_signing_certificates() {
    libqt_list _arr = Poppler_GetAvailableSigningCertificates();
    return _arr;
}

const char* q_poppler_get_n_s_s_dir() {
    libqt_string _str = Poppler_GetNSSDir();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler_set_n_s_s_dir(const char* param1) {
    Poppler_SetNSSDir(qstring(param1));
}

void q_poppler_set_pgp_signatures_allowed(bool param1) {
    Poppler_SetPgpSignaturesAllowed(param1);
}

bool q_poppler_are_pgp_signatures_allowed() {
    return Poppler_ArePgpSignaturesAllowed();
}
