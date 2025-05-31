#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISTYLE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqcolor.h"
#include "../libqfont.h"
#include <string.h>

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html

/// q_scistyle_new constructs a new QsciStyle object.
///
///
QsciStyle* q_scistyle_new();

/// q_scistyle_new2 constructs a new QsciStyle object.
///
/// ``` int style, const char* description, QColor* color, QColor* paper, QFont* font ```
QsciStyle* q_scistyle_new2(int style, const char* description, void* color, void* paper, void* font);

/// q_scistyle_new3 constructs a new QsciStyle object.
///
/// ``` QsciStyle* param1 ```
QsciStyle* q_scistyle_new3(void* param1);

/// q_scistyle_new4 constructs a new QsciStyle object.
///
/// ``` int style ```
QsciStyle* q_scistyle_new4(int style);

/// q_scistyle_new5 constructs a new QsciStyle object.
///
/// ``` int style, const char* description, QColor* color, QColor* paper, QFont* font, bool eolFill ```
QsciStyle* q_scistyle_new5(int style, const char* description, void* color, void* paper, void* font, bool eolFill);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, QsciScintillaBase* sci ```
void q_scistyle_apply(void* self, void* sci);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, int style ```
void q_scistyle_set_style(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
int32_t q_scistyle_style(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, const char* description ```
void q_scistyle_set_description(void* self, const char* description);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
const char* q_scistyle_description(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, QColor* color ```
void q_scistyle_set_color(void* self, void* color);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
QColor* q_scistyle_color(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, QColor* paper ```
void q_scistyle_set_paper(void* self, void* paper);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
QColor* q_scistyle_paper(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, QFont* font ```
void q_scistyle_set_font(void* self, void* font);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
QFont* q_scistyle_font(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, bool fill ```
void q_scistyle_set_eol_fill(void* self, bool fill);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
bool q_scistyle_eol_fill(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, enum QsciStyle__TextCase text_case ```
void q_scistyle_set_text_case(void* self, int64_t text_case);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
int64_t q_scistyle_text_case(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, bool visible ```
void q_scistyle_set_visible(void* self, bool visible);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
bool q_scistyle_visible(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, bool changeable ```
void q_scistyle_set_changeable(void* self, bool changeable);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
bool q_scistyle_changeable(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self, bool hotspot ```
void q_scistyle_set_hotspot(void* self, bool hotspot);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
bool q_scistyle_hotspot(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// ``` QsciStyle* self ```
void q_scistyle_refresh(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// Delete this object from C++ memory.
///
/// ``` QsciStyle* self ```
void q_scistyle_delete(void* self);

typedef enum {
    QSCISTYLE_TEXTCASE_ORIGINALCASE = 0,
    QSCISTYLE_TEXTCASE_UPPERCASE = 1,
    QSCISTYLE_TEXTCASE_LOWERCASE = 2
} QsciStyle__TextCase;

#endif
