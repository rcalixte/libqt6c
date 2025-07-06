#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEFRAME_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineframe.html

/// q_webengineframe_new constructs a new QWebEngineFrame object.
///
/// ``` QWebEngineFrame* param1 ```
QWebEngineFrame* q_webengineframe_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#isValid)
///
/// ``` QWebEngineFrame* self ```
bool q_webengineframe_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#name)
///
/// ``` QWebEngineFrame* self ```
const char* q_webengineframe_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#htmlName)
///
/// ``` QWebEngineFrame* self ```
const char* q_webengineframe_html_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#children)
///
/// ``` QWebEngineFrame* self ```
libqt_list /* of QWebEngineFrame* */ q_webengineframe_children(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#url)
///
/// ``` QWebEngineFrame* self ```
QUrl* q_webengineframe_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#size)
///
/// ``` QWebEngineFrame* self ```
QSizeF* q_webengineframe_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#isMainFrame)
///
/// ``` QWebEngineFrame* self ```
bool q_webengineframe_is_main_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
///
/// ``` QWebEngineFrame* self, const char* script ```
void q_webengineframe_run_java_script(void* self, const char* script);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#printToPdf)
///
/// ``` QWebEngineFrame* self, const char* filePath ```
void q_webengineframe_print_to_pdf(void* self, const char* filePath);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
///
/// ``` QWebEngineFrame* self, const char* script, uint32_t worldId ```
void q_webengineframe_run_java_script22(void* self, const char* script, uint32_t worldId);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#dtor.QWebEngineFrame)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineFrame* self ```
void q_webengineframe_delete(void* self);

#endif
