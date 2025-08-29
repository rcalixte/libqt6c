#include "libqtextcursor.hpp"
#include "libqtextdocument.hpp"
#include "libqtextdocumentfragment.hpp"
#include "libqtextdocumentfragment.h"

QTextDocumentFragment* q_textdocumentfragment_new() {
    return QTextDocumentFragment_new();
}

QTextDocumentFragment* q_textdocumentfragment_new2(void* document) {
    return QTextDocumentFragment_new2((QTextDocument*)document);
}

QTextDocumentFragment* q_textdocumentfragment_new3(void* range) {
    return QTextDocumentFragment_new3((QTextCursor*)range);
}

QTextDocumentFragment* q_textdocumentfragment_new4(void* rhs) {
    return QTextDocumentFragment_new4((QTextDocumentFragment*)rhs);
}

void q_textdocumentfragment_operator_assign(void* self, void* rhs) {
    QTextDocumentFragment_OperatorAssign((QTextDocumentFragment*)self, (QTextDocumentFragment*)rhs);
}

bool q_textdocumentfragment_is_empty(void* self) {
    return QTextDocumentFragment_IsEmpty((QTextDocumentFragment*)self);
}

const char* q_textdocumentfragment_to_plain_text(void* self) {
    libqt_string _str = QTextDocumentFragment_ToPlainText((QTextDocumentFragment*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textdocumentfragment_to_raw_text(void* self) {
    libqt_string _str = QTextDocumentFragment_ToRawText((QTextDocumentFragment*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textdocumentfragment_to_html(void* self) {
    libqt_string _str = QTextDocumentFragment_ToHtml((QTextDocumentFragment*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textdocumentfragment_to_markdown(void* self) {
    libqt_string _str = QTextDocumentFragment_ToMarkdown((QTextDocumentFragment*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTextDocumentFragment* q_textdocumentfragment_from_plain_text(const char* plainText) {
    return QTextDocumentFragment_FromPlainText(qstring(plainText));
}

QTextDocumentFragment* q_textdocumentfragment_from_html(const char* html) {
    return QTextDocumentFragment_FromHtml(qstring(html));
}

QTextDocumentFragment* q_textdocumentfragment_from_markdown(const char* markdown) {
    return QTextDocumentFragment_FromMarkdown(qstring(markdown));
}

const char* q_textdocumentfragment_to_markdown1(void* self, int32_t features) {
    libqt_string _str = QTextDocumentFragment_ToMarkdown1((QTextDocumentFragment*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTextDocumentFragment* q_textdocumentfragment_from_html2(const char* html, void* resourceProvider) {
    return QTextDocumentFragment_FromHtml2(qstring(html), (QTextDocument*)resourceProvider);
}

QTextDocumentFragment* q_textdocumentfragment_from_markdown2(const char* markdown, int32_t features) {
    return QTextDocumentFragment_FromMarkdown2(qstring(markdown), features);
}

void q_textdocumentfragment_delete(void* self) {
    QTextDocumentFragment_Delete((QTextDocumentFragment*)(self));
}
