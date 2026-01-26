#include "../libqcoreevent.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqplace.hpp"
#include "libqplacecategory.hpp"
#include "libqplacecontentreply.hpp"
#include "libqplacecontentrequest.hpp"
#include "libqplacedetailsreply.hpp"
#include "libqplaceicon.hpp"
#include "libqplaceidreply.hpp"
#include "libqplacemanager.hpp"
#include "libqplacematchreply.hpp"
#include "libqplacematchrequest.hpp"
#include "libqplacereply.hpp"
#include "libqplacesearchreply.hpp"
#include "libqplacesearchrequest.hpp"
#include "libqplacesearchsuggestionreply.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqplacemanagerengine.hpp"
#include "libqplacemanagerengine.h"

QPlaceManagerEngine* q_placemanagerengine_new(libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_placemanagerengine_new\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_placemanagerengine_new\n");
        abort();
    }
    const char** parameters_karr = (const char**)parameters.keys;
    libqt_string* parameters_kdest = (libqt_string*)parameters_ret.keys;
    QVariant** parameters_varr = (QVariant**)parameters.values;
    QVariant** parameters_vdest = (QVariant**)parameters_ret.values;
    for (size_t i = 0; i < parameters_ret.len; ++i) {
        parameters_kdest[i] = qstring(parameters_karr[i]);
        parameters_vdest[i] = parameters_varr[i];
    }

    QPlaceManagerEngine* _out = QPlaceManagerEngine_new(parameters_ret);
    free(parameters_ret.keys);
    free(parameters_ret.values);
    return _out;
}

QPlaceManagerEngine* q_placemanagerengine_new2(libqt_map /* of const char* to QVariant* */ parameters, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_placemanagerengine_new2\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_placemanagerengine_new2\n");
        abort();
    }
    const char** parameters_karr = (const char**)parameters.keys;
    libqt_string* parameters_kdest = (libqt_string*)parameters_ret.keys;
    QVariant** parameters_varr = (QVariant**)parameters.values;
    QVariant** parameters_vdest = (QVariant**)parameters_ret.values;
    for (size_t i = 0; i < parameters_ret.len; ++i) {
        parameters_kdest[i] = qstring(parameters_karr[i]);
        parameters_vdest[i] = parameters_varr[i];
    }

    QPlaceManagerEngine* _out = QPlaceManagerEngine_new2(parameters_ret, (QObject*)parent);
    free(parameters_ret.keys);
    free(parameters_ret.values);
    return _out;
}

const QMetaObject* q_placemanagerengine_meta_object(void* self) {
    return QPlaceManagerEngine_MetaObject((QPlaceManagerEngine*)self);
}

void q_placemanagerengine_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPlaceManagerEngine_OnMetaObject((QPlaceManagerEngine*)self, (intptr_t)callback);
}

const QMetaObject* q_placemanagerengine_qbase_meta_object(void* self) {
    return QPlaceManagerEngine_QBaseMetaObject((QPlaceManagerEngine*)self);
}

void* q_placemanagerengine_metacast(void* self, const char* param1) {
    return QPlaceManagerEngine_Metacast((QPlaceManagerEngine*)self, param1);
}

void q_placemanagerengine_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPlaceManagerEngine_OnMetacast((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void* q_placemanagerengine_qbase_metacast(void* self, const char* param1) {
    return QPlaceManagerEngine_QBaseMetacast((QPlaceManagerEngine*)self, param1);
}

int32_t q_placemanagerengine_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceManagerEngine_Metacall((QPlaceManagerEngine*)self, param1, param2, param3);
}

void q_placemanagerengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPlaceManagerEngine_OnMetacall((QPlaceManagerEngine*)self, (intptr_t)callback);
}

int32_t q_placemanagerengine_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceManagerEngine_QBaseMetacall((QPlaceManagerEngine*)self, param1, param2, param3);
}

const char* q_placemanagerengine_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placemanagerengine_manager_name(void* self) {
    libqt_string _str = QPlaceManagerEngine_ManagerName((QPlaceManagerEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placemanagerengine_manager_version(void* self) {
    return QPlaceManagerEngine_ManagerVersion((QPlaceManagerEngine*)self);
}

QPlaceDetailsReply* q_placemanagerengine_get_place_details(void* self, const char* placeId) {
    return QPlaceManagerEngine_GetPlaceDetails((QPlaceManagerEngine*)self, qstring(placeId));
}

void q_placemanagerengine_on_get_place_details(void* self, QPlaceDetailsReply* (*callback)(void*, const char*)) {
    QPlaceManagerEngine_OnGetPlaceDetails((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceDetailsReply* q_placemanagerengine_qbase_get_place_details(void* self, const char* placeId) {
    return QPlaceManagerEngine_QBaseGetPlaceDetails((QPlaceManagerEngine*)self, qstring(placeId));
}

QPlaceContentReply* q_placemanagerengine_get_place_content(void* self, void* request) {
    return QPlaceManagerEngine_GetPlaceContent((QPlaceManagerEngine*)self, (QPlaceContentRequest*)request);
}

void q_placemanagerengine_on_get_place_content(void* self, QPlaceContentReply* (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnGetPlaceContent((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceContentReply* q_placemanagerengine_qbase_get_place_content(void* self, void* request) {
    return QPlaceManagerEngine_QBaseGetPlaceContent((QPlaceManagerEngine*)self, (QPlaceContentRequest*)request);
}

QPlaceSearchReply* q_placemanagerengine_search(void* self, void* request) {
    return QPlaceManagerEngine_Search((QPlaceManagerEngine*)self, (QPlaceSearchRequest*)request);
}

void q_placemanagerengine_on_search(void* self, QPlaceSearchReply* (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnSearch((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceSearchReply* q_placemanagerengine_qbase_search(void* self, void* request) {
    return QPlaceManagerEngine_QBaseSearch((QPlaceManagerEngine*)self, (QPlaceSearchRequest*)request);
}

QPlaceSearchSuggestionReply* q_placemanagerengine_search_suggestions(void* self, void* request) {
    return QPlaceManagerEngine_SearchSuggestions((QPlaceManagerEngine*)self, (QPlaceSearchRequest*)request);
}

void q_placemanagerengine_on_search_suggestions(void* self, QPlaceSearchSuggestionReply* (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnSearchSuggestions((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceSearchSuggestionReply* q_placemanagerengine_qbase_search_suggestions(void* self, void* request) {
    return QPlaceManagerEngine_QBaseSearchSuggestions((QPlaceManagerEngine*)self, (QPlaceSearchRequest*)request);
}

QPlaceIdReply* q_placemanagerengine_save_place(void* self, void* place) {
    return QPlaceManagerEngine_SavePlace((QPlaceManagerEngine*)self, (QPlace*)place);
}

void q_placemanagerengine_on_save_place(void* self, QPlaceIdReply* (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnSavePlace((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceIdReply* q_placemanagerengine_qbase_save_place(void* self, void* place) {
    return QPlaceManagerEngine_QBaseSavePlace((QPlaceManagerEngine*)self, (QPlace*)place);
}

QPlaceIdReply* q_placemanagerengine_remove_place(void* self, const char* placeId) {
    return QPlaceManagerEngine_RemovePlace((QPlaceManagerEngine*)self, qstring(placeId));
}

void q_placemanagerengine_on_remove_place(void* self, QPlaceIdReply* (*callback)(void*, const char*)) {
    QPlaceManagerEngine_OnRemovePlace((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceIdReply* q_placemanagerengine_qbase_remove_place(void* self, const char* placeId) {
    return QPlaceManagerEngine_QBaseRemovePlace((QPlaceManagerEngine*)self, qstring(placeId));
}

QPlaceIdReply* q_placemanagerengine_save_category(void* self, void* category, const char* parentId) {
    return QPlaceManagerEngine_SaveCategory((QPlaceManagerEngine*)self, (QPlaceCategory*)category, qstring(parentId));
}

void q_placemanagerengine_on_save_category(void* self, QPlaceIdReply* (*callback)(void*, void*, const char*)) {
    QPlaceManagerEngine_OnSaveCategory((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceIdReply* q_placemanagerengine_qbase_save_category(void* self, void* category, const char* parentId) {
    return QPlaceManagerEngine_QBaseSaveCategory((QPlaceManagerEngine*)self, (QPlaceCategory*)category, qstring(parentId));
}

QPlaceIdReply* q_placemanagerengine_remove_category(void* self, const char* categoryId) {
    return QPlaceManagerEngine_RemoveCategory((QPlaceManagerEngine*)self, qstring(categoryId));
}

void q_placemanagerengine_on_remove_category(void* self, QPlaceIdReply* (*callback)(void*, const char*)) {
    QPlaceManagerEngine_OnRemoveCategory((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceIdReply* q_placemanagerengine_qbase_remove_category(void* self, const char* categoryId) {
    return QPlaceManagerEngine_QBaseRemoveCategory((QPlaceManagerEngine*)self, qstring(categoryId));
}

QPlaceReply* q_placemanagerengine_initialize_categories(void* self) {
    return QPlaceManagerEngine_InitializeCategories((QPlaceManagerEngine*)self);
}

void q_placemanagerengine_on_initialize_categories(void* self, QPlaceReply* (*callback)()) {
    QPlaceManagerEngine_OnInitializeCategories((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceReply* q_placemanagerengine_qbase_initialize_categories(void* self) {
    return QPlaceManagerEngine_QBaseInitializeCategories((QPlaceManagerEngine*)self);
}

const char* q_placemanagerengine_parent_category_id(void* self, const char* categoryId) {
    libqt_string _str = QPlaceManagerEngine_ParentCategoryId((QPlaceManagerEngine*)self, qstring(categoryId));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placemanagerengine_on_parent_category_id(void* self, const char* (*callback)(void*, const char*)) {
    QPlaceManagerEngine_OnParentCategoryId((QPlaceManagerEngine*)self, (intptr_t)callback);
}

const char* q_placemanagerengine_qbase_parent_category_id(void* self, const char* categoryId) {
    libqt_string _str = QPlaceManagerEngine_QBaseParentCategoryId((QPlaceManagerEngine*)self, qstring(categoryId));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_placemanagerengine_child_category_ids(void* self, const char* categoryId) {
    libqt_list _arr = QPlaceManagerEngine_ChildCategoryIds((QPlaceManagerEngine*)self, qstring(categoryId));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placemanagerengine_child_category_ids\n");
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

void q_placemanagerengine_on_child_category_ids(void* self, const char** (*callback)(void*, const char*)) {
    QPlaceManagerEngine_OnChildCategoryIds((QPlaceManagerEngine*)self, (intptr_t)callback);
}

const char** q_placemanagerengine_qbase_child_category_ids(void* self, const char* categoryId) {
    libqt_list _arr = QPlaceManagerEngine_QBaseChildCategoryIds((QPlaceManagerEngine*)self, qstring(categoryId));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placemanagerengine_child_category_ids\n");
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

QPlaceCategory* q_placemanagerengine_category(void* self, const char* categoryId) {
    return QPlaceManagerEngine_Category((QPlaceManagerEngine*)self, qstring(categoryId));
}

void q_placemanagerengine_on_category(void* self, QPlaceCategory* (*callback)(void*, const char*)) {
    QPlaceManagerEngine_OnCategory((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceCategory* q_placemanagerengine_qbase_category(void* self, const char* categoryId) {
    return QPlaceManagerEngine_QBaseCategory((QPlaceManagerEngine*)self, qstring(categoryId));
}

libqt_list /* of QPlaceCategory* */ q_placemanagerengine_child_categories(void* self, const char* parentId) {
    libqt_list _arr = QPlaceManagerEngine_ChildCategories((QPlaceManagerEngine*)self, qstring(parentId));
    return _arr;
}

void q_placemanagerengine_on_child_categories(void* self, QPlaceCategory** (*callback)(void*, const char*)) {
    QPlaceManagerEngine_OnChildCategories((QPlaceManagerEngine*)self, (intptr_t)callback);
}

libqt_list /* of QPlaceCategory* */ q_placemanagerengine_qbase_child_categories(void* self, const char* parentId) {
    libqt_list _arr = QPlaceManagerEngine_QBaseChildCategories((QPlaceManagerEngine*)self, qstring(parentId));
    return _arr;
}

libqt_list /* of QLocale* */ q_placemanagerengine_locales(void* self) {
    libqt_list _arr = QPlaceManagerEngine_Locales((QPlaceManagerEngine*)self);
    return _arr;
}

void q_placemanagerengine_on_locales(void* self, QLocale** (*callback)()) {
    QPlaceManagerEngine_OnLocales((QPlaceManagerEngine*)self, (intptr_t)callback);
}

libqt_list /* of QLocale* */ q_placemanagerengine_qbase_locales(void* self) {
    libqt_list _arr = QPlaceManagerEngine_QBaseLocales((QPlaceManagerEngine*)self);
    return _arr;
}

void q_placemanagerengine_set_locales(void* self, libqt_list /* of QLocale* */ locales) {
    QPlaceManagerEngine_SetLocales((QPlaceManagerEngine*)self, locales);
}

void q_placemanagerengine_on_set_locales(void* self, void (*callback)(void*, QLocale**)) {
    QPlaceManagerEngine_OnSetLocales((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_qbase_set_locales(void* self, libqt_list /* of QLocale* */ locales) {
    QPlaceManagerEngine_QBaseSetLocales((QPlaceManagerEngine*)self, locales);
}

QUrl* q_placemanagerengine_construct_icon_url(void* self, void* icon, void* size) {
    return QPlaceManagerEngine_ConstructIconUrl((QPlaceManagerEngine*)self, (QPlaceIcon*)icon, (QSize*)size);
}

void q_placemanagerengine_on_construct_icon_url(void* self, QUrl* (*callback)(void*, void*, void*)) {
    QPlaceManagerEngine_OnConstructIconUrl((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QUrl* q_placemanagerengine_qbase_construct_icon_url(void* self, void* icon, void* size) {
    return QPlaceManagerEngine_QBaseConstructIconUrl((QPlaceManagerEngine*)self, (QPlaceIcon*)icon, (QSize*)size);
}

QPlace* q_placemanagerengine_compatible_place(void* self, void* original) {
    return QPlaceManagerEngine_CompatiblePlace((QPlaceManagerEngine*)self, (QPlace*)original);
}

void q_placemanagerengine_on_compatible_place(void* self, QPlace* (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnCompatiblePlace((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlace* q_placemanagerengine_qbase_compatible_place(void* self, void* original) {
    return QPlaceManagerEngine_QBaseCompatiblePlace((QPlaceManagerEngine*)self, (QPlace*)original);
}

QPlaceMatchReply* q_placemanagerengine_matching_places(void* self, void* request) {
    return QPlaceManagerEngine_MatchingPlaces((QPlaceManagerEngine*)self, (QPlaceMatchRequest*)request);
}

void q_placemanagerengine_on_matching_places(void* self, QPlaceMatchReply* (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnMatchingPlaces((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceMatchReply* q_placemanagerengine_qbase_matching_places(void* self, void* request) {
    return QPlaceManagerEngine_QBaseMatchingPlaces((QPlaceManagerEngine*)self, (QPlaceMatchRequest*)request);
}

void q_placemanagerengine_finished(void* self, void* reply) {
    QPlaceManagerEngine_Finished((QPlaceManagerEngine*)self, (QPlaceReply*)reply);
}

void q_placemanagerengine_on_finished(void* self, void (*callback)(void*, void*)) {
    QPlaceManagerEngine_Connect_Finished((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_error_occurred(void* self, void* param1, int32_t error) {
    QPlaceManagerEngine_ErrorOccurred((QPlaceManagerEngine*)self, (QPlaceReply*)param1, error);
}

void q_placemanagerengine_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t)) {
    QPlaceManagerEngine_Connect_ErrorOccurred((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_place_added(void* self, const char* placeId) {
    QPlaceManagerEngine_PlaceAdded((QPlaceManagerEngine*)self, qstring(placeId));
}

void q_placemanagerengine_on_place_added(void* self, void (*callback)(void*, const char*)) {
    QPlaceManagerEngine_Connect_PlaceAdded((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_place_updated(void* self, const char* placeId) {
    QPlaceManagerEngine_PlaceUpdated((QPlaceManagerEngine*)self, qstring(placeId));
}

void q_placemanagerengine_on_place_updated(void* self, void (*callback)(void*, const char*)) {
    QPlaceManagerEngine_Connect_PlaceUpdated((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_place_removed(void* self, const char* placeId) {
    QPlaceManagerEngine_PlaceRemoved((QPlaceManagerEngine*)self, qstring(placeId));
}

void q_placemanagerengine_on_place_removed(void* self, void (*callback)(void*, const char*)) {
    QPlaceManagerEngine_Connect_PlaceRemoved((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_category_added(void* self, void* category, const char* parentCategoryId) {
    QPlaceManagerEngine_CategoryAdded((QPlaceManagerEngine*)self, (QPlaceCategory*)category, qstring(parentCategoryId));
}

void q_placemanagerengine_on_category_added(void* self, void (*callback)(void*, void*, const char*)) {
    QPlaceManagerEngine_Connect_CategoryAdded((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_category_updated(void* self, void* category, const char* parentCategoryId) {
    QPlaceManagerEngine_CategoryUpdated((QPlaceManagerEngine*)self, (QPlaceCategory*)category, qstring(parentCategoryId));
}

void q_placemanagerengine_on_category_updated(void* self, void (*callback)(void*, void*, const char*)) {
    QPlaceManagerEngine_Connect_CategoryUpdated((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_category_removed(void* self, const char* categoryId, const char* parentCategoryId) {
    QPlaceManagerEngine_CategoryRemoved((QPlaceManagerEngine*)self, qstring(categoryId), qstring(parentCategoryId));
}

void q_placemanagerengine_on_category_removed(void* self, void (*callback)(void*, const char*, const char*)) {
    QPlaceManagerEngine_Connect_CategoryRemoved((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_data_changed(void* self) {
    QPlaceManagerEngine_DataChanged((QPlaceManagerEngine*)self);
}

void q_placemanagerengine_on_data_changed(void* self, void (*callback)(void*)) {
    QPlaceManagerEngine_Connect_DataChanged((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceManager* q_placemanagerengine_manager(void* self) {
    return QPlaceManagerEngine_Manager((QPlaceManagerEngine*)self);
}

void q_placemanagerengine_on_manager(void* self, QPlaceManager* (*callback)()) {
    QPlaceManagerEngine_OnManager((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QPlaceManager* q_placemanagerengine_qbase_manager(void* self) {
    return QPlaceManagerEngine_QBaseManager((QPlaceManagerEngine*)self);
}

const char* q_placemanagerengine_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placemanagerengine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placemanagerengine_error_occurred3(void* self, void* param1, int32_t error, const char* errorString) {
    QPlaceManagerEngine_ErrorOccurred3((QPlaceManagerEngine*)self, (QPlaceReply*)param1, error, qstring(errorString));
}

void q_placemanagerengine_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*)) {
    QPlaceManagerEngine_Connect_ErrorOccurred3((QPlaceManagerEngine*)self, (intptr_t)callback);
}

const char* q_placemanagerengine_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placemanagerengine_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_placemanagerengine_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_placemanagerengine_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_placemanagerengine_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_placemanagerengine_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_placemanagerengine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_placemanagerengine_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_placemanagerengine_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_placemanagerengine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_placemanagerengine_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_placemanagerengine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_placemanagerengine_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_placemanagerengine_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_placemanagerengine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_placemanagerengine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_placemanagerengine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_placemanagerengine_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_placemanagerengine_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_placemanagerengine_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_placemanagerengine_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_placemanagerengine_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_placemanagerengine_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_placemanagerengine_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_placemanagerengine_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_placemanagerengine_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placemanagerengine_dynamic_property_names\n");
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

QBindingStorage* q_placemanagerengine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_placemanagerengine_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_placemanagerengine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_placemanagerengine_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_placemanagerengine_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_placemanagerengine_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_placemanagerengine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_placemanagerengine_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_placemanagerengine_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_placemanagerengine_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_placemanagerengine_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_placemanagerengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_placemanagerengine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_placemanagerengine_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_placemanagerengine_event(void* self, void* event) {
    return QPlaceManagerEngine_Event((QPlaceManagerEngine*)self, (QEvent*)event);
}

bool q_placemanagerengine_qbase_event(void* self, void* event) {
    return QPlaceManagerEngine_QBaseEvent((QPlaceManagerEngine*)self, (QEvent*)event);
}

void q_placemanagerengine_on_event(void* self, bool (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnEvent((QPlaceManagerEngine*)self, (intptr_t)callback);
}

bool q_placemanagerengine_event_filter(void* self, void* watched, void* event) {
    return QPlaceManagerEngine_EventFilter((QPlaceManagerEngine*)self, (QObject*)watched, (QEvent*)event);
}

bool q_placemanagerengine_qbase_event_filter(void* self, void* watched, void* event) {
    return QPlaceManagerEngine_QBaseEventFilter((QPlaceManagerEngine*)self, (QObject*)watched, (QEvent*)event);
}

void q_placemanagerengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPlaceManagerEngine_OnEventFilter((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_timer_event(void* self, void* event) {
    QPlaceManagerEngine_TimerEvent((QPlaceManagerEngine*)self, (QTimerEvent*)event);
}

void q_placemanagerengine_qbase_timer_event(void* self, void* event) {
    QPlaceManagerEngine_QBaseTimerEvent((QPlaceManagerEngine*)self, (QTimerEvent*)event);
}

void q_placemanagerengine_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnTimerEvent((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_child_event(void* self, void* event) {
    QPlaceManagerEngine_ChildEvent((QPlaceManagerEngine*)self, (QChildEvent*)event);
}

void q_placemanagerengine_qbase_child_event(void* self, void* event) {
    QPlaceManagerEngine_QBaseChildEvent((QPlaceManagerEngine*)self, (QChildEvent*)event);
}

void q_placemanagerengine_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnChildEvent((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_custom_event(void* self, void* event) {
    QPlaceManagerEngine_CustomEvent((QPlaceManagerEngine*)self, (QEvent*)event);
}

void q_placemanagerengine_qbase_custom_event(void* self, void* event) {
    QPlaceManagerEngine_QBaseCustomEvent((QPlaceManagerEngine*)self, (QEvent*)event);
}

void q_placemanagerengine_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnCustomEvent((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_connect_notify(void* self, void* signal) {
    QPlaceManagerEngine_ConnectNotify((QPlaceManagerEngine*)self, (QMetaMethod*)signal);
}

void q_placemanagerengine_qbase_connect_notify(void* self, void* signal) {
    QPlaceManagerEngine_QBaseConnectNotify((QPlaceManagerEngine*)self, (QMetaMethod*)signal);
}

void q_placemanagerengine_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnConnectNotify((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_disconnect_notify(void* self, void* signal) {
    QPlaceManagerEngine_DisconnectNotify((QPlaceManagerEngine*)self, (QMetaMethod*)signal);
}

void q_placemanagerengine_qbase_disconnect_notify(void* self, void* signal) {
    QPlaceManagerEngine_QBaseDisconnectNotify((QPlaceManagerEngine*)self, (QMetaMethod*)signal);
}

void q_placemanagerengine_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnDisconnectNotify((QPlaceManagerEngine*)self, (intptr_t)callback);
}

QObject* q_placemanagerengine_sender(void* self) {
    return QPlaceManagerEngine_Sender((QPlaceManagerEngine*)self);
}

QObject* q_placemanagerengine_qbase_sender(void* self) {
    return QPlaceManagerEngine_QBaseSender((QPlaceManagerEngine*)self);
}

void q_placemanagerengine_on_sender(void* self, QObject* (*callback)()) {
    QPlaceManagerEngine_OnSender((QPlaceManagerEngine*)self, (intptr_t)callback);
}

int32_t q_placemanagerengine_sender_signal_index(void* self) {
    return QPlaceManagerEngine_SenderSignalIndex((QPlaceManagerEngine*)self);
}

int32_t q_placemanagerengine_qbase_sender_signal_index(void* self) {
    return QPlaceManagerEngine_QBaseSenderSignalIndex((QPlaceManagerEngine*)self);
}

void q_placemanagerengine_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPlaceManagerEngine_OnSenderSignalIndex((QPlaceManagerEngine*)self, (intptr_t)callback);
}

int32_t q_placemanagerengine_receivers(void* self, const char* signal) {
    return QPlaceManagerEngine_Receivers((QPlaceManagerEngine*)self, signal);
}

int32_t q_placemanagerengine_qbase_receivers(void* self, const char* signal) {
    return QPlaceManagerEngine_QBaseReceivers((QPlaceManagerEngine*)self, signal);
}

void q_placemanagerengine_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPlaceManagerEngine_OnReceivers((QPlaceManagerEngine*)self, (intptr_t)callback);
}

bool q_placemanagerengine_is_signal_connected(void* self, void* signal) {
    return QPlaceManagerEngine_IsSignalConnected((QPlaceManagerEngine*)self, (QMetaMethod*)signal);
}

bool q_placemanagerengine_qbase_is_signal_connected(void* self, void* signal) {
    return QPlaceManagerEngine_QBaseIsSignalConnected((QPlaceManagerEngine*)self, (QMetaMethod*)signal);
}

void q_placemanagerengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPlaceManagerEngine_OnIsSignalConnected((QPlaceManagerEngine*)self, (intptr_t)callback);
}

void q_placemanagerengine_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_placemanagerengine_delete(void* self) {
    QPlaceManagerEngine_Delete((QPlaceManagerEngine*)(self));
}
