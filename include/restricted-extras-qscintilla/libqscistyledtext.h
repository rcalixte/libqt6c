#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISTYLEDTEXT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISTYLEDTEXT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>

/// https://doc.qt.io/qt-6/qscistyledtext.html

/// q_scistyledtext_new constructs a new QsciStyledText object.
///
/// ``` const char* text, int style ```
QsciStyledText* q_scistyledtext_new(const char* text, int style);

/// q_scistyledtext_new2 constructs a new QsciStyledText object.
///
/// ``` const char* text, QsciStyle* style ```
QsciStyledText* q_scistyledtext_new2(const char* text, void* style);

/// q_scistyledtext_new3 constructs a new QsciStyledText object.
///
/// ``` QsciStyledText* param1 ```
QsciStyledText* q_scistyledtext_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyledtext.html#apply)
///
/// ``` QsciStyledText* self, QsciScintillaBase* sci ```
void q_scistyledtext_apply(void* self, void* sci);

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyledtext.html#text)
///
/// ``` QsciStyledText* self ```
const char* q_scistyledtext_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscistyledtext.html#style)
///
/// ``` QsciStyledText* self ```
int32_t q_scistyledtext_style(void* self);

/// Delete this object from C++ memory.
///
/// ``` QsciStyledText* self ```
void q_scistyledtext_delete(void* self);

#endif
