#include "libqsciscintillabase.hpp"
#include "libqscistyle.hpp"
#include "libqscistyledtext.hpp"
#include "libqscistyledtext.h"

QsciStyledText* q_scistyledtext_new(const char* text, int style) {
    return QsciStyledText_New(qstring(text), style);
}

QsciStyledText* q_scistyledtext_new2(const char* text, const void* style) {
    return QsciStyledText_New2(qstring(text), (QsciStyle*)style);
}

QsciStyledText* q_scistyledtext_new3(const void* param1) {
    return QsciStyledText_New3((QsciStyledText*)param1);
}

void q_scistyledtext_apply(const void* self, void* sci) {
    QsciStyledText_Apply((QsciStyledText*)self, (QsciScintillaBase*)sci);
}

const char* q_scistyledtext_text(const void* self) {
    libqt_string _str = QsciStyledText_Text((QsciStyledText*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_scistyledtext_style(const void* self) {
    return QsciStyledText_Style((QsciStyledText*)self);
}

void q_scistyledtext_operator_assign(void* self, const void* param1) {
    QsciStyledText_OperatorAssign((QsciStyledText*)self, (QsciStyledText*)param1);
}

void q_scistyledtext_delete(void* self) {
    QsciStyledText_Delete((QsciStyledText*)(self));
}
