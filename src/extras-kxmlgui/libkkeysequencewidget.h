#pragma once
#ifndef SRC_EXTRAS_KXMLGUI_QT6C_LIBKKEYSEQUENCEWIDGET_H
#define SRC_EXTRAS_KXMLGUI_QT6C_LIBKKEYSEQUENCEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html)

/// k_keysequencewidget_new constructs a new KKeySequenceWidget object.
///
/// @param parent QWidget*
///
KKeySequenceWidget* k_keysequencewidget_new(void* parent);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html)

/// k_keysequencewidget_new2 constructs a new KKeySequenceWidget object.
///
KKeySequenceWidget* k_keysequencewidget_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KKeySequenceWidget*
///
const QMetaObject* k_keysequencewidget_meta_object(void* self);

/// @param self KKeySequenceWidget*
/// @param param1 const char*
///
void* k_keysequencewidget_metacast(void* self, const char* param1);

/// @param self KKeySequenceWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_keysequencewidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KKeySequenceWidget*
/// @param callback int32_t func(KKeySequenceWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_keysequencewidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KKeySequenceWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_keysequencewidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_keysequencewidget_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#setCheckForConflictsAgainst)
///
/// @param self KKeySequenceWidget*
/// @param types flag of enum KKeySequenceWidget__ShortcutType
///
void k_keysequencewidget_set_check_for_conflicts_against(void* self, int32_t types);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#checkForConflictsAgainst)
///
/// @param self KKeySequenceWidget*
///
/// @return flag of enum KKeySequenceWidget__ShortcutType
///
int32_t k_keysequencewidget_check_for_conflicts_against(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#setMultiKeyShortcutsAllowed)
///
/// @param self KKeySequenceWidget*
/// @param multiKeyShortcutsAllowed bool
///
void k_keysequencewidget_set_multi_key_shortcuts_allowed(void* self, bool multiKeyShortcutsAllowed);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#multiKeyShortcutsAllowed)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_multi_key_shortcuts_allowed(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#setModifierlessAllowed)
///
/// @param self KKeySequenceWidget*
/// @param allow bool
///
void k_keysequencewidget_set_modifierless_allowed(void* self, bool allow);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#isModifierlessAllowed)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_modifierless_allowed(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#setModifierOnlyAllowed)
///
/// @param self KKeySequenceWidget*
/// @param allow bool
///
void k_keysequencewidget_set_modifier_only_allowed(void* self, bool allow);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#modifierOnlyAllowed)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_modifier_only_allowed(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#setClearButtonShown)
///
/// @param self KKeySequenceWidget*
/// @param show bool
///
void k_keysequencewidget_set_clear_button_shown(void* self, bool show);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#isKeySequenceAvailable)
///
/// @param self KKeySequenceWidget*
/// @param seq QKeySequence*
///
bool k_keysequencewidget_is_key_sequence_available(void* self, void* seq);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#keySequence)
///
/// @param self KKeySequenceWidget*
///
QKeySequence* k_keysequencewidget_key_sequence(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#setCheckActionCollections)
///
/// @param self KKeySequenceWidget*
/// @param actionCollections libqt_list /* of KActionCollection* */
///
void k_keysequencewidget_set_check_action_collections(void* self, libqt_list actionCollections);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#setComponentName)
///
/// @param self KKeySequenceWidget*
/// @param componentName const char*
///
void k_keysequencewidget_set_component_name(void* self, const char* componentName);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#isRecording)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_recording(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#setPatterns)
///
/// @param self KKeySequenceWidget*
/// @param patterns flag of enum KKeySequenceRecorder__Pattern
///
void k_keysequencewidget_set_patterns(void* self, int32_t patterns);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#patterns)
///
/// @param self KKeySequenceWidget*
///
/// @return flag of enum KKeySequenceRecorder__Pattern
///
int32_t k_keysequencewidget_patterns(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#keySequenceChanged)
///
/// @param self KKeySequenceWidget*
/// @param seq QKeySequence*
///
void k_keysequencewidget_key_sequence_changed(void* self, void* seq);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#keySequenceChanged)
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QKeySequence* seq)
///
void k_keysequencewidget_on_key_sequence_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#stealShortcut)
///
/// @param self KKeySequenceWidget*
/// @param seq QKeySequence*
/// @param action QAction*
///
void k_keysequencewidget_steal_shortcut(void* self, void* seq, void* action);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#stealShortcut)
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QKeySequence* seq, QAction* action)
///
void k_keysequencewidget_on_steal_shortcut(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#recordingChanged)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_recording_changed(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#recordingChanged)
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self)
///
void k_keysequencewidget_on_recording_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#captureKeySequence)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_capture_key_sequence(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#setKeySequence)
///
/// @param self KKeySequenceWidget*
/// @param seq QKeySequence*
///
void k_keysequencewidget_set_key_sequence(void* self, void* seq);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#clearKeySequence)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_clear_key_sequence(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#applyStealShortcut)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_apply_steal_shortcut(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_keysequencewidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_keysequencewidget_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#setKeySequence)
///
/// @param self KKeySequenceWidget*
/// @param seq QKeySequence*
/// @param val enum KKeySequenceWidget__Validation
///
void k_keysequencewidget_set_key_sequence2(void* self, void* seq, int32_t val);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KKeySequenceWidget*
///
uintptr_t k_keysequencewidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KKeySequenceWidget*
///
uintptr_t k_keysequencewidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KKeySequenceWidget*
///
uintptr_t k_keysequencewidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KKeySequenceWidget*
///
QStyle* k_keysequencewidget_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KKeySequenceWidget*
/// @param style QStyle*
///
void k_keysequencewidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KKeySequenceWidget*
///
/// @return enum Qt__WindowModality
///
int32_t k_keysequencewidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KKeySequenceWidget*
/// @param windowModality enum Qt__WindowModality
///
void k_keysequencewidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KKeySequenceWidget*
/// @param param1 QWidget*
///
bool k_keysequencewidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KKeySequenceWidget*
/// @param enabled bool
///
void k_keysequencewidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KKeySequenceWidget*
/// @param disabled bool
///
void k_keysequencewidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KKeySequenceWidget*
/// @param windowModified bool
///
void k_keysequencewidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KKeySequenceWidget*
///
QRect* k_keysequencewidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KKeySequenceWidget*
///
const QRect* k_keysequencewidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KKeySequenceWidget*
///
QRect* k_keysequencewidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KKeySequenceWidget*
///
QPoint* k_keysequencewidget_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KKeySequenceWidget*
///
QSize* k_keysequencewidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KKeySequenceWidget*
///
QSize* k_keysequencewidget_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KKeySequenceWidget*
///
QRect* k_keysequencewidget_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KKeySequenceWidget*
///
QRect* k_keysequencewidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KKeySequenceWidget*
///
QRegion* k_keysequencewidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KKeySequenceWidget*
///
QSize* k_keysequencewidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KKeySequenceWidget*
///
QSize* k_keysequencewidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KKeySequenceWidget*
/// @param minimumSize QSize*
///
void k_keysequencewidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KKeySequenceWidget*
/// @param minw int
/// @param minh int
///
void k_keysequencewidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KKeySequenceWidget*
/// @param maximumSize QSize*
///
void k_keysequencewidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KKeySequenceWidget*
/// @param maxw int
/// @param maxh int
///
void k_keysequencewidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KKeySequenceWidget*
/// @param minw int
///
void k_keysequencewidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KKeySequenceWidget*
/// @param minh int
///
void k_keysequencewidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KKeySequenceWidget*
/// @param maxw int
///
void k_keysequencewidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KKeySequenceWidget*
/// @param maxh int
///
void k_keysequencewidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KKeySequenceWidget*
///
QSize* k_keysequencewidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KKeySequenceWidget*
/// @param sizeIncrement QSize*
///
void k_keysequencewidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KKeySequenceWidget*
/// @param w int
/// @param h int
///
void k_keysequencewidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KKeySequenceWidget*
///
QSize* k_keysequencewidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KKeySequenceWidget*
/// @param baseSize QSize*
///
void k_keysequencewidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KKeySequenceWidget*
/// @param basew int
/// @param baseh int
///
void k_keysequencewidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KKeySequenceWidget*
/// @param fixedSize QSize*
///
void k_keysequencewidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KKeySequenceWidget*
/// @param w int
/// @param h int
///
void k_keysequencewidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KKeySequenceWidget*
/// @param w int
///
void k_keysequencewidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KKeySequenceWidget*
/// @param h int
///
void k_keysequencewidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KKeySequenceWidget*
/// @param param1 QPointF*
///
QPointF* k_keysequencewidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KKeySequenceWidget*
/// @param param1 QPoint*
///
QPoint* k_keysequencewidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KKeySequenceWidget*
/// @param param1 QPointF*
///
QPointF* k_keysequencewidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KKeySequenceWidget*
/// @param param1 QPoint*
///
QPoint* k_keysequencewidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KKeySequenceWidget*
/// @param param1 QPointF*
///
QPointF* k_keysequencewidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KKeySequenceWidget*
/// @param param1 QPoint*
///
QPoint* k_keysequencewidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KKeySequenceWidget*
/// @param param1 QPointF*
///
QPointF* k_keysequencewidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KKeySequenceWidget*
/// @param param1 QPoint*
///
QPoint* k_keysequencewidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KKeySequenceWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_keysequencewidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KKeySequenceWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_keysequencewidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KKeySequenceWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_keysequencewidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KKeySequenceWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_keysequencewidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KKeySequenceWidget*
///
QWidget* k_keysequencewidget_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KKeySequenceWidget*
///
QWidget* k_keysequencewidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KKeySequenceWidget*
///
QWidget* k_keysequencewidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KKeySequenceWidget*
///
const QPalette* k_keysequencewidget_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KKeySequenceWidget*
/// @param palette QPalette*
///
void k_keysequencewidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KKeySequenceWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_keysequencewidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KKeySequenceWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_keysequencewidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KKeySequenceWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_keysequencewidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KKeySequenceWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_keysequencewidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KKeySequenceWidget*
///
const QFont* k_keysequencewidget_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KKeySequenceWidget*
/// @param font QFont*
///
void k_keysequencewidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KKeySequenceWidget*
///
QFontMetrics* k_keysequencewidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KKeySequenceWidget*
///
QFontInfo* k_keysequencewidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KKeySequenceWidget*
///
QCursor* k_keysequencewidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KKeySequenceWidget*
/// @param cursor QCursor*
///
void k_keysequencewidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KKeySequenceWidget*
/// @param enable bool
///
void k_keysequencewidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KKeySequenceWidget*
/// @param enable bool
///
void k_keysequencewidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KKeySequenceWidget*
/// @param mask QBitmap*
///
void k_keysequencewidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KKeySequenceWidget*
/// @param mask QRegion*
///
void k_keysequencewidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KKeySequenceWidget*
///
QRegion* k_keysequencewidget_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KKeySequenceWidget*
/// @param target QPaintDevice*
///
void k_keysequencewidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KKeySequenceWidget*
/// @param painter QPainter*
///
void k_keysequencewidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KKeySequenceWidget*
///
QPixmap* k_keysequencewidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KKeySequenceWidget*
///
QGraphicsEffect* k_keysequencewidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KKeySequenceWidget*
/// @param effect QGraphicsEffect*
///
void k_keysequencewidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KKeySequenceWidget*
/// @param type enum Qt__GestureType
///
void k_keysequencewidget_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KKeySequenceWidget*
/// @param type enum Qt__GestureType
///
void k_keysequencewidget_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KKeySequenceWidget*
/// @param windowTitle const char*
///
void k_keysequencewidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KKeySequenceWidget*
/// @param styleSheet const char*
///
void k_keysequencewidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KKeySequenceWidget*
/// @param icon QIcon*
///
void k_keysequencewidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KKeySequenceWidget*
///
QIcon* k_keysequencewidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KKeySequenceWidget*
/// @param windowIconText const char*
///
void k_keysequencewidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KKeySequenceWidget*
/// @param windowRole const char*
///
void k_keysequencewidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KKeySequenceWidget*
/// @param filePath const char*
///
void k_keysequencewidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KKeySequenceWidget*
/// @param level double
///
void k_keysequencewidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KKeySequenceWidget*
///
double k_keysequencewidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KKeySequenceWidget*
/// @param toolTip const char*
///
void k_keysequencewidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KKeySequenceWidget*
/// @param msec int
///
void k_keysequencewidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KKeySequenceWidget*
/// @param statusTip const char*
///
void k_keysequencewidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KKeySequenceWidget*
/// @param whatsThis const char*
///
void k_keysequencewidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KKeySequenceWidget*
/// @param name const char*
///
void k_keysequencewidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KKeySequenceWidget*
/// @param description const char*
///
void k_keysequencewidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KKeySequenceWidget*
/// @param direction enum Qt__LayoutDirection
///
void k_keysequencewidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KKeySequenceWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_keysequencewidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KKeySequenceWidget*
/// @param locale QLocale*
///
void k_keysequencewidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KKeySequenceWidget*
///
QLocale* k_keysequencewidget_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KKeySequenceWidget*
/// @param reason enum Qt__FocusReason
///
void k_keysequencewidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KKeySequenceWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_keysequencewidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KKeySequenceWidget*
/// @param policy enum Qt__FocusPolicy
///
void k_keysequencewidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_keysequencewidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KKeySequenceWidget*
/// @param focusProxy QWidget*
///
void k_keysequencewidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KKeySequenceWidget*
///
QWidget* k_keysequencewidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KKeySequenceWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_keysequencewidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KKeySequenceWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_keysequencewidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KKeySequenceWidget*
/// @param param1 QCursor*
///
void k_keysequencewidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KKeySequenceWidget*
/// @param key QKeySequence*
///
int32_t k_keysequencewidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KKeySequenceWidget*
/// @param id int
///
void k_keysequencewidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KKeySequenceWidget*
/// @param id int
///
void k_keysequencewidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KKeySequenceWidget*
/// @param id int
///
void k_keysequencewidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_keysequencewidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_keysequencewidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KKeySequenceWidget*
/// @param enable bool
///
void k_keysequencewidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KKeySequenceWidget*
///
QGraphicsProxyWidget* k_keysequencewidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KKeySequenceWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_keysequencewidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KKeySequenceWidget*
/// @param param1 QRect*
///
void k_keysequencewidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KKeySequenceWidget*
/// @param param1 QRegion*
///
void k_keysequencewidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KKeySequenceWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_keysequencewidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KKeySequenceWidget*
/// @param param1 QRect*
///
void k_keysequencewidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KKeySequenceWidget*
/// @param param1 QRegion*
///
void k_keysequencewidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KKeySequenceWidget*
/// @param hidden bool
///
void k_keysequencewidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KKeySequenceWidget*
/// @param param1 QWidget*
///
void k_keysequencewidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KKeySequenceWidget*
/// @param x int
/// @param y int
///
void k_keysequencewidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KKeySequenceWidget*
/// @param param1 QPoint*
///
void k_keysequencewidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KKeySequenceWidget*
/// @param w int
/// @param h int
///
void k_keysequencewidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KKeySequenceWidget*
/// @param param1 QSize*
///
void k_keysequencewidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KKeySequenceWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_keysequencewidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KKeySequenceWidget*
/// @param geometry QRect*
///
void k_keysequencewidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
char* k_keysequencewidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KKeySequenceWidget*
/// @param geometry const char*
///
bool k_keysequencewidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KKeySequenceWidget*
/// @param param1 QWidget*
///
bool k_keysequencewidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KKeySequenceWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_keysequencewidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KKeySequenceWidget*
/// @param state flag of enum Qt__WindowState
///
void k_keysequencewidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KKeySequenceWidget*
/// @param state flag of enum Qt__WindowState
///
void k_keysequencewidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KKeySequenceWidget*
///
QSizePolicy* k_keysequencewidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KKeySequenceWidget*
/// @param sizePolicy QSizePolicy*
///
void k_keysequencewidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KKeySequenceWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_keysequencewidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KKeySequenceWidget*
///
QRegion* k_keysequencewidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KKeySequenceWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_keysequencewidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KKeySequenceWidget*
/// @param margins QMargins*
///
void k_keysequencewidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KKeySequenceWidget*
///
QMargins* k_keysequencewidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KKeySequenceWidget*
///
QRect* k_keysequencewidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KKeySequenceWidget*
///
QLayout* k_keysequencewidget_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KKeySequenceWidget*
/// @param layout QLayout*
///
void k_keysequencewidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KKeySequenceWidget*
/// @param parent QWidget*
///
void k_keysequencewidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KKeySequenceWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_keysequencewidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KKeySequenceWidget*
/// @param dx int
/// @param dy int
///
void k_keysequencewidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KKeySequenceWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_keysequencewidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KKeySequenceWidget*
///
QWidget* k_keysequencewidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KKeySequenceWidget*
///
QWidget* k_keysequencewidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KKeySequenceWidget*
///
QWidget* k_keysequencewidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KKeySequenceWidget*
/// @param on bool
///
void k_keysequencewidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KKeySequenceWidget*
/// @param action QAction*
///
void k_keysequencewidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KKeySequenceWidget*
/// @param actions libqt_list /* of QAction* */
///
void k_keysequencewidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KKeySequenceWidget*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void k_keysequencewidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KKeySequenceWidget*
/// @param before QAction*
/// @param action QAction*
///
void k_keysequencewidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KKeySequenceWidget*
/// @param action QAction*
///
void k_keysequencewidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KKeySequenceWidget*
///
libqt_list /* of QAction* */ k_keysequencewidget_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KKeySequenceWidget*
/// @param text const char*
///
QAction* k_keysequencewidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KKeySequenceWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_keysequencewidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KKeySequenceWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_keysequencewidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KKeySequenceWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_keysequencewidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KKeySequenceWidget*
///
QWidget* k_keysequencewidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KKeySequenceWidget*
/// @param type flag of enum Qt__WindowType
///
void k_keysequencewidget_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KKeySequenceWidget*
///
/// @return flag of enum Qt__WindowType
///
int64_t k_keysequencewidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KKeySequenceWidget*
/// @param param1 enum Qt__WindowType
///
void k_keysequencewidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KKeySequenceWidget*
/// @param type flag of enum Qt__WindowType
///
void k_keysequencewidget_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KKeySequenceWidget*
///
/// @return enum Qt__WindowType
///
int64_t k_keysequencewidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_keysequencewidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KKeySequenceWidget*
/// @param x int
/// @param y int
///
QWidget* k_keysequencewidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KKeySequenceWidget*
/// @param p QPoint*
///
QWidget* k_keysequencewidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KKeySequenceWidget*
/// @param p QPointF*
///
QWidget* k_keysequencewidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KKeySequenceWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void k_keysequencewidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KKeySequenceWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_keysequencewidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KKeySequenceWidget*
/// @param child QWidget*
///
bool k_keysequencewidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KKeySequenceWidget*
/// @param enabled bool
///
void k_keysequencewidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KKeySequenceWidget*
///
QBackingStore* k_keysequencewidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KKeySequenceWidget*
///
QWindow* k_keysequencewidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KKeySequenceWidget*
///
QScreen* k_keysequencewidget_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KKeySequenceWidget*
/// @param screen QScreen*
///
void k_keysequencewidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_keysequencewidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KKeySequenceWidget*
/// @param title const char*
///
void k_keysequencewidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, const char* title)
///
void k_keysequencewidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KKeySequenceWidget*
/// @param icon QIcon*
///
void k_keysequencewidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QIcon* icon)
///
void k_keysequencewidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KKeySequenceWidget*
/// @param iconText const char*
///
void k_keysequencewidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, const char* iconText)
///
void k_keysequencewidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KKeySequenceWidget*
/// @param pos QPoint*
///
void k_keysequencewidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QPoint* pos)
///
void k_keysequencewidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KKeySequenceWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t k_keysequencewidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KKeySequenceWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_keysequencewidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KKeySequenceWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_keysequencewidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KKeySequenceWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_keysequencewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KKeySequenceWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_keysequencewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KKeySequenceWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_keysequencewidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KKeySequenceWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_keysequencewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KKeySequenceWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_keysequencewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KKeySequenceWidget*
/// @param rectangle QRect*
///
QPixmap* k_keysequencewidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KKeySequenceWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_keysequencewidget_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KKeySequenceWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_keysequencewidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KKeySequenceWidget*
/// @param id int
/// @param enable bool
///
void k_keysequencewidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KKeySequenceWidget*
/// @param id int
/// @param enable bool
///
void k_keysequencewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KKeySequenceWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_keysequencewidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KKeySequenceWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_keysequencewidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_keysequencewidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_keysequencewidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char* k_keysequencewidget_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KKeySequenceWidget*
/// @param name char*
///
void k_keysequencewidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KKeySequenceWidget*
/// @param b bool
///
bool k_keysequencewidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KKeySequenceWidget*
///
QThread* k_keysequencewidget_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KKeySequenceWidget*
/// @param thread QThread*
///
bool k_keysequencewidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KKeySequenceWidget*
/// @param interval int
///
int32_t k_keysequencewidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KKeySequenceWidget*
/// @param id int
///
void k_keysequencewidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KKeySequenceWidget*
/// @param id enum Qt__TimerId
///
void k_keysequencewidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KKeySequenceWidget*
///
libqt_list /* of QObject* */ k_keysequencewidget_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KKeySequenceWidget*
/// @param filterObj QObject*
///
void k_keysequencewidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KKeySequenceWidget*
/// @param obj QObject*
///
void k_keysequencewidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_keysequencewidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KKeySequenceWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_keysequencewidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_keysequencewidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_keysequencewidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KKeySequenceWidget*
/// @param name const char*
/// @param value QVariant*
///
bool k_keysequencewidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KKeySequenceWidget*
/// @param name const char*
///
QVariant* k_keysequencewidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KKeySequenceWidget*
///
const char** k_keysequencewidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KKeySequenceWidget*
///
QBindingStorage* k_keysequencewidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KKeySequenceWidget*
///
const QBindingStorage* k_keysequencewidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self)
///
void k_keysequencewidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KKeySequenceWidget*
///
QObject* k_keysequencewidget_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KKeySequenceWidget*
/// @param classname const char*
///
bool k_keysequencewidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KKeySequenceWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_keysequencewidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KKeySequenceWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_keysequencewidget_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_keysequencewidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KKeySequenceWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_keysequencewidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KKeySequenceWidget*
/// @param param1 QObject*
///
void k_keysequencewidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QObject* param1)
///
void k_keysequencewidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KKeySequenceWidget*
///
double k_keysequencewidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KKeySequenceWidget*
///
double k_keysequencewidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_keysequencewidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_keysequencewidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback int32_t func()
///
void k_keysequencewidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param visible bool
///
void k_keysequencewidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param visible bool
///
void k_keysequencewidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, bool visible)
///
void k_keysequencewidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
QSize* k_keysequencewidget_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
QSize* k_keysequencewidget_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback QSize* func()
///
void k_keysequencewidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
QSize* k_keysequencewidget_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
QSize* k_keysequencewidget_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback QSize* func()
///
void k_keysequencewidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param param1 int
///
int32_t k_keysequencewidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param param1 int
///
int32_t k_keysequencewidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback int32_t func(KKeySequenceWidget* self, int param1)
///
void k_keysequencewidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback bool func()
///
void k_keysequencewidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
QPaintEngine* k_keysequencewidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
QPaintEngine* k_keysequencewidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback QPaintEngine* func()
///
void k_keysequencewidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QMouseEvent*
///
void k_keysequencewidget_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QMouseEvent*
///
void k_keysequencewidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QMouseEvent* event)
///
void k_keysequencewidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QMouseEvent*
///
void k_keysequencewidget_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QMouseEvent*
///
void k_keysequencewidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QMouseEvent* event)
///
void k_keysequencewidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QMouseEvent*
///
void k_keysequencewidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QMouseEvent*
///
void k_keysequencewidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QMouseEvent* event)
///
void k_keysequencewidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QMouseEvent*
///
void k_keysequencewidget_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QMouseEvent*
///
void k_keysequencewidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QMouseEvent* event)
///
void k_keysequencewidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QWheelEvent*
///
void k_keysequencewidget_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QWheelEvent*
///
void k_keysequencewidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QWheelEvent* event)
///
void k_keysequencewidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QKeyEvent*
///
void k_keysequencewidget_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QKeyEvent*
///
void k_keysequencewidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QKeyEvent* event)
///
void k_keysequencewidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QKeyEvent*
///
void k_keysequencewidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QKeyEvent*
///
void k_keysequencewidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QKeyEvent* event)
///
void k_keysequencewidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QFocusEvent*
///
void k_keysequencewidget_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QFocusEvent*
///
void k_keysequencewidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QFocusEvent* event)
///
void k_keysequencewidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QFocusEvent*
///
void k_keysequencewidget_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QFocusEvent*
///
void k_keysequencewidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QFocusEvent* event)
///
void k_keysequencewidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QEnterEvent*
///
void k_keysequencewidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QEnterEvent*
///
void k_keysequencewidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QEnterEvent* event)
///
void k_keysequencewidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QEvent*
///
void k_keysequencewidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QEvent*
///
void k_keysequencewidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QEvent* event)
///
void k_keysequencewidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QPaintEvent*
///
void k_keysequencewidget_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QPaintEvent*
///
void k_keysequencewidget_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QPaintEvent* event)
///
void k_keysequencewidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QMoveEvent*
///
void k_keysequencewidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QMoveEvent*
///
void k_keysequencewidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QMoveEvent* event)
///
void k_keysequencewidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QResizeEvent*
///
void k_keysequencewidget_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QResizeEvent*
///
void k_keysequencewidget_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QResizeEvent* event)
///
void k_keysequencewidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QCloseEvent*
///
void k_keysequencewidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QCloseEvent*
///
void k_keysequencewidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QCloseEvent* event)
///
void k_keysequencewidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QContextMenuEvent*
///
void k_keysequencewidget_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QContextMenuEvent*
///
void k_keysequencewidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QContextMenuEvent* event)
///
void k_keysequencewidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QTabletEvent*
///
void k_keysequencewidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QTabletEvent*
///
void k_keysequencewidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QTabletEvent* event)
///
void k_keysequencewidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QActionEvent*
///
void k_keysequencewidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QActionEvent*
///
void k_keysequencewidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QActionEvent* event)
///
void k_keysequencewidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QDragEnterEvent*
///
void k_keysequencewidget_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QDragEnterEvent*
///
void k_keysequencewidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QDragEnterEvent* event)
///
void k_keysequencewidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QDragMoveEvent*
///
void k_keysequencewidget_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QDragMoveEvent*
///
void k_keysequencewidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QDragMoveEvent* event)
///
void k_keysequencewidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QDragLeaveEvent*
///
void k_keysequencewidget_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QDragLeaveEvent*
///
void k_keysequencewidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QDragLeaveEvent* event)
///
void k_keysequencewidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QDropEvent*
///
void k_keysequencewidget_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QDropEvent*
///
void k_keysequencewidget_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QDropEvent* event)
///
void k_keysequencewidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QShowEvent*
///
void k_keysequencewidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QShowEvent*
///
void k_keysequencewidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QShowEvent* event)
///
void k_keysequencewidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QHideEvent*
///
void k_keysequencewidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QHideEvent*
///
void k_keysequencewidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QHideEvent* event)
///
void k_keysequencewidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_keysequencewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_keysequencewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback bool func(KKeySequenceWidget* self, const char* eventType, void* message, intptr_t* result)
///
void k_keysequencewidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param param1 QEvent*
///
void k_keysequencewidget_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param param1 QEvent*
///
void k_keysequencewidget_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QEvent* param1)
///
void k_keysequencewidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_keysequencewidget_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_keysequencewidget_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback int32_t func(KKeySequenceWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_keysequencewidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param painter QPainter*
///
void k_keysequencewidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param painter QPainter*
///
void k_keysequencewidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QPainter* painter)
///
void k_keysequencewidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param offset QPoint*
///
QPaintDevice* k_keysequencewidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param offset QPoint*
///
QPaintDevice* k_keysequencewidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback QPaintDevice* func(KKeySequenceWidget* self, QPoint* offset)
///
void k_keysequencewidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
QPainter* k_keysequencewidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
QPainter* k_keysequencewidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback QPainter* func()
///
void k_keysequencewidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param param1 QInputMethodEvent*
///
void k_keysequencewidget_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param param1 QInputMethodEvent*
///
void k_keysequencewidget_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QInputMethodEvent* param1)
///
void k_keysequencewidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_keysequencewidget_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_keysequencewidget_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback QVariant* func(KKeySequenceWidget* self, enum Qt__InputMethodQuery param1)
///
void k_keysequencewidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param next bool
///
bool k_keysequencewidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param next bool
///
bool k_keysequencewidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback bool func(KKeySequenceWidget* self, bool next)
///
void k_keysequencewidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_keysequencewidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_keysequencewidget_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback bool func(KKeySequenceWidget* self, QObject* watched, QEvent* event)
///
void k_keysequencewidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QTimerEvent*
///
void k_keysequencewidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QTimerEvent*
///
void k_keysequencewidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QTimerEvent* event)
///
void k_keysequencewidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QChildEvent*
///
void k_keysequencewidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QChildEvent*
///
void k_keysequencewidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QChildEvent* event)
///
void k_keysequencewidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QEvent*
///
void k_keysequencewidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param event QEvent*
///
void k_keysequencewidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QEvent* event)
///
void k_keysequencewidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param signal QMetaMethod*
///
void k_keysequencewidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param signal QMetaMethod*
///
void k_keysequencewidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QMetaMethod* signal)
///
void k_keysequencewidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param signal QMetaMethod*
///
void k_keysequencewidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param signal QMetaMethod*
///
void k_keysequencewidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, QMetaMethod* signal)
///
void k_keysequencewidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func()
///
void k_keysequencewidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func()
///
void k_keysequencewidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback void func()
///
void k_keysequencewidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback bool func()
///
void k_keysequencewidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
bool k_keysequencewidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback bool func()
///
void k_keysequencewidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
QObject* k_keysequencewidget_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
QObject* k_keysequencewidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback QObject* func()
///
void k_keysequencewidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
///
int32_t k_keysequencewidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback int32_t func()
///
void k_keysequencewidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param signal const char*
///
int32_t k_keysequencewidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param signal const char*
///
int32_t k_keysequencewidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback int32_t func(KKeySequenceWidget* self, const char* signal)
///
void k_keysequencewidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param signal QMetaMethod*
///
bool k_keysequencewidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param signal QMetaMethod*
///
bool k_keysequencewidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback bool func(KKeySequenceWidget* self, QMetaMethod* signal)
///
void k_keysequencewidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_keysequencewidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_keysequencewidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KKeySequenceWidget*
/// @param callback double func(KKeySequenceWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_keysequencewidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KKeySequenceWidget*
/// @param callback void func(KKeySequenceWidget* self, const char* objectName)
///
void k_keysequencewidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#dtor.KKeySequenceWidget)
///
/// Delete this object from C++ memory.
///
/// @param self KKeySequenceWidget*
///
void k_keysequencewidget_delete(void* self);

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#public-types)

typedef enum {
    KKEYSEQUENCEWIDGET_VALIDATION_VALIDATE = 0,
    KKEYSEQUENCEWIDGET_VALIDATION_NOVALIDATE = 1
} KKeySequenceWidget__Validation;

/// [Upstream resources](https://api.kde.org/kkeysequencewidget.html#public-types)

typedef enum {
    KKEYSEQUENCEWIDGET_SHORTCUTTYPE_NONE = 0,
    KKEYSEQUENCEWIDGET_SHORTCUTTYPE_LOCALSHORTCUTS = 1,
    KKEYSEQUENCEWIDGET_SHORTCUTTYPE_STANDARDSHORTCUTS = 2,
    KKEYSEQUENCEWIDGET_SHORTCUTTYPE_GLOBALSHORTCUTS = 4
} KKeySequenceWidget__ShortcutType;

#endif
