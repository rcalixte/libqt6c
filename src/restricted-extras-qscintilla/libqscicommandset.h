#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCICOMMANDSET_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCICOMMANDSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// ``` QsciCommandSet* self, QSettings* qs ```
bool q_scicommandset_read_settings(void* self, void* qs);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// ``` QsciCommandSet* self, QSettings* qs ```
bool q_scicommandset_write_settings(void* self, void* qs);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// ``` QsciCommandSet* self ```
libqt_list /* of QsciCommand* */ q_scicommandset_commands(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// ``` QsciCommandSet* self ```
void q_scicommandset_clear_keys(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// ``` QsciCommandSet* self ```
void q_scicommandset_clear_alternate_keys(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// ``` QsciCommandSet* self, int key ```
QsciCommand* q_scicommandset_bound_to(void* self, int key);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// ``` QsciCommandSet* self, enum QsciCommand__Command command ```
QsciCommand* q_scicommandset_find(void* self, int64_t command);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// ``` QsciCommandSet* self, QSettings* qs, const char* prefix ```
bool q_scicommandset_read_settings2(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// ``` QsciCommandSet* self, QSettings* qs, const char* prefix ```
bool q_scicommandset_write_settings2(void* self, void* qs, const char* prefix);
#endif
