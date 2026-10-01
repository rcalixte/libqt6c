#pragma once
#ifndef RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_FORM_H
#define RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_FORM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldIcon.html)

/// q_poppler__formfieldicon_new constructs a new Poppler::FormFieldIcon object.
///
/// @param ffIcon Poppler__FormFieldIcon*
///
Poppler__FormFieldIcon* q_poppler__formfieldicon_new(const void* ffIcon);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldIcon.html)
///
/// @param self Poppler__FormFieldIcon*
/// @param ffIcon Poppler__FormFieldIcon*
///
void q_poppler__formfieldicon_operator_assign(void* self, const void* ffIcon);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldIcon.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__FormFieldIcon*
///
void q_poppler__formfieldicon_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self const Poppler__FormField*
///
QRectF* q_poppler__formfield_rect(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self const Poppler__FormField*
///
int32_t q_poppler__formfield_id(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormField*
///
const char* q_poppler__formfield_name(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self const Poppler__FormField*
/// @param name const char*
///
void q_poppler__formfield_set_name(const void* self, const char* name);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormField*
///
const char* q_poppler__formfield_fully_qualified_name(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormField*
///
const char* q_poppler__formfield_ui_name(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self const Poppler__FormField*
///
bool q_poppler__formfield_is_read_only(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self Poppler__FormField*
/// @param value bool
///
void q_poppler__formfield_set_read_only(void* self, bool value);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self const Poppler__FormField*
///
bool q_poppler__formfield_is_visible(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self Poppler__FormField*
/// @param value bool
///
void q_poppler__formfield_set_visible(void* self, bool value);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self const Poppler__FormField*
///
bool q_poppler__formfield_is_printable(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self Poppler__FormField*
/// @param value bool
///
void q_poppler__formfield_set_printable(void* self, bool value);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self const Poppler__FormField*
///
Poppler__Link* q_poppler__formfield_activation_action(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self const Poppler__FormField*
/// @param type enum Poppler__FormField__AdditionalActionType
///
Poppler__Link* q_poppler__formfield_additional_action(const void* self, int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// @param self const Poppler__FormField*
/// @param type enum Poppler__Annotation__AdditionalActionType
///
Poppler__Link* q_poppler__formfield_additional_action2(const void* self, int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__FormField*
///
void q_poppler__formfield_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
/// @return enum Poppler__FormField__FormType
///
int32_t q_poppler__formfieldbutton_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
/// @return enum Poppler__FormFieldButton__ButtonType
///
int32_t q_poppler__formfieldbutton_button_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldButton*
///
const char* q_poppler__formfieldbutton_caption(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
Poppler__FormFieldIcon* q_poppler__formfieldbutton_icon(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self Poppler__FormFieldButton*
/// @param icon Poppler__FormFieldIcon*
///
void q_poppler__formfieldbutton_set_icon(void* self, const void* icon);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
bool q_poppler__formfieldbutton_state(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self Poppler__FormFieldButton*
/// @param state bool
///
void q_poppler__formfieldbutton_set_state(void* self, bool state);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
/// @return libqt_list of int
///
libqt_list q_poppler__formfieldbutton_siblings(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
QRectF* q_poppler__formfieldbutton_rect(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
int32_t q_poppler__formfieldbutton_id(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldButton*
///
const char* q_poppler__formfieldbutton_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
/// @param name const char*
///
void q_poppler__formfieldbutton_set_name(const void* self, const char* name);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldButton*
///
const char* q_poppler__formfieldbutton_fully_qualified_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldButton*
///
const char* q_poppler__formfieldbutton_ui_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
bool q_poppler__formfieldbutton_is_read_only(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self Poppler__FormFieldButton*
/// @param value bool
///
void q_poppler__formfieldbutton_set_read_only(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
bool q_poppler__formfieldbutton_is_visible(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self Poppler__FormFieldButton*
/// @param value bool
///
void q_poppler__formfieldbutton_set_visible(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
bool q_poppler__formfieldbutton_is_printable(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self Poppler__FormFieldButton*
/// @param value bool
///
void q_poppler__formfieldbutton_set_printable(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
///
Poppler__Link* q_poppler__formfieldbutton_activation_action(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
/// @param type enum Poppler__FormField__AdditionalActionType
///
Poppler__Link* q_poppler__formfieldbutton_additional_action(const void* self, int32_t type);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// @param self const Poppler__FormFieldButton*
/// @param type enum Poppler__Annotation__AdditionalActionType
///
Poppler__Link* q_poppler__formfieldbutton_additional_action2(const void* self, int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__FormFieldButton*
///
void q_poppler__formfieldbutton_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
/// @return enum Poppler__FormField__FormType
///
int32_t q_poppler__formfieldtext_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
/// @return enum Poppler__FormFieldText__TextType
///
int32_t q_poppler__formfieldtext_text_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldText*
///
const char* q_poppler__formfieldtext_text(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self Poppler__FormFieldText*
/// @param text const char*
///
void q_poppler__formfieldtext_set_text(void* self, const char* text);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self Poppler__FormFieldText*
/// @param text const char*
///
void q_poppler__formfieldtext_set_appearance_text(void* self, const char* text);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
bool q_poppler__formfieldtext_is_password(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
bool q_poppler__formfieldtext_is_rich_text(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
int32_t q_poppler__formfieldtext_maximum_length(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_poppler__formfieldtext_text_alignment(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
bool q_poppler__formfieldtext_can_be_spell_checked(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
double q_poppler__formfieldtext_get_font_size(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self Poppler__FormFieldText*
/// @param fontSize int
///
void q_poppler__formfieldtext_set_font_size(void* self, int fontSize);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
QRectF* q_poppler__formfieldtext_rect(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
int32_t q_poppler__formfieldtext_id(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldText*
///
const char* q_poppler__formfieldtext_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
/// @param name const char*
///
void q_poppler__formfieldtext_set_name(const void* self, const char* name);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldText*
///
const char* q_poppler__formfieldtext_fully_qualified_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldText*
///
const char* q_poppler__formfieldtext_ui_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
bool q_poppler__formfieldtext_is_read_only(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self Poppler__FormFieldText*
/// @param value bool
///
void q_poppler__formfieldtext_set_read_only(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
bool q_poppler__formfieldtext_is_visible(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self Poppler__FormFieldText*
/// @param value bool
///
void q_poppler__formfieldtext_set_visible(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
bool q_poppler__formfieldtext_is_printable(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self Poppler__FormFieldText*
/// @param value bool
///
void q_poppler__formfieldtext_set_printable(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
///
Poppler__Link* q_poppler__formfieldtext_activation_action(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
/// @param type enum Poppler__FormField__AdditionalActionType
///
Poppler__Link* q_poppler__formfieldtext_additional_action(const void* self, int32_t type);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// @param self const Poppler__FormFieldText*
/// @param type enum Poppler__Annotation__AdditionalActionType
///
Poppler__Link* q_poppler__formfieldtext_additional_action2(const void* self, int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__FormFieldText*
///
void q_poppler__formfieldtext_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
/// @return enum Poppler__FormField__FormType
///
int32_t q_poppler__formfieldchoice_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
/// @return enum Poppler__FormFieldChoice__ChoiceType
///
int32_t q_poppler__formfieldchoice_choice_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Poppler__FormFieldChoice*
///
const char** q_poppler__formfieldchoice_choices(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
/// @return libqt_list of libqt_pair tuple of const char* and const char*
///
libqt_list q_poppler__formfieldchoice_choices_with_export_values(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
bool q_poppler__formfieldchoice_is_editable(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
bool q_poppler__formfieldchoice_multi_select(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
/// @return libqt_list of int
///
libqt_list q_poppler__formfieldchoice_current_choices(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self Poppler__FormFieldChoice*
/// @param choice libqt_list of int
///
void q_poppler__formfieldchoice_set_current_choices(void* self, libqt_list choice);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldChoice*
///
const char* q_poppler__formfieldchoice_edit_choice(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self Poppler__FormFieldChoice*
/// @param text const char*
///
void q_poppler__formfieldchoice_set_edit_choice(void* self, const char* text);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_poppler__formfieldchoice_text_alignment(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
bool q_poppler__formfieldchoice_can_be_spell_checked(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self Poppler__FormFieldChoice*
/// @param text const char*
///
void q_poppler__formfieldchoice_set_appearance_choice_text(void* self, const char* text);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
QRectF* q_poppler__formfieldchoice_rect(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
int32_t q_poppler__formfieldchoice_id(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldChoice*
///
const char* q_poppler__formfieldchoice_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
/// @param name const char*
///
void q_poppler__formfieldchoice_set_name(const void* self, const char* name);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldChoice*
///
const char* q_poppler__formfieldchoice_fully_qualified_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldChoice*
///
const char* q_poppler__formfieldchoice_ui_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
bool q_poppler__formfieldchoice_is_read_only(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self Poppler__FormFieldChoice*
/// @param value bool
///
void q_poppler__formfieldchoice_set_read_only(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
bool q_poppler__formfieldchoice_is_visible(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self Poppler__FormFieldChoice*
/// @param value bool
///
void q_poppler__formfieldchoice_set_visible(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
bool q_poppler__formfieldchoice_is_printable(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self Poppler__FormFieldChoice*
/// @param value bool
///
void q_poppler__formfieldchoice_set_printable(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
///
Poppler__Link* q_poppler__formfieldchoice_activation_action(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
/// @param type enum Poppler__FormField__AdditionalActionType
///
Poppler__Link* q_poppler__formfieldchoice_additional_action(const void* self, int32_t type);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// @param self const Poppler__FormFieldChoice*
/// @param type enum Poppler__Annotation__AdditionalActionType
///
Poppler__Link* q_poppler__formfieldchoice_additional_action2(const void* self, int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__FormFieldChoice*
///
void q_poppler__formfieldchoice_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)

/// q_poppler__certificateinfo_new constructs a new Poppler::CertificateInfo object.
///
Poppler__CertificateInfo* q_poppler__certificateinfo_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)

/// q_poppler__certificateinfo_new2 constructs a new Poppler::CertificateInfo object.
///
/// @param other Poppler__CertificateInfo*
///
Poppler__CertificateInfo* q_poppler__certificateinfo_new2(const void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
bool q_poppler__certificateinfo_is_null(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
int32_t q_poppler__certificateinfo_version(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Poppler__CertificateInfo*
///
char* q_poppler__certificateinfo_serial_number(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__CertificateInfo*
/// @param key enum Poppler__CertificateInfo__EntityInfoKey
///
const char* q_poppler__certificateinfo_issuer_info(const void* self, int32_t key);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__CertificateInfo*
/// @param key enum Poppler__CertificateInfo__EntityInfoKey
///
const char* q_poppler__certificateinfo_subject_info(const void* self, int32_t key);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__CertificateInfo*
///
const char* q_poppler__certificateinfo_nick_name(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
QDateTime* q_poppler__certificateinfo_validity_start(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
QDateTime* q_poppler__certificateinfo_validity_end(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
/// @return flag of enum Poppler__CertificateInfo__KeyUsageExtension
///
int32_t q_poppler__certificateinfo_key_usage_extensions(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Poppler__CertificateInfo*
///
char* q_poppler__certificateinfo_public_key(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
/// @return enum Poppler__CertificateInfo__PublicKeyType
///
int32_t q_poppler__certificateinfo_public_key_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
int32_t q_poppler__certificateinfo_public_key_strength(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
bool q_poppler__certificateinfo_is_self_signed(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
bool q_poppler__certificateinfo_is_qualified(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
/// @return enum Poppler__CertificateInfo__CertificateType
///
int32_t q_poppler__certificateinfo_certificate_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Poppler__CertificateInfo*
///
char* q_poppler__certificateinfo_certificate_data(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
/// @param password const char*
///
bool q_poppler__certificateinfo_check_password(const void* self, const char* password);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self const Poppler__CertificateInfo*
///
/// @return enum Poppler__CertificateInfo__KeyLocation
///
int32_t q_poppler__certificateinfo_key_location(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// @param self Poppler__CertificateInfo*
/// @param other Poppler__CertificateInfo*
///
void q_poppler__certificateinfo_operator_assign(void* self, const void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__CertificateInfo*
///
void q_poppler__certificateinfo_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)

/// q_poppler__signaturevalidationinfo_new constructs a new Poppler::SignatureValidationInfo object.
///
/// @param other Poppler__SignatureValidationInfo*
///
Poppler__SignatureValidationInfo* q_poppler__signaturevalidationinfo_new(const void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @param self const Poppler__SignatureValidationInfo*
///
/// @return enum Poppler__SignatureValidationInfo__SignatureStatus
///
int32_t q_poppler__signaturevalidationinfo_signature_status(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @param self const Poppler__SignatureValidationInfo*
///
/// @return enum Poppler__SignatureValidationInfo__CertificateStatus
///
int32_t q_poppler__signaturevalidationinfo_certificate_status(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__SignatureValidationInfo*
///
const char* q_poppler__signaturevalidationinfo_signer_name(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__SignatureValidationInfo*
///
const char* q_poppler__signaturevalidationinfo_signer_subject_d_n(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__SignatureValidationInfo*
///
const char* q_poppler__signaturevalidationinfo_location(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__SignatureValidationInfo*
///
const char* q_poppler__signaturevalidationinfo_reason(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @param self const Poppler__SignatureValidationInfo*
///
/// @return enum Poppler__SignatureValidationInfo__HashAlgorithm
///
int32_t q_poppler__signaturevalidationinfo_hash_algorithm(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @param self const Poppler__SignatureValidationInfo*
///
time_t q_poppler__signaturevalidationinfo_signing_time(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Poppler__SignatureValidationInfo*
///
char* q_poppler__signaturevalidationinfo_signature(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @param self const Poppler__SignatureValidationInfo*
///
/// @return libqt_list of long long
///
libqt_list q_poppler__signaturevalidationinfo_signed_range_bounds(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @param self const Poppler__SignatureValidationInfo*
///
bool q_poppler__signaturevalidationinfo_signs_total_document(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @param self const Poppler__SignatureValidationInfo*
///
Poppler__CertificateInfo* q_poppler__signaturevalidationinfo_certificate_info(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// @param self Poppler__SignatureValidationInfo*
/// @param other Poppler__SignatureValidationInfo*
///
void q_poppler__signaturevalidationinfo_operator_assign(void* self, const void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__SignatureValidationInfo*
///
void q_poppler__signaturevalidationinfo_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)

/// q_poppler__asyncobject_new constructs a new Poppler::AsyncObject object.
///
Poppler__AsyncObject* q_poppler__asyncobject_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const Poppler__AsyncObject*
///
const QMetaObject* q_poppler__asyncobject_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__AsyncObject*
/// @param callback const QMetaObject* func(const Poppler__AsyncObject* self)
///
void q_poppler__asyncobject_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const Poppler__AsyncObject*
///
const QMetaObject* q_poppler__asyncobject_super_meta_object(const void* self);

/// @param self Poppler__AsyncObject*
/// @param param1 const char*
///
void* q_poppler__asyncobject_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Poppler__AsyncObject*
/// @param callback void* func(Poppler__AsyncObject* self, const char* param1)
///
void q_poppler__asyncobject_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Poppler__AsyncObject*
/// @param param1 const char*
///
void* q_poppler__asyncobject_super_metacast(void* self, const char* param1);

/// @param self Poppler__AsyncObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_poppler__asyncobject_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Poppler__AsyncObject*
/// @param callback int32_t func(Poppler__AsyncObject* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_poppler__asyncobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Poppler__AsyncObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_poppler__asyncobject_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_poppler__asyncobject_tr(const char* s);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
///
/// @param self Poppler__AsyncObject*
///
void q_poppler__asyncobject_done(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
///
/// @param self Poppler__AsyncObject*
/// @param callback void func(Poppler__AsyncObject* self)
///
void q_poppler__asyncobject_on_done(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_poppler__asyncobject_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_poppler__asyncobject_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__AsyncObject*
///
const char* q_poppler__asyncobject_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Poppler__AsyncObject*
/// @param name const char*
///
void q_poppler__asyncobject_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const Poppler__AsyncObject*
///
bool q_poppler__asyncobject_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const Poppler__AsyncObject*
///
bool q_poppler__asyncobject_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const Poppler__AsyncObject*
///
bool q_poppler__asyncobject_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const Poppler__AsyncObject*
///
bool q_poppler__asyncobject_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Poppler__AsyncObject*
/// @param b bool
///
bool q_poppler__asyncobject_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const Poppler__AsyncObject*
///
QThread* q_poppler__asyncobject_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Poppler__AsyncObject*
/// @param thread QThread*
///
bool q_poppler__asyncobject_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Poppler__AsyncObject*
/// @param interval int
///
int32_t q_poppler__asyncobject_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Poppler__AsyncObject*
/// @param time int64_t of nanoseconds
///
int32_t q_poppler__asyncobject_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Poppler__AsyncObject*
/// @param id int
///
void q_poppler__asyncobject_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Poppler__AsyncObject*
/// @param id enum Qt__TimerId
///
void q_poppler__asyncobject_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const Poppler__AsyncObject*
///
/// @return libqt_list of QObject*
///
libqt_list q_poppler__asyncobject_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Poppler__AsyncObject*
/// @param parent QObject*
///
void q_poppler__asyncobject_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Poppler__AsyncObject*
/// @param filterObj QObject*
///
void q_poppler__asyncobject_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Poppler__AsyncObject*
/// @param obj QObject*
///
void q_poppler__asyncobject_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_poppler__asyncobject_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_poppler__asyncobject_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Poppler__AsyncObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_poppler__asyncobject_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_poppler__asyncobject_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_poppler__asyncobject_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Poppler__AsyncObject*
///
bool q_poppler__asyncobject_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Poppler__AsyncObject*
/// @param receiver QObject*
///
bool q_poppler__asyncobject_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_poppler__asyncobject_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const Poppler__AsyncObject*
///
void q_poppler__asyncobject_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const Poppler__AsyncObject*
///
void q_poppler__asyncobject_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Poppler__AsyncObject*
/// @param name const char*
/// @param value QVariant*
///
bool q_poppler__asyncobject_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const Poppler__AsyncObject*
/// @param name const char*
///
QVariant* q_poppler__asyncobject_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Poppler__AsyncObject*
///
const char** q_poppler__asyncobject_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Poppler__AsyncObject*
///
QBindingStorage* q_poppler__asyncobject_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const Poppler__AsyncObject*
///
const QBindingStorage* q_poppler__asyncobject_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Poppler__AsyncObject*
///
void q_poppler__asyncobject_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Poppler__AsyncObject*
/// @param callback void func(Poppler__AsyncObject* self)
///
void q_poppler__asyncobject_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const Poppler__AsyncObject*
///
QObject* q_poppler__asyncobject_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const Poppler__AsyncObject*
/// @param classname const char*
///
bool q_poppler__asyncobject_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Poppler__AsyncObject*
///
void q_poppler__asyncobject_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Poppler__AsyncObject*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_poppler__asyncobject_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Poppler__AsyncObject*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_poppler__asyncobject_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_poppler__asyncobject_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_poppler__asyncobject_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const Poppler__AsyncObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_poppler__asyncobject_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Poppler__AsyncObject*
/// @param signal const char*
///
bool q_poppler__asyncobject_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Poppler__AsyncObject*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_poppler__asyncobject_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Poppler__AsyncObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_poppler__asyncobject_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const Poppler__AsyncObject*
/// @param receiver QObject*
/// @param member const char*
///
bool q_poppler__asyncobject_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Poppler__AsyncObject*
/// @param param1 QObject*
///
void q_poppler__asyncobject_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Poppler__AsyncObject*
/// @param callback void func(Poppler__AsyncObject* self, QObject* param1)
///
void q_poppler__asyncobject_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param event QEvent*
///
bool q_poppler__asyncobject_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param event QEvent*
///
bool q_poppler__asyncobject_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback bool func(Poppler__AsyncObject* self, QEvent* event)
///
void q_poppler__asyncobject_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_poppler__asyncobject_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_poppler__asyncobject_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback bool func(Poppler__AsyncObject* self, QObject* watched, QEvent* event)
///
void q_poppler__asyncobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param event QTimerEvent*
///
void q_poppler__asyncobject_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param event QTimerEvent*
///
void q_poppler__asyncobject_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback void func(Poppler__AsyncObject* self, QTimerEvent* event)
///
void q_poppler__asyncobject_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param event QChildEvent*
///
void q_poppler__asyncobject_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param event QChildEvent*
///
void q_poppler__asyncobject_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback void func(Poppler__AsyncObject* self, QChildEvent* event)
///
void q_poppler__asyncobject_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param event QEvent*
///
void q_poppler__asyncobject_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param event QEvent*
///
void q_poppler__asyncobject_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback void func(Poppler__AsyncObject* self, QEvent* event)
///
void q_poppler__asyncobject_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param signal QMetaMethod*
///
void q_poppler__asyncobject_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param signal QMetaMethod*
///
void q_poppler__asyncobject_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback void func(Poppler__AsyncObject* self, QMetaMethod* signal)
///
void q_poppler__asyncobject_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param signal QMetaMethod*
///
void q_poppler__asyncobject_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param signal QMetaMethod*
///
void q_poppler__asyncobject_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback void func(Poppler__AsyncObject* self, QMetaMethod* signal)
///
void q_poppler__asyncobject_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Poppler__AsyncObject*
///
QObject* q_poppler__asyncobject_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Poppler__AsyncObject*
///
QObject* q_poppler__asyncobject_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback QObject* func(Poppler__AsyncObject* self)
///
void q_poppler__asyncobject_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Poppler__AsyncObject*
///
int32_t q_poppler__asyncobject_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Poppler__AsyncObject*
///
int32_t q_poppler__asyncobject_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback int32_t func(Poppler__AsyncObject* self)
///
void q_poppler__asyncobject_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Poppler__AsyncObject*
/// @param signal const char*
///
int32_t q_poppler__asyncobject_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Poppler__AsyncObject*
/// @param signal const char*
///
int32_t q_poppler__asyncobject_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback int32_t func(Poppler__AsyncObject* self, const char* signal)
///
void q_poppler__asyncobject_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const Poppler__AsyncObject*
/// @param signal QMetaMethod*
///
bool q_poppler__asyncobject_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const Poppler__AsyncObject*
/// @param signal QMetaMethod*
///
bool q_poppler__asyncobject_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Poppler__AsyncObject*
/// @param callback bool func(Poppler__AsyncObject* self, QMetaMethod* signal)
///
void q_poppler__asyncobject_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Poppler__AsyncObject*
/// @param callback void func(Poppler__AsyncObject* self, const char* objectName)
///
void q_poppler__asyncobject_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__AsyncObject*
///
void q_poppler__asyncobject_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
///
/// @return enum Poppler__FormField__FormType
///
int32_t q_poppler__formfieldsignature_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
///
/// @return enum Poppler__FormFieldSignature__SignatureType
///
int32_t q_poppler__formfieldsignature_signature_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
/// @param opt enum Poppler__FormFieldSignature__ValidateOptions
///
Poppler__SignatureValidationInfo* q_poppler__formfieldsignature_validate(const void* self, int32_t opt);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
/// @param opt int
/// @param validationTime QDateTime*
///
Poppler__SignatureValidationInfo* q_poppler__formfieldsignature_validate2(const void* self, int opt, const void* validationTime);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
///
/// @return enum Poppler__SignatureValidationInfo__CertificateStatus
///
int32_t q_poppler__formfieldsignature_validate_result(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
/// @param outputFileName const char*
/// @param data Poppler__PDFConverter__NewSignatureData*
///
/// @return enum Poppler__FormFieldSignature__SigningResult
///
int32_t q_poppler__formfieldsignature_sign(const void* self, const char* outputFileName, const void* data);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
///
QRectF* q_poppler__formfieldsignature_rect(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
///
int32_t q_poppler__formfieldsignature_id(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldSignature*
///
const char* q_poppler__formfieldsignature_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
/// @param name const char*
///
void q_poppler__formfieldsignature_set_name(const void* self, const char* name);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldSignature*
///
const char* q_poppler__formfieldsignature_fully_qualified_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__FormFieldSignature*
///
const char* q_poppler__formfieldsignature_ui_name(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
///
bool q_poppler__formfieldsignature_is_read_only(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self Poppler__FormFieldSignature*
/// @param value bool
///
void q_poppler__formfieldsignature_set_read_only(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
///
bool q_poppler__formfieldsignature_is_visible(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self Poppler__FormFieldSignature*
/// @param value bool
///
void q_poppler__formfieldsignature_set_visible(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
///
bool q_poppler__formfieldsignature_is_printable(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self Poppler__FormFieldSignature*
/// @param value bool
///
void q_poppler__formfieldsignature_set_printable(void* self, bool value);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
///
Poppler__Link* q_poppler__formfieldsignature_activation_action(const void* self);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
/// @param type enum Poppler__FormField__AdditionalActionType
///
Poppler__Link* q_poppler__formfieldsignature_additional_action(const void* self, int32_t type);

/// Inherited from Poppler::FormField
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// @param self const Poppler__FormFieldSignature*
/// @param type enum Poppler__Annotation__AdditionalActionType
///
Poppler__Link* q_poppler__formfieldsignature_additional_action2(const void* self, int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__FormFieldSignature*
///
void q_poppler__formfieldsignature_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
/// @return libqt_list of enum Poppler__CryptoSignBackend
///
libqt_list q_poppler_available_crypto_sign_backends();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
/// @return enum Poppler__CryptoSignBackend (Returns -1 for an invalid value)
///
int32_t q_poppler_active_crypto_sign_backend();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
/// @param backend enum Poppler__CryptoSignBackend
///
bool q_poppler_set_active_crypto_sign_backend(int32_t backend);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
/// @param param1 enum Poppler__CryptoSignBackend
/// @param param2 enum Poppler__CryptoSignBackendFeature
///
bool q_poppler_has_crypto_sign_backend_feature(int32_t param1, int32_t param2);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
bool q_poppler_has_n_s_s_support();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
/// @return libqt_list of Poppler__CertificateInfo*
///
libqt_list q_poppler_get_available_signing_certificates();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_poppler_get_n_s_s_dir();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
/// @param pathURL const char*
///
void q_poppler_set_n_s_s_dir(const char* pathURL);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
/// @param f char* func(const char* param1)
///
void q_poppler_set_n_s_s_password_callback(char* (*f)(const char* funcparam1));

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
/// @param allowed bool
///
void q_poppler_set_pgp_signatures_allowed(bool allowed);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
bool q_poppler_are_pgp_signatures_allowed();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_CRYPTOSIGNBACKEND_NSS = 0,
    POPPLER_CRYPTOSIGNBACKEND_GPG = 1
} Poppler__CryptoSignBackend;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_CRYPTOSIGNBACKENDFEATURE_BACKENDASKSPASSPHRASE = 0
} Poppler__CryptoSignBackendFeature;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_FORMFIELD_FORMTYPE_FORMBUTTON = 0,
    POPPLER_FORMFIELD_FORMTYPE_FORMTEXT = 1,
    POPPLER_FORMFIELD_FORMTYPE_FORMCHOICE = 2,
    POPPLER_FORMFIELD_FORMTYPE_FORMSIGNATURE = 3
} Poppler__FormField__FormType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_FORMFIELD_ADDITIONALACTIONTYPE_FIELDMODIFIED = 0,
    POPPLER_FORMFIELD_ADDITIONALACTIONTYPE_FORMATFIELD = 1,
    POPPLER_FORMFIELD_ADDITIONALACTIONTYPE_VALIDATEFIELD = 2,
    POPPLER_FORMFIELD_ADDITIONALACTIONTYPE_CALCULATEFIELD = 3
} Poppler__FormField__AdditionalActionType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_FORMFIELDBUTTON_BUTTONTYPE_PUSH = 0,
    POPPLER_FORMFIELDBUTTON_BUTTONTYPE_CHECKBOX = 1,
    POPPLER_FORMFIELDBUTTON_BUTTONTYPE_RADIO = 2
} Poppler__FormFieldButton__ButtonType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_FORMFIELDTEXT_TEXTTYPE_NORMAL = 0,
    POPPLER_FORMFIELDTEXT_TEXTTYPE_MULTILINE = 1,
    POPPLER_FORMFIELDTEXT_TEXTTYPE_FILESELECT = 2
} Poppler__FormFieldText__TextType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_FORMFIELDCHOICE_CHOICETYPE_COMBOBOX = 0,
    POPPLER_FORMFIELDCHOICE_CHOICETYPE_LISTBOX = 1
} Poppler__FormFieldChoice__ChoiceType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_CERTIFICATEINFO_PUBLICKEYTYPE_RSAKEY = 0,
    POPPLER_CERTIFICATEINFO_PUBLICKEYTYPE_DSAKEY = 1,
    POPPLER_CERTIFICATEINFO_PUBLICKEYTYPE_ECKEY = 2,
    POPPLER_CERTIFICATEINFO_PUBLICKEYTYPE_OTHERKEY = 3
} Poppler__CertificateInfo__PublicKeyType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_CERTIFICATEINFO_KEYUSAGEEXTENSION_KUDIGITALSIGNATURE = 128,
    POPPLER_CERTIFICATEINFO_KEYUSAGEEXTENSION_KUNONREPUDIATION = 64,
    POPPLER_CERTIFICATEINFO_KEYUSAGEEXTENSION_KUKEYENCIPHERMENT = 32,
    POPPLER_CERTIFICATEINFO_KEYUSAGEEXTENSION_KUDATAENCIPHERMENT = 16,
    POPPLER_CERTIFICATEINFO_KEYUSAGEEXTENSION_KUKEYAGREEMENT = 8,
    POPPLER_CERTIFICATEINFO_KEYUSAGEEXTENSION_KUKEYCERTSIGN = 4,
    POPPLER_CERTIFICATEINFO_KEYUSAGEEXTENSION_KUCLRSIGN = 2,
    POPPLER_CERTIFICATEINFO_KEYUSAGEEXTENSION_KUENCIPHERONLY = 1,
    POPPLER_CERTIFICATEINFO_KEYUSAGEEXTENSION_KUNONE = 0
} Poppler__CertificateInfo__KeyUsageExtension;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_CERTIFICATEINFO_ENTITYINFOKEY_COMMONNAME = 0,
    POPPLER_CERTIFICATEINFO_ENTITYINFOKEY_DISTINGUISHEDNAME = 1,
    POPPLER_CERTIFICATEINFO_ENTITYINFOKEY_EMAILADDRESS = 2,
    POPPLER_CERTIFICATEINFO_ENTITYINFOKEY_ORGANIZATION = 3
} Poppler__CertificateInfo__EntityInfoKey;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_CERTIFICATEINFO_CERTIFICATETYPE_X509 = 0,
    POPPLER_CERTIFICATEINFO_CERTIFICATETYPE_PGP = 1
} Poppler__CertificateInfo__CertificateType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_CERTIFICATEINFO_KEYLOCATION_UNKNOWN = 0,
    POPPLER_CERTIFICATEINFO_KEYLOCATION_OTHER = 1,
    POPPLER_CERTIFICATEINFO_KEYLOCATION_COMPUTER = 2,
    POPPLER_CERTIFICATEINFO_KEYLOCATION_HARDWARETOKEN = 3
} Poppler__CertificateInfo__KeyLocation;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_SIGNATUREVALIDATIONINFO_SIGNATURESTATUS_SIGNATUREVALID = 0,
    POPPLER_SIGNATUREVALIDATIONINFO_SIGNATURESTATUS_SIGNATUREINVALID = 1,
    POPPLER_SIGNATUREVALIDATIONINFO_SIGNATURESTATUS_SIGNATUREDIGESTMISMATCH = 2,
    POPPLER_SIGNATUREVALIDATIONINFO_SIGNATURESTATUS_SIGNATUREDECODINGERROR = 3,
    POPPLER_SIGNATUREVALIDATIONINFO_SIGNATURESTATUS_SIGNATUREGENERICERROR = 4,
    POPPLER_SIGNATUREVALIDATIONINFO_SIGNATURESTATUS_SIGNATURENOTFOUND = 5,
    POPPLER_SIGNATUREVALIDATIONINFO_SIGNATURESTATUS_SIGNATURENOTVERIFIED = 6
} Poppler__SignatureValidationInfo__SignatureStatus;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_SIGNATUREVALIDATIONINFO_CERTIFICATESTATUS_CERTIFICATETRUSTED = 0,
    POPPLER_SIGNATUREVALIDATIONINFO_CERTIFICATESTATUS_CERTIFICATEUNTRUSTEDISSUER = 1,
    POPPLER_SIGNATUREVALIDATIONINFO_CERTIFICATESTATUS_CERTIFICATEUNKNOWNISSUER = 2,
    POPPLER_SIGNATUREVALIDATIONINFO_CERTIFICATESTATUS_CERTIFICATEREVOKED = 3,
    POPPLER_SIGNATUREVALIDATIONINFO_CERTIFICATESTATUS_CERTIFICATEEXPIRED = 4,
    POPPLER_SIGNATUREVALIDATIONINFO_CERTIFICATESTATUS_CERTIFICATEGENERICERROR = 5,
    POPPLER_SIGNATUREVALIDATIONINFO_CERTIFICATESTATUS_CERTIFICATENOTVERIFIED = 6,
    POPPLER_SIGNATUREVALIDATIONINFO_CERTIFICATESTATUS_CERTIFICATEVERIFICATIONINPROGRESS = 7
} Poppler__SignatureValidationInfo__CertificateStatus;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_SIGNATUREVALIDATIONINFO_HASHALGORITHM_HASHALGORITHMUNKNOWN = 0,
    POPPLER_SIGNATUREVALIDATIONINFO_HASHALGORITHM_HASHALGORITHMMD2 = 1,
    POPPLER_SIGNATUREVALIDATIONINFO_HASHALGORITHM_HASHALGORITHMMD5 = 2,
    POPPLER_SIGNATUREVALIDATIONINFO_HASHALGORITHM_HASHALGORITHMSHA1 = 3,
    POPPLER_SIGNATUREVALIDATIONINFO_HASHALGORITHM_HASHALGORITHMSHA256 = 4,
    POPPLER_SIGNATUREVALIDATIONINFO_HASHALGORITHM_HASHALGORITHMSHA384 = 5,
    POPPLER_SIGNATUREVALIDATIONINFO_HASHALGORITHM_HASHALGORITHMSHA512 = 6,
    POPPLER_SIGNATUREVALIDATIONINFO_HASHALGORITHM_HASHALGORITHMSHA224 = 7
} Poppler__SignatureValidationInfo__HashAlgorithm;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_FORMFIELDSIGNATURE_SIGNATURETYPE_UNKNOWNSIGNATURETYPE = 0,
    POPPLER_FORMFIELDSIGNATURE_SIGNATURETYPE_ADBEPKCS7SHA1 = 1,
    POPPLER_FORMFIELDSIGNATURE_SIGNATURETYPE_ADBEPKCS7DETACHED = 2,
    POPPLER_FORMFIELDSIGNATURE_SIGNATURETYPE_ETSICADESDETACHED = 3,
    POPPLER_FORMFIELDSIGNATURE_SIGNATURETYPE_UNSIGNEDSIGNATURE = 4,
    POPPLER_FORMFIELDSIGNATURE_SIGNATURETYPE_G10CPGPSIGNATUREDETACHED = 5
} Poppler__FormFieldSignature__SignatureType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_FORMFIELDSIGNATURE_VALIDATEOPTIONS_VALIDATEVERIFYCERTIFICATE = 1,
    POPPLER_FORMFIELDSIGNATURE_VALIDATEOPTIONS_VALIDATEFORCEREVALIDATION = 2,
    POPPLER_FORMFIELDSIGNATURE_VALIDATEOPTIONS_VALIDATEWITHOUTOCSPREVOCATIONCHECK = 4,
    POPPLER_FORMFIELDSIGNATURE_VALIDATEOPTIONS_VALIDATEUSEAIACERTFETCH = 8
} Poppler__FormFieldSignature__ValidateOptions;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

typedef enum {
    POPPLER_FORMFIELDSIGNATURE_SIGNINGRESULT_FIELDALREADYSIGNED = 0,
    POPPLER_FORMFIELDSIGNATURE_SIGNINGRESULT_GENERICSIGNINGERROR = 1,
    POPPLER_FORMFIELDSIGNATURE_SIGNINGRESULT_SIGNINGSUCCESS = 2,
    POPPLER_FORMFIELDSIGNATURE_SIGNINGRESULT_INTERNALERROR = 3,
    POPPLER_FORMFIELDSIGNATURE_SIGNINGRESULT_KEYMISSING = 4,
    POPPLER_FORMFIELDSIGNATURE_SIGNINGRESULT_WRITEFAILED = 5,
    POPPLER_FORMFIELDSIGNATURE_SIGNINGRESULT_USERCANCELLED = 6,
    POPPLER_FORMFIELDSIGNATURE_SIGNINGRESULT_BADPASSPHRASE = 7
} Poppler__FormFieldSignature__SigningResult;

#endif
