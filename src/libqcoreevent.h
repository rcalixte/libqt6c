#pragma once
#ifndef SRCQT6C_LIBQCOREEVENT_H
#define SRCQT6C_LIBQCOREEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqobject.h"

QEvent* q_event_new(int64_t typeVal);
int64_t q_event_type(void* self);
bool q_event_spontaneous(void* self);
void q_event_set_accepted(void* self, bool accepted);
void q_event_on_set_accepted(void* self, void (*slot)(void*, bool));
void q_event_qbase_set_accepted(void* self, bool accepted);
bool q_event_is_accepted(void* self);
void q_event_accept(void* self);
void q_event_ignore(void* self);
bool q_event_is_input_event(void* self);
bool q_event_is_pointer_event(void* self);
bool q_event_is_single_point_event(void* self);
int32_t q_event_register_event_type();
QEvent* q_event_clone(void* self);
void q_event_on_clone(void* self, QEvent* (*slot)());
QEvent* q_event_qbase_clone(void* self);
int32_t q_event_register_event_type1(int hint);
void q_event_delete(void* self);

QTimerEvent* q_timerevent_new(int timerId);
QTimerEvent* q_timerevent_clone(void* self);
void q_timerevent_on_clone(void* self, QTimerEvent* (*slot)());
QTimerEvent* q_timerevent_qbase_clone(void* self);
int32_t q_timerevent_timer_id(void* self);
int64_t q_timerevent_type(void* self);
bool q_timerevent_spontaneous(void* self);
bool q_timerevent_is_accepted(void* self);
void q_timerevent_accept(void* self);
void q_timerevent_ignore(void* self);
bool q_timerevent_is_input_event(void* self);
bool q_timerevent_is_pointer_event(void* self);
bool q_timerevent_is_single_point_event(void* self);
int32_t q_timerevent_register_event_type();
int32_t q_timerevent_register_event_type1(int hint);
void q_timerevent_set_accepted(void* self, bool accepted);
void q_timerevent_qbase_set_accepted(void* self, bool accepted);
void q_timerevent_on_set_accepted(void* self, void (*slot)(void*, bool));
void q_timerevent_delete(void* self);

QChildEvent* q_childevent_new(int64_t typeVal, void* child);
QChildEvent* q_childevent_clone(void* self);
void q_childevent_on_clone(void* self, QChildEvent* (*slot)());
QChildEvent* q_childevent_qbase_clone(void* self);
QObject* q_childevent_child(void* self);
bool q_childevent_added(void* self);
bool q_childevent_polished(void* self);
bool q_childevent_removed(void* self);
int64_t q_childevent_type(void* self);
bool q_childevent_spontaneous(void* self);
bool q_childevent_is_accepted(void* self);
void q_childevent_accept(void* self);
void q_childevent_ignore(void* self);
bool q_childevent_is_input_event(void* self);
bool q_childevent_is_pointer_event(void* self);
bool q_childevent_is_single_point_event(void* self);
int32_t q_childevent_register_event_type();
int32_t q_childevent_register_event_type1(int hint);
void q_childevent_set_accepted(void* self, bool accepted);
void q_childevent_qbase_set_accepted(void* self, bool accepted);
void q_childevent_on_set_accepted(void* self, void (*slot)(void*, bool));
void q_childevent_delete(void* self);

QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_new(const char* name);
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_clone(void* self);
void q_dynamicpropertychangeevent_on_clone(void* self, QDynamicPropertyChangeEvent* (*slot)());
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_qbase_clone(void* self);
char* q_dynamicpropertychangeevent_property_name(void* self);
int64_t q_dynamicpropertychangeevent_type(void* self);
bool q_dynamicpropertychangeevent_spontaneous(void* self);
bool q_dynamicpropertychangeevent_is_accepted(void* self);
void q_dynamicpropertychangeevent_accept(void* self);
void q_dynamicpropertychangeevent_ignore(void* self);
bool q_dynamicpropertychangeevent_is_input_event(void* self);
bool q_dynamicpropertychangeevent_is_pointer_event(void* self);
bool q_dynamicpropertychangeevent_is_single_point_event(void* self);
int32_t q_dynamicpropertychangeevent_register_event_type();
int32_t q_dynamicpropertychangeevent_register_event_type1(int hint);
void q_dynamicpropertychangeevent_set_accepted(void* self, bool accepted);
void q_dynamicpropertychangeevent_qbase_set_accepted(void* self, bool accepted);
void q_dynamicpropertychangeevent_on_set_accepted(void* self, void (*slot)(void*, bool));
void q_dynamicpropertychangeevent_delete(void* self);

/// https://doc.qt.io/qt-6/qcoreevent.html#types

typedef enum {
    QEVENT_TYPE_NONE = 0,
    QEVENT_TYPE_TIMER = 1,
    QEVENT_TYPE_MOUSEBUTTONPRESS = 2,
    QEVENT_TYPE_MOUSEBUTTONRELEASE = 3,
    QEVENT_TYPE_MOUSEBUTTONDBLCLICK = 4,
    QEVENT_TYPE_MOUSEMOVE = 5,
    QEVENT_TYPE_KEYPRESS = 6,
    QEVENT_TYPE_KEYRELEASE = 7,
    QEVENT_TYPE_FOCUSIN = 8,
    QEVENT_TYPE_FOCUSOUT = 9,
    QEVENT_TYPE_FOCUSABOUTTOCHANGE = 23,
    QEVENT_TYPE_ENTER = 10,
    QEVENT_TYPE_LEAVE = 11,
    QEVENT_TYPE_PAINT = 12,
    QEVENT_TYPE_MOVE = 13,
    QEVENT_TYPE_RESIZE = 14,
    QEVENT_TYPE_CREATE = 15,
    QEVENT_TYPE_DESTROY = 16,
    QEVENT_TYPE_SHOW = 17,
    QEVENT_TYPE_HIDE = 18,
    QEVENT_TYPE_CLOSE = 19,
    QEVENT_TYPE_QUIT = 20,
    QEVENT_TYPE_PARENTCHANGE = 21,
    QEVENT_TYPE_PARENTABOUTTOCHANGE = 131,
    QEVENT_TYPE_THREADCHANGE = 22,
    QEVENT_TYPE_WINDOWACTIVATE = 24,
    QEVENT_TYPE_WINDOWDEACTIVATE = 25,
    QEVENT_TYPE_SHOWTOPARENT = 26,
    QEVENT_TYPE_HIDETOPARENT = 27,
    QEVENT_TYPE_WHEEL = 31,
    QEVENT_TYPE_WINDOWTITLECHANGE = 33,
    QEVENT_TYPE_WINDOWICONCHANGE = 34,
    QEVENT_TYPE_APPLICATIONWINDOWICONCHANGE = 35,
    QEVENT_TYPE_APPLICATIONFONTCHANGE = 36,
    QEVENT_TYPE_APPLICATIONLAYOUTDIRECTIONCHANGE = 37,
    QEVENT_TYPE_APPLICATIONPALETTECHANGE = 38,
    QEVENT_TYPE_PALETTECHANGE = 39,
    QEVENT_TYPE_CLIPBOARD = 40,
    QEVENT_TYPE_SPEECH = 42,
    QEVENT_TYPE_METACALL = 43,
    QEVENT_TYPE_SOCKACT = 50,
    QEVENT_TYPE_WINEVENTACT = 132,
    QEVENT_TYPE_DEFERREDDELETE = 52,
    QEVENT_TYPE_DRAGENTER = 60,
    QEVENT_TYPE_DRAGMOVE = 61,
    QEVENT_TYPE_DRAGLEAVE = 62,
    QEVENT_TYPE_DROP = 63,
    QEVENT_TYPE_DRAGRESPONSE = 64,
    QEVENT_TYPE_CHILDADDED = 68,
    QEVENT_TYPE_CHILDPOLISHED = 69,
    QEVENT_TYPE_CHILDREMOVED = 71,
    QEVENT_TYPE_SHOWWINDOWREQUEST = 73,
    QEVENT_TYPE_POLISHREQUEST = 74,
    QEVENT_TYPE_POLISH = 75,
    QEVENT_TYPE_LAYOUTREQUEST = 76,
    QEVENT_TYPE_UPDATEREQUEST = 77,
    QEVENT_TYPE_UPDATELATER = 78,
    QEVENT_TYPE_EMBEDDINGCONTROL = 79,
    QEVENT_TYPE_ACTIVATECONTROL = 80,
    QEVENT_TYPE_DEACTIVATECONTROL = 81,
    QEVENT_TYPE_CONTEXTMENU = 82,
    QEVENT_TYPE_INPUTMETHOD = 83,
    QEVENT_TYPE_TABLETMOVE = 87,
    QEVENT_TYPE_LOCALECHANGE = 88,
    QEVENT_TYPE_LANGUAGECHANGE = 89,
    QEVENT_TYPE_LAYOUTDIRECTIONCHANGE = 90,
    QEVENT_TYPE_STYLE = 91,
    QEVENT_TYPE_TABLETPRESS = 92,
    QEVENT_TYPE_TABLETRELEASE = 93,
    QEVENT_TYPE_OKREQUEST = 94,
    QEVENT_TYPE_HELPREQUEST = 95,
    QEVENT_TYPE_ICONDRAG = 96,
    QEVENT_TYPE_FONTCHANGE = 97,
    QEVENT_TYPE_ENABLEDCHANGE = 98,
    QEVENT_TYPE_ACTIVATIONCHANGE = 99,
    QEVENT_TYPE_STYLECHANGE = 100,
    QEVENT_TYPE_ICONTEXTCHANGE = 101,
    QEVENT_TYPE_MODIFIEDCHANGE = 102,
    QEVENT_TYPE_MOUSETRACKINGCHANGE = 109,
    QEVENT_TYPE_WINDOWBLOCKED = 103,
    QEVENT_TYPE_WINDOWUNBLOCKED = 104,
    QEVENT_TYPE_WINDOWSTATECHANGE = 105,
    QEVENT_TYPE_READONLYCHANGE = 106,
    QEVENT_TYPE_TOOLTIP = 110,
    QEVENT_TYPE_WHATSTHIS = 111,
    QEVENT_TYPE_STATUSTIP = 112,
    QEVENT_TYPE_ACTIONCHANGED = 113,
    QEVENT_TYPE_ACTIONADDED = 114,
    QEVENT_TYPE_ACTIONREMOVED = 115,
    QEVENT_TYPE_FILEOPEN = 116,
    QEVENT_TYPE_SHORTCUT = 117,
    QEVENT_TYPE_SHORTCUTOVERRIDE = 51,
    QEVENT_TYPE_WHATSTHISCLICKED = 118,
    QEVENT_TYPE_TOOLBARCHANGE = 120,
    QEVENT_TYPE_APPLICATIONACTIVATE = 121,
    QEVENT_TYPE_APPLICATIONACTIVATED = 121,
    QEVENT_TYPE_APPLICATIONDEACTIVATE = 122,
    QEVENT_TYPE_APPLICATIONDEACTIVATED = 122,
    QEVENT_TYPE_QUERYWHATSTHIS = 123,
    QEVENT_TYPE_ENTERWHATSTHISMODE = 124,
    QEVENT_TYPE_LEAVEWHATSTHISMODE = 125,
    QEVENT_TYPE_ZORDERCHANGE = 126,
    QEVENT_TYPE_HOVERENTER = 127,
    QEVENT_TYPE_HOVERLEAVE = 128,
    QEVENT_TYPE_HOVERMOVE = 129,
    QEVENT_TYPE_ACCEPTDROPSCHANGE = 152,
    QEVENT_TYPE_ZEROTIMEREVENT = 154,
    QEVENT_TYPE_GRAPHICSSCENEMOUSEMOVE = 155,
    QEVENT_TYPE_GRAPHICSSCENEMOUSEPRESS = 156,
    QEVENT_TYPE_GRAPHICSSCENEMOUSERELEASE = 157,
    QEVENT_TYPE_GRAPHICSSCENEMOUSEDOUBLECLICK = 158,
    QEVENT_TYPE_GRAPHICSSCENECONTEXTMENU = 159,
    QEVENT_TYPE_GRAPHICSSCENEHOVERENTER = 160,
    QEVENT_TYPE_GRAPHICSSCENEHOVERMOVE = 161,
    QEVENT_TYPE_GRAPHICSSCENEHOVERLEAVE = 162,
    QEVENT_TYPE_GRAPHICSSCENEHELP = 163,
    QEVENT_TYPE_GRAPHICSSCENEDRAGENTER = 164,
    QEVENT_TYPE_GRAPHICSSCENEDRAGMOVE = 165,
    QEVENT_TYPE_GRAPHICSSCENEDRAGLEAVE = 166,
    QEVENT_TYPE_GRAPHICSSCENEDROP = 167,
    QEVENT_TYPE_GRAPHICSSCENEWHEEL = 168,
    QEVENT_TYPE_GRAPHICSSCENELEAVE = 220,
    QEVENT_TYPE_KEYBOARDLAYOUTCHANGE = 169,
    QEVENT_TYPE_DYNAMICPROPERTYCHANGE = 170,
    QEVENT_TYPE_TABLETENTERPROXIMITY = 171,
    QEVENT_TYPE_TABLETLEAVEPROXIMITY = 172,
    QEVENT_TYPE_NONCLIENTAREAMOUSEMOVE = 173,
    QEVENT_TYPE_NONCLIENTAREAMOUSEBUTTONPRESS = 174,
    QEVENT_TYPE_NONCLIENTAREAMOUSEBUTTONRELEASE = 175,
    QEVENT_TYPE_NONCLIENTAREAMOUSEBUTTONDBLCLICK = 176,
    QEVENT_TYPE_MACSIZECHANGE = 177,
    QEVENT_TYPE_CONTENTSRECTCHANGE = 178,
    QEVENT_TYPE_MACGLWINDOWCHANGE = 179,
    QEVENT_TYPE_FUTURECALLOUT = 180,
    QEVENT_TYPE_GRAPHICSSCENERESIZE = 181,
    QEVENT_TYPE_GRAPHICSSCENEMOVE = 182,
    QEVENT_TYPE_CURSORCHANGE = 183,
    QEVENT_TYPE_TOOLTIPCHANGE = 184,
    QEVENT_TYPE_NETWORKREPLYUPDATED = 185,
    QEVENT_TYPE_GRABMOUSE = 186,
    QEVENT_TYPE_UNGRABMOUSE = 187,
    QEVENT_TYPE_GRABKEYBOARD = 188,
    QEVENT_TYPE_UNGRABKEYBOARD = 189,
    QEVENT_TYPE_STATEMACHINESIGNAL = 192,
    QEVENT_TYPE_STATEMACHINEWRAPPED = 193,
    QEVENT_TYPE_TOUCHBEGIN = 194,
    QEVENT_TYPE_TOUCHUPDATE = 195,
    QEVENT_TYPE_TOUCHEND = 196,
    QEVENT_TYPE_NATIVEGESTURE = 197,
    QEVENT_TYPE_REQUESTSOFTWAREINPUTPANEL = 199,
    QEVENT_TYPE_CLOSESOFTWAREINPUTPANEL = 200,
    QEVENT_TYPE_WINIDCHANGE = 203,
    QEVENT_TYPE_GESTURE = 198,
    QEVENT_TYPE_GESTUREOVERRIDE = 202,
    QEVENT_TYPE_SCROLLPREPARE = 204,
    QEVENT_TYPE_SCROLL = 205,
    QEVENT_TYPE_EXPOSE = 206,
    QEVENT_TYPE_INPUTMETHODQUERY = 207,
    QEVENT_TYPE_ORIENTATIONCHANGE = 208,
    QEVENT_TYPE_TOUCHCANCEL = 209,
    QEVENT_TYPE_THEMECHANGE = 210,
    QEVENT_TYPE_SOCKCLOSE = 211,
    QEVENT_TYPE_PLATFORMPANEL = 212,
    QEVENT_TYPE_STYLEANIMATIONUPDATE = 213,
    QEVENT_TYPE_APPLICATIONSTATECHANGE = 214,
    QEVENT_TYPE_WINDOWCHANGEINTERNAL = 215,
    QEVENT_TYPE_SCREENCHANGEINTERNAL = 216,
    QEVENT_TYPE_PLATFORMSURFACE = 217,
    QEVENT_TYPE_POINTER = 218,
    QEVENT_TYPE_TABLETTRACKINGCHANGE = 219,
    QEVENT_TYPE_WINDOWABOUTTOCHANGEINTERNAL = 221,
    QEVENT_TYPE_USER = 1000,
    QEVENT_TYPE_MAXUSER = 65535
} QEvent__Type;

#endif
