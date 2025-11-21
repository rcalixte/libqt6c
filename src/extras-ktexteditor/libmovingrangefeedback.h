#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBMOVINGRANGEFEEDBACK_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBMOVINGRANGEFEEDBACK_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-movingrangefeedback.html

/// k_texteditor__movingrangefeedback_new constructs a new KTextEditor::MovingRangeFeedback object.
///
KTextEditor__MovingRangeFeedback* k_texteditor__movingrangefeedback_new();

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
void k_texteditor__movingrangefeedback_range_empty(void* self, void* range);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param callback void func(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range)
void k_texteditor__movingrangefeedback_on_range_empty(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeEmpty)
///
/// Base class method implementation
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
void k_texteditor__movingrangefeedback_qbase_range_empty(void* self, void* range);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
void k_texteditor__movingrangefeedback_range_invalid(void* self, void* range);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param callback void func(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range)
void k_texteditor__movingrangefeedback_on_range_invalid(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#rangeInvalid)
///
/// Base class method implementation
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
void k_texteditor__movingrangefeedback_qbase_range_invalid(void* self, void* range);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
/// @param view KTextEditor__View*
void k_texteditor__movingrangefeedback_mouse_entered_range(void* self, void* range, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param callback void func(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view)
void k_texteditor__movingrangefeedback_on_mouse_entered_range(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseEnteredRange)
///
/// Base class method implementation
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
/// @param view KTextEditor__View*
void k_texteditor__movingrangefeedback_qbase_mouse_entered_range(void* self, void* range, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
/// @param view KTextEditor__View*
void k_texteditor__movingrangefeedback_mouse_exited_range(void* self, void* range, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param callback void func(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view)
void k_texteditor__movingrangefeedback_on_mouse_exited_range(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#mouseExitedRange)
///
/// Base class method implementation
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
/// @param view KTextEditor__View*
void k_texteditor__movingrangefeedback_qbase_mouse_exited_range(void* self, void* range, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
/// @param view KTextEditor__View*
void k_texteditor__movingrangefeedback_caret_entered_range(void* self, void* range, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param callback void func(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view)
void k_texteditor__movingrangefeedback_on_caret_entered_range(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretEnteredRange)
///
/// Base class method implementation
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
/// @param view KTextEditor__View*
void k_texteditor__movingrangefeedback_qbase_caret_entered_range(void* self, void* range, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
/// @param view KTextEditor__View*
void k_texteditor__movingrangefeedback_caret_exited_range(void* self, void* range, void* view);

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
///
/// Allows for overriding the related default method
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param callback void func(KTextEditor__MovingRangeFeedback* self, KTextEditor__MovingRange* range, KTextEditor__View* view)
void k_texteditor__movingrangefeedback_on_caret_exited_range(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/ktexteditor-movingrangefeedback.html#caretExitedRange)
///
/// Base class method implementation
///
/// @param self KTextEditor__MovingRangeFeedback*
/// @param range KTextEditor__MovingRange*
/// @param view KTextEditor__View*
void k_texteditor__movingrangefeedback_qbase_caret_exited_range(void* self, void* range, void* view);

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__MovingRangeFeedback*
void k_texteditor__movingrangefeedback_delete(void* self);

#endif
