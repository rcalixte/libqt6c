#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEFRAME_H
#define WEBENGINE_LIBQWEBENGINEFRAME_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html)

/// q_webengineframe_new constructs a new QWebEngineFrame object.
///
/// @param param1 QWebEngineFrame*
///
QWebEngineFrame* q_webengineframe_new(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#isValid)
///
/// @param self const QWebEngineFrame*
///
bool q_webengineframe_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineFrame*
///
const char* q_webengineframe_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#htmlName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QWebEngineFrame*
///
const char* q_webengineframe_html_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#children)
///
/// @param self const QWebEngineFrame*
///
/// @return libqt_list of QWebEngineFrame*
///
libqt_list q_webengineframe_children(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#url)
///
/// @param self const QWebEngineFrame*
///
QUrl* q_webengineframe_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#size)
///
/// @param self const QWebEngineFrame*
///
QSizeF* q_webengineframe_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#isMainFrame)
///
/// @param self const QWebEngineFrame*
///
bool q_webengineframe_is_main_frame(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
///
/// @param self QWebEngineFrame*
/// @param script const char*
/// @param callback void func(QVariant* param1)
///
void q_webengineframe_run_java_script(void* self, const char* script, void (*callback)(const void* funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
///
/// @param self QWebEngineFrame*
/// @param script const char*
/// @param worldId uint32_t
/// @param callback void func(QVariant* param1)
///
void q_webengineframe_run_java_script2(void* self, const char* script, uint32_t worldId, void (*callback)(const void* funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
///
/// @param self QWebEngineFrame*
/// @param script const char*
///
void q_webengineframe_run_java_script3(void* self, const char* script);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
///
/// @param self QWebEngineFrame*
/// @param script const char*
/// @param callback QJSValue*
///
void q_webengineframe_run_java_script4(void* self, const char* script, const void* callback);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
///
/// @param self QWebEngineFrame*
/// @param script const char*
/// @param worldId uint32_t
/// @param callback QJSValue*
///
void q_webengineframe_run_java_script5(void* self, const char* script, uint32_t worldId, const void* callback);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#printToPdf)
///
/// @param self QWebEngineFrame*
/// @param filePath const char*
///
void q_webengineframe_print_to_pdf(void* self, const char* filePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#printToPdf)
///
/// @param self QWebEngineFrame*
/// @param callback void func(const char* param1)
///
void q_webengineframe_print_to_pdf2(void* self, void (*callback)(const char* funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#printToPdf)
///
/// @param self QWebEngineFrame*
/// @param callback QJSValue*
///
void q_webengineframe_print_to_pdf3(void* self, const void* callback);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#operator-eq)
///
/// @param self QWebEngineFrame*
/// @param param1 QWebEngineFrame*
///
void q_webengineframe_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
///
/// @param self QWebEngineFrame*
/// @param script const char*
/// @param worldId uint32_t
///
void q_webengineframe_run_java_script22(void* self, const char* script, uint32_t worldId);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#dtor.QWebEngineFrame)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineFrame*
///
void q_webengineframe_delete(void* self);

#endif
