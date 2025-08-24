#include "../libqicon.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "libkratingpainter.hpp"
#include "libkratingpainter.h"

KRatingPainter* k_ratingpainter_new() {
    return KRatingPainter_new();
}

int32_t k_ratingpainter_max_rating(void* self) {
    return KRatingPainter_MaxRating((KRatingPainter*)self);
}

bool k_ratingpainter_half_steps_enabled(void* self) {
    return KRatingPainter_HalfStepsEnabled((KRatingPainter*)self);
}

int64_t k_ratingpainter_alignment(void* self) {
    return KRatingPainter_Alignment((KRatingPainter*)self);
}

int32_t k_ratingpainter_layout_direction(void* self) {
    return KRatingPainter_LayoutDirection((KRatingPainter*)self);
}

QIcon* k_ratingpainter_icon(void* self) {
    return KRatingPainter_Icon((KRatingPainter*)self);
}

bool k_ratingpainter_is_enabled(void* self) {
    return KRatingPainter_IsEnabled((KRatingPainter*)self);
}

QPixmap* k_ratingpainter_custom_pixmap(void* self) {
    return KRatingPainter_CustomPixmap((KRatingPainter*)self);
}

int32_t k_ratingpainter_spacing(void* self) {
    return KRatingPainter_Spacing((KRatingPainter*)self);
}

void k_ratingpainter_set_max_rating(void* self, int max) {
    KRatingPainter_SetMaxRating((KRatingPainter*)self, max);
}

void k_ratingpainter_set_half_steps_enabled(void* self, bool enabled) {
    KRatingPainter_SetHalfStepsEnabled((KRatingPainter*)self, enabled);
}

void k_ratingpainter_set_alignment(void* self, int64_t align) {
    KRatingPainter_SetAlignment((KRatingPainter*)self, align);
}

void k_ratingpainter_set_layout_direction(void* self, int32_t direction) {
    KRatingPainter_SetLayoutDirection((KRatingPainter*)self, direction);
}

void k_ratingpainter_set_icon(void* self, void* icon) {
    KRatingPainter_SetIcon((KRatingPainter*)self, (QIcon*)icon);
}

void k_ratingpainter_set_enabled(void* self, bool enabled) {
    KRatingPainter_SetEnabled((KRatingPainter*)self, enabled);
}

void k_ratingpainter_set_custom_pixmap(void* self, void* pixmap) {
    KRatingPainter_SetCustomPixmap((KRatingPainter*)self, (QPixmap*)pixmap);
}

void k_ratingpainter_set_spacing(void* self, int spacing) {
    KRatingPainter_SetSpacing((KRatingPainter*)self, spacing);
}

void k_ratingpainter_paint(void* self, void* painter, void* rect, int rating) {
    KRatingPainter_Paint((KRatingPainter*)self, (QPainter*)painter, (QRect*)rect, rating);
}

int32_t k_ratingpainter_rating_from_position(void* self, void* rect, void* pos) {
    return KRatingPainter_RatingFromPosition((KRatingPainter*)self, (QRect*)rect, (QPoint*)pos);
}

void k_ratingpainter_paint_rating(void* p, void* rect, int64_t align, int rating) {
    KRatingPainter_PaintRating((QPainter*)p, (QRect*)rect, align, rating);
}

int32_t k_ratingpainter_get_rating_from_position(void* rect, int64_t align, int32_t direction, void* pos) {
    return KRatingPainter_GetRatingFromPosition((QRect*)rect, align, direction, (QPoint*)pos);
}

void k_ratingpainter_paint4(void* self, void* painter, void* rect, int rating, int hoverRating) {
    KRatingPainter_Paint4((KRatingPainter*)self, (QPainter*)painter, (QRect*)rect, rating, hoverRating);
}

void k_ratingpainter_paint_rating5(void* p, void* rect, int64_t align, int rating, int hoverRating) {
    KRatingPainter_PaintRating5((QPainter*)p, (QRect*)rect, align, rating, hoverRating);
}

void k_ratingpainter_delete(void* self) {
    KRatingPainter_Delete((KRatingPainter*)(self));
}
