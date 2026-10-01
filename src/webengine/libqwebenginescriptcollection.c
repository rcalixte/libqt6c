#include "libqwebenginescript.hpp"
#include "libqwebenginescriptcollection.hpp"
#include "libqwebenginescriptcollection.h"

bool q_webenginescriptcollection_is_empty(const void* self) {
    return QWebEngineScriptCollection_IsEmpty((QWebEngineScriptCollection*)self);
}

int32_t q_webenginescriptcollection_count(const void* self) {
    return QWebEngineScriptCollection_Count((QWebEngineScriptCollection*)self);
}

bool q_webenginescriptcollection_contains(const void* self, const void* value) {
    return QWebEngineScriptCollection_Contains((QWebEngineScriptCollection*)self, (QWebEngineScript*)value);
}

libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_find(const void* self, const char* name) {
    libqt_list _arr = QWebEngineScriptCollection_Find((QWebEngineScriptCollection*)self, qstring(name));
    return _arr;
}

void q_webenginescriptcollection_insert(void* self, const void* param1) {
    QWebEngineScriptCollection_Insert((QWebEngineScriptCollection*)self, (QWebEngineScript*)param1);
}

void q_webenginescriptcollection_insert2(void* self, libqt_list /* of QWebEngineScript* */ list) {
    QWebEngineScriptCollection_Insert2((QWebEngineScriptCollection*)self, list);
}

bool q_webenginescriptcollection_remove(void* self, const void* param1) {
    return QWebEngineScriptCollection_Remove((QWebEngineScriptCollection*)self, (QWebEngineScript*)param1);
}

void q_webenginescriptcollection_clear(void* self) {
    QWebEngineScriptCollection_Clear((QWebEngineScriptCollection*)self);
}

libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_to_list(const void* self) {
    libqt_list _arr = QWebEngineScriptCollection_ToList((QWebEngineScriptCollection*)self);
    return _arr;
}

void q_webenginescriptcollection_delete(void* self) {
    QWebEngineScriptCollection_Delete((QWebEngineScriptCollection*)(self));
}
