#include "../libqcommandlineparser.hpp"
#include "../libqjsonobject.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libkaboutdata.hpp"
#include "libkaboutdata.h"

void k_crash_default_crash_handler(int param1) {
    KCrash_DefaultCrashHandler(param1);
}

KAboutPerson* k_aboutperson_new() {
    return KAboutPerson_new();
}

KAboutPerson* k_aboutperson_new2(void* other) {
    return KAboutPerson_new2((KAboutPerson*)other);
}

KAboutPerson* k_aboutperson_new3(const char* name) {
    return KAboutPerson_new3(qstring(name));
}

KAboutPerson* k_aboutperson_new4(const char* name, const char* task) {
    return KAboutPerson_new4(qstring(name), qstring(task));
}

KAboutPerson* k_aboutperson_new5(const char* name, const char* task, const char* emailAddress) {
    return KAboutPerson_new5(qstring(name), qstring(task), qstring(emailAddress));
}

KAboutPerson* k_aboutperson_new6(const char* name, const char* task, const char* emailAddress, const char* webAddress) {
    return KAboutPerson_new6(qstring(name), qstring(task), qstring(emailAddress), qstring(webAddress));
}

KAboutPerson* k_aboutperson_new7(const char* name, const char* task, const char* emailAddress, const char* webAddress, void* avatarUrl) {
    return KAboutPerson_new7(qstring(name), qstring(task), qstring(emailAddress), qstring(webAddress), (QUrl*)avatarUrl);
}

void k_aboutperson_operator_assign(void* self, void* other) {
    KAboutPerson_OperatorAssign((KAboutPerson*)self, (KAboutPerson*)other);
}

const char* k_aboutperson_name(void* self) {
    libqt_string _str = KAboutPerson_Name((KAboutPerson*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutperson_task(void* self) {
    libqt_string _str = KAboutPerson_Task((KAboutPerson*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutperson_email_address(void* self) {
    libqt_string _str = KAboutPerson_EmailAddress((KAboutPerson*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutperson_web_address(void* self) {
    libqt_string _str = KAboutPerson_WebAddress((KAboutPerson*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_aboutperson_avatar_url(void* self) {
    return KAboutPerson_AvatarUrl((KAboutPerson*)self);
}

KAboutPerson* k_aboutperson_from_j_s_o_n(void* obj) {
    return KAboutPerson_FromJSON((QJsonObject*)obj);
}

void k_aboutperson_delete(void* self) {
    KAboutPerson_Delete((KAboutPerson*)(self));
}

KAboutLicense* k_aboutlicense_new() {
    return KAboutLicense_new();
}

KAboutLicense* k_aboutlicense_new2(void* other) {
    return KAboutLicense_new2((KAboutLicense*)other);
}

void k_aboutlicense_operator_assign(void* self, void* other) {
    KAboutLicense_OperatorAssign((KAboutLicense*)self, (KAboutLicense*)other);
}

const char* k_aboutlicense_text(void* self) {
    libqt_string _str = KAboutLicense_Text((KAboutLicense*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutlicense_name(void* self) {
    libqt_string _str = KAboutLicense_Name((KAboutLicense*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_aboutlicense_key(void* self) {
    return KAboutLicense_Key((KAboutLicense*)self);
}

const char* k_aboutlicense_spdx(void* self) {
    libqt_string _str = KAboutLicense_Spdx((KAboutLicense*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KAboutLicense* k_aboutlicense_by_keyword(const char* keyword) {
    return KAboutLicense_ByKeyword(qstring(keyword));
}

const char* k_aboutlicense_name1(void* self, int32_t formatName) {
    libqt_string _str = KAboutLicense_Name1((KAboutLicense*)self, formatName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_aboutlicense_delete(void* self) {
    KAboutLicense_Delete((KAboutLicense*)(self));
}

KAboutComponent* k_aboutcomponent_new() {
    return KAboutComponent_new();
}

KAboutComponent* k_aboutcomponent_new2(const char* name, const char* description, const char* version, const char* webAddress, const char* pathToLicenseFile) {
    return KAboutComponent_new2(qstring(name), qstring(description), qstring(version), qstring(webAddress), qstring(pathToLicenseFile));
}

KAboutComponent* k_aboutcomponent_new3(void* other) {
    return KAboutComponent_new3((KAboutComponent*)other);
}

KAboutComponent* k_aboutcomponent_new4(const char* name) {
    return KAboutComponent_new4(qstring(name));
}

KAboutComponent* k_aboutcomponent_new5(const char* name, const char* description) {
    return KAboutComponent_new5(qstring(name), qstring(description));
}

KAboutComponent* k_aboutcomponent_new6(const char* name, const char* description, const char* version) {
    return KAboutComponent_new6(qstring(name), qstring(description), qstring(version));
}

KAboutComponent* k_aboutcomponent_new7(const char* name, const char* description, const char* version, const char* webAddress) {
    return KAboutComponent_new7(qstring(name), qstring(description), qstring(version), qstring(webAddress));
}

KAboutComponent* k_aboutcomponent_new8(const char* name, const char* description, const char* version, const char* webAddress, int32_t licenseType) {
    return KAboutComponent_new8(qstring(name), qstring(description), qstring(version), qstring(webAddress), licenseType);
}

void k_aboutcomponent_operator_assign(void* self, void* other) {
    KAboutComponent_OperatorAssign((KAboutComponent*)self, (KAboutComponent*)other);
}

const char* k_aboutcomponent_name(void* self) {
    libqt_string _str = KAboutComponent_Name((KAboutComponent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutcomponent_description(void* self) {
    libqt_string _str = KAboutComponent_Description((KAboutComponent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutcomponent_version(void* self) {
    libqt_string _str = KAboutComponent_Version((KAboutComponent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutcomponent_web_address(void* self) {
    libqt_string _str = KAboutComponent_WebAddress((KAboutComponent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KAboutLicense* k_aboutcomponent_license(void* self) {
    return KAboutComponent_License((KAboutComponent*)self);
}

void k_aboutcomponent_delete(void* self) {
    KAboutComponent_Delete((KAboutComponent*)(self));
}

KAboutData* k_aboutdata_new(const char* componentName, const char* displayName, const char* version, const char* shortDescription, int32_t licenseType) {
    return KAboutData_new(qstring(componentName), qstring(displayName), qstring(version), qstring(shortDescription), licenseType);
}

KAboutData* k_aboutdata_new2() {
    return KAboutData_new2();
}

KAboutData* k_aboutdata_new3(void* other) {
    return KAboutData_new3((KAboutData*)other);
}

KAboutData* k_aboutdata_new4(const char* componentName, const char* displayName, const char* version, const char* shortDescription, int32_t licenseType, const char* copyrightStatement) {
    return KAboutData_new4(qstring(componentName), qstring(displayName), qstring(version), qstring(shortDescription), licenseType, qstring(copyrightStatement));
}

KAboutData* k_aboutdata_new5(const char* componentName, const char* displayName, const char* version, const char* shortDescription, int32_t licenseType, const char* copyrightStatement, const char* otherText) {
    return KAboutData_new5(qstring(componentName), qstring(displayName), qstring(version), qstring(shortDescription), licenseType, qstring(copyrightStatement), qstring(otherText));
}

KAboutData* k_aboutdata_new6(const char* componentName, const char* displayName, const char* version, const char* shortDescription, int32_t licenseType, const char* copyrightStatement, const char* otherText, const char* homePageAddress) {
    return KAboutData_new6(qstring(componentName), qstring(displayName), qstring(version), qstring(shortDescription), licenseType, qstring(copyrightStatement), qstring(otherText), qstring(homePageAddress));
}

KAboutData* k_aboutdata_new7(const char* componentName, const char* displayName, const char* version, const char* shortDescription, int32_t licenseType, const char* copyrightStatement, const char* otherText, const char* homePageAddress, const char* bugAddress) {
    return KAboutData_new7(qstring(componentName), qstring(displayName), qstring(version), qstring(shortDescription), licenseType, qstring(copyrightStatement), qstring(otherText), qstring(homePageAddress), qstring(bugAddress));
}

KAboutData* k_aboutdata_new8(const char* componentName) {
    return KAboutData_new8(qstring(componentName));
}

KAboutData* k_aboutdata_new9(const char* componentName, const char* displayName) {
    return KAboutData_new9(qstring(componentName), qstring(displayName));
}

KAboutData* k_aboutdata_new10(const char* componentName, const char* displayName, const char* version) {
    return KAboutData_new10(qstring(componentName), qstring(displayName), qstring(version));
}

KAboutData* k_aboutdata_application_data() {
    return KAboutData_ApplicationData();
}

void k_aboutdata_set_application_data(void* aboutData) {
    KAboutData_SetApplicationData((KAboutData*)aboutData);
}

void k_aboutdata_operator_assign(void* self, void* other) {
    KAboutData_OperatorAssign((KAboutData*)self, (KAboutData*)other);
}

KAboutData* k_aboutdata_add_author(void* self, void* author) {
    return KAboutData_AddAuthor((KAboutData*)self, (KAboutPerson*)author);
}

KAboutData* k_aboutdata_add_author2(void* self, const char* name) {
    return KAboutData_AddAuthor2((KAboutData*)self, qstring(name));
}

KAboutData* k_aboutdata_add_author3(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress, const char* kdeStoreUsername) {
    return KAboutData_AddAuthor3((KAboutData*)self, qstring(name), qstring(task), qstring(emailAddress), qstring(webAddress), qstring(kdeStoreUsername));
}

KAboutData* k_aboutdata_add_credit(void* self, void* person) {
    return KAboutData_AddCredit((KAboutData*)self, (KAboutPerson*)person);
}

KAboutData* k_aboutdata_add_credit2(void* self, const char* name) {
    return KAboutData_AddCredit2((KAboutData*)self, qstring(name));
}

KAboutData* k_aboutdata_add_credit3(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress, const char* kdeStoreUsername) {
    return KAboutData_AddCredit3((KAboutData*)self, qstring(name), qstring(task), qstring(emailAddress), qstring(webAddress), qstring(kdeStoreUsername));
}

KAboutData* k_aboutdata_set_translator(void* self, const char* name, const char* emailAddress) {
    return KAboutData_SetTranslator((KAboutData*)self, qstring(name), qstring(emailAddress));
}

KAboutData* k_aboutdata_add_component(void* self, void* component) {
    return KAboutData_AddComponent((KAboutData*)self, (KAboutComponent*)component);
}

KAboutData* k_aboutdata_add_component2(void* self, const char* name) {
    return KAboutData_AddComponent2((KAboutData*)self, qstring(name));
}

KAboutData* k_aboutdata_add_component3(void* self, const char* name, const char* description, const char* version, const char* webAddress, const char* pathToLicenseFile) {
    return KAboutData_AddComponent3((KAboutData*)self, qstring(name), qstring(description), qstring(version), qstring(webAddress), qstring(pathToLicenseFile));
}

KAboutData* k_aboutdata_set_license_text(void* self, const char* license) {
    return KAboutData_SetLicenseText((KAboutData*)self, qstring(license));
}

KAboutData* k_aboutdata_add_license_text(void* self, const char* license) {
    return KAboutData_AddLicenseText((KAboutData*)self, qstring(license));
}

KAboutData* k_aboutdata_set_license_text_file(void* self, const char* file) {
    return KAboutData_SetLicenseTextFile((KAboutData*)self, qstring(file));
}

KAboutData* k_aboutdata_add_license_text_file(void* self, const char* file) {
    return KAboutData_AddLicenseTextFile((KAboutData*)self, qstring(file));
}

KAboutData* k_aboutdata_set_component_name(void* self, const char* componentName) {
    return KAboutData_SetComponentName((KAboutData*)self, qstring(componentName));
}

KAboutData* k_aboutdata_set_display_name(void* self, const char* displayName) {
    return KAboutData_SetDisplayName((KAboutData*)self, qstring(displayName));
}

KAboutData* k_aboutdata_set_program_logo(void* self, void* image) {
    return KAboutData_SetProgramLogo((KAboutData*)self, (QVariant*)image);
}

KAboutData* k_aboutdata_set_version(void* self, const char* version) {
    return KAboutData_SetVersion((KAboutData*)self, qstring(version));
}

KAboutData* k_aboutdata_set_short_description(void* self, const char* shortDescription) {
    return KAboutData_SetShortDescription((KAboutData*)self, qstring(shortDescription));
}

KAboutData* k_aboutdata_set_license(void* self, int32_t licenseKey) {
    return KAboutData_SetLicense((KAboutData*)self, licenseKey);
}

KAboutData* k_aboutdata_set_license2(void* self, int32_t licenseKey, int32_t versionRestriction) {
    return KAboutData_SetLicense2((KAboutData*)self, licenseKey, versionRestriction);
}

KAboutData* k_aboutdata_add_license(void* self, int32_t licenseKey) {
    return KAboutData_AddLicense((KAboutData*)self, licenseKey);
}

KAboutData* k_aboutdata_add_license2(void* self, int32_t licenseKey, int32_t versionRestriction) {
    return KAboutData_AddLicense2((KAboutData*)self, licenseKey, versionRestriction);
}

KAboutData* k_aboutdata_set_copyright_statement(void* self, const char* copyrightStatement) {
    return KAboutData_SetCopyrightStatement((KAboutData*)self, qstring(copyrightStatement));
}

KAboutData* k_aboutdata_set_other_text(void* self, const char* otherText) {
    return KAboutData_SetOtherText((KAboutData*)self, qstring(otherText));
}

KAboutData* k_aboutdata_set_homepage(void* self, const char* homepage) {
    return KAboutData_SetHomepage((KAboutData*)self, qstring(homepage));
}

KAboutData* k_aboutdata_set_bug_address(void* self, const char* bugAddress) {
    return KAboutData_SetBugAddress((KAboutData*)self, qstring(bugAddress));
}

KAboutData* k_aboutdata_set_organization_domain(void* self, const char* domain) {
    return KAboutData_SetOrganizationDomain((KAboutData*)self, qstring(domain));
}

KAboutData* k_aboutdata_set_product_name(void* self, const char* name) {
    return KAboutData_SetProductName((KAboutData*)self, qstring(name));
}

const char* k_aboutdata_component_name(void* self) {
    libqt_string _str = KAboutData_ComponentName((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutdata_product_name(void* self) {
    libqt_string _str = KAboutData_ProductName((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutdata_internal_product_name(void* self) {
    return KAboutData_InternalProductName((KAboutData*)self);
}

const char* k_aboutdata_display_name(void* self) {
    libqt_string _str = KAboutData_DisplayName((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutdata_organization_domain(void* self) {
    libqt_string _str = KAboutData_OrganizationDomain((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutdata_internal_program_name(void* self) {
    return KAboutData_InternalProgramName((KAboutData*)self);
}

QVariant* k_aboutdata_program_logo(void* self) {
    return KAboutData_ProgramLogo((KAboutData*)self);
}

const char* k_aboutdata_version(void* self) {
    libqt_string _str = KAboutData_Version((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutdata_internal_version(void* self) {
    return KAboutData_InternalVersion((KAboutData*)self);
}

const char* k_aboutdata_short_description(void* self) {
    libqt_string _str = KAboutData_ShortDescription((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutdata_homepage(void* self) {
    libqt_string _str = KAboutData_Homepage((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutdata_bug_address(void* self) {
    libqt_string _str = KAboutData_BugAddress((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutdata_internal_bug_address(void* self) {
    return KAboutData_InternalBugAddress((KAboutData*)self);
}

libqt_list /* of KAboutPerson* */ k_aboutdata_authors(void* self) {
    libqt_list _arr = KAboutData_Authors((KAboutData*)self);
    return _arr;
}

libqt_list /* of KAboutPerson* */ k_aboutdata_credits(void* self) {
    libqt_list _arr = KAboutData_Credits((KAboutData*)self);
    return _arr;
}

libqt_list /* of KAboutPerson* */ k_aboutdata_translators(void* self) {
    libqt_list _arr = KAboutData_Translators((KAboutData*)self);
    return _arr;
}

const char* k_aboutdata_about_translation_team() {
    libqt_string _str = KAboutData_AboutTranslationTeam();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KAboutComponent* */ k_aboutdata_components(void* self) {
    libqt_list _arr = KAboutData_Components((KAboutData*)self);
    return _arr;
}

const char* k_aboutdata_other_text(void* self) {
    libqt_string _str = KAboutData_OtherText((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KAboutLicense* */ k_aboutdata_licenses(void* self) {
    libqt_list _arr = KAboutData_Licenses((KAboutData*)self);
    return _arr;
}

const char* k_aboutdata_copyright_statement(void* self) {
    libqt_string _str = KAboutData_CopyrightStatement((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutdata_custom_author_plain_text(void* self) {
    libqt_string _str = KAboutData_CustomAuthorPlainText((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_aboutdata_custom_author_rich_text(void* self) {
    libqt_string _str = KAboutData_CustomAuthorRichText((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_aboutdata_custom_author_text_enabled(void* self) {
    return KAboutData_CustomAuthorTextEnabled((KAboutData*)self);
}

KAboutData* k_aboutdata_set_custom_author_text(void* self, const char* plainText, const char* richText) {
    return KAboutData_SetCustomAuthorText((KAboutData*)self, qstring(plainText), qstring(richText));
}

KAboutData* k_aboutdata_unset_custom_author_text(void* self) {
    return KAboutData_UnsetCustomAuthorText((KAboutData*)self);
}

bool k_aboutdata_setup_command_line(void* self, void* parser) {
    return KAboutData_SetupCommandLine((KAboutData*)self, (QCommandLineParser*)parser);
}

void k_aboutdata_process_command_line(void* self, void* parser) {
    KAboutData_ProcessCommandLine((KAboutData*)self, (QCommandLineParser*)parser);
}

KAboutData* k_aboutdata_set_desktop_file_name(void* self, const char* desktopFileName) {
    return KAboutData_SetDesktopFileName((KAboutData*)self, qstring(desktopFileName));
}

const char* k_aboutdata_desktop_file_name(void* self) {
    libqt_string _str = KAboutData_DesktopFileName((KAboutData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KAboutData* k_aboutdata_add_author22(void* self, const char* name, const char* task) {
    return KAboutData_AddAuthor22((KAboutData*)self, qstring(name), qstring(task));
}

KAboutData* k_aboutdata_add_author32(void* self, const char* name, const char* task, const char* emailAddress) {
    return KAboutData_AddAuthor32((KAboutData*)self, qstring(name), qstring(task), qstring(emailAddress));
}

KAboutData* k_aboutdata_add_author4(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress) {
    return KAboutData_AddAuthor4((KAboutData*)self, qstring(name), qstring(task), qstring(emailAddress), qstring(webAddress));
}

KAboutData* k_aboutdata_add_author5(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress, void* avatarUrl) {
    return KAboutData_AddAuthor5((KAboutData*)self, qstring(name), qstring(task), qstring(emailAddress), qstring(webAddress), (QUrl*)avatarUrl);
}

KAboutData* k_aboutdata_add_credit22(void* self, const char* name, const char* task) {
    return KAboutData_AddCredit22((KAboutData*)self, qstring(name), qstring(task));
}

KAboutData* k_aboutdata_add_credit32(void* self, const char* name, const char* task, const char* emailAddress) {
    return KAboutData_AddCredit32((KAboutData*)self, qstring(name), qstring(task), qstring(emailAddress));
}

KAboutData* k_aboutdata_add_credit4(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress) {
    return KAboutData_AddCredit4((KAboutData*)self, qstring(name), qstring(task), qstring(emailAddress), qstring(webAddress));
}

KAboutData* k_aboutdata_add_credit5(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress, void* avatarUrl) {
    return KAboutData_AddCredit5((KAboutData*)self, qstring(name), qstring(task), qstring(emailAddress), qstring(webAddress), (QUrl*)avatarUrl);
}

KAboutData* k_aboutdata_add_component22(void* self, const char* name, const char* description) {
    return KAboutData_AddComponent22((KAboutData*)self, qstring(name), qstring(description));
}

KAboutData* k_aboutdata_add_component32(void* self, const char* name, const char* description, const char* version) {
    return KAboutData_AddComponent32((KAboutData*)self, qstring(name), qstring(description), qstring(version));
}

KAboutData* k_aboutdata_add_component4(void* self, const char* name, const char* description, const char* version, const char* webAddress) {
    return KAboutData_AddComponent4((KAboutData*)self, qstring(name), qstring(description), qstring(version), qstring(webAddress));
}

KAboutData* k_aboutdata_add_component5(void* self, const char* name, const char* description, const char* version, const char* webAddress, int32_t licenseKey) {
    return KAboutData_AddComponent5((KAboutData*)self, qstring(name), qstring(description), qstring(version), qstring(webAddress), licenseKey);
}

void k_aboutdata_delete(void* self) {
    KAboutData_Delete((KAboutData*)(self));
}
