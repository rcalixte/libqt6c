#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libklocalizedqmlcontext.hpp"
#include "libklocalizedqmlcontext.h"

KLocalizedQmlContext* k_localizedqmlcontext_new() {
    return KLocalizedQmlContext_new();
}

KLocalizedQmlContext* k_localizedqmlcontext_new2(void* parent) {
    return KLocalizedQmlContext_new2((QObject*)parent);
}

const QMetaObject* k_localizedqmlcontext_meta_object(void* self) {
    return KLocalizedQmlContext_MetaObject((KLocalizedQmlContext*)self);
}

void* k_localizedqmlcontext_metacast(void* self, const char* param1) {
    return KLocalizedQmlContext_Metacast((KLocalizedQmlContext*)self, param1);
}

int32_t k_localizedqmlcontext_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLocalizedQmlContext_Metacall((KLocalizedQmlContext*)self, param1, param2, param3);
}

void k_localizedqmlcontext_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KLocalizedQmlContext_OnMetacall((KLocalizedQmlContext*)self, (intptr_t)callback);
}

int32_t k_localizedqmlcontext_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLocalizedQmlContext_QBaseMetacall((KLocalizedQmlContext*)self, param1, param2, param3);
}

const char* k_localizedqmlcontext_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_translation_domain(void* self) {
    libqt_string _str = KLocalizedQmlContext_TranslationDomain((KLocalizedQmlContext*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_localizedqmlcontext_set_translation_domain(void* self, const char* domain) {
    KLocalizedQmlContext_SetTranslationDomain((KLocalizedQmlContext*)self, qstring(domain));
}

const char* k_localizedqmlcontext_i18n(void* self, const char* message) {
    libqt_string _str = KLocalizedQmlContext_I18n((KLocalizedQmlContext*)self, qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc(void* self, const char* context, const char* message) {
    libqt_string _str = KLocalizedQmlContext_I18nc((KLocalizedQmlContext*)self, qstring(context), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np(void* self, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedQmlContext_I18np((KLocalizedQmlContext*)self, qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp(void* self, const char* context, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedQmlContext_I18ncp((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd(void* self, const char* domain, const char* message) {
    libqt_string _str = KLocalizedQmlContext_I18nd((KLocalizedQmlContext*)self, qstring(domain), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc(void* self, const char* domain, const char* context, const char* message) {
    libqt_string _str = KLocalizedQmlContext_I18ndc((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp(void* self, const char* domain, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedQmlContext_I18ndp((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp(void* self, const char* domain, const char* context, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n(void* self, const char* message) {
    libqt_string _str = KLocalizedQmlContext_Xi18n((KLocalizedQmlContext*)self, qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc(void* self, const char* context, const char* message) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc((KLocalizedQmlContext*)self, qstring(context), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np(void* self, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedQmlContext_Xi18np((KLocalizedQmlContext*)self, qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp(void* self, const char* context, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd(void* self, const char* domain, const char* message) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd((KLocalizedQmlContext*)self, qstring(domain), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc(void* self, const char* domain, const char* context, const char* message) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp(void* self, const char* domain, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp(void* self, const char* domain, const char* context, const char* singular, const char* plural) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_localizedqmlcontext_translation_domain_changed(void* self, const char* translationDomain) {
    KLocalizedQmlContext_TranslationDomainChanged((KLocalizedQmlContext*)self, qstring(translationDomain));
}

void k_localizedqmlcontext_on_translation_domain_changed(void* self, void (*callback)(void*, const char*)) {
    KLocalizedQmlContext_Connect_TranslationDomainChanged((KLocalizedQmlContext*)self, (intptr_t)callback);
}

const char* k_localizedqmlcontext_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18n2(void* self, const char* message, void* param1) {
    libqt_string _str = KLocalizedQmlContext_I18n2((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18n3(void* self, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_I18n3((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18n4(void* self, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_I18n4((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18n5(void* self, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_I18n5((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18n6(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_I18n6((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18n7(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_I18n7((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18n8(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_I18n8((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18n9(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_I18n9((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18n10(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_I18n10((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18n11(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_I18n11((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc3(void* self, const char* context, const char* message, void* param1) {
    libqt_string _str = KLocalizedQmlContext_I18nc3((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc4(void* self, const char* context, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_I18nc4((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc5(void* self, const char* context, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_I18nc5((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc6(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_I18nc6((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc7(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_I18nc7((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc8(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_I18nc8((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc9(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_I18nc9((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc10(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_I18nc10((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc11(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_I18nc11((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nc12(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_I18nc12((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np3(void* self, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedQmlContext_I18np3((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np4(void* self, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_I18np4((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np5(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_I18np5((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np6(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_I18np6((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np7(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_I18np7((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np8(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_I18np8((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np9(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_I18np9((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np10(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_I18np10((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np11(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_I18np11((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18np12(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_I18np12((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp4(void* self, const char* context, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedQmlContext_I18ncp4((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp5(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_I18ncp5((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp6(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_I18ncp6((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp7(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_I18ncp7((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp8(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_I18ncp8((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp9(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_I18ncp9((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp10(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_I18ncp10((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp11(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_I18ncp11((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp12(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_I18ncp12((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ncp13(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_I18ncp13((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd3(void* self, const char* domain, const char* message, void* param1) {
    libqt_string _str = KLocalizedQmlContext_I18nd3((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd4(void* self, const char* domain, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_I18nd4((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd5(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_I18nd5((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd6(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_I18nd6((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd7(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_I18nd7((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd8(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_I18nd8((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd9(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_I18nd9((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd10(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_I18nd10((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd11(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_I18nd11((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18nd12(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_I18nd12((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc4(void* self, const char* domain, const char* context, const char* message, void* param1) {
    libqt_string _str = KLocalizedQmlContext_I18ndc4((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc5(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_I18ndc5((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc6(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_I18ndc6((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc7(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_I18ndc7((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc8(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_I18ndc8((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc9(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_I18ndc9((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc10(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_I18ndc10((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc11(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_I18ndc11((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc12(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_I18ndc12((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndc13(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_I18ndc13((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp4(void* self, const char* domain, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedQmlContext_I18ndp4((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp5(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_I18ndp5((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp6(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_I18ndp6((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp7(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_I18ndp7((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp8(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_I18ndp8((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp9(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_I18ndp9((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp10(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_I18ndp10((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp11(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_I18ndp11((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp12(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_I18ndp12((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndp13(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_I18ndp13((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp5(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp5((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp6(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp6((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp7(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp7((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp8(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp8((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp9(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp9((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp10(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp10((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp11(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp11((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp12(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp12((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp13(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp13((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_i18ndcp14(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_I18ndcp14((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n2(void* self, const char* message, void* param1) {
    libqt_string _str = KLocalizedQmlContext_Xi18n2((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n3(void* self, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_Xi18n3((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n4(void* self, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_Xi18n4((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n5(void* self, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_Xi18n5((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n6(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_Xi18n6((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n7(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_Xi18n7((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n8(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_Xi18n8((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n9(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_Xi18n9((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n10(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_Xi18n10((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18n11(void* self, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_Xi18n11((KLocalizedQmlContext*)self, qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc3(void* self, const char* context, const char* message, void* param1) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc3((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc4(void* self, const char* context, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc4((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc5(void* self, const char* context, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc5((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc6(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc6((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc7(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc7((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc8(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc8((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc9(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc9((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc10(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc10((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc11(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc11((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nc12(void* self, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_Xi18nc12((KLocalizedQmlContext*)self, qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np3(void* self, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedQmlContext_Xi18np3((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np4(void* self, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_Xi18np4((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np5(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_Xi18np5((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np6(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_Xi18np6((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np7(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_Xi18np7((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np8(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_Xi18np8((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np9(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_Xi18np9((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np10(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_Xi18np10((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np11(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_Xi18np11((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18np12(void* self, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_Xi18np12((KLocalizedQmlContext*)self, qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp4(void* self, const char* context, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp4((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp5(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp5((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp6(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp6((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp7(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp7((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp8(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp8((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp9(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp9((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp10(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp10((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp11(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp11((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp12(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp12((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ncp13(void* self, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_Xi18ncp13((KLocalizedQmlContext*)self, qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd3(void* self, const char* domain, const char* message, void* param1) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd3((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd4(void* self, const char* domain, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd4((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd5(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd5((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd6(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd6((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd7(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd7((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd8(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd8((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd9(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd9((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd10(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd10((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd11(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd11((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18nd12(void* self, const char* domain, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_Xi18nd12((KLocalizedQmlContext*)self, qstring(domain), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc4(void* self, const char* domain, const char* context, const char* message, void* param1) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc4((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc5(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc5((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc6(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc6((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc7(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc7((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc8(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc8((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc9(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc9((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc10(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc10((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc11(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc11((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc12(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc12((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndc13(void* self, const char* domain, const char* context, const char* message, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndc13((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(message), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp4(void* self, const char* domain, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp4((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp5(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp5((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp6(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp6((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp7(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp7((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp8(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp8((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp9(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp9((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp10(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp10((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp11(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp11((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp12(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp12((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndp13(void* self, const char* domain, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndp13((KLocalizedQmlContext*)self, qstring(domain), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp5(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp5((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp6(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp6((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp7(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp7((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp8(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp8((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp9(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp9((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp10(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp10((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp11(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp11((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp12(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp12((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp13(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp13((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_localizedqmlcontext_xi18ndcp14(void* self, const char* domain, const char* context, const char* singular, const char* plural, void* param1, void* param2, void* param3, void* param4, void* param5, void* param6, void* param7, void* param8, void* param9, void* param10) {
    libqt_string _str = KLocalizedQmlContext_Xi18ndcp14((KLocalizedQmlContext*)self, qstring(domain), qstring(context), qstring(singular), qstring(plural), (QVariant*)param1, (QVariant*)param2, (QVariant*)param3, (QVariant*)param4, (QVariant*)param5, (QVariant*)param6, (QVariant*)param7, (QVariant*)param8, (QVariant*)param9, (QVariant*)param10);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_localizedqmlcontext_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

void k_localizedqmlcontext_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QObject_OnEventFilter((QObject*)self, (intptr_t)callback);
}

bool k_localizedqmlcontext_qbase_event_filter(void* self, void* watched, void* event) {
    return QObject_QBaseEventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_localizedqmlcontext_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_localizedqmlcontext_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_localizedqmlcontext_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_localizedqmlcontext_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_localizedqmlcontext_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_localizedqmlcontext_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_localizedqmlcontext_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_localizedqmlcontext_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_localizedqmlcontext_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_localizedqmlcontext_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_localizedqmlcontext_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_localizedqmlcontext_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_localizedqmlcontext_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_localizedqmlcontext_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_localizedqmlcontext_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_localizedqmlcontext_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_localizedqmlcontext_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_localizedqmlcontext_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_localizedqmlcontext_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_localizedqmlcontext_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_localizedqmlcontext_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_localizedqmlcontext_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_localizedqmlcontext_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_localizedqmlcontext_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_localizedqmlcontext_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_localizedqmlcontext_dynamic_property_names\n");
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

QBindingStorage* k_localizedqmlcontext_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_localizedqmlcontext_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_localizedqmlcontext_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_localizedqmlcontext_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_localizedqmlcontext_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_localizedqmlcontext_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_localizedqmlcontext_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_localizedqmlcontext_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_localizedqmlcontext_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_localizedqmlcontext_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_localizedqmlcontext_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_localizedqmlcontext_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_localizedqmlcontext_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_localizedqmlcontext_event(void* self, void* event) {
    return KLocalizedQmlContext_Event((KLocalizedQmlContext*)self, (QEvent*)event);
}

bool k_localizedqmlcontext_qbase_event(void* self, void* event) {
    return KLocalizedQmlContext_QBaseEvent((KLocalizedQmlContext*)self, (QEvent*)event);
}

void k_localizedqmlcontext_on_event(void* self, bool (*callback)(void*, void*)) {
    KLocalizedQmlContext_OnEvent((KLocalizedQmlContext*)self, (intptr_t)callback);
}

void k_localizedqmlcontext_timer_event(void* self, void* event) {
    KLocalizedQmlContext_TimerEvent((KLocalizedQmlContext*)self, (QTimerEvent*)event);
}

void k_localizedqmlcontext_qbase_timer_event(void* self, void* event) {
    KLocalizedQmlContext_QBaseTimerEvent((KLocalizedQmlContext*)self, (QTimerEvent*)event);
}

void k_localizedqmlcontext_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KLocalizedQmlContext_OnTimerEvent((KLocalizedQmlContext*)self, (intptr_t)callback);
}

void k_localizedqmlcontext_child_event(void* self, void* event) {
    KLocalizedQmlContext_ChildEvent((KLocalizedQmlContext*)self, (QChildEvent*)event);
}

void k_localizedqmlcontext_qbase_child_event(void* self, void* event) {
    KLocalizedQmlContext_QBaseChildEvent((KLocalizedQmlContext*)self, (QChildEvent*)event);
}

void k_localizedqmlcontext_on_child_event(void* self, void (*callback)(void*, void*)) {
    KLocalizedQmlContext_OnChildEvent((KLocalizedQmlContext*)self, (intptr_t)callback);
}

void k_localizedqmlcontext_custom_event(void* self, void* event) {
    KLocalizedQmlContext_CustomEvent((KLocalizedQmlContext*)self, (QEvent*)event);
}

void k_localizedqmlcontext_qbase_custom_event(void* self, void* event) {
    KLocalizedQmlContext_QBaseCustomEvent((KLocalizedQmlContext*)self, (QEvent*)event);
}

void k_localizedqmlcontext_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KLocalizedQmlContext_OnCustomEvent((KLocalizedQmlContext*)self, (intptr_t)callback);
}

void k_localizedqmlcontext_connect_notify(void* self, void* signal) {
    KLocalizedQmlContext_ConnectNotify((KLocalizedQmlContext*)self, (QMetaMethod*)signal);
}

void k_localizedqmlcontext_qbase_connect_notify(void* self, void* signal) {
    KLocalizedQmlContext_QBaseConnectNotify((KLocalizedQmlContext*)self, (QMetaMethod*)signal);
}

void k_localizedqmlcontext_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KLocalizedQmlContext_OnConnectNotify((KLocalizedQmlContext*)self, (intptr_t)callback);
}

void k_localizedqmlcontext_disconnect_notify(void* self, void* signal) {
    KLocalizedQmlContext_DisconnectNotify((KLocalizedQmlContext*)self, (QMetaMethod*)signal);
}

void k_localizedqmlcontext_qbase_disconnect_notify(void* self, void* signal) {
    KLocalizedQmlContext_QBaseDisconnectNotify((KLocalizedQmlContext*)self, (QMetaMethod*)signal);
}

void k_localizedqmlcontext_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KLocalizedQmlContext_OnDisconnectNotify((KLocalizedQmlContext*)self, (intptr_t)callback);
}

QObject* k_localizedqmlcontext_sender(void* self) {
    return KLocalizedQmlContext_Sender((KLocalizedQmlContext*)self);
}

QObject* k_localizedqmlcontext_qbase_sender(void* self) {
    return KLocalizedQmlContext_QBaseSender((KLocalizedQmlContext*)self);
}

void k_localizedqmlcontext_on_sender(void* self, QObject* (*callback)()) {
    KLocalizedQmlContext_OnSender((KLocalizedQmlContext*)self, (intptr_t)callback);
}

int32_t k_localizedqmlcontext_sender_signal_index(void* self) {
    return KLocalizedQmlContext_SenderSignalIndex((KLocalizedQmlContext*)self);
}

int32_t k_localizedqmlcontext_qbase_sender_signal_index(void* self) {
    return KLocalizedQmlContext_QBaseSenderSignalIndex((KLocalizedQmlContext*)self);
}

void k_localizedqmlcontext_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KLocalizedQmlContext_OnSenderSignalIndex((KLocalizedQmlContext*)self, (intptr_t)callback);
}

int32_t k_localizedqmlcontext_receivers(void* self, const char* signal) {
    return KLocalizedQmlContext_Receivers((KLocalizedQmlContext*)self, signal);
}

int32_t k_localizedqmlcontext_qbase_receivers(void* self, const char* signal) {
    return KLocalizedQmlContext_QBaseReceivers((KLocalizedQmlContext*)self, signal);
}

void k_localizedqmlcontext_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KLocalizedQmlContext_OnReceivers((KLocalizedQmlContext*)self, (intptr_t)callback);
}

bool k_localizedqmlcontext_is_signal_connected(void* self, void* signal) {
    return KLocalizedQmlContext_IsSignalConnected((KLocalizedQmlContext*)self, (QMetaMethod*)signal);
}

bool k_localizedqmlcontext_qbase_is_signal_connected(void* self, void* signal) {
    return KLocalizedQmlContext_QBaseIsSignalConnected((KLocalizedQmlContext*)self, (QMetaMethod*)signal);
}

void k_localizedqmlcontext_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KLocalizedQmlContext_OnIsSignalConnected((KLocalizedQmlContext*)self, (intptr_t)callback);
}

void k_localizedqmlcontext_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_localizedqmlcontext_delete(void* self) {
    KLocalizedQmlContext_Delete((KLocalizedQmlContext*)(self));
}
