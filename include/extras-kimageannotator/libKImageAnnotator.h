#pragma once
#ifndef SRC_EXTRAS_KIMAGEANNOTATORQT6C_LIBKIMAGEANNOTATOR_H
#define SRC_EXTRAS_KIMAGEANNOTATORQT6C_LIBKIMAGEANNOTATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://github.com/ksnip/kImageAnnotator

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
void k_imageannotator_load_translations();

/// https://github.com/ksnip/kImageAnnotator

/// k_imageannotator__kimageannotator_new constructs a new kImageAnnotator::KImageAnnotator object.
///
kImageAnnotator__KImageAnnotator* k_imageannotator__kimageannotator_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self kImageAnnotator__KImageAnnotator*
const QMetaObject* k_imageannotator__kimageannotator_meta_object(void* self);

/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 const char*
void* k_imageannotator__kimageannotator_metacast(void* self, const char* param1);

/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_imageannotator__kimageannotator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback int32_t func(kImageAnnotator__KImageAnnotator* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_imageannotator__kimageannotator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_imageannotator__kimageannotator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_imageannotator__kimageannotator_tr(const char* s);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
QImage* k_imageannotator__kimageannotator_image(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param index int
QImage* k_imageannotator__kimageannotator_image_at(void* self, int index);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
QAction* k_imageannotator__kimageannotator_undo_action(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
QAction* k_imageannotator__kimageannotator_redo_action(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
QSize* k_imageannotator__kimageannotator_size_hint(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// Allows for overriding the related default method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback QSize* func()
void k_imageannotator__kimageannotator_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// Base class method implementation
///
/// @param self kImageAnnotator__KImageAnnotator*
QSize* k_imageannotator__kimageannotator_qbase_size_hint(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show_annotator(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show_cropper(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show_scaler(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show_rotator(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show_canvas_modifier(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show_cutter(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param pixmap QPixmap*
void k_imageannotator__kimageannotator_load_image(void* self, void* pixmap);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param pixmap QPixmap*
/// @param title const char*
/// @param toolTip const char*
int32_t k_imageannotator__kimageannotator_add_tab(void* self, void* pixmap, const char* title, const char* toolTip);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param index int
/// @param title const char*
/// @param toolTip const char*
void k_imageannotator__kimageannotator_update_tab_info(void* self, int index, const char* title, const char* toolTip);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param position QPointF*
/// @param pixmap QPixmap*
void k_imageannotator__kimageannotator_insert_image_item(void* self, void* position, void* pixmap);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param font QFont*
void k_imageannotator__kimageannotator_set_text_font(void* self, void* font);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param font QFont*
void k_imageannotator__kimageannotator_set_number_font(void* self, void* font);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enabled bool
void k_imageannotator__kimageannotator_set_item_shadow_enabled(void* self, bool enabled);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enabled bool
void k_imageannotator__kimageannotator_set_smooth_path_enabled(void* self, bool enabled);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enabled bool
void k_imageannotator__kimageannotator_set_save_tool_selection(void* self, bool enabled);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param factor int
void k_imageannotator__kimageannotator_set_smooth_factor(void* self, int factor);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enabled bool
void k_imageannotator__kimageannotator_set_switch_to_select_tool_after_drawing_item(void* self, bool enabled);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enabled bool
void k_imageannotator__kimageannotator_set_number_tool_seed_change_updates_all_items(void* self, bool enabled);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enabled bool
void k_imageannotator__kimageannotator_set_tab_bar_auto_hide(void* self, bool enabled);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param index int
void k_imageannotator__kimageannotator_remove_tab(void* self, int index);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param stickerPaths const char**
/// @param keepDefault bool
void k_imageannotator__kimageannotator_set_stickers(void* self, const char* stickerPaths[], bool keepDefault);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param actions libqt_list /* of QAction* */
void k_imageannotator__kimageannotator_add_tab_context_menu_actions(void* self, libqt_list actions);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param isCollapsed bool
void k_imageannotator__kimageannotator_set_settings_collapsed(void* self, bool isCollapsed);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param color QColor*
void k_imageannotator__kimageannotator_set_canvas_color(void* self, void* color);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enabled bool
void k_imageannotator__kimageannotator_set_select_item_after_drawing(void* self, bool enabled);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enabled bool
void k_imageannotator__kimageannotator_set_controls_widget_visible(void* self, bool enabled);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_image_changed(void* self);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self)
void k_imageannotator__kimageannotator_on_image_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param index int
void k_imageannotator__kimageannotator_current_tab_changed(void* self, int index);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, int index)
void k_imageannotator__kimageannotator_on_current_tab_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param index int
void k_imageannotator__kimageannotator_tab_close_requested(void* self, int index);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, int index)
void k_imageannotator__kimageannotator_on_tab_close_requested(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param fromIndex int
/// @param toIndex int
void k_imageannotator__kimageannotator_tab_moved(void* self, int fromIndex, int toIndex);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, int fromIndex, int toIndex)
void k_imageannotator__kimageannotator_on_tab_moved(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param index int
void k_imageannotator__kimageannotator_tab_context_menu_opened(void* self, int index);

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, int index)
void k_imageannotator__kimageannotator_on_tab_context_menu_opened(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_imageannotator__kimageannotator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_imageannotator__kimageannotator_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self kImageAnnotator__KImageAnnotator*
uintptr_t k_imageannotator__kimageannotator_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self kImageAnnotator__KImageAnnotator*
uintptr_t k_imageannotator__kimageannotator_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self kImageAnnotator__KImageAnnotator*
uintptr_t k_imageannotator__kimageannotator_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self kImageAnnotator__KImageAnnotator*
QStyle* k_imageannotator__kimageannotator_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param style QStyle*
void k_imageannotator__kimageannotator_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self kImageAnnotator__KImageAnnotator*
///
/// @return enum Qt__WindowModality
int32_t k_imageannotator__kimageannotator_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param windowModality enum Qt__WindowModality
void k_imageannotator__kimageannotator_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QWidget*
bool k_imageannotator__kimageannotator_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enabled bool
void k_imageannotator__kimageannotator_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param disabled bool
void k_imageannotator__kimageannotator_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param windowModified bool
void k_imageannotator__kimageannotator_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self kImageAnnotator__KImageAnnotator*
QRect* k_imageannotator__kimageannotator_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self kImageAnnotator__KImageAnnotator*
const QRect* k_imageannotator__kimageannotator_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self kImageAnnotator__KImageAnnotator*
QRect* k_imageannotator__kimageannotator_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self kImageAnnotator__KImageAnnotator*
QPoint* k_imageannotator__kimageannotator_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
QSize* k_imageannotator__kimageannotator_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self kImageAnnotator__KImageAnnotator*
QSize* k_imageannotator__kimageannotator_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self kImageAnnotator__KImageAnnotator*
QRect* k_imageannotator__kimageannotator_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self kImageAnnotator__KImageAnnotator*
QRect* k_imageannotator__kimageannotator_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self kImageAnnotator__KImageAnnotator*
QRegion* k_imageannotator__kimageannotator_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
QSize* k_imageannotator__kimageannotator_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
QSize* k_imageannotator__kimageannotator_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param minimumSize QSize*
void k_imageannotator__kimageannotator_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param minw int
/// @param minh int
void k_imageannotator__kimageannotator_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param maximumSize QSize*
void k_imageannotator__kimageannotator_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param maxw int
/// @param maxh int
void k_imageannotator__kimageannotator_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param minw int
void k_imageannotator__kimageannotator_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param minh int
void k_imageannotator__kimageannotator_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param maxw int
void k_imageannotator__kimageannotator_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param maxh int
void k_imageannotator__kimageannotator_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self kImageAnnotator__KImageAnnotator*
QSize* k_imageannotator__kimageannotator_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param sizeIncrement QSize*
void k_imageannotator__kimageannotator_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param w int
/// @param h int
void k_imageannotator__kimageannotator_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
QSize* k_imageannotator__kimageannotator_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param baseSize QSize*
void k_imageannotator__kimageannotator_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param basew int
/// @param baseh int
void k_imageannotator__kimageannotator_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param fixedSize QSize*
void k_imageannotator__kimageannotator_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param w int
/// @param h int
void k_imageannotator__kimageannotator_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param w int
void k_imageannotator__kimageannotator_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param h int
void k_imageannotator__kimageannotator_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QPointF*
QPointF* k_imageannotator__kimageannotator_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QPoint*
QPoint* k_imageannotator__kimageannotator_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QPointF*
QPointF* k_imageannotator__kimageannotator_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QPoint*
QPoint* k_imageannotator__kimageannotator_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QPointF*
QPointF* k_imageannotator__kimageannotator_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QPoint*
QPoint* k_imageannotator__kimageannotator_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QPointF*
QPointF* k_imageannotator__kimageannotator_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QPoint*
QPoint* k_imageannotator__kimageannotator_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_imageannotator__kimageannotator_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_imageannotator__kimageannotator_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_imageannotator__kimageannotator_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_imageannotator__kimageannotator_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self kImageAnnotator__KImageAnnotator*
QWidget* k_imageannotator__kimageannotator_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self kImageAnnotator__KImageAnnotator*
QWidget* k_imageannotator__kimageannotator_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self kImageAnnotator__KImageAnnotator*
QWidget* k_imageannotator__kimageannotator_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self kImageAnnotator__KImageAnnotator*
const QPalette* k_imageannotator__kimageannotator_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param palette QPalette*
void k_imageannotator__kimageannotator_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param backgroundRole enum QPalette__ColorRole
void k_imageannotator__kimageannotator_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self kImageAnnotator__KImageAnnotator*
///
/// @return enum QPalette__ColorRole
int32_t k_imageannotator__kimageannotator_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param foregroundRole enum QPalette__ColorRole
void k_imageannotator__kimageannotator_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self kImageAnnotator__KImageAnnotator*
///
/// @return enum QPalette__ColorRole
int32_t k_imageannotator__kimageannotator_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self kImageAnnotator__KImageAnnotator*
const QFont* k_imageannotator__kimageannotator_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param font QFont*
void k_imageannotator__kimageannotator_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self kImageAnnotator__KImageAnnotator*
QFontMetrics* k_imageannotator__kimageannotator_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self kImageAnnotator__KImageAnnotator*
QFontInfo* k_imageannotator__kimageannotator_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self kImageAnnotator__KImageAnnotator*
QCursor* k_imageannotator__kimageannotator_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param cursor QCursor*
void k_imageannotator__kimageannotator_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enable bool
void k_imageannotator__kimageannotator_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enable bool
void k_imageannotator__kimageannotator_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param mask QBitmap*
void k_imageannotator__kimageannotator_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param mask QRegion*
void k_imageannotator__kimageannotator_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self kImageAnnotator__KImageAnnotator*
QRegion* k_imageannotator__kimageannotator_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param target QPaintDevice*
void k_imageannotator__kimageannotator_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param painter QPainter*
void k_imageannotator__kimageannotator_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self kImageAnnotator__KImageAnnotator*
QPixmap* k_imageannotator__kimageannotator_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self kImageAnnotator__KImageAnnotator*
QGraphicsEffect* k_imageannotator__kimageannotator_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param effect QGraphicsEffect*
void k_imageannotator__kimageannotator_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param type enum Qt__GestureType
void k_imageannotator__kimageannotator_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param type enum Qt__GestureType
void k_imageannotator__kimageannotator_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param windowTitle const char*
void k_imageannotator__kimageannotator_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param styleSheet const char*
void k_imageannotator__kimageannotator_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param icon QIcon*
void k_imageannotator__kimageannotator_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self kImageAnnotator__KImageAnnotator*
QIcon* k_imageannotator__kimageannotator_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param windowIconText const char*
void k_imageannotator__kimageannotator_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param windowRole const char*
void k_imageannotator__kimageannotator_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param filePath const char*
void k_imageannotator__kimageannotator_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param level double
void k_imageannotator__kimageannotator_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self kImageAnnotator__KImageAnnotator*
double k_imageannotator__kimageannotator_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param toolTip const char*
void k_imageannotator__kimageannotator_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param msec int
void k_imageannotator__kimageannotator_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param statusTip const char*
void k_imageannotator__kimageannotator_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param whatsThis const char*
void k_imageannotator__kimageannotator_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param name const char*
void k_imageannotator__kimageannotator_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param description const char*
void k_imageannotator__kimageannotator_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param direction enum Qt__LayoutDirection
void k_imageannotator__kimageannotator_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self kImageAnnotator__KImageAnnotator*
///
/// @return enum Qt__LayoutDirection
int32_t k_imageannotator__kimageannotator_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param locale QLocale*
void k_imageannotator__kimageannotator_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self kImageAnnotator__KImageAnnotator*
QLocale* k_imageannotator__kimageannotator_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param reason enum Qt__FocusReason
void k_imageannotator__kimageannotator_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self kImageAnnotator__KImageAnnotator*
///
/// @return enum Qt__FocusPolicy
int32_t k_imageannotator__kimageannotator_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param policy enum Qt__FocusPolicy
void k_imageannotator__kimageannotator_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_imageannotator__kimageannotator_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param focusProxy QWidget*
void k_imageannotator__kimageannotator_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self kImageAnnotator__KImageAnnotator*
QWidget* k_imageannotator__kimageannotator_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self kImageAnnotator__KImageAnnotator*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_imageannotator__kimageannotator_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param policy enum Qt__ContextMenuPolicy
void k_imageannotator__kimageannotator_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QCursor*
void k_imageannotator__kimageannotator_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param key QKeySequence*
int32_t k_imageannotator__kimageannotator_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param id int
void k_imageannotator__kimageannotator_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param id int
void k_imageannotator__kimageannotator_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param id int
void k_imageannotator__kimageannotator_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_imageannotator__kimageannotator_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_imageannotator__kimageannotator_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enable bool
void k_imageannotator__kimageannotator_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self kImageAnnotator__KImageAnnotator*
QGraphicsProxyWidget* k_imageannotator__kimageannotator_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_imageannotator__kimageannotator_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QRect*
void k_imageannotator__kimageannotator_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QRegion*
void k_imageannotator__kimageannotator_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_imageannotator__kimageannotator_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QRect*
void k_imageannotator__kimageannotator_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QRegion*
void k_imageannotator__kimageannotator_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param hidden bool
void k_imageannotator__kimageannotator_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QWidget*
void k_imageannotator__kimageannotator_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param x int
/// @param y int
void k_imageannotator__kimageannotator_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QPoint*
void k_imageannotator__kimageannotator_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param w int
/// @param h int
void k_imageannotator__kimageannotator_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QSize*
void k_imageannotator__kimageannotator_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_imageannotator__kimageannotator_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param geometry QRect*
void k_imageannotator__kimageannotator_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
char* k_imageannotator__kimageannotator_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param geometry const char*
bool k_imageannotator__kimageannotator_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QWidget*
bool k_imageannotator__kimageannotator_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self kImageAnnotator__KImageAnnotator*
///
/// @return flag of enum Qt__WindowState
int32_t k_imageannotator__kimageannotator_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param state flag of enum Qt__WindowState
void k_imageannotator__kimageannotator_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param state flag of enum Qt__WindowState
void k_imageannotator__kimageannotator_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self kImageAnnotator__KImageAnnotator*
QSizePolicy* k_imageannotator__kimageannotator_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param sizePolicy QSizePolicy*
void k_imageannotator__kimageannotator_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_imageannotator__kimageannotator_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self kImageAnnotator__KImageAnnotator*
QRegion* k_imageannotator__kimageannotator_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_imageannotator__kimageannotator_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param margins QMargins*
void k_imageannotator__kimageannotator_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self kImageAnnotator__KImageAnnotator*
QMargins* k_imageannotator__kimageannotator_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self kImageAnnotator__KImageAnnotator*
QRect* k_imageannotator__kimageannotator_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self kImageAnnotator__KImageAnnotator*
QLayout* k_imageannotator__kimageannotator_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param layout QLayout*
void k_imageannotator__kimageannotator_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param parent QWidget*
void k_imageannotator__kimageannotator_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_imageannotator__kimageannotator_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param dx int
/// @param dy int
void k_imageannotator__kimageannotator_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_imageannotator__kimageannotator_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self kImageAnnotator__KImageAnnotator*
QWidget* k_imageannotator__kimageannotator_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self kImageAnnotator__KImageAnnotator*
QWidget* k_imageannotator__kimageannotator_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self kImageAnnotator__KImageAnnotator*
QWidget* k_imageannotator__kimageannotator_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param on bool
void k_imageannotator__kimageannotator_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param action QAction*
void k_imageannotator__kimageannotator_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param actions libqt_list /* of QAction* */
void k_imageannotator__kimageannotator_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_imageannotator__kimageannotator_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param before QAction*
/// @param action QAction*
void k_imageannotator__kimageannotator_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param action QAction*
void k_imageannotator__kimageannotator_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self kImageAnnotator__KImageAnnotator*
libqt_list /* of QAction* */ k_imageannotator__kimageannotator_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param text const char*
QAction* k_imageannotator__kimageannotator_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param icon QIcon*
/// @param text const char*
QAction* k_imageannotator__kimageannotator_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_imageannotator__kimageannotator_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_imageannotator__kimageannotator_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self kImageAnnotator__KImageAnnotator*
QWidget* k_imageannotator__kimageannotator_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param type flag of enum Qt__WindowType
void k_imageannotator__kimageannotator_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self kImageAnnotator__KImageAnnotator*
///
/// @return flag of enum Qt__WindowType
int64_t k_imageannotator__kimageannotator_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum Qt__WindowType
void k_imageannotator__kimageannotator_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param type flag of enum Qt__WindowType
void k_imageannotator__kimageannotator_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self kImageAnnotator__KImageAnnotator*
///
/// @return enum Qt__WindowType
int64_t k_imageannotator__kimageannotator_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_imageannotator__kimageannotator_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param x int
/// @param y int
QWidget* k_imageannotator__kimageannotator_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param p QPoint*
QWidget* k_imageannotator__kimageannotator_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param p QPointF*
QWidget* k_imageannotator__kimageannotator_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum Qt__WidgetAttribute
void k_imageannotator__kimageannotator_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum Qt__WidgetAttribute
bool k_imageannotator__kimageannotator_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param child QWidget*
bool k_imageannotator__kimageannotator_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param enabled bool
void k_imageannotator__kimageannotator_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self kImageAnnotator__KImageAnnotator*
QBackingStore* k_imageannotator__kimageannotator_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self kImageAnnotator__KImageAnnotator*
QWindow* k_imageannotator__kimageannotator_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self kImageAnnotator__KImageAnnotator*
QScreen* k_imageannotator__kimageannotator_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param screen QScreen*
void k_imageannotator__kimageannotator_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_imageannotator__kimageannotator_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param title const char*
void k_imageannotator__kimageannotator_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, const char* title)
void k_imageannotator__kimageannotator_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param icon QIcon*
void k_imageannotator__kimageannotator_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QIcon* icon)
void k_imageannotator__kimageannotator_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param iconText const char*
void k_imageannotator__kimageannotator_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, const char* iconText)
void k_imageannotator__kimageannotator_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param pos QPoint*
void k_imageannotator__kimageannotator_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QPoint* pos)
void k_imageannotator__kimageannotator_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self kImageAnnotator__KImageAnnotator*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_imageannotator__kimageannotator_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param hints flag of enum Qt__InputMethodHint
void k_imageannotator__kimageannotator_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_imageannotator__kimageannotator_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_imageannotator__kimageannotator_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_imageannotator__kimageannotator_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_imageannotator__kimageannotator_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_imageannotator__kimageannotator_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_imageannotator__kimageannotator_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param rectangle QRect*
QPixmap* k_imageannotator__kimageannotator_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_imageannotator__kimageannotator_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_imageannotator__kimageannotator_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param id int
/// @param enable bool
void k_imageannotator__kimageannotator_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param id int
/// @param enable bool
void k_imageannotator__kimageannotator_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_imageannotator__kimageannotator_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_imageannotator__kimageannotator_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_imageannotator__kimageannotator_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_imageannotator__kimageannotator_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char* k_imageannotator__kimageannotator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param name char*
void k_imageannotator__kimageannotator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param b bool
bool k_imageannotator__kimageannotator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self kImageAnnotator__KImageAnnotator*
QThread* k_imageannotator__kimageannotator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param thread QThread*
bool k_imageannotator__kimageannotator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param interval int
int32_t k_imageannotator__kimageannotator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param id int
void k_imageannotator__kimageannotator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param id enum Qt__TimerId
void k_imageannotator__kimageannotator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self kImageAnnotator__KImageAnnotator*
libqt_list /* of QObject* */ k_imageannotator__kimageannotator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param filterObj QObject*
void k_imageannotator__kimageannotator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param obj QObject*
void k_imageannotator__kimageannotator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_imageannotator__kimageannotator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_imageannotator__kimageannotator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_imageannotator__kimageannotator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_imageannotator__kimageannotator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param name const char*
/// @param value QVariant*
bool k_imageannotator__kimageannotator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param name const char*
QVariant* k_imageannotator__kimageannotator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self kImageAnnotator__KImageAnnotator*
const char** k_imageannotator__kimageannotator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self kImageAnnotator__KImageAnnotator*
QBindingStorage* k_imageannotator__kimageannotator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self kImageAnnotator__KImageAnnotator*
const QBindingStorage* k_imageannotator__kimageannotator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self)
void k_imageannotator__kimageannotator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self kImageAnnotator__KImageAnnotator*
QObject* k_imageannotator__kimageannotator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param classname const char*
bool k_imageannotator__kimageannotator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_imageannotator__kimageannotator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_imageannotator__kimageannotator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_imageannotator__kimageannotator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_imageannotator__kimageannotator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QObject*
void k_imageannotator__kimageannotator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QObject* param1)
void k_imageannotator__kimageannotator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self kImageAnnotator__KImageAnnotator*
double k_imageannotator__kimageannotator_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self kImageAnnotator__KImageAnnotator*
double k_imageannotator__kimageannotator_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_imageannotator__kimageannotator_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_imageannotator__kimageannotator_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback int32_t func()
void k_imageannotator__kimageannotator_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param visible bool
void k_imageannotator__kimageannotator_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param visible bool
void k_imageannotator__kimageannotator_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, bool visible)
void k_imageannotator__kimageannotator_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
QSize* k_imageannotator__kimageannotator_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
QSize* k_imageannotator__kimageannotator_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback QSize* func()
void k_imageannotator__kimageannotator_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 int
int32_t k_imageannotator__kimageannotator_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 int
int32_t k_imageannotator__kimageannotator_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback int32_t func(kImageAnnotator__KImageAnnotator* self, int param1)
void k_imageannotator__kimageannotator_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback bool func()
void k_imageannotator__kimageannotator_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
QPaintEngine* k_imageannotator__kimageannotator_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
QPaintEngine* k_imageannotator__kimageannotator_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback QPaintEngine* func()
void k_imageannotator__kimageannotator_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QEvent*
bool k_imageannotator__kimageannotator_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QEvent*
bool k_imageannotator__kimageannotator_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback bool func(kImageAnnotator__KImageAnnotator* self, QEvent* event)
void k_imageannotator__kimageannotator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QMouseEvent*
void k_imageannotator__kimageannotator_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QMouseEvent*
void k_imageannotator__kimageannotator_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event)
void k_imageannotator__kimageannotator_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QMouseEvent*
void k_imageannotator__kimageannotator_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QMouseEvent*
void k_imageannotator__kimageannotator_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event)
void k_imageannotator__kimageannotator_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QMouseEvent*
void k_imageannotator__kimageannotator_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QMouseEvent*
void k_imageannotator__kimageannotator_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event)
void k_imageannotator__kimageannotator_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QMouseEvent*
void k_imageannotator__kimageannotator_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QMouseEvent*
void k_imageannotator__kimageannotator_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QMouseEvent* event)
void k_imageannotator__kimageannotator_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QWheelEvent*
void k_imageannotator__kimageannotator_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QWheelEvent*
void k_imageannotator__kimageannotator_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QWheelEvent* event)
void k_imageannotator__kimageannotator_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QKeyEvent*
void k_imageannotator__kimageannotator_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QKeyEvent*
void k_imageannotator__kimageannotator_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QKeyEvent* event)
void k_imageannotator__kimageannotator_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QKeyEvent*
void k_imageannotator__kimageannotator_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QKeyEvent*
void k_imageannotator__kimageannotator_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QKeyEvent* event)
void k_imageannotator__kimageannotator_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QFocusEvent*
void k_imageannotator__kimageannotator_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QFocusEvent*
void k_imageannotator__kimageannotator_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QFocusEvent* event)
void k_imageannotator__kimageannotator_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QFocusEvent*
void k_imageannotator__kimageannotator_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QFocusEvent*
void k_imageannotator__kimageannotator_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QFocusEvent* event)
void k_imageannotator__kimageannotator_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QEnterEvent*
void k_imageannotator__kimageannotator_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QEnterEvent*
void k_imageannotator__kimageannotator_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QEnterEvent* event)
void k_imageannotator__kimageannotator_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QEvent*
void k_imageannotator__kimageannotator_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QEvent*
void k_imageannotator__kimageannotator_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QEvent* event)
void k_imageannotator__kimageannotator_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QPaintEvent*
void k_imageannotator__kimageannotator_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QPaintEvent*
void k_imageannotator__kimageannotator_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QPaintEvent* event)
void k_imageannotator__kimageannotator_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QMoveEvent*
void k_imageannotator__kimageannotator_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QMoveEvent*
void k_imageannotator__kimageannotator_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QMoveEvent* event)
void k_imageannotator__kimageannotator_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QResizeEvent*
void k_imageannotator__kimageannotator_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QResizeEvent*
void k_imageannotator__kimageannotator_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QResizeEvent* event)
void k_imageannotator__kimageannotator_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QCloseEvent*
void k_imageannotator__kimageannotator_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QCloseEvent*
void k_imageannotator__kimageannotator_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QCloseEvent* event)
void k_imageannotator__kimageannotator_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QContextMenuEvent*
void k_imageannotator__kimageannotator_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QContextMenuEvent*
void k_imageannotator__kimageannotator_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QContextMenuEvent* event)
void k_imageannotator__kimageannotator_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QTabletEvent*
void k_imageannotator__kimageannotator_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QTabletEvent*
void k_imageannotator__kimageannotator_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QTabletEvent* event)
void k_imageannotator__kimageannotator_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QActionEvent*
void k_imageannotator__kimageannotator_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QActionEvent*
void k_imageannotator__kimageannotator_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QActionEvent* event)
void k_imageannotator__kimageannotator_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QDragEnterEvent*
void k_imageannotator__kimageannotator_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QDragEnterEvent*
void k_imageannotator__kimageannotator_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QDragEnterEvent* event)
void k_imageannotator__kimageannotator_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QDragMoveEvent*
void k_imageannotator__kimageannotator_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QDragMoveEvent*
void k_imageannotator__kimageannotator_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QDragMoveEvent* event)
void k_imageannotator__kimageannotator_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QDragLeaveEvent*
void k_imageannotator__kimageannotator_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QDragLeaveEvent*
void k_imageannotator__kimageannotator_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QDragLeaveEvent* event)
void k_imageannotator__kimageannotator_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QDropEvent*
void k_imageannotator__kimageannotator_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QDropEvent*
void k_imageannotator__kimageannotator_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QDropEvent* event)
void k_imageannotator__kimageannotator_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QShowEvent*
void k_imageannotator__kimageannotator_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QShowEvent*
void k_imageannotator__kimageannotator_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QShowEvent* event)
void k_imageannotator__kimageannotator_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QHideEvent*
void k_imageannotator__kimageannotator_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QHideEvent*
void k_imageannotator__kimageannotator_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QHideEvent* event)
void k_imageannotator__kimageannotator_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_imageannotator__kimageannotator_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_imageannotator__kimageannotator_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback bool func(kImageAnnotator__KImageAnnotator* self, const char* eventType, void* message, intptr_t* result)
void k_imageannotator__kimageannotator_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QEvent*
void k_imageannotator__kimageannotator_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QEvent*
void k_imageannotator__kimageannotator_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QEvent* param1)
void k_imageannotator__kimageannotator_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_imageannotator__kimageannotator_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_imageannotator__kimageannotator_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback int32_t func(kImageAnnotator__KImageAnnotator* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_imageannotator__kimageannotator_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param painter QPainter*
void k_imageannotator__kimageannotator_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param painter QPainter*
void k_imageannotator__kimageannotator_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QPainter* painter)
void k_imageannotator__kimageannotator_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param offset QPoint*
QPaintDevice* k_imageannotator__kimageannotator_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param offset QPoint*
QPaintDevice* k_imageannotator__kimageannotator_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback QPaintDevice* func(kImageAnnotator__KImageAnnotator* self, QPoint* offset)
void k_imageannotator__kimageannotator_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
QPainter* k_imageannotator__kimageannotator_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
QPainter* k_imageannotator__kimageannotator_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback QPainter* func()
void k_imageannotator__kimageannotator_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QInputMethodEvent*
void k_imageannotator__kimageannotator_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 QInputMethodEvent*
void k_imageannotator__kimageannotator_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QInputMethodEvent* param1)
void k_imageannotator__kimageannotator_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_imageannotator__kimageannotator_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_imageannotator__kimageannotator_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback QVariant* func(kImageAnnotator__KImageAnnotator* self, enum Qt__InputMethodQuery param1)
void k_imageannotator__kimageannotator_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param next bool
bool k_imageannotator__kimageannotator_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param next bool
bool k_imageannotator__kimageannotator_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback bool func(kImageAnnotator__KImageAnnotator* self, bool next)
void k_imageannotator__kimageannotator_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param watched QObject*
/// @param event QEvent*
bool k_imageannotator__kimageannotator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param watched QObject*
/// @param event QEvent*
bool k_imageannotator__kimageannotator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback bool func(kImageAnnotator__KImageAnnotator* self, QObject* watched, QEvent* event)
void k_imageannotator__kimageannotator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QTimerEvent*
void k_imageannotator__kimageannotator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QTimerEvent*
void k_imageannotator__kimageannotator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QTimerEvent* event)
void k_imageannotator__kimageannotator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QChildEvent*
void k_imageannotator__kimageannotator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QChildEvent*
void k_imageannotator__kimageannotator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QChildEvent* event)
void k_imageannotator__kimageannotator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QEvent*
void k_imageannotator__kimageannotator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param event QEvent*
void k_imageannotator__kimageannotator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QEvent* event)
void k_imageannotator__kimageannotator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param signal QMetaMethod*
void k_imageannotator__kimageannotator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param signal QMetaMethod*
void k_imageannotator__kimageannotator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QMetaMethod* signal)
void k_imageannotator__kimageannotator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param signal QMetaMethod*
void k_imageannotator__kimageannotator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param signal QMetaMethod*
void k_imageannotator__kimageannotator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, QMetaMethod* signal)
void k_imageannotator__kimageannotator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func()
void k_imageannotator__kimageannotator_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func()
void k_imageannotator__kimageannotator_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func()
void k_imageannotator__kimageannotator_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback bool func()
void k_imageannotator__kimageannotator_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
bool k_imageannotator__kimageannotator_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback bool func()
void k_imageannotator__kimageannotator_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
QObject* k_imageannotator__kimageannotator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
QObject* k_imageannotator__kimageannotator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback QObject* func()
void k_imageannotator__kimageannotator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
int32_t k_imageannotator__kimageannotator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback int32_t func()
void k_imageannotator__kimageannotator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param signal const char*
int32_t k_imageannotator__kimageannotator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param signal const char*
int32_t k_imageannotator__kimageannotator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback int32_t func(kImageAnnotator__KImageAnnotator* self, const char* signal)
void k_imageannotator__kimageannotator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param signal QMetaMethod*
bool k_imageannotator__kimageannotator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param signal QMetaMethod*
bool k_imageannotator__kimageannotator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback bool func(kImageAnnotator__KImageAnnotator* self, QMetaMethod* signal)
void k_imageannotator__kimageannotator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_imageannotator__kimageannotator_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_imageannotator__kimageannotator_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback double func(kImageAnnotator__KImageAnnotator* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_imageannotator__kimageannotator_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self kImageAnnotator__KImageAnnotator*
/// @param callback void func(kImageAnnotator__KImageAnnotator* self, const char* objectName)
void k_imageannotator__kimageannotator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://github.com/ksnip/kImageAnnotator)
///
/// Delete this object from C++ memory.
///
/// @param self kImageAnnotator__KImageAnnotator*
void k_imageannotator__kimageannotator_delete(void* self);

#endif
