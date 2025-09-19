#include "../libqdatetime.hpp"
#include "../libqurl.hpp"
#include "libknowledgebaseentry.hpp"
#include "libknowledgebaseentry.h"

Attica__KnowledgeBaseEntry* k_attica__knowledgebaseentry_new() {
    return Attica__KnowledgeBaseEntry_new();
}

Attica__KnowledgeBaseEntry* k_attica__knowledgebaseentry_new2(void* other) {
    return Attica__KnowledgeBaseEntry_new2((Attica__KnowledgeBaseEntry*)other);
}

void k_attica__knowledgebaseentry_operator_assign(void* self, void* other) {
    Attica__KnowledgeBaseEntry_OperatorAssign((Attica__KnowledgeBaseEntry*)self, (Attica__KnowledgeBaseEntry*)other);
}

void k_attica__knowledgebaseentry_set_id(void* self, const char* id) {
    Attica__KnowledgeBaseEntry_SetId((Attica__KnowledgeBaseEntry*)self, qstring(id));
}

const char* k_attica__knowledgebaseentry_id(void* self) {
    libqt_string _str = Attica__KnowledgeBaseEntry_Id((Attica__KnowledgeBaseEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__knowledgebaseentry_set_content_id(void* self, int id) {
    Attica__KnowledgeBaseEntry_SetContentId((Attica__KnowledgeBaseEntry*)self, id);
}

int32_t k_attica__knowledgebaseentry_content_id(void* self) {
    return Attica__KnowledgeBaseEntry_ContentId((Attica__KnowledgeBaseEntry*)self);
}

void k_attica__knowledgebaseentry_set_user(void* self, const char* user) {
    Attica__KnowledgeBaseEntry_SetUser((Attica__KnowledgeBaseEntry*)self, qstring(user));
}

const char* k_attica__knowledgebaseentry_user(void* self) {
    libqt_string _str = Attica__KnowledgeBaseEntry_User((Attica__KnowledgeBaseEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__knowledgebaseentry_set_status(void* self, const char* status) {
    Attica__KnowledgeBaseEntry_SetStatus((Attica__KnowledgeBaseEntry*)self, qstring(status));
}

const char* k_attica__knowledgebaseentry_status(void* self) {
    libqt_string _str = Attica__KnowledgeBaseEntry_Status((Attica__KnowledgeBaseEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__knowledgebaseentry_set_changed(void* self, void* changed) {
    Attica__KnowledgeBaseEntry_SetChanged((Attica__KnowledgeBaseEntry*)self, (QDateTime*)changed);
}

QDateTime* k_attica__knowledgebaseentry_changed(void* self) {
    return Attica__KnowledgeBaseEntry_Changed((Attica__KnowledgeBaseEntry*)self);
}

void k_attica__knowledgebaseentry_set_name(void* self, const char* name) {
    Attica__KnowledgeBaseEntry_SetName((Attica__KnowledgeBaseEntry*)self, qstring(name));
}

const char* k_attica__knowledgebaseentry_name(void* self) {
    libqt_string _str = Attica__KnowledgeBaseEntry_Name((Attica__KnowledgeBaseEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__knowledgebaseentry_set_description(void* self, const char* description) {
    Attica__KnowledgeBaseEntry_SetDescription((Attica__KnowledgeBaseEntry*)self, qstring(description));
}

const char* k_attica__knowledgebaseentry_description(void* self) {
    libqt_string _str = Attica__KnowledgeBaseEntry_Description((Attica__KnowledgeBaseEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__knowledgebaseentry_set_answer(void* self, const char* answer) {
    Attica__KnowledgeBaseEntry_SetAnswer((Attica__KnowledgeBaseEntry*)self, qstring(answer));
}

const char* k_attica__knowledgebaseentry_answer(void* self) {
    libqt_string _str = Attica__KnowledgeBaseEntry_Answer((Attica__KnowledgeBaseEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__knowledgebaseentry_set_comments(void* self, int comments) {
    Attica__KnowledgeBaseEntry_SetComments((Attica__KnowledgeBaseEntry*)self, comments);
}

int32_t k_attica__knowledgebaseentry_comments(void* self) {
    return Attica__KnowledgeBaseEntry_Comments((Attica__KnowledgeBaseEntry*)self);
}

void k_attica__knowledgebaseentry_set_detail_page(void* self, void* detailPage) {
    Attica__KnowledgeBaseEntry_SetDetailPage((Attica__KnowledgeBaseEntry*)self, (QUrl*)detailPage);
}

QUrl* k_attica__knowledgebaseentry_detail_page(void* self) {
    return Attica__KnowledgeBaseEntry_DetailPage((Attica__KnowledgeBaseEntry*)self);
}

void k_attica__knowledgebaseentry_add_extended_attribute(void* self, const char* key, const char* value) {
    Attica__KnowledgeBaseEntry_AddExtendedAttribute((Attica__KnowledgeBaseEntry*)self, qstring(key), qstring(value));
}

const char* k_attica__knowledgebaseentry_extended_attribute(void* self, const char* key) {
    libqt_string _str = Attica__KnowledgeBaseEntry_ExtendedAttribute((Attica__KnowledgeBaseEntry*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to const char* */ k_attica__knowledgebaseentry_extended_attributes(void* self) {
    return Attica__KnowledgeBaseEntry_ExtendedAttributes((Attica__KnowledgeBaseEntry*)self);
}

bool k_attica__knowledgebaseentry_is_valid(void* self) {
    return Attica__KnowledgeBaseEntry_IsValid((Attica__KnowledgeBaseEntry*)self);
}

void k_attica__knowledgebaseentry_delete(void* self) {
    Attica__KnowledgeBaseEntry_Delete((Attica__KnowledgeBaseEntry*)(self));
}
