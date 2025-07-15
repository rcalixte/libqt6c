#include <string.h>
#include "libqwebenginescript.hpp"
#include "libqwebenginescriptcollection.hpp"
#include "libqwebenginescriptcollection.h"

bool q_webenginescriptcollection_is_empty(void* self) {
    return QWebEngineScriptCollection_IsEmpty((QWebEngineScriptCollection*)self);
}

int32_t q_webenginescriptcollection_count(void* self) {
    return QWebEngineScriptCollection_Count((QWebEngineScriptCollection*)self);
}

bool q_webenginescriptcollection_contains(void* self, void* value) {
    return QWebEngineScriptCollection_Contains((QWebEngineScriptCollection*)self, (QWebEngineScript*)value);
}

libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_find(void* self, const char* name) {
    libqt_list _arr = QWebEngineScriptCollection_Find((QWebEngineScriptCollection*)self, qstring(name));
    return _arr;
}

void q_webenginescriptcollection_insert(void* self, void* param1) {
    QWebEngineScriptCollection_Insert((QWebEngineScriptCollection*)self, (QWebEngineScript*)param1);
}

void q_webenginescriptcollection_insert2(void* self, libqt_list list) {
    QWebEngineScriptCollection_Insert2((QWebEngineScriptCollection*)self, list);
}

bool q_webenginescriptcollection_remove(void* self, void* param1) {
    return QWebEngineScriptCollection_Remove((QWebEngineScriptCollection*)self, (QWebEngineScript*)param1);
}

void q_webenginescriptcollection_clear(void* self) {
    QWebEngineScriptCollection_Clear((QWebEngineScriptCollection*)self);
}

libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_to_list(void* self) {
    libqt_list _arr = QWebEngineScriptCollection_ToList((QWebEngineScriptCollection*)self);
    return _arr;
}

void q_webenginescriptcollection_delete(void* self) {
    QWebEngineScriptCollection_Delete((QWebEngineScriptCollection*)(self));
}
