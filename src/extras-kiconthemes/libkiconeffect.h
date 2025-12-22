#pragma once
#ifndef SRC_EXTRAS_KICONTHEMES_QT6C_LIBKICONEFFECT_H
#define SRC_EXTRAS_KICONTHEMES_QT6C_LIBKICONEFFECT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kiconeffect.html)

/// k_iconeffect_new constructs a new KIconEffect object.
///
KIconEffect* k_iconeffect_new();

/// [Upstream resources](https://api.kde.org/kiconeffect.html#init)
///
/// @param self KIconEffect*
///
void k_iconeffect_init(void* self);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#hasEffect)
///
/// @param self KIconEffect*
/// @param group int
/// @param state int
///
bool k_iconeffect_has_effect(void* self, int group, int state);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#fingerprint)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIconEffect*
/// @param group int
/// @param state int
///
const char* k_iconeffect_fingerprint(void* self, int group, int state);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
///
/// @param self KIconEffect*
/// @param src QImage*
/// @param group int
/// @param state int
///
QImage* k_iconeffect_apply(void* self, void* src, int group, int state);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
///
/// @param self KIconEffect*
/// @param src QImage*
/// @param effect int
/// @param value float
/// @param rgb QColor*
/// @param trans bool
///
QImage* k_iconeffect_apply2(void* self, void* src, int effect, float value, void* rgb, bool trans);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
///
/// @param self KIconEffect*
/// @param src QImage*
/// @param effect int
/// @param value float
/// @param rgb QColor*
/// @param rgb2 QColor*
/// @param trans bool
///
QImage* k_iconeffect_apply3(void* self, void* src, int effect, float value, void* rgb, void* rgb2, bool trans);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
///
/// @param self KIconEffect*
/// @param src QPixmap*
/// @param group int
/// @param state int
///
QPixmap* k_iconeffect_apply4(void* self, void* src, int group, int state);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
///
/// @param self KIconEffect*
/// @param src QPixmap*
/// @param effect int
/// @param value float
/// @param rgb QColor*
/// @param trans bool
///
QPixmap* k_iconeffect_apply5(void* self, void* src, int effect, float value, void* rgb, bool trans);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#apply)
///
/// @param self KIconEffect*
/// @param src QPixmap*
/// @param effect int
/// @param value float
/// @param rgb QColor*
/// @param rgb2 QColor*
/// @param trans bool
///
QPixmap* k_iconeffect_apply6(void* self, void* src, int effect, float value, void* rgb, void* rgb2, bool trans);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#doublePixels)
///
/// @param self KIconEffect*
/// @param src QImage*
///
QImage* k_iconeffect_double_pixels(void* self, void* src);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#toGray)
///
/// @param image QImage*
/// @param value float
///
void k_iconeffect_to_gray(void* image, float value);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#colorize)
///
/// @param image QImage*
/// @param col QColor*
/// @param value float
///
void k_iconeffect_colorize(void* image, void* col, float value);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#toMonochrome)
///
/// @param image QImage*
/// @param black QColor*
/// @param white QColor*
/// @param value float
///
void k_iconeffect_to_monochrome(void* image, void* black, void* white, float value);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#deSaturate)
///
/// @param image QImage*
/// @param value float
///
void k_iconeffect_de_saturate(void* image, float value);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#toGamma)
///
/// @param image QImage*
/// @param value float
///
void k_iconeffect_to_gamma(void* image, float value);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#semiTransparent)
///
/// @param image QImage*
///
void k_iconeffect_semi_transparent(void* image);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#semiTransparent)
///
/// @param pixmap QPixmap*
///
void k_iconeffect_semi_transparent2(void* pixmap);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#overlay)
///
/// @param src QImage*
/// @param overlay QImage*
///
void k_iconeffect_overlay(void* src, void* overlay);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#toDisabled)
///
/// @param image QImage*
///
void k_iconeffect_to_disabled(void* image);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#toDisabled)
///
/// @param pixmap QPixmap*
///
void k_iconeffect_to_disabled2(void* pixmap);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#toActive)
///
/// @param image QImage*
///
void k_iconeffect_to_active(void* image);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#toActive)
///
/// @param pixmap QPixmap*
///
void k_iconeffect_to_active2(void* pixmap);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#dtor.KIconEffect)
///
/// Delete this object from C++ memory.
///
/// @param self KIconEffect*
///
void k_iconeffect_delete(void* self);

/// [Upstream resources](https://api.kde.org/kiconeffect.html#public-types)

typedef enum {
    KICONEFFECT_EFFECTS_NOEFFECT = 0,
    KICONEFFECT_EFFECTS_TOGRAY = 1,
    KICONEFFECT_EFFECTS_COLORIZE = 2,
    KICONEFFECT_EFFECTS_TOGAMMA = 3,
    KICONEFFECT_EFFECTS_DESATURATE = 4,
    KICONEFFECT_EFFECTS_TOMONOCHROME = 5,
    KICONEFFECT_EFFECTS_LASTEFFECT = 6
} KIconEffect__Effects;

#endif
