#pragma once
#ifndef SRCQT6C_LIBQBRUSH_H
#define SRCQT6C_LIBQBRUSH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqcolor.h"
#include "libqimage.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqtransform.h"
#include "libqvariant.h"

QBrush* q_brush_new();
QBrush* q_brush_new2(int64_t bs);
QBrush* q_brush_new3(void* color);
QBrush* q_brush_new4(int64_t color);
QBrush* q_brush_new5(void* color, void* pixmap);
QBrush* q_brush_new6(int64_t color, void* pixmap);
QBrush* q_brush_new7(void* pixmap);
QBrush* q_brush_new8(void* image);
QBrush* q_brush_new9(void* brush);
QBrush* q_brush_new10(void* gradient);
QBrush* q_brush_new11(void* color, int64_t bs);
QBrush* q_brush_new12(int64_t color, int64_t bs);
void q_brush_operator_assign(void* self, void* brush);
void q_brush_swap(void* self, void* other);
QVariant* q_brush_to_q_variant(void* self);
int64_t q_brush_style(void* self);
void q_brush_set_style(void* self, int64_t style);
QTransform* q_brush_transform(void* self);
void q_brush_set_transform(void* self, void* transform);
QPixmap* q_brush_texture(void* self);
void q_brush_set_texture(void* self, void* pixmap);
QImage* q_brush_texture_image(void* self);
void q_brush_set_texture_image(void* self, void* image);
QColor* q_brush_color(void* self);
void q_brush_set_color(void* self, void* color);
void q_brush_set_color_with_color(void* self, int64_t color);
QGradient* q_brush_gradient(void* self);
bool q_brush_is_opaque(void* self);
bool q_brush_operator_equal(void* self, void* b);
bool q_brush_operator_not_equal(void* self, void* b);
bool q_brush_is_detached(void* self);
void q_brush_delete(void* self);

QBrushData* q_brushdata_new(void* param1);
void q_brushdata_operator_assign(void* self, void* param1);
void q_brushdata_delete(void* self);

QGradient* q_gradient_new();
QGradient* q_gradient_new2(int64_t param1);
QGradient* q_gradient_new3(void* param1);
int64_t q_gradient_type(void* self);
void q_gradient_set_spread(void* self, int64_t spread);
int64_t q_gradient_spread(void* self);
void q_gradient_set_color_at(void* self, double pos, void* color);
libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_gradient_stops(void* self);
int64_t q_gradient_coordinate_mode(void* self);
void q_gradient_set_coordinate_mode(void* self, int64_t mode);
int64_t q_gradient_interpolation_mode(void* self);
void q_gradient_set_interpolation_mode(void* self, int64_t mode);
bool q_gradient_operator_equal(void* self, void* gradient);
bool q_gradient_operator_not_equal(void* self, void* other);
void q_gradient_delete(void* self);

QLinearGradient* q_lineargradient_new();
QLinearGradient* q_lineargradient_new2(void* start, void* finalStop);
QLinearGradient* q_lineargradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop);
QLinearGradient* q_lineargradient_new4(void* param1);
QPointF* q_lineargradient_start(void* self);
void q_lineargradient_set_start(void* self, void* start);
void q_lineargradient_set_start2(void* self, double x, double y);
QPointF* q_lineargradient_final_stop(void* self);
void q_lineargradient_set_final_stop(void* self, void* stop);
void q_lineargradient_set_final_stop2(void* self, double x, double y);
int64_t q_lineargradient_type(void* self);
void q_lineargradient_set_spread(void* self, int64_t spread);
int64_t q_lineargradient_spread(void* self);
void q_lineargradient_set_color_at(void* self, double pos, void* color);
libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_lineargradient_stops(void* self);
int64_t q_lineargradient_coordinate_mode(void* self);
void q_lineargradient_set_coordinate_mode(void* self, int64_t mode);
int64_t q_lineargradient_interpolation_mode(void* self);
void q_lineargradient_set_interpolation_mode(void* self, int64_t mode);
bool q_lineargradient_operator_equal(void* self, void* gradient);
bool q_lineargradient_operator_not_equal(void* self, void* other);
void q_lineargradient_delete(void* self);

QRadialGradient* q_radialgradient_new();
QRadialGradient* q_radialgradient_new2(void* center, double radius, void* focalPoint);
QRadialGradient* q_radialgradient_new3(double cx, double cy, double radius, double fx, double fy);
QRadialGradient* q_radialgradient_new4(void* center, double radius);
QRadialGradient* q_radialgradient_new5(double cx, double cy, double radius);
QRadialGradient* q_radialgradient_new6(void* center, double centerRadius, void* focalPoint, double focalRadius);
QRadialGradient* q_radialgradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius);
QRadialGradient* q_radialgradient_new8(void* param1);
QPointF* q_radialgradient_center(void* self);
void q_radialgradient_set_center(void* self, void* center);
void q_radialgradient_set_center2(void* self, double x, double y);
QPointF* q_radialgradient_focal_point(void* self);
void q_radialgradient_set_focal_point(void* self, void* focalPoint);
void q_radialgradient_set_focal_point2(void* self, double x, double y);
double q_radialgradient_radius(void* self);
void q_radialgradient_set_radius(void* self, double radius);
double q_radialgradient_center_radius(void* self);
void q_radialgradient_set_center_radius(void* self, double radius);
double q_radialgradient_focal_radius(void* self);
void q_radialgradient_set_focal_radius(void* self, double radius);
int64_t q_radialgradient_type(void* self);
void q_radialgradient_set_spread(void* self, int64_t spread);
int64_t q_radialgradient_spread(void* self);
void q_radialgradient_set_color_at(void* self, double pos, void* color);
libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_radialgradient_stops(void* self);
int64_t q_radialgradient_coordinate_mode(void* self);
void q_radialgradient_set_coordinate_mode(void* self, int64_t mode);
int64_t q_radialgradient_interpolation_mode(void* self);
void q_radialgradient_set_interpolation_mode(void* self, int64_t mode);
bool q_radialgradient_operator_equal(void* self, void* gradient);
bool q_radialgradient_operator_not_equal(void* self, void* other);
void q_radialgradient_delete(void* self);

QConicalGradient* q_conicalgradient_new();
QConicalGradient* q_conicalgradient_new2(void* center, double startAngle);
QConicalGradient* q_conicalgradient_new3(double cx, double cy, double startAngle);
QConicalGradient* q_conicalgradient_new4(void* param1);
QPointF* q_conicalgradient_center(void* self);
void q_conicalgradient_set_center(void* self, void* center);
void q_conicalgradient_set_center2(void* self, double x, double y);
double q_conicalgradient_angle(void* self);
void q_conicalgradient_set_angle(void* self, double angle);
int64_t q_conicalgradient_type(void* self);
void q_conicalgradient_set_spread(void* self, int64_t spread);
int64_t q_conicalgradient_spread(void* self);
void q_conicalgradient_set_color_at(void* self, double pos, void* color);
libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_conicalgradient_stops(void* self);
int64_t q_conicalgradient_coordinate_mode(void* self);
void q_conicalgradient_set_coordinate_mode(void* self, int64_t mode);
int64_t q_conicalgradient_interpolation_mode(void* self);
void q_conicalgradient_set_interpolation_mode(void* self, int64_t mode);
bool q_conicalgradient_operator_equal(void* self, void* gradient);
bool q_conicalgradient_operator_not_equal(void* self, void* other);
void q_conicalgradient_delete(void* self);

QGradient__QGradientData* q_gradient__qgradientdata_new(void* param1);
void q_gradient__qgradientdata_delete(void* self);

/// https://doc.qt.io/qt-6/qbrush.html#types

typedef enum {
    QGRADIENT_TYPE_LINEARGRADIENT = 0,
    QGRADIENT_TYPE_RADIALGRADIENT = 1,
    QGRADIENT_TYPE_CONICALGRADIENT = 2,
    QGRADIENT_TYPE_NOGRADIENT = 3
} QGradient__Type;

typedef enum {
    QGRADIENT_SPREAD_PADSPREAD = 0,
    QGRADIENT_SPREAD_REFLECTSPREAD = 1,
    QGRADIENT_SPREAD_REPEATSPREAD = 2
} QGradient__Spread;

typedef enum {
    QGRADIENT_COORDINATEMODE_LOGICALMODE = 0,
    QGRADIENT_COORDINATEMODE_STRETCHTODEVICEMODE = 1,
    QGRADIENT_COORDINATEMODE_OBJECTBOUNDINGMODE = 2,
    QGRADIENT_COORDINATEMODE_OBJECTMODE = 3
} QGradient__CoordinateMode;

typedef enum {
    QGRADIENT_INTERPOLATIONMODE_COLORINTERPOLATION = 0,
    QGRADIENT_INTERPOLATIONMODE_COMPONENTINTERPOLATION = 1
} QGradient__InterpolationMode;

typedef enum {
    QGRADIENT_PRESET_WARMFLAME = 1,
    QGRADIENT_PRESET_NIGHTFADE = 2,
    QGRADIENT_PRESET_SPRINGWARMTH = 3,
    QGRADIENT_PRESET_JUICYPEACH = 4,
    QGRADIENT_PRESET_YOUNGPASSION = 5,
    QGRADIENT_PRESET_LADYLIPS = 6,
    QGRADIENT_PRESET_SUNNYMORNING = 7,
    QGRADIENT_PRESET_RAINYASHVILLE = 8,
    QGRADIENT_PRESET_FROZENDREAMS = 9,
    QGRADIENT_PRESET_WINTERNEVA = 10,
    QGRADIENT_PRESET_DUSTYGRASS = 11,
    QGRADIENT_PRESET_TEMPTINGAZURE = 12,
    QGRADIENT_PRESET_HEAVYRAIN = 13,
    QGRADIENT_PRESET_AMYCRISP = 14,
    QGRADIENT_PRESET_MEANFRUIT = 15,
    QGRADIENT_PRESET_DEEPBLUE = 16,
    QGRADIENT_PRESET_RIPEMALINKA = 17,
    QGRADIENT_PRESET_CLOUDYKNOXVILLE = 18,
    QGRADIENT_PRESET_MALIBUBEACH = 19,
    QGRADIENT_PRESET_NEWLIFE = 20,
    QGRADIENT_PRESET_TRUESUNSET = 21,
    QGRADIENT_PRESET_MORPHEUSDEN = 22,
    QGRADIENT_PRESET_RAREWIND = 23,
    QGRADIENT_PRESET_NEARMOON = 24,
    QGRADIENT_PRESET_WILDAPPLE = 25,
    QGRADIENT_PRESET_SAINTPETERSBURG = 26,
    QGRADIENT_PRESET_PLUMPLATE = 28,
    QGRADIENT_PRESET_EVERLASTINGSKY = 29,
    QGRADIENT_PRESET_HAPPYFISHER = 30,
    QGRADIENT_PRESET_BLESSING = 31,
    QGRADIENT_PRESET_SHARPEYEEAGLE = 32,
    QGRADIENT_PRESET_LADOGABOTTOM = 33,
    QGRADIENT_PRESET_LEMONGATE = 34,
    QGRADIENT_PRESET_ITMEOBRANDING = 35,
    QGRADIENT_PRESET_ZEUSMIRACLE = 36,
    QGRADIENT_PRESET_OLDHAT = 37,
    QGRADIENT_PRESET_STARWINE = 38,
    QGRADIENT_PRESET_HAPPYACID = 41,
    QGRADIENT_PRESET_AWESOMEPINE = 42,
    QGRADIENT_PRESET_NEWYORK = 43,
    QGRADIENT_PRESET_SHYRAINBOW = 44,
    QGRADIENT_PRESET_MIXEDHOPES = 46,
    QGRADIENT_PRESET_FLYHIGH = 47,
    QGRADIENT_PRESET_STRONGBLISS = 48,
    QGRADIENT_PRESET_FRESHMILK = 49,
    QGRADIENT_PRESET_SNOWAGAIN = 50,
    QGRADIENT_PRESET_FEBRUARYINK = 51,
    QGRADIENT_PRESET_KINDSTEEL = 52,
    QGRADIENT_PRESET_SOFTGRASS = 53,
    QGRADIENT_PRESET_GROWNEARLY = 54,
    QGRADIENT_PRESET_SHARPBLUES = 55,
    QGRADIENT_PRESET_SHADYWATER = 56,
    QGRADIENT_PRESET_DIRTYBEAUTY = 57,
    QGRADIENT_PRESET_GREATWHALE = 58,
    QGRADIENT_PRESET_TEENNOTEBOOK = 59,
    QGRADIENT_PRESET_POLITERUMORS = 60,
    QGRADIENT_PRESET_SWEETPERIOD = 61,
    QGRADIENT_PRESET_WIDEMATRIX = 62,
    QGRADIENT_PRESET_SOFTCHERISH = 63,
    QGRADIENT_PRESET_REDSALVATION = 64,
    QGRADIENT_PRESET_BURNINGSPRING = 65,
    QGRADIENT_PRESET_NIGHTPARTY = 66,
    QGRADIENT_PRESET_SKYGLIDER = 67,
    QGRADIENT_PRESET_HEAVENPEACH = 68,
    QGRADIENT_PRESET_PURPLEDIVISION = 69,
    QGRADIENT_PRESET_AQUASPLASH = 70,
    QGRADIENT_PRESET_SPIKYNAGA = 72,
    QGRADIENT_PRESET_LOVEKISS = 73,
    QGRADIENT_PRESET_CLEANMIRROR = 75,
    QGRADIENT_PRESET_PREMIUMDARK = 76,
    QGRADIENT_PRESET_COLDEVENING = 77,
    QGRADIENT_PRESET_COCHITILAKE = 78,
    QGRADIENT_PRESET_SUMMERGAMES = 79,
    QGRADIENT_PRESET_PASSIONATEBED = 80,
    QGRADIENT_PRESET_MOUNTAINROCK = 81,
    QGRADIENT_PRESET_DESERTHUMP = 82,
    QGRADIENT_PRESET_JUNGLEDAY = 83,
    QGRADIENT_PRESET_PHOENIXSTART = 84,
    QGRADIENT_PRESET_OCTOBERSILENCE = 85,
    QGRADIENT_PRESET_FARAWAYRIVER = 86,
    QGRADIENT_PRESET_ALCHEMISTLAB = 87,
    QGRADIENT_PRESET_OVERSUN = 88,
    QGRADIENT_PRESET_PREMIUMWHITE = 89,
    QGRADIENT_PRESET_MARSPARTY = 90,
    QGRADIENT_PRESET_ETERNALCONSTANCE = 91,
    QGRADIENT_PRESET_JAPANBLUSH = 92,
    QGRADIENT_PRESET_SMILINGRAIN = 93,
    QGRADIENT_PRESET_CLOUDYAPPLE = 94,
    QGRADIENT_PRESET_BIGMANGO = 95,
    QGRADIENT_PRESET_HEALTHYWATER = 96,
    QGRADIENT_PRESET_AMOURAMOUR = 97,
    QGRADIENT_PRESET_RISKYCONCRETE = 98,
    QGRADIENT_PRESET_STRONGSTICK = 99,
    QGRADIENT_PRESET_VICIOUSSTANCE = 100,
    QGRADIENT_PRESET_PALOALTO = 101,
    QGRADIENT_PRESET_HAPPYMEMORIES = 102,
    QGRADIENT_PRESET_MIDNIGHTBLOOM = 103,
    QGRADIENT_PRESET_CRYSTALLINE = 104,
    QGRADIENT_PRESET_PARTYBLISS = 106,
    QGRADIENT_PRESET_CONFIDENTCLOUD = 107,
    QGRADIENT_PRESET_LECOCKTAIL = 108,
    QGRADIENT_PRESET_RIVERCITY = 109,
    QGRADIENT_PRESET_FROZENBERRY = 110,
    QGRADIENT_PRESET_CHILDCARE = 112,
    QGRADIENT_PRESET_FLYINGLEMON = 113,
    QGRADIENT_PRESET_NEWRETROWAVE = 114,
    QGRADIENT_PRESET_HIDDENJAGUAR = 115,
    QGRADIENT_PRESET_ABOVETHESKY = 116,
    QGRADIENT_PRESET_NEGA = 117,
    QGRADIENT_PRESET_DENSEWATER = 118,
    QGRADIENT_PRESET_SEASHORE = 120,
    QGRADIENT_PRESET_MARBLEWALL = 121,
    QGRADIENT_PRESET_CHEERFULCARAMEL = 122,
    QGRADIENT_PRESET_NIGHTSKY = 123,
    QGRADIENT_PRESET_MAGICLAKE = 124,
    QGRADIENT_PRESET_YOUNGGRASS = 125,
    QGRADIENT_PRESET_COLORFULPEACH = 126,
    QGRADIENT_PRESET_GENTLECARE = 127,
    QGRADIENT_PRESET_PLUMBATH = 128,
    QGRADIENT_PRESET_HAPPYUNICORN = 129,
    QGRADIENT_PRESET_AFRICANFIELD = 131,
    QGRADIENT_PRESET_SOLIDSTONE = 132,
    QGRADIENT_PRESET_ORANGEJUICE = 133,
    QGRADIENT_PRESET_GLASSWATER = 134,
    QGRADIENT_PRESET_NORTHMIRACLE = 136,
    QGRADIENT_PRESET_FRUITBLEND = 137,
    QGRADIENT_PRESET_MILLENNIUMPINE = 138,
    QGRADIENT_PRESET_HIGHFLIGHT = 139,
    QGRADIENT_PRESET_MOLEHALL = 140,
    QGRADIENT_PRESET_SPACESHIFT = 142,
    QGRADIENT_PRESET_FORESTINEI = 143,
    QGRADIENT_PRESET_ROYALGARDEN = 144,
    QGRADIENT_PRESET_RICHMETAL = 145,
    QGRADIENT_PRESET_JUICYCAKE = 146,
    QGRADIENT_PRESET_SMARTINDIGO = 147,
    QGRADIENT_PRESET_SANDSTRIKE = 148,
    QGRADIENT_PRESET_NORSEBEAUTY = 149,
    QGRADIENT_PRESET_AQUAGUIDANCE = 150,
    QGRADIENT_PRESET_SUNVEGGIE = 151,
    QGRADIENT_PRESET_SEALORD = 152,
    QGRADIENT_PRESET_BLACKSEA = 153,
    QGRADIENT_PRESET_GRASSSHAMPOO = 154,
    QGRADIENT_PRESET_LANDINGAIRCRAFT = 155,
    QGRADIENT_PRESET_WITCHDANCE = 156,
    QGRADIENT_PRESET_SLEEPLESSNIGHT = 157,
    QGRADIENT_PRESET_ANGELCARE = 158,
    QGRADIENT_PRESET_CRYSTALRIVER = 159,
    QGRADIENT_PRESET_SOFTLIPSTICK = 160,
    QGRADIENT_PRESET_SALTMOUNTAIN = 161,
    QGRADIENT_PRESET_PERFECTWHITE = 162,
    QGRADIENT_PRESET_FRESHOASIS = 163,
    QGRADIENT_PRESET_STRICTNOVEMBER = 164,
    QGRADIENT_PRESET_MORNINGSALAD = 165,
    QGRADIENT_PRESET_DEEPRELIEF = 166,
    QGRADIENT_PRESET_SEASTRIKE = 167,
    QGRADIENT_PRESET_NIGHTCALL = 168,
    QGRADIENT_PRESET_SUPREMESKY = 169,
    QGRADIENT_PRESET_LIGHTBLUE = 170,
    QGRADIENT_PRESET_MINDCRAWL = 171,
    QGRADIENT_PRESET_LILYMEADOW = 172,
    QGRADIENT_PRESET_SUGARLOLLIPOP = 173,
    QGRADIENT_PRESET_SWEETDESSERT = 174,
    QGRADIENT_PRESET_MAGICRAY = 175,
    QGRADIENT_PRESET_TEENPARTY = 176,
    QGRADIENT_PRESET_FROZENHEAT = 177,
    QGRADIENT_PRESET_GAGARINVIEW = 178,
    QGRADIENT_PRESET_FABLEDSUNSET = 179,
    QGRADIENT_PRESET_PERFECTBLUE = 180,
    QGRADIENT_PRESET_NUMPRESETS = 181
} QGradient__Preset;

#endif
