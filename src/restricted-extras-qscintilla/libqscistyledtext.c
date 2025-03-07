#include <string.h>
#include "libqscistyledtext.hpp"
#include "libqscistyledtext.h"

/// https://doc.qt.io/qt-6/qscistyledtext.html

/// q_scistyledtext_new constructs a new QsciStyledText object.
///
/// ``` const char* text, int style ```
QsciStyledText* q_scistyledtext_new(const char* text, int style) {
    return QsciStyledText_new(qstring(text), style);
}

/// q_scistyledtext_new2 constructs a new QsciStyledText object.
///
/// ``` const char* text, QsciStyle* style ```
QsciStyledText* q_scistyledtext_new2(const char* text, void* style) {
    return QsciStyledText_new2(qstring(text), (QsciStyle*)style);
}

/// q_scistyledtext_new3 constructs a new QsciStyledText object.
///
/// ``` QsciStyledText* param1 ```
QsciStyledText* q_scistyledtext_new3(void* param1) {
    return QsciStyledText_new3((QsciStyledText*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyledtext.html#apply)
///
/// ``` QsciStyledText* self, QsciScintillaBase* sci ```
void q_scistyledtext_apply(void* self, void* sci) {
    QsciStyledText_Apply((QsciStyledText*)self, (QsciScintillaBase*)sci);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyledtext.html#text)
///
/// ``` QsciStyledText* self ```
const char* q_scistyledtext_text(void* self) {
    libqt_string _str = QsciStyledText_Text((QsciStyledText*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyledtext.html#style)
///
/// ``` QsciStyledText* self ```
int32_t q_scistyledtext_style(void* self) {
    return QsciStyledText_Style((QsciStyledText*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QsciStyledText* self ```
void q_scistyledtext_delete(void* self) {
    QsciStyledText_Delete((QsciStyledText*)(self));
}