#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKRATINGPAINTER_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKRATINGPAINTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kratingpainter.html

/// k_ratingpainter_new constructs a new KRatingPainter object.
///
KRatingPainter* k_ratingpainter_new();

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#maxRating)
///
/// @param self KRatingPainter*
int32_t k_ratingpainter_max_rating(void* self);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#halfStepsEnabled)
///
/// @param self KRatingPainter*
bool k_ratingpainter_half_steps_enabled(void* self);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#alignment)
///
/// @param self KRatingPainter*
///
/// @return flag of enum Qt__AlignmentFlag
int32_t k_ratingpainter_alignment(void* self);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#layoutDirection)
///
/// @param self KRatingPainter*
///
/// @return enum Qt__LayoutDirection
int32_t k_ratingpainter_layout_direction(void* self);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#icon)
///
/// @param self KRatingPainter*
QIcon* k_ratingpainter_icon(void* self);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#isEnabled)
///
/// @param self KRatingPainter*
bool k_ratingpainter_is_enabled(void* self);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#customPixmap)
///
/// @param self KRatingPainter*
QPixmap* k_ratingpainter_custom_pixmap(void* self);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#spacing)
///
/// @param self KRatingPainter*
int32_t k_ratingpainter_spacing(void* self);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setMaxRating)
///
/// @param self KRatingPainter*
/// @param max int
void k_ratingpainter_set_max_rating(void* self, int max);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setHalfStepsEnabled)
///
/// @param self KRatingPainter*
/// @param enabled bool
void k_ratingpainter_set_half_steps_enabled(void* self, bool enabled);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setAlignment)
///
/// @param self KRatingPainter*
/// @param align flag of enum Qt__AlignmentFlag
void k_ratingpainter_set_alignment(void* self, int32_t align);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setLayoutDirection)
///
/// @param self KRatingPainter*
/// @param direction enum Qt__LayoutDirection
void k_ratingpainter_set_layout_direction(void* self, int32_t direction);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setIcon)
///
/// @param self KRatingPainter*
/// @param icon QIcon*
void k_ratingpainter_set_icon(void* self, void* icon);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setEnabled)
///
/// @param self KRatingPainter*
/// @param enabled bool
void k_ratingpainter_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setCustomPixmap)
///
/// @param self KRatingPainter*
/// @param pixmap QPixmap*
void k_ratingpainter_set_custom_pixmap(void* self, void* pixmap);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#setSpacing)
///
/// @param self KRatingPainter*
/// @param spacing int
void k_ratingpainter_set_spacing(void* self, int spacing);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#paint)
///
/// @param self KRatingPainter*
/// @param painter QPainter*
/// @param rect QRect*
/// @param rating int
void k_ratingpainter_paint(void* self, void* painter, void* rect, int rating);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#ratingFromPosition)
///
/// @param self KRatingPainter*
/// @param rect QRect*
/// @param pos QPoint*
int32_t k_ratingpainter_rating_from_position(void* self, void* rect, void* pos);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#paintRating)
///
/// @param p QPainter*
/// @param rect QRect*
/// @param align flag of enum Qt__AlignmentFlag
/// @param rating int
void k_ratingpainter_paint_rating(void* p, void* rect, int32_t align, int rating);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#getRatingFromPosition)
///
/// @param rect QRect*
/// @param align flag of enum Qt__AlignmentFlag
/// @param direction enum Qt__LayoutDirection
/// @param pos QPoint*
int32_t k_ratingpainter_get_rating_from_position(void* rect, int32_t align, int32_t direction, void* pos);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#paint)
///
/// @param self KRatingPainter*
/// @param painter QPainter*
/// @param rect QRect*
/// @param rating int
/// @param hoverRating int
void k_ratingpainter_paint4(void* self, void* painter, void* rect, int rating, int hoverRating);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#paintRating)
///
/// @param p QPainter*
/// @param rect QRect*
/// @param align flag of enum Qt__AlignmentFlag
/// @param rating int
/// @param hoverRating int
void k_ratingpainter_paint_rating5(void* p, void* rect, int32_t align, int rating, int hoverRating);

/// [Qt documentation](https://api-staging.kde.org/kratingpainter.html#dtor.KRatingPainter)
///
/// Delete this object from C++ memory.
///
/// @param self KRatingPainter*
void k_ratingpainter_delete(void* self);

#endif
