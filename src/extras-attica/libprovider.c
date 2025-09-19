#include "libachievement.hpp"
#include "libbuildservicejob.hpp"
#include "libdeletejob.hpp"
#include "libmessage.hpp"
#include "libpostjob.hpp"
#include "libproject.hpp"
#include "libpublisher.hpp"
#include "libpublisherfield.hpp"
#include "libputjob.hpp"
#include "libremoteaccount.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libprovider.hpp"
#include "libprovider.h"

Attica__Provider* k_attica__provider_new() {
    return Attica__Provider_new();
}

Attica__Provider* k_attica__provider_new2(void* other) {
    return Attica__Provider_new2((Attica__Provider*)other);
}

void k_attica__provider_operator_assign(void* self, void* other) {
    Attica__Provider_OperatorAssign((Attica__Provider*)self, (Attica__Provider*)other);
}

bool k_attica__provider_is_valid(void* self) {
    return Attica__Provider_IsValid((Attica__Provider*)self);
}

bool k_attica__provider_is_enabled(void* self) {
    return Attica__Provider_IsEnabled((Attica__Provider*)self);
}

void k_attica__provider_set_enabled(void* self, bool enabled) {
    Attica__Provider_SetEnabled((Attica__Provider*)self, enabled);
}

void k_attica__provider_set_additional_agent_information(void* self, const char* additionalInformation) {
    Attica__Provider_SetAdditionalAgentInformation((Attica__Provider*)self, qstring(additionalInformation));
}

const char* k_attica__provider_additional_agent_information(void* self) {
    libqt_string _str = Attica__Provider_AdditionalAgentInformation((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_attica__provider_base_url(void* self) {
    return Attica__Provider_BaseUrl((Attica__Provider*)self);
}

const char* k_attica__provider_name(void* self) {
    libqt_string _str = Attica__Provider_Name((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_attica__provider_icon(void* self) {
    return Attica__Provider_Icon((Attica__Provider*)self);
}

bool k_attica__provider_has_person_service(void* self) {
    return Attica__Provider_HasPersonService((Attica__Provider*)self);
}

const char* k_attica__provider_person_service_version(void* self) {
    libqt_string _str = Attica__Provider_PersonServiceVersion((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__provider_has_friend_service(void* self) {
    return Attica__Provider_HasFriendService((Attica__Provider*)self);
}

const char* k_attica__provider_friend_service_version(void* self) {
    libqt_string _str = Attica__Provider_FriendServiceVersion((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__provider_has_message_service(void* self) {
    return Attica__Provider_HasMessageService((Attica__Provider*)self);
}

const char* k_attica__provider_message_service_version(void* self) {
    libqt_string _str = Attica__Provider_MessageServiceVersion((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__provider_has_achievement_service(void* self) {
    return Attica__Provider_HasAchievementService((Attica__Provider*)self);
}

const char* k_attica__provider_achievement_service_version(void* self) {
    libqt_string _str = Attica__Provider_AchievementServiceVersion((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__provider_has_activity_service(void* self) {
    return Attica__Provider_HasActivityService((Attica__Provider*)self);
}

const char* k_attica__provider_activity_service_version(void* self) {
    libqt_string _str = Attica__Provider_ActivityServiceVersion((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__provider_has_content_service(void* self) {
    return Attica__Provider_HasContentService((Attica__Provider*)self);
}

const char* k_attica__provider_content_service_version(void* self) {
    libqt_string _str = Attica__Provider_ContentServiceVersion((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__provider_has_fan_service(void* self) {
    return Attica__Provider_HasFanService((Attica__Provider*)self);
}

const char* k_attica__provider_fan_service_version(void* self) {
    libqt_string _str = Attica__Provider_FanServiceVersion((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__provider_has_forum_service(void* self) {
    return Attica__Provider_HasForumService((Attica__Provider*)self);
}

const char* k_attica__provider_forum_service_version(void* self) {
    libqt_string _str = Attica__Provider_ForumServiceVersion((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__provider_has_knowledgebase_service(void* self) {
    return Attica__Provider_HasKnowledgebaseService((Attica__Provider*)self);
}

const char* k_attica__provider_knowledgebase_service_version(void* self) {
    libqt_string _str = Attica__Provider_KnowledgebaseServiceVersion((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__provider_has_comment_service(void* self) {
    return Attica__Provider_HasCommentService((Attica__Provider*)self);
}

const char* k_attica__provider_comment_service_version(void* self) {
    libqt_string _str = Attica__Provider_CommentServiceVersion((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__provider_has_credentials(void* self) {
    return Attica__Provider_HasCredentials((Attica__Provider*)self);
}

bool k_attica__provider_has_credentials2(void* self) {
    return Attica__Provider_HasCredentials2((Attica__Provider*)self);
}

bool k_attica__provider_load_credentials(void* self, const char* user, const char* password) {
    return Attica__Provider_LoadCredentials((Attica__Provider*)self, qstring(user), qstring(password));
}

bool k_attica__provider_save_credentials(void* self, const char* user, const char* password) {
    return Attica__Provider_SaveCredentials((Attica__Provider*)self, qstring(user), qstring(password));
}

Attica__PostJob* k_attica__provider_check_login(void* self, const char* user, const char* password) {
    return Attica__Provider_CheckLogin((Attica__Provider*)self, qstring(user), qstring(password));
}

Attica__PostJob* k_attica__provider_register_account(void* self, const char* id, const char* password, const char* mail, const char* firstName, const char* lastName) {
    return Attica__Provider_RegisterAccount((Attica__Provider*)self, qstring(id), qstring(password), qstring(mail), qstring(firstName), qstring(lastName));
}

Attica__PostJob* k_attica__provider_post_location(void* self, double latitude, double longitude) {
    return Attica__Provider_PostLocation((Attica__Provider*)self, latitude, longitude);
}

Attica__PostJob* k_attica__provider_set_private_data(void* self, const char* app, const char* key, const char* value) {
    return Attica__Provider_SetPrivateData((Attica__Provider*)self, qstring(app), qstring(key), qstring(value));
}

Attica__PostJob* k_attica__provider_invite_friend(void* self, const char* to, const char* message) {
    return Attica__Provider_InviteFriend((Attica__Provider*)self, qstring(to), qstring(message));
}

Attica__PostJob* k_attica__provider_approve_friendship(void* self, const char* to) {
    return Attica__Provider_ApproveFriendship((Attica__Provider*)self, qstring(to));
}

Attica__PostJob* k_attica__provider_decline_friendship(void* self, const char* to) {
    return Attica__Provider_DeclineFriendship((Attica__Provider*)self, qstring(to));
}

Attica__PostJob* k_attica__provider_cancel_friendship(void* self, const char* to) {
    return Attica__Provider_CancelFriendship((Attica__Provider*)self, qstring(to));
}

Attica__PostJob* k_attica__provider_post_message(void* self, void* message) {
    return Attica__Provider_PostMessage((Attica__Provider*)self, (Attica__Message*)message);
}

Attica__PutJob* k_attica__provider_edit_achievement(void* self, const char* contentId, const char* achievementId, void* achievement) {
    return Attica__Provider_EditAchievement((Attica__Provider*)self, qstring(contentId), qstring(achievementId), (Attica__Achievement*)achievement);
}

Attica__DeleteJob* k_attica__provider_delete_achievement(void* self, const char* contentId, const char* achievementId) {
    return Attica__Provider_DeleteAchievement((Attica__Provider*)self, qstring(contentId), qstring(achievementId));
}

Attica__PostJob* k_attica__provider_set_achievement_progress(void* self, const char* id, void* progress, void* timestamp) {
    return Attica__Provider_SetAchievementProgress((Attica__Provider*)self, qstring(id), (QVariant*)progress, (QDateTime*)timestamp);
}

Attica__DeleteJob* k_attica__provider_reset_achievement_progress(void* self, const char* id) {
    return Attica__Provider_ResetAchievementProgress((Attica__Provider*)self, qstring(id));
}

Attica__PostJob* k_attica__provider_post_activity(void* self, const char* message) {
    return Attica__Provider_PostActivity((Attica__Provider*)self, qstring(message));
}

Attica__PostJob* k_attica__provider_create_project(void* self, void* project) {
    return Attica__Provider_CreateProject((Attica__Provider*)self, (Attica__Project*)project);
}

Attica__PostJob* k_attica__provider_delete_project(void* self, void* project) {
    return Attica__Provider_DeleteProject((Attica__Provider*)self, (Attica__Project*)project);
}

Attica__PostJob* k_attica__provider_edit_project(void* self, void* project) {
    return Attica__Provider_EditProject((Attica__Provider*)self, (Attica__Project*)project);
}

Attica__PostJob* k_attica__provider_save_publisher_field(void* self, void* project, void* field) {
    return Attica__Provider_SavePublisherField((Attica__Provider*)self, (Attica__Project*)project, (Attica__PublisherField*)field);
}

Attica__PostJob* k_attica__provider_publish_build_job(void* self, void* buildjob, void* publisher) {
    return Attica__Provider_PublishBuildJob((Attica__Provider*)self, (Attica__BuildServiceJob*)buildjob, (Attica__Publisher*)publisher);
}

Attica__PostJob* k_attica__provider_create_build_service_job(void* self, void* job) {
    return Attica__Provider_CreateBuildServiceJob((Attica__Provider*)self, (Attica__BuildServiceJob*)job);
}

Attica__PostJob* k_attica__provider_cancel_build_service_job(void* self, void* job) {
    return Attica__Provider_CancelBuildServiceJob((Attica__Provider*)self, (Attica__BuildServiceJob*)job);
}

Attica__PostJob* k_attica__provider_delete_remote_account(void* self, const char* id) {
    return Attica__Provider_DeleteRemoteAccount((Attica__Provider*)self, qstring(id));
}

Attica__PostJob* k_attica__provider_create_remote_account(void* self, void* account) {
    return Attica__Provider_CreateRemoteAccount((Attica__Provider*)self, (Attica__RemoteAccount*)account);
}

Attica__PostJob* k_attica__provider_edit_remote_account(void* self, void* account) {
    return Attica__Provider_EditRemoteAccount((Attica__Provider*)self, (Attica__RemoteAccount*)account);
}

Attica__PostJob* k_attica__provider_upload_tarball_to_build_service(void* self, const char* projectId, const char* fileName, const char* payload) {
    return Attica__Provider_UploadTarballToBuildService((Attica__Provider*)self, qstring(projectId), qstring(fileName), qstring(payload));
}

Attica__PostJob* k_attica__provider_vote_for_content(void* self, const char* contentId, uint32_t rating) {
    return Attica__Provider_VoteForContent((Attica__Provider*)self, qstring(contentId), rating);
}

Attica__PostJob* k_attica__provider_delete_content(void* self, const char* contentId) {
    return Attica__Provider_DeleteContent((Attica__Provider*)self, qstring(contentId));
}

Attica__PostJob* k_attica__provider_set_download_file(void* self, const char* contentId, const char* fileName, void* payload) {
    return Attica__Provider_SetDownloadFile((Attica__Provider*)self, qstring(contentId), qstring(fileName), (QIODevice*)payload);
}

Attica__PostJob* k_attica__provider_set_download_file2(void* self, const char* contentId, const char* fileName, const char* payload) {
    return Attica__Provider_SetDownloadFile2((Attica__Provider*)self, qstring(contentId), qstring(fileName), qstring(payload));
}

Attica__PostJob* k_attica__provider_delete_download_file(void* self, const char* contentId) {
    return Attica__Provider_DeleteDownloadFile((Attica__Provider*)self, qstring(contentId));
}

Attica__PostJob* k_attica__provider_set_preview_image(void* self, const char* contentId, const char* previewId, const char* fileName, const char* image) {
    return Attica__Provider_SetPreviewImage((Attica__Provider*)self, qstring(contentId), qstring(previewId), qstring(fileName), qstring(image));
}

Attica__PostJob* k_attica__provider_delete_preview_image(void* self, const char* contentId, const char* previewId) {
    return Attica__Provider_DeletePreviewImage((Attica__Provider*)self, qstring(contentId), qstring(previewId));
}

Attica__PostJob* k_attica__provider_vote_for_comment(void* self, const char* id, uint32_t rating) {
    return Attica__Provider_VoteForComment((Attica__Provider*)self, qstring(id), rating);
}

Attica__PostJob* k_attica__provider_become_fan(void* self, const char* contentId) {
    return Attica__Provider_BecomeFan((Attica__Provider*)self, qstring(contentId));
}

Attica__PostJob* k_attica__provider_post_topic(void* self, const char* forumId, const char* subject, const char* content) {
    return Attica__Provider_PostTopic((Attica__Provider*)self, qstring(forumId), qstring(subject), qstring(content));
}

const char* k_attica__provider_get_register_account_url(void* self) {
    libqt_string _str = Attica__Provider_GetRegisterAccountUrl((Attica__Provider*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Attica__PostJob* k_attica__provider_post_location3(void* self, double latitude, double longitude, const char* city) {
    return Attica__Provider_PostLocation3((Attica__Provider*)self, latitude, longitude, qstring(city));
}

Attica__PostJob* k_attica__provider_post_location4(void* self, double latitude, double longitude, const char* city, const char* country) {
    return Attica__Provider_PostLocation4((Attica__Provider*)self, latitude, longitude, qstring(city), qstring(country));
}

void k_attica__provider_delete(void* self) {
    Attica__Provider_Delete((Attica__Provider*)(self));
}
