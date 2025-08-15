#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEFRAME_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEFRAME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineframe.html

/// q_webengineframe_new constructs a new QWebEngineFrame object.
///
/// @param param1 QWebEngineFrame*
QWebEngineFrame* q_webengineframe_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#isValid)
///
/// @param self QWebEngineFrame*
bool q_webengineframe_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineFrame*
const char* q_webengineframe_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#htmlName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineFrame*
const char* q_webengineframe_html_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#children)
///
/// @param self QWebEngineFrame*
libqt_list /* of QWebEngineFrame* */ q_webengineframe_children(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#url)
///
/// @param self QWebEngineFrame*
QUrl* q_webengineframe_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#size)
///
/// @param self QWebEngineFrame*
QSizeF* q_webengineframe_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#isMainFrame)
///
/// @param self QWebEngineFrame*
bool q_webengineframe_is_main_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
///
/// @param self QWebEngineFrame*
/// @param script const char*
void q_webengineframe_run_java_script(void* self, const char* script);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#printToPdf)
///
/// @param self QWebEngineFrame*
/// @param filePath const char*
void q_webengineframe_print_to_pdf(void* self, const char* filePath);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
///
/// @param self QWebEngineFrame*
/// @param script const char*
/// @param worldId uint32_t
void q_webengineframe_run_java_script22(void* self, const char* script, uint32_t worldId);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#dtor.QWebEngineFrame)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineFrame*
void q_webengineframe_delete(void* self);

#endif
