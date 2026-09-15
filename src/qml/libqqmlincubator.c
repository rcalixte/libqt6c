#include "../libqobject.hpp"
#include "libqqmlengine.hpp"
#include "libqqmlerror.hpp"
#include "../libqvariant.hpp"
#include "libqqmlincubator.hpp"
#include "libqqmlincubator.h"

QQmlIncubator* q_qmlincubator_new() {
    return QQmlIncubator_New();
}

QQmlIncubator* q_qmlincubator_new2(int32_t param1) {
    return QQmlIncubator_New2(param1);
}

void q_qmlincubator_clear(void* self) {
    QQmlIncubator_Clear((QQmlIncubator*)self);
}

void q_qmlincubator_force_completion(void* self) {
    QQmlIncubator_ForceCompletion((QQmlIncubator*)self);
}

bool q_qmlincubator_is_null(void* self) {
    return QQmlIncubator_IsNull((QQmlIncubator*)self);
}

bool q_qmlincubator_is_ready(void* self) {
    return QQmlIncubator_IsReady((QQmlIncubator*)self);
}

bool q_qmlincubator_is_error(void* self) {
    return QQmlIncubator_IsError((QQmlIncubator*)self);
}

bool q_qmlincubator_is_loading(void* self) {
    return QQmlIncubator_IsLoading((QQmlIncubator*)self);
}

libqt_list /* of QQmlError* */ q_qmlincubator_errors(void* self) {
    libqt_list _arr = QQmlIncubator_Errors((QQmlIncubator*)self);
    return _arr;
}

int32_t q_qmlincubator_incubation_mode(void* self) {
    return QQmlIncubator_IncubationMode((QQmlIncubator*)self);
}

int32_t q_qmlincubator_status(void* self) {
    return QQmlIncubator_Status((QQmlIncubator*)self);
}

QObject* q_qmlincubator_object(void* self) {
    return QQmlIncubator_Object((QQmlIncubator*)self);
}

void q_qmlincubator_set_initial_properties(void* self, libqt_map /* of const char* to QVariant* */ initialProperties) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map initialProperties_ret;
    initialProperties_ret.len = initialProperties.len;
    initialProperties_ret.keys = (libqt_string*)malloc(initialProperties_ret.len * sizeof(libqt_string));
    if (initialProperties_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_qmlincubator_set_initial_properties\n");
        abort();
    }
    initialProperties_ret.values = (QVariant**)malloc(initialProperties_ret.len * sizeof(QVariant*));
    if (initialProperties_ret.values == NULL) {
        free(initialProperties_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_qmlincubator_set_initial_properties\n");
        abort();
    }
    const char** initialProperties_karr = (const char**)initialProperties.keys;
    libqt_string* initialProperties_kdest = (libqt_string*)initialProperties_ret.keys;
    QVariant** initialProperties_varr = (QVariant**)initialProperties.values;
    QVariant** initialProperties_vdest = (QVariant**)initialProperties_ret.values;
    for (size_t i = 0; i < initialProperties_ret.len; ++i) {
        initialProperties_kdest[i] = qstring(initialProperties_karr[i]);
        initialProperties_vdest[i] = initialProperties_varr[i];
    }
    QQmlIncubator_SetInitialProperties((QQmlIncubator*)self, initialProperties_ret);
    free(initialProperties_ret.keys);
    free(initialProperties_ret.values);
}

void q_qmlincubator_status_changed(void* self, int32_t param1) {
    QQmlIncubator_StatusChanged((QQmlIncubator*)self, param1);
}

void q_qmlincubator_on_status_changed(void* self, void (*callback)(void*, int32_t)) {
    QQmlIncubator_OnStatusChanged((QQmlIncubator*)self, (intptr_t)callback);
}

void q_qmlincubator_super_status_changed(void* self, int32_t param1) {
    QQmlIncubator_SuperStatusChanged((QQmlIncubator*)self, param1);
}

void q_qmlincubator_set_initial_state(void* self, void* initialState) {
    QQmlIncubator_SetInitialState((QQmlIncubator*)self, (QObject*)initialState);
}

void q_qmlincubator_on_set_initial_state(void* self, void (*callback)(void*, void*)) {
    QQmlIncubator_OnSetInitialState((QQmlIncubator*)self, (intptr_t)callback);
}

void q_qmlincubator_super_set_initial_state(void* self, void* initialState) {
    QQmlIncubator_SuperSetInitialState((QQmlIncubator*)self, (QObject*)initialState);
}

void q_qmlincubator_delete(void* self) {
    QQmlIncubator_Delete((QQmlIncubator*)(self));
}

QQmlIncubationController* q_qmlincubationcontroller_new() {
    return QQmlIncubationController_New();
}

QQmlEngine* q_qmlincubationcontroller_engine(void* self) {
    return QQmlIncubationController_Engine((QQmlIncubationController*)self);
}

int32_t q_qmlincubationcontroller_incubating_object_count(void* self) {
    return QQmlIncubationController_IncubatingObjectCount((QQmlIncubationController*)self);
}

void q_qmlincubationcontroller_incubate_for(void* self, int msecs) {
    QQmlIncubationController_IncubateFor((QQmlIncubationController*)self, msecs);
}

void q_qmlincubationcontroller_incubating_object_count_changed(void* self, int param1) {
    QQmlIncubationController_IncubatingObjectCountChanged((QQmlIncubationController*)self, param1);
}

void q_qmlincubationcontroller_on_incubating_object_count_changed(void* self, void (*callback)(void*, int)) {
    QQmlIncubationController_OnIncubatingObjectCountChanged((QQmlIncubationController*)self, (intptr_t)callback);
}

void q_qmlincubationcontroller_super_incubating_object_count_changed(void* self, int param1) {
    QQmlIncubationController_SuperIncubatingObjectCountChanged((QQmlIncubationController*)self, param1);
}

void q_qmlincubationcontroller_delete(void* self) {
    QQmlIncubationController_Delete((QQmlIncubationController*)(self));
}
