#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBRICHTEXTBROWSERFINDBAR_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBRICHTEXTBROWSERFINDBAR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)

/// k_textcustomeditor__richtextbrowserfindbar_new constructs a new TextCustomEditor::RichTextBrowserFindBar object.
///
/// @param view QTextBrowser*
///
TextCustomEditor__RichTextBrowserFindBar* k_textcustomeditor__richtextbrowserfindbar_new(void* view);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)

/// k_textcustomeditor__richtextbrowserfindbar_new2 constructs a new TextCustomEditor::RichTextBrowserFindBar object.
///
/// @param view QTextBrowser*
/// @param parent QWidget*
///
TextCustomEditor__RichTextBrowserFindBar* k_textcustomeditor__richtextbrowserfindbar_new2(void* view, void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const QMetaObject* k_textcustomeditor__richtextbrowserfindbar_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback const QMetaObject* func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_meta_object` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_meta_object k_textcustomeditor__richtextbrowserfindbar_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const QMetaObject* k_textcustomeditor__richtextbrowserfindbar_super_meta_object(void* self);

/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 const char*
///
void* k_textcustomeditor__richtextbrowserfindbar_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void* func(TextCustomEditor__RichTextBrowserFindBar* self, const char* param1)
///
void k_textcustomeditor__richtextbrowserfindbar_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_metacast` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_metacast k_textcustomeditor__richtextbrowserfindbar_super_metacast

/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 const char*
///
void* k_textcustomeditor__richtextbrowserfindbar_super_metacast(void* self, const char* param1);

/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserFindBar* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textcustomeditor__richtextbrowserfindbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_metacall` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_metacall k_textcustomeditor__richtextbrowserfindbar_super_metacall

/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textcustomeditor__richtextbrowserfindbar_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_view_is_read_only(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_view_is_read_only(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_view_is_read_only` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_view_is_read_only k_textcustomeditor__richtextbrowserfindbar_super_view_is_read_only

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_super_view_is_read_only(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_document_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_document_is_empty(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_document_is_empty` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_document_is_empty k_textcustomeditor__richtextbrowserfindbar_super_document_is_empty

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_super_document_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param text const char*
/// @param searchOptions flag of enum TextCustomEditor__TextEditFindBarBase__FindFlag
///
bool k_textcustomeditor__richtextbrowserfindbar_search_in_document(void* self, const char* text, int32_t searchOptions);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func(TextCustomEditor__RichTextBrowserFindBar* self, const char* text, flag of enum TextCustomEditor__TextEditFindBarBase__FindFlag searchOptions)
///
void k_textcustomeditor__richtextbrowserfindbar_on_search_in_document(void* self, bool (*callback)(void*, const char*, int32_t));

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_search_in_document` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_search_in_document k_textcustomeditor__richtextbrowserfindbar_super_search_in_document

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param text const char*
/// @param searchOptions flag of enum TextCustomEditor__TextEditFindBarBase__FindFlag
///
bool k_textcustomeditor__richtextbrowserfindbar_super_search_in_document(void* self, const char* text, int32_t searchOptions);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param regExp QRegularExpression*
/// @param searchOptions flag of enum TextCustomEditor__TextEditFindBarBase__FindFlag
///
bool k_textcustomeditor__richtextbrowserfindbar_search_in_document2(void* self, void* regExp, int32_t searchOptions);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func(TextCustomEditor__RichTextBrowserFindBar* self, QRegularExpression* regExp, flag of enum TextCustomEditor__TextEditFindBarBase__FindFlag searchOptions)
///
void k_textcustomeditor__richtextbrowserfindbar_on_search_in_document2(void* self, bool (*callback)(void*, void*, int32_t));

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_search_in_document2` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_search_in_document2 k_textcustomeditor__richtextbrowserfindbar_super_search_in_document2

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param regExp QRegularExpression*
/// @param searchOptions flag of enum TextCustomEditor__TextEditFindBarBase__FindFlag
///
bool k_textcustomeditor__richtextbrowserfindbar_super_search_in_document2(void* self, void* regExp, int32_t searchOptions);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_auto_search_move_cursor(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_auto_search_move_cursor(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_auto_search_move_cursor` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_auto_search_move_cursor k_textcustomeditor__richtextbrowserfindbar_super_auto_search_move_cursor

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_super_auto_search_move_cursor(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param backward bool
/// @param isAutoSearch bool
///
void k_textcustomeditor__richtextbrowserfindbar_slot_search_text(void* self, bool backward, bool isAutoSearch);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch)
///
void k_textcustomeditor__richtextbrowserfindbar_on_slot_search_text(void* self, void (*callback)(void*, bool, bool));

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_slot_search_text` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_slot_search_text k_textcustomeditor__richtextbrowserfindbar_super_slot_search_text

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param backward bool
/// @param isAutoSearch bool
///
void k_textcustomeditor__richtextbrowserfindbar_super_slot_search_text(void* self, bool backward, bool isAutoSearch);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textcustomeditor__richtextbrowserfindbar_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textcustomeditor__richtextbrowserfindbar_tr3(const char* s, const char* c, int n);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_text(void* self);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param text const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_text(void* self, const char* text);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_focus_and_set_cursor(void* self);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_show_replace(void* self);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_show_find(void* self);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param hide bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_hide_when_close(void* self, bool hide);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param message const char*
///
void k_textcustomeditor__richtextbrowserfindbar_display_message_indicator(void* self, const char* message);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, const char* message)
///
void k_textcustomeditor__richtextbrowserfindbar_on_display_message_indicator(void* self, void (*callback)(void*, const char*));

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_hide_find_bar(void* self);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self)
///
void k_textcustomeditor__richtextbrowserfindbar_on_hide_find_bar(void* self, void (*callback)(void*));

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_find_next(void* self);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_find_prev(void* self);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param str const char*
///
void k_textcustomeditor__richtextbrowserfindbar_auto_search(void* self, const char* str);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_close_bar(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
uintptr_t k_textcustomeditor__richtextbrowserfindbar_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
uintptr_t k_textcustomeditor__richtextbrowserfindbar_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
uintptr_t k_textcustomeditor__richtextbrowserfindbar_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QStyle* k_textcustomeditor__richtextbrowserfindbar_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param style QStyle*
///
void k_textcustomeditor__richtextbrowserfindbar_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return enum Qt__WindowModality
///
int32_t k_textcustomeditor__richtextbrowserfindbar_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param windowModality enum Qt__WindowModality
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QWidget*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param enabled bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param disabled bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param windowModified bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QRect* k_textcustomeditor__richtextbrowserfindbar_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const QRect* k_textcustomeditor__richtextbrowserfindbar_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QRect* k_textcustomeditor__richtextbrowserfindbar_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QPoint* k_textcustomeditor__richtextbrowserfindbar_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSize* k_textcustomeditor__richtextbrowserfindbar_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSize* k_textcustomeditor__richtextbrowserfindbar_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QRect* k_textcustomeditor__richtextbrowserfindbar_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QRect* k_textcustomeditor__richtextbrowserfindbar_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QRegion* k_textcustomeditor__richtextbrowserfindbar_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSize* k_textcustomeditor__richtextbrowserfindbar_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSize* k_textcustomeditor__richtextbrowserfindbar_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param minimumSize QSize*
///
void k_textcustomeditor__richtextbrowserfindbar_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param minw int
/// @param minh int
///
void k_textcustomeditor__richtextbrowserfindbar_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param maximumSize QSize*
///
void k_textcustomeditor__richtextbrowserfindbar_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param maxw int
/// @param maxh int
///
void k_textcustomeditor__richtextbrowserfindbar_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param minw int
///
void k_textcustomeditor__richtextbrowserfindbar_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param minh int
///
void k_textcustomeditor__richtextbrowserfindbar_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param maxw int
///
void k_textcustomeditor__richtextbrowserfindbar_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param maxh int
///
void k_textcustomeditor__richtextbrowserfindbar_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSize* k_textcustomeditor__richtextbrowserfindbar_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param sizeIncrement QSize*
///
void k_textcustomeditor__richtextbrowserfindbar_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserfindbar_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSize* k_textcustomeditor__richtextbrowserfindbar_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param baseSize QSize*
///
void k_textcustomeditor__richtextbrowserfindbar_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param basew int
/// @param baseh int
///
void k_textcustomeditor__richtextbrowserfindbar_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param fixedSize QSize*
///
void k_textcustomeditor__richtextbrowserfindbar_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserfindbar_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param w int
///
void k_textcustomeditor__richtextbrowserfindbar_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param h int
///
void k_textcustomeditor__richtextbrowserfindbar_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserfindbar_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserfindbar_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserfindbar_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserfindbar_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserfindbar_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserfindbar_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserfindbar_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserfindbar_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserfindbar_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserfindbar_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserfindbar_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserfindbar_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const QPalette* k_textcustomeditor__richtextbrowserfindbar_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param palette QPalette*
///
void k_textcustomeditor__richtextbrowserfindbar_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_textcustomeditor__richtextbrowserfindbar_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textcustomeditor__richtextbrowserfindbar_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_textcustomeditor__richtextbrowserfindbar_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textcustomeditor__richtextbrowserfindbar_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const QFont* k_textcustomeditor__richtextbrowserfindbar_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param font QFont*
///
void k_textcustomeditor__richtextbrowserfindbar_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QFontMetrics* k_textcustomeditor__richtextbrowserfindbar_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QFontInfo* k_textcustomeditor__richtextbrowserfindbar_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QCursor* k_textcustomeditor__richtextbrowserfindbar_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param cursor QCursor*
///
void k_textcustomeditor__richtextbrowserfindbar_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param enable bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param enable bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param mask QBitmap*
///
void k_textcustomeditor__richtextbrowserfindbar_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param mask QRegion*
///
void k_textcustomeditor__richtextbrowserfindbar_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QRegion* k_textcustomeditor__richtextbrowserfindbar_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param target QPaintDevice*
///
void k_textcustomeditor__richtextbrowserfindbar_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param painter QPainter*
///
void k_textcustomeditor__richtextbrowserfindbar_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QPixmap* k_textcustomeditor__richtextbrowserfindbar_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QGraphicsEffect* k_textcustomeditor__richtextbrowserfindbar_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param effect QGraphicsEffect*
///
void k_textcustomeditor__richtextbrowserfindbar_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param type enum Qt__GestureType
///
void k_textcustomeditor__richtextbrowserfindbar_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param type enum Qt__GestureType
///
void k_textcustomeditor__richtextbrowserfindbar_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param windowTitle const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param styleSheet const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param icon QIcon*
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QIcon* k_textcustomeditor__richtextbrowserfindbar_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param windowIconText const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param windowRole const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param filePath const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param level double
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
double k_textcustomeditor__richtextbrowserfindbar_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param toolTip const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param msec int
///
void k_textcustomeditor__richtextbrowserfindbar_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param statusTip const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param whatsThis const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param name const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param description const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param direction enum Qt__LayoutDirection
///
void k_textcustomeditor__richtextbrowserfindbar_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_textcustomeditor__richtextbrowserfindbar_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param locale QLocale*
///
void k_textcustomeditor__richtextbrowserfindbar_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QLocale* k_textcustomeditor__richtextbrowserfindbar_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param reason enum Qt__FocusReason
///
void k_textcustomeditor__richtextbrowserfindbar_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_textcustomeditor__richtextbrowserfindbar_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param policy enum Qt__FocusPolicy
///
void k_textcustomeditor__richtextbrowserfindbar_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_textcustomeditor__richtextbrowserfindbar_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param focusProxy QWidget*
///
void k_textcustomeditor__richtextbrowserfindbar_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_textcustomeditor__richtextbrowserfindbar_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_textcustomeditor__richtextbrowserfindbar_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QCursor*
///
void k_textcustomeditor__richtextbrowserfindbar_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param key QKeySequence*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param id int
///
void k_textcustomeditor__richtextbrowserfindbar_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param id int
///
void k_textcustomeditor__richtextbrowserfindbar_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param id int
///
void k_textcustomeditor__richtextbrowserfindbar_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param enable bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QGraphicsProxyWidget* k_textcustomeditor__richtextbrowserfindbar_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserfindbar_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QRect*
///
void k_textcustomeditor__richtextbrowserfindbar_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QRegion*
///
void k_textcustomeditor__richtextbrowserfindbar_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserfindbar_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QRect*
///
void k_textcustomeditor__richtextbrowserfindbar_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QRegion*
///
void k_textcustomeditor__richtextbrowserfindbar_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param hidden bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QWidget*
///
void k_textcustomeditor__richtextbrowserfindbar_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param x int
/// @param y int
///
void k_textcustomeditor__richtextbrowserfindbar_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QPoint*
///
void k_textcustomeditor__richtextbrowserfindbar_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserfindbar_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QSize*
///
void k_textcustomeditor__richtextbrowserfindbar_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserfindbar_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param geometry QRect*
///
void k_textcustomeditor__richtextbrowserfindbar_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
char* k_textcustomeditor__richtextbrowserfindbar_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param geometry char*
///
bool k_textcustomeditor__richtextbrowserfindbar_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QWidget*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_textcustomeditor__richtextbrowserfindbar_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param state flag of enum Qt__WindowState
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param state flag of enum Qt__WindowState
///
void k_textcustomeditor__richtextbrowserfindbar_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSizePolicy* k_textcustomeditor__richtextbrowserfindbar_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param sizePolicy QSizePolicy*
///
void k_textcustomeditor__richtextbrowserfindbar_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_textcustomeditor__richtextbrowserfindbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QRegion* k_textcustomeditor__richtextbrowserfindbar_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textcustomeditor__richtextbrowserfindbar_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param margins QMargins*
///
void k_textcustomeditor__richtextbrowserfindbar_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QMargins* k_textcustomeditor__richtextbrowserfindbar_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QRect* k_textcustomeditor__richtextbrowserfindbar_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QLayout* k_textcustomeditor__richtextbrowserfindbar_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param layout QLayout*
///
void k_textcustomeditor__richtextbrowserfindbar_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param parent QWidget*
///
void k_textcustomeditor__richtextbrowserfindbar_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_textcustomeditor__richtextbrowserfindbar_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param dx int
/// @param dy int
///
void k_textcustomeditor__richtextbrowserfindbar_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_textcustomeditor__richtextbrowserfindbar_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param on bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param action QAction*
///
void k_textcustomeditor__richtextbrowserfindbar_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param actions libqt_list of QAction*
///
void k_textcustomeditor__richtextbrowserfindbar_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_textcustomeditor__richtextbrowserfindbar_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param before QAction*
/// @param action QAction*
///
void k_textcustomeditor__richtextbrowserfindbar_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param action QAction*
///
void k_textcustomeditor__richtextbrowserfindbar_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return libqt_list of QAction*
///
libqt_list k_textcustomeditor__richtextbrowserfindbar_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param text const char*
///
QAction* k_textcustomeditor__richtextbrowserfindbar_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_textcustomeditor__richtextbrowserfindbar_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textcustomeditor__richtextbrowserfindbar_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textcustomeditor__richtextbrowserfindbar_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param type flag of enum Qt__WindowType
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_textcustomeditor__richtextbrowserfindbar_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum Qt__WindowType
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param type flag of enum Qt__WindowType
///
void k_textcustomeditor__richtextbrowserfindbar_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return enum Qt__WindowType
///
int32_t k_textcustomeditor__richtextbrowserfindbar_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param x int
/// @param y int
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param p QPoint*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param p QPointF*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum Qt__WidgetAttribute
///
void k_textcustomeditor__richtextbrowserfindbar_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_textcustomeditor__richtextbrowserfindbar_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param child QWidget*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param enabled bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QBackingStore* k_textcustomeditor__richtextbrowserfindbar_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QWindow* k_textcustomeditor__richtextbrowserfindbar_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QScreen* k_textcustomeditor__richtextbrowserfindbar_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param screen QScreen*
///
void k_textcustomeditor__richtextbrowserfindbar_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param title const char*
///
void k_textcustomeditor__richtextbrowserfindbar_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, const char* title)
///
void k_textcustomeditor__richtextbrowserfindbar_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param icon QIcon*
///
void k_textcustomeditor__richtextbrowserfindbar_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QIcon* icon)
///
void k_textcustomeditor__richtextbrowserfindbar_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param iconText const char*
///
void k_textcustomeditor__richtextbrowserfindbar_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, const char* iconText)
///
void k_textcustomeditor__richtextbrowserfindbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param pos QPoint*
///
void k_textcustomeditor__richtextbrowserfindbar_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QPoint* pos)
///
void k_textcustomeditor__richtextbrowserfindbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_textcustomeditor__richtextbrowserfindbar_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_textcustomeditor__richtextbrowserfindbar_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_textcustomeditor__richtextbrowserfindbar_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textcustomeditor__richtextbrowserfindbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textcustomeditor__richtextbrowserfindbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_textcustomeditor__richtextbrowserfindbar_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textcustomeditor__richtextbrowserfindbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textcustomeditor__richtextbrowserfindbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param rectangle QRect*
///
QPixmap* k_textcustomeditor__richtextbrowserfindbar_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_textcustomeditor__richtextbrowserfindbar_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_textcustomeditor__richtextbrowserfindbar_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param id int
/// @param enable bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param id int
/// @param enable bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_textcustomeditor__richtextbrowserfindbar_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char* k_textcustomeditor__richtextbrowserfindbar_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param name const char*
///
void k_textcustomeditor__richtextbrowserfindbar_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param b bool
///
bool k_textcustomeditor__richtextbrowserfindbar_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QThread* k_textcustomeditor__richtextbrowserfindbar_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param thread QThread*
///
bool k_textcustomeditor__richtextbrowserfindbar_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param interval int
///
int32_t k_textcustomeditor__richtextbrowserfindbar_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param time int64_t of nanoseconds
///
int32_t k_textcustomeditor__richtextbrowserfindbar_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param id int
///
void k_textcustomeditor__richtextbrowserfindbar_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param id enum Qt__TimerId
///
void k_textcustomeditor__richtextbrowserfindbar_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
/// @return libqt_list of QObject*
///
libqt_list k_textcustomeditor__richtextbrowserfindbar_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param filterObj QObject*
///
void k_textcustomeditor__richtextbrowserfindbar_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param obj QObject*
///
void k_textcustomeditor__richtextbrowserfindbar_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserfindbar_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserfindbar_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserfindbar_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__richtextbrowserfindbar_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textcustomeditor__richtextbrowserfindbar_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param receiver QObject*
///
bool k_textcustomeditor__richtextbrowserfindbar_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textcustomeditor__richtextbrowserfindbar_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param name const char*
/// @param value QVariant*
///
bool k_textcustomeditor__richtextbrowserfindbar_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param name const char*
///
QVariant* k_textcustomeditor__richtextbrowserfindbar_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const char** k_textcustomeditor__richtextbrowserfindbar_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QBindingStorage* k_textcustomeditor__richtextbrowserfindbar_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
const QBindingStorage* k_textcustomeditor__richtextbrowserfindbar_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self)
///
void k_textcustomeditor__richtextbrowserfindbar_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QObject* k_textcustomeditor__richtextbrowserfindbar_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param classname const char*
///
bool k_textcustomeditor__richtextbrowserfindbar_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textcustomeditor__richtextbrowserfindbar_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textcustomeditor__richtextbrowserfindbar_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserfindbar_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textcustomeditor__richtextbrowserfindbar_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserfindbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal const char*
///
bool k_textcustomeditor__richtextbrowserfindbar_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textcustomeditor__richtextbrowserfindbar_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__richtextbrowserfindbar_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__richtextbrowserfindbar_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QObject*
///
void k_textcustomeditor__richtextbrowserfindbar_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QObject* param1)
///
void k_textcustomeditor__richtextbrowserfindbar_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
double k_textcustomeditor__richtextbrowserfindbar_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
double k_textcustomeditor__richtextbrowserfindbar_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_textcustomeditor__richtextbrowserfindbar_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_textcustomeditor__richtextbrowserfindbar_encode_metric_f(int32_t metric, double value);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param e QEvent*
///
bool k_textcustomeditor__richtextbrowserfindbar_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_event k_textcustomeditor__richtextbrowserfindbar_super_event

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param e QEvent*
///
bool k_textcustomeditor__richtextbrowserfindbar_super_event(void* self, void* e);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* e)
///
void k_textcustomeditor__richtextbrowserfindbar_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_dev_type(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_dev_type` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_dev_type k_textcustomeditor__richtextbrowserfindbar_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback int32_t func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param visible bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_set_visible` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_set_visible k_textcustomeditor__richtextbrowserfindbar_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param visible bool
///
void k_textcustomeditor__richtextbrowserfindbar_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, bool visible)
///
void k_textcustomeditor__richtextbrowserfindbar_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSize* k_textcustomeditor__richtextbrowserfindbar_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_size_hint` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_size_hint k_textcustomeditor__richtextbrowserfindbar_super_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSize* k_textcustomeditor__richtextbrowserfindbar_super_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback QSize* func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSize* k_textcustomeditor__richtextbrowserfindbar_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_minimum_size_hint` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_minimum_size_hint k_textcustomeditor__richtextbrowserfindbar_super_minimum_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QSize* k_textcustomeditor__richtextbrowserfindbar_super_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback QSize* func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 int
///
int32_t k_textcustomeditor__richtextbrowserfindbar_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_height_for_width` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_height_for_width k_textcustomeditor__richtextbrowserfindbar_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 int
///
int32_t k_textcustomeditor__richtextbrowserfindbar_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserFindBar* self, int param1)
///
void k_textcustomeditor__richtextbrowserfindbar_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_has_height_for_width` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_has_height_for_width k_textcustomeditor__richtextbrowserfindbar_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QPaintEngine* k_textcustomeditor__richtextbrowserfindbar_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_paint_engine` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_paint_engine k_textcustomeditor__richtextbrowserfindbar_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QPaintEngine* k_textcustomeditor__richtextbrowserfindbar_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback QPaintEngine* func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_mouse_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_mouse_press_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_mouse_press_event k_textcustomeditor__richtextbrowserfindbar_super_mouse_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_mouse_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_mouse_release_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_mouse_release_event k_textcustomeditor__richtextbrowserfindbar_super_mouse_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_mouse_double_click_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_mouse_double_click_event k_textcustomeditor__richtextbrowserfindbar_super_mouse_double_click_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_mouse_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_mouse_move_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_mouse_move_event k_textcustomeditor__richtextbrowserfindbar_super_mouse_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QMouseEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QWheelEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_wheel_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_wheel_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_wheel_event k_textcustomeditor__richtextbrowserfindbar_super_wheel_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QWheelEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QWheelEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QKeyEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_key_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_key_press_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_key_press_event k_textcustomeditor__richtextbrowserfindbar_super_key_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QKeyEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QKeyEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QKeyEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_key_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_key_release_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_key_release_event k_textcustomeditor__richtextbrowserfindbar_super_key_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QKeyEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QKeyEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QFocusEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_focus_in_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_focus_in_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_focus_in_event k_textcustomeditor__richtextbrowserfindbar_super_focus_in_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QFocusEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QFocusEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QFocusEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_focus_out_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_focus_out_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_focus_out_event k_textcustomeditor__richtextbrowserfindbar_super_focus_out_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QFocusEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QFocusEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QEnterEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_enter_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_enter_event k_textcustomeditor__richtextbrowserfindbar_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QEnterEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QEnterEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_leave_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_leave_event k_textcustomeditor__richtextbrowserfindbar_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QPaintEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_paint_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_paint_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_paint_event k_textcustomeditor__richtextbrowserfindbar_super_paint_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QPaintEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QPaintEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QMoveEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_move_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_move_event k_textcustomeditor__richtextbrowserfindbar_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QMoveEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QMoveEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QResizeEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_resize_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_resize_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_resize_event k_textcustomeditor__richtextbrowserfindbar_super_resize_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QResizeEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QResizeEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QCloseEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_close_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_close_event k_textcustomeditor__richtextbrowserfindbar_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QCloseEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QCloseEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QContextMenuEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_context_menu_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_context_menu_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_context_menu_event k_textcustomeditor__richtextbrowserfindbar_super_context_menu_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QContextMenuEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QContextMenuEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QTabletEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_tablet_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_tablet_event k_textcustomeditor__richtextbrowserfindbar_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QTabletEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QTabletEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QActionEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_action_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_action_event k_textcustomeditor__richtextbrowserfindbar_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QActionEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QActionEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QDragEnterEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_drag_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_drag_enter_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_drag_enter_event k_textcustomeditor__richtextbrowserfindbar_super_drag_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QDragEnterEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QDragEnterEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QDragMoveEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_drag_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_drag_move_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_drag_move_event k_textcustomeditor__richtextbrowserfindbar_super_drag_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QDragMoveEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QDragMoveEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QDragLeaveEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_drag_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_drag_leave_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_drag_leave_event k_textcustomeditor__richtextbrowserfindbar_super_drag_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QDragLeaveEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QDragLeaveEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QDropEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_drop_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_drop_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_drop_event k_textcustomeditor__richtextbrowserfindbar_super_drop_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QDropEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QDropEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QShowEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_show_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_show_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_show_event k_textcustomeditor__richtextbrowserfindbar_super_show_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QShowEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QShowEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QHideEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_hide_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_hide_event k_textcustomeditor__richtextbrowserfindbar_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QHideEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QHideEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textcustomeditor__richtextbrowserfindbar_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_native_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_native_event k_textcustomeditor__richtextbrowserfindbar_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textcustomeditor__richtextbrowserfindbar_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func(TextCustomEditor__RichTextBrowserFindBar* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_textcustomeditor__richtextbrowserfindbar_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_change_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_change_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_change_event k_textcustomeditor__richtextbrowserfindbar_super_change_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* param1)
///
void k_textcustomeditor__richtextbrowserfindbar_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textcustomeditor__richtextbrowserfindbar_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_metric` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_metric k_textcustomeditor__richtextbrowserfindbar_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textcustomeditor__richtextbrowserfindbar_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserFindBar* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_textcustomeditor__richtextbrowserfindbar_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param painter QPainter*
///
void k_textcustomeditor__richtextbrowserfindbar_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_init_painter` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_init_painter k_textcustomeditor__richtextbrowserfindbar_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param painter QPainter*
///
void k_textcustomeditor__richtextbrowserfindbar_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QPainter* painter)
///
void k_textcustomeditor__richtextbrowserfindbar_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param offset QPoint*
///
QPaintDevice* k_textcustomeditor__richtextbrowserfindbar_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_redirected` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_redirected k_textcustomeditor__richtextbrowserfindbar_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param offset QPoint*
///
QPaintDevice* k_textcustomeditor__richtextbrowserfindbar_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback QPaintDevice* func(TextCustomEditor__RichTextBrowserFindBar* self, QPoint* offset)
///
void k_textcustomeditor__richtextbrowserfindbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QPainter* k_textcustomeditor__richtextbrowserfindbar_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_shared_painter` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_shared_painter k_textcustomeditor__richtextbrowserfindbar_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QPainter* k_textcustomeditor__richtextbrowserfindbar_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback QPainter* func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QInputMethodEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_input_method_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_input_method_event k_textcustomeditor__richtextbrowserfindbar_super_input_method_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 QInputMethodEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QInputMethodEvent* param1)
///
void k_textcustomeditor__richtextbrowserfindbar_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textcustomeditor__richtextbrowserfindbar_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_input_method_query` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_input_method_query k_textcustomeditor__richtextbrowserfindbar_super_input_method_query

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textcustomeditor__richtextbrowserfindbar_super_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback QVariant* func(TextCustomEditor__RichTextBrowserFindBar* self, enum Qt__InputMethodQuery param1)
///
void k_textcustomeditor__richtextbrowserfindbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param next bool
///
bool k_textcustomeditor__richtextbrowserfindbar_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_focus_next_prev_child` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_focus_next_prev_child k_textcustomeditor__richtextbrowserfindbar_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param next bool
///
bool k_textcustomeditor__richtextbrowserfindbar_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func(TextCustomEditor__RichTextBrowserFindBar* self, bool next)
///
void k_textcustomeditor__richtextbrowserfindbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textcustomeditor__richtextbrowserfindbar_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_event_filter` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_event_filter k_textcustomeditor__richtextbrowserfindbar_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textcustomeditor__richtextbrowserfindbar_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func(TextCustomEditor__RichTextBrowserFindBar* self, QObject* watched, QEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QTimerEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_timer_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_timer_event k_textcustomeditor__richtextbrowserfindbar_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QTimerEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QTimerEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QChildEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_child_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_child_event k_textcustomeditor__richtextbrowserfindbar_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QChildEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QChildEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_custom_event` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_custom_event k_textcustomeditor__richtextbrowserfindbar_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param event QEvent*
///
void k_textcustomeditor__richtextbrowserfindbar_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QEvent* event)
///
void k_textcustomeditor__richtextbrowserfindbar_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserfindbar_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_connect_notify` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_connect_notify k_textcustomeditor__richtextbrowserfindbar_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserfindbar_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QMetaMethod* signal)
///
void k_textcustomeditor__richtextbrowserfindbar_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserfindbar_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_disconnect_notify` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_disconnect_notify k_textcustomeditor__richtextbrowserfindbar_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserfindbar_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, QMetaMethod* signal)
///
void k_textcustomeditor__richtextbrowserfindbar_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_clear_selections(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_clear_selections` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_clear_selections k_textcustomeditor__richtextbrowserfindbar_super_clear_selections

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_super_clear_selections(void* self);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_clear_selections(void* self, void (*callback)());

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param backward bool
/// @param isAutoSearch bool
///
bool k_textcustomeditor__richtextbrowserfindbar_search_text(void* self, bool backward, bool isAutoSearch);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_search_text` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_search_text k_textcustomeditor__richtextbrowserfindbar_super_search_text

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param backward bool
/// @param isAutoSearch bool
///
bool k_textcustomeditor__richtextbrowserfindbar_super_search_text(void* self, bool backward, bool isAutoSearch);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch)
///
void k_textcustomeditor__richtextbrowserfindbar_on_search_text(void* self, bool (*callback)(void*, bool, bool));

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param match bool
///
void k_textcustomeditor__richtextbrowserfindbar_set_found_match(void* self, bool match);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_set_found_match` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_set_found_match k_textcustomeditor__richtextbrowserfindbar_super_set_found_match

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param match bool
///
void k_textcustomeditor__richtextbrowserfindbar_super_set_found_match(void* self, bool match);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, bool match)
///
void k_textcustomeditor__richtextbrowserfindbar_on_set_found_match(void* self, void (*callback)(void*, bool));

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param backward bool
/// @param isAutoSearch bool
/// @param found bool
///
void k_textcustomeditor__richtextbrowserfindbar_message_info(void* self, bool backward, bool isAutoSearch, bool found);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_message_info` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_message_info k_textcustomeditor__richtextbrowserfindbar_super_message_info

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param backward bool
/// @param isAutoSearch bool
/// @param found bool
///
void k_textcustomeditor__richtextbrowserfindbar_super_message_info(void* self, bool backward, bool isAutoSearch, bool found);

/// Inherited from TextCustomEditor::TextEditFindBarBase
///
/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, bool backward, bool isAutoSearch, bool found)
///
void k_textcustomeditor__richtextbrowserfindbar_on_message_info(void* self, void (*callback)(void*, bool, bool, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_update_micro_focus` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_update_micro_focus k_textcustomeditor__richtextbrowserfindbar_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_create(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_create` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_create k_textcustomeditor__richtextbrowserfindbar_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_destroy(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_destroy` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_destroy k_textcustomeditor__richtextbrowserfindbar_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_focus_next_child` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_focus_next_child k_textcustomeditor__richtextbrowserfindbar_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_focus_previous_child` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_focus_previous_child k_textcustomeditor__richtextbrowserfindbar_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
bool k_textcustomeditor__richtextbrowserfindbar_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QObject* k_textcustomeditor__richtextbrowserfindbar_sender(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_sender` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_sender k_textcustomeditor__richtextbrowserfindbar_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
QObject* k_textcustomeditor__richtextbrowserfindbar_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback QObject* func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_sender_signal_index` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_sender_signal_index k_textcustomeditor__richtextbrowserfindbar_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback int32_t func()
///
void k_textcustomeditor__richtextbrowserfindbar_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal const char*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_receivers` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_receivers k_textcustomeditor__richtextbrowserfindbar_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal const char*
///
int32_t k_textcustomeditor__richtextbrowserfindbar_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserFindBar* self, const char* signal)
///
void k_textcustomeditor__richtextbrowserfindbar_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__richtextbrowserfindbar_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_is_signal_connected` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_is_signal_connected k_textcustomeditor__richtextbrowserfindbar_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__richtextbrowserfindbar_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback bool func(TextCustomEditor__RichTextBrowserFindBar* self, QMetaMethod* signal)
///
void k_textcustomeditor__richtextbrowserfindbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textcustomeditor__richtextbrowserfindbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserfindbar_super_get_decoded_metric_f` instead
///
#define k_textcustomeditor__richtextbrowserfindbar_qbase_get_decoded_metric_f k_textcustomeditor__richtextbrowserfindbar_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textcustomeditor__richtextbrowserfindbar_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback double func(TextCustomEditor__RichTextBrowserFindBar* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_textcustomeditor__richtextbrowserfindbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
/// @param callback void func(TextCustomEditor__RichTextBrowserFindBar* self, const char* objectName)
///
void k_textcustomeditor__richtextbrowserfindbar_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserFindBar.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextCustomEditor__RichTextBrowserFindBar*
///
void k_textcustomeditor__richtextbrowserfindbar_delete(void* self);

#endif
