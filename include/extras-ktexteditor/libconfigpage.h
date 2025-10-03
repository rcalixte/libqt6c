#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORQT6C_LIBCONFIGPAGE_H
#define SRC_EXTRAS_KTEXTEDITORQT6C_LIBCONFIGPAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-configpage.html

/// k_texteditor__configpage_new constructs a new KTextEditor::ConfigPage object.
///
/// @param parent QWidget*
KTextEditor__ConfigPage* k_texteditor__configpage_new(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__ConfigPage*
const QMetaObject* k_texteditor__configpage_meta_object(void* self);

/// @param self KTextEditor__ConfigPage*
/// @param param1 const char*
void* k_texteditor__configpage_metacast(void* self, const char* param1);

/// @param self KTextEditor__ConfigPage*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_texteditor__configpage_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback int32_t func(KTextEditor__ConfigPage* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_texteditor__configpage_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_texteditor__configpage_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_texteditor__configpage_tr(const char* s);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_name(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#name)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback const char* func()
void k_texteditor__configpage_on_name(void* self, const char* (*callback)());

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#name)
///
/// Base class method implementation
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_qbase_name(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#fullName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_full_name(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#fullName)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback const char* func()
void k_texteditor__configpage_on_full_name(void* self, const char* (*callback)());

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#fullName)
///
/// Base class method implementation
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_qbase_full_name(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#icon)
///
/// @param self KTextEditor__ConfigPage*
QIcon* k_texteditor__configpage_icon(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback QIcon* func()
void k_texteditor__configpage_on_icon(void* self, QIcon* (*callback)());

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#icon)
///
/// Base class method implementation
///
/// @param self KTextEditor__ConfigPage*
QIcon* k_texteditor__configpage_qbase_icon(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#apply)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_apply(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#apply)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func()
void k_texteditor__configpage_on_apply(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#apply)
///
/// Base class method implementation
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_qbase_apply(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#reset)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_reset(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func()
void k_texteditor__configpage_on_reset(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#reset)
///
/// Base class method implementation
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_qbase_reset(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#defaults)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_defaults(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#defaults)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func()
void k_texteditor__configpage_on_defaults(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#defaults)
///
/// Base class method implementation
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_qbase_defaults(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#changed)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_changed(void* self);

/// [Qt documentation](https://api.kde.org/ktexteditor-configpage.html#changed)
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self)
void k_texteditor__configpage_on_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_texteditor__configpage_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_texteditor__configpage_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KTextEditor__ConfigPage*
uintptr_t k_texteditor__configpage_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KTextEditor__ConfigPage*
uintptr_t k_texteditor__configpage_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KTextEditor__ConfigPage*
uintptr_t k_texteditor__configpage_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KTextEditor__ConfigPage*
QStyle* k_texteditor__configpage_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KTextEditor__ConfigPage*
/// @param style QStyle*
void k_texteditor__configpage_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KTextEditor__ConfigPage*
///
/// @return enum Qt__WindowModality
int32_t k_texteditor__configpage_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KTextEditor__ConfigPage*
/// @param windowModality enum Qt__WindowModality
void k_texteditor__configpage_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QWidget*
bool k_texteditor__configpage_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KTextEditor__ConfigPage*
/// @param enabled bool
void k_texteditor__configpage_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KTextEditor__ConfigPage*
/// @param disabled bool
void k_texteditor__configpage_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KTextEditor__ConfigPage*
/// @param windowModified bool
void k_texteditor__configpage_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KTextEditor__ConfigPage*
QRect* k_texteditor__configpage_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KTextEditor__ConfigPage*
const QRect* k_texteditor__configpage_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KTextEditor__ConfigPage*
QRect* k_texteditor__configpage_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KTextEditor__ConfigPage*
QPoint* k_texteditor__configpage_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KTextEditor__ConfigPage*
QSize* k_texteditor__configpage_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KTextEditor__ConfigPage*
QSize* k_texteditor__configpage_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KTextEditor__ConfigPage*
QRect* k_texteditor__configpage_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KTextEditor__ConfigPage*
QRect* k_texteditor__configpage_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KTextEditor__ConfigPage*
QRegion* k_texteditor__configpage_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KTextEditor__ConfigPage*
QSize* k_texteditor__configpage_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KTextEditor__ConfigPage*
QSize* k_texteditor__configpage_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTextEditor__ConfigPage*
/// @param minimumSize QSize*
void k_texteditor__configpage_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTextEditor__ConfigPage*
/// @param minw int
/// @param minh int
void k_texteditor__configpage_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTextEditor__ConfigPage*
/// @param maximumSize QSize*
void k_texteditor__configpage_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTextEditor__ConfigPage*
/// @param maxw int
/// @param maxh int
void k_texteditor__configpage_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KTextEditor__ConfigPage*
/// @param minw int
void k_texteditor__configpage_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KTextEditor__ConfigPage*
/// @param minh int
void k_texteditor__configpage_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KTextEditor__ConfigPage*
/// @param maxw int
void k_texteditor__configpage_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KTextEditor__ConfigPage*
/// @param maxh int
void k_texteditor__configpage_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KTextEditor__ConfigPage*
QSize* k_texteditor__configpage_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTextEditor__ConfigPage*
/// @param sizeIncrement QSize*
void k_texteditor__configpage_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTextEditor__ConfigPage*
/// @param w int
/// @param h int
void k_texteditor__configpage_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KTextEditor__ConfigPage*
QSize* k_texteditor__configpage_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTextEditor__ConfigPage*
/// @param baseSize QSize*
void k_texteditor__configpage_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTextEditor__ConfigPage*
/// @param basew int
/// @param baseh int
void k_texteditor__configpage_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTextEditor__ConfigPage*
/// @param fixedSize QSize*
void k_texteditor__configpage_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTextEditor__ConfigPage*
/// @param w int
/// @param h int
void k_texteditor__configpage_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KTextEditor__ConfigPage*
/// @param w int
void k_texteditor__configpage_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KTextEditor__ConfigPage*
/// @param h int
void k_texteditor__configpage_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QPointF*
QPointF* k_texteditor__configpage_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QPoint*
QPoint* k_texteditor__configpage_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QPointF*
QPointF* k_texteditor__configpage_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QPoint*
QPoint* k_texteditor__configpage_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QPointF*
QPointF* k_texteditor__configpage_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QPoint*
QPoint* k_texteditor__configpage_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QPointF*
QPointF* k_texteditor__configpage_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QPoint*
QPoint* k_texteditor__configpage_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_texteditor__configpage_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_texteditor__configpage_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_texteditor__configpage_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_texteditor__configpage_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KTextEditor__ConfigPage*
QWidget* k_texteditor__configpage_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KTextEditor__ConfigPage*
QWidget* k_texteditor__configpage_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KTextEditor__ConfigPage*
QWidget* k_texteditor__configpage_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KTextEditor__ConfigPage*
const QPalette* k_texteditor__configpage_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KTextEditor__ConfigPage*
/// @param palette QPalette*
void k_texteditor__configpage_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KTextEditor__ConfigPage*
/// @param backgroundRole enum QPalette__ColorRole
void k_texteditor__configpage_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KTextEditor__ConfigPage*
///
/// @return enum QPalette__ColorRole
int32_t k_texteditor__configpage_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KTextEditor__ConfigPage*
/// @param foregroundRole enum QPalette__ColorRole
void k_texteditor__configpage_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KTextEditor__ConfigPage*
///
/// @return enum QPalette__ColorRole
int32_t k_texteditor__configpage_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KTextEditor__ConfigPage*
const QFont* k_texteditor__configpage_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KTextEditor__ConfigPage*
/// @param font QFont*
void k_texteditor__configpage_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KTextEditor__ConfigPage*
QFontMetrics* k_texteditor__configpage_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KTextEditor__ConfigPage*
QFontInfo* k_texteditor__configpage_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KTextEditor__ConfigPage*
QCursor* k_texteditor__configpage_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KTextEditor__ConfigPage*
/// @param cursor QCursor*
void k_texteditor__configpage_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KTextEditor__ConfigPage*
/// @param enable bool
void k_texteditor__configpage_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KTextEditor__ConfigPage*
/// @param enable bool
void k_texteditor__configpage_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTextEditor__ConfigPage*
/// @param mask QBitmap*
void k_texteditor__configpage_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTextEditor__ConfigPage*
/// @param mask QRegion*
void k_texteditor__configpage_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KTextEditor__ConfigPage*
QRegion* k_texteditor__configpage_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__ConfigPage*
/// @param target QPaintDevice*
void k_texteditor__configpage_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__ConfigPage*
/// @param painter QPainter*
void k_texteditor__configpage_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTextEditor__ConfigPage*
QPixmap* k_texteditor__configpage_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KTextEditor__ConfigPage*
QGraphicsEffect* k_texteditor__configpage_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KTextEditor__ConfigPage*
/// @param effect QGraphicsEffect*
void k_texteditor__configpage_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTextEditor__ConfigPage*
/// @param type enum Qt__GestureType
void k_texteditor__configpage_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KTextEditor__ConfigPage*
/// @param type enum Qt__GestureType
void k_texteditor__configpage_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KTextEditor__ConfigPage*
/// @param windowTitle const char*
void k_texteditor__configpage_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KTextEditor__ConfigPage*
/// @param styleSheet const char*
void k_texteditor__configpage_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KTextEditor__ConfigPage*
/// @param icon QIcon*
void k_texteditor__configpage_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KTextEditor__ConfigPage*
QIcon* k_texteditor__configpage_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KTextEditor__ConfigPage*
/// @param windowIconText const char*
void k_texteditor__configpage_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KTextEditor__ConfigPage*
/// @param windowRole const char*
void k_texteditor__configpage_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KTextEditor__ConfigPage*
/// @param filePath const char*
void k_texteditor__configpage_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KTextEditor__ConfigPage*
/// @param level double
void k_texteditor__configpage_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KTextEditor__ConfigPage*
double k_texteditor__configpage_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KTextEditor__ConfigPage*
/// @param toolTip const char*
void k_texteditor__configpage_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KTextEditor__ConfigPage*
/// @param msec int
void k_texteditor__configpage_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KTextEditor__ConfigPage*
/// @param statusTip const char*
void k_texteditor__configpage_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KTextEditor__ConfigPage*
/// @param whatsThis const char*
void k_texteditor__configpage_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KTextEditor__ConfigPage*
/// @param name const char*
void k_texteditor__configpage_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KTextEditor__ConfigPage*
/// @param description const char*
void k_texteditor__configpage_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KTextEditor__ConfigPage*
/// @param direction enum Qt__LayoutDirection
void k_texteditor__configpage_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KTextEditor__ConfigPage*
///
/// @return enum Qt__LayoutDirection
int32_t k_texteditor__configpage_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KTextEditor__ConfigPage*
/// @param locale QLocale*
void k_texteditor__configpage_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KTextEditor__ConfigPage*
QLocale* k_texteditor__configpage_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTextEditor__ConfigPage*
/// @param reason enum Qt__FocusReason
void k_texteditor__configpage_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KTextEditor__ConfigPage*
///
/// @return enum Qt__FocusPolicy
int32_t k_texteditor__configpage_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KTextEditor__ConfigPage*
/// @param policy enum Qt__FocusPolicy
void k_texteditor__configpage_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_texteditor__configpage_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KTextEditor__ConfigPage*
/// @param focusProxy QWidget*
void k_texteditor__configpage_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KTextEditor__ConfigPage*
QWidget* k_texteditor__configpage_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KTextEditor__ConfigPage*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_texteditor__configpage_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KTextEditor__ConfigPage*
/// @param policy enum Qt__ContextMenuPolicy
void k_texteditor__configpage_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QCursor*
void k_texteditor__configpage_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTextEditor__ConfigPage*
/// @param key QKeySequence*
int32_t k_texteditor__configpage_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KTextEditor__ConfigPage*
/// @param id int
void k_texteditor__configpage_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTextEditor__ConfigPage*
/// @param id int
void k_texteditor__configpage_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTextEditor__ConfigPage*
/// @param id int
void k_texteditor__configpage_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_texteditor__configpage_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_texteditor__configpage_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KTextEditor__ConfigPage*
/// @param enable bool
void k_texteditor__configpage_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KTextEditor__ConfigPage*
QGraphicsProxyWidget* k_texteditor__configpage_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEditor__ConfigPage*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_texteditor__configpage_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QRect*
void k_texteditor__configpage_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QRegion*
void k_texteditor__configpage_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEditor__ConfigPage*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_texteditor__configpage_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QRect*
void k_texteditor__configpage_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QRegion*
void k_texteditor__configpage_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KTextEditor__ConfigPage*
/// @param hidden bool
void k_texteditor__configpage_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QWidget*
void k_texteditor__configpage_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTextEditor__ConfigPage*
/// @param x int
/// @param y int
void k_texteditor__configpage_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QPoint*
void k_texteditor__configpage_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTextEditor__ConfigPage*
/// @param w int
/// @param h int
void k_texteditor__configpage_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QSize*
void k_texteditor__configpage_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTextEditor__ConfigPage*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_texteditor__configpage_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTextEditor__ConfigPage*
/// @param geometry QRect*
void k_texteditor__configpage_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
char* k_texteditor__configpage_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KTextEditor__ConfigPage*
/// @param geometry const char*
bool k_texteditor__configpage_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QWidget*
bool k_texteditor__configpage_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KTextEditor__ConfigPage*
///
/// @return flag of enum Qt__WindowState
int32_t k_texteditor__configpage_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KTextEditor__ConfigPage*
/// @param state flag of enum Qt__WindowState
void k_texteditor__configpage_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KTextEditor__ConfigPage*
/// @param state flag of enum Qt__WindowState
void k_texteditor__configpage_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KTextEditor__ConfigPage*
QSizePolicy* k_texteditor__configpage_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTextEditor__ConfigPage*
/// @param sizePolicy QSizePolicy*
void k_texteditor__configpage_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTextEditor__ConfigPage*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_texteditor__configpage_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KTextEditor__ConfigPage*
QRegion* k_texteditor__configpage_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTextEditor__ConfigPage*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_texteditor__configpage_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTextEditor__ConfigPage*
/// @param margins QMargins*
void k_texteditor__configpage_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KTextEditor__ConfigPage*
QMargins* k_texteditor__configpage_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KTextEditor__ConfigPage*
QRect* k_texteditor__configpage_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KTextEditor__ConfigPage*
QLayout* k_texteditor__configpage_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KTextEditor__ConfigPage*
/// @param layout QLayout*
void k_texteditor__configpage_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTextEditor__ConfigPage*
/// @param parent QWidget*
void k_texteditor__configpage_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTextEditor__ConfigPage*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_texteditor__configpage_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTextEditor__ConfigPage*
/// @param dx int
/// @param dy int
void k_texteditor__configpage_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTextEditor__ConfigPage*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_texteditor__configpage_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KTextEditor__ConfigPage*
QWidget* k_texteditor__configpage_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KTextEditor__ConfigPage*
QWidget* k_texteditor__configpage_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KTextEditor__ConfigPage*
QWidget* k_texteditor__configpage_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KTextEditor__ConfigPage*
/// @param on bool
void k_texteditor__configpage_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEditor__ConfigPage*
/// @param action QAction*
void k_texteditor__configpage_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KTextEditor__ConfigPage*
/// @param actions libqt_list /* of QAction* */
void k_texteditor__configpage_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KTextEditor__ConfigPage*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_texteditor__configpage_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KTextEditor__ConfigPage*
/// @param before QAction*
/// @param action QAction*
void k_texteditor__configpage_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KTextEditor__ConfigPage*
/// @param action QAction*
void k_texteditor__configpage_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KTextEditor__ConfigPage*
libqt_list /* of QAction* */ k_texteditor__configpage_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEditor__ConfigPage*
/// @param text const char*
QAction* k_texteditor__configpage_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEditor__ConfigPage*
/// @param icon QIcon*
/// @param text const char*
QAction* k_texteditor__configpage_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEditor__ConfigPage*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_texteditor__configpage_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEditor__ConfigPage*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_texteditor__configpage_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KTextEditor__ConfigPage*
QWidget* k_texteditor__configpage_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KTextEditor__ConfigPage*
/// @param type flag of enum Qt__WindowType
void k_texteditor__configpage_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KTextEditor__ConfigPage*
///
/// @return flag of enum Qt__WindowType
int64_t k_texteditor__configpage_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 enum Qt__WindowType
void k_texteditor__configpage_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KTextEditor__ConfigPage*
/// @param type flag of enum Qt__WindowType
void k_texteditor__configpage_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KTextEditor__ConfigPage*
///
/// @return enum Qt__WindowType
int64_t k_texteditor__configpage_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_texteditor__configpage_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTextEditor__ConfigPage*
/// @param x int
/// @param y int
QWidget* k_texteditor__configpage_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTextEditor__ConfigPage*
/// @param p QPoint*
QWidget* k_texteditor__configpage_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTextEditor__ConfigPage*
/// @param p QPointF*
QWidget* k_texteditor__configpage_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 enum Qt__WidgetAttribute
void k_texteditor__configpage_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 enum Qt__WidgetAttribute
bool k_texteditor__configpage_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KTextEditor__ConfigPage*
/// @param child QWidget*
bool k_texteditor__configpage_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KTextEditor__ConfigPage*
/// @param enabled bool
void k_texteditor__configpage_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KTextEditor__ConfigPage*
QBackingStore* k_texteditor__configpage_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KTextEditor__ConfigPage*
QWindow* k_texteditor__configpage_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KTextEditor__ConfigPage*
QScreen* k_texteditor__configpage_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KTextEditor__ConfigPage*
/// @param screen QScreen*
void k_texteditor__configpage_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_texteditor__configpage_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTextEditor__ConfigPage*
/// @param title const char*
void k_texteditor__configpage_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, const char* title)
void k_texteditor__configpage_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTextEditor__ConfigPage*
/// @param icon QIcon*
void k_texteditor__configpage_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QIcon* icon)
void k_texteditor__configpage_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTextEditor__ConfigPage*
/// @param iconText const char*
void k_texteditor__configpage_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, const char* iconText)
void k_texteditor__configpage_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTextEditor__ConfigPage*
/// @param pos QPoint*
void k_texteditor__configpage_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QPoint* pos)
void k_texteditor__configpage_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KTextEditor__ConfigPage*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_texteditor__configpage_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KTextEditor__ConfigPage*
/// @param hints flag of enum Qt__InputMethodHint
void k_texteditor__configpage_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__ConfigPage*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_texteditor__configpage_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__ConfigPage*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_texteditor__configpage_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__ConfigPage*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_texteditor__configpage_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__ConfigPage*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_texteditor__configpage_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__ConfigPage*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_texteditor__configpage_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEditor__ConfigPage*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_texteditor__configpage_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTextEditor__ConfigPage*
/// @param rectangle QRect*
QPixmap* k_texteditor__configpage_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTextEditor__ConfigPage*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_texteditor__configpage_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTextEditor__ConfigPage*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_texteditor__configpage_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTextEditor__ConfigPage*
/// @param id int
/// @param enable bool
void k_texteditor__configpage_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTextEditor__ConfigPage*
/// @param id int
/// @param enable bool
void k_texteditor__configpage_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_texteditor__configpage_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_texteditor__configpage_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_texteditor__configpage_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_texteditor__configpage_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char* k_texteditor__configpage_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__ConfigPage*
/// @param name char*
void k_texteditor__configpage_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__ConfigPage*
/// @param b bool
bool k_texteditor__configpage_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__ConfigPage*
QThread* k_texteditor__configpage_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__ConfigPage*
/// @param thread QThread*
bool k_texteditor__configpage_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__ConfigPage*
/// @param interval int
int32_t k_texteditor__configpage_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__ConfigPage*
/// @param id int
void k_texteditor__configpage_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__ConfigPage*
/// @param id enum Qt__TimerId
void k_texteditor__configpage_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__ConfigPage*
libqt_list /* of QObject* */ k_texteditor__configpage_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__ConfigPage*
/// @param filterObj QObject*
void k_texteditor__configpage_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__ConfigPage*
/// @param obj QObject*
void k_texteditor__configpage_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_texteditor__configpage_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__ConfigPage*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_texteditor__configpage_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_texteditor__configpage_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_texteditor__configpage_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__ConfigPage*
/// @param name const char*
/// @param value QVariant*
bool k_texteditor__configpage_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__ConfigPage*
/// @param name const char*
QVariant* k_texteditor__configpage_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__ConfigPage*
const char** k_texteditor__configpage_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__ConfigPage*
QBindingStorage* k_texteditor__configpage_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__ConfigPage*
const QBindingStorage* k_texteditor__configpage_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self)
void k_texteditor__configpage_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEditor__ConfigPage*
QObject* k_texteditor__configpage_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__ConfigPage*
/// @param classname const char*
bool k_texteditor__configpage_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__ConfigPage*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_texteditor__configpage_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__ConfigPage*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_texteditor__configpage_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_texteditor__configpage_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__ConfigPage*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_texteditor__configpage_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QObject*
void k_texteditor__configpage_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QObject* param1)
void k_texteditor__configpage_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KTextEditor__ConfigPage*
double k_texteditor__configpage_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KTextEditor__ConfigPage*
double k_texteditor__configpage_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_texteditor__configpage_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_texteditor__configpage_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback int32_t func()
void k_texteditor__configpage_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param visible bool
void k_texteditor__configpage_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param visible bool
void k_texteditor__configpage_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, bool visible)
void k_texteditor__configpage_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
QSize* k_texteditor__configpage_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
QSize* k_texteditor__configpage_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback QSize* func()
void k_texteditor__configpage_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
QSize* k_texteditor__configpage_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
QSize* k_texteditor__configpage_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback QSize* func()
void k_texteditor__configpage_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 int
int32_t k_texteditor__configpage_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 int
int32_t k_texteditor__configpage_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback int32_t func(KTextEditor__ConfigPage* self, int param1)
void k_texteditor__configpage_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback bool func()
void k_texteditor__configpage_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
QPaintEngine* k_texteditor__configpage_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
QPaintEngine* k_texteditor__configpage_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback QPaintEngine* func()
void k_texteditor__configpage_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QEvent*
bool k_texteditor__configpage_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QEvent*
bool k_texteditor__configpage_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback bool func(KTextEditor__ConfigPage* self, QEvent* event)
void k_texteditor__configpage_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QMouseEvent*
void k_texteditor__configpage_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QMouseEvent*
void k_texteditor__configpage_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QMouseEvent* event)
void k_texteditor__configpage_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QMouseEvent*
void k_texteditor__configpage_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QMouseEvent*
void k_texteditor__configpage_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QMouseEvent* event)
void k_texteditor__configpage_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QMouseEvent*
void k_texteditor__configpage_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QMouseEvent*
void k_texteditor__configpage_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QMouseEvent* event)
void k_texteditor__configpage_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QMouseEvent*
void k_texteditor__configpage_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QMouseEvent*
void k_texteditor__configpage_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QMouseEvent* event)
void k_texteditor__configpage_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QWheelEvent*
void k_texteditor__configpage_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QWheelEvent*
void k_texteditor__configpage_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QWheelEvent* event)
void k_texteditor__configpage_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QKeyEvent*
void k_texteditor__configpage_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QKeyEvent*
void k_texteditor__configpage_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QKeyEvent* event)
void k_texteditor__configpage_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QKeyEvent*
void k_texteditor__configpage_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QKeyEvent*
void k_texteditor__configpage_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QKeyEvent* event)
void k_texteditor__configpage_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QFocusEvent*
void k_texteditor__configpage_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QFocusEvent*
void k_texteditor__configpage_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QFocusEvent* event)
void k_texteditor__configpage_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QFocusEvent*
void k_texteditor__configpage_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QFocusEvent*
void k_texteditor__configpage_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QFocusEvent* event)
void k_texteditor__configpage_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QEnterEvent*
void k_texteditor__configpage_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QEnterEvent*
void k_texteditor__configpage_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QEnterEvent* event)
void k_texteditor__configpage_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QEvent*
void k_texteditor__configpage_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QEvent*
void k_texteditor__configpage_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QEvent* event)
void k_texteditor__configpage_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QPaintEvent*
void k_texteditor__configpage_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QPaintEvent*
void k_texteditor__configpage_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QPaintEvent* event)
void k_texteditor__configpage_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QMoveEvent*
void k_texteditor__configpage_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QMoveEvent*
void k_texteditor__configpage_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QMoveEvent* event)
void k_texteditor__configpage_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QResizeEvent*
void k_texteditor__configpage_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QResizeEvent*
void k_texteditor__configpage_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QResizeEvent* event)
void k_texteditor__configpage_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QCloseEvent*
void k_texteditor__configpage_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QCloseEvent*
void k_texteditor__configpage_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QCloseEvent* event)
void k_texteditor__configpage_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QContextMenuEvent*
void k_texteditor__configpage_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QContextMenuEvent*
void k_texteditor__configpage_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QContextMenuEvent* event)
void k_texteditor__configpage_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QTabletEvent*
void k_texteditor__configpage_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QTabletEvent*
void k_texteditor__configpage_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QTabletEvent* event)
void k_texteditor__configpage_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QActionEvent*
void k_texteditor__configpage_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QActionEvent*
void k_texteditor__configpage_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QActionEvent* event)
void k_texteditor__configpage_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QDragEnterEvent*
void k_texteditor__configpage_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QDragEnterEvent*
void k_texteditor__configpage_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QDragEnterEvent* event)
void k_texteditor__configpage_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QDragMoveEvent*
void k_texteditor__configpage_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QDragMoveEvent*
void k_texteditor__configpage_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QDragMoveEvent* event)
void k_texteditor__configpage_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QDragLeaveEvent*
void k_texteditor__configpage_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QDragLeaveEvent*
void k_texteditor__configpage_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QDragLeaveEvent* event)
void k_texteditor__configpage_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QDropEvent*
void k_texteditor__configpage_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QDropEvent*
void k_texteditor__configpage_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QDropEvent* event)
void k_texteditor__configpage_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QShowEvent*
void k_texteditor__configpage_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QShowEvent*
void k_texteditor__configpage_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QShowEvent* event)
void k_texteditor__configpage_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QHideEvent*
void k_texteditor__configpage_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QHideEvent*
void k_texteditor__configpage_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QHideEvent* event)
void k_texteditor__configpage_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_texteditor__configpage_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_texteditor__configpage_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback bool func(KTextEditor__ConfigPage* self, const char* eventType, void* message, intptr_t* result)
void k_texteditor__configpage_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QEvent*
void k_texteditor__configpage_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QEvent*
void k_texteditor__configpage_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QEvent* param1)
void k_texteditor__configpage_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_texteditor__configpage_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_texteditor__configpage_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback int32_t func(KTextEditor__ConfigPage* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_texteditor__configpage_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param painter QPainter*
void k_texteditor__configpage_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param painter QPainter*
void k_texteditor__configpage_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QPainter* painter)
void k_texteditor__configpage_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param offset QPoint*
QPaintDevice* k_texteditor__configpage_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param offset QPoint*
QPaintDevice* k_texteditor__configpage_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback QPaintDevice* func(KTextEditor__ConfigPage* self, QPoint* offset)
void k_texteditor__configpage_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
QPainter* k_texteditor__configpage_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
QPainter* k_texteditor__configpage_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback QPainter* func()
void k_texteditor__configpage_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QInputMethodEvent*
void k_texteditor__configpage_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 QInputMethodEvent*
void k_texteditor__configpage_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QInputMethodEvent* param1)
void k_texteditor__configpage_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_texteditor__configpage_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_texteditor__configpage_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback QVariant* func(KTextEditor__ConfigPage* self, enum Qt__InputMethodQuery param1)
void k_texteditor__configpage_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param next bool
bool k_texteditor__configpage_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param next bool
bool k_texteditor__configpage_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback bool func(KTextEditor__ConfigPage* self, bool next)
void k_texteditor__configpage_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param watched QObject*
/// @param event QEvent*
bool k_texteditor__configpage_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param watched QObject*
/// @param event QEvent*
bool k_texteditor__configpage_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback bool func(KTextEditor__ConfigPage* self, QObject* watched, QEvent* event)
void k_texteditor__configpage_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QTimerEvent*
void k_texteditor__configpage_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QTimerEvent*
void k_texteditor__configpage_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QTimerEvent* event)
void k_texteditor__configpage_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QChildEvent*
void k_texteditor__configpage_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QChildEvent*
void k_texteditor__configpage_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QChildEvent* event)
void k_texteditor__configpage_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QEvent*
void k_texteditor__configpage_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param event QEvent*
void k_texteditor__configpage_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QEvent* event)
void k_texteditor__configpage_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param signal QMetaMethod*
void k_texteditor__configpage_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param signal QMetaMethod*
void k_texteditor__configpage_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QMetaMethod* signal)
void k_texteditor__configpage_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param signal QMetaMethod*
void k_texteditor__configpage_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param signal QMetaMethod*
void k_texteditor__configpage_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, QMetaMethod* signal)
void k_texteditor__configpage_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func()
void k_texteditor__configpage_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func()
void k_texteditor__configpage_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func()
void k_texteditor__configpage_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback bool func()
void k_texteditor__configpage_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
bool k_texteditor__configpage_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback bool func()
void k_texteditor__configpage_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
QObject* k_texteditor__configpage_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
QObject* k_texteditor__configpage_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback QObject* func()
void k_texteditor__configpage_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
int32_t k_texteditor__configpage_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback int32_t func()
void k_texteditor__configpage_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param signal const char*
int32_t k_texteditor__configpage_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param signal const char*
int32_t k_texteditor__configpage_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback int32_t func(KTextEditor__ConfigPage* self, const char* signal)
void k_texteditor__configpage_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param signal QMetaMethod*
bool k_texteditor__configpage_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param signal QMetaMethod*
bool k_texteditor__configpage_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback bool func(KTextEditor__ConfigPage* self, QMetaMethod* signal)
void k_texteditor__configpage_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_texteditor__configpage_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_texteditor__configpage_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__ConfigPage*
/// @param callback double func(KTextEditor__ConfigPage* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_texteditor__configpage_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__ConfigPage*
/// @param callback void func(KTextEditor__ConfigPage* self, const char* objectName)
void k_texteditor__configpage_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__ConfigPage*
void k_texteditor__configpage_delete(void* self);

#endif
