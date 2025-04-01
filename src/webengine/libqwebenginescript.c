#include <string.h>
#include "../libqurl.hpp"
#include "libqwebenginescript.hpp"
#include "libqwebenginescript.h"

QWebEngineScript* q_webenginescript_new() {
    return QWebEngineScript_new();
}

QWebEngineScript* q_webenginescript_new2(void* other) {
    return QWebEngineScript_new2((QWebEngineScript*)other);
}

void q_webenginescript_operator_assign(void* self, void* other) {
    QWebEngineScript_OperatorAssign((QWebEngineScript*)self, (QWebEngineScript*)other);
}

const char* q_webenginescript_name(void* self) {
    libqt_string _str = QWebEngineScript_Name((QWebEngineScript*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginescript_set_name(void* self, const char* name) {
    QWebEngineScript_SetName((QWebEngineScript*)self, qstring(name));
}

QUrl* q_webenginescript_source_url(void* self) {
    return QWebEngineScript_SourceUrl((QWebEngineScript*)self);
}

void q_webenginescript_set_source_url(void* self, void* url) {
    QWebEngineScript_SetSourceUrl((QWebEngineScript*)self, (QUrl*)url);
}

const char* q_webenginescript_source_code(void* self) {
    libqt_string _str = QWebEngineScript_SourceCode((QWebEngineScript*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_webenginescript_set_source_code(void* self, const char* sourceCode) {
    QWebEngineScript_SetSourceCode((QWebEngineScript*)self, qstring(sourceCode));
}

int64_t q_webenginescript_injection_point(void* self) {
    return QWebEngineScript_InjectionPoint((QWebEngineScript*)self);
}

void q_webenginescript_set_injection_point(void* self, int64_t injectionPoint) {
    QWebEngineScript_SetInjectionPoint((QWebEngineScript*)self, injectionPoint);
}

uint32_t q_webenginescript_world_id(void* self) {
    return QWebEngineScript_WorldId((QWebEngineScript*)self);
}

void q_webenginescript_set_world_id(void* self, uint32_t worldId) {
    QWebEngineScript_SetWorldId((QWebEngineScript*)self, worldId);
}

bool q_webenginescript_runs_on_sub_frames(void* self) {
    return QWebEngineScript_RunsOnSubFrames((QWebEngineScript*)self);
}

void q_webenginescript_set_runs_on_sub_frames(void* self, bool on) {
    QWebEngineScript_SetRunsOnSubFrames((QWebEngineScript*)self, on);
}

bool q_webenginescript_operator_equal(void* self, void* other) {
    return QWebEngineScript_OperatorEqual((QWebEngineScript*)self, (QWebEngineScript*)other);
}

bool q_webenginescript_operator_not_equal(void* self, void* other) {
    return QWebEngineScript_OperatorNotEqual((QWebEngineScript*)self, (QWebEngineScript*)other);
}

void q_webenginescript_swap(void* self, void* other) {
    QWebEngineScript_Swap((QWebEngineScript*)self, (QWebEngineScript*)other);
}

void q_webenginescript_delete(void* self) {
    QWebEngineScript_Delete((QWebEngineScript*)(self));
}
