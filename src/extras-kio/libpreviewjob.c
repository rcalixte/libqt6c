#include "../extras-kcoreaddons/libkcompositejob.hpp"
#include "libkfileitem.hpp"
#include "libjob_base.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../extras-kcoreaddons/libkpluginmetadata.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpixmap.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "libpreviewjob.hpp"
#include "libpreviewjob.h"

KIO__PreviewJob* k_io__previewjob_new(void* items, void* size) {
    return KIO__PreviewJob_new((KFileItemList*)items, (QSize*)size);
}

KIO__PreviewJob* k_io__previewjob_new2(void* items, void* size, const char* enabledPlugins[static 1]) {
    size_t enabledPlugins_len = libqt_strv_length(enabledPlugins);
    libqt_string* enabledPlugins_qstr = (libqt_string*)malloc(enabledPlugins_len * sizeof(libqt_string));
    if (enabledPlugins_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__previewjob_new2\n");
        abort();
    }
    for (size_t i = 0; i < enabledPlugins_len; ++i) {
        enabledPlugins_qstr[i] = qstring(enabledPlugins[i]);
    }
    libqt_list enabledPlugins_list = qlist(enabledPlugins_qstr, enabledPlugins_len);

    KIO__PreviewJob* _out = KIO__PreviewJob_new2((KFileItemList*)items, (QSize*)size, enabledPlugins_list);
    free(enabledPlugins_qstr);
    return _out;
}

const QMetaObject* k_io__previewjob_meta_object(void* self) {
    return KIO__PreviewJob_MetaObject((KIO__PreviewJob*)self);
}

void* k_io__previewjob_metacast(void* self, const char* param1) {
    return KIO__PreviewJob_Metacast((KIO__PreviewJob*)self, param1);
}

int32_t k_io__previewjob_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__PreviewJob_Metacall((KIO__PreviewJob*)self, param1, param2, param3);
}

void k_io__previewjob_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__PreviewJob_OnMetacall((KIO__PreviewJob*)self, (intptr_t)callback);
}

int32_t k_io__previewjob_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__PreviewJob_QBaseMetacall((KIO__PreviewJob*)self, param1, param2, param3);
}

const char* k_io__previewjob_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__previewjob_set_scale_type(void* self, int32_t type) {
    KIO__PreviewJob_SetScaleType((KIO__PreviewJob*)self, type);
}

int32_t k_io__previewjob_scale_type(void* self) {
    return KIO__PreviewJob_ScaleType((KIO__PreviewJob*)self);
}

void k_io__previewjob_remove_item(void* self, void* url) {
    KIO__PreviewJob_RemoveItem((KIO__PreviewJob*)self, (QUrl*)url);
}

void k_io__previewjob_set_ignore_maximum_size(void* self) {
    KIO__PreviewJob_SetIgnoreMaximumSize((KIO__PreviewJob*)self);
}

void k_io__previewjob_set_sequence_index(void* self, int index) {
    KIO__PreviewJob_SetSequenceIndex((KIO__PreviewJob*)self, index);
}

int32_t k_io__previewjob_sequence_index(void* self) {
    return KIO__PreviewJob_SequenceIndex((KIO__PreviewJob*)self);
}

float k_io__previewjob_sequence_index_wraparound_point(void* self) {
    return KIO__PreviewJob_SequenceIndexWraparoundPoint((KIO__PreviewJob*)self);
}

bool k_io__previewjob_handles_sequences(void* self) {
    return KIO__PreviewJob_HandlesSequences((KIO__PreviewJob*)self);
}

void k_io__previewjob_set_device_pixel_ratio(void* self, double dpr) {
    KIO__PreviewJob_SetDevicePixelRatio((KIO__PreviewJob*)self, dpr);
}

const char** k_io__previewjob_available_plugins() {
    libqt_list _arr = KIO__PreviewJob_AvailablePlugins();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__previewjob_available_plugins\n");
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

libqt_list /* of KPluginMetaData* */ k_io__previewjob_available_thumbnailer_plugins() {
    libqt_list _arr = KIO__PreviewJob_AvailableThumbnailerPlugins();
    return _arr;
}

const char** k_io__previewjob_default_plugins() {
    libqt_list _arr = KIO__PreviewJob_DefaultPlugins();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__previewjob_default_plugins\n");
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

const char** k_io__previewjob_supported_mime_types() {
    libqt_list _arr = KIO__PreviewJob_SupportedMimeTypes();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__previewjob_supported_mime_types\n");
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

void k_io__previewjob_got_preview(void* self, void* item, void* preview) {
    KIO__PreviewJob_GotPreview((KIO__PreviewJob*)self, (KFileItem*)item, (QPixmap*)preview);
}

void k_io__previewjob_on_got_preview(void* self, void (*callback)(void*, void*, void*)) {
    KIO__PreviewJob_Connect_GotPreview((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_failed(void* self, void* item) {
    KIO__PreviewJob_Failed((KIO__PreviewJob*)self, (KFileItem*)item);
}

void k_io__previewjob_on_failed(void* self, void (*callback)(void*, void*)) {
    KIO__PreviewJob_Connect_Failed((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_slot_result(void* self, void* job) {
    KIO__PreviewJob_SlotResult((KIO__PreviewJob*)self, (KJob*)job);
}

void k_io__previewjob_on_slot_result(void* self, void (*callback)(void*, void*)) {
    KIO__PreviewJob_OnSlotResult((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_qbase_slot_result(void* self, void* job) {
    KIO__PreviewJob_QBaseSlotResult((KIO__PreviewJob*)self, (KJob*)job);
}

void k_io__previewjob_set_default_device_pixel_ratio(double devicePixelRatio) {
    KIO__PreviewJob_SetDefaultDevicePixelRatio(devicePixelRatio);
}

const char* k_io__previewjob_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__previewjob_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__previewjob_set_ignore_maximum_size1(void* self, bool ignoreSize) {
    KIO__PreviewJob_SetIgnoreMaximumSize1((KIO__PreviewJob*)self, ignoreSize);
}

KIO__JobUiDelegateExtension* k_io__previewjob_ui_delegate_extension(void* self) {
    return KIO__Job_UiDelegateExtension((KIO__Job*)self);
}

void k_io__previewjob_set_ui_delegate_extension(void* self, void* extension) {
    KIO__Job_SetUiDelegateExtension((KIO__Job*)self, (KIO__JobUiDelegateExtension*)extension);
}

const char** k_io__previewjob_detailed_error_strings(void* self) {
    libqt_list _arr = KIO__Job_DetailedErrorStrings((KIO__Job*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__previewjob_detailed_error_strings\n");
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

void k_io__previewjob_set_parent_job(void* self, void* parentJob) {
    KIO__Job_SetParentJob((KIO__Job*)self, (KIO__Job*)parentJob);
}

KIO__Job* k_io__previewjob_parent_job(void* self) {
    return KIO__Job_ParentJob((KIO__Job*)self);
}

void k_io__previewjob_set_meta_data(void* self, void* metaData) {
    KIO__Job_SetMetaData((KIO__Job*)self, (KIO__MetaData*)metaData);
}

void k_io__previewjob_add_meta_data(void* self, const char* key, const char* value) {
    KIO__Job_AddMetaData((KIO__Job*)self, qstring(key), qstring(value));
}

void k_io__previewjob_add_meta_data2(void* self, libqt_map /* of const char* to const char* */ values) {
    // Convert libqt_map to QMap<QString,QString>
    libqt_map values_ret;
    values_ret.len = values.len;
    values_ret.keys = (libqt_string*)malloc(values_ret.len * sizeof(libqt_string));
    if (values_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_io__previewjob_add_meta_data2\n");
        abort();
    }
    values_ret.values = (libqt_string*)malloc(values_ret.len * sizeof(libqt_string));
    if (values_ret.values == NULL) {
        free(values_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_io__previewjob_add_meta_data2\n");
        abort();
    }
    const char** values_karr = (const char**)values.keys;
    libqt_string* values_kdest = (libqt_string*)values_ret.keys;
    const char** values_varr = (const char**)values.values;
    libqt_string* values_vdest = (libqt_string*)values_ret.values;
    for (size_t i = 0; i < values_ret.len; ++i) {
        values_kdest[i] = qstring(values_karr[i]);
        values_vdest[i] = qstring(values_varr[i]);
    }
    KIO__Job_AddMetaData2((KIO__Job*)self, values_ret);
    free(values_ret.keys);
    free(values_ret.values);
}

void k_io__previewjob_merge_meta_data(void* self, libqt_map /* of const char* to const char* */ values) {
    // Convert libqt_map to QMap<QString,QString>
    libqt_map values_ret;
    values_ret.len = values.len;
    values_ret.keys = (libqt_string*)malloc(values_ret.len * sizeof(libqt_string));
    if (values_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in k_io__previewjob_merge_meta_data\n");
        abort();
    }
    values_ret.values = (libqt_string*)malloc(values_ret.len * sizeof(libqt_string));
    if (values_ret.values == NULL) {
        free(values_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in k_io__previewjob_merge_meta_data\n");
        abort();
    }
    const char** values_karr = (const char**)values.keys;
    libqt_string* values_kdest = (libqt_string*)values_ret.keys;
    const char** values_varr = (const char**)values.values;
    libqt_string* values_vdest = (libqt_string*)values_ret.values;
    for (size_t i = 0; i < values_ret.len; ++i) {
        values_kdest[i] = qstring(values_karr[i]);
        values_vdest[i] = qstring(values_varr[i]);
    }
    KIO__Job_MergeMetaData((KIO__Job*)self, values_ret);
    free(values_ret.keys);
    free(values_ret.values);
}

KIO__MetaData* k_io__previewjob_outgoing_meta_data(void* self) {
    return KIO__Job_OutgoingMetaData((KIO__Job*)self);
}

KIO__MetaData* k_io__previewjob_meta_data(void* self) {
    return KIO__Job_MetaData((KIO__Job*)self);
}

const char* k_io__previewjob_query_meta_data(void* self, const char* key) {
    libqt_string _str = KIO__Job_QueryMetaData((KIO__Job*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__previewjob_connected(void* self, void* job) {
    KIO__Job_Connected((KIO__Job*)self, (KIO__Job*)job);
}

void k_io__previewjob_on_connected(void* self, void (*callback)(void*, void*)) {
    KIO__Job_Connect_Connected((KIO__Job*)self, (intptr_t)callback);
}

const char** k_io__previewjob_detailed_error_strings1(void* self, void* reqUrl) {
    libqt_list _arr = KIO__Job_DetailedErrorStrings1((KIO__Job*)self, (QUrl*)reqUrl);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__previewjob_detailed_error_strings1\n");
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

const char** k_io__previewjob_detailed_error_strings2(void* self, void* reqUrl, int method) {
    libqt_list _arr = KIO__Job_DetailedErrorStrings2((KIO__Job*)self, (QUrl*)reqUrl, method);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__previewjob_detailed_error_strings2\n");
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

void k_io__previewjob_set_ui_delegate(void* self, void* delegate) {
    KJob_SetUiDelegate((KJob*)self, (KJobUiDelegate*)delegate);
}

KJobUiDelegate* k_io__previewjob_ui_delegate(void* self) {
    return KJob_UiDelegate((KJob*)self);
}

int32_t k_io__previewjob_capabilities(void* self) {
    return KJob_Capabilities((KJob*)self);
}

bool k_io__previewjob_is_suspended(void* self) {
    return KJob_IsSuspended((KJob*)self);
}

bool k_io__previewjob_kill(void* self) {
    return KJob_Kill((KJob*)self);
}

bool k_io__previewjob_suspend(void* self) {
    return KJob_Suspend((KJob*)self);
}

bool k_io__previewjob_resume(void* self) {
    return KJob_Resume((KJob*)self);
}

bool k_io__previewjob_exec(void* self) {
    return KJob_Exec((KJob*)self);
}

int32_t k_io__previewjob_error(void* self) {
    return KJob_Error((KJob*)self);
}

const char* k_io__previewjob_error_text(void* self) {
    libqt_string _str = KJob_ErrorText((KJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__previewjob_processed_amount(void* self, int32_t unit) {
    return KJob_ProcessedAmount((KJob*)self, unit);
}

uint64_t k_io__previewjob_total_amount(void* self, int32_t unit) {
    return KJob_TotalAmount((KJob*)self, unit);
}

uint64_t k_io__previewjob_percent(void* self) {
    return KJob_Percent((KJob*)self);
}

void k_io__previewjob_set_auto_delete(void* self, bool autodelete) {
    KJob_SetAutoDelete((KJob*)self, autodelete);
}

bool k_io__previewjob_is_auto_delete(void* self) {
    return KJob_IsAutoDelete((KJob*)self);
}

void k_io__previewjob_set_finished_notification_hidden(void* self) {
    KJob_SetFinishedNotificationHidden((KJob*)self);
}

bool k_io__previewjob_is_finished_notification_hidden(void* self) {
    return KJob_IsFinishedNotificationHidden((KJob*)self);
}

bool k_io__previewjob_is_started_with_exec(void* self) {
    return KJob_IsStartedWithExec((KJob*)self);
}

long long k_io__previewjob_elapsed_time(void* self) {
    return KJob_ElapsedTime((KJob*)self);
}

void k_io__previewjob_info_message(void* self, void* job, const char* message) {
    KJob_InfoMessage((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__previewjob_on_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_InfoMessage((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_warning(void* self, void* job, const char* message) {
    KJob_Warning((KJob*)self, (KJob*)job, qstring(message));
}

void k_io__previewjob_on_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJob_Connect_Warning((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_total_size(void* self, void* job, uint64_t size) {
    KJob_TotalSize((KJob*)self, (KJob*)job, size);
}

void k_io__previewjob_on_total_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_TotalSize((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_processed_size(void* self, void* job, uint64_t size) {
    KJob_ProcessedSize((KJob*)self, (KJob*)job, size);
}

void k_io__previewjob_on_processed_size(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_ProcessedSize((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_speed(void* self, void* job, uint64_t speed) {
    KJob_Speed((KJob*)self, (KJob*)job, speed);
}

void k_io__previewjob_on_speed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_Speed((KJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_kill1(void* self, int32_t verbosity) {
    return KJob_Kill1((KJob*)self, verbosity);
}

void k_io__previewjob_set_finished_notification_hidden1(void* self, bool hide) {
    KJob_SetFinishedNotificationHidden1((KJob*)self, hide);
}

const char* k_io__previewjob_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__previewjob_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__previewjob_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__previewjob_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__previewjob_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__previewjob_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__previewjob_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__previewjob_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__previewjob_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__previewjob_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__previewjob_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__previewjob_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__previewjob_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__previewjob_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__previewjob_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__previewjob_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__previewjob_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__previewjob_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__previewjob_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__previewjob_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__previewjob_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__previewjob_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__previewjob_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__previewjob_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__previewjob_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__previewjob_dynamic_property_names\n");
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

QBindingStorage* k_io__previewjob_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__previewjob_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__previewjob_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__previewjob_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__previewjob_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__previewjob_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__previewjob_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__previewjob_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__previewjob_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__previewjob_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__previewjob_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__previewjob_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__previewjob_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_io__previewjob_start(void* self) {
    KIO__PreviewJob_Start((KIO__PreviewJob*)self);
}

void k_io__previewjob_qbase_start(void* self) {
    KIO__PreviewJob_QBaseStart((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_start(void* self, void (*callback)()) {
    KIO__PreviewJob_OnStart((KIO__PreviewJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_do_kill(void* self) {
    return KIO__PreviewJob_DoKill((KIO__PreviewJob*)self);
}

bool k_io__previewjob_qbase_do_kill(void* self) {
    return KIO__PreviewJob_QBaseDoKill((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_do_kill(void* self, bool (*callback)()) {
    KIO__PreviewJob_OnDoKill((KIO__PreviewJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_do_suspend(void* self) {
    return KIO__PreviewJob_DoSuspend((KIO__PreviewJob*)self);
}

bool k_io__previewjob_qbase_do_suspend(void* self) {
    return KIO__PreviewJob_QBaseDoSuspend((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_do_suspend(void* self, bool (*callback)()) {
    KIO__PreviewJob_OnDoSuspend((KIO__PreviewJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_do_resume(void* self) {
    return KIO__PreviewJob_DoResume((KIO__PreviewJob*)self);
}

bool k_io__previewjob_qbase_do_resume(void* self) {
    return KIO__PreviewJob_QBaseDoResume((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_do_resume(void* self, bool (*callback)()) {
    KIO__PreviewJob_OnDoResume((KIO__PreviewJob*)self, (intptr_t)callback);
}

const char* k_io__previewjob_error_string(void* self) {
    libqt_string _str = KIO__PreviewJob_ErrorString((KIO__PreviewJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__previewjob_qbase_error_string(void* self) {
    libqt_string _str = KIO__PreviewJob_QBaseErrorString((KIO__PreviewJob*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__previewjob_on_error_string(void* self, const char* (*callback)()) {
    KIO__PreviewJob_OnErrorString((KIO__PreviewJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_add_subjob(void* self, void* job) {
    return KIO__PreviewJob_AddSubjob((KIO__PreviewJob*)self, (KJob*)job);
}

bool k_io__previewjob_qbase_add_subjob(void* self, void* job) {
    return KIO__PreviewJob_QBaseAddSubjob((KIO__PreviewJob*)self, (KJob*)job);
}

void k_io__previewjob_on_add_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__PreviewJob_OnAddSubjob((KIO__PreviewJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_remove_subjob(void* self, void* job) {
    return KIO__PreviewJob_RemoveSubjob((KIO__PreviewJob*)self, (KJob*)job);
}

bool k_io__previewjob_qbase_remove_subjob(void* self, void* job) {
    return KIO__PreviewJob_QBaseRemoveSubjob((KIO__PreviewJob*)self, (KJob*)job);
}

void k_io__previewjob_on_remove_subjob(void* self, bool (*callback)(void*, void*)) {
    KIO__PreviewJob_OnRemoveSubjob((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_slot_info_message(void* self, void* job, const char* message) {
    KIO__PreviewJob_SlotInfoMessage((KIO__PreviewJob*)self, (KJob*)job, qstring(message));
}

void k_io__previewjob_qbase_slot_info_message(void* self, void* job, const char* message) {
    KIO__PreviewJob_QBaseSlotInfoMessage((KIO__PreviewJob*)self, (KJob*)job, qstring(message));
}

void k_io__previewjob_on_slot_info_message(void* self, void (*callback)(void*, void*, const char*)) {
    KIO__PreviewJob_OnSlotInfoMessage((KIO__PreviewJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_event(void* self, void* event) {
    return KIO__PreviewJob_Event((KIO__PreviewJob*)self, (QEvent*)event);
}

bool k_io__previewjob_qbase_event(void* self, void* event) {
    return KIO__PreviewJob_QBaseEvent((KIO__PreviewJob*)self, (QEvent*)event);
}

void k_io__previewjob_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__PreviewJob_OnEvent((KIO__PreviewJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_event_filter(void* self, void* watched, void* event) {
    return KIO__PreviewJob_EventFilter((KIO__PreviewJob*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__previewjob_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__PreviewJob_QBaseEventFilter((KIO__PreviewJob*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__previewjob_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__PreviewJob_OnEventFilter((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_timer_event(void* self, void* event) {
    KIO__PreviewJob_TimerEvent((KIO__PreviewJob*)self, (QTimerEvent*)event);
}

void k_io__previewjob_qbase_timer_event(void* self, void* event) {
    KIO__PreviewJob_QBaseTimerEvent((KIO__PreviewJob*)self, (QTimerEvent*)event);
}

void k_io__previewjob_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__PreviewJob_OnTimerEvent((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_child_event(void* self, void* event) {
    KIO__PreviewJob_ChildEvent((KIO__PreviewJob*)self, (QChildEvent*)event);
}

void k_io__previewjob_qbase_child_event(void* self, void* event) {
    KIO__PreviewJob_QBaseChildEvent((KIO__PreviewJob*)self, (QChildEvent*)event);
}

void k_io__previewjob_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__PreviewJob_OnChildEvent((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_custom_event(void* self, void* event) {
    KIO__PreviewJob_CustomEvent((KIO__PreviewJob*)self, (QEvent*)event);
}

void k_io__previewjob_qbase_custom_event(void* self, void* event) {
    KIO__PreviewJob_QBaseCustomEvent((KIO__PreviewJob*)self, (QEvent*)event);
}

void k_io__previewjob_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__PreviewJob_OnCustomEvent((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_connect_notify(void* self, void* signal) {
    KIO__PreviewJob_ConnectNotify((KIO__PreviewJob*)self, (QMetaMethod*)signal);
}

void k_io__previewjob_qbase_connect_notify(void* self, void* signal) {
    KIO__PreviewJob_QBaseConnectNotify((KIO__PreviewJob*)self, (QMetaMethod*)signal);
}

void k_io__previewjob_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__PreviewJob_OnConnectNotify((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_disconnect_notify(void* self, void* signal) {
    KIO__PreviewJob_DisconnectNotify((KIO__PreviewJob*)self, (QMetaMethod*)signal);
}

void k_io__previewjob_qbase_disconnect_notify(void* self, void* signal) {
    KIO__PreviewJob_QBaseDisconnectNotify((KIO__PreviewJob*)self, (QMetaMethod*)signal);
}

void k_io__previewjob_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__PreviewJob_OnDisconnectNotify((KIO__PreviewJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_has_subjobs(void* self) {
    return KIO__PreviewJob_HasSubjobs((KIO__PreviewJob*)self);
}

bool k_io__previewjob_qbase_has_subjobs(void* self) {
    return KIO__PreviewJob_QBaseHasSubjobs((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_has_subjobs(void* self, bool (*callback)()) {
    KIO__PreviewJob_OnHasSubjobs((KIO__PreviewJob*)self, (intptr_t)callback);
}

libqt_list /* of KJob* */ k_io__previewjob_subjobs(void* self) {
    libqt_list _arr = KIO__PreviewJob_Subjobs((KIO__PreviewJob*)self);
    return _arr;
}

libqt_list /* of KJob* */ k_io__previewjob_qbase_subjobs(void* self) {
    libqt_list _arr = KIO__PreviewJob_QBaseSubjobs((KIO__PreviewJob*)self);
    return _arr;
}

void k_io__previewjob_on_subjobs(void* self, KJob** (*callback)()) {
    KIO__PreviewJob_OnSubjobs((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_clear_subjobs(void* self) {
    KIO__PreviewJob_ClearSubjobs((KIO__PreviewJob*)self);
}

void k_io__previewjob_qbase_clear_subjobs(void* self) {
    KIO__PreviewJob_QBaseClearSubjobs((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_clear_subjobs(void* self, void (*callback)()) {
    KIO__PreviewJob_OnClearSubjobs((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_set_capabilities(void* self, int32_t capabilities) {
    KIO__PreviewJob_SetCapabilities((KIO__PreviewJob*)self, capabilities);
}

void k_io__previewjob_qbase_set_capabilities(void* self, int32_t capabilities) {
    KIO__PreviewJob_QBaseSetCapabilities((KIO__PreviewJob*)self, capabilities);
}

void k_io__previewjob_on_set_capabilities(void* self, void (*callback)(void*, int32_t)) {
    KIO__PreviewJob_OnSetCapabilities((KIO__PreviewJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_is_finished(void* self) {
    return KIO__PreviewJob_IsFinished((KIO__PreviewJob*)self);
}

bool k_io__previewjob_qbase_is_finished(void* self) {
    return KIO__PreviewJob_QBaseIsFinished((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_is_finished(void* self, bool (*callback)()) {
    KIO__PreviewJob_OnIsFinished((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_set_error(void* self, int errorCode) {
    KIO__PreviewJob_SetError((KIO__PreviewJob*)self, errorCode);
}

void k_io__previewjob_qbase_set_error(void* self, int errorCode) {
    KIO__PreviewJob_QBaseSetError((KIO__PreviewJob*)self, errorCode);
}

void k_io__previewjob_on_set_error(void* self, void (*callback)(void*, int)) {
    KIO__PreviewJob_OnSetError((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_set_error_text(void* self, const char* errorText) {
    KIO__PreviewJob_SetErrorText((KIO__PreviewJob*)self, qstring(errorText));
}

void k_io__previewjob_qbase_set_error_text(void* self, const char* errorText) {
    KIO__PreviewJob_QBaseSetErrorText((KIO__PreviewJob*)self, qstring(errorText));
}

void k_io__previewjob_on_set_error_text(void* self, void (*callback)(void*, const char*)) {
    KIO__PreviewJob_OnSetErrorText((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__PreviewJob_SetProcessedAmount((KIO__PreviewJob*)self, unit, amount);
}

void k_io__previewjob_qbase_set_processed_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__PreviewJob_QBaseSetProcessedAmount((KIO__PreviewJob*)self, unit, amount);
}

void k_io__previewjob_on_set_processed_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__PreviewJob_OnSetProcessedAmount((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__PreviewJob_SetTotalAmount((KIO__PreviewJob*)self, unit, amount);
}

void k_io__previewjob_qbase_set_total_amount(void* self, int32_t unit, uint64_t amount) {
    KIO__PreviewJob_QBaseSetTotalAmount((KIO__PreviewJob*)self, unit, amount);
}

void k_io__previewjob_on_set_total_amount(void* self, void (*callback)(void*, int32_t, uint64_t)) {
    KIO__PreviewJob_OnSetTotalAmount((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_set_progress_unit(void* self, int32_t unit) {
    KIO__PreviewJob_SetProgressUnit((KIO__PreviewJob*)self, unit);
}

void k_io__previewjob_qbase_set_progress_unit(void* self, int32_t unit) {
    KIO__PreviewJob_QBaseSetProgressUnit((KIO__PreviewJob*)self, unit);
}

void k_io__previewjob_on_set_progress_unit(void* self, void (*callback)(void*, int32_t)) {
    KIO__PreviewJob_OnSetProgressUnit((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_set_percent(void* self, uint64_t percentage) {
    KIO__PreviewJob_SetPercent((KIO__PreviewJob*)self, percentage);
}

void k_io__previewjob_qbase_set_percent(void* self, uint64_t percentage) {
    KIO__PreviewJob_QBaseSetPercent((KIO__PreviewJob*)self, percentage);
}

void k_io__previewjob_on_set_percent(void* self, void (*callback)(void*, uint64_t)) {
    KIO__PreviewJob_OnSetPercent((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_emit_result(void* self) {
    KIO__PreviewJob_EmitResult((KIO__PreviewJob*)self);
}

void k_io__previewjob_qbase_emit_result(void* self) {
    KIO__PreviewJob_QBaseEmitResult((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_emit_result(void* self, void (*callback)()) {
    KIO__PreviewJob_OnEmitResult((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__PreviewJob_EmitPercent((KIO__PreviewJob*)self, processedAmount, totalAmount);
}

void k_io__previewjob_qbase_emit_percent(void* self, uint64_t processedAmount, uint64_t totalAmount) {
    KIO__PreviewJob_QBaseEmitPercent((KIO__PreviewJob*)self, processedAmount, totalAmount);
}

void k_io__previewjob_on_emit_percent(void* self, void (*callback)(void*, uint64_t, uint64_t)) {
    KIO__PreviewJob_OnEmitPercent((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_emit_speed(void* self, uint64_t speed) {
    KIO__PreviewJob_EmitSpeed((KIO__PreviewJob*)self, speed);
}

void k_io__previewjob_qbase_emit_speed(void* self, uint64_t speed) {
    KIO__PreviewJob_QBaseEmitSpeed((KIO__PreviewJob*)self, speed);
}

void k_io__previewjob_on_emit_speed(void* self, void (*callback)(void*, uint64_t)) {
    KIO__PreviewJob_OnEmitSpeed((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_start_elapsed_timer(void* self) {
    KIO__PreviewJob_StartElapsedTimer((KIO__PreviewJob*)self);
}

void k_io__previewjob_qbase_start_elapsed_timer(void* self) {
    KIO__PreviewJob_QBaseStartElapsedTimer((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_start_elapsed_timer(void* self, void (*callback)()) {
    KIO__PreviewJob_OnStartElapsedTimer((KIO__PreviewJob*)self, (intptr_t)callback);
}

QObject* k_io__previewjob_sender(void* self) {
    return KIO__PreviewJob_Sender((KIO__PreviewJob*)self);
}

QObject* k_io__previewjob_qbase_sender(void* self) {
    return KIO__PreviewJob_QBaseSender((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_sender(void* self, QObject* (*callback)()) {
    KIO__PreviewJob_OnSender((KIO__PreviewJob*)self, (intptr_t)callback);
}

int32_t k_io__previewjob_sender_signal_index(void* self) {
    return KIO__PreviewJob_SenderSignalIndex((KIO__PreviewJob*)self);
}

int32_t k_io__previewjob_qbase_sender_signal_index(void* self) {
    return KIO__PreviewJob_QBaseSenderSignalIndex((KIO__PreviewJob*)self);
}

void k_io__previewjob_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__PreviewJob_OnSenderSignalIndex((KIO__PreviewJob*)self, (intptr_t)callback);
}

int32_t k_io__previewjob_receivers(void* self, const char* signal) {
    return KIO__PreviewJob_Receivers((KIO__PreviewJob*)self, signal);
}

int32_t k_io__previewjob_qbase_receivers(void* self, const char* signal) {
    return KIO__PreviewJob_QBaseReceivers((KIO__PreviewJob*)self, signal);
}

void k_io__previewjob_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__PreviewJob_OnReceivers((KIO__PreviewJob*)self, (intptr_t)callback);
}

bool k_io__previewjob_is_signal_connected(void* self, void* signal) {
    return KIO__PreviewJob_IsSignalConnected((KIO__PreviewJob*)self, (QMetaMethod*)signal);
}

bool k_io__previewjob_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__PreviewJob_QBaseIsSignalConnected((KIO__PreviewJob*)self, (QMetaMethod*)signal);
}

void k_io__previewjob_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__PreviewJob_OnIsSignalConnected((KIO__PreviewJob*)self, (intptr_t)callback);
}

void k_io__previewjob_on_finished(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Finished((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_on_suspended(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Suspended((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_on_resumed(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Resumed((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_on_result(void* self, void (*callback)(void*, void*)) {
    KJob_Connect_Result((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_on_total_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_TotalAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_on_processed_amount_changed(void* self, void (*callback)(void*, void*, int32_t, uint64_t)) {
    KJob_Connect_ProcessedAmountChanged((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_on_percent_changed(void* self, void (*callback)(void*, void*, uint64_t)) {
    KJob_Connect_PercentChanged((KJob*)self, (intptr_t)callback);
}

void k_io__previewjob_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__previewjob_delete(void* self) {
    KIO__PreviewJob_Delete((KIO__PreviewJob*)(self));
}

KIO__PreviewJob* k_io_file_preview(void* param1, void* param2, const char* param3[static 1]) {
    size_t param3_len = libqt_strv_length(param3);
    libqt_string* param3_qstr = (libqt_string*)malloc(param3_len * sizeof(libqt_string));
    if (param3_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io_file_preview\n");
        abort();
    }
    for (size_t i = 0; i < param3_len; ++i) {
        param3_qstr[i] = qstring(param3[i]);
    }
    libqt_list param3_list = qlist(param3_qstr, param3_len);
    KIO__PreviewJob* _out = KIO_FilePreview((KFileItemList*)param1, (QSize*)param2, param3_list);
    free(param3_qstr);
    return _out;
}
