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

/// https://doc.qt.io/qt-6/qevent.html

/// q_event_new constructs a new QEvent object.
///
/// ``` enum QEvent__Type typeVal ```
QEvent* q_event_new(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QEvent* self ```
int64_t q_event_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QEvent* self ```
bool q_event_spontaneous(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// ``` QEvent* self, bool accepted ```
void q_event_set_accepted(void* self, bool accepted);

/// Allows for overriding the related default method
///
/// ``` QEvent* self, void (*slot)(QEvent*, bool) ```
void q_event_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QEvent* self, bool accepted ```
void q_event_qbase_set_accepted(void* self, bool accepted);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QEvent* self ```
bool q_event_is_accepted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QEvent* self ```
void q_event_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QEvent* self ```
void q_event_ignore(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QEvent* self ```
bool q_event_is_input_event(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QEvent* self ```
bool q_event_is_pointer_event(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QEvent* self ```
bool q_event_is_single_point_event(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_event_register_event_type();

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// ``` QEvent* self ```
QEvent* q_event_clone(void* self);

/// Allows for overriding the related default method
///
/// ``` QEvent* self, QEvent* (*slot)() ```
void q_event_on_clone(void* self, QEvent* (*slot)());

/// Base class method implementation
///
/// ``` QEvent* self ```
QEvent* q_event_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_event_register_event_type1(int hint);

/// Delete this object from C++ memory.
///
/// ``` QEvent* self ```
void q_event_delete(void* self);

/// https://doc.qt.io/qt-6/qtimerevent.html

/// q_timerevent_new constructs a new QTimerEvent object.
///
/// ``` int timerId ```
QTimerEvent* q_timerevent_new(int timerId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimerevent.html#clone)
///
/// ``` QTimerEvent* self ```
QTimerEvent* q_timerevent_clone(void* self);

/// Allows for overriding the related default method
///
/// ``` QTimerEvent* self, QTimerEvent* (*slot)() ```
void q_timerevent_on_clone(void* self, QTimerEvent* (*slot)());

/// Base class method implementation
///
/// ``` QTimerEvent* self ```
QTimerEvent* q_timerevent_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtimerevent.html#timerId)
///
/// ``` QTimerEvent* self ```
int32_t q_timerevent_timer_id(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QTimerEvent* self ```
int64_t q_timerevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QTimerEvent* self ```
bool q_timerevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QTimerEvent* self ```
bool q_timerevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QTimerEvent* self ```
void q_timerevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QTimerEvent* self ```
void q_timerevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QTimerEvent* self ```
bool q_timerevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QTimerEvent* self ```
bool q_timerevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QTimerEvent* self ```
bool q_timerevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_timerevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_timerevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimerEvent* self, bool accepted ```
void q_timerevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimerEvent* self, bool accepted ```
void q_timerevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimerEvent* self, void (*slot)(QTimerEvent*, bool) ```
void q_timerevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Delete this object from C++ memory.
///
/// ``` QTimerEvent* self ```
void q_timerevent_delete(void* self);

/// https://doc.qt.io/qt-6/qchildevent.html

/// q_childevent_new constructs a new QChildEvent object.
///
/// ``` enum QEvent__Type typeVal, QObject* child ```
QChildEvent* q_childevent_new(int64_t typeVal, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#clone)
///
/// ``` QChildEvent* self ```
QChildEvent* q_childevent_clone(void* self);

/// Allows for overriding the related default method
///
/// ``` QChildEvent* self, QChildEvent* (*slot)() ```
void q_childevent_on_clone(void* self, QChildEvent* (*slot)());

/// Base class method implementation
///
/// ``` QChildEvent* self ```
QChildEvent* q_childevent_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#child)
///
/// ``` QChildEvent* self ```
QObject* q_childevent_child(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#added)
///
/// ``` QChildEvent* self ```
bool q_childevent_added(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#polished)
///
/// ``` QChildEvent* self ```
bool q_childevent_polished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#removed)
///
/// ``` QChildEvent* self ```
bool q_childevent_removed(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QChildEvent* self ```
int64_t q_childevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QChildEvent* self ```
bool q_childevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QChildEvent* self ```
bool q_childevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QChildEvent* self ```
void q_childevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QChildEvent* self ```
void q_childevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QChildEvent* self ```
bool q_childevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QChildEvent* self ```
bool q_childevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QChildEvent* self ```
bool q_childevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_childevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_childevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChildEvent* self, bool accepted ```
void q_childevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChildEvent* self, bool accepted ```
void q_childevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChildEvent* self, void (*slot)(QChildEvent*, bool) ```
void q_childevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Delete this object from C++ memory.
///
/// ``` QChildEvent* self ```
void q_childevent_delete(void* self);

/// https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html

/// q_dynamicpropertychangeevent_new constructs a new QDynamicPropertyChangeEvent object.
///
/// ``` const char* name ```
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_new(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
///
/// ``` QDynamicPropertyChangeEvent* self ```
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_clone(void* self);

/// Allows for overriding the related default method
///
/// ``` QDynamicPropertyChangeEvent* self, QDynamicPropertyChangeEvent* (*slot)() ```
void q_dynamicpropertychangeevent_on_clone(void* self, QDynamicPropertyChangeEvent* (*slot)());

/// Base class method implementation
///
/// ``` QDynamicPropertyChangeEvent* self ```
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#propertyName)
///
/// ``` QDynamicPropertyChangeEvent* self ```
char* q_dynamicpropertychangeevent_property_name(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QDynamicPropertyChangeEvent* self ```
int64_t q_dynamicpropertychangeevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QDynamicPropertyChangeEvent* self ```
bool q_dynamicpropertychangeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QDynamicPropertyChangeEvent* self ```
bool q_dynamicpropertychangeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QDynamicPropertyChangeEvent* self ```
void q_dynamicpropertychangeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QDynamicPropertyChangeEvent* self ```
void q_dynamicpropertychangeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QDynamicPropertyChangeEvent* self ```
bool q_dynamicpropertychangeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QDynamicPropertyChangeEvent* self ```
bool q_dynamicpropertychangeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QDynamicPropertyChangeEvent* self ```
bool q_dynamicpropertychangeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_dynamicpropertychangeevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_dynamicpropertychangeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDynamicPropertyChangeEvent* self, bool accepted ```
void q_dynamicpropertychangeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDynamicPropertyChangeEvent* self, bool accepted ```
void q_dynamicpropertychangeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDynamicPropertyChangeEvent* self, void (*slot)(QDynamicPropertyChangeEvent*, bool) ```
void q_dynamicpropertychangeevent_on_set_accepted(void* self, void (*slot)(void*, bool));

/// Delete this object from C++ memory.
///
/// ``` QDynamicPropertyChangeEvent* self ```
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
