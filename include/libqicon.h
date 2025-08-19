#pragma once
#ifndef SRCQT6C_LIBQICON_H
#define SRCQT6C_LIBQICON_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qicon.html

/// q_icon_new constructs a new QIcon object.
///
QIcon* q_icon_new();

/// q_icon_new2 constructs a new QIcon object.
///
/// @param pixmap QPixmap*
QIcon* q_icon_new2(void* pixmap);

/// q_icon_new3 constructs a new QIcon object.
///
/// @param other QIcon*
QIcon* q_icon_new3(void* other);

/// q_icon_new4 constructs a new QIcon object.
///
/// @param fileName const char*
QIcon* q_icon_new4(const char* fileName);

/// q_icon_new5 constructs a new QIcon object.
///
/// @param engine QIconEngine*
QIcon* q_icon_new5(void* engine);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#operator-eq)
///
/// @param self QIcon*
/// @param other QIcon*
void q_icon_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#swap)
///
/// @param self QIcon*
/// @param other QIcon*
void q_icon_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#operator)
///
/// @param self QIcon*
QVariant* q_icon_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param size QSize*
QPixmap* q_icon_pixmap(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param w int
/// @param h int
QPixmap* q_icon_pixmap2(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param extent int
QPixmap* q_icon_pixmap3(void* self, int extent);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param size QSize*
/// @param devicePixelRatio double
QPixmap* q_icon_pixmap4(void* self, void* size, double devicePixelRatio);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param window QWindow*
/// @param size QSize*
QPixmap* q_icon_pixmap5(void* self, void* window, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// @param self QIcon*
/// @param size QSize*
QSize* q_icon_actual_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// @param self QIcon*
/// @param window QWindow*
/// @param size QSize*
QSize* q_icon_actual_size2(void* self, void* window, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QIcon*
const char* q_icon_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// @param self QIcon*
/// @param painter QPainter*
/// @param rect QRect*
void q_icon_paint(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// @param self QIcon*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_icon_paint2(void* self, void* painter, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#isNull)
///
/// @param self QIcon*
bool q_icon_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#isDetached)
///
/// @param self QIcon*
bool q_icon_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#detach)
///
/// @param self QIcon*
void q_icon_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#cacheKey)
///
/// @param self QIcon*
long long q_icon_cache_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addPixmap)
///
/// @param self QIcon*
/// @param pixmap QPixmap*
void q_icon_add_pixmap(void* self, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addFile)
///
/// @param self QIcon*
/// @param fileName const char*
void q_icon_add_file(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#availableSizes)
///
/// @param self QIcon*
libqt_list /* of QSize* */ q_icon_available_sizes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#setIsMask)
///
/// @param self QIcon*
/// @param isMask bool
void q_icon_set_is_mask(void* self, bool isMask);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#isMask)
///
/// @param self QIcon*
bool q_icon_is_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#fromTheme)
///
/// @param name const char*
QIcon* q_icon_from_theme(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#fromTheme)
///
/// @param name const char*
/// @param fallback QIcon*
QIcon* q_icon_from_theme2(const char* name, void* fallback);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#hasThemeIcon)
///
/// @param name const char*
bool q_icon_has_theme_icon(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#fromTheme)
///
/// @param icon enum QIcon__ThemeIcon
QIcon* q_icon_from_theme3(int32_t icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#fromTheme)
///
/// @param icon enum QIcon__ThemeIcon
/// @param fallback QIcon*
QIcon* q_icon_from_theme4(int32_t icon, void* fallback);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#hasThemeIcon)
///
/// @param icon enum QIcon__ThemeIcon
bool q_icon_has_theme_icon2(int32_t icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#themeSearchPaths)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_icon_theme_search_paths();

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#setThemeSearchPaths)
///
/// @param searchpath const char**
void q_icon_set_theme_search_paths(const char* searchpath[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#fallbackSearchPaths)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_icon_fallback_search_paths();

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#setFallbackSearchPaths)
///
/// @param paths const char**
void q_icon_set_fallback_search_paths(const char* paths[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#themeName)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_icon_theme_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#setThemeName)
///
/// @param path const char*
void q_icon_set_theme_name(const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#fallbackThemeName)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_icon_fallback_theme_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#setFallbackThemeName)
///
/// @param name const char*
void q_icon_set_fallback_theme_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param size QSize*
/// @param mode enum QIcon__Mode
QPixmap* q_icon_pixmap22(void* self, void* size, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* q_icon_pixmap32(void* self, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param w int
/// @param h int
/// @param mode enum QIcon__Mode
QPixmap* q_icon_pixmap33(void* self, int w, int h, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param w int
/// @param h int
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* q_icon_pixmap42(void* self, int w, int h, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param extent int
/// @param mode enum QIcon__Mode
QPixmap* q_icon_pixmap23(void* self, int extent, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param extent int
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* q_icon_pixmap34(void* self, int extent, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param size QSize*
/// @param devicePixelRatio double
/// @param mode enum QIcon__Mode
QPixmap* q_icon_pixmap35(void* self, void* size, double devicePixelRatio, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param size QSize*
/// @param devicePixelRatio double
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* q_icon_pixmap43(void* self, void* size, double devicePixelRatio, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param window QWindow*
/// @param size QSize*
/// @param mode enum QIcon__Mode
QPixmap* q_icon_pixmap36(void* self, void* window, void* size, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// @param self QIcon*
/// @param window QWindow*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* q_icon_pixmap44(void* self, void* window, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// @param self QIcon*
/// @param size QSize*
/// @param mode enum QIcon__Mode
QSize* q_icon_actual_size22(void* self, void* size, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// @param self QIcon*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QSize* q_icon_actual_size3(void* self, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// @param self QIcon*
/// @param window QWindow*
/// @param size QSize*
/// @param mode enum QIcon__Mode
QSize* q_icon_actual_size32(void* self, void* window, void* size, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// @param self QIcon*
/// @param window QWindow*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QSize* q_icon_actual_size4(void* self, void* window, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// @param self QIcon*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_icon_paint3(void* self, void* painter, void* rect, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// @param self QIcon*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment flag of enum Qt__AlignmentFlag
/// @param mode enum QIcon__Mode
void q_icon_paint4(void* self, void* painter, void* rect, int64_t alignment, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// @param self QIcon*
/// @param painter QPainter*
/// @param rect QRect*
/// @param alignment flag of enum Qt__AlignmentFlag
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void q_icon_paint5(void* self, void* painter, void* rect, int64_t alignment, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// @param self QIcon*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param alignment flag of enum Qt__AlignmentFlag
void q_icon_paint6(void* self, void* painter, int x, int y, int w, int h, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// @param self QIcon*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param alignment flag of enum Qt__AlignmentFlag
/// @param mode enum QIcon__Mode
void q_icon_paint7(void* self, void* painter, int x, int y, int w, int h, int64_t alignment, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// @param self QIcon*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param alignment flag of enum Qt__AlignmentFlag
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void q_icon_paint8(void* self, void* painter, int x, int y, int w, int h, int64_t alignment, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addPixmap)
///
/// @param self QIcon*
/// @param pixmap QPixmap*
/// @param mode enum QIcon__Mode
void q_icon_add_pixmap2(void* self, void* pixmap, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addPixmap)
///
/// @param self QIcon*
/// @param pixmap QPixmap*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void q_icon_add_pixmap3(void* self, void* pixmap, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addFile)
///
/// @param self QIcon*
/// @param fileName const char*
/// @param size QSize*
void q_icon_add_file2(void* self, const char* fileName, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addFile)
///
/// @param self QIcon*
/// @param fileName const char*
/// @param size QSize*
/// @param mode enum QIcon__Mode
void q_icon_add_file3(void* self, const char* fileName, void* size, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addFile)
///
/// @param self QIcon*
/// @param fileName const char*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void q_icon_add_file4(void* self, const char* fileName, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#availableSizes)
///
/// @param self QIcon*
/// @param mode enum QIcon__Mode
libqt_list /* of QSize* */ q_icon_available_sizes1(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#availableSizes)
///
/// @param self QIcon*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
libqt_list /* of QSize* */ q_icon_available_sizes2(void* self, int32_t mode, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#dtor.QIcon)
///
/// Delete this object from C++ memory.
///
/// @param self QIcon*
void q_icon_delete(void* self);

/// https://doc.qt.io/qt-6/qicon.html#types

typedef enum {
    QICON_MODE_NORMAL = 0,
    QICON_MODE_DISABLED = 1,
    QICON_MODE_ACTIVE = 2,
    QICON_MODE_SELECTED = 3
} QIcon__Mode;

typedef enum {
    QICON_STATE_ON = 0,
    QICON_STATE_OFF = 1
} QIcon__State;

typedef enum {
    QICON_THEMEICON_ADDRESSBOOKNEW = 0,
    QICON_THEMEICON_APPLICATIONEXIT = 1,
    QICON_THEMEICON_APPOINTMENTNEW = 2,
    QICON_THEMEICON_CALLSTART = 3,
    QICON_THEMEICON_CALLSTOP = 4,
    QICON_THEMEICON_CONTACTNEW = 5,
    QICON_THEMEICON_DOCUMENTNEW = 6,
    QICON_THEMEICON_DOCUMENTOPEN = 7,
    QICON_THEMEICON_DOCUMENTOPENRECENT = 8,
    QICON_THEMEICON_DOCUMENTPAGESETUP = 9,
    QICON_THEMEICON_DOCUMENTPRINT = 10,
    QICON_THEMEICON_DOCUMENTPRINTPREVIEW = 11,
    QICON_THEMEICON_DOCUMENTPROPERTIES = 12,
    QICON_THEMEICON_DOCUMENTREVERT = 13,
    QICON_THEMEICON_DOCUMENTSAVE = 14,
    QICON_THEMEICON_DOCUMENTSAVEAS = 15,
    QICON_THEMEICON_DOCUMENTSEND = 16,
    QICON_THEMEICON_EDITCLEAR = 17,
    QICON_THEMEICON_EDITCOPY = 18,
    QICON_THEMEICON_EDITCUT = 19,
    QICON_THEMEICON_EDITDELETE = 20,
    QICON_THEMEICON_EDITFIND = 21,
    QICON_THEMEICON_EDITPASTE = 22,
    QICON_THEMEICON_EDITREDO = 23,
    QICON_THEMEICON_EDITSELECTALL = 24,
    QICON_THEMEICON_EDITUNDO = 25,
    QICON_THEMEICON_FOLDERNEW = 26,
    QICON_THEMEICON_FORMATINDENTLESS = 27,
    QICON_THEMEICON_FORMATINDENTMORE = 28,
    QICON_THEMEICON_FORMATJUSTIFYCENTER = 29,
    QICON_THEMEICON_FORMATJUSTIFYFILL = 30,
    QICON_THEMEICON_FORMATJUSTIFYLEFT = 31,
    QICON_THEMEICON_FORMATJUSTIFYRIGHT = 32,
    QICON_THEMEICON_FORMATTEXTDIRECTIONLTR = 33,
    QICON_THEMEICON_FORMATTEXTDIRECTIONRTL = 34,
    QICON_THEMEICON_FORMATTEXTBOLD = 35,
    QICON_THEMEICON_FORMATTEXTITALIC = 36,
    QICON_THEMEICON_FORMATTEXTUNDERLINE = 37,
    QICON_THEMEICON_FORMATTEXTSTRIKETHROUGH = 38,
    QICON_THEMEICON_GODOWN = 39,
    QICON_THEMEICON_GOHOME = 40,
    QICON_THEMEICON_GONEXT = 41,
    QICON_THEMEICON_GOPREVIOUS = 42,
    QICON_THEMEICON_GOUP = 43,
    QICON_THEMEICON_HELPABOUT = 44,
    QICON_THEMEICON_HELPFAQ = 45,
    QICON_THEMEICON_INSERTIMAGE = 46,
    QICON_THEMEICON_INSERTLINK = 47,
    QICON_THEMEICON_INSERTTEXT = 48,
    QICON_THEMEICON_LISTADD = 49,
    QICON_THEMEICON_LISTREMOVE = 50,
    QICON_THEMEICON_MAILFORWARD = 51,
    QICON_THEMEICON_MAILMARKIMPORTANT = 52,
    QICON_THEMEICON_MAILMARKREAD = 53,
    QICON_THEMEICON_MAILMARKUNREAD = 54,
    QICON_THEMEICON_MAILMESSAGENEW = 55,
    QICON_THEMEICON_MAILREPLYALL = 56,
    QICON_THEMEICON_MAILREPLYSENDER = 57,
    QICON_THEMEICON_MAILSEND = 58,
    QICON_THEMEICON_MEDIAEJECT = 59,
    QICON_THEMEICON_MEDIAPLAYBACKPAUSE = 60,
    QICON_THEMEICON_MEDIAPLAYBACKSTART = 61,
    QICON_THEMEICON_MEDIAPLAYBACKSTOP = 62,
    QICON_THEMEICON_MEDIARECORD = 63,
    QICON_THEMEICON_MEDIASEEKBACKWARD = 64,
    QICON_THEMEICON_MEDIASEEKFORWARD = 65,
    QICON_THEMEICON_MEDIASKIPBACKWARD = 66,
    QICON_THEMEICON_MEDIASKIPFORWARD = 67,
    QICON_THEMEICON_OBJECTROTATELEFT = 68,
    QICON_THEMEICON_OBJECTROTATERIGHT = 69,
    QICON_THEMEICON_PROCESSSTOP = 70,
    QICON_THEMEICON_SYSTEMLOCKSCREEN = 71,
    QICON_THEMEICON_SYSTEMLOGOUT = 72,
    QICON_THEMEICON_SYSTEMSEARCH = 73,
    QICON_THEMEICON_SYSTEMREBOOT = 74,
    QICON_THEMEICON_SYSTEMSHUTDOWN = 75,
    QICON_THEMEICON_TOOLSCHECKSPELLING = 76,
    QICON_THEMEICON_VIEWFULLSCREEN = 77,
    QICON_THEMEICON_VIEWREFRESH = 78,
    QICON_THEMEICON_VIEWRESTORE = 79,
    QICON_THEMEICON_WINDOWCLOSE = 80,
    QICON_THEMEICON_WINDOWNEW = 81,
    QICON_THEMEICON_ZOOMFITBEST = 82,
    QICON_THEMEICON_ZOOMIN = 83,
    QICON_THEMEICON_ZOOMOUT = 84,
    QICON_THEMEICON_AUDIOCARD = 85,
    QICON_THEMEICON_AUDIOINPUTMICROPHONE = 86,
    QICON_THEMEICON_BATTERY = 87,
    QICON_THEMEICON_CAMERAPHOTO = 88,
    QICON_THEMEICON_CAMERAVIDEO = 89,
    QICON_THEMEICON_CAMERAWEB = 90,
    QICON_THEMEICON_COMPUTER = 91,
    QICON_THEMEICON_DRIVEHARDDISK = 92,
    QICON_THEMEICON_DRIVEOPTICAL = 93,
    QICON_THEMEICON_INPUTGAMING = 94,
    QICON_THEMEICON_INPUTKEYBOARD = 95,
    QICON_THEMEICON_INPUTMOUSE = 96,
    QICON_THEMEICON_INPUTTABLET = 97,
    QICON_THEMEICON_MEDIAFLASH = 98,
    QICON_THEMEICON_MEDIAOPTICAL = 99,
    QICON_THEMEICON_MEDIATAPE = 100,
    QICON_THEMEICON_MULTIMEDIAPLAYER = 101,
    QICON_THEMEICON_NETWORKWIRED = 102,
    QICON_THEMEICON_NETWORKWIRELESS = 103,
    QICON_THEMEICON_PHONE = 104,
    QICON_THEMEICON_PRINTER = 105,
    QICON_THEMEICON_SCANNER = 106,
    QICON_THEMEICON_VIDEODISPLAY = 107,
    QICON_THEMEICON_APPOINTMENTMISSED = 108,
    QICON_THEMEICON_APPOINTMENTSOON = 109,
    QICON_THEMEICON_AUDIOVOLUMEHIGH = 110,
    QICON_THEMEICON_AUDIOVOLUMELOW = 111,
    QICON_THEMEICON_AUDIOVOLUMEMEDIUM = 112,
    QICON_THEMEICON_AUDIOVOLUMEMUTED = 113,
    QICON_THEMEICON_BATTERYCAUTION = 114,
    QICON_THEMEICON_BATTERYLOW = 115,
    QICON_THEMEICON_DIALOGERROR = 116,
    QICON_THEMEICON_DIALOGINFORMATION = 117,
    QICON_THEMEICON_DIALOGPASSWORD = 118,
    QICON_THEMEICON_DIALOGQUESTION = 119,
    QICON_THEMEICON_DIALOGWARNING = 120,
    QICON_THEMEICON_FOLDERDRAGACCEPT = 121,
    QICON_THEMEICON_FOLDEROPEN = 122,
    QICON_THEMEICON_FOLDERVISITING = 123,
    QICON_THEMEICON_IMAGELOADING = 124,
    QICON_THEMEICON_IMAGEMISSING = 125,
    QICON_THEMEICON_MAILATTACHMENT = 126,
    QICON_THEMEICON_MAILUNREAD = 127,
    QICON_THEMEICON_MAILREAD = 128,
    QICON_THEMEICON_MAILREPLIED = 129,
    QICON_THEMEICON_MEDIAPLAYLISTREPEAT = 130,
    QICON_THEMEICON_MEDIAPLAYLISTSHUFFLE = 131,
    QICON_THEMEICON_NETWORKOFFLINE = 132,
    QICON_THEMEICON_PRINTERPRINTING = 133,
    QICON_THEMEICON_SECURITYHIGH = 134,
    QICON_THEMEICON_SECURITYLOW = 135,
    QICON_THEMEICON_SOFTWAREUPDATEAVAILABLE = 136,
    QICON_THEMEICON_SOFTWAREUPDATEURGENT = 137,
    QICON_THEMEICON_SYNCERROR = 138,
    QICON_THEMEICON_SYNCSYNCHRONIZING = 139,
    QICON_THEMEICON_USERAVAILABLE = 140,
    QICON_THEMEICON_USEROFFLINE = 141,
    QICON_THEMEICON_WEATHERCLEAR = 142,
    QICON_THEMEICON_WEATHERCLEARNIGHT = 143,
    QICON_THEMEICON_WEATHERFEWCLOUDS = 144,
    QICON_THEMEICON_WEATHERFEWCLOUDSNIGHT = 145,
    QICON_THEMEICON_WEATHERFOG = 146,
    QICON_THEMEICON_WEATHERSHOWERS = 147,
    QICON_THEMEICON_WEATHERSNOW = 148,
    QICON_THEMEICON_WEATHERSTORM = 149,
    QICON_THEMEICON_NTHEMEICONS = 150
} QIcon__ThemeIcon;

#endif
