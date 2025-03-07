#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINESCRIPT_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINESCRIPT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "../libqurl.h"

QWebEngineScript* q_webenginescript_new();
QWebEngineScript* q_webenginescript_new2(void* other);
void q_webenginescript_operator_assign(void* self, void* other);
const char* q_webenginescript_name(void* self);
void q_webenginescript_set_name(void* self, const char* name);
QUrl* q_webenginescript_source_url(void* self);
void q_webenginescript_set_source_url(void* self, void* url);
const char* q_webenginescript_source_code(void* self);
void q_webenginescript_set_source_code(void* self, const char* sourceCode);
int64_t q_webenginescript_injection_point(void* self);
void q_webenginescript_set_injection_point(void* self, int64_t injectionPoint);
uint32_t q_webenginescript_world_id(void* self);
void q_webenginescript_set_world_id(void* self, uint32_t worldId);
bool q_webenginescript_runs_on_sub_frames(void* self);
void q_webenginescript_set_runs_on_sub_frames(void* self, bool on);
bool q_webenginescript_operator_equal(void* self, void* other);
bool q_webenginescript_operator_not_equal(void* self, void* other);
void q_webenginescript_swap(void* self, void* other);
void q_webenginescript_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginescript.html#types

typedef enum {
    QWEBENGINESCRIPT_INJECTIONPOINT_DEFERRED = 0,
    QWEBENGINESCRIPT_INJECTIONPOINT_DOCUMENTREADY = 1,
    QWEBENGINESCRIPT_INJECTIONPOINT_DOCUMENTCREATION = 2
} QWebEngineScript__InjectionPoint;

typedef enum {
    QWEBENGINESCRIPT_SCRIPTWORLDID_MAINWORLD = 0,
    QWEBENGINESCRIPT_SCRIPTWORLDID_APPLICATIONWORLD = 1,
    QWEBENGINESCRIPT_SCRIPTWORLDID_USERWORLD = 2
} QWebEngineScript__ScriptWorldId;

#endif
