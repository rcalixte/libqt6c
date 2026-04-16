#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_LINK_H
#define SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_LINK_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)

/// q_poppler__linkdestination_new constructs a new Poppler::LinkDestination object.
///
/// @param description const char*
///
Poppler__LinkDestination* q_poppler__linkdestination_new(const char* description);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)

/// q_poppler__linkdestination_new2 constructs a new Poppler::LinkDestination object.
///
/// @param other Poppler__LinkDestination*
///
Poppler__LinkDestination* q_poppler__linkdestination_new2(void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
///
/// @return enum Poppler__LinkDestination__Kind
///
int32_t q_poppler__linkdestination_kind(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
///
int32_t q_poppler__linkdestination_page_number(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
///
double q_poppler__linkdestination_left(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
///
double q_poppler__linkdestination_bottom(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
///
double q_poppler__linkdestination_right(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
///
double q_poppler__linkdestination_top(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
///
double q_poppler__linkdestination_zoom(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
///
bool q_poppler__linkdestination_is_change_left(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
///
bool q_poppler__linkdestination_is_change_top(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
///
bool q_poppler__linkdestination_is_change_zoom(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkDestination*
///
const char* q_poppler__linkdestination_to_string(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkDestination*
///
const char* q_poppler__linkdestination_destination_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// @param self Poppler__LinkDestination*
/// @param other Poppler__LinkDestination*
///
void q_poppler__linkdestination_operator_assign(void* self, void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkDestination*
///
void q_poppler__linkdestination_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)

/// q_poppler__link_new constructs a new Poppler::Link object.
///
/// @param linkArea QRectF*
///
Poppler__Link* q_poppler__link_new(void* linkArea);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
///
/// @param self Poppler__Link*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__link_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__Link*
/// @param callback int32_t func()
///
void q_poppler__link_on_link_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__link_super_link_type` instead
///
#define q_poppler__link_qbase_link_type q_poppler__link_super_link_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
///
/// Base class method implementation
///
/// @param self Poppler__Link*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__link_super_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
///
/// @param self Poppler__Link*
///
QRectF* q_poppler__link_link_area(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
///
/// @param self Poppler__Link*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__link_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__Link*
///
void q_poppler__link_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)

/// q_poppler__linkgoto_new constructs a new Poppler::LinkGoto object.
///
/// @param linkArea QRectF*
/// @param extFileName const char*
/// @param destination Poppler__LinkDestination*
///
Poppler__LinkGoto* q_poppler__linkgoto_new(void* linkArea, const char* extFileName, void* destination);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
///
/// @param self Poppler__LinkGoto*
///
bool q_poppler__linkgoto_is_external(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkGoto*
///
const char* q_poppler__linkgoto_file_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
///
/// @param self Poppler__LinkGoto*
///
Poppler__LinkDestination* q_poppler__linkgoto_destination(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
///
/// @param self Poppler__LinkGoto*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkgoto_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__LinkGoto*
/// @param callback int32_t func()
///
void q_poppler__linkgoto_on_link_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__linkgoto_super_link_type` instead
///
#define q_poppler__linkgoto_qbase_link_type q_poppler__linkgoto_super_link_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
///
/// Base class method implementation
///
/// @param self Poppler__LinkGoto*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkgoto_super_link_type(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
///
/// @param self Poppler__LinkGoto*
///
QRectF* q_poppler__linkgoto_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
///
/// @param self Poppler__LinkGoto*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linkgoto_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkGoto*
///
void q_poppler__linkgoto_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)

/// q_poppler__linkexecute_new constructs a new Poppler::LinkExecute object.
///
/// @param linkArea QRectF*
/// @param file const char*
/// @param params const char*
///
Poppler__LinkExecute* q_poppler__linkexecute_new(void* linkArea, const char* file, const char* params);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkExecute*
///
const char* q_poppler__linkexecute_file_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkExecute*
///
const char* q_poppler__linkexecute_parameters(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
///
/// @param self Poppler__LinkExecute*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkexecute_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__LinkExecute*
/// @param callback int32_t func()
///
void q_poppler__linkexecute_on_link_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__linkexecute_super_link_type` instead
///
#define q_poppler__linkexecute_qbase_link_type q_poppler__linkexecute_super_link_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
///
/// Base class method implementation
///
/// @param self Poppler__LinkExecute*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkexecute_super_link_type(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
///
/// @param self Poppler__LinkExecute*
///
QRectF* q_poppler__linkexecute_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
///
/// @param self Poppler__LinkExecute*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linkexecute_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkExecute*
///
void q_poppler__linkexecute_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)

/// q_poppler__linkbrowse_new constructs a new Poppler::LinkBrowse object.
///
/// @param linkArea QRectF*
/// @param url const char*
///
Poppler__LinkBrowse* q_poppler__linkbrowse_new(void* linkArea, const char* url);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkBrowse*
///
const char* q_poppler__linkbrowse_url(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
///
/// @param self Poppler__LinkBrowse*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkbrowse_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__LinkBrowse*
/// @param callback int32_t func()
///
void q_poppler__linkbrowse_on_link_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__linkbrowse_super_link_type` instead
///
#define q_poppler__linkbrowse_qbase_link_type q_poppler__linkbrowse_super_link_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
///
/// Base class method implementation
///
/// @param self Poppler__LinkBrowse*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkbrowse_super_link_type(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
///
/// @param self Poppler__LinkBrowse*
///
QRectF* q_poppler__linkbrowse_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
///
/// @param self Poppler__LinkBrowse*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linkbrowse_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkBrowse*
///
void q_poppler__linkbrowse_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)

/// q_poppler__linkaction_new constructs a new Poppler::LinkAction object.
///
/// @param linkArea QRectF*
/// @param actionType enum Poppler__LinkAction__ActionType
///
Poppler__LinkAction* q_poppler__linkaction_new(void* linkArea, int32_t actionType);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
///
/// @param self Poppler__LinkAction*
///
/// @return enum Poppler__LinkAction__ActionType
///
int32_t q_poppler__linkaction_action_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
///
/// @param self Poppler__LinkAction*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkaction_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__LinkAction*
/// @param callback int32_t func()
///
void q_poppler__linkaction_on_link_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__linkaction_super_link_type` instead
///
#define q_poppler__linkaction_qbase_link_type q_poppler__linkaction_super_link_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
///
/// Base class method implementation
///
/// @param self Poppler__LinkAction*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkaction_super_link_type(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
///
/// @param self Poppler__LinkAction*
///
QRectF* q_poppler__linkaction_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
///
/// @param self Poppler__LinkAction*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linkaction_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkAction*
///
void q_poppler__linkaction_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)

/// q_poppler__linksound_new constructs a new Poppler::LinkSound object.
///
/// @param linkArea QRectF*
/// @param volume double
/// @param sync bool
/// @param repeat bool
/// @param mix bool
/// @param sound Poppler__SoundObject*
///
Poppler__LinkSound* q_poppler__linksound_new(void* linkArea, double volume, bool sync, bool repeat, bool mix, void* sound);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// @param self Poppler__LinkSound*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linksound_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__LinkSound*
/// @param callback int32_t func()
///
void q_poppler__linksound_on_link_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__linksound_super_link_type` instead
///
#define q_poppler__linksound_qbase_link_type q_poppler__linksound_super_link_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// Base class method implementation
///
/// @param self Poppler__LinkSound*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linksound_super_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// @param self Poppler__LinkSound*
///
double q_poppler__linksound_volume(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// @param self Poppler__LinkSound*
///
bool q_poppler__linksound_synchronous(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// @param self Poppler__LinkSound*
///
bool q_poppler__linksound_repeat(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// @param self Poppler__LinkSound*
///
bool q_poppler__linksound_mix(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// @param self Poppler__LinkSound*
///
Poppler__SoundObject* q_poppler__linksound_sound(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// @param self Poppler__LinkSound*
///
QRectF* q_poppler__linksound_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// @param self Poppler__LinkSound*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linksound_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkSound*
///
void q_poppler__linksound_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
///
/// @param self Poppler__LinkRendition*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkrendition_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
///
/// @param self Poppler__LinkRendition*
///
Poppler__MediaRendition* q_poppler__linkrendition_rendition(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
///
/// @param self Poppler__LinkRendition*
///
/// @return enum Poppler__LinkRendition__RenditionAction
///
int32_t q_poppler__linkrendition_action(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkRendition*
///
const char* q_poppler__linkrendition_script(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
///
/// @param self Poppler__LinkRendition*
/// @param annotation Poppler__ScreenAnnotation*
///
bool q_poppler__linkrendition_is_referenced_annotation(void* self, void* annotation);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
///
/// @param self Poppler__LinkRendition*
///
QRectF* q_poppler__linkrendition_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
///
/// @param self Poppler__LinkRendition*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linkrendition_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkRendition*
///
void q_poppler__linkrendition_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)

/// q_poppler__linkjavascript_new constructs a new Poppler::LinkJavaScript object.
///
/// @param linkArea QRectF*
/// @param js const char*
///
Poppler__LinkJavaScript* q_poppler__linkjavascript_new(void* linkArea, const char* js);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
///
/// @param self Poppler__LinkJavaScript*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkjavascript_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__LinkJavaScript*
/// @param callback int32_t func()
///
void q_poppler__linkjavascript_on_link_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__linkjavascript_super_link_type` instead
///
#define q_poppler__linkjavascript_qbase_link_type q_poppler__linkjavascript_super_link_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
///
/// Base class method implementation
///
/// @param self Poppler__LinkJavaScript*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkjavascript_super_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkJavaScript*
///
const char* q_poppler__linkjavascript_script(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
///
/// @param self Poppler__LinkJavaScript*
///
QRectF* q_poppler__linkjavascript_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
///
/// @param self Poppler__LinkJavaScript*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linkjavascript_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkJavaScript*
///
void q_poppler__linkjavascript_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
///
/// @param self Poppler__LinkMovie*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkmovie_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
///
/// @param self Poppler__LinkMovie*
///
/// @return enum Poppler__LinkMovie__Operation
///
int32_t q_poppler__linkmovie_operation(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
///
/// @param self Poppler__LinkMovie*
/// @param annotation Poppler__MovieAnnotation*
///
bool q_poppler__linkmovie_is_referenced_annotation(void* self, void* annotation);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
///
/// @param self Poppler__LinkMovie*
///
QRectF* q_poppler__linkmovie_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
///
/// @param self Poppler__LinkMovie*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linkmovie_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkMovie*
///
void q_poppler__linkmovie_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
///
/// @param self Poppler__LinkOCGState*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkocgstate_link_type(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
///
/// @param self Poppler__LinkOCGState*
///
QRectF* q_poppler__linkocgstate_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
///
/// @param self Poppler__LinkOCGState*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linkocgstate_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkOCGState*
///
void q_poppler__linkocgstate_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
///
/// @param self Poppler__LinkHide*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkhide_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__LinkHide*
///
const char** q_poppler__linkhide_targets(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
///
/// @param self Poppler__LinkHide*
///
bool q_poppler__linkhide_is_show_action(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
///
/// @param self Poppler__LinkHide*
///
QRectF* q_poppler__linkhide_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
///
/// @param self Poppler__LinkHide*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linkhide_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkHide*
///
void q_poppler__linkhide_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
///
/// @param self Poppler__LinkResetForm*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linkresetform_link_type(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
///
/// @param self Poppler__LinkResetForm*
///
QRectF* q_poppler__linkresetform_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
///
/// @param self Poppler__LinkResetForm*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linkresetform_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkResetForm*
///
void q_poppler__linkresetform_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
///
/// @param self Poppler__LinkSubmitForm*
///
/// @return enum Poppler__Link__LinkType
///
int32_t q_poppler__linksubmitform_link_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
///
/// @param self Poppler__LinkSubmitForm*
///
/// @return libqt_list of int
///
libqt_list q_poppler__linksubmitform_get_field_ids(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkSubmitForm*
///
const char* q_poppler__linksubmitform_get_url(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
///
/// @param self Poppler__LinkSubmitForm*
///
/// @return flag of enum Poppler__LinkSubmitForm__SubmitFormFlag
///
int32_t q_poppler__linksubmitform_get_flags(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
///
/// @param self Poppler__LinkSubmitForm*
///
QRectF* q_poppler__linksubmitform_link_area(void* self);

/// Inherited from Poppler::Link
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
///
/// @param self Poppler__LinkSubmitForm*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__linksubmitform_next_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkSubmitForm*
///
void q_poppler__linksubmitform_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)

typedef enum {
    POPPLER_LINKDESTINATION_KIND_DESTXYZ = 1,
    POPPLER_LINKDESTINATION_KIND_DESTFIT = 2,
    POPPLER_LINKDESTINATION_KIND_DESTFITH = 3,
    POPPLER_LINKDESTINATION_KIND_DESTFITV = 4,
    POPPLER_LINKDESTINATION_KIND_DESTFITR = 5,
    POPPLER_LINKDESTINATION_KIND_DESTFITB = 6,
    POPPLER_LINKDESTINATION_KIND_DESTFITBH = 7,
    POPPLER_LINKDESTINATION_KIND_DESTFITBV = 8
} Poppler__LinkDestination__Kind;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)

typedef enum {
    POPPLER_LINK_LINKTYPE_NONE = 0,
    POPPLER_LINK_LINKTYPE_GOTO = 1,
    POPPLER_LINK_LINKTYPE_EXECUTE = 2,
    POPPLER_LINK_LINKTYPE_BROWSE = 3,
    POPPLER_LINK_LINKTYPE_ACTION = 4,
    POPPLER_LINK_LINKTYPE_SOUND = 5,
    POPPLER_LINK_LINKTYPE_MOVIE = 6,
    POPPLER_LINK_LINKTYPE_RENDITION = 7,
    POPPLER_LINK_LINKTYPE_JAVASCRIPT = 8,
    POPPLER_LINK_LINKTYPE_OCGSTATE = 9,
    POPPLER_LINK_LINKTYPE_HIDE = 10,
    POPPLER_LINK_LINKTYPE_RESETFORM = 11,
    POPPLER_LINK_LINKTYPE_SUBMITFORM = 12
} Poppler__Link__LinkType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)

typedef enum {
    POPPLER_LINKACTION_ACTIONTYPE_PAGEFIRST = 1,
    POPPLER_LINKACTION_ACTIONTYPE_PAGEPREV = 2,
    POPPLER_LINKACTION_ACTIONTYPE_PAGENEXT = 3,
    POPPLER_LINKACTION_ACTIONTYPE_PAGELAST = 4,
    POPPLER_LINKACTION_ACTIONTYPE_HISTORYBACK = 5,
    POPPLER_LINKACTION_ACTIONTYPE_HISTORYFORWARD = 6,
    POPPLER_LINKACTION_ACTIONTYPE_QUIT = 7,
    POPPLER_LINKACTION_ACTIONTYPE_PRESENTATION = 8,
    POPPLER_LINKACTION_ACTIONTYPE_ENDPRESENTATION = 9,
    POPPLER_LINKACTION_ACTIONTYPE_FIND = 10,
    POPPLER_LINKACTION_ACTIONTYPE_GOTOPAGE = 11,
    POPPLER_LINKACTION_ACTIONTYPE_CLOSE = 12,
    POPPLER_LINKACTION_ACTIONTYPE_PRINT = 13,
    POPPLER_LINKACTION_ACTIONTYPE_SAVEAS = 14
} Poppler__LinkAction__ActionType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)

typedef enum {
    POPPLER_LINKRENDITION_RENDITIONACTION_NORENDITION = 0,
    POPPLER_LINKRENDITION_RENDITIONACTION_PLAYRENDITION = 1,
    POPPLER_LINKRENDITION_RENDITIONACTION_STOPRENDITION = 2,
    POPPLER_LINKRENDITION_RENDITIONACTION_PAUSERENDITION = 3,
    POPPLER_LINKRENDITION_RENDITIONACTION_RESUMERENDITION = 4
} Poppler__LinkRendition__RenditionAction;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)

typedef enum {
    POPPLER_LINKMOVIE_OPERATION_PLAY = 0,
    POPPLER_LINKMOVIE_OPERATION_STOP = 1,
    POPPLER_LINKMOVIE_OPERATION_PAUSE = 2,
    POPPLER_LINKMOVIE_OPERATION_RESUME = 3
} Poppler__LinkMovie__Operation;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)

typedef enum {
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_NOOPFLAG = 0,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_EXCLUDEFLAG = 1,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_INCLUDENOVALUEFIELDSFLAG = 2,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_EXPORTFORMATFLAG = 4,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_GETMETHODFLAG = 8,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_SUBMITCOORDINATESFLAG = 16,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_XFDFFLAG = 32,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_INCLUDEAPPENDSAVESFLAG = 64,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_INCLUDEANNOTATIONSFLAG = 128,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_SUBMITPDFFLAG = 256,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_CANONICALFORMATFLAG = 512,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_EXCLNONUSERANNOTSFLAG = 1024,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_EXCLFKEYFLAG = 2048,
    POPPLER_LINKSUBMITFORM_SUBMITFORMFLAG_EMBEDFORMFLAG = 8192
} Poppler__LinkSubmitForm__SubmitFormFlag;

#endif
