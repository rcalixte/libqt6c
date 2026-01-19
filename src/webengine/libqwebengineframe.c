#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "libqwebengineframe.hpp"
#include "libqwebengineframe.h"

QWebEngineFrame* q_webengineframe_new(void* param1) {
    return QWebEngineFrame_new((QWebEngineFrame*)param1);
}

bool q_webengineframe_is_valid(void* self) {
    return QWebEngineFrame_IsValid((QWebEngineFrame*)self);
}

const char* q_webengineframe_name(void* self) {
    libqt_string _str = QWebEngineFrame_Name((QWebEngineFrame*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_webengineframe_html_name(void* self) {
    libqt_string _str = QWebEngineFrame_HtmlName((QWebEngineFrame*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QWebEngineFrame* */ q_webengineframe_children(void* self) {
    libqt_list _arr = QWebEngineFrame_Children((QWebEngineFrame*)self);
    return _arr;
}

QUrl* q_webengineframe_url(void* self) {
    return QWebEngineFrame_Url((QWebEngineFrame*)self);
}

QSizeF* q_webengineframe_size(void* self) {
    return QWebEngineFrame_Size((QWebEngineFrame*)self);
}

bool q_webengineframe_is_main_frame(void* self) {
    return QWebEngineFrame_IsMainFrame((QWebEngineFrame*)self);
}

void q_webengineframe_run_java_script3(void* self, const char* script) {
    QWebEngineFrame_RunJavaScript3((QWebEngineFrame*)self, qstring(script));
}

void q_webengineframe_print_to_pdf(void* self, const char* filePath) {
    QWebEngineFrame_PrintToPdf((QWebEngineFrame*)self, qstring(filePath));
}

void q_webengineframe_run_java_script22(void* self, const char* script, uint32_t worldId) {
    QWebEngineFrame_RunJavaScript22((QWebEngineFrame*)self, qstring(script), worldId);
}

void q_webengineframe_delete(void* self) {
    QWebEngineFrame_Delete((QWebEngineFrame*)(self));
}
