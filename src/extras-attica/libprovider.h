#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBPROVIDER_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-provider.html)

/// k_attica__provider_new constructs a new Attica::Provider object.
///
Attica__Provider* k_attica__provider_new();

/// [Upstream resources](https://api.kde.org/attica-provider.html)

/// k_attica__provider_new2 constructs a new Attica::Provider object.
///
/// @param other Attica__Provider*
///
Attica__Provider* k_attica__provider_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-provider.html#operator-eq)
///
/// @param self Attica__Provider*
/// @param other Attica__Provider*
///
void k_attica__provider_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-provider.html#isValid)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#isEnabled)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_is_enabled(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#setEnabled)
///
/// @param self Attica__Provider*
/// @param enabled bool
///
void k_attica__provider_set_enabled(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/attica-provider.html#setAdditionalAgentInformation)
///
/// @param self Attica__Provider*
/// @param additionalInformation const char*
///
void k_attica__provider_set_additional_agent_information(void* self, const char* additionalInformation);

/// [Upstream resources](https://api.kde.org/attica-provider.html#additionalAgentInformation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_additional_agent_information(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#baseUrl)
///
/// @param self Attica__Provider*
///
QUrl* k_attica__provider_base_url(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_name(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#icon)
///
/// @param self Attica__Provider*
///
QUrl* k_attica__provider_icon(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasPersonService)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_person_service(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#personServiceVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_person_service_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasFriendService)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_friend_service(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#friendServiceVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_friend_service_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasMessageService)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_message_service(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#messageServiceVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_message_service_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasAchievementService)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_achievement_service(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#achievementServiceVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_achievement_service_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasActivityService)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_activity_service(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#activityServiceVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_activity_service_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasContentService)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_content_service(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#contentServiceVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_content_service_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasFanService)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_fan_service(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#fanServiceVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_fan_service_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasForumService)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_forum_service(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#forumServiceVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_forum_service_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasKnowledgebaseService)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_knowledgebase_service(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#knowledgebaseServiceVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_knowledgebase_service_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasCommentService)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_comment_service(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#commentServiceVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_comment_service_version(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasCredentials)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_credentials(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#hasCredentials)
///
/// @param self Attica__Provider*
///
bool k_attica__provider_has_credentials2(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#loadCredentials)
///
/// @param self Attica__Provider*
/// @param user const char*
/// @param password const char*
///
bool k_attica__provider_load_credentials(void* self, const char* user, const char* password);

/// [Upstream resources](https://api.kde.org/attica-provider.html#saveCredentials)
///
/// @param self Attica__Provider*
/// @param user const char*
/// @param password const char*
///
bool k_attica__provider_save_credentials(void* self, const char* user, const char* password);

/// [Upstream resources](https://api.kde.org/attica-provider.html#checkLogin)
///
/// @param self Attica__Provider*
/// @param user const char*
/// @param password const char*
///
Attica__PostJob* k_attica__provider_check_login(void* self, const char* user, const char* password);

/// [Upstream resources](https://api.kde.org/attica-provider.html#registerAccount)
///
/// @param self Attica__Provider*
/// @param id const char*
/// @param password const char*
/// @param mail const char*
/// @param firstName const char*
/// @param lastName const char*
///
Attica__PostJob* k_attica__provider_register_account(void* self, const char* id, const char* password, const char* mail, const char* firstName, const char* lastName);

/// [Upstream resources](https://api.kde.org/attica-provider.html#postLocation)
///
/// @param self Attica__Provider*
/// @param latitude double
/// @param longitude double
///
Attica__PostJob* k_attica__provider_post_location(void* self, double latitude, double longitude);

/// [Upstream resources](https://api.kde.org/attica-provider.html#setPrivateData)
///
/// @param self Attica__Provider*
/// @param app const char*
/// @param key const char*
/// @param value const char*
///
Attica__PostJob* k_attica__provider_set_private_data(void* self, const char* app, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/attica-provider.html#inviteFriend)
///
/// @param self Attica__Provider*
/// @param to const char*
/// @param message const char*
///
Attica__PostJob* k_attica__provider_invite_friend(void* self, const char* to, const char* message);

/// [Upstream resources](https://api.kde.org/attica-provider.html#approveFriendship)
///
/// @param self Attica__Provider*
/// @param to const char*
///
Attica__PostJob* k_attica__provider_approve_friendship(void* self, const char* to);

/// [Upstream resources](https://api.kde.org/attica-provider.html#declineFriendship)
///
/// @param self Attica__Provider*
/// @param to const char*
///
Attica__PostJob* k_attica__provider_decline_friendship(void* self, const char* to);

/// [Upstream resources](https://api.kde.org/attica-provider.html#cancelFriendship)
///
/// @param self Attica__Provider*
/// @param to const char*
///
Attica__PostJob* k_attica__provider_cancel_friendship(void* self, const char* to);

/// [Upstream resources](https://api.kde.org/attica-provider.html#postMessage)
///
/// @param self Attica__Provider*
/// @param message Attica__Message*
///
Attica__PostJob* k_attica__provider_post_message(void* self, void* message);

/// [Upstream resources](https://api.kde.org/attica-provider.html#editAchievement)
///
/// @param self Attica__Provider*
/// @param contentId const char*
/// @param achievementId const char*
/// @param achievement Attica__Achievement*
///
Attica__PutJob* k_attica__provider_edit_achievement(void* self, const char* contentId, const char* achievementId, void* achievement);

/// [Upstream resources](https://api.kde.org/attica-provider.html#deleteAchievement)
///
/// @param self Attica__Provider*
/// @param contentId const char*
/// @param achievementId const char*
///
Attica__DeleteJob* k_attica__provider_delete_achievement(void* self, const char* contentId, const char* achievementId);

/// [Upstream resources](https://api.kde.org/attica-provider.html#setAchievementProgress)
///
/// @param self Attica__Provider*
/// @param id const char*
/// @param progress QVariant*
/// @param timestamp QDateTime*
///
Attica__PostJob* k_attica__provider_set_achievement_progress(void* self, const char* id, void* progress, void* timestamp);

/// [Upstream resources](https://api.kde.org/attica-provider.html#resetAchievementProgress)
///
/// @param self Attica__Provider*
/// @param id const char*
///
Attica__DeleteJob* k_attica__provider_reset_achievement_progress(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-provider.html#postActivity)
///
/// @param self Attica__Provider*
/// @param message const char*
///
Attica__PostJob* k_attica__provider_post_activity(void* self, const char* message);

/// [Upstream resources](https://api.kde.org/attica-provider.html#createProject)
///
/// @param self Attica__Provider*
/// @param project Attica__Project*
///
Attica__PostJob* k_attica__provider_create_project(void* self, void* project);

/// [Upstream resources](https://api.kde.org/attica-provider.html#deleteProject)
///
/// @param self Attica__Provider*
/// @param project Attica__Project*
///
Attica__PostJob* k_attica__provider_delete_project(void* self, void* project);

/// [Upstream resources](https://api.kde.org/attica-provider.html#editProject)
///
/// @param self Attica__Provider*
/// @param project Attica__Project*
///
Attica__PostJob* k_attica__provider_edit_project(void* self, void* project);

/// [Upstream resources](https://api.kde.org/attica-provider.html#savePublisherField)
///
/// @param self Attica__Provider*
/// @param project Attica__Project*
/// @param field Attica__PublisherField*
///
Attica__PostJob* k_attica__provider_save_publisher_field(void* self, void* project, void* field);

/// [Upstream resources](https://api.kde.org/attica-provider.html#publishBuildJob)
///
/// @param self Attica__Provider*
/// @param buildjob Attica__BuildServiceJob*
/// @param publisher Attica__Publisher*
///
Attica__PostJob* k_attica__provider_publish_build_job(void* self, void* buildjob, void* publisher);

/// [Upstream resources](https://api.kde.org/attica-provider.html#createBuildServiceJob)
///
/// @param self Attica__Provider*
/// @param job Attica__BuildServiceJob*
///
Attica__PostJob* k_attica__provider_create_build_service_job(void* self, void* job);

/// [Upstream resources](https://api.kde.org/attica-provider.html#cancelBuildServiceJob)
///
/// @param self Attica__Provider*
/// @param job Attica__BuildServiceJob*
///
Attica__PostJob* k_attica__provider_cancel_build_service_job(void* self, void* job);

/// [Upstream resources](https://api.kde.org/attica-provider.html#deleteRemoteAccount)
///
/// @param self Attica__Provider*
/// @param id const char*
///
Attica__PostJob* k_attica__provider_delete_remote_account(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-provider.html#createRemoteAccount)
///
/// @param self Attica__Provider*
/// @param account Attica__RemoteAccount*
///
Attica__PostJob* k_attica__provider_create_remote_account(void* self, void* account);

/// [Upstream resources](https://api.kde.org/attica-provider.html#editRemoteAccount)
///
/// @param self Attica__Provider*
/// @param account Attica__RemoteAccount*
///
Attica__PostJob* k_attica__provider_edit_remote_account(void* self, void* account);

/// [Upstream resources](https://api.kde.org/attica-provider.html#uploadTarballToBuildService)
///
/// @param self Attica__Provider*
/// @param projectId const char*
/// @param fileName const char*
/// @param payload const char*
///
Attica__PostJob* k_attica__provider_upload_tarball_to_build_service(void* self, const char* projectId, const char* fileName, const char* payload);

/// [Upstream resources](https://api.kde.org/attica-provider.html#voteForContent)
///
/// @param self Attica__Provider*
/// @param contentId const char*
/// @param rating uint32_t
///
Attica__PostJob* k_attica__provider_vote_for_content(void* self, const char* contentId, uint32_t rating);

/// [Upstream resources](https://api.kde.org/attica-provider.html#deleteContent)
///
/// @param self Attica__Provider*
/// @param contentId const char*
///
Attica__PostJob* k_attica__provider_delete_content(void* self, const char* contentId);

/// [Upstream resources](https://api.kde.org/attica-provider.html#setDownloadFile)
///
/// @param self Attica__Provider*
/// @param contentId const char*
/// @param fileName const char*
/// @param payload QIODevice*
///
Attica__PostJob* k_attica__provider_set_download_file(void* self, const char* contentId, const char* fileName, void* payload);

/// [Upstream resources](https://api.kde.org/attica-provider.html#setDownloadFile)
///
/// @param self Attica__Provider*
/// @param contentId const char*
/// @param fileName const char*
/// @param payload const char*
///
Attica__PostJob* k_attica__provider_set_download_file2(void* self, const char* contentId, const char* fileName, const char* payload);

/// [Upstream resources](https://api.kde.org/attica-provider.html#deleteDownloadFile)
///
/// @param self Attica__Provider*
/// @param contentId const char*
///
Attica__PostJob* k_attica__provider_delete_download_file(void* self, const char* contentId);

/// [Upstream resources](https://api.kde.org/attica-provider.html#setPreviewImage)
///
/// @param self Attica__Provider*
/// @param contentId const char*
/// @param previewId const char*
/// @param fileName const char*
/// @param image const char*
///
Attica__PostJob* k_attica__provider_set_preview_image(void* self, const char* contentId, const char* previewId, const char* fileName, const char* image);

/// [Upstream resources](https://api.kde.org/attica-provider.html#deletePreviewImage)
///
/// @param self Attica__Provider*
/// @param contentId const char*
/// @param previewId const char*
///
Attica__PostJob* k_attica__provider_delete_preview_image(void* self, const char* contentId, const char* previewId);

/// [Upstream resources](https://api.kde.org/attica-provider.html#voteForComment)
///
/// @param self Attica__Provider*
/// @param id const char*
/// @param rating uint32_t
///
Attica__PostJob* k_attica__provider_vote_for_comment(void* self, const char* id, uint32_t rating);

/// [Upstream resources](https://api.kde.org/attica-provider.html#becomeFan)
///
/// @param self Attica__Provider*
/// @param contentId const char*
///
Attica__PostJob* k_attica__provider_become_fan(void* self, const char* contentId);

/// [Upstream resources](https://api.kde.org/attica-provider.html#postTopic)
///
/// @param self Attica__Provider*
/// @param forumId const char*
/// @param subject const char*
/// @param content const char*
///
Attica__PostJob* k_attica__provider_post_topic(void* self, const char* forumId, const char* subject, const char* content);

/// [Upstream resources](https://api.kde.org/attica-provider.html#getRegisterAccountUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Provider*
///
const char* k_attica__provider_get_register_account_url(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#postLocation)
///
/// @param self Attica__Provider*
/// @param latitude double
/// @param longitude double
/// @param city const char*
///
Attica__PostJob* k_attica__provider_post_location3(void* self, double latitude, double longitude, const char* city);

/// [Upstream resources](https://api.kde.org/attica-provider.html#postLocation)
///
/// @param self Attica__Provider*
/// @param latitude double
/// @param longitude double
/// @param city const char*
/// @param country const char*
///
Attica__PostJob* k_attica__provider_post_location4(void* self, double latitude, double longitude, const char* city, const char* country);

/// Delete this object from C++ memory.
///
/// @param self Attica__Provider*
///
void k_attica__provider_delete(void* self);

/// [Upstream resources](https://api.kde.org/attica-provider.html#public-types)

typedef enum {
    ATTICA_PROVIDER_SORTMODE_NEWEST = 0,
    ATTICA_PROVIDER_SORTMODE_ALPHABETICAL = 1,
    ATTICA_PROVIDER_SORTMODE_RATING = 2,
    ATTICA_PROVIDER_SORTMODE_DOWNLOADS = 3
} Attica__Provider__SortMode;

#endif
