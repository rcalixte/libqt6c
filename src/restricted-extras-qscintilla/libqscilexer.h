#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqfont.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqsettings.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qscilexer.html

/// q_scilexer_new constructs a new QsciLexer object.
///
///
QsciLexer* q_scilexer_new();

/// q_scilexer_new2 constructs a new QsciLexer object.
///
/// ``` QObject* parent ```
QsciLexer* q_scilexer_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexer* self ```
QMetaObject* q_scilexer_meta_object(void* self);

/// ``` QsciLexer* self, const char* param1 ```
void* q_scilexer_metacast(void* self, const char* param1);

/// ``` QsciLexer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexer_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)(QsciLexer*, enum QMetaObject__Call, int, void*) ```
void q_scilexer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#language)
///
/// ``` QsciLexer* self ```
const char* q_scilexer_language(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)() ```
void q_scilexer_on_language(void* self, const char* (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
const char* q_scilexer_qbase_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexer)
///
/// ``` QsciLexer* self ```
const char* q_scilexer_lexer(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)() ```
void q_scilexer_on_lexer(void* self, const char* (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
const char* q_scilexer_qbase_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_lexer_id(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_lexer_id(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_lexer_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexer* self ```
QsciAbstractAPIs* q_scilexer_apis(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// ``` QsciLexer* self ```
const char* q_scilexer_auto_completion_fillups(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)() ```
void q_scilexer_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
const char* q_scilexer_qbase_auto_completion_fillups(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// ``` QsciLexer* self ```
const char** q_scilexer_auto_completion_word_separators(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char** (*slot)() ```
void q_scilexer_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
const char** q_scilexer_qbase_auto_completion_word_separators(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_auto_indent_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_block_end(void* self, int* style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)(QsciLexer*, int*) ```
void q_scilexer_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Base class method implementation
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_qbase_block_end(void* self, int* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_block_lookback(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_block_lookback(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_block_lookback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_block_start(void* self, int* style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)(QsciLexer*, int*) ```
void q_scilexer_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Base class method implementation
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_qbase_block_start(void* self, int* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_block_start_keyword(void* self, int* style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)(QsciLexer*, int*) ```
void q_scilexer_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Base class method implementation
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_qbase_block_start_keyword(void* self, int* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_brace_style(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_brace_style(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_brace_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// ``` QsciLexer* self ```
bool q_scilexer_case_sensitive(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, bool (*slot)() ```
void q_scilexer_on_case_sensitive(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
bool q_scilexer_qbase_case_sensitive(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_color(void* self, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QColor* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_color(void* self, QColor* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_qbase_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// ``` QsciLexer* self, int style ```
bool q_scilexer_eol_fill(void* self, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, int) ```
void q_scilexer_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
bool q_scilexer_qbase_eol_fill(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// ``` QsciLexer* self, int style ```
QFont* q_scilexer_font(void* self, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QFont* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_font(void* self, QFont* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QFont* q_scilexer_qbase_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_indentation_guide_view(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_indentation_guide_view(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#keywords)
///
/// ``` QsciLexer* self, int set ```
const char* q_scilexer_keywords(void* self, int set);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_keywords(void* self, const char* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int set ```
const char* q_scilexer_qbase_keywords(void* self, int set);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_default_style(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_default_style(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_default_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#description)
///
/// ``` QsciLexer* self, int style ```
const char* q_scilexer_description(void* self, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_description(void* self, const char* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
const char* q_scilexer_qbase_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_paper(void* self, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QColor* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_paper(void* self, QColor* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_qbase_paper(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// ``` QsciLexer* self ```
QColor* q_scilexer_default_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_default_color_with_style(void* self, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QColor* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_qbase_default_color_with_style(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// ``` QsciLexer* self, int style ```
bool q_scilexer_default_eol_fill(void* self, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, int) ```
void q_scilexer_on_default_eol_fill(void* self, bool (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
bool q_scilexer_qbase_default_eol_fill(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// ``` QsciLexer* self ```
QFont* q_scilexer_default_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// ``` QsciLexer* self, int style ```
QFont* q_scilexer_default_font_with_style(void* self, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QFont* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QFont* q_scilexer_qbase_default_font_with_style(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexer* self ```
QColor* q_scilexer_default_paper(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_default_paper_with_style(void* self, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QColor* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_qbase_default_paper_with_style(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexer* self ```
QsciScintilla* q_scilexer_editor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexer* self, QsciAbstractAPIs* apis ```
void q_scilexer_set_a_p_is(void* self, void* apis);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexer* self, QColor* c ```
void q_scilexer_set_default_color(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexer* self, QFont* f ```
void q_scilexer_set_default_font(void* self, void* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexer* self, QColor* c ```
void q_scilexer_set_default_paper(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// ``` QsciLexer* self, QsciScintilla* editor ```
void q_scilexer_set_editor(void* self, void* editor);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QsciScintilla*) ```
void q_scilexer_on_set_editor(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QsciLexer* self, QsciScintilla* editor ```
void q_scilexer_qbase_set_editor(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexer* self, QSettings* qs ```
bool q_scilexer_read_settings(void* self, void* qs);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// ``` QsciLexer* self ```
void q_scilexer_refresh_properties(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)() ```
void q_scilexer_on_refresh_properties(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
void q_scilexer_qbase_refresh_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_style_bits_needed(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_style_bits_needed(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_style_bits_needed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// ``` QsciLexer* self ```
const char* q_scilexer_word_characters(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)() ```
void q_scilexer_on_word_characters(void* self, const char* (*slot)());

/// Base class method implementation
///
/// ``` QsciLexer* self ```
const char* q_scilexer_qbase_word_characters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexer* self, QSettings* qs ```
bool q_scilexer_write_settings(void* self, void* qs);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// ``` QsciLexer* self, int autoindentstyle ```
void q_scilexer_set_auto_indent_style(void* self, int autoindentstyle);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, int) ```
void q_scilexer_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, int autoindentstyle ```
void q_scilexer_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_set_color(void* self, void* c, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexer_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_qbase_set_color(void* self, void* c, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// ``` QsciLexer* self, bool eoffill, int style ```
void q_scilexer_set_eol_fill(void* self, bool eoffill, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexer_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, bool eoffill, int style ```
void q_scilexer_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// ``` QsciLexer* self, QFont* f, int style ```
void q_scilexer_set_font(void* self, void* f, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexer_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, QFont* f, int style ```
void q_scilexer_qbase_set_font(void* self, void* f, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_set_paper(void* self, void* c, int style);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexer_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Base class method implementation
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_qbase_set_paper(void* self, void* c, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_color_changed(void* self, void* c, int style);

/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexer_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexer* self, bool eolfilled, int style ```
void q_scilexer_eol_fill_changed(void* self, bool eolfilled, int style);

/// ``` QsciLexer* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexer_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexer* self, QFont* f, int style ```
void q_scilexer_font_changed(void* self, void* f, int style);

/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexer_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_paper_changed(void* self, void* c, int style);

/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexer_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexer* self, const char* prop, const char* val ```
void q_scilexer_property_changed(void* self, const char* prop, const char* val);

/// ``` QsciLexer* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexer_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_read_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, QSettings*, const char*) ```
void q_scilexer_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_write_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, QSettings*, const char*) ```
void q_scilexer_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexer_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_read_settings2(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexer* self ```
const char* q_scilexer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexer* self, char* name ```
void q_scilexer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexer* self ```
bool q_scilexer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexer* self ```
bool q_scilexer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexer* self ```
bool q_scilexer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexer* self ```
bool q_scilexer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexer* self, bool b ```
bool q_scilexer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexer* self ```
QThread* q_scilexer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexer* self, QThread* thread ```
void q_scilexer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexer* self, int interval ```
int32_t q_scilexer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexer* self, int id ```
void q_scilexer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexer* self ```
libqt_list /* of QObject* */ q_scilexer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexer* self, QObject* parent ```
void q_scilexer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexer* self, QObject* filterObj ```
void q_scilexer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexer* self, QObject* obj ```
void q_scilexer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexer_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexer* self ```
void q_scilexer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexer* self ```
void q_scilexer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexer* self, const char* name, QVariant* value ```
bool q_scilexer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexer* self, const char* name ```
QVariant* q_scilexer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexer* self ```
const char** q_scilexer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexer* self ```
QBindingStorage* q_scilexer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexer* self ```
QBindingStorage* q_scilexer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexer* self ```
void q_scilexer_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexer* self, void (*slot)(QObject*) ```
void q_scilexer_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexer* self ```
QObject* q_scilexer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexer* self, const char* classname ```
bool q_scilexer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexer* self ```
void q_scilexer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexer_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexer* self, QObject* param1 ```
void q_scilexer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexer* self, void (*slot)(QObject*, QObject*) ```
void q_scilexer_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QEvent* event ```
bool q_scilexer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QEvent* event ```
bool q_scilexer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, QEvent*) ```
void q_scilexer_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QObject* watched, QEvent* event ```
bool q_scilexer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QObject* watched, QEvent* event ```
bool q_scilexer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, QObject*, QEvent*) ```
void q_scilexer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QTimerEvent* event ```
void q_scilexer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QTimerEvent* event ```
void q_scilexer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QTimerEvent*) ```
void q_scilexer_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QChildEvent* event ```
void q_scilexer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QChildEvent* event ```
void q_scilexer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QChildEvent*) ```
void q_scilexer_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QEvent* event ```
void q_scilexer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QEvent* event ```
void q_scilexer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QEvent*) ```
void q_scilexer_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
void q_scilexer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
void q_scilexer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QMetaMethod*) ```
void q_scilexer_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
void q_scilexer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
void q_scilexer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QMetaMethod*) ```
void q_scilexer_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self ```
QObject* q_scilexer_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self ```
QObject* q_scilexer_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, QObject* (*slot)() ```
void q_scilexer_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, const char* signal ```
int32_t q_scilexer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, const char* signal ```
int32_t q_scilexer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, int32_t (*slot)(QsciLexer*, const char*) ```
void q_scilexer_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
bool q_scilexer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
bool q_scilexer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, QMetaMethod*) ```
void q_scilexer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexer* self ```
void q_scilexer_delete(void* self);

#endif
