#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKRATINGPAINTER_H
#define EXTRAS_KWIDGETSADDONS_LIBKRATINGPAINTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kratingpainter.html)

/// k_ratingpainter_new constructs a new KRatingPainter object.
///
KRatingPainter* k_ratingpainter_new();

/// [Upstream resources](https://api.kde.org/kratingpainter.html#maxRating)
///
/// @param self const KRatingPainter*
///
int32_t k_ratingpainter_max_rating(const void* self);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#halfStepsEnabled)
///
/// @param self const KRatingPainter*
///
bool k_ratingpainter_half_steps_enabled(const void* self);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#alignment)
///
/// @param self const KRatingPainter*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_ratingpainter_alignment(const void* self);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#layoutDirection)
///
/// @param self const KRatingPainter*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_ratingpainter_layout_direction(const void* self);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#icon)
///
/// @param self const KRatingPainter*
///
QIcon* k_ratingpainter_icon(const void* self);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#isEnabled)
///
/// @param self const KRatingPainter*
///
bool k_ratingpainter_is_enabled(const void* self);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#customPixmap)
///
/// @param self const KRatingPainter*
///
QPixmap* k_ratingpainter_custom_pixmap(const void* self);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#spacing)
///
/// @param self const KRatingPainter*
///
int32_t k_ratingpainter_spacing(const void* self);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#setMaxRating)
///
/// @param self KRatingPainter*
/// @param max int
///
void k_ratingpainter_set_max_rating(void* self, int max);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#setHalfStepsEnabled)
///
/// @param self KRatingPainter*
/// @param enabled bool
///
void k_ratingpainter_set_half_steps_enabled(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#setAlignment)
///
/// @param self KRatingPainter*
/// @param align flag of enum Qt__AlignmentFlag
///
void k_ratingpainter_set_alignment(void* self, int32_t align);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#setLayoutDirection)
///
/// @param self KRatingPainter*
/// @param direction enum Qt__LayoutDirection
///
void k_ratingpainter_set_layout_direction(void* self, int32_t direction);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#setIcon)
///
/// @param self KRatingPainter*
/// @param icon QIcon*
///
void k_ratingpainter_set_icon(void* self, const void* icon);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#setEnabled)
///
/// @param self KRatingPainter*
/// @param enabled bool
///
void k_ratingpainter_set_enabled(void* self, bool enabled);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#setCustomPixmap)
///
/// @param self KRatingPainter*
/// @param pixmap QPixmap*
///
void k_ratingpainter_set_custom_pixmap(void* self, const void* pixmap);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#setSpacing)
///
/// @param self KRatingPainter*
/// @param spacing int
///
void k_ratingpainter_set_spacing(void* self, int spacing);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#paint)
///
/// @param self const KRatingPainter*
/// @param painter QPainter*
/// @param rect QRect*
/// @param rating int
///
void k_ratingpainter_paint(const void* self, void* painter, const void* rect, int rating);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#ratingFromPosition)
///
/// @param self const KRatingPainter*
/// @param rect QRect*
/// @param pos QPoint*
///
int32_t k_ratingpainter_rating_from_position(const void* self, const void* rect, const void* pos);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#paintRating)
///
/// @param p QPainter*
/// @param rect QRect*
/// @param align flag of enum Qt__AlignmentFlag
/// @param rating int
///
void k_ratingpainter_paint_rating(void* p, const void* rect, int32_t align, int rating);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#getRatingFromPosition)
///
/// @param rect QRect*
/// @param align flag of enum Qt__AlignmentFlag
/// @param direction enum Qt__LayoutDirection
/// @param pos QPoint*
///
int32_t k_ratingpainter_get_rating_from_position(const void* rect, int32_t align, int32_t direction, const void* pos);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#paint)
///
/// @param self const KRatingPainter*
/// @param painter QPainter*
/// @param rect QRect*
/// @param rating int
/// @param hoverRating int
///
void k_ratingpainter_paint4(const void* self, void* painter, const void* rect, int rating, int hoverRating);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#paintRating)
///
/// @param p QPainter*
/// @param rect QRect*
/// @param align flag of enum Qt__AlignmentFlag
/// @param rating int
/// @param hoverRating int
///
void k_ratingpainter_paint_rating5(void* p, const void* rect, int32_t align, int rating, int hoverRating);

/// [Upstream resources](https://api.kde.org/kratingpainter.html#dtor.KRatingPainter)
///
/// Delete this object from C++ memory.
///
/// @param self KRatingPainter*
///
void k_ratingpainter_delete(void* self);

#endif
