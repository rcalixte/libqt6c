#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libklocalizedcontext.hpp"
#include "libklocalizedcontext.h"

KLocalizedContext* k_localizedcontext_new() {
    return KLocalizedContext_new();
}

KLocalizedContext* k_localizedcontext_new2(void* parent) {
    return KLocalizedContext_new2((QObject*)parent);
}

const QMetaObject* k_localizedcontext_meta_object(void* self) {
    return KLocalizedContext_MetaObject((KLocalizedContext*)self);
}

void* k_localizedcontext_metacast(void* self, const char* param1) {
    return KLocalizedContext_Metacast((KLocalizedContext*)self, param1);
}

int32_t k_localizedcontext_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLocalizedContext_Metacall((KLocalizedContext*)self, param1, param2, param3);
}

void k_localizedcontext_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KLocalizedContext_OnMetacall((KLocalizedContext*)self, (intptr_t)callback);
}

int32_t k_localizedcontext_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLocalizedContext_QBaseMetacall((KLocalizedContext*)self, param1, param2, param3);
}

const char* k_localizedcontext_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_translation_domain(void* self) {
    libqt_string _str = KLocalizedContext_TranslationDomain((KLocalizedContext*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_localizedcontext_set_translation_domain(void* self, const char* domain) {
    KLocalizedContext_SetTranslationDomain((KLocalizedContext*)self, qstring(domain));
}

const char* k_localizedcontext_i18n(void* self, const char* message) {
    libqt_string _str = KLocalizedContext_I18n((KLocalizedContext*)self, qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc(void* self, const char* context, const char* message) {
    libqt_string _str = KLocalizedContext_I18nc((KLocalizedContext*)self, qstring(context), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np(void* self, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedContext_I18np((KLocalizedContext*)self, qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp(void* self, const char* context, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedContext_I18ncp((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd(void* self, const char* domain, const char* message) {
    libqt_string _str = KLocalizedContext_I18nd((KLocalizedContext*)self, qstring(domain), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc(void* self, const char* domain, const char* context, const char* message) {
    libqt_string _str = KLocalizedContext_I18ndc((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp(void* self, const char* domain, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedContext_I18ndp((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp(void* self, const char* domain, const char* context, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedContext_I18ndcp((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n(void* self, const char* message) {
    libqt_string _str = KLocalizedContext_Xi18n((KLocalizedContext*)self, qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc(void* self, const char* context, const char* message) {
    libqt_string _str = KLocalizedContext_Xi18nc((KLocalizedContext*)self, qstring(context), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np(void* self, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedContext_Xi18np((KLocalizedContext*)self, qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp(void* self, const char* context, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedContext_Xi18ncp((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd(void* self, const char* domain, const char* message) {
    libqt_string _str = KLocalizedContext_Xi18nd((KLocalizedContext*)self, qstring(domain), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc(void* self, const char* domain, const char* context, const char* message) {
    libqt_string _str = KLocalizedContext_Xi18ndc((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp(void* self, const char* domain, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedContext_Xi18ndp((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp(void* self, const char* domain, const char* context, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedContext_Xi18ndcp((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_localizedcontext_translation_domain_changed(void* self, const char* translationDomain) {
    KLocalizedContext_TranslationDomainChanged((KLocalizedContext*)self, qstring(translationDomain));
}

void k_localizedcontext_on_translation_domain_changed(void* self, void (*callback)(void*, const char*)) {
    KLocalizedContext_Connect_TranslationDomainChanged((KLocalizedContext*)self, (intptr_t)callback);
}

const char* k_localizedcontext_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18n2(void* self, const char* message, void* param1) {
    libqt_string _str = KLocalizedContext_I18n2((KLocalizedContext*)self, qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18n3(void* self, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_I18n3((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18n4(void* self, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_I18n4((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18n5(void* self, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_I18n5((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18n6(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_I18n6((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18n7(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_I18n7((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18n8(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_I18n8((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18n9(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_I18n9((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18n10(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_I18n10((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18n11(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_I18n11((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc3(void* self, const char* context, const char* message, void* param1) {
    libqt_string _str = KLocalizedContext_I18nc3((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc4(void* self, const char* context, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_I18nc4((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc5(void* self, const char* context, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_I18nc5((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc6(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_I18nc6((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc7(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_I18nc7((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc8(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_I18nc8((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc9(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_I18nc9((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc10(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_I18nc10((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc11(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_I18nc11((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nc12(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_I18nc12((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np3(void* self, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedContext_I18np3((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np4(void* self, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_I18np4((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np5(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_I18np5((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np6(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_I18np6((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np7(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_I18np7((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np8(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_I18np8((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np9(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_I18np9((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np10(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_I18np10((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np11(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_I18np11((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18np12(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_I18np12((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp4(void* self, const char* context, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedContext_I18ncp4((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp5(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_I18ncp5((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp6(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_I18ncp6((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp7(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_I18ncp7((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp8(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_I18ncp8((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp9(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_I18ncp9((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp10(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_I18ncp10((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp11(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_I18ncp11((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp12(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_I18ncp12((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ncp13(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_I18ncp13((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd3(void* self, const char* domain, const char* message, void* param1) {
    libqt_string _str = KLocalizedContext_I18nd3((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd4(void* self, const char* domain, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_I18nd4((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd5(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_I18nd5((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd6(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_I18nd6((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd7(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_I18nd7((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd8(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_I18nd8((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd9(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_I18nd9((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd10(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_I18nd10((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd11(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_I18nd11((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18nd12(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_I18nd12((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc4(void* self, const char* domain, const char* context, const char* message, void* param1) {
    libqt_string _str = KLocalizedContext_I18ndc4((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc5(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_I18ndc5((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc6(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_I18ndc6((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc7(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_I18ndc7((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc8(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_I18ndc8((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc9(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_I18ndc9((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc10(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_I18ndc10((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc11(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_I18ndc11((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc12(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_I18ndc12((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndc13(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_I18ndc13((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp4(void* self, const char* domain, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedContext_I18ndp4((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp5(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_I18ndp5((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp6(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_I18ndp6((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp7(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_I18ndp7((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp8(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_I18ndp8((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp9(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_I18ndp9((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp10(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_I18ndp10((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp11(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_I18ndp11((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp12(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_I18ndp12((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndp13(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_I18ndp13((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp5(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedContext_I18ndcp5((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp6(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_I18ndcp6((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp7(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_I18ndcp7((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp8(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_I18ndcp8((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp9(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_I18ndcp9((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp10(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_I18ndcp10((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp11(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_I18ndcp11((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp12(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_I18ndcp12((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp13(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_I18ndcp13((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_i18ndcp14(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_I18ndcp14((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n2(void* self, const char* message, void* param1) {
    libqt_string _str = KLocalizedContext_Xi18n2((KLocalizedContext*)self, qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n3(void* self, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_Xi18n3((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n4(void* self, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_Xi18n4((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n5(void* self, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_Xi18n5((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n6(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_Xi18n6((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n7(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_Xi18n7((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n8(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_Xi18n8((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n9(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_Xi18n9((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n10(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_Xi18n10((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18n11(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_Xi18n11((KLocalizedContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc3(void* self, const char* context, const char* message, void* param1) {
    libqt_string _str = KLocalizedContext_Xi18nc3((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc4(void* self, const char* context, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_Xi18nc4((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc5(void* self, const char* context, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_Xi18nc5((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc6(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_Xi18nc6((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc7(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_Xi18nc7((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc8(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_Xi18nc8((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc9(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_Xi18nc9((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc10(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_Xi18nc10((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc11(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_Xi18nc11((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nc12(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_Xi18nc12((KLocalizedContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np3(void* self, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedContext_Xi18np3((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np4(void* self, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_Xi18np4((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np5(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_Xi18np5((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np6(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_Xi18np6((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np7(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_Xi18np7((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np8(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_Xi18np8((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np9(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_Xi18np9((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np10(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_Xi18np10((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np11(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_Xi18np11((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18np12(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_Xi18np12((KLocalizedContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp4(void* self, const char* context, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedContext_Xi18ncp4((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp5(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_Xi18ncp5((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp6(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_Xi18ncp6((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp7(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_Xi18ncp7((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp8(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_Xi18ncp8((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp9(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_Xi18ncp9((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp10(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_Xi18ncp10((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp11(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_Xi18ncp11((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp12(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_Xi18ncp12((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ncp13(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_Xi18ncp13((KLocalizedContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd3(void* self, const char* domain, const char* message, void* param1) {
    libqt_string _str = KLocalizedContext_Xi18nd3((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd4(void* self, const char* domain, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_Xi18nd4((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd5(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_Xi18nd5((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd6(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_Xi18nd6((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd7(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_Xi18nd7((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd8(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_Xi18nd8((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd9(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_Xi18nd9((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd10(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_Xi18nd10((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd11(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_Xi18nd11((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18nd12(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_Xi18nd12((KLocalizedContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc4(void* self, const char* domain, const char* context, const char* message, void* param1) {
    libqt_string _str = KLocalizedContext_Xi18ndc4((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc5(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_Xi18ndc5((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc6(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_Xi18ndc6((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc7(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_Xi18ndc7((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc8(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_Xi18ndc8((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc9(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_Xi18ndc9((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc10(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_Xi18ndc10((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc11(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_Xi18ndc11((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc12(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_Xi18ndc12((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndc13(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_Xi18ndc13((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp4(void* self, const char* domain, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedContext_Xi18ndp4((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp5(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_Xi18ndp5((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp6(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_Xi18ndp6((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp7(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_Xi18ndp7((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp8(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_Xi18ndp8((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp9(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_Xi18ndp9((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp10(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_Xi18ndp10((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp11(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_Xi18ndp11((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp12(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_Xi18ndp12((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndp13(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_Xi18ndp13((KLocalizedContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp5(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedContext_Xi18ndcp5((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp6(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedContext_Xi18ndcp6((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp7(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedContext_Xi18ndcp7((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp8(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedContext_Xi18ndcp8((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp9(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedContext_Xi18ndcp9((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp10(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedContext_Xi18ndcp10((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp11(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedContext_Xi18ndcp11((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp12(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedContext_Xi18ndcp12((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp13(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedContext_Xi18ndcp13((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_xi18ndcp14(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedContext_Xi18ndcp14((KLocalizedContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedcontext_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_localizedcontext_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_localizedcontext_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_localizedcontext_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_localizedcontext_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_localizedcontext_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_localizedcontext_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_localizedcontext_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_localizedcontext_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_localizedcontext_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_localizedcontext_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_localizedcontext_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_localizedcontext_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_localizedcontext_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_localizedcontext_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_localizedcontext_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_localizedcontext_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_localizedcontext_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_localizedcontext_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_localizedcontext_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_localizedcontext_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_localizedcontext_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_localizedcontext_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_localizedcontext_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_localizedcontext_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_localizedcontext_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_localizedcontext_dynamic_property_names\n");
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

QBindingStorage* k_localizedcontext_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_localizedcontext_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_localizedcontext_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_localizedcontext_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_localizedcontext_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_localizedcontext_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_localizedcontext_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_localizedcontext_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_localizedcontext_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_localizedcontext_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_localizedcontext_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_localizedcontext_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_localizedcontext_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_localizedcontext_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_localizedcontext_event(void* self, void* event) {
    return KLocalizedContext_Event((KLocalizedContext*)self, (QEvent*)event);
}

bool k_localizedcontext_qbase_event(void* self, void* event) {
    return KLocalizedContext_QBaseEvent((KLocalizedContext*)self, (QEvent*)event);
}

void k_localizedcontext_on_event(void* self, bool (*callback)(void*, void*)) {
    KLocalizedContext_OnEvent((KLocalizedContext*)self, (intptr_t)callback);
}

bool k_localizedcontext_event_filter(void* self, void* watched, void* event) {
    return KLocalizedContext_EventFilter((KLocalizedContext*)self, (QObject*)watched, (QEvent*)event);
}

bool k_localizedcontext_qbase_event_filter(void* self, void* watched, void* event) {
    return KLocalizedContext_QBaseEventFilter((KLocalizedContext*)self, (QObject*)watched, (QEvent*)event);
}

void k_localizedcontext_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KLocalizedContext_OnEventFilter((KLocalizedContext*)self, (intptr_t)callback);
}

void k_localizedcontext_timer_event(void* self, void* event) {
    KLocalizedContext_TimerEvent((KLocalizedContext*)self, (QTimerEvent*)event);
}

void k_localizedcontext_qbase_timer_event(void* self, void* event) {
    KLocalizedContext_QBaseTimerEvent((KLocalizedContext*)self, (QTimerEvent*)event);
}

void k_localizedcontext_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KLocalizedContext_OnTimerEvent((KLocalizedContext*)self, (intptr_t)callback);
}

void k_localizedcontext_child_event(void* self, void* event) {
    KLocalizedContext_ChildEvent((KLocalizedContext*)self, (QChildEvent*)event);
}

void k_localizedcontext_qbase_child_event(void* self, void* event) {
    KLocalizedContext_QBaseChildEvent((KLocalizedContext*)self, (QChildEvent*)event);
}

void k_localizedcontext_on_child_event(void* self, void (*callback)(void*, void*)) {
    KLocalizedContext_OnChildEvent((KLocalizedContext*)self, (intptr_t)callback);
}

void k_localizedcontext_custom_event(void* self, void* event) {
    KLocalizedContext_CustomEvent((KLocalizedContext*)self, (QEvent*)event);
}

void k_localizedcontext_qbase_custom_event(void* self, void* event) {
    KLocalizedContext_QBaseCustomEvent((KLocalizedContext*)self, (QEvent*)event);
}

void k_localizedcontext_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KLocalizedContext_OnCustomEvent((KLocalizedContext*)self, (intptr_t)callback);
}

void k_localizedcontext_connect_notify(void* self, void* signal) {
    KLocalizedContext_ConnectNotify((KLocalizedContext*)self, (QMetaMethod*)signal);
}

void k_localizedcontext_qbase_connect_notify(void* self, void* signal) {
    KLocalizedContext_QBaseConnectNotify((KLocalizedContext*)self, (QMetaMethod*)signal);
}

void k_localizedcontext_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KLocalizedContext_OnConnectNotify((KLocalizedContext*)self, (intptr_t)callback);
}

void k_localizedcontext_disconnect_notify(void* self, void* signal) {
    KLocalizedContext_DisconnectNotify((KLocalizedContext*)self, (QMetaMethod*)signal);
}

void k_localizedcontext_qbase_disconnect_notify(void* self, void* signal) {
    KLocalizedContext_QBaseDisconnectNotify((KLocalizedContext*)self, (QMetaMethod*)signal);
}

void k_localizedcontext_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KLocalizedContext_OnDisconnectNotify((KLocalizedContext*)self, (intptr_t)callback);
}

QObject* k_localizedcontext_sender(void* self) {
    return KLocalizedContext_Sender((KLocalizedContext*)self);
}

QObject* k_localizedcontext_qbase_sender(void* self) {
    return KLocalizedContext_QBaseSender((KLocalizedContext*)self);
}

void k_localizedcontext_on_sender(void* self, QObject* (*callback)()) {
    KLocalizedContext_OnSender((KLocalizedContext*)self, (intptr_t)callback);
}

int32_t k_localizedcontext_sender_signal_index(void* self) {
    return KLocalizedContext_SenderSignalIndex((KLocalizedContext*)self);
}

int32_t k_localizedcontext_qbase_sender_signal_index(void* self) {
    return KLocalizedContext_QBaseSenderSignalIndex((KLocalizedContext*)self);
}

void k_localizedcontext_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KLocalizedContext_OnSenderSignalIndex((KLocalizedContext*)self, (intptr_t)callback);
}

int32_t k_localizedcontext_receivers(void* self, const char* signal) {
    return KLocalizedContext_Receivers((KLocalizedContext*)self, signal);
}

int32_t k_localizedcontext_qbase_receivers(void* self, const char* signal) {
    return KLocalizedContext_QBaseReceivers((KLocalizedContext*)self, signal);
}

void k_localizedcontext_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KLocalizedContext_OnReceivers((KLocalizedContext*)self, (intptr_t)callback);
}

bool k_localizedcontext_is_signal_connected(void* self, void* signal) {
    return KLocalizedContext_IsSignalConnected((KLocalizedContext*)self, (QMetaMethod*)signal);
}

bool k_localizedcontext_qbase_is_signal_connected(void* self, void* signal) {
    return KLocalizedContext_QBaseIsSignalConnected((KLocalizedContext*)self, (QMetaMethod*)signal);
}

void k_localizedcontext_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KLocalizedContext_OnIsSignalConnected((KLocalizedContext*)self, (intptr_t)callback);
}

void k_localizedcontext_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_localizedcontext_delete(void* self) {
    KLocalizedContext_Delete((KLocalizedContext*)(self));
}
