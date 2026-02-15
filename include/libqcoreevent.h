#pragma once
#ifndef SRC_QT6C_LIBQCOREEVENT_H
#define SRC_QT6C_LIBQCOREEVENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html)

/// q_event_new constructs a new QEvent object.
///
/// @param type enum QEvent__Type
///
QEvent* q_event_new(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QEvent*
///
/// @return enum QEvent__Type
///
int32_t q_event_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QEvent*
///
bool q_event_spontaneous(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// @param self QEvent*
/// @param accepted bool
///
void q_event_set_accepted(void* self, bool accepted);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Allows for overriding the related default method
///
/// @param self QEvent*
/// @param callback void func(QEvent* self, bool accepted)
///
void q_event_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Base class method implementation
///
/// @param self QEvent*
/// @param accepted bool
///
void q_event_qbase_set_accepted(void* self, bool accepted);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QEvent*
///
bool q_event_is_accepted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QEvent*
///
void q_event_accept(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QEvent*
///
void q_event_ignore(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QEvent*
///
bool q_event_is_input_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QEvent*
///
bool q_event_is_pointer_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QEvent*
///
bool q_event_is_single_point_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_event_register_event_type();

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// @param self QEvent*
///
QEvent* q_event_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QEvent*
/// @param callback QEvent* func()
///
void q_event_on_clone(void* self, QEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Base class method implementation
///
/// @param self QEvent*
///
QEvent* q_event_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_event_register_event_type1(int hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#dtor.QEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QEvent*
///
void q_event_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html)

/// q_timerevent_new constructs a new QTimerEvent object.
///
/// @param timerId int
///
QTimerEvent* q_timerevent_new(int timerId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html)

/// q_timerevent_new2 constructs a new QTimerEvent object.
///
/// @param timerId enum Qt__TimerId
///
QTimerEvent* q_timerevent_new2(int32_t timerId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#clone)
///
/// @param self QTimerEvent*
///
QTimerEvent* q_timerevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QTimerEvent*
/// @param callback QTimerEvent* func()
///
void q_timerevent_on_clone(void* self, QTimerEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#clone)
///
/// Base class method implementation
///
/// @param self QTimerEvent*
///
QTimerEvent* q_timerevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#timerId)
///
/// @param self QTimerEvent*
///
int32_t q_timerevent_timer_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#id)
///
/// @param self QTimerEvent*
///
/// @return enum Qt__TimerId
///
int32_t q_timerevent_id(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QTimerEvent*
///
/// @return enum QEvent__Type
///
int32_t q_timerevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QTimerEvent*
///
bool q_timerevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QTimerEvent*
///
bool q_timerevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QTimerEvent*
///
void q_timerevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QTimerEvent*
///
void q_timerevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QTimerEvent*
///
bool q_timerevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QTimerEvent*
///
bool q_timerevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QTimerEvent*
///
bool q_timerevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_timerevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_timerevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTimerEvent*
/// @param accepted bool
///
void q_timerevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTimerEvent*
/// @param accepted bool
///
void q_timerevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTimerEvent*
/// @param callback void func(QTimerEvent* self, bool accepted)
///
void q_timerevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtimerevent.html#dtor.QTimerEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QTimerEvent*
///
void q_timerevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html)

/// q_childevent_new constructs a new QChildEvent object.
///
/// @param type enum QEvent__Type
/// @param child QObject*
///
QChildEvent* q_childevent_new(int32_t type, void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#clone)
///
/// @param self QChildEvent*
///
QChildEvent* q_childevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QChildEvent*
/// @param callback QChildEvent* func()
///
void q_childevent_on_clone(void* self, QChildEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#clone)
///
/// Base class method implementation
///
/// @param self QChildEvent*
///
QChildEvent* q_childevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#child)
///
/// @param self QChildEvent*
///
QObject* q_childevent_child(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#added)
///
/// @param self QChildEvent*
///
bool q_childevent_added(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#polished)
///
/// @param self QChildEvent*
///
bool q_childevent_polished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#removed)
///
/// @param self QChildEvent*
///
bool q_childevent_removed(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QChildEvent*
///
/// @return enum QEvent__Type
///
int32_t q_childevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QChildEvent*
///
bool q_childevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QChildEvent*
///
bool q_childevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QChildEvent*
///
void q_childevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QChildEvent*
///
void q_childevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QChildEvent*
///
bool q_childevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QChildEvent*
///
bool q_childevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QChildEvent*
///
bool q_childevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_childevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_childevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChildEvent*
/// @param accepted bool
///
void q_childevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChildEvent*
/// @param accepted bool
///
void q_childevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChildEvent*
/// @param callback void func(QChildEvent* self, bool accepted)
///
void q_childevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qchildevent.html#dtor.QChildEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QChildEvent*
///
void q_childevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html)

/// q_dynamicpropertychangeevent_new constructs a new QDynamicPropertyChangeEvent object.
///
/// @param name char*
///
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_new(char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
///
/// @param self QDynamicPropertyChangeEvent*
///
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QDynamicPropertyChangeEvent*
/// @param callback QDynamicPropertyChangeEvent* func()
///
void q_dynamicpropertychangeevent_on_clone(void* self, QDynamicPropertyChangeEvent* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
///
/// Base class method implementation
///
/// @param self QDynamicPropertyChangeEvent*
///
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#propertyName)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDynamicPropertyChangeEvent*
///
char* q_dynamicpropertychangeevent_property_name(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QDynamicPropertyChangeEvent*
///
/// @return enum QEvent__Type
///
int32_t q_dynamicpropertychangeevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QDynamicPropertyChangeEvent*
///
bool q_dynamicpropertychangeevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QDynamicPropertyChangeEvent*
///
bool q_dynamicpropertychangeevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QDynamicPropertyChangeEvent*
///
void q_dynamicpropertychangeevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QDynamicPropertyChangeEvent*
///
void q_dynamicpropertychangeevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QDynamicPropertyChangeEvent*
///
bool q_dynamicpropertychangeevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QDynamicPropertyChangeEvent*
///
bool q_dynamicpropertychangeevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QDynamicPropertyChangeEvent*
///
bool q_dynamicpropertychangeevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_dynamicpropertychangeevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_dynamicpropertychangeevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDynamicPropertyChangeEvent*
/// @param accepted bool
///
void q_dynamicpropertychangeevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDynamicPropertyChangeEvent*
/// @param accepted bool
///
void q_dynamicpropertychangeevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDynamicPropertyChangeEvent*
/// @param callback void func(QDynamicPropertyChangeEvent* self, bool accepted)
///
void q_dynamicpropertychangeevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#dtor.QDynamicPropertyChangeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QDynamicPropertyChangeEvent*
///
void q_dynamicpropertychangeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcoreevent.html#public-types)

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
    QEVENT_TYPE_DEVICEPIXELRATIOCHANGE = 222,
    QEVENT_TYPE_CHILDWINDOWADDED = 223,
    QEVENT_TYPE_CHILDWINDOWREMOVED = 224,
    QEVENT_TYPE_PARENTWINDOWABOUTTOCHANGE = 225,
    QEVENT_TYPE_PARENTWINDOWCHANGE = 226,
    QEVENT_TYPE_USER = 1000,
    QEVENT_TYPE_MAXUSER = 65535
} QEvent__Type;

#endif
