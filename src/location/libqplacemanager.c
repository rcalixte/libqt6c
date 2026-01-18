#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqplace.hpp"
#include "libqplacecategory.hpp"
#include "libqplacecontentreply.hpp"
#include "libqplacecontentrequest.hpp"
#include "libqplacedetailsreply.hpp"
#include "libqplaceidreply.hpp"
#include "libqplacematchreply.hpp"
#include "libqplacematchrequest.hpp"
#include "libqplacereply.hpp"
#include "libqplacesearchreply.hpp"
#include "libqplacesearchrequest.hpp"
#include "libqplacesearchsuggestionreply.hpp"
#include "libqplacemanager.hpp"
#include "libqplacemanager.h"

const QMetaObject* q_placemanager_meta_object(void* self) {
    return QPlaceManager_MetaObject((QPlaceManager*)self);
}

void* q_placemanager_metacast(void* self, const char* param1) {
    return QPlaceManager_Metacast((QPlaceManager*)self, param1);
}

int32_t q_placemanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPlaceManager_Metacall((QPlaceManager*)self, param1, param2, param3);
}

const char* q_placemanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placemanager_manager_name(void* self) {
    libqt_string _str = QPlaceManager_ManagerName((QPlaceManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_placemanager_manager_version(void* self) {
    return QPlaceManager_ManagerVersion((QPlaceManager*)self);
}

QPlaceDetailsReply* q_placemanager_get_place_details(void* self, const char* placeId) {
    return QPlaceManager_GetPlaceDetails((QPlaceManager*)self, qstring(placeId));
}

QPlaceContentReply* q_placemanager_get_place_content(void* self, void* request) {
    return QPlaceManager_GetPlaceContent((QPlaceManager*)self, (QPlaceContentRequest*)request);
}

QPlaceSearchReply* q_placemanager_search(void* self, void* query) {
    return QPlaceManager_Search((QPlaceManager*)self, (QPlaceSearchRequest*)query);
}

QPlaceSearchSuggestionReply* q_placemanager_search_suggestions(void* self, void* request) {
    return QPlaceManager_SearchSuggestions((QPlaceManager*)self, (QPlaceSearchRequest*)request);
}

QPlaceIdReply* q_placemanager_save_place(void* self, void* place) {
    return QPlaceManager_SavePlace((QPlaceManager*)self, (QPlace*)place);
}

QPlaceIdReply* q_placemanager_remove_place(void* self, const char* placeId) {
    return QPlaceManager_RemovePlace((QPlaceManager*)self, qstring(placeId));
}

QPlaceIdReply* q_placemanager_save_category(void* self, void* category) {
    return QPlaceManager_SaveCategory((QPlaceManager*)self, (QPlaceCategory*)category);
}

QPlaceIdReply* q_placemanager_remove_category(void* self, const char* categoryId) {
    return QPlaceManager_RemoveCategory((QPlaceManager*)self, qstring(categoryId));
}

QPlaceReply* q_placemanager_initialize_categories(void* self) {
    return QPlaceManager_InitializeCategories((QPlaceManager*)self);
}

const char* q_placemanager_parent_category_id(void* self, const char* categoryId) {
    libqt_string _str = QPlaceManager_ParentCategoryId((QPlaceManager*)self, qstring(categoryId));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_placemanager_child_category_ids(void* self) {
    libqt_list _arr = QPlaceManager_ChildCategoryIds((QPlaceManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placemanager_child_category_ids\n");
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

QPlaceCategory* q_placemanager_category(void* self, const char* categoryId) {
    return QPlaceManager_Category((QPlaceManager*)self, qstring(categoryId));
}

libqt_list /* of QPlaceCategory* */ q_placemanager_child_categories(void* self) {
    libqt_list _arr = QPlaceManager_ChildCategories((QPlaceManager*)self);
    return _arr;
}

libqt_list /* of QLocale* */ q_placemanager_locales(void* self) {
    libqt_list _arr = QPlaceManager_Locales((QPlaceManager*)self);
    return _arr;
}

void q_placemanager_set_locale(void* self, void* locale) {
    QPlaceManager_SetLocale((QPlaceManager*)self, (QLocale*)locale);
}

void q_placemanager_set_locales(void* self, libqt_list /* of QLocale* */ locale) {
    QPlaceManager_SetLocales((QPlaceManager*)self, locale);
}

QPlace* q_placemanager_compatible_place(void* self, void* place) {
    return QPlaceManager_CompatiblePlace((QPlaceManager*)self, (QPlace*)place);
}

QPlaceMatchReply* q_placemanager_matching_places(void* self, void* request) {
    return QPlaceManager_MatchingPlaces((QPlaceManager*)self, (QPlaceMatchRequest*)request);
}

void q_placemanager_finished(void* self, void* reply) {
    QPlaceManager_Finished((QPlaceManager*)self, (QPlaceReply*)reply);
}

void q_placemanager_on_finished(void* self, void (*callback)(void*, void*)) {
    QPlaceManager_Connect_Finished((QPlaceManager*)self, (intptr_t)callback);
}

void q_placemanager_error_occurred(void* self, void* param1, int32_t error) {
    QPlaceManager_ErrorOccurred((QPlaceManager*)self, (QPlaceReply*)param1, error);
}

void q_placemanager_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t)) {
    QPlaceManager_Connect_ErrorOccurred((QPlaceManager*)self, (intptr_t)callback);
}

void q_placemanager_place_added(void* self, const char* placeId) {
    QPlaceManager_PlaceAdded((QPlaceManager*)self, qstring(placeId));
}

void q_placemanager_on_place_added(void* self, void (*callback)(void*, const char*)) {
    QPlaceManager_Connect_PlaceAdded((QPlaceManager*)self, (intptr_t)callback);
}

void q_placemanager_place_updated(void* self, const char* placeId) {
    QPlaceManager_PlaceUpdated((QPlaceManager*)self, qstring(placeId));
}

void q_placemanager_on_place_updated(void* self, void (*callback)(void*, const char*)) {
    QPlaceManager_Connect_PlaceUpdated((QPlaceManager*)self, (intptr_t)callback);
}

void q_placemanager_place_removed(void* self, const char* placeId) {
    QPlaceManager_PlaceRemoved((QPlaceManager*)self, qstring(placeId));
}

void q_placemanager_on_place_removed(void* self, void (*callback)(void*, const char*)) {
    QPlaceManager_Connect_PlaceRemoved((QPlaceManager*)self, (intptr_t)callback);
}

void q_placemanager_category_added(void* self, void* category, const char* parentId) {
    QPlaceManager_CategoryAdded((QPlaceManager*)self, (QPlaceCategory*)category, qstring(parentId));
}

void q_placemanager_on_category_added(void* self, void (*callback)(void*, void*, const char*)) {
    QPlaceManager_Connect_CategoryAdded((QPlaceManager*)self, (intptr_t)callback);
}

void q_placemanager_category_updated(void* self, void* category, const char* parentId) {
    QPlaceManager_CategoryUpdated((QPlaceManager*)self, (QPlaceCategory*)category, qstring(parentId));
}

void q_placemanager_on_category_updated(void* self, void (*callback)(void*, void*, const char*)) {
    QPlaceManager_Connect_CategoryUpdated((QPlaceManager*)self, (intptr_t)callback);
}

void q_placemanager_category_removed(void* self, const char* categoryId, const char* parentId) {
    QPlaceManager_CategoryRemoved((QPlaceManager*)self, qstring(categoryId), qstring(parentId));
}

void q_placemanager_on_category_removed(void* self, void (*callback)(void*, const char*, const char*)) {
    QPlaceManager_Connect_CategoryRemoved((QPlaceManager*)self, (intptr_t)callback);
}

void q_placemanager_data_changed(void* self) {
    QPlaceManager_DataChanged((QPlaceManager*)self);
}

void q_placemanager_on_data_changed(void* self, void (*callback)(void*)) {
    QPlaceManager_Connect_DataChanged((QPlaceManager*)self, (intptr_t)callback);
}

const char* q_placemanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_placemanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPlaceIdReply* q_placemanager_save_category2(void* self, void* category, const char* parentId) {
    return QPlaceManager_SaveCategory2((QPlaceManager*)self, (QPlaceCategory*)category, qstring(parentId));
}

const char** q_placemanager_child_category_ids1(void* self, const char* parentId) {
    libqt_list _arr = QPlaceManager_ChildCategoryIds1((QPlaceManager*)self, qstring(parentId));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placemanager_child_category_ids1\n");
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

libqt_list /* of QPlaceCategory* */ q_placemanager_child_categories1(void* self, const char* parentId) {
    libqt_list _arr = QPlaceManager_ChildCategories1((QPlaceManager*)self, qstring(parentId));
    return _arr;
}

void q_placemanager_error_occurred3(void* self, void* param1, int32_t error, const char* errorString) {
    QPlaceManager_ErrorOccurred3((QPlaceManager*)self, (QPlaceReply*)param1, error, qstring(errorString));
}

void q_placemanager_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*)) {
    QPlaceManager_Connect_ErrorOccurred3((QPlaceManager*)self, (intptr_t)callback);
}

bool q_placemanager_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_placemanager_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_placemanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placemanager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_placemanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_placemanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_placemanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_placemanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_placemanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_placemanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_placemanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_placemanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_placemanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_placemanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_placemanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_placemanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_placemanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_placemanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_placemanager_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_placemanager_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_placemanager_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_placemanager_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_placemanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_placemanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_placemanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_placemanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_placemanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_placemanager_dynamic_property_names\n");
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

QBindingStorage* q_placemanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_placemanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_placemanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_placemanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_placemanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_placemanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_placemanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_placemanager_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_placemanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_placemanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_placemanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_placemanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_placemanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_placemanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_placemanager_delete(void* self) {
    QPlaceManager_Delete((QPlaceManager*)(self));
}
