#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSSCENEEVENT_H
#define SRCQT6C_LIBQGRAPHICSSCENEEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqmimedata.h"
#include "libqpoint.h"
#include "libqsize.h"
#include "libqwidget.h"

QGraphicsSceneEvent* q_graphicssceneevent_new(int64_t typeVal);
QWidget* q_graphicssceneevent_widget(void* self);
void q_graphicssceneevent_set_widget(void* self, void* widget);
uint64_t q_graphicssceneevent_timestamp(void* self);
void q_graphicssceneevent_set_timestamp(void* self, uint64_t ts);
int64_t q_graphicssceneevent_type(void* self);
bool q_graphicssceneevent_spontaneous(void* self);
bool q_graphicssceneevent_is_accepted(void* self);
void q_graphicssceneevent_accept(void* self);
void q_graphicssceneevent_ignore(void* self);
bool q_graphicssceneevent_is_input_event(void* self);
bool q_graphicssceneevent_is_pointer_event(void* self);
bool q_graphicssceneevent_is_single_point_event(void* self);
int32_t q_graphicssceneevent_register_event_type();
int32_t q_graphicssceneevent_register_event_type1(int hint);
void q_graphicssceneevent_set_accepted(void* self, bool accepted);
void q_graphicssceneevent_qbase_set_accepted(void* self, bool accepted);
void q_graphicssceneevent_on_set_accepted(void* self, void (*slot)(void*, bool));
QEvent* q_graphicssceneevent_clone(void* self);
QEvent* q_graphicssceneevent_qbase_clone(void* self);
void q_graphicssceneevent_on_clone(void* self, QEvent* (*slot)());
void q_graphicssceneevent_delete(void* self);

QGraphicsSceneMouseEvent* q_graphicsscenemouseevent_new();
QGraphicsSceneMouseEvent* q_graphicsscenemouseevent_new2(int64_t typeVal);
QPointF* q_graphicsscenemouseevent_pos(void* self);
void q_graphicsscenemouseevent_set_pos(void* self, void* pos);
QPointF* q_graphicsscenemouseevent_scene_pos(void* self);
void q_graphicsscenemouseevent_set_scene_pos(void* self, void* pos);
QPoint* q_graphicsscenemouseevent_screen_pos(void* self);
void q_graphicsscenemouseevent_set_screen_pos(void* self, void* pos);
QPointF* q_graphicsscenemouseevent_button_down_pos(void* self, int64_t button);
void q_graphicsscenemouseevent_set_button_down_pos(void* self, int64_t button, void* pos);
QPointF* q_graphicsscenemouseevent_button_down_scene_pos(void* self, int64_t button);
void q_graphicsscenemouseevent_set_button_down_scene_pos(void* self, int64_t button, void* pos);
QPoint* q_graphicsscenemouseevent_button_down_screen_pos(void* self, int64_t button);
void q_graphicsscenemouseevent_set_button_down_screen_pos(void* self, int64_t button, void* pos);
QPointF* q_graphicsscenemouseevent_last_pos(void* self);
void q_graphicsscenemouseevent_set_last_pos(void* self, void* pos);
QPointF* q_graphicsscenemouseevent_last_scene_pos(void* self);
void q_graphicsscenemouseevent_set_last_scene_pos(void* self, void* pos);
QPoint* q_graphicsscenemouseevent_last_screen_pos(void* self);
void q_graphicsscenemouseevent_set_last_screen_pos(void* self, void* pos);
int64_t q_graphicsscenemouseevent_buttons(void* self);
void q_graphicsscenemouseevent_set_buttons(void* self, int64_t buttons);
int64_t q_graphicsscenemouseevent_button(void* self);
void q_graphicsscenemouseevent_set_button(void* self, int64_t button);
int64_t q_graphicsscenemouseevent_modifiers(void* self);
void q_graphicsscenemouseevent_set_modifiers(void* self, int64_t modifiers);
int64_t q_graphicsscenemouseevent_source(void* self);
void q_graphicsscenemouseevent_set_source(void* self, int64_t source);
int64_t q_graphicsscenemouseevent_flags(void* self);
void q_graphicsscenemouseevent_set_flags(void* self, int64_t flags);
QWidget* q_graphicsscenemouseevent_widget(void* self);
void q_graphicsscenemouseevent_set_widget(void* self, void* widget);
uint64_t q_graphicsscenemouseevent_timestamp(void* self);
void q_graphicsscenemouseevent_set_timestamp(void* self, uint64_t ts);
int64_t q_graphicsscenemouseevent_type(void* self);
bool q_graphicsscenemouseevent_spontaneous(void* self);
bool q_graphicsscenemouseevent_is_accepted(void* self);
void q_graphicsscenemouseevent_accept(void* self);
void q_graphicsscenemouseevent_ignore(void* self);
bool q_graphicsscenemouseevent_is_input_event(void* self);
bool q_graphicsscenemouseevent_is_pointer_event(void* self);
bool q_graphicsscenemouseevent_is_single_point_event(void* self);
int32_t q_graphicsscenemouseevent_register_event_type();
int32_t q_graphicsscenemouseevent_register_event_type1(int hint);
void q_graphicsscenemouseevent_set_accepted(void* self, bool accepted);
void q_graphicsscenemouseevent_qbase_set_accepted(void* self, bool accepted);
void q_graphicsscenemouseevent_on_set_accepted(void* self, void (*slot)(void*, bool));
QEvent* q_graphicsscenemouseevent_clone(void* self);
QEvent* q_graphicsscenemouseevent_qbase_clone(void* self);
void q_graphicsscenemouseevent_on_clone(void* self, QEvent* (*slot)());
void q_graphicsscenemouseevent_delete(void* self);

QGraphicsSceneWheelEvent* q_graphicsscenewheelevent_new();
QGraphicsSceneWheelEvent* q_graphicsscenewheelevent_new2(int64_t typeVal);
QPointF* q_graphicsscenewheelevent_pos(void* self);
void q_graphicsscenewheelevent_set_pos(void* self, void* pos);
QPointF* q_graphicsscenewheelevent_scene_pos(void* self);
void q_graphicsscenewheelevent_set_scene_pos(void* self, void* pos);
QPoint* q_graphicsscenewheelevent_screen_pos(void* self);
void q_graphicsscenewheelevent_set_screen_pos(void* self, void* pos);
int64_t q_graphicsscenewheelevent_buttons(void* self);
void q_graphicsscenewheelevent_set_buttons(void* self, int64_t buttons);
int64_t q_graphicsscenewheelevent_modifiers(void* self);
void q_graphicsscenewheelevent_set_modifiers(void* self, int64_t modifiers);
int32_t q_graphicsscenewheelevent_delta(void* self);
void q_graphicsscenewheelevent_set_delta(void* self, int delta);
int64_t q_graphicsscenewheelevent_orientation(void* self);
void q_graphicsscenewheelevent_set_orientation(void* self, int64_t orientation);
int64_t q_graphicsscenewheelevent_phase(void* self);
void q_graphicsscenewheelevent_set_phase(void* self, int64_t scrollPhase);
QPoint* q_graphicsscenewheelevent_pixel_delta(void* self);
void q_graphicsscenewheelevent_set_pixel_delta(void* self, void* delta);
bool q_graphicsscenewheelevent_is_inverted(void* self);
void q_graphicsscenewheelevent_set_inverted(void* self, bool inverted);
QWidget* q_graphicsscenewheelevent_widget(void* self);
void q_graphicsscenewheelevent_set_widget(void* self, void* widget);
uint64_t q_graphicsscenewheelevent_timestamp(void* self);
void q_graphicsscenewheelevent_set_timestamp(void* self, uint64_t ts);
int64_t q_graphicsscenewheelevent_type(void* self);
bool q_graphicsscenewheelevent_spontaneous(void* self);
bool q_graphicsscenewheelevent_is_accepted(void* self);
void q_graphicsscenewheelevent_accept(void* self);
void q_graphicsscenewheelevent_ignore(void* self);
bool q_graphicsscenewheelevent_is_input_event(void* self);
bool q_graphicsscenewheelevent_is_pointer_event(void* self);
bool q_graphicsscenewheelevent_is_single_point_event(void* self);
int32_t q_graphicsscenewheelevent_register_event_type();
int32_t q_graphicsscenewheelevent_register_event_type1(int hint);
void q_graphicsscenewheelevent_set_accepted(void* self, bool accepted);
void q_graphicsscenewheelevent_qbase_set_accepted(void* self, bool accepted);
void q_graphicsscenewheelevent_on_set_accepted(void* self, void (*slot)(void*, bool));
QEvent* q_graphicsscenewheelevent_clone(void* self);
QEvent* q_graphicsscenewheelevent_qbase_clone(void* self);
void q_graphicsscenewheelevent_on_clone(void* self, QEvent* (*slot)());
void q_graphicsscenewheelevent_delete(void* self);

QGraphicsSceneContextMenuEvent* q_graphicsscenecontextmenuevent_new();
QGraphicsSceneContextMenuEvent* q_graphicsscenecontextmenuevent_new2(int64_t typeVal);
QPointF* q_graphicsscenecontextmenuevent_pos(void* self);
void q_graphicsscenecontextmenuevent_set_pos(void* self, void* pos);
QPointF* q_graphicsscenecontextmenuevent_scene_pos(void* self);
void q_graphicsscenecontextmenuevent_set_scene_pos(void* self, void* pos);
QPoint* q_graphicsscenecontextmenuevent_screen_pos(void* self);
void q_graphicsscenecontextmenuevent_set_screen_pos(void* self, void* pos);
int64_t q_graphicsscenecontextmenuevent_modifiers(void* self);
void q_graphicsscenecontextmenuevent_set_modifiers(void* self, int64_t modifiers);
int64_t q_graphicsscenecontextmenuevent_reason(void* self);
void q_graphicsscenecontextmenuevent_set_reason(void* self, int64_t reason);
QWidget* q_graphicsscenecontextmenuevent_widget(void* self);
void q_graphicsscenecontextmenuevent_set_widget(void* self, void* widget);
uint64_t q_graphicsscenecontextmenuevent_timestamp(void* self);
void q_graphicsscenecontextmenuevent_set_timestamp(void* self, uint64_t ts);
int64_t q_graphicsscenecontextmenuevent_type(void* self);
bool q_graphicsscenecontextmenuevent_spontaneous(void* self);
bool q_graphicsscenecontextmenuevent_is_accepted(void* self);
void q_graphicsscenecontextmenuevent_accept(void* self);
void q_graphicsscenecontextmenuevent_ignore(void* self);
bool q_graphicsscenecontextmenuevent_is_input_event(void* self);
bool q_graphicsscenecontextmenuevent_is_pointer_event(void* self);
bool q_graphicsscenecontextmenuevent_is_single_point_event(void* self);
int32_t q_graphicsscenecontextmenuevent_register_event_type();
int32_t q_graphicsscenecontextmenuevent_register_event_type1(int hint);
void q_graphicsscenecontextmenuevent_set_accepted(void* self, bool accepted);
void q_graphicsscenecontextmenuevent_qbase_set_accepted(void* self, bool accepted);
void q_graphicsscenecontextmenuevent_on_set_accepted(void* self, void (*slot)(void*, bool));
QEvent* q_graphicsscenecontextmenuevent_clone(void* self);
QEvent* q_graphicsscenecontextmenuevent_qbase_clone(void* self);
void q_graphicsscenecontextmenuevent_on_clone(void* self, QEvent* (*slot)());
void q_graphicsscenecontextmenuevent_delete(void* self);

QGraphicsSceneHoverEvent* q_graphicsscenehoverevent_new();
QGraphicsSceneHoverEvent* q_graphicsscenehoverevent_new2(int64_t typeVal);
QPointF* q_graphicsscenehoverevent_pos(void* self);
void q_graphicsscenehoverevent_set_pos(void* self, void* pos);
QPointF* q_graphicsscenehoverevent_scene_pos(void* self);
void q_graphicsscenehoverevent_set_scene_pos(void* self, void* pos);
QPoint* q_graphicsscenehoverevent_screen_pos(void* self);
void q_graphicsscenehoverevent_set_screen_pos(void* self, void* pos);
QPointF* q_graphicsscenehoverevent_last_pos(void* self);
void q_graphicsscenehoverevent_set_last_pos(void* self, void* pos);
QPointF* q_graphicsscenehoverevent_last_scene_pos(void* self);
void q_graphicsscenehoverevent_set_last_scene_pos(void* self, void* pos);
QPoint* q_graphicsscenehoverevent_last_screen_pos(void* self);
void q_graphicsscenehoverevent_set_last_screen_pos(void* self, void* pos);
int64_t q_graphicsscenehoverevent_modifiers(void* self);
void q_graphicsscenehoverevent_set_modifiers(void* self, int64_t modifiers);
QWidget* q_graphicsscenehoverevent_widget(void* self);
void q_graphicsscenehoverevent_set_widget(void* self, void* widget);
uint64_t q_graphicsscenehoverevent_timestamp(void* self);
void q_graphicsscenehoverevent_set_timestamp(void* self, uint64_t ts);
int64_t q_graphicsscenehoverevent_type(void* self);
bool q_graphicsscenehoverevent_spontaneous(void* self);
bool q_graphicsscenehoverevent_is_accepted(void* self);
void q_graphicsscenehoverevent_accept(void* self);
void q_graphicsscenehoverevent_ignore(void* self);
bool q_graphicsscenehoverevent_is_input_event(void* self);
bool q_graphicsscenehoverevent_is_pointer_event(void* self);
bool q_graphicsscenehoverevent_is_single_point_event(void* self);
int32_t q_graphicsscenehoverevent_register_event_type();
int32_t q_graphicsscenehoverevent_register_event_type1(int hint);
void q_graphicsscenehoverevent_set_accepted(void* self, bool accepted);
void q_graphicsscenehoverevent_qbase_set_accepted(void* self, bool accepted);
void q_graphicsscenehoverevent_on_set_accepted(void* self, void (*slot)(void*, bool));
QEvent* q_graphicsscenehoverevent_clone(void* self);
QEvent* q_graphicsscenehoverevent_qbase_clone(void* self);
void q_graphicsscenehoverevent_on_clone(void* self, QEvent* (*slot)());
void q_graphicsscenehoverevent_delete(void* self);

QGraphicsSceneHelpEvent* q_graphicsscenehelpevent_new();
QGraphicsSceneHelpEvent* q_graphicsscenehelpevent_new2(int64_t typeVal);
QPointF* q_graphicsscenehelpevent_scene_pos(void* self);
void q_graphicsscenehelpevent_set_scene_pos(void* self, void* pos);
QPoint* q_graphicsscenehelpevent_screen_pos(void* self);
void q_graphicsscenehelpevent_set_screen_pos(void* self, void* pos);
QWidget* q_graphicsscenehelpevent_widget(void* self);
void q_graphicsscenehelpevent_set_widget(void* self, void* widget);
uint64_t q_graphicsscenehelpevent_timestamp(void* self);
void q_graphicsscenehelpevent_set_timestamp(void* self, uint64_t ts);
int64_t q_graphicsscenehelpevent_type(void* self);
bool q_graphicsscenehelpevent_spontaneous(void* self);
bool q_graphicsscenehelpevent_is_accepted(void* self);
void q_graphicsscenehelpevent_accept(void* self);
void q_graphicsscenehelpevent_ignore(void* self);
bool q_graphicsscenehelpevent_is_input_event(void* self);
bool q_graphicsscenehelpevent_is_pointer_event(void* self);
bool q_graphicsscenehelpevent_is_single_point_event(void* self);
int32_t q_graphicsscenehelpevent_register_event_type();
int32_t q_graphicsscenehelpevent_register_event_type1(int hint);
void q_graphicsscenehelpevent_set_accepted(void* self, bool accepted);
void q_graphicsscenehelpevent_qbase_set_accepted(void* self, bool accepted);
void q_graphicsscenehelpevent_on_set_accepted(void* self, void (*slot)(void*, bool));
QEvent* q_graphicsscenehelpevent_clone(void* self);
QEvent* q_graphicsscenehelpevent_qbase_clone(void* self);
void q_graphicsscenehelpevent_on_clone(void* self, QEvent* (*slot)());
void q_graphicsscenehelpevent_delete(void* self);

QGraphicsSceneDragDropEvent* q_graphicsscenedragdropevent_new();
QGraphicsSceneDragDropEvent* q_graphicsscenedragdropevent_new2(int64_t typeVal);
QPointF* q_graphicsscenedragdropevent_pos(void* self);
void q_graphicsscenedragdropevent_set_pos(void* self, void* pos);
QPointF* q_graphicsscenedragdropevent_scene_pos(void* self);
void q_graphicsscenedragdropevent_set_scene_pos(void* self, void* pos);
QPoint* q_graphicsscenedragdropevent_screen_pos(void* self);
void q_graphicsscenedragdropevent_set_screen_pos(void* self, void* pos);
int64_t q_graphicsscenedragdropevent_buttons(void* self);
void q_graphicsscenedragdropevent_set_buttons(void* self, int64_t buttons);
int64_t q_graphicsscenedragdropevent_modifiers(void* self);
void q_graphicsscenedragdropevent_set_modifiers(void* self, int64_t modifiers);
int64_t q_graphicsscenedragdropevent_possible_actions(void* self);
void q_graphicsscenedragdropevent_set_possible_actions(void* self, int64_t actions);
int64_t q_graphicsscenedragdropevent_proposed_action(void* self);
void q_graphicsscenedragdropevent_set_proposed_action(void* self, int64_t action);
void q_graphicsscenedragdropevent_accept_proposed_action(void* self);
int64_t q_graphicsscenedragdropevent_drop_action(void* self);
void q_graphicsscenedragdropevent_set_drop_action(void* self, int64_t action);
QWidget* q_graphicsscenedragdropevent_source(void* self);
void q_graphicsscenedragdropevent_set_source(void* self, void* source);
QMimeData* q_graphicsscenedragdropevent_mime_data(void* self);
void q_graphicsscenedragdropevent_set_mime_data(void* self, void* data);
QWidget* q_graphicsscenedragdropevent_widget(void* self);
void q_graphicsscenedragdropevent_set_widget(void* self, void* widget);
uint64_t q_graphicsscenedragdropevent_timestamp(void* self);
void q_graphicsscenedragdropevent_set_timestamp(void* self, uint64_t ts);
int64_t q_graphicsscenedragdropevent_type(void* self);
bool q_graphicsscenedragdropevent_spontaneous(void* self);
bool q_graphicsscenedragdropevent_is_accepted(void* self);
void q_graphicsscenedragdropevent_accept(void* self);
void q_graphicsscenedragdropevent_ignore(void* self);
bool q_graphicsscenedragdropevent_is_input_event(void* self);
bool q_graphicsscenedragdropevent_is_pointer_event(void* self);
bool q_graphicsscenedragdropevent_is_single_point_event(void* self);
int32_t q_graphicsscenedragdropevent_register_event_type();
int32_t q_graphicsscenedragdropevent_register_event_type1(int hint);
void q_graphicsscenedragdropevent_set_accepted(void* self, bool accepted);
void q_graphicsscenedragdropevent_qbase_set_accepted(void* self, bool accepted);
void q_graphicsscenedragdropevent_on_set_accepted(void* self, void (*slot)(void*, bool));
QEvent* q_graphicsscenedragdropevent_clone(void* self);
QEvent* q_graphicsscenedragdropevent_qbase_clone(void* self);
void q_graphicsscenedragdropevent_on_clone(void* self, QEvent* (*slot)());
void q_graphicsscenedragdropevent_delete(void* self);

QGraphicsSceneResizeEvent* q_graphicssceneresizeevent_new();
QSizeF* q_graphicssceneresizeevent_old_size(void* self);
void q_graphicssceneresizeevent_set_old_size(void* self, void* size);
QSizeF* q_graphicssceneresizeevent_new_size(void* self);
void q_graphicssceneresizeevent_set_new_size(void* self, void* size);
QWidget* q_graphicssceneresizeevent_widget(void* self);
void q_graphicssceneresizeevent_set_widget(void* self, void* widget);
uint64_t q_graphicssceneresizeevent_timestamp(void* self);
void q_graphicssceneresizeevent_set_timestamp(void* self, uint64_t ts);
int64_t q_graphicssceneresizeevent_type(void* self);
bool q_graphicssceneresizeevent_spontaneous(void* self);
bool q_graphicssceneresizeevent_is_accepted(void* self);
void q_graphicssceneresizeevent_accept(void* self);
void q_graphicssceneresizeevent_ignore(void* self);
bool q_graphicssceneresizeevent_is_input_event(void* self);
bool q_graphicssceneresizeevent_is_pointer_event(void* self);
bool q_graphicssceneresizeevent_is_single_point_event(void* self);
int32_t q_graphicssceneresizeevent_register_event_type();
int32_t q_graphicssceneresizeevent_register_event_type1(int hint);
void q_graphicssceneresizeevent_set_accepted(void* self, bool accepted);
void q_graphicssceneresizeevent_qbase_set_accepted(void* self, bool accepted);
void q_graphicssceneresizeevent_on_set_accepted(void* self, void (*slot)(void*, bool));
QEvent* q_graphicssceneresizeevent_clone(void* self);
QEvent* q_graphicssceneresizeevent_qbase_clone(void* self);
void q_graphicssceneresizeevent_on_clone(void* self, QEvent* (*slot)());
void q_graphicssceneresizeevent_delete(void* self);

QGraphicsSceneMoveEvent* q_graphicsscenemoveevent_new();
QPointF* q_graphicsscenemoveevent_old_pos(void* self);
void q_graphicsscenemoveevent_set_old_pos(void* self, void* pos);
QPointF* q_graphicsscenemoveevent_new_pos(void* self);
void q_graphicsscenemoveevent_set_new_pos(void* self, void* pos);
QWidget* q_graphicsscenemoveevent_widget(void* self);
void q_graphicsscenemoveevent_set_widget(void* self, void* widget);
uint64_t q_graphicsscenemoveevent_timestamp(void* self);
void q_graphicsscenemoveevent_set_timestamp(void* self, uint64_t ts);
int64_t q_graphicsscenemoveevent_type(void* self);
bool q_graphicsscenemoveevent_spontaneous(void* self);
bool q_graphicsscenemoveevent_is_accepted(void* self);
void q_graphicsscenemoveevent_accept(void* self);
void q_graphicsscenemoveevent_ignore(void* self);
bool q_graphicsscenemoveevent_is_input_event(void* self);
bool q_graphicsscenemoveevent_is_pointer_event(void* self);
bool q_graphicsscenemoveevent_is_single_point_event(void* self);
int32_t q_graphicsscenemoveevent_register_event_type();
int32_t q_graphicsscenemoveevent_register_event_type1(int hint);
void q_graphicsscenemoveevent_set_accepted(void* self, bool accepted);
void q_graphicsscenemoveevent_qbase_set_accepted(void* self, bool accepted);
void q_graphicsscenemoveevent_on_set_accepted(void* self, void (*slot)(void*, bool));
QEvent* q_graphicsscenemoveevent_clone(void* self);
QEvent* q_graphicsscenemoveevent_qbase_clone(void* self);
void q_graphicsscenemoveevent_on_clone(void* self, QEvent* (*slot)());
void q_graphicsscenemoveevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicssceneevent.html#types

typedef enum {
    QGRAPHICSSCENECONTEXTMENUEVENT_REASON_MOUSE = 0,
    QGRAPHICSSCENECONTEXTMENUEVENT_REASON_KEYBOARD = 1,
    QGRAPHICSSCENECONTEXTMENUEVENT_REASON_OTHER = 2
} QGraphicsSceneContextMenuEvent__Reason;

#endif
