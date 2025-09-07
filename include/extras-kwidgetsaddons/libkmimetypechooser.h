#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKMIMETYPECHOOSER_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKMIMETYPECHOOSER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kmimetypechooser.html

/// k_mimetypechooser_new constructs a new KMimeTypeChooser object.
///
KMimeTypeChooser* k_mimetypechooser_new();

/// k_mimetypechooser_new2 constructs a new KMimeTypeChooser object.
///
/// @param text const char*
KMimeTypeChooser* k_mimetypechooser_new2(const char* text);

/// k_mimetypechooser_new3 constructs a new KMimeTypeChooser object.
///
/// @param text const char*
/// @param selectedMimeTypes const char**
KMimeTypeChooser* k_mimetypechooser_new3(const char* text, const char* selectedMimeTypes[]);

/// k_mimetypechooser_new4 constructs a new KMimeTypeChooser object.
///
/// @param text const char*
/// @param selectedMimeTypes const char**
/// @param defaultGroup const char*
KMimeTypeChooser* k_mimetypechooser_new4(const char* text, const char* selectedMimeTypes[], const char* defaultGroup);

/// k_mimetypechooser_new5 constructs a new KMimeTypeChooser object.
///
/// @param text const char*
/// @param selectedMimeTypes const char**
/// @param defaultGroup const char*
/// @param groupsToShow const char**
KMimeTypeChooser* k_mimetypechooser_new5(const char* text, const char* selectedMimeTypes[], const char* defaultGroup, const char* groupsToShow[]);

/// k_mimetypechooser_new6 constructs a new KMimeTypeChooser object.
///
/// @param text const char*
/// @param selectedMimeTypes const char**
/// @param defaultGroup const char*
/// @param groupsToShow const char**
/// @param visuals int
KMimeTypeChooser* k_mimetypechooser_new6(const char* text, const char* selectedMimeTypes[], const char* defaultGroup, const char* groupsToShow[], int visuals);

/// k_mimetypechooser_new7 constructs a new KMimeTypeChooser object.
///
/// @param text const char*
/// @param selectedMimeTypes const char**
/// @param defaultGroup const char*
/// @param groupsToShow const char**
/// @param visuals int
/// @param parent QWidget*
KMimeTypeChooser* k_mimetypechooser_new7(const char* text, const char* selectedMimeTypes[], const char* defaultGroup, const char* groupsToShow[], int visuals, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KMimeTypeChooser*
const QMetaObject* k_mimetypechooser_meta_object(void* self);

/// @param self KMimeTypeChooser*
/// @param param1 const char*
void* k_mimetypechooser_metacast(void* self, const char* param1);

/// @param self KMimeTypeChooser*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_mimetypechooser_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KMimeTypeChooser*
/// @param callback int32_t func(KMimeTypeChooser* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_mimetypechooser_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KMimeTypeChooser*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_mimetypechooser_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_mimetypechooser_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kmimetypechooser.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char** k_mimetypechooser_mime_types(void* self);

/// [Qt documentation](https://api.kde.org/kmimetypechooser.html#patterns)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char** k_mimetypechooser_patterns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_mimetypechooser_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_mimetypechooser_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KMimeTypeChooser*
uintptr_t k_mimetypechooser_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KMimeTypeChooser*
uintptr_t k_mimetypechooser_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KMimeTypeChooser*
uintptr_t k_mimetypechooser_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KMimeTypeChooser*
QStyle* k_mimetypechooser_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KMimeTypeChooser*
/// @param style QStyle*
void k_mimetypechooser_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KMimeTypeChooser*
///
/// @return enum Qt__WindowModality
int32_t k_mimetypechooser_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KMimeTypeChooser*
/// @param windowModality enum Qt__WindowModality
void k_mimetypechooser_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KMimeTypeChooser*
/// @param param1 QWidget*
bool k_mimetypechooser_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KMimeTypeChooser*
/// @param enabled bool
void k_mimetypechooser_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KMimeTypeChooser*
/// @param disabled bool
void k_mimetypechooser_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KMimeTypeChooser*
/// @param windowModified bool
void k_mimetypechooser_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KMimeTypeChooser*
QRect* k_mimetypechooser_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KMimeTypeChooser*
const QRect* k_mimetypechooser_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KMimeTypeChooser*
QRect* k_mimetypechooser_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KMimeTypeChooser*
QPoint* k_mimetypechooser_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KMimeTypeChooser*
QSize* k_mimetypechooser_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KMimeTypeChooser*
QSize* k_mimetypechooser_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KMimeTypeChooser*
QRect* k_mimetypechooser_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KMimeTypeChooser*
QRect* k_mimetypechooser_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KMimeTypeChooser*
QRegion* k_mimetypechooser_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KMimeTypeChooser*
QSize* k_mimetypechooser_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KMimeTypeChooser*
QSize* k_mimetypechooser_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KMimeTypeChooser*
/// @param minimumSize QSize*
void k_mimetypechooser_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KMimeTypeChooser*
/// @param minw int
/// @param minh int
void k_mimetypechooser_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KMimeTypeChooser*
/// @param maximumSize QSize*
void k_mimetypechooser_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KMimeTypeChooser*
/// @param maxw int
/// @param maxh int
void k_mimetypechooser_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KMimeTypeChooser*
/// @param minw int
void k_mimetypechooser_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KMimeTypeChooser*
/// @param minh int
void k_mimetypechooser_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KMimeTypeChooser*
/// @param maxw int
void k_mimetypechooser_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KMimeTypeChooser*
/// @param maxh int
void k_mimetypechooser_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KMimeTypeChooser*
QSize* k_mimetypechooser_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KMimeTypeChooser*
/// @param sizeIncrement QSize*
void k_mimetypechooser_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KMimeTypeChooser*
/// @param w int
/// @param h int
void k_mimetypechooser_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KMimeTypeChooser*
QSize* k_mimetypechooser_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KMimeTypeChooser*
/// @param baseSize QSize*
void k_mimetypechooser_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KMimeTypeChooser*
/// @param basew int
/// @param baseh int
void k_mimetypechooser_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KMimeTypeChooser*
/// @param fixedSize QSize*
void k_mimetypechooser_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KMimeTypeChooser*
/// @param w int
/// @param h int
void k_mimetypechooser_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KMimeTypeChooser*
/// @param w int
void k_mimetypechooser_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KMimeTypeChooser*
/// @param h int
void k_mimetypechooser_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KMimeTypeChooser*
/// @param param1 QPointF*
QPointF* k_mimetypechooser_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KMimeTypeChooser*
/// @param param1 QPoint*
QPoint* k_mimetypechooser_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KMimeTypeChooser*
/// @param param1 QPointF*
QPointF* k_mimetypechooser_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KMimeTypeChooser*
/// @param param1 QPoint*
QPoint* k_mimetypechooser_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KMimeTypeChooser*
/// @param param1 QPointF*
QPointF* k_mimetypechooser_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KMimeTypeChooser*
/// @param param1 QPoint*
QPoint* k_mimetypechooser_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KMimeTypeChooser*
/// @param param1 QPointF*
QPointF* k_mimetypechooser_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KMimeTypeChooser*
/// @param param1 QPoint*
QPoint* k_mimetypechooser_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KMimeTypeChooser*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_mimetypechooser_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KMimeTypeChooser*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_mimetypechooser_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KMimeTypeChooser*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_mimetypechooser_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KMimeTypeChooser*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_mimetypechooser_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KMimeTypeChooser*
QWidget* k_mimetypechooser_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KMimeTypeChooser*
QWidget* k_mimetypechooser_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KMimeTypeChooser*
QWidget* k_mimetypechooser_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KMimeTypeChooser*
const QPalette* k_mimetypechooser_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KMimeTypeChooser*
/// @param palette QPalette*
void k_mimetypechooser_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KMimeTypeChooser*
/// @param backgroundRole enum QPalette__ColorRole
void k_mimetypechooser_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KMimeTypeChooser*
///
/// @return enum QPalette__ColorRole
int32_t k_mimetypechooser_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KMimeTypeChooser*
/// @param foregroundRole enum QPalette__ColorRole
void k_mimetypechooser_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KMimeTypeChooser*
///
/// @return enum QPalette__ColorRole
int32_t k_mimetypechooser_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KMimeTypeChooser*
const QFont* k_mimetypechooser_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KMimeTypeChooser*
/// @param font QFont*
void k_mimetypechooser_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KMimeTypeChooser*
QFontMetrics* k_mimetypechooser_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KMimeTypeChooser*
QFontInfo* k_mimetypechooser_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KMimeTypeChooser*
QCursor* k_mimetypechooser_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KMimeTypeChooser*
/// @param cursor QCursor*
void k_mimetypechooser_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KMimeTypeChooser*
/// @param enable bool
void k_mimetypechooser_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KMimeTypeChooser*
/// @param enable bool
void k_mimetypechooser_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KMimeTypeChooser*
/// @param mask QBitmap*
void k_mimetypechooser_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KMimeTypeChooser*
/// @param mask QRegion*
void k_mimetypechooser_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KMimeTypeChooser*
QRegion* k_mimetypechooser_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooser*
/// @param target QPaintDevice*
void k_mimetypechooser_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooser*
/// @param painter QPainter*
void k_mimetypechooser_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KMimeTypeChooser*
QPixmap* k_mimetypechooser_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KMimeTypeChooser*
QGraphicsEffect* k_mimetypechooser_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KMimeTypeChooser*
/// @param effect QGraphicsEffect*
void k_mimetypechooser_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KMimeTypeChooser*
/// @param typeVal enum Qt__GestureType
void k_mimetypechooser_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KMimeTypeChooser*
/// @param typeVal enum Qt__GestureType
void k_mimetypechooser_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KMimeTypeChooser*
/// @param windowTitle const char*
void k_mimetypechooser_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KMimeTypeChooser*
/// @param styleSheet const char*
void k_mimetypechooser_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KMimeTypeChooser*
/// @param icon QIcon*
void k_mimetypechooser_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KMimeTypeChooser*
QIcon* k_mimetypechooser_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KMimeTypeChooser*
/// @param windowIconText const char*
void k_mimetypechooser_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KMimeTypeChooser*
/// @param windowRole const char*
void k_mimetypechooser_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KMimeTypeChooser*
/// @param filePath const char*
void k_mimetypechooser_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KMimeTypeChooser*
/// @param level double
void k_mimetypechooser_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KMimeTypeChooser*
double k_mimetypechooser_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KMimeTypeChooser*
/// @param toolTip const char*
void k_mimetypechooser_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KMimeTypeChooser*
/// @param msec int
void k_mimetypechooser_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KMimeTypeChooser*
/// @param statusTip const char*
void k_mimetypechooser_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KMimeTypeChooser*
/// @param whatsThis const char*
void k_mimetypechooser_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KMimeTypeChooser*
/// @param name const char*
void k_mimetypechooser_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KMimeTypeChooser*
/// @param description const char*
void k_mimetypechooser_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KMimeTypeChooser*
/// @param direction enum Qt__LayoutDirection
void k_mimetypechooser_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KMimeTypeChooser*
///
/// @return enum Qt__LayoutDirection
int32_t k_mimetypechooser_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KMimeTypeChooser*
/// @param locale QLocale*
void k_mimetypechooser_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KMimeTypeChooser*
QLocale* k_mimetypechooser_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KMimeTypeChooser*
/// @param reason enum Qt__FocusReason
void k_mimetypechooser_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KMimeTypeChooser*
///
/// @return enum Qt__FocusPolicy
int32_t k_mimetypechooser_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KMimeTypeChooser*
/// @param policy enum Qt__FocusPolicy
void k_mimetypechooser_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_mimetypechooser_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KMimeTypeChooser*
/// @param focusProxy QWidget*
void k_mimetypechooser_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KMimeTypeChooser*
QWidget* k_mimetypechooser_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KMimeTypeChooser*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_mimetypechooser_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KMimeTypeChooser*
/// @param policy enum Qt__ContextMenuPolicy
void k_mimetypechooser_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KMimeTypeChooser*
/// @param param1 QCursor*
void k_mimetypechooser_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KMimeTypeChooser*
/// @param key QKeySequence*
int32_t k_mimetypechooser_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KMimeTypeChooser*
/// @param id int
void k_mimetypechooser_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KMimeTypeChooser*
/// @param id int
void k_mimetypechooser_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KMimeTypeChooser*
/// @param id int
void k_mimetypechooser_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_mimetypechooser_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_mimetypechooser_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KMimeTypeChooser*
/// @param enable bool
void k_mimetypechooser_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KMimeTypeChooser*
QGraphicsProxyWidget* k_mimetypechooser_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMimeTypeChooser*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_mimetypechooser_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMimeTypeChooser*
/// @param param1 QRect*
void k_mimetypechooser_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMimeTypeChooser*
/// @param param1 QRegion*
void k_mimetypechooser_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMimeTypeChooser*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_mimetypechooser_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMimeTypeChooser*
/// @param param1 QRect*
void k_mimetypechooser_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMimeTypeChooser*
/// @param param1 QRegion*
void k_mimetypechooser_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KMimeTypeChooser*
/// @param hidden bool
void k_mimetypechooser_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KMimeTypeChooser*
/// @param param1 QWidget*
void k_mimetypechooser_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KMimeTypeChooser*
/// @param x int
/// @param y int
void k_mimetypechooser_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KMimeTypeChooser*
/// @param param1 QPoint*
void k_mimetypechooser_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KMimeTypeChooser*
/// @param w int
/// @param h int
void k_mimetypechooser_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KMimeTypeChooser*
/// @param param1 QSize*
void k_mimetypechooser_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KMimeTypeChooser*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_mimetypechooser_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KMimeTypeChooser*
/// @param geometry QRect*
void k_mimetypechooser_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
char* k_mimetypechooser_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KMimeTypeChooser*
/// @param geometry const char*
bool k_mimetypechooser_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KMimeTypeChooser*
/// @param param1 QWidget*
bool k_mimetypechooser_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KMimeTypeChooser*
///
/// @return flag of enum Qt__WindowState
int32_t k_mimetypechooser_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KMimeTypeChooser*
/// @param state flag of enum Qt__WindowState
void k_mimetypechooser_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KMimeTypeChooser*
/// @param state flag of enum Qt__WindowState
void k_mimetypechooser_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KMimeTypeChooser*
QSizePolicy* k_mimetypechooser_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KMimeTypeChooser*
/// @param sizePolicy QSizePolicy*
void k_mimetypechooser_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KMimeTypeChooser*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_mimetypechooser_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KMimeTypeChooser*
QRegion* k_mimetypechooser_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KMimeTypeChooser*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_mimetypechooser_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KMimeTypeChooser*
/// @param margins QMargins*
void k_mimetypechooser_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KMimeTypeChooser*
QMargins* k_mimetypechooser_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KMimeTypeChooser*
QRect* k_mimetypechooser_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KMimeTypeChooser*
QLayout* k_mimetypechooser_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KMimeTypeChooser*
/// @param layout QLayout*
void k_mimetypechooser_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KMimeTypeChooser*
/// @param parent QWidget*
void k_mimetypechooser_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KMimeTypeChooser*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_mimetypechooser_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KMimeTypeChooser*
/// @param dx int
/// @param dy int
void k_mimetypechooser_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KMimeTypeChooser*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_mimetypechooser_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KMimeTypeChooser*
QWidget* k_mimetypechooser_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KMimeTypeChooser*
QWidget* k_mimetypechooser_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KMimeTypeChooser*
QWidget* k_mimetypechooser_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KMimeTypeChooser*
/// @param on bool
void k_mimetypechooser_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMimeTypeChooser*
/// @param action QAction*
void k_mimetypechooser_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KMimeTypeChooser*
/// @param actions libqt_list /* of QAction* */
void k_mimetypechooser_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KMimeTypeChooser*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_mimetypechooser_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KMimeTypeChooser*
/// @param before QAction*
/// @param action QAction*
void k_mimetypechooser_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KMimeTypeChooser*
/// @param action QAction*
void k_mimetypechooser_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KMimeTypeChooser*
libqt_list /* of QAction* */ k_mimetypechooser_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMimeTypeChooser*
/// @param text const char*
QAction* k_mimetypechooser_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMimeTypeChooser*
/// @param icon QIcon*
/// @param text const char*
QAction* k_mimetypechooser_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMimeTypeChooser*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_mimetypechooser_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMimeTypeChooser*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_mimetypechooser_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KMimeTypeChooser*
QWidget* k_mimetypechooser_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KMimeTypeChooser*
/// @param typeVal flag of enum Qt__WindowType
void k_mimetypechooser_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KMimeTypeChooser*
///
/// @return flag of enum Qt__WindowType
int64_t k_mimetypechooser_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KMimeTypeChooser*
/// @param param1 enum Qt__WindowType
void k_mimetypechooser_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KMimeTypeChooser*
/// @param typeVal flag of enum Qt__WindowType
void k_mimetypechooser_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KMimeTypeChooser*
///
/// @return enum Qt__WindowType
int64_t k_mimetypechooser_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_mimetypechooser_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KMimeTypeChooser*
/// @param x int
/// @param y int
QWidget* k_mimetypechooser_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KMimeTypeChooser*
/// @param p QPoint*
QWidget* k_mimetypechooser_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KMimeTypeChooser*
/// @param p QPointF*
QWidget* k_mimetypechooser_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KMimeTypeChooser*
/// @param param1 enum Qt__WidgetAttribute
void k_mimetypechooser_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KMimeTypeChooser*
/// @param param1 enum Qt__WidgetAttribute
bool k_mimetypechooser_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KMimeTypeChooser*
/// @param child QWidget*
bool k_mimetypechooser_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KMimeTypeChooser*
/// @param enabled bool
void k_mimetypechooser_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KMimeTypeChooser*
QBackingStore* k_mimetypechooser_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KMimeTypeChooser*
QWindow* k_mimetypechooser_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KMimeTypeChooser*
QScreen* k_mimetypechooser_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KMimeTypeChooser*
/// @param screen QScreen*
void k_mimetypechooser_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_mimetypechooser_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KMimeTypeChooser*
/// @param title const char*
void k_mimetypechooser_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, const char* title)
void k_mimetypechooser_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KMimeTypeChooser*
/// @param icon QIcon*
void k_mimetypechooser_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QIcon* icon)
void k_mimetypechooser_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KMimeTypeChooser*
/// @param iconText const char*
void k_mimetypechooser_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, const char* iconText)
void k_mimetypechooser_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KMimeTypeChooser*
/// @param pos QPoint*
void k_mimetypechooser_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QPoint* pos)
void k_mimetypechooser_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KMimeTypeChooser*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_mimetypechooser_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KMimeTypeChooser*
/// @param hints flag of enum Qt__InputMethodHint
void k_mimetypechooser_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooser*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_mimetypechooser_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooser*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_mimetypechooser_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooser*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_mimetypechooser_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooser*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_mimetypechooser_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooser*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_mimetypechooser_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooser*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_mimetypechooser_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KMimeTypeChooser*
/// @param rectangle QRect*
QPixmap* k_mimetypechooser_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KMimeTypeChooser*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_mimetypechooser_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KMimeTypeChooser*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_mimetypechooser_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KMimeTypeChooser*
/// @param id int
/// @param enable bool
void k_mimetypechooser_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KMimeTypeChooser*
/// @param id int
/// @param enable bool
void k_mimetypechooser_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KMimeTypeChooser*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_mimetypechooser_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KMimeTypeChooser*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_mimetypechooser_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_mimetypechooser_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_mimetypechooser_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char* k_mimetypechooser_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KMimeTypeChooser*
/// @param name char*
void k_mimetypechooser_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KMimeTypeChooser*
/// @param b bool
bool k_mimetypechooser_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KMimeTypeChooser*
QThread* k_mimetypechooser_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KMimeTypeChooser*
/// @param thread QThread*
bool k_mimetypechooser_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KMimeTypeChooser*
/// @param interval int
int32_t k_mimetypechooser_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KMimeTypeChooser*
/// @param id int
void k_mimetypechooser_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KMimeTypeChooser*
/// @param id enum Qt__TimerId
void k_mimetypechooser_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KMimeTypeChooser*
libqt_list /* of QObject* */ k_mimetypechooser_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KMimeTypeChooser*
/// @param filterObj QObject*
void k_mimetypechooser_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KMimeTypeChooser*
/// @param obj QObject*
void k_mimetypechooser_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_mimetypechooser_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KMimeTypeChooser*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_mimetypechooser_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_mimetypechooser_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_mimetypechooser_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KMimeTypeChooser*
/// @param name const char*
/// @param value QVariant*
bool k_mimetypechooser_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KMimeTypeChooser*
/// @param name const char*
QVariant* k_mimetypechooser_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooser*
const char** k_mimetypechooser_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KMimeTypeChooser*
QBindingStorage* k_mimetypechooser_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KMimeTypeChooser*
const QBindingStorage* k_mimetypechooser_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self)
void k_mimetypechooser_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KMimeTypeChooser*
QObject* k_mimetypechooser_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KMimeTypeChooser*
/// @param classname const char*
bool k_mimetypechooser_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KMimeTypeChooser*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_mimetypechooser_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KMimeTypeChooser*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_mimetypechooser_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_mimetypechooser_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KMimeTypeChooser*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_mimetypechooser_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMimeTypeChooser*
/// @param param1 QObject*
void k_mimetypechooser_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QObject* param1)
void k_mimetypechooser_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KMimeTypeChooser*
double k_mimetypechooser_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KMimeTypeChooser*
double k_mimetypechooser_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_mimetypechooser_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_mimetypechooser_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback int32_t func()
void k_mimetypechooser_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param visible bool
void k_mimetypechooser_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param visible bool
void k_mimetypechooser_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, bool visible)
void k_mimetypechooser_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
QSize* k_mimetypechooser_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
QSize* k_mimetypechooser_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback QSize* func()
void k_mimetypechooser_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
QSize* k_mimetypechooser_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
QSize* k_mimetypechooser_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback QSize* func()
void k_mimetypechooser_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param param1 int
int32_t k_mimetypechooser_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param param1 int
int32_t k_mimetypechooser_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback int32_t func(KMimeTypeChooser* self, int param1)
void k_mimetypechooser_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback bool func()
void k_mimetypechooser_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
QPaintEngine* k_mimetypechooser_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
QPaintEngine* k_mimetypechooser_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback QPaintEngine* func()
void k_mimetypechooser_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QEvent*
bool k_mimetypechooser_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QEvent*
bool k_mimetypechooser_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback bool func(KMimeTypeChooser* self, QEvent* event)
void k_mimetypechooser_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QMouseEvent*
void k_mimetypechooser_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QMouseEvent*
void k_mimetypechooser_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QMouseEvent* event)
void k_mimetypechooser_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QMouseEvent*
void k_mimetypechooser_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QMouseEvent*
void k_mimetypechooser_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QMouseEvent* event)
void k_mimetypechooser_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QMouseEvent*
void k_mimetypechooser_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QMouseEvent*
void k_mimetypechooser_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QMouseEvent* event)
void k_mimetypechooser_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QMouseEvent*
void k_mimetypechooser_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QMouseEvent*
void k_mimetypechooser_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QMouseEvent* event)
void k_mimetypechooser_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QWheelEvent*
void k_mimetypechooser_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QWheelEvent*
void k_mimetypechooser_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QWheelEvent* event)
void k_mimetypechooser_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QKeyEvent*
void k_mimetypechooser_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QKeyEvent*
void k_mimetypechooser_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QKeyEvent* event)
void k_mimetypechooser_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QKeyEvent*
void k_mimetypechooser_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QKeyEvent*
void k_mimetypechooser_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QKeyEvent* event)
void k_mimetypechooser_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QFocusEvent*
void k_mimetypechooser_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QFocusEvent*
void k_mimetypechooser_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QFocusEvent* event)
void k_mimetypechooser_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QFocusEvent*
void k_mimetypechooser_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QFocusEvent*
void k_mimetypechooser_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QFocusEvent* event)
void k_mimetypechooser_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QEnterEvent*
void k_mimetypechooser_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QEnterEvent*
void k_mimetypechooser_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QEnterEvent* event)
void k_mimetypechooser_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QEvent*
void k_mimetypechooser_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QEvent*
void k_mimetypechooser_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QEvent* event)
void k_mimetypechooser_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QPaintEvent*
void k_mimetypechooser_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QPaintEvent*
void k_mimetypechooser_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QPaintEvent* event)
void k_mimetypechooser_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QMoveEvent*
void k_mimetypechooser_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QMoveEvent*
void k_mimetypechooser_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QMoveEvent* event)
void k_mimetypechooser_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QResizeEvent*
void k_mimetypechooser_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QResizeEvent*
void k_mimetypechooser_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QResizeEvent* event)
void k_mimetypechooser_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QCloseEvent*
void k_mimetypechooser_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QCloseEvent*
void k_mimetypechooser_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QCloseEvent* event)
void k_mimetypechooser_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QContextMenuEvent*
void k_mimetypechooser_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QContextMenuEvent*
void k_mimetypechooser_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QContextMenuEvent* event)
void k_mimetypechooser_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QTabletEvent*
void k_mimetypechooser_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QTabletEvent*
void k_mimetypechooser_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QTabletEvent* event)
void k_mimetypechooser_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QActionEvent*
void k_mimetypechooser_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QActionEvent*
void k_mimetypechooser_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QActionEvent* event)
void k_mimetypechooser_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QDragEnterEvent*
void k_mimetypechooser_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QDragEnterEvent*
void k_mimetypechooser_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QDragEnterEvent* event)
void k_mimetypechooser_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QDragMoveEvent*
void k_mimetypechooser_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QDragMoveEvent*
void k_mimetypechooser_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QDragMoveEvent* event)
void k_mimetypechooser_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QDragLeaveEvent*
void k_mimetypechooser_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QDragLeaveEvent*
void k_mimetypechooser_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QDragLeaveEvent* event)
void k_mimetypechooser_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QDropEvent*
void k_mimetypechooser_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QDropEvent*
void k_mimetypechooser_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QDropEvent* event)
void k_mimetypechooser_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QShowEvent*
void k_mimetypechooser_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QShowEvent*
void k_mimetypechooser_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QShowEvent* event)
void k_mimetypechooser_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QHideEvent*
void k_mimetypechooser_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QHideEvent*
void k_mimetypechooser_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QHideEvent* event)
void k_mimetypechooser_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_mimetypechooser_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_mimetypechooser_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback bool func(KMimeTypeChooser* self, const char* eventType, void* message, intptr_t* result)
void k_mimetypechooser_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param param1 QEvent*
void k_mimetypechooser_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param param1 QEvent*
void k_mimetypechooser_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QEvent* param1)
void k_mimetypechooser_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_mimetypechooser_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_mimetypechooser_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback int32_t func(KMimeTypeChooser* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_mimetypechooser_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param painter QPainter*
void k_mimetypechooser_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param painter QPainter*
void k_mimetypechooser_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QPainter* painter)
void k_mimetypechooser_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param offset QPoint*
QPaintDevice* k_mimetypechooser_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param offset QPoint*
QPaintDevice* k_mimetypechooser_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback QPaintDevice* func(KMimeTypeChooser* self, QPoint* offset)
void k_mimetypechooser_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
QPainter* k_mimetypechooser_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
QPainter* k_mimetypechooser_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback QPainter* func()
void k_mimetypechooser_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param param1 QInputMethodEvent*
void k_mimetypechooser_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param param1 QInputMethodEvent*
void k_mimetypechooser_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QInputMethodEvent* param1)
void k_mimetypechooser_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_mimetypechooser_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_mimetypechooser_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback QVariant* func(KMimeTypeChooser* self, enum Qt__InputMethodQuery param1)
void k_mimetypechooser_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param next bool
bool k_mimetypechooser_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param next bool
bool k_mimetypechooser_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback bool func(KMimeTypeChooser* self, bool next)
void k_mimetypechooser_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param watched QObject*
/// @param event QEvent*
bool k_mimetypechooser_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param watched QObject*
/// @param event QEvent*
bool k_mimetypechooser_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback bool func(KMimeTypeChooser* self, QObject* watched, QEvent* event)
void k_mimetypechooser_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QTimerEvent*
void k_mimetypechooser_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QTimerEvent*
void k_mimetypechooser_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QTimerEvent* event)
void k_mimetypechooser_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QChildEvent*
void k_mimetypechooser_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QChildEvent*
void k_mimetypechooser_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QChildEvent* event)
void k_mimetypechooser_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QEvent*
void k_mimetypechooser_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param event QEvent*
void k_mimetypechooser_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QEvent* event)
void k_mimetypechooser_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param signal QMetaMethod*
void k_mimetypechooser_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param signal QMetaMethod*
void k_mimetypechooser_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QMetaMethod* signal)
void k_mimetypechooser_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param signal QMetaMethod*
void k_mimetypechooser_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param signal QMetaMethod*
void k_mimetypechooser_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, QMetaMethod* signal)
void k_mimetypechooser_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func()
void k_mimetypechooser_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func()
void k_mimetypechooser_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback void func()
void k_mimetypechooser_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback bool func()
void k_mimetypechooser_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
bool k_mimetypechooser_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback bool func()
void k_mimetypechooser_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
QObject* k_mimetypechooser_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
QObject* k_mimetypechooser_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback QObject* func()
void k_mimetypechooser_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
int32_t k_mimetypechooser_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback int32_t func()
void k_mimetypechooser_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param signal const char*
int32_t k_mimetypechooser_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param signal const char*
int32_t k_mimetypechooser_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback int32_t func(KMimeTypeChooser* self, const char* signal)
void k_mimetypechooser_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param signal QMetaMethod*
bool k_mimetypechooser_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param signal QMetaMethod*
bool k_mimetypechooser_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback bool func(KMimeTypeChooser* self, QMetaMethod* signal)
void k_mimetypechooser_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_mimetypechooser_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_mimetypechooser_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooser*
/// @param callback double func(KMimeTypeChooser* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_mimetypechooser_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KMimeTypeChooser*
/// @param callback void func(KMimeTypeChooser* self, const char* objectName)
void k_mimetypechooser_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kmimetypechooser.html#dtor.KMimeTypeChooser)
///
/// Delete this object from C++ memory.
///
/// @param self KMimeTypeChooser*
void k_mimetypechooser_delete(void* self);

/// https://api.kde.org/kmimetypechooserdialog.html

/// k_mimetypechooserdialog_new constructs a new KMimeTypeChooserDialog object.
///
KMimeTypeChooserDialog* k_mimetypechooserdialog_new();

/// k_mimetypechooserdialog_new2 constructs a new KMimeTypeChooserDialog object.
///
/// @param title const char*
/// @param text const char*
/// @param selectedMimeTypes const char**
/// @param defaultGroup const char*
KMimeTypeChooserDialog* k_mimetypechooserdialog_new2(const char* title, const char* text, const char* selectedMimeTypes[], const char* defaultGroup);

/// k_mimetypechooserdialog_new3 constructs a new KMimeTypeChooserDialog object.
///
/// @param title const char*
KMimeTypeChooserDialog* k_mimetypechooserdialog_new3(const char* title);

/// k_mimetypechooserdialog_new4 constructs a new KMimeTypeChooserDialog object.
///
/// @param title const char*
/// @param text const char*
KMimeTypeChooserDialog* k_mimetypechooserdialog_new4(const char* title, const char* text);

/// k_mimetypechooserdialog_new5 constructs a new KMimeTypeChooserDialog object.
///
/// @param title const char*
/// @param text const char*
/// @param selectedMimeTypes const char**
KMimeTypeChooserDialog* k_mimetypechooserdialog_new5(const char* title, const char* text, const char* selectedMimeTypes[]);

/// k_mimetypechooserdialog_new6 constructs a new KMimeTypeChooserDialog object.
///
/// @param title const char*
/// @param text const char*
/// @param selectedMimeTypes const char**
/// @param defaultGroup const char*
KMimeTypeChooserDialog* k_mimetypechooserdialog_new6(const char* title, const char* text, const char* selectedMimeTypes[], const char* defaultGroup);

/// k_mimetypechooserdialog_new7 constructs a new KMimeTypeChooserDialog object.
///
/// @param title const char*
/// @param text const char*
/// @param selectedMimeTypes const char**
/// @param defaultGroup const char*
/// @param groupsToShow const char**
KMimeTypeChooserDialog* k_mimetypechooserdialog_new7(const char* title, const char* text, const char* selectedMimeTypes[], const char* defaultGroup, const char* groupsToShow[]);

/// k_mimetypechooserdialog_new8 constructs a new KMimeTypeChooserDialog object.
///
/// @param title const char*
/// @param text const char*
/// @param selectedMimeTypes const char**
/// @param defaultGroup const char*
/// @param groupsToShow const char**
/// @param visuals int
KMimeTypeChooserDialog* k_mimetypechooserdialog_new8(const char* title, const char* text, const char* selectedMimeTypes[], const char* defaultGroup, const char* groupsToShow[], int visuals);

/// k_mimetypechooserdialog_new9 constructs a new KMimeTypeChooserDialog object.
///
/// @param title const char*
/// @param text const char*
/// @param selectedMimeTypes const char**
/// @param defaultGroup const char*
/// @param groupsToShow const char**
/// @param visuals int
/// @param parent QWidget*
KMimeTypeChooserDialog* k_mimetypechooserdialog_new9(const char* title, const char* text, const char* selectedMimeTypes[], const char* defaultGroup, const char* groupsToShow[], int visuals, void* parent);

/// k_mimetypechooserdialog_new10 constructs a new KMimeTypeChooserDialog object.
///
/// @param title const char*
/// @param text const char*
/// @param selectedMimeTypes const char**
/// @param defaultGroup const char*
/// @param parent QWidget*
KMimeTypeChooserDialog* k_mimetypechooserdialog_new10(const char* title, const char* text, const char* selectedMimeTypes[], const char* defaultGroup, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KMimeTypeChooserDialog*
const QMetaObject* k_mimetypechooserdialog_meta_object(void* self);

/// @param self KMimeTypeChooserDialog*
/// @param param1 const char*
void* k_mimetypechooserdialog_metacast(void* self, const char* param1);

/// @param self KMimeTypeChooserDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_mimetypechooserdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback int32_t func(KMimeTypeChooserDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_mimetypechooserdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_mimetypechooserdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_mimetypechooserdialog_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kmimetypechooserdialog.html#chooser)
///
/// @param self KMimeTypeChooserDialog*
KMimeTypeChooser* k_mimetypechooserdialog_chooser(void* self);

/// [Qt documentation](https://api.kde.org/kmimetypechooserdialog.html#sizeHint)
///
/// @param self KMimeTypeChooserDialog*
QSize* k_mimetypechooserdialog_size_hint(void* self);

/// [Qt documentation](https://api.kde.org/kmimetypechooserdialog.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback QSize* func()
void k_mimetypechooserdialog_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://api.kde.org/kmimetypechooserdialog.html#sizeHint)
///
/// Base class method implementation
///
/// @param self KMimeTypeChooserDialog*
QSize* k_mimetypechooserdialog_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_mimetypechooserdialog_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_mimetypechooserdialog_tr3(const char* s, const char* c, int n);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_result(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self KMimeTypeChooserDialog*
/// @param sizeGripEnabled bool
void k_mimetypechooserdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self KMimeTypeChooserDialog*
/// @param modal bool
void k_mimetypechooserdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self KMimeTypeChooserDialog*
/// @param r int
void k_mimetypechooserdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KMimeTypeChooserDialog*
/// @param result int
void k_mimetypechooserdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, int result)
void k_mimetypechooserdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self)
void k_mimetypechooserdialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self)
void k_mimetypechooserdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KMimeTypeChooserDialog*
uintptr_t k_mimetypechooserdialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KMimeTypeChooserDialog*
uintptr_t k_mimetypechooserdialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KMimeTypeChooserDialog*
uintptr_t k_mimetypechooserdialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KMimeTypeChooserDialog*
QStyle* k_mimetypechooserdialog_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KMimeTypeChooserDialog*
/// @param style QStyle*
void k_mimetypechooserdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KMimeTypeChooserDialog*
///
/// @return enum Qt__WindowModality
int32_t k_mimetypechooserdialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KMimeTypeChooserDialog*
/// @param windowModality enum Qt__WindowModality
void k_mimetypechooserdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QWidget*
bool k_mimetypechooserdialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KMimeTypeChooserDialog*
/// @param enabled bool
void k_mimetypechooserdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KMimeTypeChooserDialog*
/// @param disabled bool
void k_mimetypechooserdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KMimeTypeChooserDialog*
/// @param windowModified bool
void k_mimetypechooserdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KMimeTypeChooserDialog*
QRect* k_mimetypechooserdialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KMimeTypeChooserDialog*
const QRect* k_mimetypechooserdialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KMimeTypeChooserDialog*
QRect* k_mimetypechooserdialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KMimeTypeChooserDialog*
QPoint* k_mimetypechooserdialog_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KMimeTypeChooserDialog*
QSize* k_mimetypechooserdialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KMimeTypeChooserDialog*
QSize* k_mimetypechooserdialog_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KMimeTypeChooserDialog*
QRect* k_mimetypechooserdialog_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KMimeTypeChooserDialog*
QRect* k_mimetypechooserdialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KMimeTypeChooserDialog*
QRegion* k_mimetypechooserdialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KMimeTypeChooserDialog*
QSize* k_mimetypechooserdialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KMimeTypeChooserDialog*
QSize* k_mimetypechooserdialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KMimeTypeChooserDialog*
/// @param minimumSize QSize*
void k_mimetypechooserdialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KMimeTypeChooserDialog*
/// @param minw int
/// @param minh int
void k_mimetypechooserdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KMimeTypeChooserDialog*
/// @param maximumSize QSize*
void k_mimetypechooserdialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KMimeTypeChooserDialog*
/// @param maxw int
/// @param maxh int
void k_mimetypechooserdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KMimeTypeChooserDialog*
/// @param minw int
void k_mimetypechooserdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KMimeTypeChooserDialog*
/// @param minh int
void k_mimetypechooserdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KMimeTypeChooserDialog*
/// @param maxw int
void k_mimetypechooserdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KMimeTypeChooserDialog*
/// @param maxh int
void k_mimetypechooserdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KMimeTypeChooserDialog*
QSize* k_mimetypechooserdialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KMimeTypeChooserDialog*
/// @param sizeIncrement QSize*
void k_mimetypechooserdialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KMimeTypeChooserDialog*
/// @param w int
/// @param h int
void k_mimetypechooserdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KMimeTypeChooserDialog*
QSize* k_mimetypechooserdialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KMimeTypeChooserDialog*
/// @param baseSize QSize*
void k_mimetypechooserdialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KMimeTypeChooserDialog*
/// @param basew int
/// @param baseh int
void k_mimetypechooserdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KMimeTypeChooserDialog*
/// @param fixedSize QSize*
void k_mimetypechooserdialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KMimeTypeChooserDialog*
/// @param w int
/// @param h int
void k_mimetypechooserdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KMimeTypeChooserDialog*
/// @param w int
void k_mimetypechooserdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KMimeTypeChooserDialog*
/// @param h int
void k_mimetypechooserdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QPointF*
QPointF* k_mimetypechooserdialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QPoint*
QPoint* k_mimetypechooserdialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QPointF*
QPointF* k_mimetypechooserdialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QPoint*
QPoint* k_mimetypechooserdialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QPointF*
QPointF* k_mimetypechooserdialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QPoint*
QPoint* k_mimetypechooserdialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QPointF*
QPointF* k_mimetypechooserdialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QPoint*
QPoint* k_mimetypechooserdialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_mimetypechooserdialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_mimetypechooserdialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_mimetypechooserdialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_mimetypechooserdialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KMimeTypeChooserDialog*
QWidget* k_mimetypechooserdialog_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KMimeTypeChooserDialog*
QWidget* k_mimetypechooserdialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KMimeTypeChooserDialog*
QWidget* k_mimetypechooserdialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KMimeTypeChooserDialog*
const QPalette* k_mimetypechooserdialog_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KMimeTypeChooserDialog*
/// @param palette QPalette*
void k_mimetypechooserdialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KMimeTypeChooserDialog*
/// @param backgroundRole enum QPalette__ColorRole
void k_mimetypechooserdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KMimeTypeChooserDialog*
///
/// @return enum QPalette__ColorRole
int32_t k_mimetypechooserdialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KMimeTypeChooserDialog*
/// @param foregroundRole enum QPalette__ColorRole
void k_mimetypechooserdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KMimeTypeChooserDialog*
///
/// @return enum QPalette__ColorRole
int32_t k_mimetypechooserdialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KMimeTypeChooserDialog*
const QFont* k_mimetypechooserdialog_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KMimeTypeChooserDialog*
/// @param font QFont*
void k_mimetypechooserdialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KMimeTypeChooserDialog*
QFontMetrics* k_mimetypechooserdialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KMimeTypeChooserDialog*
QFontInfo* k_mimetypechooserdialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KMimeTypeChooserDialog*
QCursor* k_mimetypechooserdialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KMimeTypeChooserDialog*
/// @param cursor QCursor*
void k_mimetypechooserdialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KMimeTypeChooserDialog*
/// @param enable bool
void k_mimetypechooserdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KMimeTypeChooserDialog*
/// @param enable bool
void k_mimetypechooserdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KMimeTypeChooserDialog*
/// @param mask QBitmap*
void k_mimetypechooserdialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KMimeTypeChooserDialog*
/// @param mask QRegion*
void k_mimetypechooserdialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KMimeTypeChooserDialog*
QRegion* k_mimetypechooserdialog_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooserDialog*
/// @param target QPaintDevice*
void k_mimetypechooserdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooserDialog*
/// @param painter QPainter*
void k_mimetypechooserdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KMimeTypeChooserDialog*
QPixmap* k_mimetypechooserdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KMimeTypeChooserDialog*
QGraphicsEffect* k_mimetypechooserdialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KMimeTypeChooserDialog*
/// @param effect QGraphicsEffect*
void k_mimetypechooserdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KMimeTypeChooserDialog*
/// @param typeVal enum Qt__GestureType
void k_mimetypechooserdialog_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KMimeTypeChooserDialog*
/// @param typeVal enum Qt__GestureType
void k_mimetypechooserdialog_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KMimeTypeChooserDialog*
/// @param windowTitle const char*
void k_mimetypechooserdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KMimeTypeChooserDialog*
/// @param styleSheet const char*
void k_mimetypechooserdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KMimeTypeChooserDialog*
/// @param icon QIcon*
void k_mimetypechooserdialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KMimeTypeChooserDialog*
QIcon* k_mimetypechooserdialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KMimeTypeChooserDialog*
/// @param windowIconText const char*
void k_mimetypechooserdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KMimeTypeChooserDialog*
/// @param windowRole const char*
void k_mimetypechooserdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KMimeTypeChooserDialog*
/// @param filePath const char*
void k_mimetypechooserdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KMimeTypeChooserDialog*
/// @param level double
void k_mimetypechooserdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KMimeTypeChooserDialog*
double k_mimetypechooserdialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KMimeTypeChooserDialog*
/// @param toolTip const char*
void k_mimetypechooserdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KMimeTypeChooserDialog*
/// @param msec int
void k_mimetypechooserdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KMimeTypeChooserDialog*
/// @param statusTip const char*
void k_mimetypechooserdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KMimeTypeChooserDialog*
/// @param whatsThis const char*
void k_mimetypechooserdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KMimeTypeChooserDialog*
/// @param name const char*
void k_mimetypechooserdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KMimeTypeChooserDialog*
/// @param description const char*
void k_mimetypechooserdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KMimeTypeChooserDialog*
/// @param direction enum Qt__LayoutDirection
void k_mimetypechooserdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KMimeTypeChooserDialog*
///
/// @return enum Qt__LayoutDirection
int32_t k_mimetypechooserdialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KMimeTypeChooserDialog*
/// @param locale QLocale*
void k_mimetypechooserdialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KMimeTypeChooserDialog*
QLocale* k_mimetypechooserdialog_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KMimeTypeChooserDialog*
/// @param reason enum Qt__FocusReason
void k_mimetypechooserdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KMimeTypeChooserDialog*
///
/// @return enum Qt__FocusPolicy
int32_t k_mimetypechooserdialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KMimeTypeChooserDialog*
/// @param policy enum Qt__FocusPolicy
void k_mimetypechooserdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_mimetypechooserdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KMimeTypeChooserDialog*
/// @param focusProxy QWidget*
void k_mimetypechooserdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KMimeTypeChooserDialog*
QWidget* k_mimetypechooserdialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KMimeTypeChooserDialog*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_mimetypechooserdialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KMimeTypeChooserDialog*
/// @param policy enum Qt__ContextMenuPolicy
void k_mimetypechooserdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QCursor*
void k_mimetypechooserdialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KMimeTypeChooserDialog*
/// @param key QKeySequence*
int32_t k_mimetypechooserdialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KMimeTypeChooserDialog*
/// @param id int
void k_mimetypechooserdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KMimeTypeChooserDialog*
/// @param id int
void k_mimetypechooserdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KMimeTypeChooserDialog*
/// @param id int
void k_mimetypechooserdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_mimetypechooserdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_mimetypechooserdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KMimeTypeChooserDialog*
/// @param enable bool
void k_mimetypechooserdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KMimeTypeChooserDialog*
QGraphicsProxyWidget* k_mimetypechooserdialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMimeTypeChooserDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_mimetypechooserdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QRect*
void k_mimetypechooserdialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QRegion*
void k_mimetypechooserdialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMimeTypeChooserDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_mimetypechooserdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QRect*
void k_mimetypechooserdialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QRegion*
void k_mimetypechooserdialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KMimeTypeChooserDialog*
/// @param hidden bool
void k_mimetypechooserdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QWidget*
void k_mimetypechooserdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KMimeTypeChooserDialog*
/// @param x int
/// @param y int
void k_mimetypechooserdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QPoint*
void k_mimetypechooserdialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KMimeTypeChooserDialog*
/// @param w int
/// @param h int
void k_mimetypechooserdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QSize*
void k_mimetypechooserdialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KMimeTypeChooserDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_mimetypechooserdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KMimeTypeChooserDialog*
/// @param geometry QRect*
void k_mimetypechooserdialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
char* k_mimetypechooserdialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KMimeTypeChooserDialog*
/// @param geometry const char*
bool k_mimetypechooserdialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QWidget*
bool k_mimetypechooserdialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KMimeTypeChooserDialog*
///
/// @return flag of enum Qt__WindowState
int32_t k_mimetypechooserdialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KMimeTypeChooserDialog*
/// @param state flag of enum Qt__WindowState
void k_mimetypechooserdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KMimeTypeChooserDialog*
/// @param state flag of enum Qt__WindowState
void k_mimetypechooserdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KMimeTypeChooserDialog*
QSizePolicy* k_mimetypechooserdialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KMimeTypeChooserDialog*
/// @param sizePolicy QSizePolicy*
void k_mimetypechooserdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KMimeTypeChooserDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_mimetypechooserdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KMimeTypeChooserDialog*
QRegion* k_mimetypechooserdialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KMimeTypeChooserDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_mimetypechooserdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KMimeTypeChooserDialog*
/// @param margins QMargins*
void k_mimetypechooserdialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KMimeTypeChooserDialog*
QMargins* k_mimetypechooserdialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KMimeTypeChooserDialog*
QRect* k_mimetypechooserdialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KMimeTypeChooserDialog*
QLayout* k_mimetypechooserdialog_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KMimeTypeChooserDialog*
/// @param layout QLayout*
void k_mimetypechooserdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KMimeTypeChooserDialog*
/// @param parent QWidget*
void k_mimetypechooserdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KMimeTypeChooserDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_mimetypechooserdialog_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KMimeTypeChooserDialog*
/// @param dx int
/// @param dy int
void k_mimetypechooserdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KMimeTypeChooserDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_mimetypechooserdialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KMimeTypeChooserDialog*
QWidget* k_mimetypechooserdialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KMimeTypeChooserDialog*
QWidget* k_mimetypechooserdialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KMimeTypeChooserDialog*
QWidget* k_mimetypechooserdialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KMimeTypeChooserDialog*
/// @param on bool
void k_mimetypechooserdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMimeTypeChooserDialog*
/// @param action QAction*
void k_mimetypechooserdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KMimeTypeChooserDialog*
/// @param actions libqt_list /* of QAction* */
void k_mimetypechooserdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KMimeTypeChooserDialog*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_mimetypechooserdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KMimeTypeChooserDialog*
/// @param before QAction*
/// @param action QAction*
void k_mimetypechooserdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KMimeTypeChooserDialog*
/// @param action QAction*
void k_mimetypechooserdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KMimeTypeChooserDialog*
libqt_list /* of QAction* */ k_mimetypechooserdialog_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMimeTypeChooserDialog*
/// @param text const char*
QAction* k_mimetypechooserdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMimeTypeChooserDialog*
/// @param icon QIcon*
/// @param text const char*
QAction* k_mimetypechooserdialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMimeTypeChooserDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_mimetypechooserdialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KMimeTypeChooserDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_mimetypechooserdialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KMimeTypeChooserDialog*
QWidget* k_mimetypechooserdialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KMimeTypeChooserDialog*
/// @param typeVal flag of enum Qt__WindowType
void k_mimetypechooserdialog_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KMimeTypeChooserDialog*
///
/// @return flag of enum Qt__WindowType
int64_t k_mimetypechooserdialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 enum Qt__WindowType
void k_mimetypechooserdialog_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KMimeTypeChooserDialog*
/// @param typeVal flag of enum Qt__WindowType
void k_mimetypechooserdialog_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KMimeTypeChooserDialog*
///
/// @return enum Qt__WindowType
int64_t k_mimetypechooserdialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_mimetypechooserdialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KMimeTypeChooserDialog*
/// @param x int
/// @param y int
QWidget* k_mimetypechooserdialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KMimeTypeChooserDialog*
/// @param p QPoint*
QWidget* k_mimetypechooserdialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KMimeTypeChooserDialog*
/// @param p QPointF*
QWidget* k_mimetypechooserdialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 enum Qt__WidgetAttribute
void k_mimetypechooserdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 enum Qt__WidgetAttribute
bool k_mimetypechooserdialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KMimeTypeChooserDialog*
/// @param child QWidget*
bool k_mimetypechooserdialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KMimeTypeChooserDialog*
/// @param enabled bool
void k_mimetypechooserdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KMimeTypeChooserDialog*
QBackingStore* k_mimetypechooserdialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KMimeTypeChooserDialog*
QWindow* k_mimetypechooserdialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KMimeTypeChooserDialog*
QScreen* k_mimetypechooserdialog_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KMimeTypeChooserDialog*
/// @param screen QScreen*
void k_mimetypechooserdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_mimetypechooserdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KMimeTypeChooserDialog*
/// @param title const char*
void k_mimetypechooserdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, const char* title)
void k_mimetypechooserdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KMimeTypeChooserDialog*
/// @param icon QIcon*
void k_mimetypechooserdialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QIcon* icon)
void k_mimetypechooserdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KMimeTypeChooserDialog*
/// @param iconText const char*
void k_mimetypechooserdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, const char* iconText)
void k_mimetypechooserdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KMimeTypeChooserDialog*
/// @param pos QPoint*
void k_mimetypechooserdialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QPoint* pos)
void k_mimetypechooserdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KMimeTypeChooserDialog*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_mimetypechooserdialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KMimeTypeChooserDialog*
/// @param hints flag of enum Qt__InputMethodHint
void k_mimetypechooserdialog_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooserDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_mimetypechooserdialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooserDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_mimetypechooserdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooserDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_mimetypechooserdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooserDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_mimetypechooserdialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooserDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_mimetypechooserdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KMimeTypeChooserDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_mimetypechooserdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KMimeTypeChooserDialog*
/// @param rectangle QRect*
QPixmap* k_mimetypechooserdialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KMimeTypeChooserDialog*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_mimetypechooserdialog_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KMimeTypeChooserDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_mimetypechooserdialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KMimeTypeChooserDialog*
/// @param id int
/// @param enable bool
void k_mimetypechooserdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KMimeTypeChooserDialog*
/// @param id int
/// @param enable bool
void k_mimetypechooserdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_mimetypechooserdialog_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_mimetypechooserdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_mimetypechooserdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_mimetypechooserdialog_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char* k_mimetypechooserdialog_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KMimeTypeChooserDialog*
/// @param name char*
void k_mimetypechooserdialog_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KMimeTypeChooserDialog*
/// @param b bool
bool k_mimetypechooserdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KMimeTypeChooserDialog*
QThread* k_mimetypechooserdialog_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KMimeTypeChooserDialog*
/// @param thread QThread*
bool k_mimetypechooserdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KMimeTypeChooserDialog*
/// @param interval int
int32_t k_mimetypechooserdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KMimeTypeChooserDialog*
/// @param id int
void k_mimetypechooserdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KMimeTypeChooserDialog*
/// @param id enum Qt__TimerId
void k_mimetypechooserdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KMimeTypeChooserDialog*
libqt_list /* of QObject* */ k_mimetypechooserdialog_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KMimeTypeChooserDialog*
/// @param filterObj QObject*
void k_mimetypechooserdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KMimeTypeChooserDialog*
/// @param obj QObject*
void k_mimetypechooserdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_mimetypechooserdialog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KMimeTypeChooserDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_mimetypechooserdialog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_mimetypechooserdialog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_mimetypechooserdialog_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KMimeTypeChooserDialog*
/// @param name const char*
/// @param value QVariant*
bool k_mimetypechooserdialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KMimeTypeChooserDialog*
/// @param name const char*
QVariant* k_mimetypechooserdialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMimeTypeChooserDialog*
const char** k_mimetypechooserdialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KMimeTypeChooserDialog*
QBindingStorage* k_mimetypechooserdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KMimeTypeChooserDialog*
const QBindingStorage* k_mimetypechooserdialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self)
void k_mimetypechooserdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KMimeTypeChooserDialog*
QObject* k_mimetypechooserdialog_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KMimeTypeChooserDialog*
/// @param classname const char*
bool k_mimetypechooserdialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KMimeTypeChooserDialog*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_mimetypechooserdialog_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KMimeTypeChooserDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_mimetypechooserdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_mimetypechooserdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KMimeTypeChooserDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_mimetypechooserdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QObject*
void k_mimetypechooserdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QObject* param1)
void k_mimetypechooserdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KMimeTypeChooserDialog*
double k_mimetypechooserdialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KMimeTypeChooserDialog*
double k_mimetypechooserdialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_mimetypechooserdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_mimetypechooserdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param visible bool
void k_mimetypechooserdialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param visible bool
void k_mimetypechooserdialog_qbase_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, bool visible)
void k_mimetypechooserdialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
QSize* k_mimetypechooserdialog_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
QSize* k_mimetypechooserdialog_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback QSize* func()
void k_mimetypechooserdialog_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func()
void k_mimetypechooserdialog_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback int32_t func()
void k_mimetypechooserdialog_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 int
void k_mimetypechooserdialog_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 int
void k_mimetypechooserdialog_qbase_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, int param1)
void k_mimetypechooserdialog_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_qbase_accept(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func()
void k_mimetypechooserdialog_on_accept(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func()
void k_mimetypechooserdialog_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QKeyEvent*
void k_mimetypechooserdialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QKeyEvent*
void k_mimetypechooserdialog_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QKeyEvent* param1)
void k_mimetypechooserdialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QCloseEvent*
void k_mimetypechooserdialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QCloseEvent*
void k_mimetypechooserdialog_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QCloseEvent* param1)
void k_mimetypechooserdialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QShowEvent*
void k_mimetypechooserdialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QShowEvent*
void k_mimetypechooserdialog_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QShowEvent* param1)
void k_mimetypechooserdialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QResizeEvent*
void k_mimetypechooserdialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QResizeEvent*
void k_mimetypechooserdialog_qbase_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QResizeEvent* param1)
void k_mimetypechooserdialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QContextMenuEvent*
void k_mimetypechooserdialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QContextMenuEvent*
void k_mimetypechooserdialog_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QContextMenuEvent* param1)
void k_mimetypechooserdialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_mimetypechooserdialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_mimetypechooserdialog_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback bool func(KMimeTypeChooserDialog* self, QObject* param1, QEvent* param2)
void k_mimetypechooserdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback int32_t func()
void k_mimetypechooserdialog_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 int
int32_t k_mimetypechooserdialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 int
int32_t k_mimetypechooserdialog_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback int32_t func(KMimeTypeChooserDialog* self, int param1)
void k_mimetypechooserdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback bool func()
void k_mimetypechooserdialog_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
QPaintEngine* k_mimetypechooserdialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
QPaintEngine* k_mimetypechooserdialog_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback QPaintEngine* func()
void k_mimetypechooserdialog_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QEvent*
bool k_mimetypechooserdialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QEvent*
bool k_mimetypechooserdialog_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback bool func(KMimeTypeChooserDialog* self, QEvent* event)
void k_mimetypechooserdialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QMouseEvent*
void k_mimetypechooserdialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QMouseEvent*
void k_mimetypechooserdialog_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QMouseEvent* event)
void k_mimetypechooserdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QMouseEvent*
void k_mimetypechooserdialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QMouseEvent*
void k_mimetypechooserdialog_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QMouseEvent* event)
void k_mimetypechooserdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QMouseEvent*
void k_mimetypechooserdialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QMouseEvent*
void k_mimetypechooserdialog_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QMouseEvent* event)
void k_mimetypechooserdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QMouseEvent*
void k_mimetypechooserdialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QMouseEvent*
void k_mimetypechooserdialog_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QMouseEvent* event)
void k_mimetypechooserdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QWheelEvent*
void k_mimetypechooserdialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QWheelEvent*
void k_mimetypechooserdialog_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QWheelEvent* event)
void k_mimetypechooserdialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QKeyEvent*
void k_mimetypechooserdialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QKeyEvent*
void k_mimetypechooserdialog_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QKeyEvent* event)
void k_mimetypechooserdialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QFocusEvent*
void k_mimetypechooserdialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QFocusEvent*
void k_mimetypechooserdialog_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QFocusEvent* event)
void k_mimetypechooserdialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QFocusEvent*
void k_mimetypechooserdialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QFocusEvent*
void k_mimetypechooserdialog_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QFocusEvent* event)
void k_mimetypechooserdialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QEnterEvent*
void k_mimetypechooserdialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QEnterEvent*
void k_mimetypechooserdialog_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QEnterEvent* event)
void k_mimetypechooserdialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QEvent*
void k_mimetypechooserdialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QEvent*
void k_mimetypechooserdialog_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QEvent* event)
void k_mimetypechooserdialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QPaintEvent*
void k_mimetypechooserdialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QPaintEvent*
void k_mimetypechooserdialog_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QPaintEvent* event)
void k_mimetypechooserdialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QMoveEvent*
void k_mimetypechooserdialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QMoveEvent*
void k_mimetypechooserdialog_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QMoveEvent* event)
void k_mimetypechooserdialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QTabletEvent*
void k_mimetypechooserdialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QTabletEvent*
void k_mimetypechooserdialog_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QTabletEvent* event)
void k_mimetypechooserdialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QActionEvent*
void k_mimetypechooserdialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QActionEvent*
void k_mimetypechooserdialog_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QActionEvent* event)
void k_mimetypechooserdialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QDragEnterEvent*
void k_mimetypechooserdialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QDragEnterEvent*
void k_mimetypechooserdialog_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QDragEnterEvent* event)
void k_mimetypechooserdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QDragMoveEvent*
void k_mimetypechooserdialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QDragMoveEvent*
void k_mimetypechooserdialog_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QDragMoveEvent* event)
void k_mimetypechooserdialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QDragLeaveEvent*
void k_mimetypechooserdialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QDragLeaveEvent*
void k_mimetypechooserdialog_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QDragLeaveEvent* event)
void k_mimetypechooserdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QDropEvent*
void k_mimetypechooserdialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QDropEvent*
void k_mimetypechooserdialog_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QDropEvent* event)
void k_mimetypechooserdialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QHideEvent*
void k_mimetypechooserdialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QHideEvent*
void k_mimetypechooserdialog_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QHideEvent* event)
void k_mimetypechooserdialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_mimetypechooserdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_mimetypechooserdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback bool func(KMimeTypeChooserDialog* self, const char* eventType, void* message, intptr_t* result)
void k_mimetypechooserdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QEvent*
void k_mimetypechooserdialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QEvent*
void k_mimetypechooserdialog_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QEvent* param1)
void k_mimetypechooserdialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_mimetypechooserdialog_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_mimetypechooserdialog_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback int32_t func(KMimeTypeChooserDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_mimetypechooserdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param painter QPainter*
void k_mimetypechooserdialog_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param painter QPainter*
void k_mimetypechooserdialog_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QPainter* painter)
void k_mimetypechooserdialog_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param offset QPoint*
QPaintDevice* k_mimetypechooserdialog_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param offset QPoint*
QPaintDevice* k_mimetypechooserdialog_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback QPaintDevice* func(KMimeTypeChooserDialog* self, QPoint* offset)
void k_mimetypechooserdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
QPainter* k_mimetypechooserdialog_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
QPainter* k_mimetypechooserdialog_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback QPainter* func()
void k_mimetypechooserdialog_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QInputMethodEvent*
void k_mimetypechooserdialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QInputMethodEvent*
void k_mimetypechooserdialog_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QInputMethodEvent* param1)
void k_mimetypechooserdialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_mimetypechooserdialog_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_mimetypechooserdialog_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback QVariant* func(KMimeTypeChooserDialog* self, enum Qt__InputMethodQuery param1)
void k_mimetypechooserdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param next bool
bool k_mimetypechooserdialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param next bool
bool k_mimetypechooserdialog_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback bool func(KMimeTypeChooserDialog* self, bool next)
void k_mimetypechooserdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QTimerEvent*
void k_mimetypechooserdialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QTimerEvent*
void k_mimetypechooserdialog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QTimerEvent* event)
void k_mimetypechooserdialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QChildEvent*
void k_mimetypechooserdialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QChildEvent*
void k_mimetypechooserdialog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QChildEvent* event)
void k_mimetypechooserdialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QEvent*
void k_mimetypechooserdialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param event QEvent*
void k_mimetypechooserdialog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QEvent* event)
void k_mimetypechooserdialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param signal QMetaMethod*
void k_mimetypechooserdialog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param signal QMetaMethod*
void k_mimetypechooserdialog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QMetaMethod* signal)
void k_mimetypechooserdialog_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param signal QMetaMethod*
void k_mimetypechooserdialog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param signal QMetaMethod*
void k_mimetypechooserdialog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QMetaMethod* signal)
void k_mimetypechooserdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QWidget*
void k_mimetypechooserdialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param param1 QWidget*
void k_mimetypechooserdialog_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, QWidget* param1)
void k_mimetypechooserdialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func()
void k_mimetypechooserdialog_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func()
void k_mimetypechooserdialog_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func()
void k_mimetypechooserdialog_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback bool func()
void k_mimetypechooserdialog_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
bool k_mimetypechooserdialog_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback bool func()
void k_mimetypechooserdialog_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
QObject* k_mimetypechooserdialog_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
QObject* k_mimetypechooserdialog_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback QObject* func()
void k_mimetypechooserdialog_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
int32_t k_mimetypechooserdialog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback int32_t func()
void k_mimetypechooserdialog_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param signal const char*
int32_t k_mimetypechooserdialog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param signal const char*
int32_t k_mimetypechooserdialog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback int32_t func(KMimeTypeChooserDialog* self, const char* signal)
void k_mimetypechooserdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param signal QMetaMethod*
bool k_mimetypechooserdialog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param signal QMetaMethod*
bool k_mimetypechooserdialog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback bool func(KMimeTypeChooserDialog* self, QMetaMethod* signal)
void k_mimetypechooserdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_mimetypechooserdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_mimetypechooserdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KMimeTypeChooserDialog*
/// @param callback double func(KMimeTypeChooserDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_mimetypechooserdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KMimeTypeChooserDialog*
/// @param callback void func(KMimeTypeChooserDialog* self, const char* objectName)
void k_mimetypechooserdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kmimetypechooserdialog.html#dtor.KMimeTypeChooserDialog)
///
/// Delete this object from C++ memory.
///
/// @param self KMimeTypeChooserDialog*
void k_mimetypechooserdialog_delete(void* self);

/// https://api.kde.org/kmimetypechooser.html#types

typedef enum {
    KMIMETYPECHOOSER_VISUALS_COMMENTS = 1,
    KMIMETYPECHOOSER_VISUALS_PATTERNS = 2,
    KMIMETYPECHOOSER_VISUALS_EDITBUTTON = 4
} KMimeTypeChooser__Visuals;

#endif
