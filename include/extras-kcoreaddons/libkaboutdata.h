#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKABOUTDATA_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKABOUTDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kcrash.html

/// [Qt documentation](https://api-staging.kde.org/kcrash.html#defaultCrashHandler)
///
/// @param param1 int
void k_crash_default_crash_handler(int param1);

/// https://api-staging.kde.org/kaboutperson.html

/// k_aboutperson_new constructs a new KAboutPerson object.
///
KAboutPerson* k_aboutperson_new();

/// k_aboutperson_new2 constructs a new KAboutPerson object.
///
/// @param other KAboutPerson*
KAboutPerson* k_aboutperson_new2(void* other);

/// k_aboutperson_new3 constructs a new KAboutPerson object.
///
/// @param name const char*
KAboutPerson* k_aboutperson_new3(const char* name);

/// k_aboutperson_new4 constructs a new KAboutPerson object.
///
/// @param name const char*
/// @param task const char*
KAboutPerson* k_aboutperson_new4(const char* name, const char* task);

/// k_aboutperson_new5 constructs a new KAboutPerson object.
///
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
KAboutPerson* k_aboutperson_new5(const char* name, const char* task, const char* emailAddress);

/// k_aboutperson_new6 constructs a new KAboutPerson object.
///
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
/// @param webAddress const char*
KAboutPerson* k_aboutperson_new6(const char* name, const char* task, const char* emailAddress, const char* webAddress);

/// k_aboutperson_new7 constructs a new KAboutPerson object.
///
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
/// @param webAddress const char*
/// @param avatarUrl QUrl*
KAboutPerson* k_aboutperson_new7(const char* name, const char* task, const char* emailAddress, const char* webAddress, void* avatarUrl);

/// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#operator-eq)
///
/// @param self KAboutPerson*
/// @param other KAboutPerson*
void k_aboutperson_operator_assign(void* self, void* other);

/// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutPerson*
const char* k_aboutperson_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#task)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutPerson*
const char* k_aboutperson_task(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#emailAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutPerson*
const char* k_aboutperson_email_address(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#webAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutPerson*
const char* k_aboutperson_web_address(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#avatarUrl)
///
/// @param self KAboutPerson*
QUrl* k_aboutperson_avatar_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#fromJSON)
///
/// @param obj QJsonObject*
KAboutPerson* k_aboutperson_from_j_s_o_n(void* obj);

/// [Qt documentation](https://api-staging.kde.org/kaboutperson.html#dtor.KAboutPerson)
///
/// Delete this object from C++ memory.
///
/// @param self KAboutPerson*
void k_aboutperson_delete(void* self);

/// https://api-staging.kde.org/kaboutlicense.html

/// k_aboutlicense_new constructs a new KAboutLicense object.
///
KAboutLicense* k_aboutlicense_new();

/// k_aboutlicense_new2 constructs a new KAboutLicense object.
///
/// @param other KAboutLicense*
KAboutLicense* k_aboutlicense_new2(void* other);

/// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#operator-eq)
///
/// @param self KAboutLicense*
/// @param other KAboutLicense*
void k_aboutlicense_operator_assign(void* self, void* other);

/// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutLicense*
const char* k_aboutlicense_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutLicense*
const char* k_aboutlicense_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#key)
///
/// @param self KAboutLicense*
///
/// @return enum KAboutLicense__LicenseKey
int32_t k_aboutlicense_key(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#spdx)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutLicense*
const char* k_aboutlicense_spdx(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#byKeyword)
///
/// @param keyword const char*
KAboutLicense* k_aboutlicense_by_keyword(const char* keyword);

/// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutLicense*
/// @param formatName enum KAboutLicense__NameFormat
const char* k_aboutlicense_name1(void* self, int32_t formatName);

/// [Qt documentation](https://api-staging.kde.org/kaboutlicense.html#dtor.KAboutLicense)
///
/// Delete this object from C++ memory.
///
/// @param self KAboutLicense*
void k_aboutlicense_delete(void* self);

/// https://api-staging.kde.org/kaboutcomponent.html

/// k_aboutcomponent_new constructs a new KAboutComponent object.
///
KAboutComponent* k_aboutcomponent_new();

/// k_aboutcomponent_new2 constructs a new KAboutComponent object.
///
/// @param name const char*
/// @param description const char*
/// @param version const char*
/// @param webAddress const char*
/// @param pathToLicenseFile const char*
KAboutComponent* k_aboutcomponent_new2(const char* name, const char* description, const char* version, const char* webAddress, const char* pathToLicenseFile);

/// k_aboutcomponent_new3 constructs a new KAboutComponent object.
///
/// @param other KAboutComponent*
KAboutComponent* k_aboutcomponent_new3(void* other);

/// k_aboutcomponent_new4 constructs a new KAboutComponent object.
///
/// @param name const char*
KAboutComponent* k_aboutcomponent_new4(const char* name);

/// k_aboutcomponent_new5 constructs a new KAboutComponent object.
///
/// @param name const char*
/// @param description const char*
KAboutComponent* k_aboutcomponent_new5(const char* name, const char* description);

/// k_aboutcomponent_new6 constructs a new KAboutComponent object.
///
/// @param name const char*
/// @param description const char*
/// @param version const char*
KAboutComponent* k_aboutcomponent_new6(const char* name, const char* description, const char* version);

/// k_aboutcomponent_new7 constructs a new KAboutComponent object.
///
/// @param name const char*
/// @param description const char*
/// @param version const char*
/// @param webAddress const char*
KAboutComponent* k_aboutcomponent_new7(const char* name, const char* description, const char* version, const char* webAddress);

/// k_aboutcomponent_new8 constructs a new KAboutComponent object.
///
/// @param name const char*
/// @param description const char*
/// @param version const char*
/// @param webAddress const char*
/// @param licenseType enum KAboutLicense__LicenseKey
KAboutComponent* k_aboutcomponent_new8(const char* name, const char* description, const char* version, const char* webAddress, int32_t licenseType);

/// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#operator-eq)
///
/// @param self KAboutComponent*
/// @param other KAboutComponent*
void k_aboutcomponent_operator_assign(void* self, void* other);

/// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutComponent*
const char* k_aboutcomponent_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutComponent*
const char* k_aboutcomponent_description(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#version)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutComponent*
const char* k_aboutcomponent_version(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#webAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutComponent*
const char* k_aboutcomponent_web_address(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#license)
///
/// @param self KAboutComponent*
KAboutLicense* k_aboutcomponent_license(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutcomponent.html#dtor.KAboutComponent)
///
/// Delete this object from C++ memory.
///
/// @param self KAboutComponent*
void k_aboutcomponent_delete(void* self);

/// https://api-staging.kde.org/kaboutdata.html

/// k_aboutdata_new constructs a new KAboutData object.
///
/// @param componentName const char*
/// @param displayName const char*
/// @param version const char*
/// @param shortDescription const char*
/// @param licenseType enum KAboutLicense__LicenseKey
KAboutData* k_aboutdata_new(const char* componentName, const char* displayName, const char* version, const char* shortDescription, int32_t licenseType);

/// k_aboutdata_new2 constructs a new KAboutData object.
///
KAboutData* k_aboutdata_new2();

/// k_aboutdata_new3 constructs a new KAboutData object.
///
/// @param other KAboutData*
KAboutData* k_aboutdata_new3(void* other);

/// k_aboutdata_new4 constructs a new KAboutData object.
///
/// @param componentName const char*
/// @param displayName const char*
/// @param version const char*
/// @param shortDescription const char*
/// @param licenseType enum KAboutLicense__LicenseKey
/// @param copyrightStatement const char*
KAboutData* k_aboutdata_new4(const char* componentName, const char* displayName, const char* version, const char* shortDescription, int32_t licenseType, const char* copyrightStatement);

/// k_aboutdata_new5 constructs a new KAboutData object.
///
/// @param componentName const char*
/// @param displayName const char*
/// @param version const char*
/// @param shortDescription const char*
/// @param licenseType enum KAboutLicense__LicenseKey
/// @param copyrightStatement const char*
/// @param otherText const char*
KAboutData* k_aboutdata_new5(const char* componentName, const char* displayName, const char* version, const char* shortDescription, int32_t licenseType, const char* copyrightStatement, const char* otherText);

/// k_aboutdata_new6 constructs a new KAboutData object.
///
/// @param componentName const char*
/// @param displayName const char*
/// @param version const char*
/// @param shortDescription const char*
/// @param licenseType enum KAboutLicense__LicenseKey
/// @param copyrightStatement const char*
/// @param otherText const char*
/// @param homePageAddress const char*
KAboutData* k_aboutdata_new6(const char* componentName, const char* displayName, const char* version, const char* shortDescription, int32_t licenseType, const char* copyrightStatement, const char* otherText, const char* homePageAddress);

/// k_aboutdata_new7 constructs a new KAboutData object.
///
/// @param componentName const char*
/// @param displayName const char*
/// @param version const char*
/// @param shortDescription const char*
/// @param licenseType enum KAboutLicense__LicenseKey
/// @param copyrightStatement const char*
/// @param otherText const char*
/// @param homePageAddress const char*
/// @param bugAddress const char*
KAboutData* k_aboutdata_new7(const char* componentName, const char* displayName, const char* version, const char* shortDescription, int32_t licenseType, const char* copyrightStatement, const char* otherText, const char* homePageAddress, const char* bugAddress);

/// k_aboutdata_new8 constructs a new KAboutData object.
///
/// @param componentName const char*
KAboutData* k_aboutdata_new8(const char* componentName);

/// k_aboutdata_new9 constructs a new KAboutData object.
///
/// @param componentName const char*
/// @param displayName const char*
KAboutData* k_aboutdata_new9(const char* componentName, const char* displayName);

/// k_aboutdata_new10 constructs a new KAboutData object.
///
/// @param componentName const char*
/// @param displayName const char*
/// @param version const char*
KAboutData* k_aboutdata_new10(const char* componentName, const char* displayName, const char* version);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#applicationData)
///
KAboutData* k_aboutdata_application_data();

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setApplicationData)
///
/// @param aboutData KAboutData*
void k_aboutdata_set_application_data(void* aboutData);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#operator-eq)
///
/// @param self KAboutData*
/// @param other KAboutData*
void k_aboutdata_operator_assign(void* self, void* other);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
///
/// @param self KAboutData*
/// @param author KAboutPerson*
KAboutData* k_aboutdata_add_author(void* self, void* author);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
///
/// @param self KAboutData*
/// @param name const char*
KAboutData* k_aboutdata_add_author2(void* self, const char* name);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
///
/// @param self KAboutData*
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
/// @param webAddress const char*
/// @param kdeStoreUsername const char*
KAboutData* k_aboutdata_add_author3(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress, const char* kdeStoreUsername);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
///
/// @param self KAboutData*
/// @param person KAboutPerson*
KAboutData* k_aboutdata_add_credit(void* self, void* person);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
///
/// @param self KAboutData*
/// @param name const char*
KAboutData* k_aboutdata_add_credit2(void* self, const char* name);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
///
/// @param self KAboutData*
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
/// @param webAddress const char*
/// @param kdeStoreUsername const char*
KAboutData* k_aboutdata_add_credit3(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress, const char* kdeStoreUsername);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setTranslator)
///
/// @param self KAboutData*
/// @param name const char*
/// @param emailAddress const char*
KAboutData* k_aboutdata_set_translator(void* self, const char* name, const char* emailAddress);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
///
/// @param self KAboutData*
/// @param component KAboutComponent*
KAboutData* k_aboutdata_add_component(void* self, void* component);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
///
/// @param self KAboutData*
/// @param name const char*
KAboutData* k_aboutdata_add_component2(void* self, const char* name);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
///
/// @param self KAboutData*
/// @param name const char*
/// @param description const char*
/// @param version const char*
/// @param webAddress const char*
/// @param pathToLicenseFile const char*
KAboutData* k_aboutdata_add_component3(void* self, const char* name, const char* description, const char* version, const char* webAddress, const char* pathToLicenseFile);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setLicenseText)
///
/// @param self KAboutData*
/// @param license const char*
KAboutData* k_aboutdata_set_license_text(void* self, const char* license);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addLicenseText)
///
/// @param self KAboutData*
/// @param license const char*
KAboutData* k_aboutdata_add_license_text(void* self, const char* license);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setLicenseTextFile)
///
/// @param self KAboutData*
/// @param file const char*
KAboutData* k_aboutdata_set_license_text_file(void* self, const char* file);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addLicenseTextFile)
///
/// @param self KAboutData*
/// @param file const char*
KAboutData* k_aboutdata_add_license_text_file(void* self, const char* file);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setComponentName)
///
/// @param self KAboutData*
/// @param componentName const char*
KAboutData* k_aboutdata_set_component_name(void* self, const char* componentName);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setDisplayName)
///
/// @param self KAboutData*
/// @param displayName const char*
KAboutData* k_aboutdata_set_display_name(void* self, const char* displayName);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setProgramLogo)
///
/// @param self KAboutData*
/// @param image QVariant*
KAboutData* k_aboutdata_set_program_logo(void* self, void* image);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setVersion)
///
/// @param self KAboutData*
/// @param version const char*
KAboutData* k_aboutdata_set_version(void* self, const char* version);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setShortDescription)
///
/// @param self KAboutData*
/// @param shortDescription const char*
KAboutData* k_aboutdata_set_short_description(void* self, const char* shortDescription);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setLicense)
///
/// @param self KAboutData*
/// @param licenseKey enum KAboutLicense__LicenseKey
KAboutData* k_aboutdata_set_license(void* self, int32_t licenseKey);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setLicense)
///
/// @param self KAboutData*
/// @param licenseKey enum KAboutLicense__LicenseKey
/// @param versionRestriction enum KAboutLicense__VersionRestriction
KAboutData* k_aboutdata_set_license2(void* self, int32_t licenseKey, int32_t versionRestriction);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addLicense)
///
/// @param self KAboutData*
/// @param licenseKey enum KAboutLicense__LicenseKey
KAboutData* k_aboutdata_add_license(void* self, int32_t licenseKey);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addLicense)
///
/// @param self KAboutData*
/// @param licenseKey enum KAboutLicense__LicenseKey
/// @param versionRestriction enum KAboutLicense__VersionRestriction
KAboutData* k_aboutdata_add_license2(void* self, int32_t licenseKey, int32_t versionRestriction);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setCopyrightStatement)
///
/// @param self KAboutData*
/// @param copyrightStatement const char*
KAboutData* k_aboutdata_set_copyright_statement(void* self, const char* copyrightStatement);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setOtherText)
///
/// @param self KAboutData*
/// @param otherText const char*
KAboutData* k_aboutdata_set_other_text(void* self, const char* otherText);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setHomepage)
///
/// @param self KAboutData*
/// @param homepage const char*
KAboutData* k_aboutdata_set_homepage(void* self, const char* homepage);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setBugAddress)
///
/// @param self KAboutData*
/// @param bugAddress const char*
KAboutData* k_aboutdata_set_bug_address(void* self, const char* bugAddress);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setOrganizationDomain)
///
/// @param self KAboutData*
/// @param domain const char*
KAboutData* k_aboutdata_set_organization_domain(void* self, const char* domain);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setProductName)
///
/// @param self KAboutData*
/// @param name const char*
KAboutData* k_aboutdata_set_product_name(void* self, const char* name);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#componentName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_component_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#productName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_product_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#internalProductName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_internal_product_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#displayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_display_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#organizationDomain)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_organization_domain(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#internalProgramName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_internal_program_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#programLogo)
///
/// @param self KAboutData*
QVariant* k_aboutdata_program_logo(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#version)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_version(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#internalVersion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_internal_version(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#shortDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_short_description(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#homepage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_homepage(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#bugAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_bug_address(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#internalBugAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_internal_bug_address(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#authors)
///
/// @param self KAboutData*
libqt_list /* of KAboutPerson* */ k_aboutdata_authors(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#credits)
///
/// @param self KAboutData*
libqt_list /* of KAboutPerson* */ k_aboutdata_credits(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#translators)
///
/// @param self KAboutData*
libqt_list /* of KAboutPerson* */ k_aboutdata_translators(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#aboutTranslationTeam)
///
/// Caller is responsible for freeing the returned memory
///
const char* k_aboutdata_about_translation_team();

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#components)
///
/// @param self KAboutData*
libqt_list /* of KAboutComponent* */ k_aboutdata_components(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#otherText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_other_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#licenses)
///
/// @param self KAboutData*
libqt_list /* of KAboutLicense* */ k_aboutdata_licenses(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#copyrightStatement)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_copyright_statement(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#customAuthorPlainText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_custom_author_plain_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#customAuthorRichText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_custom_author_rich_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#customAuthorTextEnabled)
///
/// @param self KAboutData*
bool k_aboutdata_custom_author_text_enabled(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setCustomAuthorText)
///
/// @param self KAboutData*
/// @param plainText const char*
/// @param richText const char*
KAboutData* k_aboutdata_set_custom_author_text(void* self, const char* plainText, const char* richText);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#unsetCustomAuthorText)
///
/// @param self KAboutData*
KAboutData* k_aboutdata_unset_custom_author_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setupCommandLine)
///
/// @param self KAboutData*
/// @param parser QCommandLineParser*
bool k_aboutdata_setup_command_line(void* self, void* parser);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#processCommandLine)
///
/// @param self KAboutData*
/// @param parser QCommandLineParser*
void k_aboutdata_process_command_line(void* self, void* parser);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#setDesktopFileName)
///
/// @param self KAboutData*
/// @param desktopFileName const char*
KAboutData* k_aboutdata_set_desktop_file_name(void* self, const char* desktopFileName);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#desktopFileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KAboutData*
const char* k_aboutdata_desktop_file_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
///
/// @param self KAboutData*
/// @param name const char*
/// @param task const char*
KAboutData* k_aboutdata_add_author22(void* self, const char* name, const char* task);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
///
/// @param self KAboutData*
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
KAboutData* k_aboutdata_add_author32(void* self, const char* name, const char* task, const char* emailAddress);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
///
/// @param self KAboutData*
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
/// @param webAddress const char*
KAboutData* k_aboutdata_add_author4(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addAuthor)
///
/// @param self KAboutData*
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
/// @param webAddress const char*
/// @param avatarUrl QUrl*
KAboutData* k_aboutdata_add_author5(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress, void* avatarUrl);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
///
/// @param self KAboutData*
/// @param name const char*
/// @param task const char*
KAboutData* k_aboutdata_add_credit22(void* self, const char* name, const char* task);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
///
/// @param self KAboutData*
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
KAboutData* k_aboutdata_add_credit32(void* self, const char* name, const char* task, const char* emailAddress);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
///
/// @param self KAboutData*
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
/// @param webAddress const char*
KAboutData* k_aboutdata_add_credit4(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addCredit)
///
/// @param self KAboutData*
/// @param name const char*
/// @param task const char*
/// @param emailAddress const char*
/// @param webAddress const char*
/// @param avatarUrl QUrl*
KAboutData* k_aboutdata_add_credit5(void* self, const char* name, const char* task, const char* emailAddress, const char* webAddress, void* avatarUrl);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
///
/// @param self KAboutData*
/// @param name const char*
/// @param description const char*
KAboutData* k_aboutdata_add_component22(void* self, const char* name, const char* description);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
///
/// @param self KAboutData*
/// @param name const char*
/// @param description const char*
/// @param version const char*
KAboutData* k_aboutdata_add_component32(void* self, const char* name, const char* description, const char* version);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
///
/// @param self KAboutData*
/// @param name const char*
/// @param description const char*
/// @param version const char*
/// @param webAddress const char*
KAboutData* k_aboutdata_add_component4(void* self, const char* name, const char* description, const char* version, const char* webAddress);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#addComponent)
///
/// @param self KAboutData*
/// @param name const char*
/// @param description const char*
/// @param version const char*
/// @param webAddress const char*
/// @param licenseKey enum KAboutLicense__LicenseKey
KAboutData* k_aboutdata_add_component5(void* self, const char* name, const char* description, const char* version, const char* webAddress, int32_t licenseKey);

/// [Qt documentation](https://api-staging.kde.org/kaboutdata.html#dtor.KAboutData)
///
/// Delete this object from C++ memory.
///
/// @param self KAboutData*
void k_aboutdata_delete(void* self);

/// https://api-staging.kde.org/kaboutdata.html#types

typedef enum {
    KABOUTLICENSE_LICENSEKEY_CUSTOM = -2,
    KABOUTLICENSE_LICENSEKEY_FILE = -1,
    KABOUTLICENSE_LICENSEKEY_UNKNOWN = 0,
    KABOUTLICENSE_LICENSEKEY_GPL = 1,
    KABOUTLICENSE_LICENSEKEY_GPL_V2 = 1,
    KABOUTLICENSE_LICENSEKEY_LGPL = 2,
    KABOUTLICENSE_LICENSEKEY_LGPL_V2 = 2,
    KABOUTLICENSE_LICENSEKEY_BSDL = 3,
    KABOUTLICENSE_LICENSEKEY_BSD_2_CLAUSE = 3,
    KABOUTLICENSE_LICENSEKEY_ARTISTIC = 4,
    KABOUTLICENSE_LICENSEKEY_GPL_V3 = 5,
    KABOUTLICENSE_LICENSEKEY_LGPL_V3 = 6,
    KABOUTLICENSE_LICENSEKEY_LGPL_V2_1 = 7,
    KABOUTLICENSE_LICENSEKEY_MIT = 8,
    KABOUTLICENSE_LICENSEKEY_ODBL_V1 = 9,
    KABOUTLICENSE_LICENSEKEY_APACHE_V2 = 10,
    KABOUTLICENSE_LICENSEKEY_FTL = 11,
    KABOUTLICENSE_LICENSEKEY_BSL_V1 = 12,
    KABOUTLICENSE_LICENSEKEY_BSD_3_CLAUSE = 13,
    KABOUTLICENSE_LICENSEKEY_CC0_V1 = 14,
    KABOUTLICENSE_LICENSEKEY_MPL_V2 = 15
} KAboutLicense__LicenseKey;

typedef enum {
    KABOUTLICENSE_NAMEFORMAT_SHORTNAME = 0,
    KABOUTLICENSE_NAMEFORMAT_FULLNAME = 1
} KAboutLicense__NameFormat;

typedef enum {
    KABOUTLICENSE_VERSIONRESTRICTION_ONLYTHISVERSION = 0,
    KABOUTLICENSE_VERSIONRESTRICTION_ORLATERVERSIONS = 1
} KAboutLicense__VersionRestriction;

#endif
