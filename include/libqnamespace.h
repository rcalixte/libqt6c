#pragma once
#ifndef SRCQT6C_LIBQNAMESPACE_H
#define SRCQT6C_LIBQNAMESPACE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/disambiguated-t.html

/// q_disambiguated_t_new constructs a new Qt::Disambiguated_t object.
///
/// @param other Disambiguated_t*
Disambiguated_t* q_disambiguated_t_new(void* other);

/// q_disambiguated_t_new2 constructs a new Qt::Disambiguated_t object and invalidates the source Qt::Disambiguated_t object.
///
/// @param other Disambiguated_t*
Disambiguated_t* q_disambiguated_t_new2(void* other);

/// q_disambiguated_t_new3 constructs a new Qt::Disambiguated_t object.
///
Disambiguated_t* q_disambiguated_t_new3();

/// q_disambiguated_t_new4 constructs a new Qt::Disambiguated_t object.
///
/// @param param1 Disambiguated_t*
Disambiguated_t* q_disambiguated_t_new4(void* param1);

/// q_disambiguated_t_copy_assign shallow copies `other` into `self`.
///
/// @param self Disambiguated_t*
/// @param other Disambiguated_t*
void q_disambiguated_t_copy_assign(void* self, void* other);

/// q_disambiguated_t_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self Disambiguated_t*
/// @param other Disambiguated_t*
void q_disambiguated_t_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/disambiguated-t.html#dtor.Disambiguated_t)
///
/// Delete this object from C++ memory.
///
/// @param self Disambiguated_t*
void q_disambiguated_t_delete(void* self);

/// https://doc.qt.io/qt-6/qinternal.html

/// q_internal_new constructs a new QInternal object.
///
/// @param other QInternal*
QInternal* q_internal_new(void* other);

/// q_internal_new2 constructs a new QInternal object and invalidates the source QInternal object.
///
/// @param other QInternal*
QInternal* q_internal_new2(void* other);

/// q_internal_copy_assign shallow copies `other` into `self`.
///
/// @param self QInternal*
/// @param other QInternal*
void q_internal_copy_assign(void* self, void* other);

/// q_internal_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QInternal*
/// @param other QInternal*
void q_internal_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qinternal.html#activateCallbacks)
///
/// @param param1 enum QInternal__Callback
/// @param param2 void*
bool q_internal_activate_callbacks(int32_t param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qinternal.html#dtor.QInternal)
///
/// Delete this object from C++ memory.
///
/// @param self QInternal*
void q_internal_delete(void* self);

/// https://doc.qt.io/qt-6/qkeycombination.html

/// q_keycombination_new constructs a new QKeyCombination object.
///
/// @param other QKeyCombination*
QKeyCombination* q_keycombination_new(void* other);

/// q_keycombination_new2 constructs a new QKeyCombination object and invalidates the source QKeyCombination object.
///
/// @param other QKeyCombination*
QKeyCombination* q_keycombination_new2(void* other);

/// q_keycombination_new3 constructs a new QKeyCombination object.
///
QKeyCombination* q_keycombination_new3();

/// q_keycombination_new4 constructs a new QKeyCombination object.
///
/// @param modifiers flag of enum Qt__Modifier
QKeyCombination* q_keycombination_new4(int64_t modifiers);

/// q_keycombination_new5 constructs a new QKeyCombination object.
///
/// @param modifiers flag of enum Qt__KeyboardModifier
QKeyCombination* q_keycombination_new5(int64_t modifiers);

/// q_keycombination_new6 constructs a new QKeyCombination object.
///
/// @param param1 QKeyCombination*
QKeyCombination* q_keycombination_new6(void* param1);

/// q_keycombination_new7 constructs a new QKeyCombination object.
///
/// @param key enum Qt__Key
QKeyCombination* q_keycombination_new7(int32_t key);

/// q_keycombination_new8 constructs a new QKeyCombination object.
///
/// @param modifiers flag of enum Qt__Modifier
/// @param key enum Qt__Key
QKeyCombination* q_keycombination_new8(int64_t modifiers, int32_t key);

/// q_keycombination_new9 constructs a new QKeyCombination object.
///
/// @param modifiers flag of enum Qt__KeyboardModifier
/// @param key enum Qt__Key
QKeyCombination* q_keycombination_new9(int64_t modifiers, int32_t key);

/// q_keycombination_copy_assign shallow copies `other` into `self`.
///
/// @param self QKeyCombination*
/// @param other QKeyCombination*
void q_keycombination_copy_assign(void* self, void* other);

/// q_keycombination_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QKeyCombination*
/// @param other QKeyCombination*
void q_keycombination_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#keyboardModifiers)
///
/// @param self QKeyCombination*
///
/// @return flag of enum Qt__KeyboardModifier
int64_t q_keycombination_keyboard_modifiers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#key)
///
/// @param self QKeyCombination*
///
/// @return enum Qt__Key
int32_t q_keycombination_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#fromCombined)
///
/// @param combined int
QKeyCombination* q_keycombination_from_combined(int combined);

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#toCombined)
///
/// @param self QKeyCombination*
int32_t q_keycombination_to_combined(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#operator)
///
/// @param self QKeyCombination*
int32_t q_keycombination_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qkeycombination.html#dtor.QKeyCombination)
///
/// Delete this object from C++ memory.
///
/// @param self QKeyCombination*
void q_keycombination_delete(void* self);

/// https://doc.qt.io/qt-6/qt.html#types

typedef enum {
    QT_GLOBALCOLOR_COLOR0 = 0,
    QT_GLOBALCOLOR_COLOR1 = 1,
    QT_GLOBALCOLOR_BLACK = 2,
    QT_GLOBALCOLOR_WHITE = 3,
    QT_GLOBALCOLOR_DARKGRAY = 4,
    QT_GLOBALCOLOR_GRAY = 5,
    QT_GLOBALCOLOR_LIGHTGRAY = 6,
    QT_GLOBALCOLOR_RED = 7,
    QT_GLOBALCOLOR_GREEN = 8,
    QT_GLOBALCOLOR_BLUE = 9,
    QT_GLOBALCOLOR_CYAN = 10,
    QT_GLOBALCOLOR_MAGENTA = 11,
    QT_GLOBALCOLOR_YELLOW = 12,
    QT_GLOBALCOLOR_DARKRED = 13,
    QT_GLOBALCOLOR_DARKGREEN = 14,
    QT_GLOBALCOLOR_DARKBLUE = 15,
    QT_GLOBALCOLOR_DARKCYAN = 16,
    QT_GLOBALCOLOR_DARKMAGENTA = 17,
    QT_GLOBALCOLOR_DARKYELLOW = 18,
    QT_GLOBALCOLOR_TRANSPARENT = 19
} Qt__GlobalColor;

typedef enum {
    QT_COLORSCHEME_UNKNOWN = 0,
    QT_COLORSCHEME_LIGHT = 1,
    QT_COLORSCHEME_DARK = 2
} Qt__ColorScheme;

typedef enum {
    QT_MOUSEBUTTON_NOBUTTON = 0,
    QT_MOUSEBUTTON_LEFTBUTTON = 1,
    QT_MOUSEBUTTON_RIGHTBUTTON = 2,
    QT_MOUSEBUTTON_MIDDLEBUTTON = 4,
    QT_MOUSEBUTTON_BACKBUTTON = 8,
    QT_MOUSEBUTTON_XBUTTON1 = 8,
    QT_MOUSEBUTTON_EXTRABUTTON1 = 8,
    QT_MOUSEBUTTON_FORWARDBUTTON = 16,
    QT_MOUSEBUTTON_XBUTTON2 = 16,
    QT_MOUSEBUTTON_EXTRABUTTON2 = 16,
    QT_MOUSEBUTTON_TASKBUTTON = 32,
    QT_MOUSEBUTTON_EXTRABUTTON3 = 32,
    QT_MOUSEBUTTON_EXTRABUTTON4 = 64,
    QT_MOUSEBUTTON_EXTRABUTTON5 = 128,
    QT_MOUSEBUTTON_EXTRABUTTON6 = 256,
    QT_MOUSEBUTTON_EXTRABUTTON7 = 512,
    QT_MOUSEBUTTON_EXTRABUTTON8 = 1024,
    QT_MOUSEBUTTON_EXTRABUTTON9 = 2048,
    QT_MOUSEBUTTON_EXTRABUTTON10 = 4096,
    QT_MOUSEBUTTON_EXTRABUTTON11 = 8192,
    QT_MOUSEBUTTON_EXTRABUTTON12 = 16384,
    QT_MOUSEBUTTON_EXTRABUTTON13 = 32768,
    QT_MOUSEBUTTON_EXTRABUTTON14 = 65536,
    QT_MOUSEBUTTON_EXTRABUTTON15 = 131072,
    QT_MOUSEBUTTON_EXTRABUTTON16 = 262144,
    QT_MOUSEBUTTON_EXTRABUTTON17 = 524288,
    QT_MOUSEBUTTON_EXTRABUTTON18 = 1048576,
    QT_MOUSEBUTTON_EXTRABUTTON19 = 2097152,
    QT_MOUSEBUTTON_EXTRABUTTON20 = 4194304,
    QT_MOUSEBUTTON_EXTRABUTTON21 = 8388608,
    QT_MOUSEBUTTON_EXTRABUTTON22 = 16777216,
    QT_MOUSEBUTTON_EXTRABUTTON23 = 33554432,
    QT_MOUSEBUTTON_EXTRABUTTON24 = 67108864,
    QT_MOUSEBUTTON_ALLBUTTONS = 134217727,
    QT_MOUSEBUTTON_MAXMOUSEBUTTON = 67108864,
    QT_MOUSEBUTTON_MOUSEBUTTONMASK = 4294967295
} Qt__MouseButton;

typedef enum {
    QT_ORIENTATION_HORIZONTAL = 1,
    QT_ORIENTATION_VERTICAL = 2
} Qt__Orientation;

typedef enum {
    QT_FOCUSPOLICY_NOFOCUS = 0,
    QT_FOCUSPOLICY_TABFOCUS = 1,
    QT_FOCUSPOLICY_CLICKFOCUS = 2,
    QT_FOCUSPOLICY_STRONGFOCUS = 11,
    QT_FOCUSPOLICY_WHEELFOCUS = 15
} Qt__FocusPolicy;

typedef enum {
    QT_TABFOCUSBEHAVIOR_NOTABFOCUS = 0,
    QT_TABFOCUSBEHAVIOR_TABFOCUSTEXTCONTROLS = 1,
    QT_TABFOCUSBEHAVIOR_TABFOCUSLISTCONTROLS = 2,
    QT_TABFOCUSBEHAVIOR_TABFOCUSALLCONTROLS = 255
} Qt__TabFocusBehavior;

typedef enum {
    QT_SORTORDER_ASCENDINGORDER = 0,
    QT_SORTORDER_DESCENDINGORDER = 1
} Qt__SortOrder;

typedef enum {
    QT_SPLITBEHAVIORFLAGS_KEEPEMPTYPARTS = 0,
    QT_SPLITBEHAVIORFLAGS_SKIPEMPTYPARTS = 1
} Qt__SplitBehaviorFlags;

typedef enum {
    QT_TILERULE_STRETCHTILE = 0,
    QT_TILERULE_REPEATTILE = 1,
    QT_TILERULE_ROUNDTILE = 2
} Qt__TileRule;

typedef enum {
    QT_ALIGNMENTFLAG_ALIGNLEFT = 1,
    QT_ALIGNMENTFLAG_ALIGNLEADING = 1,
    QT_ALIGNMENTFLAG_ALIGNRIGHT = 2,
    QT_ALIGNMENTFLAG_ALIGNTRAILING = 2,
    QT_ALIGNMENTFLAG_ALIGNHCENTER = 4,
    QT_ALIGNMENTFLAG_ALIGNJUSTIFY = 8,
    QT_ALIGNMENTFLAG_ALIGNABSOLUTE = 16,
    QT_ALIGNMENTFLAG_ALIGNHORIZONTAL_MASK = 31,
    QT_ALIGNMENTFLAG_ALIGNTOP = 32,
    QT_ALIGNMENTFLAG_ALIGNBOTTOM = 64,
    QT_ALIGNMENTFLAG_ALIGNVCENTER = 128,
    QT_ALIGNMENTFLAG_ALIGNBASELINE = 256,
    QT_ALIGNMENTFLAG_ALIGNVERTICAL_MASK = 480,
    QT_ALIGNMENTFLAG_ALIGNCENTER = 132
} Qt__AlignmentFlag;

typedef enum {
    QT_TEXTFLAG_TEXTSINGLELINE = 256,
    QT_TEXTFLAG_TEXTDONTCLIP = 512,
    QT_TEXTFLAG_TEXTEXPANDTABS = 1024,
    QT_TEXTFLAG_TEXTSHOWMNEMONIC = 2048,
    QT_TEXTFLAG_TEXTWORDWRAP = 4096,
    QT_TEXTFLAG_TEXTWRAPANYWHERE = 8192,
    QT_TEXTFLAG_TEXTDONTPRINT = 16384,
    QT_TEXTFLAG_TEXTINCLUDETRAILINGSPACES = 134217728,
    QT_TEXTFLAG_TEXTHIDEMNEMONIC = 32768,
    QT_TEXTFLAG_TEXTJUSTIFICATIONFORCED = 65536,
    QT_TEXTFLAG_TEXTFORCELEFTTORIGHT = 131072,
    QT_TEXTFLAG_TEXTFORCERIGHTTOLEFT = 262144,
    QT_TEXTFLAG_TEXTLONGESTVARIANT = 524288
} Qt__TextFlag;

typedef enum {
    QT_TEXTELIDEMODE_ELIDELEFT = 0,
    QT_TEXTELIDEMODE_ELIDERIGHT = 1,
    QT_TEXTELIDEMODE_ELIDEMIDDLE = 2,
    QT_TEXTELIDEMODE_ELIDENONE = 3
} Qt__TextElideMode;

typedef enum {
    QT_WHITESPACEMODE_WHITESPACENORMAL = 0,
    QT_WHITESPACEMODE_WHITESPACEPRE = 1,
    QT_WHITESPACEMODE_WHITESPACENOWRAP = 2,
    QT_WHITESPACEMODE_WHITESPACEMODEUNDEFINED = -1
} Qt__WhiteSpaceMode;

typedef enum {
    QT_HITTESTACCURACY_EXACTHIT = 0,
    QT_HITTESTACCURACY_FUZZYHIT = 1
} Qt__HitTestAccuracy;

typedef enum {
    QT_WINDOWTYPE_WIDGET = 0,
    QT_WINDOWTYPE_WINDOW = 1,
    QT_WINDOWTYPE_DIALOG = 3,
    QT_WINDOWTYPE_SHEET = 5,
    QT_WINDOWTYPE_DRAWER = 7,
    QT_WINDOWTYPE_POPUP = 9,
    QT_WINDOWTYPE_TOOL = 11,
    QT_WINDOWTYPE_TOOLTIP = 13,
    QT_WINDOWTYPE_SPLASHSCREEN = 15,
    QT_WINDOWTYPE_DESKTOP = 17,
    QT_WINDOWTYPE_SUBWINDOW = 18,
    QT_WINDOWTYPE_FOREIGNWINDOW = 33,
    QT_WINDOWTYPE_COVERWINDOW = 65,
    QT_WINDOWTYPE_WINDOWTYPE_MASK = 255,
    QT_WINDOWTYPE_MSWINDOWSFIXEDSIZEDIALOGHINT = 256,
    QT_WINDOWTYPE_MSWINDOWSOWNDC = 512,
    QT_WINDOWTYPE_BYPASSWINDOWMANAGERHINT = 1024,
    QT_WINDOWTYPE_X11BYPASSWINDOWMANAGERHINT = 1024,
    QT_WINDOWTYPE_FRAMELESSWINDOWHINT = 2048,
    QT_WINDOWTYPE_WINDOWTITLEHINT = 4096,
    QT_WINDOWTYPE_WINDOWSYSTEMMENUHINT = 8192,
    QT_WINDOWTYPE_WINDOWMINIMIZEBUTTONHINT = 16384,
    QT_WINDOWTYPE_WINDOWMAXIMIZEBUTTONHINT = 32768,
    QT_WINDOWTYPE_WINDOWMINMAXBUTTONSHINT = 49152,
    QT_WINDOWTYPE_WINDOWCONTEXTHELPBUTTONHINT = 65536,
    QT_WINDOWTYPE_WINDOWSHADEBUTTONHINT = 131072,
    QT_WINDOWTYPE_WINDOWSTAYSONTOPHINT = 262144,
    QT_WINDOWTYPE_WINDOWTRANSPARENTFORINPUT = 524288,
    QT_WINDOWTYPE_WINDOWOVERRIDESSYSTEMGESTURES = 1048576,
    QT_WINDOWTYPE_WINDOWDOESNOTACCEPTFOCUS = 2097152,
    QT_WINDOWTYPE_MAXIMIZEUSINGFULLSCREENGEOMETRYHINT = 4194304,
    QT_WINDOWTYPE_CUSTOMIZEWINDOWHINT = 33554432,
    QT_WINDOWTYPE_WINDOWSTAYSONBOTTOMHINT = 67108864,
    QT_WINDOWTYPE_WINDOWCLOSEBUTTONHINT = 134217728,
    QT_WINDOWTYPE_MACWINDOWTOOLBARBUTTONHINT = 268435456,
    QT_WINDOWTYPE_BYPASSGRAPHICSPROXYWIDGET = 536870912,
    QT_WINDOWTYPE_NODROPSHADOWWINDOWHINT = 1073741824,
    QT_WINDOWTYPE_WINDOWFULLSCREENBUTTONHINT = 2147483648
} Qt__WindowType;

typedef enum {
    QT_WINDOWSTATE_WINDOWNOSTATE = 0,
    QT_WINDOWSTATE_WINDOWMINIMIZED = 1,
    QT_WINDOWSTATE_WINDOWMAXIMIZED = 2,
    QT_WINDOWSTATE_WINDOWFULLSCREEN = 4,
    QT_WINDOWSTATE_WINDOWACTIVE = 8
} Qt__WindowState;

typedef enum {
    QT_APPLICATIONSTATE_APPLICATIONSUSPENDED = 0,
    QT_APPLICATIONSTATE_APPLICATIONHIDDEN = 1,
    QT_APPLICATIONSTATE_APPLICATIONINACTIVE = 2,
    QT_APPLICATIONSTATE_APPLICATIONACTIVE = 4
} Qt__ApplicationState;

typedef enum {
    QT_SCREENORIENTATION_PRIMARYORIENTATION = 0,
    QT_SCREENORIENTATION_PORTRAITORIENTATION = 1,
    QT_SCREENORIENTATION_LANDSCAPEORIENTATION = 2,
    QT_SCREENORIENTATION_INVERTEDPORTRAITORIENTATION = 4,
    QT_SCREENORIENTATION_INVERTEDLANDSCAPEORIENTATION = 8
} Qt__ScreenOrientation;

typedef enum {
    QT_WIDGETATTRIBUTE_WA_DISABLED = 0,
    QT_WIDGETATTRIBUTE_WA_UNDERMOUSE = 1,
    QT_WIDGETATTRIBUTE_WA_MOUSETRACKING = 2,
    QT_WIDGETATTRIBUTE_WA_OPAQUEPAINTEVENT = 4,
    QT_WIDGETATTRIBUTE_WA_STATICCONTENTS = 5,
    QT_WIDGETATTRIBUTE_WA_LAIDOUT = 7,
    QT_WIDGETATTRIBUTE_WA_PAINTONSCREEN = 8,
    QT_WIDGETATTRIBUTE_WA_NOSYSTEMBACKGROUND = 9,
    QT_WIDGETATTRIBUTE_WA_UPDATESDISABLED = 10,
    QT_WIDGETATTRIBUTE_WA_MAPPED = 11,
    QT_WIDGETATTRIBUTE_WA_INPUTMETHODENABLED = 14,
    QT_WIDGETATTRIBUTE_WA_WSTATE_VISIBLE = 15,
    QT_WIDGETATTRIBUTE_WA_WSTATE_HIDDEN = 16,
    QT_WIDGETATTRIBUTE_WA_FORCEDISABLED = 32,
    QT_WIDGETATTRIBUTE_WA_KEYCOMPRESSION = 33,
    QT_WIDGETATTRIBUTE_WA_PENDINGMOVEEVENT = 34,
    QT_WIDGETATTRIBUTE_WA_PENDINGRESIZEEVENT = 35,
    QT_WIDGETATTRIBUTE_WA_SETPALETTE = 36,
    QT_WIDGETATTRIBUTE_WA_SETFONT = 37,
    QT_WIDGETATTRIBUTE_WA_SETCURSOR = 38,
    QT_WIDGETATTRIBUTE_WA_NOCHILDEVENTSFROMCHILDREN = 39,
    QT_WIDGETATTRIBUTE_WA_WINDOWMODIFIED = 41,
    QT_WIDGETATTRIBUTE_WA_RESIZED = 42,
    QT_WIDGETATTRIBUTE_WA_MOVED = 43,
    QT_WIDGETATTRIBUTE_WA_PENDINGUPDATE = 44,
    QT_WIDGETATTRIBUTE_WA_INVALIDSIZE = 45,
    QT_WIDGETATTRIBUTE_WA_CUSTOMWHATSTHIS = 47,
    QT_WIDGETATTRIBUTE_WA_LAYOUTONENTIRERECT = 48,
    QT_WIDGETATTRIBUTE_WA_OUTSIDEWSRANGE = 49,
    QT_WIDGETATTRIBUTE_WA_GRABBEDSHORTCUT = 50,
    QT_WIDGETATTRIBUTE_WA_TRANSPARENTFORMOUSEEVENTS = 51,
    QT_WIDGETATTRIBUTE_WA_PAINTUNCLIPPED = 52,
    QT_WIDGETATTRIBUTE_WA_SETWINDOWICON = 53,
    QT_WIDGETATTRIBUTE_WA_NOMOUSEREPLAY = 54,
    QT_WIDGETATTRIBUTE_WA_DELETEONCLOSE = 55,
    QT_WIDGETATTRIBUTE_WA_RIGHTTOLEFT = 56,
    QT_WIDGETATTRIBUTE_WA_SETLAYOUTDIRECTION = 57,
    QT_WIDGETATTRIBUTE_WA_NOCHILDEVENTSFORPARENT = 58,
    QT_WIDGETATTRIBUTE_WA_FORCEUPDATESDISABLED = 59,
    QT_WIDGETATTRIBUTE_WA_WSTATE_CREATED = 60,
    QT_WIDGETATTRIBUTE_WA_WSTATE_COMPRESSKEYS = 61,
    QT_WIDGETATTRIBUTE_WA_WSTATE_INPAINTEVENT = 62,
    QT_WIDGETATTRIBUTE_WA_WSTATE_REPARENTED = 63,
    QT_WIDGETATTRIBUTE_WA_WSTATE_CONFIGPENDING = 64,
    QT_WIDGETATTRIBUTE_WA_WSTATE_POLISHED = 66,
    QT_WIDGETATTRIBUTE_WA_WSTATE_OWNSIZEPOLICY = 68,
    QT_WIDGETATTRIBUTE_WA_WSTATE_EXPLICITSHOWHIDE = 69,
    QT_WIDGETATTRIBUTE_WA_SHOWMODAL = 70,
    QT_WIDGETATTRIBUTE_WA_MOUSENOMASK = 71,
    QT_WIDGETATTRIBUTE_WA_NOMOUSEPROPAGATION = 73,
    QT_WIDGETATTRIBUTE_WA_HOVER = 74,
    QT_WIDGETATTRIBUTE_WA_INPUTMETHODTRANSPARENT = 75,
    QT_WIDGETATTRIBUTE_WA_QUITONCLOSE = 76,
    QT_WIDGETATTRIBUTE_WA_KEYBOARDFOCUSCHANGE = 77,
    QT_WIDGETATTRIBUTE_WA_ACCEPTDROPS = 78,
    QT_WIDGETATTRIBUTE_WA_DROPSITEREGISTERED = 79,
    QT_WIDGETATTRIBUTE_WA_WINDOWPROPAGATION = 80,
    QT_WIDGETATTRIBUTE_WA_NOX11EVENTCOMPRESSION = 81,
    QT_WIDGETATTRIBUTE_WA_TINTEDBACKGROUND = 82,
    QT_WIDGETATTRIBUTE_WA_X11OPENGLOVERLAY = 83,
    QT_WIDGETATTRIBUTE_WA_ALWAYSSHOWTOOLTIPS = 84,
    QT_WIDGETATTRIBUTE_WA_MACOPAQUESIZEGRIP = 85,
    QT_WIDGETATTRIBUTE_WA_SETSTYLE = 86,
    QT_WIDGETATTRIBUTE_WA_SETLOCALE = 87,
    QT_WIDGETATTRIBUTE_WA_MACSHOWFOCUSRECT = 88,
    QT_WIDGETATTRIBUTE_WA_MACNORMALSIZE = 89,
    QT_WIDGETATTRIBUTE_WA_MACSMALLSIZE = 90,
    QT_WIDGETATTRIBUTE_WA_MACMINISIZE = 91,
    QT_WIDGETATTRIBUTE_WA_LAYOUTUSESWIDGETRECT = 92,
    QT_WIDGETATTRIBUTE_WA_STYLEDBACKGROUND = 93,
    QT_WIDGETATTRIBUTE_WA_CANHOSTQMDISUBWINDOWTITLEBAR = 95,
    QT_WIDGETATTRIBUTE_WA_MACALWAYSSHOWTOOLWINDOW = 96,
    QT_WIDGETATTRIBUTE_WA_STYLESHEET = 97,
    QT_WIDGETATTRIBUTE_WA_SHOWWITHOUTACTIVATING = 98,
    QT_WIDGETATTRIBUTE_WA_X11BYPASSTRANSIENTFORHINT = 99,
    QT_WIDGETATTRIBUTE_WA_NATIVEWINDOW = 100,
    QT_WIDGETATTRIBUTE_WA_DONTCREATENATIVEANCESTORS = 101,
    QT_WIDGETATTRIBUTE_WA_DONTSHOWONSCREEN = 103,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPEDESKTOP = 104,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPEDOCK = 105,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPETOOLBAR = 106,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPEMENU = 107,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPEUTILITY = 108,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPESPLASH = 109,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPEDIALOG = 110,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPEDROPDOWNMENU = 111,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPEPOPUPMENU = 112,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPETOOLTIP = 113,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPENOTIFICATION = 114,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPECOMBO = 115,
    QT_WIDGETATTRIBUTE_WA_X11NETWMWINDOWTYPEDND = 116,
    QT_WIDGETATTRIBUTE_WA_SETWINDOWMODALITY = 118,
    QT_WIDGETATTRIBUTE_WA_WSTATE_WINDOWOPACITYSET = 119,
    QT_WIDGETATTRIBUTE_WA_TRANSLUCENTBACKGROUND = 120,
    QT_WIDGETATTRIBUTE_WA_ACCEPTTOUCHEVENTS = 121,
    QT_WIDGETATTRIBUTE_WA_WSTATE_ACCEPTEDTOUCHBEGINEVENT = 122,
    QT_WIDGETATTRIBUTE_WA_TOUCHPADACCEPTSINGLETOUCHEVENTS = 123,
    QT_WIDGETATTRIBUTE_WA_X11DONOTACCEPTFOCUS = 126,
    QT_WIDGETATTRIBUTE_WA_ALWAYSSTACKONTOP = 128,
    QT_WIDGETATTRIBUTE_WA_TABLETTRACKING = 129,
    QT_WIDGETATTRIBUTE_WA_CONTENTSMARGINSRESPECTSSAFEAREA = 130,
    QT_WIDGETATTRIBUTE_WA_STYLESHEETTARGET = 131,
    QT_WIDGETATTRIBUTE_WA_ATTRIBUTECOUNT = 132
} Qt__WidgetAttribute;

typedef enum {
    QT_APPLICATIONATTRIBUTE_AA_QTQUICKUSEDEFAULTSIZEPOLICY = 1,
    QT_APPLICATIONATTRIBUTE_AA_DONTSHOWICONSINMENUS = 2,
    QT_APPLICATIONATTRIBUTE_AA_NATIVEWINDOWS = 3,
    QT_APPLICATIONATTRIBUTE_AA_DONTCREATENATIVEWIDGETSIBLINGS = 4,
    QT_APPLICATIONATTRIBUTE_AA_PLUGINAPPLICATION = 5,
    QT_APPLICATIONATTRIBUTE_AA_DONTUSENATIVEMENUBAR = 6,
    QT_APPLICATIONATTRIBUTE_AA_MACDONTSWAPCTRLANDMETA = 7,
    QT_APPLICATIONATTRIBUTE_AA_USE96DPI = 8,
    QT_APPLICATIONATTRIBUTE_AA_DISABLENATIVEVIRTUALKEYBOARD = 9,
    QT_APPLICATIONATTRIBUTE_AA_DONTUSENATIVEMENUWINDOWS = 10,
    QT_APPLICATIONATTRIBUTE_AA_SYNTHESIZETOUCHFORUNHANDLEDMOUSEEVENTS = 11,
    QT_APPLICATIONATTRIBUTE_AA_SYNTHESIZEMOUSEFORUNHANDLEDTOUCHEVENTS = 12,
    QT_APPLICATIONATTRIBUTE_AA_USEHIGHDPIPIXMAPS = 13,
    QT_APPLICATIONATTRIBUTE_AA_FORCERASTERWIDGETS = 14,
    QT_APPLICATIONATTRIBUTE_AA_USEDESKTOPOPENGL = 15,
    QT_APPLICATIONATTRIBUTE_AA_USEOPENGLES = 16,
    QT_APPLICATIONATTRIBUTE_AA_USESOFTWAREOPENGL = 17,
    QT_APPLICATIONATTRIBUTE_AA_SHAREOPENGLCONTEXTS = 18,
    QT_APPLICATIONATTRIBUTE_AA_SETPALETTE = 19,
    QT_APPLICATIONATTRIBUTE_AA_ENABLEHIGHDPISCALING = 20,
    QT_APPLICATIONATTRIBUTE_AA_DISABLEHIGHDPISCALING = 21,
    QT_APPLICATIONATTRIBUTE_AA_USESTYLESHEETPROPAGATIONINWIDGETSTYLES = 22,
    QT_APPLICATIONATTRIBUTE_AA_DONTUSENATIVEDIALOGS = 23,
    QT_APPLICATIONATTRIBUTE_AA_SYNTHESIZEMOUSEFORUNHANDLEDTABLETEVENTS = 24,
    QT_APPLICATIONATTRIBUTE_AA_COMPRESSHIGHFREQUENCYEVENTS = 25,
    QT_APPLICATIONATTRIBUTE_AA_DONTCHECKOPENGLCONTEXTTHREADAFFINITY = 26,
    QT_APPLICATIONATTRIBUTE_AA_DISABLESHADERDISKCACHE = 27,
    QT_APPLICATIONATTRIBUTE_AA_DONTSHOWSHORTCUTSINCONTEXTMENUS = 28,
    QT_APPLICATIONATTRIBUTE_AA_COMPRESSTABLETEVENTS = 29,
    QT_APPLICATIONATTRIBUTE_AA_DISABLESESSIONMANAGER = 31,
    QT_APPLICATIONATTRIBUTE_AA_ATTRIBUTECOUNT = 32
} Qt__ApplicationAttribute;

typedef enum {
    QT_IMAGECONVERSIONFLAG_COLORMODE_MASK = 3,
    QT_IMAGECONVERSIONFLAG_AUTOCOLOR = 0,
    QT_IMAGECONVERSIONFLAG_COLORONLY = 3,
    QT_IMAGECONVERSIONFLAG_MONOONLY = 2,
    QT_IMAGECONVERSIONFLAG_ALPHADITHER_MASK = 12,
    QT_IMAGECONVERSIONFLAG_THRESHOLDALPHADITHER = 0,
    QT_IMAGECONVERSIONFLAG_ORDEREDALPHADITHER = 4,
    QT_IMAGECONVERSIONFLAG_DIFFUSEALPHADITHER = 8,
    QT_IMAGECONVERSIONFLAG_NOALPHA = 12,
    QT_IMAGECONVERSIONFLAG_DITHER_MASK = 48,
    QT_IMAGECONVERSIONFLAG_DIFFUSEDITHER = 0,
    QT_IMAGECONVERSIONFLAG_ORDEREDDITHER = 16,
    QT_IMAGECONVERSIONFLAG_THRESHOLDDITHER = 32,
    QT_IMAGECONVERSIONFLAG_DITHERMODE_MASK = 192,
    QT_IMAGECONVERSIONFLAG_AUTODITHER = 0,
    QT_IMAGECONVERSIONFLAG_PREFERDITHER = 64,
    QT_IMAGECONVERSIONFLAG_AVOIDDITHER = 128,
    QT_IMAGECONVERSIONFLAG_NOOPAQUEDETECTION = 256,
    QT_IMAGECONVERSIONFLAG_NOFORMATCONVERSION = 512
} Qt__ImageConversionFlag;

typedef enum {
    QT_BGMODE_TRANSPARENTMODE = 0,
    QT_BGMODE_OPAQUEMODE = 1
} Qt__BGMode;

typedef enum {
    QT_KEY_Key_Space = 32,
    QT_KEY_Key_Any = 32,
    QT_KEY_Key_Exclam = 33,
    QT_KEY_Key_QuoteDbl = 34,
    QT_KEY_Key_NumberSign = 35,
    QT_KEY_Key_Dollar = 36,
    QT_KEY_Key_Percent = 37,
    QT_KEY_Key_Ampersand = 38,
    QT_KEY_Key_Apostrophe = 39,
    QT_KEY_Key_ParenLeft = 40,
    QT_KEY_Key_ParenRight = 41,
    QT_KEY_Key_Asterisk = 42,
    QT_KEY_Key_Plus = 43,
    QT_KEY_Key_Comma = 44,
    QT_KEY_Key_Minus = 45,
    QT_KEY_Key_Period = 46,
    QT_KEY_Key_Slash = 47,
    QT_KEY_Key_0 = 48,
    QT_KEY_Key_1 = 49,
    QT_KEY_Key_2 = 50,
    QT_KEY_Key_3 = 51,
    QT_KEY_Key_4 = 52,
    QT_KEY_Key_5 = 53,
    QT_KEY_Key_6 = 54,
    QT_KEY_Key_7 = 55,
    QT_KEY_Key_8 = 56,
    QT_KEY_Key_9 = 57,
    QT_KEY_Key_Colon = 58,
    QT_KEY_Key_Semicolon = 59,
    QT_KEY_Key_Less = 60,
    QT_KEY_Key_Equal = 61,
    QT_KEY_Key_Greater = 62,
    QT_KEY_Key_Question = 63,
    QT_KEY_Key_At = 64,
    QT_KEY_Key_A = 65,
    QT_KEY_Key_B = 66,
    QT_KEY_Key_C = 67,
    QT_KEY_Key_D = 68,
    QT_KEY_Key_E = 69,
    QT_KEY_Key_F = 70,
    QT_KEY_Key_G = 71,
    QT_KEY_Key_H = 72,
    QT_KEY_Key_I = 73,
    QT_KEY_Key_J = 74,
    QT_KEY_Key_K = 75,
    QT_KEY_Key_L = 76,
    QT_KEY_Key_M = 77,
    QT_KEY_Key_N = 78,
    QT_KEY_Key_O = 79,
    QT_KEY_Key_P = 80,
    QT_KEY_Key_Q = 81,
    QT_KEY_Key_R = 82,
    QT_KEY_Key_S = 83,
    QT_KEY_Key_T = 84,
    QT_KEY_Key_U = 85,
    QT_KEY_Key_V = 86,
    QT_KEY_Key_W = 87,
    QT_KEY_Key_X = 88,
    QT_KEY_Key_Y = 89,
    QT_KEY_Key_Z = 90,
    QT_KEY_Key_BracketLeft = 91,
    QT_KEY_Key_Backslash = 92,
    QT_KEY_Key_BracketRight = 93,
    QT_KEY_Key_AsciiCircum = 94,
    QT_KEY_Key_Underscore = 95,
    QT_KEY_Key_QuoteLeft = 96,
    QT_KEY_Key_BraceLeft = 123,
    QT_KEY_Key_Bar = 124,
    QT_KEY_Key_BraceRight = 125,
    QT_KEY_Key_AsciiTilde = 126,
    QT_KEY_Key_nobreakspace = 160,
    QT_KEY_Key_exclamdown = 161,
    QT_KEY_Key_cent = 162,
    QT_KEY_Key_sterling = 163,
    QT_KEY_Key_currency = 164,
    QT_KEY_Key_yen = 165,
    QT_KEY_Key_brokenbar = 166,
    QT_KEY_Key_section = 167,
    QT_KEY_Key_diaeresis = 168,
    QT_KEY_Key_copyright = 169,
    QT_KEY_Key_ordfeminine = 170,
    QT_KEY_Key_guillemotleft = 171,
    QT_KEY_Key_notsign = 172,
    QT_KEY_Key_hyphen = 173,
    QT_KEY_Key_registered = 174,
    QT_KEY_Key_macron = 175,
    QT_KEY_Key_degree = 176,
    QT_KEY_Key_plusminus = 177,
    QT_KEY_Key_twosuperior = 178,
    QT_KEY_Key_threesuperior = 179,
    QT_KEY_Key_acute = 180,
    QT_KEY_Key_micro = 181,
    QT_KEY_Key_mu = 181,
    QT_KEY_Key_paragraph = 182,
    QT_KEY_Key_periodcentered = 183,
    QT_KEY_Key_cedilla = 184,
    QT_KEY_Key_onesuperior = 185,
    QT_KEY_Key_masculine = 186,
    QT_KEY_Key_guillemotright = 187,
    QT_KEY_Key_onequarter = 188,
    QT_KEY_Key_onehalf = 189,
    QT_KEY_Key_threequarters = 190,
    QT_KEY_Key_questiondown = 191,
    QT_KEY_Key_Agrave = 192,
    QT_KEY_Key_Aacute = 193,
    QT_KEY_Key_Acircumflex = 194,
    QT_KEY_Key_Atilde = 195,
    QT_KEY_Key_Adiaeresis = 196,
    QT_KEY_Key_Aring = 197,
    QT_KEY_Key_AE = 198,
    QT_KEY_Key_Ccedilla = 199,
    QT_KEY_Key_Egrave = 200,
    QT_KEY_Key_Eacute = 201,
    QT_KEY_Key_Ecircumflex = 202,
    QT_KEY_Key_Ediaeresis = 203,
    QT_KEY_Key_Igrave = 204,
    QT_KEY_Key_Iacute = 205,
    QT_KEY_Key_Icircumflex = 206,
    QT_KEY_Key_Idiaeresis = 207,
    QT_KEY_Key_ETH = 208,
    QT_KEY_Key_Ntilde = 209,
    QT_KEY_Key_Ograve = 210,
    QT_KEY_Key_Oacute = 211,
    QT_KEY_Key_Ocircumflex = 212,
    QT_KEY_Key_Otilde = 213,
    QT_KEY_Key_Odiaeresis = 214,
    QT_KEY_Key_multiply = 215,
    QT_KEY_Key_Ooblique = 216,
    QT_KEY_Key_Ugrave = 217,
    QT_KEY_Key_Uacute = 218,
    QT_KEY_Key_Ucircumflex = 219,
    QT_KEY_Key_Udiaeresis = 220,
    QT_KEY_Key_Yacute = 221,
    QT_KEY_Key_THORN = 222,
    QT_KEY_Key_ssharp = 223,
    QT_KEY_Key_division = 247,
    QT_KEY_Key_ydiaeresis = 255,
    QT_KEY_Key_Escape = 16777216,
    QT_KEY_Key_Tab = 16777217,
    QT_KEY_Key_Backtab = 16777218,
    QT_KEY_Key_Backspace = 16777219,
    QT_KEY_Key_Return = 16777220,
    QT_KEY_Key_Enter = 16777221,
    QT_KEY_Key_Insert = 16777222,
    QT_KEY_Key_Delete = 16777223,
    QT_KEY_Key_Pause = 16777224,
    QT_KEY_Key_Print = 16777225,
    QT_KEY_Key_SysReq = 16777226,
    QT_KEY_Key_Clear = 16777227,
    QT_KEY_Key_Home = 16777232,
    QT_KEY_Key_End = 16777233,
    QT_KEY_Key_Left = 16777234,
    QT_KEY_Key_Up = 16777235,
    QT_KEY_Key_Right = 16777236,
    QT_KEY_Key_Down = 16777237,
    QT_KEY_Key_PageUp = 16777238,
    QT_KEY_Key_PageDown = 16777239,
    QT_KEY_Key_Shift = 16777248,
    QT_KEY_Key_Control = 16777249,
    QT_KEY_Key_Meta = 16777250,
    QT_KEY_Key_Alt = 16777251,
    QT_KEY_Key_CapsLock = 16777252,
    QT_KEY_Key_NumLock = 16777253,
    QT_KEY_Key_ScrollLock = 16777254,
    QT_KEY_Key_F1 = 16777264,
    QT_KEY_Key_F2 = 16777265,
    QT_KEY_Key_F3 = 16777266,
    QT_KEY_Key_F4 = 16777267,
    QT_KEY_Key_F5 = 16777268,
    QT_KEY_Key_F6 = 16777269,
    QT_KEY_Key_F7 = 16777270,
    QT_KEY_Key_F8 = 16777271,
    QT_KEY_Key_F9 = 16777272,
    QT_KEY_Key_F10 = 16777273,
    QT_KEY_Key_F11 = 16777274,
    QT_KEY_Key_F12 = 16777275,
    QT_KEY_Key_F13 = 16777276,
    QT_KEY_Key_F14 = 16777277,
    QT_KEY_Key_F15 = 16777278,
    QT_KEY_Key_F16 = 16777279,
    QT_KEY_Key_F17 = 16777280,
    QT_KEY_Key_F18 = 16777281,
    QT_KEY_Key_F19 = 16777282,
    QT_KEY_Key_F20 = 16777283,
    QT_KEY_Key_F21 = 16777284,
    QT_KEY_Key_F22 = 16777285,
    QT_KEY_Key_F23 = 16777286,
    QT_KEY_Key_F24 = 16777287,
    QT_KEY_Key_F25 = 16777288,
    QT_KEY_Key_F26 = 16777289,
    QT_KEY_Key_F27 = 16777290,
    QT_KEY_Key_F28 = 16777291,
    QT_KEY_Key_F29 = 16777292,
    QT_KEY_Key_F30 = 16777293,
    QT_KEY_Key_F31 = 16777294,
    QT_KEY_Key_F32 = 16777295,
    QT_KEY_Key_F33 = 16777296,
    QT_KEY_Key_F34 = 16777297,
    QT_KEY_Key_F35 = 16777298,
    QT_KEY_Key_Super_L = 16777299,
    QT_KEY_Key_Super_R = 16777300,
    QT_KEY_Key_Menu = 16777301,
    QT_KEY_Key_Hyper_L = 16777302,
    QT_KEY_Key_Hyper_R = 16777303,
    QT_KEY_Key_Help = 16777304,
    QT_KEY_Key_Direction_L = 16777305,
    QT_KEY_Key_Direction_R = 16777312,
    QT_KEY_Key_AltGr = 16781571,
    QT_KEY_Key_Multi_key = 16781600,
    QT_KEY_Key_Codeinput = 16781623,
    QT_KEY_Key_SingleCandidate = 16781628,
    QT_KEY_Key_MultipleCandidate = 16781629,
    QT_KEY_Key_PreviousCandidate = 16781630,
    QT_KEY_Key_Mode_switch = 16781694,
    QT_KEY_Key_Kanji = 16781601,
    QT_KEY_Key_Muhenkan = 16781602,
    QT_KEY_Key_Henkan = 16781603,
    QT_KEY_Key_Romaji = 16781604,
    QT_KEY_Key_Hiragana = 16781605,
    QT_KEY_Key_Katakana = 16781606,
    QT_KEY_Key_Hiragana_Katakana = 16781607,
    QT_KEY_Key_Zenkaku = 16781608,
    QT_KEY_Key_Hankaku = 16781609,
    QT_KEY_Key_Zenkaku_Hankaku = 16781610,
    QT_KEY_Key_Touroku = 16781611,
    QT_KEY_Key_Massyo = 16781612,
    QT_KEY_Key_Kana_Lock = 16781613,
    QT_KEY_Key_Kana_Shift = 16781614,
    QT_KEY_Key_Eisu_Shift = 16781615,
    QT_KEY_Key_Eisu_toggle = 16781616,
    QT_KEY_Key_Hangul = 16781617,
    QT_KEY_Key_Hangul_Start = 16781618,
    QT_KEY_Key_Hangul_End = 16781619,
    QT_KEY_Key_Hangul_Hanja = 16781620,
    QT_KEY_Key_Hangul_Jamo = 16781621,
    QT_KEY_Key_Hangul_Romaja = 16781622,
    QT_KEY_Key_Hangul_Jeonja = 16781624,
    QT_KEY_Key_Hangul_Banja = 16781625,
    QT_KEY_Key_Hangul_PreHanja = 16781626,
    QT_KEY_Key_Hangul_PostHanja = 16781627,
    QT_KEY_Key_Hangul_Special = 16781631,
    QT_KEY_Key_Dead_Grave = 16781904,
    QT_KEY_Key_Dead_Acute = 16781905,
    QT_KEY_Key_Dead_Circumflex = 16781906,
    QT_KEY_Key_Dead_Tilde = 16781907,
    QT_KEY_Key_Dead_Macron = 16781908,
    QT_KEY_Key_Dead_Breve = 16781909,
    QT_KEY_Key_Dead_Abovedot = 16781910,
    QT_KEY_Key_Dead_Diaeresis = 16781911,
    QT_KEY_Key_Dead_Abovering = 16781912,
    QT_KEY_Key_Dead_Doubleacute = 16781913,
    QT_KEY_Key_Dead_Caron = 16781914,
    QT_KEY_Key_Dead_Cedilla = 16781915,
    QT_KEY_Key_Dead_Ogonek = 16781916,
    QT_KEY_Key_Dead_Iota = 16781917,
    QT_KEY_Key_Dead_Voiced_Sound = 16781918,
    QT_KEY_Key_Dead_Semivoiced_Sound = 16781919,
    QT_KEY_Key_Dead_Belowdot = 16781920,
    QT_KEY_Key_Dead_Hook = 16781921,
    QT_KEY_Key_Dead_Horn = 16781922,
    QT_KEY_Key_Dead_Stroke = 16781923,
    QT_KEY_Key_Dead_Abovecomma = 16781924,
    QT_KEY_Key_Dead_Abovereversedcomma = 16781925,
    QT_KEY_Key_Dead_Doublegrave = 16781926,
    QT_KEY_Key_Dead_Belowring = 16781927,
    QT_KEY_Key_Dead_Belowmacron = 16781928,
    QT_KEY_Key_Dead_Belowcircumflex = 16781929,
    QT_KEY_Key_Dead_Belowtilde = 16781930,
    QT_KEY_Key_Dead_Belowbreve = 16781931,
    QT_KEY_Key_Dead_Belowdiaeresis = 16781932,
    QT_KEY_Key_Dead_Invertedbreve = 16781933,
    QT_KEY_Key_Dead_Belowcomma = 16781934,
    QT_KEY_Key_Dead_Currency = 16781935,
    QT_KEY_Key_Dead_a = 16781952,
    QT_KEY_Key_Dead_A = 16781953,
    QT_KEY_Key_Dead_e = 16781954,
    QT_KEY_Key_Dead_E = 16781955,
    QT_KEY_Key_Dead_i = 16781956,
    QT_KEY_Key_Dead_I = 16781957,
    QT_KEY_Key_Dead_o = 16781958,
    QT_KEY_Key_Dead_O = 16781959,
    QT_KEY_Key_Dead_u = 16781960,
    QT_KEY_Key_Dead_U = 16781961,
    QT_KEY_Key_Dead_Small_Schwa = 16781962,
    QT_KEY_Key_Dead_Capital_Schwa = 16781963,
    QT_KEY_Key_Dead_Greek = 16781964,
    QT_KEY_Key_Dead_Lowline = 16781968,
    QT_KEY_Key_Dead_Aboveverticalline = 16781969,
    QT_KEY_Key_Dead_Belowverticalline = 16781970,
    QT_KEY_Key_Dead_Longsolidusoverlay = 16781971,
    QT_KEY_Key_Back = 16777313,
    QT_KEY_Key_Forward = 16777314,
    QT_KEY_Key_Stop = 16777315,
    QT_KEY_Key_Refresh = 16777316,
    QT_KEY_Key_VolumeDown = 16777328,
    QT_KEY_Key_VolumeMute = 16777329,
    QT_KEY_Key_VolumeUp = 16777330,
    QT_KEY_Key_BassBoost = 16777331,
    QT_KEY_Key_BassUp = 16777332,
    QT_KEY_Key_BassDown = 16777333,
    QT_KEY_Key_TrebleUp = 16777334,
    QT_KEY_Key_TrebleDown = 16777335,
    QT_KEY_Key_MediaPlay = 16777344,
    QT_KEY_Key_MediaStop = 16777345,
    QT_KEY_Key_MediaPrevious = 16777346,
    QT_KEY_Key_MediaNext = 16777347,
    QT_KEY_Key_MediaRecord = 16777348,
    QT_KEY_Key_MediaPause = 16777349,
    QT_KEY_Key_MediaTogglePlayPause = 16777350,
    QT_KEY_Key_HomePage = 16777360,
    QT_KEY_Key_Favorites = 16777361,
    QT_KEY_Key_Search = 16777362,
    QT_KEY_Key_Standby = 16777363,
    QT_KEY_Key_OpenUrl = 16777364,
    QT_KEY_Key_LaunchMail = 16777376,
    QT_KEY_Key_LaunchMedia = 16777377,
    QT_KEY_Key_Launch0 = 16777378,
    QT_KEY_Key_Launch1 = 16777379,
    QT_KEY_Key_Launch2 = 16777380,
    QT_KEY_Key_Launch3 = 16777381,
    QT_KEY_Key_Launch4 = 16777382,
    QT_KEY_Key_Launch5 = 16777383,
    QT_KEY_Key_Launch6 = 16777384,
    QT_KEY_Key_Launch7 = 16777385,
    QT_KEY_Key_Launch8 = 16777386,
    QT_KEY_Key_Launch9 = 16777387,
    QT_KEY_Key_LaunchA = 16777388,
    QT_KEY_Key_LaunchB = 16777389,
    QT_KEY_Key_LaunchC = 16777390,
    QT_KEY_Key_LaunchD = 16777391,
    QT_KEY_Key_LaunchE = 16777392,
    QT_KEY_Key_LaunchF = 16777393,
    QT_KEY_Key_MonBrightnessUp = 16777394,
    QT_KEY_Key_MonBrightnessDown = 16777395,
    QT_KEY_Key_KeyboardLightOnOff = 16777396,
    QT_KEY_Key_KeyboardBrightnessUp = 16777397,
    QT_KEY_Key_KeyboardBrightnessDown = 16777398,
    QT_KEY_Key_PowerOff = 16777399,
    QT_KEY_Key_WakeUp = 16777400,
    QT_KEY_Key_Eject = 16777401,
    QT_KEY_Key_ScreenSaver = 16777402,
    QT_KEY_Key_WWW = 16777403,
    QT_KEY_Key_Memo = 16777404,
    QT_KEY_Key_LightBulb = 16777405,
    QT_KEY_Key_Shop = 16777406,
    QT_KEY_Key_History = 16777407,
    QT_KEY_Key_AddFavorite = 16777408,
    QT_KEY_Key_HotLinks = 16777409,
    QT_KEY_Key_BrightnessAdjust = 16777410,
    QT_KEY_Key_Finance = 16777411,
    QT_KEY_Key_Community = 16777412,
    QT_KEY_Key_AudioRewind = 16777413,
    QT_KEY_Key_BackForward = 16777414,
    QT_KEY_Key_ApplicationLeft = 16777415,
    QT_KEY_Key_ApplicationRight = 16777416,
    QT_KEY_Key_Book = 16777417,
    QT_KEY_Key_CD = 16777418,
    QT_KEY_Key_Calculator = 16777419,
    QT_KEY_Key_ToDoList = 16777420,
    QT_KEY_Key_ClearGrab = 16777421,
    QT_KEY_Key_Close = 16777422,
    QT_KEY_Key_Copy = 16777423,
    QT_KEY_Key_Cut = 16777424,
    QT_KEY_Key_Display = 16777425,
    QT_KEY_Key_DOS = 16777426,
    QT_KEY_Key_Documents = 16777427,
    QT_KEY_Key_Excel = 16777428,
    QT_KEY_Key_Explorer = 16777429,
    QT_KEY_Key_Game = 16777430,
    QT_KEY_Key_Go = 16777431,
    QT_KEY_Key_iTouch = 16777432,
    QT_KEY_Key_LogOff = 16777433,
    QT_KEY_Key_Market = 16777434,
    QT_KEY_Key_Meeting = 16777435,
    QT_KEY_Key_MenuKB = 16777436,
    QT_KEY_Key_MenuPB = 16777437,
    QT_KEY_Key_MySites = 16777438,
    QT_KEY_Key_News = 16777439,
    QT_KEY_Key_OfficeHome = 16777440,
    QT_KEY_Key_Option = 16777441,
    QT_KEY_Key_Paste = 16777442,
    QT_KEY_Key_Phone = 16777443,
    QT_KEY_Key_Calendar = 16777444,
    QT_KEY_Key_Reply = 16777445,
    QT_KEY_Key_Reload = 16777446,
    QT_KEY_Key_RotateWindows = 16777447,
    QT_KEY_Key_RotationPB = 16777448,
    QT_KEY_Key_RotationKB = 16777449,
    QT_KEY_Key_Save = 16777450,
    QT_KEY_Key_Send = 16777451,
    QT_KEY_Key_Spell = 16777452,
    QT_KEY_Key_SplitScreen = 16777453,
    QT_KEY_Key_Support = 16777454,
    QT_KEY_Key_TaskPane = 16777455,
    QT_KEY_Key_Terminal = 16777456,
    QT_KEY_Key_Tools = 16777457,
    QT_KEY_Key_Travel = 16777458,
    QT_KEY_Key_Video = 16777459,
    QT_KEY_Key_Word = 16777460,
    QT_KEY_Key_Xfer = 16777461,
    QT_KEY_Key_ZoomIn = 16777462,
    QT_KEY_Key_ZoomOut = 16777463,
    QT_KEY_Key_Away = 16777464,
    QT_KEY_Key_Messenger = 16777465,
    QT_KEY_Key_WebCam = 16777466,
    QT_KEY_Key_MailForward = 16777467,
    QT_KEY_Key_Pictures = 16777468,
    QT_KEY_Key_Music = 16777469,
    QT_KEY_Key_Battery = 16777470,
    QT_KEY_Key_Bluetooth = 16777471,
    QT_KEY_Key_WLAN = 16777472,
    QT_KEY_Key_UWB = 16777473,
    QT_KEY_Key_AudioForward = 16777474,
    QT_KEY_Key_AudioRepeat = 16777475,
    QT_KEY_Key_AudioRandomPlay = 16777476,
    QT_KEY_Key_Subtitle = 16777477,
    QT_KEY_Key_AudioCycleTrack = 16777478,
    QT_KEY_Key_Time = 16777479,
    QT_KEY_Key_Hibernate = 16777480,
    QT_KEY_Key_View = 16777481,
    QT_KEY_Key_TopMenu = 16777482,
    QT_KEY_Key_PowerDown = 16777483,
    QT_KEY_Key_Suspend = 16777484,
    QT_KEY_Key_ContrastAdjust = 16777485,
    QT_KEY_Key_LaunchG = 16777486,
    QT_KEY_Key_LaunchH = 16777487,
    QT_KEY_Key_TouchpadToggle = 16777488,
    QT_KEY_Key_TouchpadOn = 16777489,
    QT_KEY_Key_TouchpadOff = 16777490,
    QT_KEY_Key_MicMute = 16777491,
    QT_KEY_Key_Red = 16777492,
    QT_KEY_Key_Green = 16777493,
    QT_KEY_Key_Yellow = 16777494,
    QT_KEY_Key_Blue = 16777495,
    QT_KEY_Key_ChannelUp = 16777496,
    QT_KEY_Key_ChannelDown = 16777497,
    QT_KEY_Key_Guide = 16777498,
    QT_KEY_Key_Info = 16777499,
    QT_KEY_Key_Settings = 16777500,
    QT_KEY_Key_MicVolumeUp = 16777501,
    QT_KEY_Key_MicVolumeDown = 16777502,
    QT_KEY_Key_New = 16777504,
    QT_KEY_Key_Open = 16777505,
    QT_KEY_Key_Find = 16777506,
    QT_KEY_Key_Undo = 16777507,
    QT_KEY_Key_Redo = 16777508,
    QT_KEY_Key_MediaLast = 16842751,
    QT_KEY_Key_Select = 16842752,
    QT_KEY_Key_Yes = 16842753,
    QT_KEY_Key_No = 16842754,
    QT_KEY_Key_Cancel = 16908289,
    QT_KEY_Key_Printer = 16908290,
    QT_KEY_Key_Execute = 16908291,
    QT_KEY_Key_Sleep = 16908292,
    QT_KEY_Key_Play = 16908293,
    QT_KEY_Key_Zoom = 16908294,
    QT_KEY_Key_Exit = 16908298,
    QT_KEY_Key_Context1 = 17825792,
    QT_KEY_Key_Context2 = 17825793,
    QT_KEY_Key_Context3 = 17825794,
    QT_KEY_Key_Context4 = 17825795,
    QT_KEY_Key_Call = 17825796,
    QT_KEY_Key_Hangup = 17825797,
    QT_KEY_Key_Flip = 17825798,
    QT_KEY_Key_ToggleCallHangup = 17825799,
    QT_KEY_Key_VoiceDial = 17825800,
    QT_KEY_Key_LastNumberRedial = 17825801,
    QT_KEY_Key_Camera = 17825824,
    QT_KEY_Key_CameraFocus = 17825825,
    QT_KEY_Key_unknown = 33554431
} Qt__Key;

typedef enum {
    QT_KEYBOARDMODIFIER_NOMODIFIER = 0,
    QT_KEYBOARDMODIFIER_SHIFTMODIFIER = 33554432,
    QT_KEYBOARDMODIFIER_CONTROLMODIFIER = 67108864,
    QT_KEYBOARDMODIFIER_ALTMODIFIER = 134217728,
    QT_KEYBOARDMODIFIER_METAMODIFIER = 268435456,
    QT_KEYBOARDMODIFIER_KEYPADMODIFIER = 536870912,
    QT_KEYBOARDMODIFIER_GROUPSWITCHMODIFIER = 1073741824,
    QT_KEYBOARDMODIFIER_KEYBOARDMODIFIERMASK = 4261412864
} Qt__KeyboardModifier;

typedef enum {
    QT_MODIFIER_META = 268435456,
    QT_MODIFIER_SHIFT = 33554432,
    QT_MODIFIER_CTRL = 67108864,
    QT_MODIFIER_ALT = 134217728,
    QT_MODIFIER_MODIFIER_MASK = 4261412864
} Qt__Modifier;

typedef enum {
    QT_ARROWTYPE_NOARROW = 0,
    QT_ARROWTYPE_UPARROW = 1,
    QT_ARROWTYPE_DOWNARROW = 2,
    QT_ARROWTYPE_LEFTARROW = 3,
    QT_ARROWTYPE_RIGHTARROW = 4
} Qt__ArrowType;

typedef enum {
    QT_PENSTYLE_NOPEN = 0,
    QT_PENSTYLE_SOLIDLINE = 1,
    QT_PENSTYLE_DASHLINE = 2,
    QT_PENSTYLE_DOTLINE = 3,
    QT_PENSTYLE_DASHDOTLINE = 4,
    QT_PENSTYLE_DASHDOTDOTLINE = 5,
    QT_PENSTYLE_CUSTOMDASHLINE = 6,
    QT_PENSTYLE_MPENSTYLE = 15
} Qt__PenStyle;

typedef enum {
    QT_PENCAPSTYLE_FLATCAP = 0,
    QT_PENCAPSTYLE_SQUARECAP = 16,
    QT_PENCAPSTYLE_ROUNDCAP = 32,
    QT_PENCAPSTYLE_MPENCAPSTYLE = 48
} Qt__PenCapStyle;

typedef enum {
    QT_PENJOINSTYLE_MITERJOIN = 0,
    QT_PENJOINSTYLE_BEVELJOIN = 64,
    QT_PENJOINSTYLE_ROUNDJOIN = 128,
    QT_PENJOINSTYLE_SVGMITERJOIN = 256,
    QT_PENJOINSTYLE_MPENJOINSTYLE = 448
} Qt__PenJoinStyle;

typedef enum {
    QT_BRUSHSTYLE_NOBRUSH = 0,
    QT_BRUSHSTYLE_SOLIDPATTERN = 1,
    QT_BRUSHSTYLE_DENSE1PATTERN = 2,
    QT_BRUSHSTYLE_DENSE2PATTERN = 3,
    QT_BRUSHSTYLE_DENSE3PATTERN = 4,
    QT_BRUSHSTYLE_DENSE4PATTERN = 5,
    QT_BRUSHSTYLE_DENSE5PATTERN = 6,
    QT_BRUSHSTYLE_DENSE6PATTERN = 7,
    QT_BRUSHSTYLE_DENSE7PATTERN = 8,
    QT_BRUSHSTYLE_HORPATTERN = 9,
    QT_BRUSHSTYLE_VERPATTERN = 10,
    QT_BRUSHSTYLE_CROSSPATTERN = 11,
    QT_BRUSHSTYLE_BDIAGPATTERN = 12,
    QT_BRUSHSTYLE_FDIAGPATTERN = 13,
    QT_BRUSHSTYLE_DIAGCROSSPATTERN = 14,
    QT_BRUSHSTYLE_LINEARGRADIENTPATTERN = 15,
    QT_BRUSHSTYLE_RADIALGRADIENTPATTERN = 16,
    QT_BRUSHSTYLE_CONICALGRADIENTPATTERN = 17,
    QT_BRUSHSTYLE_TEXTUREPATTERN = 24
} Qt__BrushStyle;

typedef enum {
    QT_SIZEMODE_ABSOLUTESIZE = 0,
    QT_SIZEMODE_RELATIVESIZE = 1
} Qt__SizeMode;

typedef enum {
    QT_UIEFFECT_UI_GENERAL = 0,
    QT_UIEFFECT_UI_ANIMATEMENU = 1,
    QT_UIEFFECT_UI_FADEMENU = 2,
    QT_UIEFFECT_UI_ANIMATECOMBO = 3,
    QT_UIEFFECT_UI_ANIMATETOOLTIP = 4,
    QT_UIEFFECT_UI_FADETOOLTIP = 5,
    QT_UIEFFECT_UI_ANIMATETOOLBOX = 6
} Qt__UIEffect;

typedef enum {
    QT_CURSORSHAPE_ARROWCURSOR = 0,
    QT_CURSORSHAPE_UPARROWCURSOR = 1,
    QT_CURSORSHAPE_CROSSCURSOR = 2,
    QT_CURSORSHAPE_WAITCURSOR = 3,
    QT_CURSORSHAPE_IBEAMCURSOR = 4,
    QT_CURSORSHAPE_SIZEVERCURSOR = 5,
    QT_CURSORSHAPE_SIZEHORCURSOR = 6,
    QT_CURSORSHAPE_SIZEBDIAGCURSOR = 7,
    QT_CURSORSHAPE_SIZEFDIAGCURSOR = 8,
    QT_CURSORSHAPE_SIZEALLCURSOR = 9,
    QT_CURSORSHAPE_BLANKCURSOR = 10,
    QT_CURSORSHAPE_SPLITVCURSOR = 11,
    QT_CURSORSHAPE_SPLITHCURSOR = 12,
    QT_CURSORSHAPE_POINTINGHANDCURSOR = 13,
    QT_CURSORSHAPE_FORBIDDENCURSOR = 14,
    QT_CURSORSHAPE_WHATSTHISCURSOR = 15,
    QT_CURSORSHAPE_BUSYCURSOR = 16,
    QT_CURSORSHAPE_OPENHANDCURSOR = 17,
    QT_CURSORSHAPE_CLOSEDHANDCURSOR = 18,
    QT_CURSORSHAPE_DRAGCOPYCURSOR = 19,
    QT_CURSORSHAPE_DRAGMOVECURSOR = 20,
    QT_CURSORSHAPE_DRAGLINKCURSOR = 21,
    QT_CURSORSHAPE_LASTCURSOR = 21,
    QT_CURSORSHAPE_BITMAPCURSOR = 24,
    QT_CURSORSHAPE_CUSTOMCURSOR = 25
} Qt__CursorShape;

typedef enum {
    QT_TEXTFORMAT_PLAINTEXT = 0,
    QT_TEXTFORMAT_RICHTEXT = 1,
    QT_TEXTFORMAT_AUTOTEXT = 2,
    QT_TEXTFORMAT_MARKDOWNTEXT = 3
} Qt__TextFormat;

typedef enum {
    QT_ASPECTRATIOMODE_IGNOREASPECTRATIO = 0,
    QT_ASPECTRATIOMODE_KEEPASPECTRATIO = 1,
    QT_ASPECTRATIOMODE_KEEPASPECTRATIOBYEXPANDING = 2
} Qt__AspectRatioMode;

typedef enum {
    QT_DOCKWIDGETAREA_LEFTDOCKWIDGETAREA = 1,
    QT_DOCKWIDGETAREA_RIGHTDOCKWIDGETAREA = 2,
    QT_DOCKWIDGETAREA_TOPDOCKWIDGETAREA = 4,
    QT_DOCKWIDGETAREA_BOTTOMDOCKWIDGETAREA = 8,
    QT_DOCKWIDGETAREA_DOCKWIDGETAREA_MASK = 15,
    QT_DOCKWIDGETAREA_ALLDOCKWIDGETAREAS = 15,
    QT_DOCKWIDGETAREA_NODOCKWIDGETAREA = 0
} Qt__DockWidgetArea;

typedef enum {
    QT_DOCKWIDGETAREASIZES_NDOCKWIDGETAREAS = 4
} Qt__DockWidgetAreaSizes;

typedef enum {
    QT_TOOLBARAREA_LEFTTOOLBARAREA = 1,
    QT_TOOLBARAREA_RIGHTTOOLBARAREA = 2,
    QT_TOOLBARAREA_TOPTOOLBARAREA = 4,
    QT_TOOLBARAREA_BOTTOMTOOLBARAREA = 8,
    QT_TOOLBARAREA_TOOLBARAREA_MASK = 15,
    QT_TOOLBARAREA_ALLTOOLBARAREAS = 15,
    QT_TOOLBARAREA_NOTOOLBARAREA = 0
} Qt__ToolBarArea;

typedef enum {
    QT_TOOLBARAREASIZES_NTOOLBARAREAS = 4
} Qt__ToolBarAreaSizes;

typedef enum {
    QT_DATEFORMAT_TEXTDATE = 0,
    QT_DATEFORMAT_ISODATE = 1,
    QT_DATEFORMAT_RFC2822DATE = 8,
    QT_DATEFORMAT_ISODATEWITHMS = 9
} Qt__DateFormat;

typedef enum {
    QT_TIMESPEC_LOCALTIME = 0,
    QT_TIMESPEC_UTC = 1,
    QT_TIMESPEC_OFFSETFROMUTC = 2,
    QT_TIMESPEC_TIMEZONE = 3
} Qt__TimeSpec;

typedef enum {
    QT_DAYOFWEEK_MONDAY = 1,
    QT_DAYOFWEEK_TUESDAY = 2,
    QT_DAYOFWEEK_WEDNESDAY = 3,
    QT_DAYOFWEEK_THURSDAY = 4,
    QT_DAYOFWEEK_FRIDAY = 5,
    QT_DAYOFWEEK_SATURDAY = 6,
    QT_DAYOFWEEK_SUNDAY = 7
} Qt__DayOfWeek;

typedef enum {
    QT_SCROLLBARPOLICY_SCROLLBARASNEEDED = 0,
    QT_SCROLLBARPOLICY_SCROLLBARALWAYSOFF = 1,
    QT_SCROLLBARPOLICY_SCROLLBARALWAYSON = 2
} Qt__ScrollBarPolicy;

typedef enum {
    QT_CASESENSITIVITY_CASEINSENSITIVE = 0,
    QT_CASESENSITIVITY_CASESENSITIVE = 1
} Qt__CaseSensitivity;

typedef enum {
    QT_CORNER_TOPLEFTCORNER = 0,
    QT_CORNER_TOPRIGHTCORNER = 1,
    QT_CORNER_BOTTOMLEFTCORNER = 2,
    QT_CORNER_BOTTOMRIGHTCORNER = 3
} Qt__Corner;

typedef enum {
    QT_EDGE_TOPEDGE = 1,
    QT_EDGE_LEFTEDGE = 2,
    QT_EDGE_RIGHTEDGE = 4,
    QT_EDGE_BOTTOMEDGE = 8
} Qt__Edge;

typedef enum {
    QT_CONNECTIONTYPE_AUTOCONNECTION = 0,
    QT_CONNECTIONTYPE_DIRECTCONNECTION = 1,
    QT_CONNECTIONTYPE_QUEUEDCONNECTION = 2,
    QT_CONNECTIONTYPE_BLOCKINGQUEUEDCONNECTION = 3,
    QT_CONNECTIONTYPE_UNIQUECONNECTION = 128,
    QT_CONNECTIONTYPE_SINGLESHOTCONNECTION = 256
} Qt__ConnectionType;

typedef enum {
    QT_SHORTCUTCONTEXT_WIDGETSHORTCUT = 0,
    QT_SHORTCUTCONTEXT_WINDOWSHORTCUT = 1,
    QT_SHORTCUTCONTEXT_APPLICATIONSHORTCUT = 2,
    QT_SHORTCUTCONTEXT_WIDGETWITHCHILDRENSHORTCUT = 3
} Qt__ShortcutContext;

typedef enum {
    QT_FILLRULE_ODDEVENFILL = 0,
    QT_FILLRULE_WINDINGFILL = 1
} Qt__FillRule;

typedef enum {
    QT_MASKMODE_MASKINCOLOR = 0,
    QT_MASKMODE_MASKOUTCOLOR = 1
} Qt__MaskMode;

typedef enum {
    QT_CLIPOPERATION_NOCLIP = 0,
    QT_CLIPOPERATION_REPLACECLIP = 1,
    QT_CLIPOPERATION_INTERSECTCLIP = 2
} Qt__ClipOperation;

typedef enum {
    QT_ITEMSELECTIONMODE_CONTAINSITEMSHAPE = 0,
    QT_ITEMSELECTIONMODE_INTERSECTSITEMSHAPE = 1,
    QT_ITEMSELECTIONMODE_CONTAINSITEMBOUNDINGRECT = 2,
    QT_ITEMSELECTIONMODE_INTERSECTSITEMBOUNDINGRECT = 3
} Qt__ItemSelectionMode;

typedef enum {
    QT_ITEMSELECTIONOPERATION_REPLACESELECTION = 0,
    QT_ITEMSELECTIONOPERATION_ADDTOSELECTION = 1
} Qt__ItemSelectionOperation;

typedef enum {
    QT_TRANSFORMATIONMODE_FASTTRANSFORMATION = 0,
    QT_TRANSFORMATIONMODE_SMOOTHTRANSFORMATION = 1
} Qt__TransformationMode;

typedef enum {
    QT_AXIS_XAXIS = 0,
    QT_AXIS_YAXIS = 1,
    QT_AXIS_ZAXIS = 2
} Qt__Axis;

typedef enum {
    QT_FOCUSREASON_MOUSEFOCUSREASON = 0,
    QT_FOCUSREASON_TABFOCUSREASON = 1,
    QT_FOCUSREASON_BACKTABFOCUSREASON = 2,
    QT_FOCUSREASON_ACTIVEWINDOWFOCUSREASON = 3,
    QT_FOCUSREASON_POPUPFOCUSREASON = 4,
    QT_FOCUSREASON_SHORTCUTFOCUSREASON = 5,
    QT_FOCUSREASON_MENUBARFOCUSREASON = 6,
    QT_FOCUSREASON_OTHERFOCUSREASON = 7,
    QT_FOCUSREASON_NOFOCUSREASON = 8
} Qt__FocusReason;

typedef enum {
    QT_CONTEXTMENUPOLICY_NOCONTEXTMENU = 0,
    QT_CONTEXTMENUPOLICY_DEFAULTCONTEXTMENU = 1,
    QT_CONTEXTMENUPOLICY_ACTIONSCONTEXTMENU = 2,
    QT_CONTEXTMENUPOLICY_CUSTOMCONTEXTMENU = 3,
    QT_CONTEXTMENUPOLICY_PREVENTCONTEXTMENU = 4
} Qt__ContextMenuPolicy;

typedef enum {
    QT_CONTEXTMENUTRIGGER_PRESS = 0,
    QT_CONTEXTMENUTRIGGER_RELEASE = 1
} Qt__ContextMenuTrigger;

typedef enum {
    QT_INPUTMETHODQUERY_IMENABLED = 1,
    QT_INPUTMETHODQUERY_IMCURSORRECTANGLE = 2,
    QT_INPUTMETHODQUERY_IMFONT = 4,
    QT_INPUTMETHODQUERY_IMCURSORPOSITION = 8,
    QT_INPUTMETHODQUERY_IMSURROUNDINGTEXT = 16,
    QT_INPUTMETHODQUERY_IMCURRENTSELECTION = 32,
    QT_INPUTMETHODQUERY_IMMAXIMUMTEXTLENGTH = 64,
    QT_INPUTMETHODQUERY_IMANCHORPOSITION = 128,
    QT_INPUTMETHODQUERY_IMHINTS = 256,
    QT_INPUTMETHODQUERY_IMPREFERREDLANGUAGE = 512,
    QT_INPUTMETHODQUERY_IMABSOLUTEPOSITION = 1024,
    QT_INPUTMETHODQUERY_IMTEXTBEFORECURSOR = 2048,
    QT_INPUTMETHODQUERY_IMTEXTAFTERCURSOR = 4096,
    QT_INPUTMETHODQUERY_IMENTERKEYTYPE = 8192,
    QT_INPUTMETHODQUERY_IMANCHORRECTANGLE = 16384,
    QT_INPUTMETHODQUERY_IMINPUTITEMCLIPRECTANGLE = 32768,
    QT_INPUTMETHODQUERY_IMREADONLY = 65536,
    QT_INPUTMETHODQUERY_IMPLATFORMDATA = 2147483648,
    QT_INPUTMETHODQUERY_IMQUERYINPUT = 16570,
    QT_INPUTMETHODQUERY_IMQUERYALL = 4294967295
} Qt__InputMethodQuery;

typedef enum {
    QT_INPUTMETHODHINT_IMHNONE = 0,
    QT_INPUTMETHODHINT_IMHHIDDENTEXT = 1,
    QT_INPUTMETHODHINT_IMHSENSITIVEDATA = 2,
    QT_INPUTMETHODHINT_IMHNOAUTOUPPERCASE = 4,
    QT_INPUTMETHODHINT_IMHPREFERNUMBERS = 8,
    QT_INPUTMETHODHINT_IMHPREFERUPPERCASE = 16,
    QT_INPUTMETHODHINT_IMHPREFERLOWERCASE = 32,
    QT_INPUTMETHODHINT_IMHNOPREDICTIVETEXT = 64,
    QT_INPUTMETHODHINT_IMHDATE = 128,
    QT_INPUTMETHODHINT_IMHTIME = 256,
    QT_INPUTMETHODHINT_IMHPREFERLATIN = 512,
    QT_INPUTMETHODHINT_IMHMULTILINE = 1024,
    QT_INPUTMETHODHINT_IMHNOEDITMENU = 2048,
    QT_INPUTMETHODHINT_IMHNOTEXTHANDLES = 4096,
    QT_INPUTMETHODHINT_IMHDIGITSONLY = 65536,
    QT_INPUTMETHODHINT_IMHFORMATTEDNUMBERSONLY = 131072,
    QT_INPUTMETHODHINT_IMHUPPERCASEONLY = 262144,
    QT_INPUTMETHODHINT_IMHLOWERCASEONLY = 524288,
    QT_INPUTMETHODHINT_IMHDIALABLECHARACTERSONLY = 1048576,
    QT_INPUTMETHODHINT_IMHEMAILCHARACTERSONLY = 2097152,
    QT_INPUTMETHODHINT_IMHURLCHARACTERSONLY = 4194304,
    QT_INPUTMETHODHINT_IMHLATINONLY = 8388608,
    QT_INPUTMETHODHINT_IMHEXCLUSIVEINPUTMASK = 4294901760
} Qt__InputMethodHint;

typedef enum {
    QT_ENTERKEYTYPE_ENTERKEYDEFAULT = 0,
    QT_ENTERKEYTYPE_ENTERKEYRETURN = 1,
    QT_ENTERKEYTYPE_ENTERKEYDONE = 2,
    QT_ENTERKEYTYPE_ENTERKEYGO = 3,
    QT_ENTERKEYTYPE_ENTERKEYSEND = 4,
    QT_ENTERKEYTYPE_ENTERKEYSEARCH = 5,
    QT_ENTERKEYTYPE_ENTERKEYNEXT = 6,
    QT_ENTERKEYTYPE_ENTERKEYPREVIOUS = 7
} Qt__EnterKeyType;

typedef enum {
    QT_TOOLBUTTONSTYLE_TOOLBUTTONICONONLY = 0,
    QT_TOOLBUTTONSTYLE_TOOLBUTTONTEXTONLY = 1,
    QT_TOOLBUTTONSTYLE_TOOLBUTTONTEXTBESIDEICON = 2,
    QT_TOOLBUTTONSTYLE_TOOLBUTTONTEXTUNDERICON = 3,
    QT_TOOLBUTTONSTYLE_TOOLBUTTONFOLLOWSTYLE = 4
} Qt__ToolButtonStyle;

typedef enum {
    QT_LAYOUTDIRECTION_LEFTTORIGHT = 0,
    QT_LAYOUTDIRECTION_RIGHTTOLEFT = 1,
    QT_LAYOUTDIRECTION_LAYOUTDIRECTIONAUTO = 2
} Qt__LayoutDirection;

typedef enum {
    QT_ANCHORPOINT_ANCHORLEFT = 0,
    QT_ANCHORPOINT_ANCHORHORIZONTALCENTER = 1,
    QT_ANCHORPOINT_ANCHORRIGHT = 2,
    QT_ANCHORPOINT_ANCHORTOP = 3,
    QT_ANCHORPOINT_ANCHORVERTICALCENTER = 4,
    QT_ANCHORPOINT_ANCHORBOTTOM = 5
} Qt__AnchorPoint;

typedef enum {
    QT_FINDCHILDOPTION_FINDDIRECTCHILDRENONLY = 0,
    QT_FINDCHILDOPTION_FINDCHILDRENRECURSIVELY = 1
} Qt__FindChildOption;

typedef enum {
    QT_DROPACTION_COPYACTION = 1,
    QT_DROPACTION_MOVEACTION = 2,
    QT_DROPACTION_LINKACTION = 4,
    QT_DROPACTION_ACTIONMASK = 255,
    QT_DROPACTION_TARGETMOVEACTION = 32770,
    QT_DROPACTION_IGNOREACTION = 0
} Qt__DropAction;

typedef enum {
    QT_CHECKSTATE_UNCHECKED = 0,
    QT_CHECKSTATE_PARTIALLYCHECKED = 1,
    QT_CHECKSTATE_CHECKED = 2
} Qt__CheckState;

typedef enum {
    QT_ITEMDATAROLE_DISPLAYROLE = 0,
    QT_ITEMDATAROLE_DECORATIONROLE = 1,
    QT_ITEMDATAROLE_EDITROLE = 2,
    QT_ITEMDATAROLE_TOOLTIPROLE = 3,
    QT_ITEMDATAROLE_STATUSTIPROLE = 4,
    QT_ITEMDATAROLE_WHATSTHISROLE = 5,
    QT_ITEMDATAROLE_FONTROLE = 6,
    QT_ITEMDATAROLE_TEXTALIGNMENTROLE = 7,
    QT_ITEMDATAROLE_BACKGROUNDROLE = 8,
    QT_ITEMDATAROLE_FOREGROUNDROLE = 9,
    QT_ITEMDATAROLE_CHECKSTATEROLE = 10,
    QT_ITEMDATAROLE_ACCESSIBLETEXTROLE = 11,
    QT_ITEMDATAROLE_ACCESSIBLEDESCRIPTIONROLE = 12,
    QT_ITEMDATAROLE_SIZEHINTROLE = 13,
    QT_ITEMDATAROLE_INITIALSORTORDERROLE = 14,
    QT_ITEMDATAROLE_DISPLAYPROPERTYROLE = 27,
    QT_ITEMDATAROLE_DECORATIONPROPERTYROLE = 28,
    QT_ITEMDATAROLE_TOOLTIPPROPERTYROLE = 29,
    QT_ITEMDATAROLE_STATUSTIPPROPERTYROLE = 30,
    QT_ITEMDATAROLE_WHATSTHISPROPERTYROLE = 31,
    QT_ITEMDATAROLE_USERROLE = 256
} Qt__ItemDataRole;

typedef enum {
    QT_ITEMFLAG_NOITEMFLAGS = 0,
    QT_ITEMFLAG_ITEMISSELECTABLE = 1,
    QT_ITEMFLAG_ITEMISEDITABLE = 2,
    QT_ITEMFLAG_ITEMISDRAGENABLED = 4,
    QT_ITEMFLAG_ITEMISDROPENABLED = 8,
    QT_ITEMFLAG_ITEMISUSERCHECKABLE = 16,
    QT_ITEMFLAG_ITEMISENABLED = 32,
    QT_ITEMFLAG_ITEMISAUTOTRISTATE = 64,
    QT_ITEMFLAG_ITEMNEVERHASCHILDREN = 128,
    QT_ITEMFLAG_ITEMISUSERTRISTATE = 256
} Qt__ItemFlag;

typedef enum {
    QT_MATCHFLAG_MATCHEXACTLY = 0,
    QT_MATCHFLAG_MATCHCONTAINS = 1,
    QT_MATCHFLAG_MATCHSTARTSWITH = 2,
    QT_MATCHFLAG_MATCHENDSWITH = 3,
    QT_MATCHFLAG_MATCHREGULAREXPRESSION = 4,
    QT_MATCHFLAG_MATCHWILDCARD = 5,
    QT_MATCHFLAG_MATCHFIXEDSTRING = 8,
    QT_MATCHFLAG_MATCHTYPEMASK = 15,
    QT_MATCHFLAG_MATCHCASESENSITIVE = 16,
    QT_MATCHFLAG_MATCHWRAP = 32,
    QT_MATCHFLAG_MATCHRECURSIVE = 64
} Qt__MatchFlag;

typedef enum {
    QT_WINDOWMODALITY_NONMODAL = 0,
    QT_WINDOWMODALITY_WINDOWMODAL = 1,
    QT_WINDOWMODALITY_APPLICATIONMODAL = 2
} Qt__WindowModality;

typedef enum {
    QT_TEXTINTERACTIONFLAG_NOTEXTINTERACTION = 0,
    QT_TEXTINTERACTIONFLAG_TEXTSELECTABLEBYMOUSE = 1,
    QT_TEXTINTERACTIONFLAG_TEXTSELECTABLEBYKEYBOARD = 2,
    QT_TEXTINTERACTIONFLAG_LINKSACCESSIBLEBYMOUSE = 4,
    QT_TEXTINTERACTIONFLAG_LINKSACCESSIBLEBYKEYBOARD = 8,
    QT_TEXTINTERACTIONFLAG_TEXTEDITABLE = 16,
    QT_TEXTINTERACTIONFLAG_TEXTEDITORINTERACTION = 19,
    QT_TEXTINTERACTIONFLAG_TEXTBROWSERINTERACTION = 13
} Qt__TextInteractionFlag;

typedef enum {
    QT_EVENTPRIORITY_HIGHEVENTPRIORITY = 1,
    QT_EVENTPRIORITY_NORMALEVENTPRIORITY = 0,
    QT_EVENTPRIORITY_LOWEVENTPRIORITY = -1
} Qt__EventPriority;

typedef enum {
    QT_SIZEHINT_MINIMUMSIZE = 0,
    QT_SIZEHINT_PREFERREDSIZE = 1,
    QT_SIZEHINT_MAXIMUMSIZE = 2,
    QT_SIZEHINT_MINIMUMDESCENT = 3,
    QT_SIZEHINT_NSIZEHINTS = 4
} Qt__SizeHint;

typedef enum {
    QT_WINDOWFRAMESECTION_NOSECTION = 0,
    QT_WINDOWFRAMESECTION_LEFTSECTION = 1,
    QT_WINDOWFRAMESECTION_TOPLEFTSECTION = 2,
    QT_WINDOWFRAMESECTION_TOPSECTION = 3,
    QT_WINDOWFRAMESECTION_TOPRIGHTSECTION = 4,
    QT_WINDOWFRAMESECTION_RIGHTSECTION = 5,
    QT_WINDOWFRAMESECTION_BOTTOMRIGHTSECTION = 6,
    QT_WINDOWFRAMESECTION_BOTTOMSECTION = 7,
    QT_WINDOWFRAMESECTION_BOTTOMLEFTSECTION = 8,
    QT_WINDOWFRAMESECTION_TITLEBARAREA = 9
} Qt__WindowFrameSection;

typedef enum {
    QT_INITIALIZATION_UNINITIALIZED = 0
} Qt__Initialization;

typedef enum {
    QT_COORDINATESYSTEM_DEVICECOORDINATES = 0,
    QT_COORDINATESYSTEM_LOGICALCOORDINATES = 1
} Qt__CoordinateSystem;

typedef enum {
    QT_TOUCHPOINTSTATE_TOUCHPOINTUNKNOWNSTATE = 0,
    QT_TOUCHPOINTSTATE_TOUCHPOINTPRESSED = 1,
    QT_TOUCHPOINTSTATE_TOUCHPOINTMOVED = 2,
    QT_TOUCHPOINTSTATE_TOUCHPOINTSTATIONARY = 4,
    QT_TOUCHPOINTSTATE_TOUCHPOINTRELEASED = 8
} Qt__TouchPointState;

typedef enum {
    QT_GESTURESTATE_NOGESTURE = 0,
    QT_GESTURESTATE_GESTURESTARTED = 1,
    QT_GESTURESTATE_GESTUREUPDATED = 2,
    QT_GESTURESTATE_GESTUREFINISHED = 3,
    QT_GESTURESTATE_GESTURECANCELED = 4
} Qt__GestureState;

typedef enum {
    QT_GESTURETYPE_TAPGESTURE = 1,
    QT_GESTURETYPE_TAPANDHOLDGESTURE = 2,
    QT_GESTURETYPE_PANGESTURE = 3,
    QT_GESTURETYPE_PINCHGESTURE = 4,
    QT_GESTURETYPE_SWIPEGESTURE = 5,
    QT_GESTURETYPE_CUSTOMGESTURE = 256,
    QT_GESTURETYPE_LASTGESTURETYPE = 4294967295
} Qt__GestureType;

typedef enum {
    QT_GESTUREFLAG_DONTSTARTGESTUREONCHILDREN = 1,
    QT_GESTUREFLAG_RECEIVEPARTIALGESTURES = 2,
    QT_GESTUREFLAG_IGNOREDGESTURESPROPAGATETOPARENT = 4
} Qt__GestureFlag;

typedef enum {
    QT_NATIVEGESTURETYPE_BEGINNATIVEGESTURE = 0,
    QT_NATIVEGESTURETYPE_ENDNATIVEGESTURE = 1,
    QT_NATIVEGESTURETYPE_PANNATIVEGESTURE = 2,
    QT_NATIVEGESTURETYPE_ZOOMNATIVEGESTURE = 3,
    QT_NATIVEGESTURETYPE_SMARTZOOMNATIVEGESTURE = 4,
    QT_NATIVEGESTURETYPE_ROTATENATIVEGESTURE = 5,
    QT_NATIVEGESTURETYPE_SWIPENATIVEGESTURE = 6
} Qt__NativeGestureType;

typedef enum {
    QT_NAVIGATIONMODE_NAVIGATIONMODENONE = 0,
    QT_NAVIGATIONMODE_NAVIGATIONMODEKEYPADTABORDER = 1,
    QT_NAVIGATIONMODE_NAVIGATIONMODEKEYPADDIRECTIONAL = 2,
    QT_NAVIGATIONMODE_NAVIGATIONMODECURSORAUTO = 3,
    QT_NAVIGATIONMODE_NAVIGATIONMODECURSORFORCEVISIBLE = 4
} Qt__NavigationMode;

typedef enum {
    QT_CURSORMOVESTYLE_LOGICALMOVESTYLE = 0,
    QT_CURSORMOVESTYLE_VISUALMOVESTYLE = 1
} Qt__CursorMoveStyle;

typedef enum {
    QT_TIMERTYPE_PRECISETIMER = 0,
    QT_TIMERTYPE_COARSETIMER = 1,
    QT_TIMERTYPE_VERYCOARSETIMER = 2
} Qt__TimerType;

typedef enum {
    QT_TIMERID_INVALID = 0
} Qt__TimerId;

typedef enum {
    QT_SCROLLPHASE_NOSCROLLPHASE = 0,
    QT_SCROLLPHASE_SCROLLBEGIN = 1,
    QT_SCROLLPHASE_SCROLLUPDATE = 2,
    QT_SCROLLPHASE_SCROLLEND = 3,
    QT_SCROLLPHASE_SCROLLMOMENTUM = 4
} Qt__ScrollPhase;

typedef enum {
    QT_MOUSEEVENTSOURCE_MOUSEEVENTNOTSYNTHESIZED = 0,
    QT_MOUSEEVENTSOURCE_MOUSEEVENTSYNTHESIZEDBYSYSTEM = 1,
    QT_MOUSEEVENTSOURCE_MOUSEEVENTSYNTHESIZEDBYQT = 2,
    QT_MOUSEEVENTSOURCE_MOUSEEVENTSYNTHESIZEDBYAPPLICATION = 3
} Qt__MouseEventSource;

typedef enum {
    QT_MOUSEEVENTFLAG_NOMOUSEEVENTFLAG = 0,
    QT_MOUSEEVENTFLAG_MOUSEEVENTCREATEDDOUBLECLICK = 1,
    QT_MOUSEEVENTFLAG_MOUSEEVENTFLAGMASK = 255
} Qt__MouseEventFlag;

typedef enum {
    QT_CHECKSUMTYPE_CHECKSUMISO3309 = 0,
    QT_CHECKSUMTYPE_CHECKSUMITUV41 = 1
} Qt__ChecksumType;

typedef enum {
    QT_HIGHDPISCALEFACTORROUNDINGPOLICY_UNSET = 0,
    QT_HIGHDPISCALEFACTORROUNDINGPOLICY_ROUND = 1,
    QT_HIGHDPISCALEFACTORROUNDINGPOLICY_CEIL = 2,
    QT_HIGHDPISCALEFACTORROUNDINGPOLICY_FLOOR = 3,
    QT_HIGHDPISCALEFACTORROUNDINGPOLICY_ROUNDPREFERFLOOR = 4,
    QT_HIGHDPISCALEFACTORROUNDINGPOLICY_PASSTHROUGH = 5
} Qt__HighDpiScaleFactorRoundingPolicy;

typedef enum {
    QT_PERMISSIONSTATUS_UNDETERMINED = 0,
    QT_PERMISSIONSTATUS_GRANTED = 1,
    QT_PERMISSIONSTATUS_DENIED = 2
} Qt__PermissionStatus;

typedef enum {
    QT_RETURNBYVALUECONSTANT_RETURNBYVALUE = 0
} Qt__ReturnByValueConstant;

typedef enum {
    QINTERNAL_PAINTDEVICEFLAGS_UNKNOWNDEVICE = 0,
    QINTERNAL_PAINTDEVICEFLAGS_WIDGET = 1,
    QINTERNAL_PAINTDEVICEFLAGS_PIXMAP = 2,
    QINTERNAL_PAINTDEVICEFLAGS_IMAGE = 3,
    QINTERNAL_PAINTDEVICEFLAGS_PRINTER = 4,
    QINTERNAL_PAINTDEVICEFLAGS_PICTURE = 5,
    QINTERNAL_PAINTDEVICEFLAGS_PBUFFER = 6,
    QINTERNAL_PAINTDEVICEFLAGS_FRAMEBUFFEROBJECT = 7,
    QINTERNAL_PAINTDEVICEFLAGS_CUSTOMRASTER = 8,
    QINTERNAL_PAINTDEVICEFLAGS_PAINTBUFFER = 10,
    QINTERNAL_PAINTDEVICEFLAGS_OPENGL = 11
} QInternal__PaintDeviceFlags;

typedef enum {
    QINTERNAL_RELAYOUTTYPE_RELAYOUTNORMAL = 0,
    QINTERNAL_RELAYOUTTYPE_RELAYOUTDRAGGING = 1,
    QINTERNAL_RELAYOUTTYPE_RELAYOUTDROPPED = 2
} QInternal__RelayoutType;

typedef enum {
    QINTERNAL_DOCKPOSITION_LEFTDOCK = 0,
    QINTERNAL_DOCKPOSITION_RIGHTDOCK = 1,
    QINTERNAL_DOCKPOSITION_TOPDOCK = 2,
    QINTERNAL_DOCKPOSITION_BOTTOMDOCK = 3,
    QINTERNAL_DOCKPOSITION_DOCKCOUNT = 4
} QInternal__DockPosition;

typedef enum {
    QINTERNAL_CALLBACK_EVENTNOTIFYCALLBACK = 0,
    QINTERNAL_CALLBACK_LASTCALLBACK = 1
} QInternal__Callback;

#endif
