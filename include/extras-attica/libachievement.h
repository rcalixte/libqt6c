#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBACHIEVEMENT_H
#define SRC_EXTRAS_ATTICAQT6C_LIBACHIEVEMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-achievement.html

/// k_attica__achievement_new constructs a new Attica::Achievement object.
///
Attica__Achievement* k_attica__achievement_new();

/// k_attica__achievement_new2 constructs a new Attica::Achievement object.
///
/// @param other Attica__Achievement*
Attica__Achievement* k_attica__achievement_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#stringToAchievementType)
///
/// @param achievementTypeString const char*
///
/// @return enum Attica__Achievement__Type
int32_t k_attica__achievement_string_to_achievement_type(const char* achievementTypeString);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#achievementTypeToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type enum Attica__Achievement__Type
const char* k_attica__achievement_achievement_type_to_string(int32_t type);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#stringToAchievementVisibility)
///
/// @param achievementVisibilityString const char*
///
/// @return enum Attica__Achievement__Visibility
int32_t k_attica__achievement_string_to_achievement_visibility(const char* achievementVisibilityString);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#achievementVisibilityToString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param visibility enum Attica__Achievement__Visibility
const char* k_attica__achievement_achievement_visibility_to_string(int32_t visibility);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#operator-eq)
///
/// @param self Attica__Achievement*
/// @param other Attica__Achievement*
void k_attica__achievement_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setId)
///
/// @param self Attica__Achievement*
/// @param id const char*
void k_attica__achievement_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Achievement*
const char* k_attica__achievement_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setContentId)
///
/// @param self Attica__Achievement*
/// @param contentId const char*
void k_attica__achievement_set_content_id(void* self, const char* contentId);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#contentId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Achievement*
const char* k_attica__achievement_content_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setName)
///
/// @param self Attica__Achievement*
/// @param name const char*
void k_attica__achievement_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Achievement*
const char* k_attica__achievement_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setDescription)
///
/// @param self Attica__Achievement*
/// @param description const char*
void k_attica__achievement_set_description(void* self, const char* description);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Achievement*
const char* k_attica__achievement_description(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setExplanation)
///
/// @param self Attica__Achievement*
/// @param explanation const char*
void k_attica__achievement_set_explanation(void* self, const char* explanation);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#explanation)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Achievement*
const char* k_attica__achievement_explanation(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setPoints)
///
/// @param self Attica__Achievement*
/// @param points int
void k_attica__achievement_set_points(void* self, int points);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#points)
///
/// @param self Attica__Achievement*
int32_t k_attica__achievement_points(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setImage)
///
/// @param self Attica__Achievement*
/// @param image QUrl*
void k_attica__achievement_set_image(void* self, void* image);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#image)
///
/// @param self Attica__Achievement*
QUrl* k_attica__achievement_image(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setDependencies)
///
/// @param self Attica__Achievement*
/// @param dependencies const char**
void k_attica__achievement_set_dependencies(void* self, const char* dependencies[static 1]);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#addDependency)
///
/// @param self Attica__Achievement*
/// @param dependency const char*
void k_attica__achievement_add_dependency(void* self, const char* dependency);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#removeDependency)
///
/// @param self Attica__Achievement*
/// @param dependency const char*
void k_attica__achievement_remove_dependency(void* self, const char* dependency);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#dependencies)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Achievement*
const char** k_attica__achievement_dependencies(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setVisibility)
///
/// @param self Attica__Achievement*
/// @param visibility enum Attica__Achievement__Visibility
void k_attica__achievement_set_visibility(void* self, int32_t visibility);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#visibility)
///
/// @param self Attica__Achievement*
///
/// @return enum Attica__Achievement__Visibility
int32_t k_attica__achievement_visibility(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setType)
///
/// @param self Attica__Achievement*
/// @param type enum Attica__Achievement__Type
void k_attica__achievement_set_type(void* self, int32_t type);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#type)
///
/// @param self Attica__Achievement*
///
/// @return enum Attica__Achievement__Type
int32_t k_attica__achievement_type(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setOptions)
///
/// @param self Attica__Achievement*
/// @param options const char**
void k_attica__achievement_set_options(void* self, const char* options[static 1]);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#addOption)
///
/// @param self Attica__Achievement*
/// @param option const char*
void k_attica__achievement_add_option(void* self, const char* option);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#removeOption)
///
/// @param self Attica__Achievement*
/// @param option const char*
void k_attica__achievement_remove_option(void* self, const char* option);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#options)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Achievement*
const char** k_attica__achievement_options(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setSteps)
///
/// @param self Attica__Achievement*
/// @param steps int
void k_attica__achievement_set_steps(void* self, int steps);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#steps)
///
/// @param self Attica__Achievement*
int32_t k_attica__achievement_steps(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#setProgress)
///
/// @param self Attica__Achievement*
/// @param progress QVariant*
void k_attica__achievement_set_progress(void* self, void* progress);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#progress)
///
/// @param self Attica__Achievement*
QVariant* k_attica__achievement_progress(void* self);

/// [Qt documentation](https://api.kde.org/attica-achievement.html#isValid)
///
/// @param self Attica__Achievement*
bool k_attica__achievement_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Achievement*
void k_attica__achievement_delete(void* self);

/// https://api.kde.org/attica-achievement.html#types

typedef enum {
    ATTICA_ACHIEVEMENT_TYPE_FLOWINGACHIEVEMENT = 0,
    ATTICA_ACHIEVEMENT_TYPE_STEPPEDACHIEVEMENT = 1,
    ATTICA_ACHIEVEMENT_TYPE_NAMEDSTEPSACHIEVEMENT = 2,
    ATTICA_ACHIEVEMENT_TYPE_SETACHIEVEMENT = 3
} Attica__Achievement__Type;

typedef enum {
    ATTICA_ACHIEVEMENT_VISIBILITY_VISIBLEACHIEVEMENT = 0,
    ATTICA_ACHIEVEMENT_VISIBILITY_DEPENDENTSACHIEVEMENT = 1,
    ATTICA_ACHIEVEMENT_VISIBILITY_SECRETACHIEVEMENT = 2
} Attica__Achievement__Visibility;

#endif
