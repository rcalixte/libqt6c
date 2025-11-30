#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCICOMMANDSET_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCICOMMANDSET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// @param self QsciCommandSet*
/// @param qs QSettings*
bool q_scicommandset_read_settings(void* self, void* qs);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// @param self QsciCommandSet*
/// @param qs QSettings*
bool q_scicommandset_write_settings(void* self, void* qs);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// @param self QsciCommandSet*
libqt_list /* of QsciCommand* */ q_scicommandset_commands(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// @param self QsciCommandSet*
void q_scicommandset_clear_keys(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// @param self QsciCommandSet*
void q_scicommandset_clear_alternate_keys(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// @param self QsciCommandSet*
/// @param key int
QsciCommand* q_scicommandset_bound_to(void* self, int key);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// @param self QsciCommandSet*
/// @param command enum QsciCommand__Command
QsciCommand* q_scicommandset_find(void* self, int32_t command);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// @param self QsciCommandSet*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scicommandset_read_settings2(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciCommandSet.html)
///
/// @param self QsciCommandSet*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scicommandset_write_settings2(void* self, void* qs, const char* prefix);
#endif
