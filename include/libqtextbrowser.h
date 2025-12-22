#pragma once
#ifndef SRC_QT6C_LIBQTEXTBROWSER_H
#define SRC_QT6C_LIBQTEXTBROWSER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html)

/// q_textbrowser_new constructs a new QTextBrowser object.
///
/// @param parent QWidget*
///
QTextBrowser* q_textbrowser_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html)

/// q_textbrowser_new2 constructs a new QTextBrowser object.
///
QTextBrowser* q_textbrowser_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTextBrowser*
///
const QMetaObject* q_textbrowser_meta_object(void* self);

/// @param self QTextBrowser*
/// @param param1 const char*
///
void* q_textbrowser_metacast(void* self, const char* param1);

/// @param self QTextBrowser*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textbrowser_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback int32_t func(QTextBrowser* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_textbrowser_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textbrowser_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_textbrowser_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#source)
///
/// @param self QTextBrowser*
///
QUrl* q_textbrowser_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#sourceType)
///
/// @param self QTextBrowser*
///
/// @return enum QTextDocument__ResourceType
///
int32_t q_textbrowser_source_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#searchPaths)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTextBrowser*
///
const char** q_textbrowser_search_paths(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#setSearchPaths)
///
/// @param self QTextBrowser*
/// @param paths const char**
///
void q_textbrowser_set_search_paths(void* self, const char* paths[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#loadResource)
///
/// @param self QTextBrowser*
/// @param type int
/// @param name QUrl*
///
QVariant* q_textbrowser_load_resource(void* self, int type, void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#loadResource)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback QVariant* func(QTextBrowser* self, int type, QUrl* name)
///
void q_textbrowser_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#loadResource)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param type int
/// @param name QUrl*
///
QVariant* q_textbrowser_qbase_load_resource(void* self, int type, void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#isBackwardAvailable)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_backward_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#isForwardAvailable)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_forward_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#clearHistory)
///
/// @param self QTextBrowser*
///
void q_textbrowser_clear_history(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#historyTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
/// @param param1 int
///
const char* q_textbrowser_history_title(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#historyUrl)
///
/// @param self QTextBrowser*
/// @param param1 int
///
QUrl* q_textbrowser_history_url(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backwardHistoryCount)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_backward_history_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forwardHistoryCount)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_forward_history_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#openExternalLinks)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_open_external_links(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#setOpenExternalLinks)
///
/// @param self QTextBrowser*
/// @param open bool
///
void q_textbrowser_set_open_external_links(void* self, bool open);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#openLinks)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_open_links(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#setOpenLinks)
///
/// @param self QTextBrowser*
/// @param open bool
///
void q_textbrowser_set_open_links(void* self, bool open);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#setSource)
///
/// @param self QTextBrowser*
/// @param name QUrl*
///
void q_textbrowser_set_source(void* self, void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backward)
///
/// @param self QTextBrowser*
///
void q_textbrowser_backward(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backward)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func()
///
void q_textbrowser_on_backward(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backward)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
///
void q_textbrowser_qbase_backward(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forward)
///
/// @param self QTextBrowser*
///
void q_textbrowser_forward(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forward)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func()
///
void q_textbrowser_on_forward(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forward)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
///
void q_textbrowser_qbase_forward(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#home)
///
/// @param self QTextBrowser*
///
void q_textbrowser_home(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#home)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func()
///
void q_textbrowser_on_home(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#home)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
///
void q_textbrowser_qbase_home(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#reload)
///
/// @param self QTextBrowser*
///
void q_textbrowser_reload(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#reload)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func()
///
void q_textbrowser_on_reload(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#reload)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
///
void q_textbrowser_qbase_reload(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backwardAvailable)
///
/// @param self QTextBrowser*
/// @param param1 bool
///
void q_textbrowser_backward_available(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backwardAvailable)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, bool param1)
///
void q_textbrowser_on_backward_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forwardAvailable)
///
/// @param self QTextBrowser*
/// @param param1 bool
///
void q_textbrowser_forward_available(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forwardAvailable)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, bool param1)
///
void q_textbrowser_on_forward_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#historyChanged)
///
/// @param self QTextBrowser*
///
void q_textbrowser_history_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#historyChanged)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self)
///
void q_textbrowser_on_history_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#sourceChanged)
///
/// @param self QTextBrowser*
/// @param param1 QUrl*
///
void q_textbrowser_source_changed(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#sourceChanged)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QUrl* param1)
///
void q_textbrowser_on_source_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#highlighted)
///
/// @param self QTextBrowser*
/// @param param1 QUrl*
///
void q_textbrowser_highlighted(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#highlighted)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QUrl* param1)
///
void q_textbrowser_on_highlighted(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#anchorClicked)
///
/// @param self QTextBrowser*
/// @param param1 QUrl*
///
void q_textbrowser_anchor_clicked(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#anchorClicked)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QUrl* param1)
///
void q_textbrowser_on_anchor_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#event)
///
/// @param self QTextBrowser*
/// @param e QEvent*
///
bool q_textbrowser_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback bool func(QTextBrowser* self, QEvent* e)
///
void q_textbrowser_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#event)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param e QEvent*
///
bool q_textbrowser_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#keyPressEvent)
///
/// @param self QTextBrowser*
/// @param ev QKeyEvent*
///
void q_textbrowser_key_press_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QKeyEvent* ev)
///
void q_textbrowser_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param ev QKeyEvent*
///
void q_textbrowser_qbase_key_press_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseMoveEvent)
///
/// @param self QTextBrowser*
/// @param ev QMouseEvent*
///
void q_textbrowser_mouse_move_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QMouseEvent* ev)
///
void q_textbrowser_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param ev QMouseEvent*
///
void q_textbrowser_qbase_mouse_move_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mousePressEvent)
///
/// @param self QTextBrowser*
/// @param ev QMouseEvent*
///
void q_textbrowser_mouse_press_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QMouseEvent* ev)
///
void q_textbrowser_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param ev QMouseEvent*
///
void q_textbrowser_qbase_mouse_press_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseReleaseEvent)
///
/// @param self QTextBrowser*
/// @param ev QMouseEvent*
///
void q_textbrowser_mouse_release_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QMouseEvent* ev)
///
void q_textbrowser_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param ev QMouseEvent*
///
void q_textbrowser_qbase_mouse_release_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusOutEvent)
///
/// @param self QTextBrowser*
/// @param ev QFocusEvent*
///
void q_textbrowser_focus_out_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QFocusEvent* ev)
///
void q_textbrowser_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param ev QFocusEvent*
///
void q_textbrowser_qbase_focus_out_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusNextPrevChild)
///
/// @param self QTextBrowser*
/// @param next bool
///
bool q_textbrowser_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback bool func(QTextBrowser* self, bool next)
///
void q_textbrowser_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param next bool
///
bool q_textbrowser_qbase_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#paintEvent)
///
/// @param self QTextBrowser*
/// @param e QPaintEvent*
///
void q_textbrowser_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QPaintEvent* e)
///
void q_textbrowser_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param e QPaintEvent*
///
void q_textbrowser_qbase_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#doSetSource)
///
/// @param self QTextBrowser*
/// @param name QUrl*
/// @param type enum QTextDocument__ResourceType
///
void q_textbrowser_do_set_source(void* self, void* name, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#doSetSource)
///
/// Allows for overriding the related default method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QUrl* name, enum QTextDocument__ResourceType type)
///
void q_textbrowser_on_do_set_source(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#doSetSource)
///
/// Base class method implementation
///
/// @param self QTextBrowser*
/// @param name QUrl*
/// @param type enum QTextDocument__ResourceType
///
void q_textbrowser_qbase_do_set_source(void* self, void* name, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_textbrowser_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_textbrowser_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#setSource)
///
/// @param self QTextBrowser*
/// @param name QUrl*
/// @param type enum QTextDocument__ResourceType
///
void q_textbrowser_set_source2(void* self, void* name, int32_t type);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
///
/// @param self QTextBrowser*
/// @param document QTextDocument*
///
void q_textbrowser_set_document(void* self, void* document);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#document)
///
/// @param self QTextBrowser*
///
QTextDocument* q_textbrowser_document(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
///
/// @param self QTextBrowser*
/// @param placeholderText const char*
///
void q_textbrowser_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_placeholder_text(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
///
/// @param self QTextBrowser*
/// @param cursor QTextCursor*
///
void q_textbrowser_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
///
/// @param self QTextBrowser*
///
QTextCursor* q_textbrowser_text_cursor(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_read_only(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setReadOnly)
///
/// @param self QTextBrowser*
/// @param ro bool
///
void q_textbrowser_set_read_only(void* self, bool ro);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
///
/// @param self QTextBrowser*
/// @param flags flag of enum Qt__TextInteractionFlag
///
void q_textbrowser_set_text_interaction_flags(void* self, int32_t flags);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
///
/// @param self QTextBrowser*
///
/// @return flag of enum Qt__TextInteractionFlag
///
int32_t q_textbrowser_text_interaction_flags(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
///
/// @param self QTextBrowser*
///
double q_textbrowser_font_point_size(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_font_family(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_font_weight(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_font_underline(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_font_italic(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textColor)
///
/// @param self QTextBrowser*
///
QColor* q_textbrowser_text_color(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
///
/// @param self QTextBrowser*
///
QColor* q_textbrowser_text_background_color(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
///
/// @param self QTextBrowser*
///
QFont* q_textbrowser_current_font(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#alignment)
///
/// @param self QTextBrowser*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_textbrowser_alignment(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
///
/// @param self QTextBrowser*
/// @param modifier QTextCharFormat*
///
void q_textbrowser_merge_current_char_format(void* self, void* modifier);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
///
/// @param self QTextBrowser*
/// @param format QTextCharFormat*
///
void q_textbrowser_set_current_char_format(void* self, void* format);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
///
/// @param self QTextBrowser*
///
QTextCharFormat* q_textbrowser_current_char_format(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
///
/// @param self QTextBrowser*
///
/// @return flag of enum QTextEdit__AutoFormattingFlag
///
int64_t q_textbrowser_auto_formatting(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
///
/// @param self QTextBrowser*
/// @param features flag of enum QTextEdit__AutoFormattingFlag
///
void q_textbrowser_set_auto_formatting(void* self, int64_t features);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_tab_changes_focus(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
///
/// @param self QTextBrowser*
/// @param b bool
///
void q_textbrowser_set_tab_changes_focus(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
///
/// @param self QTextBrowser*
/// @param title const char*
///
void q_textbrowser_set_document_title(void* self, const char* title);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_document_title(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_undo_redo_enabled(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
///
/// @param self QTextBrowser*
/// @param enable bool
///
void q_textbrowser_set_undo_redo_enabled(void* self, bool enable);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
///
/// @param self QTextBrowser*
///
/// @return enum QTextEdit__LineWrapMode
///
int32_t q_textbrowser_line_wrap_mode(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
///
/// @param self QTextBrowser*
/// @param mode enum QTextEdit__LineWrapMode
///
void q_textbrowser_set_line_wrap_mode(void* self, int32_t mode);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_line_wrap_column_or_width(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
///
/// @param self QTextBrowser*
/// @param w int
///
void q_textbrowser_set_line_wrap_column_or_width(void* self, int w);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
///
/// @param self QTextBrowser*
///
/// @return enum QTextOption__WrapMode
///
int32_t q_textbrowser_word_wrap_mode(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
///
/// @param self QTextBrowser*
/// @param policy enum QTextOption__WrapMode
///
void q_textbrowser_set_word_wrap_mode(void* self, int32_t policy);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self QTextBrowser*
/// @param exp const char*
///
bool q_textbrowser_find(void* self, const char* exp);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self QTextBrowser*
/// @param exp QRegularExpression*
///
bool q_textbrowser_find2(void* self, void* exp);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_to_plain_text(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_to_html(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_to_markdown(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
///
/// @param self QTextBrowser*
///
void q_textbrowser_ensure_cursor_visible(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self QTextBrowser*
///
QMenu* q_textbrowser_create_standard_context_menu(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self QTextBrowser*
/// @param position QPoint*
///
QMenu* q_textbrowser_create_standard_context_menu2(void* self, void* position);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
///
/// @param self QTextBrowser*
/// @param pos QPoint*
///
QTextCursor* q_textbrowser_cursor_for_position(void* self, void* pos);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self QTextBrowser*
/// @param cursor QTextCursor*
///
QRect* q_textbrowser_cursor_rect(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self QTextBrowser*
///
QRect* q_textbrowser_cursor_rect2(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
/// @param pos QPoint*
///
const char* q_textbrowser_anchor_at(void* self, void* pos);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_overwrite_mode(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
///
/// @param self QTextBrowser*
/// @param overwrite bool
///
void q_textbrowser_set_overwrite_mode(void* self, bool overwrite);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
///
/// @param self QTextBrowser*
///
double q_textbrowser_tab_stop_distance(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
///
/// @param self QTextBrowser*
/// @param distance double
///
void q_textbrowser_set_tab_stop_distance(void* self, double distance);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_cursor_width(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
///
/// @param self QTextBrowser*
/// @param width int
///
void q_textbrowser_set_cursor_width(void* self, int width);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_accept_rich_text(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
///
/// @param self QTextBrowser*
/// @param accept bool
///
void q_textbrowser_set_accept_rich_text(void* self, bool accept);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
///
/// @param self QTextBrowser*
/// @param selections libqt_list /* of QTextEdit__ExtraSelection* */
///
void q_textbrowser_set_extra_selections(void* self, libqt_list selections);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
///
/// @param self QTextBrowser*
///
libqt_list /* of QTextEdit__ExtraSelection* */ q_textbrowser_extra_selections(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self QTextBrowser*
/// @param operation enum QTextCursor__MoveOperation
///
void q_textbrowser_move_cursor(void* self, int32_t operation);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_can_paste(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#print)
///
/// @param self QTextBrowser*
/// @param printer QPagedPaintDevice*
///
void q_textbrowser_print(void* self, void* printer);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// @param self QTextBrowser*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* q_textbrowser_input_method_query2(void* self, int64_t query, void* argument);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
///
/// @param self QTextBrowser*
/// @param s double
///
void q_textbrowser_set_font_point_size(void* self, double s);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
///
/// @param self QTextBrowser*
/// @param fontFamily const char*
///
void q_textbrowser_set_font_family(void* self, const char* fontFamily);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
///
/// @param self QTextBrowser*
/// @param w int
///
void q_textbrowser_set_font_weight(void* self, int w);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
///
/// @param self QTextBrowser*
/// @param b bool
///
void q_textbrowser_set_font_underline(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
///
/// @param self QTextBrowser*
/// @param b bool
///
void q_textbrowser_set_font_italic(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
///
/// @param self QTextBrowser*
/// @param c QColor*
///
void q_textbrowser_set_text_color(void* self, void* c);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
///
/// @param self QTextBrowser*
/// @param c QColor*
///
void q_textbrowser_set_text_background_color(void* self, void* c);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
///
/// @param self QTextBrowser*
/// @param f QFont*
///
void q_textbrowser_set_current_font(void* self, void* f);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
///
/// @param self QTextBrowser*
/// @param a flag of enum Qt__AlignmentFlag
///
void q_textbrowser_set_alignment(void* self, int32_t a);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
///
/// @param self QTextBrowser*
/// @param text const char*
///
void q_textbrowser_set_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
///
/// @param self QTextBrowser*
/// @param text const char*
///
void q_textbrowser_set_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
///
/// @param self QTextBrowser*
/// @param markdown const char*
///
void q_textbrowser_set_markdown(void* self, const char* markdown);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setText)
///
/// @param self QTextBrowser*
/// @param text const char*
///
void q_textbrowser_set_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cut)
///
/// @param self QTextBrowser*
///
void q_textbrowser_cut(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copy)
///
/// @param self QTextBrowser*
///
void q_textbrowser_copy(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paste)
///
/// @param self QTextBrowser*
///
void q_textbrowser_paste(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undo)
///
/// @param self QTextBrowser*
///
void q_textbrowser_undo(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redo)
///
/// @param self QTextBrowser*
///
void q_textbrowser_redo(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#clear)
///
/// @param self QTextBrowser*
///
void q_textbrowser_clear(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
///
/// @param self QTextBrowser*
///
void q_textbrowser_select_all(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
///
/// @param self QTextBrowser*
/// @param text const char*
///
void q_textbrowser_insert_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
///
/// @param self QTextBrowser*
/// @param text const char*
///
void q_textbrowser_insert_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#append)
///
/// @param self QTextBrowser*
/// @param text const char*
///
void q_textbrowser_append(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
///
/// @param self QTextBrowser*
/// @param name const char*
///
void q_textbrowser_scroll_to_anchor(void* self, const char* name);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self QTextBrowser*
///
void q_textbrowser_zoom_in(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self QTextBrowser*
///
void q_textbrowser_zoom_out(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self QTextBrowser*
///
void q_textbrowser_text_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self)
///
void q_textbrowser_on_text_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self QTextBrowser*
/// @param b bool
///
void q_textbrowser_undo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, bool b)
///
void q_textbrowser_on_undo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self QTextBrowser*
/// @param b bool
///
void q_textbrowser_redo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, bool b)
///
void q_textbrowser_on_redo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self QTextBrowser*
/// @param format QTextCharFormat*
///
void q_textbrowser_current_char_format_changed(void* self, void* format);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QTextCharFormat* format)
///
void q_textbrowser_on_current_char_format_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self QTextBrowser*
/// @param b bool
///
void q_textbrowser_copy_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, bool b)
///
void q_textbrowser_on_copy_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self QTextBrowser*
///
void q_textbrowser_selection_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self)
///
void q_textbrowser_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self QTextBrowser*
///
void q_textbrowser_cursor_position_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self)
///
void q_textbrowser_on_cursor_position_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self QTextBrowser*
/// @param exp const char*
/// @param options flag of enum QTextDocument__FindFlag
///
bool q_textbrowser_find22(void* self, const char* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self QTextBrowser*
/// @param exp QRegularExpression*
/// @param options flag of enum QTextDocument__FindFlag
///
bool q_textbrowser_find23(void* self, void* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
/// @param features flag of enum QTextDocument__MarkdownFeature
///
const char* q_textbrowser_to_markdown1(void* self, int32_t features);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self QTextBrowser*
/// @param operation enum QTextCursor__MoveOperation
/// @param mode enum QTextCursor__MoveMode
///
void q_textbrowser_move_cursor2(void* self, int32_t operation, int32_t mode);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self QTextBrowser*
/// @param range int
///
void q_textbrowser_zoom_in1(void* self, int range);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self QTextBrowser*
/// @param range int
///
void q_textbrowser_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QTextBrowser*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_textbrowser_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QTextBrowser*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_textbrowser_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QTextBrowser*
///
QScrollBar* q_textbrowser_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QTextBrowser*
/// @param scrollbar QScrollBar*
///
void q_textbrowser_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QTextBrowser*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_textbrowser_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QTextBrowser*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_textbrowser_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QTextBrowser*
///
QScrollBar* q_textbrowser_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QTextBrowser*
/// @param scrollbar QScrollBar*
///
void q_textbrowser_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QTextBrowser*
///
QWidget* q_textbrowser_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QTextBrowser*
/// @param widget QWidget*
///
void q_textbrowser_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QTextBrowser*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_textbrowser_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QTextBrowser*
/// @param alignment flag of enum Qt__AlignmentFlag
///
libqt_list /* of QWidget* */ q_textbrowser_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QTextBrowser*
///
QWidget* q_textbrowser_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QTextBrowser*
/// @param widget QWidget*
///
void q_textbrowser_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QTextBrowser*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_textbrowser_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QTextBrowser*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_textbrowser_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QTextBrowser*
/// @param frameStyle int
///
void q_textbrowser_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QTextBrowser*
///
/// @return enum QFrame__Shape
///
int32_t q_textbrowser_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QTextBrowser*
/// @param frameShape enum QFrame__Shape
///
void q_textbrowser_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QTextBrowser*
///
/// @return enum QFrame__Shadow
///
int32_t q_textbrowser_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QTextBrowser*
/// @param frameShadow enum QFrame__Shadow
///
void q_textbrowser_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QTextBrowser*
/// @param lineWidth int
///
void q_textbrowser_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QTextBrowser*
/// @param midLineWidth int
///
void q_textbrowser_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QTextBrowser*
///
QRect* q_textbrowser_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QTextBrowser*
/// @param frameRect QRect*
///
void q_textbrowser_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QTextBrowser*
///
uintptr_t q_textbrowser_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QTextBrowser*
///
void q_textbrowser_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QTextBrowser*
///
uintptr_t q_textbrowser_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QTextBrowser*
///
uintptr_t q_textbrowser_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QTextBrowser*
///
QStyle* q_textbrowser_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QTextBrowser*
/// @param style QStyle*
///
void q_textbrowser_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QTextBrowser*
///
/// @return enum Qt__WindowModality
///
int32_t q_textbrowser_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QTextBrowser*
/// @param windowModality enum Qt__WindowModality
///
void q_textbrowser_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QTextBrowser*
/// @param param1 QWidget*
///
bool q_textbrowser_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QTextBrowser*
/// @param enabled bool
///
void q_textbrowser_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QTextBrowser*
/// @param disabled bool
///
void q_textbrowser_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QTextBrowser*
/// @param windowModified bool
///
void q_textbrowser_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QTextBrowser*
///
QRect* q_textbrowser_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QTextBrowser*
///
const QRect* q_textbrowser_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QTextBrowser*
///
QRect* q_textbrowser_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QTextBrowser*
///
QPoint* q_textbrowser_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QTextBrowser*
///
QRect* q_textbrowser_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QTextBrowser*
///
QRect* q_textbrowser_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QTextBrowser*
///
QRegion* q_textbrowser_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTextBrowser*
/// @param minimumSize QSize*
///
void q_textbrowser_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTextBrowser*
/// @param minw int
/// @param minh int
///
void q_textbrowser_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTextBrowser*
/// @param maximumSize QSize*
///
void q_textbrowser_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTextBrowser*
/// @param maxw int
/// @param maxh int
///
void q_textbrowser_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QTextBrowser*
/// @param minw int
///
void q_textbrowser_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QTextBrowser*
/// @param minh int
///
void q_textbrowser_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QTextBrowser*
/// @param maxw int
///
void q_textbrowser_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QTextBrowser*
/// @param maxh int
///
void q_textbrowser_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTextBrowser*
/// @param sizeIncrement QSize*
///
void q_textbrowser_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTextBrowser*
/// @param w int
/// @param h int
///
void q_textbrowser_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTextBrowser*
/// @param baseSize QSize*
///
void q_textbrowser_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTextBrowser*
/// @param basew int
/// @param baseh int
///
void q_textbrowser_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTextBrowser*
/// @param fixedSize QSize*
///
void q_textbrowser_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTextBrowser*
/// @param w int
/// @param h int
///
void q_textbrowser_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QTextBrowser*
/// @param w int
///
void q_textbrowser_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QTextBrowser*
/// @param h int
///
void q_textbrowser_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTextBrowser*
/// @param param1 QPointF*
///
QPointF* q_textbrowser_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTextBrowser*
/// @param param1 QPoint*
///
QPoint* q_textbrowser_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTextBrowser*
/// @param param1 QPointF*
///
QPointF* q_textbrowser_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTextBrowser*
/// @param param1 QPoint*
///
QPoint* q_textbrowser_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTextBrowser*
/// @param param1 QPointF*
///
QPointF* q_textbrowser_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTextBrowser*
/// @param param1 QPoint*
///
QPoint* q_textbrowser_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTextBrowser*
/// @param param1 QPointF*
///
QPointF* q_textbrowser_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTextBrowser*
/// @param param1 QPoint*
///
QPoint* q_textbrowser_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTextBrowser*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_textbrowser_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTextBrowser*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_textbrowser_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTextBrowser*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_textbrowser_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTextBrowser*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_textbrowser_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QTextBrowser*
///
QWidget* q_textbrowser_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QTextBrowser*
///
QWidget* q_textbrowser_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QTextBrowser*
///
QWidget* q_textbrowser_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QTextBrowser*
///
const QPalette* q_textbrowser_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QTextBrowser*
/// @param palette QPalette*
///
void q_textbrowser_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QTextBrowser*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_textbrowser_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QTextBrowser*
///
/// @return enum QPalette__ColorRole
///
int32_t q_textbrowser_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QTextBrowser*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_textbrowser_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QTextBrowser*
///
/// @return enum QPalette__ColorRole
///
int32_t q_textbrowser_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QTextBrowser*
///
const QFont* q_textbrowser_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QTextBrowser*
/// @param font QFont*
///
void q_textbrowser_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QTextBrowser*
///
QFontMetrics* q_textbrowser_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QTextBrowser*
///
QFontInfo* q_textbrowser_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QTextBrowser*
///
QCursor* q_textbrowser_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QTextBrowser*
/// @param cursor QCursor*
///
void q_textbrowser_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QTextBrowser*
///
void q_textbrowser_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QTextBrowser*
/// @param enable bool
///
void q_textbrowser_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QTextBrowser*
/// @param enable bool
///
void q_textbrowser_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTextBrowser*
/// @param mask QBitmap*
///
void q_textbrowser_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTextBrowser*
/// @param mask QRegion*
///
void q_textbrowser_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QTextBrowser*
///
QRegion* q_textbrowser_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QTextBrowser*
///
void q_textbrowser_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextBrowser*
/// @param target QPaintDevice*
///
void q_textbrowser_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextBrowser*
/// @param painter QPainter*
///
void q_textbrowser_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTextBrowser*
///
QPixmap* q_textbrowser_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QTextBrowser*
///
QGraphicsEffect* q_textbrowser_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QTextBrowser*
/// @param effect QGraphicsEffect*
///
void q_textbrowser_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTextBrowser*
/// @param type enum Qt__GestureType
///
void q_textbrowser_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QTextBrowser*
/// @param type enum Qt__GestureType
///
void q_textbrowser_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QTextBrowser*
/// @param windowTitle const char*
///
void q_textbrowser_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QTextBrowser*
/// @param styleSheet const char*
///
void q_textbrowser_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QTextBrowser*
/// @param icon QIcon*
///
void q_textbrowser_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QTextBrowser*
///
QIcon* q_textbrowser_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QTextBrowser*
/// @param windowIconText const char*
///
void q_textbrowser_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QTextBrowser*
/// @param windowRole const char*
///
void q_textbrowser_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QTextBrowser*
/// @param filePath const char*
///
void q_textbrowser_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QTextBrowser*
/// @param level double
///
void q_textbrowser_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QTextBrowser*
///
double q_textbrowser_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QTextBrowser*
/// @param toolTip const char*
///
void q_textbrowser_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QTextBrowser*
/// @param msec int
///
void q_textbrowser_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QTextBrowser*
/// @param statusTip const char*
///
void q_textbrowser_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QTextBrowser*
/// @param whatsThis const char*
///
void q_textbrowser_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QTextBrowser*
/// @param name const char*
///
void q_textbrowser_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QTextBrowser*
/// @param description const char*
///
void q_textbrowser_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QTextBrowser*
/// @param direction enum Qt__LayoutDirection
///
void q_textbrowser_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QTextBrowser*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_textbrowser_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QTextBrowser*
///
void q_textbrowser_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QTextBrowser*
/// @param locale QLocale*
///
void q_textbrowser_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QTextBrowser*
///
QLocale* q_textbrowser_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QTextBrowser*
///
void q_textbrowser_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTextBrowser*
///
void q_textbrowser_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QTextBrowser*
///
void q_textbrowser_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QTextBrowser*
///
void q_textbrowser_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTextBrowser*
/// @param reason enum Qt__FocusReason
///
void q_textbrowser_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QTextBrowser*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_textbrowser_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QTextBrowser*
/// @param policy enum Qt__FocusPolicy
///
void q_textbrowser_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_textbrowser_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QTextBrowser*
/// @param focusProxy QWidget*
///
void q_textbrowser_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QTextBrowser*
///
QWidget* q_textbrowser_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QTextBrowser*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_textbrowser_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QTextBrowser*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_textbrowser_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTextBrowser*
///
void q_textbrowser_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTextBrowser*
/// @param param1 QCursor*
///
void q_textbrowser_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QTextBrowser*
///
void q_textbrowser_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QTextBrowser*
///
void q_textbrowser_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QTextBrowser*
///
void q_textbrowser_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTextBrowser*
/// @param key QKeySequence*
///
int32_t q_textbrowser_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QTextBrowser*
/// @param id int
///
void q_textbrowser_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTextBrowser*
/// @param id int
///
void q_textbrowser_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTextBrowser*
/// @param id int
///
void q_textbrowser_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_textbrowser_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_textbrowser_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QTextBrowser*
/// @param enable bool
///
void q_textbrowser_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QTextBrowser*
///
QGraphicsProxyWidget* q_textbrowser_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTextBrowser*
///
void q_textbrowser_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTextBrowser*
///
void q_textbrowser_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTextBrowser*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_textbrowser_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTextBrowser*
/// @param param1 QRect*
///
void q_textbrowser_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTextBrowser*
/// @param param1 QRegion*
///
void q_textbrowser_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTextBrowser*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_textbrowser_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTextBrowser*
/// @param param1 QRect*
///
void q_textbrowser_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTextBrowser*
/// @param param1 QRegion*
///
void q_textbrowser_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QTextBrowser*
/// @param hidden bool
///
void q_textbrowser_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QTextBrowser*
///
void q_textbrowser_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QTextBrowser*
///
void q_textbrowser_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QTextBrowser*
///
void q_textbrowser_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QTextBrowser*
///
void q_textbrowser_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QTextBrowser*
///
void q_textbrowser_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QTextBrowser*
///
void q_textbrowser_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QTextBrowser*
///
void q_textbrowser_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QTextBrowser*
///
void q_textbrowser_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QTextBrowser*
/// @param param1 QWidget*
///
void q_textbrowser_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTextBrowser*
/// @param x int
/// @param y int
///
void q_textbrowser_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTextBrowser*
/// @param param1 QPoint*
///
void q_textbrowser_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTextBrowser*
/// @param w int
/// @param h int
///
void q_textbrowser_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTextBrowser*
/// @param param1 QSize*
///
void q_textbrowser_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTextBrowser*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_textbrowser_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTextBrowser*
/// @param geometry QRect*
///
void q_textbrowser_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTextBrowser*
///
char* q_textbrowser_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QTextBrowser*
/// @param geometry const char*
///
bool q_textbrowser_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QTextBrowser*
///
void q_textbrowser_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QTextBrowser*
/// @param param1 QWidget*
///
bool q_textbrowser_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QTextBrowser*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_textbrowser_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QTextBrowser*
/// @param state flag of enum Qt__WindowState
///
void q_textbrowser_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QTextBrowser*
/// @param state flag of enum Qt__WindowState
///
void q_textbrowser_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QTextBrowser*
///
QSizePolicy* q_textbrowser_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTextBrowser*
/// @param sizePolicy QSizePolicy*
///
void q_textbrowser_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTextBrowser*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_textbrowser_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QTextBrowser*
///
QRegion* q_textbrowser_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTextBrowser*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_textbrowser_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTextBrowser*
/// @param margins QMargins*
///
void q_textbrowser_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QTextBrowser*
///
QMargins* q_textbrowser_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QTextBrowser*
///
QRect* q_textbrowser_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QTextBrowser*
///
QLayout* q_textbrowser_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QTextBrowser*
/// @param layout QLayout*
///
void q_textbrowser_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QTextBrowser*
///
void q_textbrowser_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTextBrowser*
/// @param parent QWidget*
///
void q_textbrowser_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTextBrowser*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_textbrowser_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTextBrowser*
/// @param dx int
/// @param dy int
///
void q_textbrowser_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTextBrowser*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_textbrowser_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QTextBrowser*
///
QWidget* q_textbrowser_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QTextBrowser*
///
QWidget* q_textbrowser_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QTextBrowser*
///
QWidget* q_textbrowser_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QTextBrowser*
/// @param on bool
///
void q_textbrowser_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTextBrowser*
/// @param action QAction*
///
void q_textbrowser_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QTextBrowser*
/// @param actions libqt_list /* of QAction* */
///
void q_textbrowser_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QTextBrowser*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void q_textbrowser_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QTextBrowser*
/// @param before QAction*
/// @param action QAction*
///
void q_textbrowser_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QTextBrowser*
/// @param action QAction*
///
void q_textbrowser_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QTextBrowser*
///
libqt_list /* of QAction* */ q_textbrowser_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTextBrowser*
/// @param text const char*
///
QAction* q_textbrowser_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTextBrowser*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_textbrowser_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTextBrowser*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_textbrowser_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTextBrowser*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_textbrowser_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QTextBrowser*
///
QWidget* q_textbrowser_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QTextBrowser*
/// @param type flag of enum Qt__WindowType
///
void q_textbrowser_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QTextBrowser*
///
/// @return flag of enum Qt__WindowType
///
int64_t q_textbrowser_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTextBrowser*
/// @param param1 enum Qt__WindowType
///
void q_textbrowser_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QTextBrowser*
/// @param type flag of enum Qt__WindowType
///
void q_textbrowser_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QTextBrowser*
///
/// @return enum Qt__WindowType
///
int64_t q_textbrowser_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTextBrowser*
/// @param x int
/// @param y int
///
QWidget* q_textbrowser_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTextBrowser*
/// @param p QPoint*
///
QWidget* q_textbrowser_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTextBrowser*
/// @param p QPointF*
///
QWidget* q_textbrowser_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTextBrowser*
/// @param param1 enum Qt__WidgetAttribute
///
void q_textbrowser_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QTextBrowser*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_textbrowser_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QTextBrowser*
///
void q_textbrowser_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QTextBrowser*
/// @param child QWidget*
///
bool q_textbrowser_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QTextBrowser*
/// @param enabled bool
///
void q_textbrowser_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QTextBrowser*
///
QBackingStore* q_textbrowser_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QTextBrowser*
///
QWindow* q_textbrowser_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QTextBrowser*
///
QScreen* q_textbrowser_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QTextBrowser*
/// @param screen QScreen*
///
void q_textbrowser_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_textbrowser_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTextBrowser*
/// @param title const char*
///
void q_textbrowser_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, const char* title)
///
void q_textbrowser_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTextBrowser*
/// @param icon QIcon*
///
void q_textbrowser_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QIcon* icon)
///
void q_textbrowser_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTextBrowser*
/// @param iconText const char*
///
void q_textbrowser_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, const char* iconText)
///
void q_textbrowser_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTextBrowser*
/// @param pos QPoint*
///
void q_textbrowser_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QPoint* pos)
///
void q_textbrowser_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QTextBrowser*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t q_textbrowser_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QTextBrowser*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_textbrowser_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextBrowser*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_textbrowser_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextBrowser*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_textbrowser_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextBrowser*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_textbrowser_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextBrowser*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_textbrowser_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextBrowser*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_textbrowser_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextBrowser*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_textbrowser_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTextBrowser*
/// @param rectangle QRect*
///
QPixmap* q_textbrowser_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTextBrowser*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_textbrowser_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTextBrowser*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_textbrowser_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTextBrowser*
/// @param id int
/// @param enable bool
///
void q_textbrowser_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTextBrowser*
/// @param id int
/// @param enable bool
///
void q_textbrowser_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTextBrowser*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_textbrowser_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTextBrowser*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_textbrowser_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_textbrowser_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_textbrowser_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextBrowser*
///
const char* q_textbrowser_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextBrowser*
/// @param name char*
///
void q_textbrowser_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextBrowser*
/// @param b bool
///
bool q_textbrowser_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTextBrowser*
///
QThread* q_textbrowser_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextBrowser*
/// @param thread QThread*
///
bool q_textbrowser_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextBrowser*
/// @param interval int
///
int32_t q_textbrowser_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextBrowser*
/// @param id int
///
void q_textbrowser_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextBrowser*
/// @param id enum Qt__TimerId
///
void q_textbrowser_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTextBrowser*
///
libqt_list /* of QObject* */ q_textbrowser_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextBrowser*
/// @param filterObj QObject*
///
void q_textbrowser_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextBrowser*
/// @param obj QObject*
///
void q_textbrowser_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_textbrowser_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextBrowser*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_textbrowser_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_textbrowser_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_textbrowser_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTextBrowser*
///
void q_textbrowser_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTextBrowser*
///
void q_textbrowser_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextBrowser*
/// @param name const char*
/// @param value QVariant*
///
bool q_textbrowser_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTextBrowser*
/// @param name const char*
///
QVariant* q_textbrowser_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTextBrowser*
///
const char** q_textbrowser_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextBrowser*
///
QBindingStorage* q_textbrowser_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextBrowser*
///
const QBindingStorage* q_textbrowser_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextBrowser*
///
void q_textbrowser_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self)
///
void q_textbrowser_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTextBrowser*
///
QObject* q_textbrowser_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTextBrowser*
/// @param classname const char*
///
bool q_textbrowser_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextBrowser*
///
void q_textbrowser_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextBrowser*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_textbrowser_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextBrowser*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_textbrowser_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_textbrowser_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextBrowser*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_textbrowser_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextBrowser*
/// @param param1 QObject*
///
void q_textbrowser_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QObject* param1)
///
void q_textbrowser_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QTextBrowser*
///
bool q_textbrowser_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QTextBrowser*
///
double q_textbrowser_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QTextBrowser*
///
double q_textbrowser_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_textbrowser_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_textbrowser_encode_metric_f(int32_t metric, double value);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param property enum Qt__InputMethodQuery
///
QVariant* q_textbrowser_input_method_query(void* self, int64_t property);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param property enum Qt__InputMethodQuery
///
QVariant* q_textbrowser_qbase_input_method_query(void* self, int64_t property);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback QVariant* func(QTextBrowser* self, enum Qt__InputMethodQuery property)
///
void q_textbrowser_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QTimerEvent*
///
void q_textbrowser_timer_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QTimerEvent*
///
void q_textbrowser_qbase_timer_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QTimerEvent* e)
///
void q_textbrowser_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QKeyEvent*
///
void q_textbrowser_key_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QKeyEvent*
///
void q_textbrowser_qbase_key_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QKeyEvent* e)
///
void q_textbrowser_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QResizeEvent*
///
void q_textbrowser_resize_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QResizeEvent*
///
void q_textbrowser_qbase_resize_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QResizeEvent* e)
///
void q_textbrowser_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QMouseEvent*
///
void q_textbrowser_mouse_double_click_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QMouseEvent*
///
void q_textbrowser_qbase_mouse_double_click_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QMouseEvent* e)
///
void q_textbrowser_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QContextMenuEvent*
///
void q_textbrowser_context_menu_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QContextMenuEvent*
///
void q_textbrowser_qbase_context_menu_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QContextMenuEvent* e)
///
void q_textbrowser_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QDragEnterEvent*
///
void q_textbrowser_drag_enter_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QDragEnterEvent*
///
void q_textbrowser_qbase_drag_enter_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QDragEnterEvent* e)
///
void q_textbrowser_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QDragLeaveEvent*
///
void q_textbrowser_drag_leave_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QDragLeaveEvent*
///
void q_textbrowser_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QDragLeaveEvent* e)
///
void q_textbrowser_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QDragMoveEvent*
///
void q_textbrowser_drag_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QDragMoveEvent*
///
void q_textbrowser_qbase_drag_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QDragMoveEvent* e)
///
void q_textbrowser_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QDropEvent*
///
void q_textbrowser_drop_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QDropEvent*
///
void q_textbrowser_qbase_drop_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QDropEvent* e)
///
void q_textbrowser_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QFocusEvent*
///
void q_textbrowser_focus_in_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QFocusEvent*
///
void q_textbrowser_qbase_focus_in_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QFocusEvent* e)
///
void q_textbrowser_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 QShowEvent*
///
void q_textbrowser_show_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 QShowEvent*
///
void q_textbrowser_qbase_show_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QShowEvent* param1)
///
void q_textbrowser_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QEvent*
///
void q_textbrowser_change_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QEvent*
///
void q_textbrowser_qbase_change_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QEvent* e)
///
void q_textbrowser_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QWheelEvent*
///
void q_textbrowser_wheel_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param e QWheelEvent*
///
void q_textbrowser_qbase_wheel_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QWheelEvent* e)
///
void q_textbrowser_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
QMimeData* q_textbrowser_create_mime_data_from_selection(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
QMimeData* q_textbrowser_qbase_create_mime_data_from_selection(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback QMimeData* func()
///
void q_textbrowser_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)());

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param source QMimeData*
///
bool q_textbrowser_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param source QMimeData*
///
bool q_textbrowser_qbase_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback bool func(QTextBrowser* self, QMimeData* source)
///
void q_textbrowser_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param source QMimeData*
///
void q_textbrowser_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param source QMimeData*
///
void q_textbrowser_qbase_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QMimeData* source)
///
void q_textbrowser_on_insert_from_mime_data(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 QInputMethodEvent*
///
void q_textbrowser_input_method_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 QInputMethodEvent*
///
void q_textbrowser_qbase_input_method_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QInputMethodEvent* param1)
///
void q_textbrowser_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param dx int
/// @param dy int
///
void q_textbrowser_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param dx int
/// @param dy int
///
void q_textbrowser_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, int dx, int dy)
///
void q_textbrowser_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param cursor QTextCursor*
///
void q_textbrowser_do_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param cursor QTextCursor*
///
void q_textbrowser_qbase_do_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QTextCursor* cursor)
///
void q_textbrowser_on_do_set_text_cursor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback QSize* func()
///
void q_textbrowser_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback QSize* func()
///
void q_textbrowser_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param viewport QWidget*
///
void q_textbrowser_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param viewport QWidget*
///
void q_textbrowser_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QWidget* viewport)
///
void q_textbrowser_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_textbrowser_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_textbrowser_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback bool func(QTextBrowser* self, QObject* param1, QEvent* param2)
///
void q_textbrowser_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 QEvent*
///
bool q_textbrowser_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 QEvent*
///
bool q_textbrowser_qbase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback bool func(QTextBrowser* self, QEvent* param1)
///
void q_textbrowser_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
QSize* q_textbrowser_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback QSize* func()
///
void q_textbrowser_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param option QStyleOptionFrame*
///
void q_textbrowser_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param option QStyleOptionFrame*
///
void q_textbrowser_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QStyleOptionFrame* option)
///
void q_textbrowser_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback int32_t func()
///
void q_textbrowser_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param visible bool
///
void q_textbrowser_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param visible bool
///
void q_textbrowser_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, bool visible)
///
void q_textbrowser_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 int
///
int32_t q_textbrowser_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 int
///
int32_t q_textbrowser_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback int32_t func(QTextBrowser* self, int param1)
///
void q_textbrowser_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
bool q_textbrowser_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
bool q_textbrowser_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback bool func()
///
void q_textbrowser_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
QPaintEngine* q_textbrowser_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
QPaintEngine* q_textbrowser_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback QPaintEngine* func()
///
void q_textbrowser_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QEnterEvent*
///
void q_textbrowser_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QEnterEvent*
///
void q_textbrowser_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QEnterEvent* event)
///
void q_textbrowser_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QEvent*
///
void q_textbrowser_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QEvent*
///
void q_textbrowser_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QEvent* event)
///
void q_textbrowser_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QMoveEvent*
///
void q_textbrowser_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QMoveEvent*
///
void q_textbrowser_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QMoveEvent* event)
///
void q_textbrowser_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QCloseEvent*
///
void q_textbrowser_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QCloseEvent*
///
void q_textbrowser_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QCloseEvent* event)
///
void q_textbrowser_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QTabletEvent*
///
void q_textbrowser_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QTabletEvent*
///
void q_textbrowser_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QTabletEvent* event)
///
void q_textbrowser_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QActionEvent*
///
void q_textbrowser_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QActionEvent*
///
void q_textbrowser_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QActionEvent* event)
///
void q_textbrowser_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QHideEvent*
///
void q_textbrowser_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QHideEvent*
///
void q_textbrowser_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QHideEvent* event)
///
void q_textbrowser_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_textbrowser_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_textbrowser_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback bool func(QTextBrowser* self, const char* eventType, void* message, intptr_t* result)
///
void q_textbrowser_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_textbrowser_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_textbrowser_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback int32_t func(QTextBrowser* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_textbrowser_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param painter QPainter*
///
void q_textbrowser_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param painter QPainter*
///
void q_textbrowser_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QPainter* painter)
///
void q_textbrowser_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param offset QPoint*
///
QPaintDevice* q_textbrowser_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param offset QPoint*
///
QPaintDevice* q_textbrowser_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback QPaintDevice* func(QTextBrowser* self, QPoint* offset)
///
void q_textbrowser_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
QPainter* q_textbrowser_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
QPainter* q_textbrowser_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback QPainter* func()
///
void q_textbrowser_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QChildEvent*
///
void q_textbrowser_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QChildEvent*
///
void q_textbrowser_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QChildEvent* event)
///
void q_textbrowser_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QEvent*
///
void q_textbrowser_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param event QEvent*
///
void q_textbrowser_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QEvent* event)
///
void q_textbrowser_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param signal QMetaMethod*
///
void q_textbrowser_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param signal QMetaMethod*
///
void q_textbrowser_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QMetaMethod* signal)
///
void q_textbrowser_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param signal QMetaMethod*
///
void q_textbrowser_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param signal QMetaMethod*
///
void q_textbrowser_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QMetaMethod* signal)
///
void q_textbrowser_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param range float
///
void q_textbrowser_zoom_in_f(void* self, float range);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param range float
///
void q_textbrowser_qbase_zoom_in_f(void* self, float range);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, float range)
///
void q_textbrowser_on_zoom_in_f(void* self, void (*callback)(void*, float));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_textbrowser_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_textbrowser_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, int left, int top, int right, int bottom)
///
void q_textbrowser_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
QMargins* q_textbrowser_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
QMargins* q_textbrowser_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback QMargins* func()
///
void q_textbrowser_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 QPainter*
///
void q_textbrowser_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param param1 QPainter*
///
void q_textbrowser_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, QPainter* param1)
///
void q_textbrowser_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
void q_textbrowser_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
void q_textbrowser_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func()
///
void q_textbrowser_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
void q_textbrowser_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
void q_textbrowser_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func()
///
void q_textbrowser_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
void q_textbrowser_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
void q_textbrowser_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback void func()
///
void q_textbrowser_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
bool q_textbrowser_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
bool q_textbrowser_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback bool func()
///
void q_textbrowser_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
bool q_textbrowser_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
bool q_textbrowser_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback bool func()
///
void q_textbrowser_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
QObject* q_textbrowser_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
QObject* q_textbrowser_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback QObject* func()
///
void q_textbrowser_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
///
int32_t q_textbrowser_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback int32_t func()
///
void q_textbrowser_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param signal const char*
///
int32_t q_textbrowser_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param signal const char*
///
int32_t q_textbrowser_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback int32_t func(QTextBrowser* self, const char* signal)
///
void q_textbrowser_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param signal QMetaMethod*
///
bool q_textbrowser_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param signal QMetaMethod*
///
bool q_textbrowser_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback bool func(QTextBrowser* self, QMetaMethod* signal)
///
void q_textbrowser_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextBrowser*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_textbrowser_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_textbrowser_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextBrowser*
/// @param callback double func(QTextBrowser* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_textbrowser_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextBrowser*
/// @param callback void func(QTextBrowser* self, const char* objectName)
///
void q_textbrowser_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#dtor.QTextBrowser)
///
/// Delete this object from C++ memory.
///
/// @param self QTextBrowser*
///
void q_textbrowser_delete(void* self);

#endif
