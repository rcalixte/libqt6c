#include "libpoppler_media.hpp"
#include "libpoppler_annotation.hpp"
#include "libpoppler_qt6.hpp"
#include "../libqrect.hpp"
#include "libpoppler_link.hpp"
#include "libpoppler_link.h"

Poppler__LinkDestination* q_poppler__linkdestination_new(const char* description) {
    return Poppler__LinkDestination_new(qstring(description));
}

Poppler__LinkDestination* q_poppler__linkdestination_new2(void* other) {
    return Poppler__LinkDestination_new2((Poppler__LinkDestination*)other);
}

int32_t q_poppler__linkdestination_kind(void* self) {
    return Poppler__LinkDestination_Kind((Poppler__LinkDestination*)self);
}

int32_t q_poppler__linkdestination_page_number(void* self) {
    return Poppler__LinkDestination_PageNumber((Poppler__LinkDestination*)self);
}

double q_poppler__linkdestination_left(void* self) {
    return Poppler__LinkDestination_Left((Poppler__LinkDestination*)self);
}

double q_poppler__linkdestination_bottom(void* self) {
    return Poppler__LinkDestination_Bottom((Poppler__LinkDestination*)self);
}

double q_poppler__linkdestination_right(void* self) {
    return Poppler__LinkDestination_Right((Poppler__LinkDestination*)self);
}

double q_poppler__linkdestination_top(void* self) {
    return Poppler__LinkDestination_Top((Poppler__LinkDestination*)self);
}

double q_poppler__linkdestination_zoom(void* self) {
    return Poppler__LinkDestination_Zoom((Poppler__LinkDestination*)self);
}

bool q_poppler__linkdestination_is_change_left(void* self) {
    return Poppler__LinkDestination_IsChangeLeft((Poppler__LinkDestination*)self);
}

bool q_poppler__linkdestination_is_change_top(void* self) {
    return Poppler__LinkDestination_IsChangeTop((Poppler__LinkDestination*)self);
}

bool q_poppler__linkdestination_is_change_zoom(void* self) {
    return Poppler__LinkDestination_IsChangeZoom((Poppler__LinkDestination*)self);
}

const char* q_poppler__linkdestination_to_string(void* self) {
    libqt_string _str = Poppler__LinkDestination_ToString((Poppler__LinkDestination*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__linkdestination_destination_name(void* self) {
    libqt_string _str = Poppler__LinkDestination_DestinationName((Poppler__LinkDestination*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__linkdestination_operator_assign(void* self, void* other) {
    Poppler__LinkDestination_OperatorAssign((Poppler__LinkDestination*)self, (Poppler__LinkDestination*)other);
}

void q_poppler__linkdestination_delete(void* self) {
    Poppler__LinkDestination_Delete((Poppler__LinkDestination*)(self));
}

Poppler__Link* q_poppler__link_new(void* linkArea) {
    return Poppler__Link_new((QRectF*)linkArea);
}

int32_t q_poppler__link_link_type(void* self) {
    return Poppler__Link_LinkType((Poppler__Link*)self);
}

void q_poppler__link_on_link_type(void* self, int32_t (*callback)()) {
    Poppler__Link_OnLinkType((Poppler__Link*)self, (intptr_t)callback);
}

int32_t q_poppler__link_super_link_type(void* self) {
    return Poppler__Link_SuperLinkType((Poppler__Link*)self);
}

QRectF* q_poppler__link_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__link_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__link_delete(void* self) {
    Poppler__Link_Delete((Poppler__Link*)(self));
}

Poppler__LinkGoto* q_poppler__linkgoto_new(void* linkArea, const char* extFileName, void* destination) {
    return Poppler__LinkGoto_new((QRectF*)linkArea, qstring(extFileName), (Poppler__LinkDestination*)destination);
}

bool q_poppler__linkgoto_is_external(void* self) {
    return Poppler__LinkGoto_IsExternal((Poppler__LinkGoto*)self);
}

const char* q_poppler__linkgoto_file_name(void* self) {
    libqt_string _str = Poppler__LinkGoto_FileName((Poppler__LinkGoto*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Poppler__LinkDestination* q_poppler__linkgoto_destination(void* self) {
    return Poppler__LinkGoto_Destination((Poppler__LinkGoto*)self);
}

int32_t q_poppler__linkgoto_link_type(void* self) {
    return Poppler__LinkGoto_LinkType((Poppler__LinkGoto*)self);
}

void q_poppler__linkgoto_on_link_type(void* self, int32_t (*callback)()) {
    Poppler__LinkGoto_OnLinkType((Poppler__LinkGoto*)self, (intptr_t)callback);
}

int32_t q_poppler__linkgoto_super_link_type(void* self) {
    return Poppler__LinkGoto_SuperLinkType((Poppler__LinkGoto*)self);
}

QRectF* q_poppler__linkgoto_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linkgoto_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linkgoto_delete(void* self) {
    Poppler__LinkGoto_Delete((Poppler__LinkGoto*)(self));
}

Poppler__LinkExecute* q_poppler__linkexecute_new(void* linkArea, const char* file, const char* params) {
    return Poppler__LinkExecute_new((QRectF*)linkArea, qstring(file), qstring(params));
}

const char* q_poppler__linkexecute_file_name(void* self) {
    libqt_string _str = Poppler__LinkExecute_FileName((Poppler__LinkExecute*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__linkexecute_parameters(void* self) {
    libqt_string _str = Poppler__LinkExecute_Parameters((Poppler__LinkExecute*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_poppler__linkexecute_link_type(void* self) {
    return Poppler__LinkExecute_LinkType((Poppler__LinkExecute*)self);
}

void q_poppler__linkexecute_on_link_type(void* self, int32_t (*callback)()) {
    Poppler__LinkExecute_OnLinkType((Poppler__LinkExecute*)self, (intptr_t)callback);
}

int32_t q_poppler__linkexecute_super_link_type(void* self) {
    return Poppler__LinkExecute_SuperLinkType((Poppler__LinkExecute*)self);
}

QRectF* q_poppler__linkexecute_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linkexecute_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linkexecute_delete(void* self) {
    Poppler__LinkExecute_Delete((Poppler__LinkExecute*)(self));
}

Poppler__LinkBrowse* q_poppler__linkbrowse_new(void* linkArea, const char* url) {
    return Poppler__LinkBrowse_new((QRectF*)linkArea, qstring(url));
}

const char* q_poppler__linkbrowse_url(void* self) {
    libqt_string _str = Poppler__LinkBrowse_Url((Poppler__LinkBrowse*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_poppler__linkbrowse_link_type(void* self) {
    return Poppler__LinkBrowse_LinkType((Poppler__LinkBrowse*)self);
}

void q_poppler__linkbrowse_on_link_type(void* self, int32_t (*callback)()) {
    Poppler__LinkBrowse_OnLinkType((Poppler__LinkBrowse*)self, (intptr_t)callback);
}

int32_t q_poppler__linkbrowse_super_link_type(void* self) {
    return Poppler__LinkBrowse_SuperLinkType((Poppler__LinkBrowse*)self);
}

QRectF* q_poppler__linkbrowse_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linkbrowse_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linkbrowse_delete(void* self) {
    Poppler__LinkBrowse_Delete((Poppler__LinkBrowse*)(self));
}

Poppler__LinkAction* q_poppler__linkaction_new(void* linkArea, int32_t actionType) {
    return Poppler__LinkAction_new((QRectF*)linkArea, actionType);
}

int32_t q_poppler__linkaction_action_type(void* self) {
    return Poppler__LinkAction_ActionType((Poppler__LinkAction*)self);
}

int32_t q_poppler__linkaction_link_type(void* self) {
    return Poppler__LinkAction_LinkType((Poppler__LinkAction*)self);
}

void q_poppler__linkaction_on_link_type(void* self, int32_t (*callback)()) {
    Poppler__LinkAction_OnLinkType((Poppler__LinkAction*)self, (intptr_t)callback);
}

int32_t q_poppler__linkaction_super_link_type(void* self) {
    return Poppler__LinkAction_SuperLinkType((Poppler__LinkAction*)self);
}

QRectF* q_poppler__linkaction_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linkaction_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linkaction_delete(void* self) {
    Poppler__LinkAction_Delete((Poppler__LinkAction*)(self));
}

Poppler__LinkSound* q_poppler__linksound_new(void* linkArea, double volume, bool sync, bool repeat, bool mix, void* sound) {
    return Poppler__LinkSound_new((QRectF*)linkArea, volume, sync, repeat, mix, (Poppler__SoundObject*)sound);
}

int32_t q_poppler__linksound_link_type(void* self) {
    return Poppler__LinkSound_LinkType((Poppler__LinkSound*)self);
}

void q_poppler__linksound_on_link_type(void* self, int32_t (*callback)()) {
    Poppler__LinkSound_OnLinkType((Poppler__LinkSound*)self, (intptr_t)callback);
}

int32_t q_poppler__linksound_super_link_type(void* self) {
    return Poppler__LinkSound_SuperLinkType((Poppler__LinkSound*)self);
}

double q_poppler__linksound_volume(void* self) {
    return Poppler__LinkSound_Volume((Poppler__LinkSound*)self);
}

bool q_poppler__linksound_synchronous(void* self) {
    return Poppler__LinkSound_Synchronous((Poppler__LinkSound*)self);
}

bool q_poppler__linksound_repeat(void* self) {
    return Poppler__LinkSound_Repeat((Poppler__LinkSound*)self);
}

bool q_poppler__linksound_mix(void* self) {
    return Poppler__LinkSound_Mix((Poppler__LinkSound*)self);
}

Poppler__SoundObject* q_poppler__linksound_sound(void* self) {
    return Poppler__LinkSound_Sound((Poppler__LinkSound*)self);
}

QRectF* q_poppler__linksound_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linksound_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linksound_delete(void* self) {
    Poppler__LinkSound_Delete((Poppler__LinkSound*)(self));
}

int32_t q_poppler__linkrendition_link_type(void* self) {
    return Poppler__LinkRendition_LinkType((Poppler__LinkRendition*)self);
}

Poppler__MediaRendition* q_poppler__linkrendition_rendition(void* self) {
    return Poppler__LinkRendition_Rendition((Poppler__LinkRendition*)self);
}

int32_t q_poppler__linkrendition_action(void* self) {
    return Poppler__LinkRendition_Action((Poppler__LinkRendition*)self);
}

const char* q_poppler__linkrendition_script(void* self) {
    libqt_string _str = Poppler__LinkRendition_Script((Poppler__LinkRendition*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__linkrendition_is_referenced_annotation(void* self, void* annotation) {
    return Poppler__LinkRendition_IsReferencedAnnotation((Poppler__LinkRendition*)self, (Poppler__ScreenAnnotation*)annotation);
}

QRectF* q_poppler__linkrendition_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linkrendition_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linkrendition_delete(void* self) {
    Poppler__LinkRendition_Delete((Poppler__LinkRendition*)(self));
}

Poppler__LinkJavaScript* q_poppler__linkjavascript_new(void* linkArea, const char* js) {
    return Poppler__LinkJavaScript_new((QRectF*)linkArea, qstring(js));
}

int32_t q_poppler__linkjavascript_link_type(void* self) {
    return Poppler__LinkJavaScript_LinkType((Poppler__LinkJavaScript*)self);
}

void q_poppler__linkjavascript_on_link_type(void* self, int32_t (*callback)()) {
    Poppler__LinkJavaScript_OnLinkType((Poppler__LinkJavaScript*)self, (intptr_t)callback);
}

int32_t q_poppler__linkjavascript_super_link_type(void* self) {
    return Poppler__LinkJavaScript_SuperLinkType((Poppler__LinkJavaScript*)self);
}

const char* q_poppler__linkjavascript_script(void* self) {
    libqt_string _str = Poppler__LinkJavaScript_Script((Poppler__LinkJavaScript*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_poppler__linkjavascript_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linkjavascript_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linkjavascript_delete(void* self) {
    Poppler__LinkJavaScript_Delete((Poppler__LinkJavaScript*)(self));
}

int32_t q_poppler__linkmovie_link_type(void* self) {
    return Poppler__LinkMovie_LinkType((Poppler__LinkMovie*)self);
}

int32_t q_poppler__linkmovie_operation(void* self) {
    return Poppler__LinkMovie_Operation((Poppler__LinkMovie*)self);
}

bool q_poppler__linkmovie_is_referenced_annotation(void* self, void* annotation) {
    return Poppler__LinkMovie_IsReferencedAnnotation((Poppler__LinkMovie*)self, (Poppler__MovieAnnotation*)annotation);
}

QRectF* q_poppler__linkmovie_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linkmovie_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linkmovie_delete(void* self) {
    Poppler__LinkMovie_Delete((Poppler__LinkMovie*)(self));
}

int32_t q_poppler__linkocgstate_link_type(void* self) {
    return Poppler__LinkOCGState_LinkType((Poppler__LinkOCGState*)self);
}

QRectF* q_poppler__linkocgstate_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linkocgstate_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linkocgstate_delete(void* self) {
    Poppler__LinkOCGState_Delete((Poppler__LinkOCGState*)(self));
}

int32_t q_poppler__linkhide_link_type(void* self) {
    return Poppler__LinkHide_LinkType((Poppler__LinkHide*)self);
}

const char** q_poppler__linkhide_targets(void* self) {
    libqt_list _arr = Poppler__LinkHide_Targets((Poppler__LinkHide*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_poppler__linkhide_targets\n");
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

bool q_poppler__linkhide_is_show_action(void* self) {
    return Poppler__LinkHide_IsShowAction((Poppler__LinkHide*)self);
}

QRectF* q_poppler__linkhide_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linkhide_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linkhide_delete(void* self) {
    Poppler__LinkHide_Delete((Poppler__LinkHide*)(self));
}

int32_t q_poppler__linkresetform_link_type(void* self) {
    return Poppler__LinkResetForm_LinkType((Poppler__LinkResetForm*)self);
}

QRectF* q_poppler__linkresetform_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linkresetform_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linkresetform_delete(void* self) {
    Poppler__LinkResetForm_Delete((Poppler__LinkResetForm*)(self));
}

int32_t q_poppler__linksubmitform_link_type(void* self) {
    return Poppler__LinkSubmitForm_LinkType((Poppler__LinkSubmitForm*)self);
}

libqt_list /* of int */ q_poppler__linksubmitform_get_field_ids(void* self) {
    libqt_list _arr = Poppler__LinkSubmitForm_GetFieldIds((Poppler__LinkSubmitForm*)self);
    return _arr;
}

const char* q_poppler__linksubmitform_get_url(void* self) {
    libqt_string _str = Poppler__LinkSubmitForm_GetUrl((Poppler__LinkSubmitForm*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_poppler__linksubmitform_get_flags(void* self) {
    return Poppler__LinkSubmitForm_GetFlags((Poppler__LinkSubmitForm*)self);
}

QRectF* q_poppler__linksubmitform_link_area(void* self) {
    return Poppler__Link_LinkArea((Poppler__Link*)self);
}

libqt_list /* of Poppler__Link* */ q_poppler__linksubmitform_next_links(void* self) {
    libqt_list _arr = Poppler__Link_NextLinks((Poppler__Link*)self);
    return _arr;
}

void q_poppler__linksubmitform_delete(void* self) {
    Poppler__LinkSubmitForm_Delete((Poppler__LinkSubmitForm*)(self));
}
