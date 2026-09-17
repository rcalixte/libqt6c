#pragma once
#ifndef WEBENGINE_LIBQTWEBENGINECOREGLOBAL_H
#define WEBENGINE_LIBQTWEBENGINECOREGLOBAL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html#qWebEngineVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_qtwebenginecoreglobal_h_q_web_engine_version();

/// [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html#qWebEngineProcessName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_qtwebenginecoreglobal_h_q_web_engine_process_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html#qWebEngineChromiumVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_qtwebenginecoreglobal_h_q_web_engine_chromium_version();

/// [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html#qWebEngineChromiumSecurityPatchVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_qtwebenginecoreglobal_h_q_web_engine_chromium_security_patch_version();

/// [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html#qWebEngineGetDomainAndRegistry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param url QUrl*
///
const char* q_qtwebenginecoreglobal_h_q_web_engine_get_domain_and_registry(void* url);
#endif
