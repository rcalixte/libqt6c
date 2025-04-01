#include "libqevent.hpp"
#include "libqmimedata.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicssceneevent.hpp"
#include "libqgraphicssceneevent.h"

QGraphicsSceneEvent* q_graphicssceneevent_new(int64_t typeVal) {
    return QGraphicsSceneEvent_new(typeVal);
}

QWidget* q_graphicssceneevent_widget(void* self) {
    return QGraphicsSceneEvent_Widget((QGraphicsSceneEvent*)self);
}

void q_graphicssceneevent_set_widget(void* self, void* widget) {
    QGraphicsSceneEvent_SetWidget((QGraphicsSceneEvent*)self, (QWidget*)widget);
}

uint64_t q_graphicssceneevent_timestamp(void* self) {
    return QGraphicsSceneEvent_Timestamp((QGraphicsSceneEvent*)self);
}

void q_graphicssceneevent_set_timestamp(void* self, uint64_t ts) {
    QGraphicsSceneEvent_SetTimestamp((QGraphicsSceneEvent*)self, ts);
}

int64_t q_graphicssceneevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_graphicssceneevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_graphicssceneevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_graphicssceneevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_graphicssceneevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_graphicssceneevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_graphicssceneevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_graphicssceneevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_graphicssceneevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_graphicssceneevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_graphicssceneevent_set_accepted(void* self, bool accepted) {
    QGraphicsSceneEvent_SetAccepted((QGraphicsSceneEvent*)self, accepted);
}

void q_graphicssceneevent_qbase_set_accepted(void* self, bool accepted) {
    QGraphicsSceneEvent_QBaseSetAccepted((QGraphicsSceneEvent*)self, accepted);
}

void q_graphicssceneevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QGraphicsSceneEvent_OnSetAccepted((QGraphicsSceneEvent*)self, (intptr_t)slot);
}

QEvent* q_graphicssceneevent_clone(void* self) {
    return QGraphicsSceneEvent_Clone((QGraphicsSceneEvent*)self);
}

QEvent* q_graphicssceneevent_qbase_clone(void* self) {
    return QGraphicsSceneEvent_QBaseClone((QGraphicsSceneEvent*)self);
}

void q_graphicssceneevent_on_clone(void* self, QEvent* (*slot)()) {
    QGraphicsSceneEvent_OnClone((QGraphicsSceneEvent*)self, (intptr_t)slot);
}

void q_graphicssceneevent_delete(void* self) {
    QGraphicsSceneEvent_Delete((QGraphicsSceneEvent*)(self));
}

QGraphicsSceneMouseEvent* q_graphicsscenemouseevent_new() {
    return QGraphicsSceneMouseEvent_new();
}

QGraphicsSceneMouseEvent* q_graphicsscenemouseevent_new2(int64_t typeVal) {
    return QGraphicsSceneMouseEvent_new2(typeVal);
}

QPointF* q_graphicsscenemouseevent_pos(void* self) {
    return QGraphicsSceneMouseEvent_Pos((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_pos(void* self, void* pos) {
    QGraphicsSceneMouseEvent_SetPos((QGraphicsSceneMouseEvent*)self, (QPointF*)pos);
}

QPointF* q_graphicsscenemouseevent_scene_pos(void* self) {
    return QGraphicsSceneMouseEvent_ScenePos((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_scene_pos(void* self, void* pos) {
    QGraphicsSceneMouseEvent_SetScenePos((QGraphicsSceneMouseEvent*)self, (QPointF*)pos);
}

QPoint* q_graphicsscenemouseevent_screen_pos(void* self) {
    return QGraphicsSceneMouseEvent_ScreenPos((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_screen_pos(void* self, void* pos) {
    QGraphicsSceneMouseEvent_SetScreenPos((QGraphicsSceneMouseEvent*)self, (QPoint*)pos);
}

QPointF* q_graphicsscenemouseevent_button_down_pos(void* self, int64_t button) {
    return QGraphicsSceneMouseEvent_ButtonDownPos((QGraphicsSceneMouseEvent*)self, button);
}

void q_graphicsscenemouseevent_set_button_down_pos(void* self, int64_t button, void* pos) {
    QGraphicsSceneMouseEvent_SetButtonDownPos((QGraphicsSceneMouseEvent*)self, button, (QPointF*)pos);
}

QPointF* q_graphicsscenemouseevent_button_down_scene_pos(void* self, int64_t button) {
    return QGraphicsSceneMouseEvent_ButtonDownScenePos((QGraphicsSceneMouseEvent*)self, button);
}

void q_graphicsscenemouseevent_set_button_down_scene_pos(void* self, int64_t button, void* pos) {
    QGraphicsSceneMouseEvent_SetButtonDownScenePos((QGraphicsSceneMouseEvent*)self, button, (QPointF*)pos);
}

QPoint* q_graphicsscenemouseevent_button_down_screen_pos(void* self, int64_t button) {
    return QGraphicsSceneMouseEvent_ButtonDownScreenPos((QGraphicsSceneMouseEvent*)self, button);
}

void q_graphicsscenemouseevent_set_button_down_screen_pos(void* self, int64_t button, void* pos) {
    QGraphicsSceneMouseEvent_SetButtonDownScreenPos((QGraphicsSceneMouseEvent*)self, button, (QPoint*)pos);
}

QPointF* q_graphicsscenemouseevent_last_pos(void* self) {
    return QGraphicsSceneMouseEvent_LastPos((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_last_pos(void* self, void* pos) {
    QGraphicsSceneMouseEvent_SetLastPos((QGraphicsSceneMouseEvent*)self, (QPointF*)pos);
}

QPointF* q_graphicsscenemouseevent_last_scene_pos(void* self) {
    return QGraphicsSceneMouseEvent_LastScenePos((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_last_scene_pos(void* self, void* pos) {
    QGraphicsSceneMouseEvent_SetLastScenePos((QGraphicsSceneMouseEvent*)self, (QPointF*)pos);
}

QPoint* q_graphicsscenemouseevent_last_screen_pos(void* self) {
    return QGraphicsSceneMouseEvent_LastScreenPos((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_last_screen_pos(void* self, void* pos) {
    QGraphicsSceneMouseEvent_SetLastScreenPos((QGraphicsSceneMouseEvent*)self, (QPoint*)pos);
}

int64_t q_graphicsscenemouseevent_buttons(void* self) {
    return QGraphicsSceneMouseEvent_Buttons((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_buttons(void* self, int64_t buttons) {
    QGraphicsSceneMouseEvent_SetButtons((QGraphicsSceneMouseEvent*)self, buttons);
}

int64_t q_graphicsscenemouseevent_button(void* self) {
    return QGraphicsSceneMouseEvent_Button((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_button(void* self, int64_t button) {
    QGraphicsSceneMouseEvent_SetButton((QGraphicsSceneMouseEvent*)self, button);
}

int64_t q_graphicsscenemouseevent_modifiers(void* self) {
    return QGraphicsSceneMouseEvent_Modifiers((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_modifiers(void* self, int64_t modifiers) {
    QGraphicsSceneMouseEvent_SetModifiers((QGraphicsSceneMouseEvent*)self, modifiers);
}

int64_t q_graphicsscenemouseevent_source(void* self) {
    return QGraphicsSceneMouseEvent_Source((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_source(void* self, int64_t source) {
    QGraphicsSceneMouseEvent_SetSource((QGraphicsSceneMouseEvent*)self, source);
}

int64_t q_graphicsscenemouseevent_flags(void* self) {
    return QGraphicsSceneMouseEvent_Flags((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_set_flags(void* self, int64_t flags) {
    QGraphicsSceneMouseEvent_SetFlags((QGraphicsSceneMouseEvent*)self, flags);
}

QWidget* q_graphicsscenemouseevent_widget(void* self) {
    return QGraphicsSceneEvent_Widget((QGraphicsSceneEvent*)self);
}

void q_graphicsscenemouseevent_set_widget(void* self, void* widget) {
    QGraphicsSceneEvent_SetWidget((QGraphicsSceneEvent*)self, (QWidget*)widget);
}

uint64_t q_graphicsscenemouseevent_timestamp(void* self) {
    return QGraphicsSceneEvent_Timestamp((QGraphicsSceneEvent*)self);
}

void q_graphicsscenemouseevent_set_timestamp(void* self, uint64_t ts) {
    QGraphicsSceneEvent_SetTimestamp((QGraphicsSceneEvent*)self, ts);
}

int64_t q_graphicsscenemouseevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_graphicsscenemouseevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_graphicsscenemouseevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_graphicsscenemouseevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_graphicsscenemouseevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_graphicsscenemouseevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_graphicsscenemouseevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_graphicsscenemouseevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_graphicsscenemouseevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_graphicsscenemouseevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_graphicsscenemouseevent_set_accepted(void* self, bool accepted) {
    QGraphicsSceneMouseEvent_SetAccepted((QGraphicsSceneMouseEvent*)self, accepted);
}

void q_graphicsscenemouseevent_qbase_set_accepted(void* self, bool accepted) {
    QGraphicsSceneMouseEvent_QBaseSetAccepted((QGraphicsSceneMouseEvent*)self, accepted);
}

void q_graphicsscenemouseevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QGraphicsSceneMouseEvent_OnSetAccepted((QGraphicsSceneMouseEvent*)self, (intptr_t)slot);
}

QEvent* q_graphicsscenemouseevent_clone(void* self) {
    return QGraphicsSceneMouseEvent_Clone((QGraphicsSceneMouseEvent*)self);
}

QEvent* q_graphicsscenemouseevent_qbase_clone(void* self) {
    return QGraphicsSceneMouseEvent_QBaseClone((QGraphicsSceneMouseEvent*)self);
}

void q_graphicsscenemouseevent_on_clone(void* self, QEvent* (*slot)()) {
    QGraphicsSceneMouseEvent_OnClone((QGraphicsSceneMouseEvent*)self, (intptr_t)slot);
}

void q_graphicsscenemouseevent_delete(void* self) {
    QGraphicsSceneMouseEvent_Delete((QGraphicsSceneMouseEvent*)(self));
}

QGraphicsSceneWheelEvent* q_graphicsscenewheelevent_new() {
    return QGraphicsSceneWheelEvent_new();
}

QGraphicsSceneWheelEvent* q_graphicsscenewheelevent_new2(int64_t typeVal) {
    return QGraphicsSceneWheelEvent_new2(typeVal);
}

QPointF* q_graphicsscenewheelevent_pos(void* self) {
    return QGraphicsSceneWheelEvent_Pos((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_set_pos(void* self, void* pos) {
    QGraphicsSceneWheelEvent_SetPos((QGraphicsSceneWheelEvent*)self, (QPointF*)pos);
}

QPointF* q_graphicsscenewheelevent_scene_pos(void* self) {
    return QGraphicsSceneWheelEvent_ScenePos((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_set_scene_pos(void* self, void* pos) {
    QGraphicsSceneWheelEvent_SetScenePos((QGraphicsSceneWheelEvent*)self, (QPointF*)pos);
}

QPoint* q_graphicsscenewheelevent_screen_pos(void* self) {
    return QGraphicsSceneWheelEvent_ScreenPos((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_set_screen_pos(void* self, void* pos) {
    QGraphicsSceneWheelEvent_SetScreenPos((QGraphicsSceneWheelEvent*)self, (QPoint*)pos);
}

int64_t q_graphicsscenewheelevent_buttons(void* self) {
    return QGraphicsSceneWheelEvent_Buttons((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_set_buttons(void* self, int64_t buttons) {
    QGraphicsSceneWheelEvent_SetButtons((QGraphicsSceneWheelEvent*)self, buttons);
}

int64_t q_graphicsscenewheelevent_modifiers(void* self) {
    return QGraphicsSceneWheelEvent_Modifiers((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_set_modifiers(void* self, int64_t modifiers) {
    QGraphicsSceneWheelEvent_SetModifiers((QGraphicsSceneWheelEvent*)self, modifiers);
}

int32_t q_graphicsscenewheelevent_delta(void* self) {
    return QGraphicsSceneWheelEvent_Delta((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_set_delta(void* self, int delta) {
    QGraphicsSceneWheelEvent_SetDelta((QGraphicsSceneWheelEvent*)self, delta);
}

int64_t q_graphicsscenewheelevent_orientation(void* self) {
    return QGraphicsSceneWheelEvent_Orientation((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_set_orientation(void* self, int64_t orientation) {
    QGraphicsSceneWheelEvent_SetOrientation((QGraphicsSceneWheelEvent*)self, orientation);
}

int64_t q_graphicsscenewheelevent_phase(void* self) {
    return QGraphicsSceneWheelEvent_Phase((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_set_phase(void* self, int64_t scrollPhase) {
    QGraphicsSceneWheelEvent_SetPhase((QGraphicsSceneWheelEvent*)self, scrollPhase);
}

QPoint* q_graphicsscenewheelevent_pixel_delta(void* self) {
    return QGraphicsSceneWheelEvent_PixelDelta((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_set_pixel_delta(void* self, void* delta) {
    QGraphicsSceneWheelEvent_SetPixelDelta((QGraphicsSceneWheelEvent*)self, (QPoint*)delta);
}

bool q_graphicsscenewheelevent_is_inverted(void* self) {
    return QGraphicsSceneWheelEvent_IsInverted((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_set_inverted(void* self, bool inverted) {
    QGraphicsSceneWheelEvent_SetInverted((QGraphicsSceneWheelEvent*)self, inverted);
}

QWidget* q_graphicsscenewheelevent_widget(void* self) {
    return QGraphicsSceneEvent_Widget((QGraphicsSceneEvent*)self);
}

void q_graphicsscenewheelevent_set_widget(void* self, void* widget) {
    QGraphicsSceneEvent_SetWidget((QGraphicsSceneEvent*)self, (QWidget*)widget);
}

uint64_t q_graphicsscenewheelevent_timestamp(void* self) {
    return QGraphicsSceneEvent_Timestamp((QGraphicsSceneEvent*)self);
}

void q_graphicsscenewheelevent_set_timestamp(void* self, uint64_t ts) {
    QGraphicsSceneEvent_SetTimestamp((QGraphicsSceneEvent*)self, ts);
}

int64_t q_graphicsscenewheelevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_graphicsscenewheelevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_graphicsscenewheelevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_graphicsscenewheelevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_graphicsscenewheelevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_graphicsscenewheelevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_graphicsscenewheelevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_graphicsscenewheelevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_graphicsscenewheelevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_graphicsscenewheelevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_graphicsscenewheelevent_set_accepted(void* self, bool accepted) {
    QGraphicsSceneWheelEvent_SetAccepted((QGraphicsSceneWheelEvent*)self, accepted);
}

void q_graphicsscenewheelevent_qbase_set_accepted(void* self, bool accepted) {
    QGraphicsSceneWheelEvent_QBaseSetAccepted((QGraphicsSceneWheelEvent*)self, accepted);
}

void q_graphicsscenewheelevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QGraphicsSceneWheelEvent_OnSetAccepted((QGraphicsSceneWheelEvent*)self, (intptr_t)slot);
}

QEvent* q_graphicsscenewheelevent_clone(void* self) {
    return QGraphicsSceneWheelEvent_Clone((QGraphicsSceneWheelEvent*)self);
}

QEvent* q_graphicsscenewheelevent_qbase_clone(void* self) {
    return QGraphicsSceneWheelEvent_QBaseClone((QGraphicsSceneWheelEvent*)self);
}

void q_graphicsscenewheelevent_on_clone(void* self, QEvent* (*slot)()) {
    QGraphicsSceneWheelEvent_OnClone((QGraphicsSceneWheelEvent*)self, (intptr_t)slot);
}

void q_graphicsscenewheelevent_delete(void* self) {
    QGraphicsSceneWheelEvent_Delete((QGraphicsSceneWheelEvent*)(self));
}

QGraphicsSceneContextMenuEvent* q_graphicsscenecontextmenuevent_new() {
    return QGraphicsSceneContextMenuEvent_new();
}

QGraphicsSceneContextMenuEvent* q_graphicsscenecontextmenuevent_new2(int64_t typeVal) {
    return QGraphicsSceneContextMenuEvent_new2(typeVal);
}

QPointF* q_graphicsscenecontextmenuevent_pos(void* self) {
    return QGraphicsSceneContextMenuEvent_Pos((QGraphicsSceneContextMenuEvent*)self);
}

void q_graphicsscenecontextmenuevent_set_pos(void* self, void* pos) {
    QGraphicsSceneContextMenuEvent_SetPos((QGraphicsSceneContextMenuEvent*)self, (QPointF*)pos);
}

QPointF* q_graphicsscenecontextmenuevent_scene_pos(void* self) {
    return QGraphicsSceneContextMenuEvent_ScenePos((QGraphicsSceneContextMenuEvent*)self);
}

void q_graphicsscenecontextmenuevent_set_scene_pos(void* self, void* pos) {
    QGraphicsSceneContextMenuEvent_SetScenePos((QGraphicsSceneContextMenuEvent*)self, (QPointF*)pos);
}

QPoint* q_graphicsscenecontextmenuevent_screen_pos(void* self) {
    return QGraphicsSceneContextMenuEvent_ScreenPos((QGraphicsSceneContextMenuEvent*)self);
}

void q_graphicsscenecontextmenuevent_set_screen_pos(void* self, void* pos) {
    QGraphicsSceneContextMenuEvent_SetScreenPos((QGraphicsSceneContextMenuEvent*)self, (QPoint*)pos);
}

int64_t q_graphicsscenecontextmenuevent_modifiers(void* self) {
    return QGraphicsSceneContextMenuEvent_Modifiers((QGraphicsSceneContextMenuEvent*)self);
}

void q_graphicsscenecontextmenuevent_set_modifiers(void* self, int64_t modifiers) {
    QGraphicsSceneContextMenuEvent_SetModifiers((QGraphicsSceneContextMenuEvent*)self, modifiers);
}

int64_t q_graphicsscenecontextmenuevent_reason(void* self) {
    return QGraphicsSceneContextMenuEvent_Reason((QGraphicsSceneContextMenuEvent*)self);
}

void q_graphicsscenecontextmenuevent_set_reason(void* self, int64_t reason) {
    QGraphicsSceneContextMenuEvent_SetReason((QGraphicsSceneContextMenuEvent*)self, reason);
}

QWidget* q_graphicsscenecontextmenuevent_widget(void* self) {
    return QGraphicsSceneEvent_Widget((QGraphicsSceneEvent*)self);
}

void q_graphicsscenecontextmenuevent_set_widget(void* self, void* widget) {
    QGraphicsSceneEvent_SetWidget((QGraphicsSceneEvent*)self, (QWidget*)widget);
}

uint64_t q_graphicsscenecontextmenuevent_timestamp(void* self) {
    return QGraphicsSceneEvent_Timestamp((QGraphicsSceneEvent*)self);
}

void q_graphicsscenecontextmenuevent_set_timestamp(void* self, uint64_t ts) {
    QGraphicsSceneEvent_SetTimestamp((QGraphicsSceneEvent*)self, ts);
}

int64_t q_graphicsscenecontextmenuevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_graphicsscenecontextmenuevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_graphicsscenecontextmenuevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_graphicsscenecontextmenuevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_graphicsscenecontextmenuevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_graphicsscenecontextmenuevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_graphicsscenecontextmenuevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_graphicsscenecontextmenuevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_graphicsscenecontextmenuevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_graphicsscenecontextmenuevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_graphicsscenecontextmenuevent_set_accepted(void* self, bool accepted) {
    QGraphicsSceneContextMenuEvent_SetAccepted((QGraphicsSceneContextMenuEvent*)self, accepted);
}

void q_graphicsscenecontextmenuevent_qbase_set_accepted(void* self, bool accepted) {
    QGraphicsSceneContextMenuEvent_QBaseSetAccepted((QGraphicsSceneContextMenuEvent*)self, accepted);
}

void q_graphicsscenecontextmenuevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QGraphicsSceneContextMenuEvent_OnSetAccepted((QGraphicsSceneContextMenuEvent*)self, (intptr_t)slot);
}

QEvent* q_graphicsscenecontextmenuevent_clone(void* self) {
    return QGraphicsSceneContextMenuEvent_Clone((QGraphicsSceneContextMenuEvent*)self);
}

QEvent* q_graphicsscenecontextmenuevent_qbase_clone(void* self) {
    return QGraphicsSceneContextMenuEvent_QBaseClone((QGraphicsSceneContextMenuEvent*)self);
}

void q_graphicsscenecontextmenuevent_on_clone(void* self, QEvent* (*slot)()) {
    QGraphicsSceneContextMenuEvent_OnClone((QGraphicsSceneContextMenuEvent*)self, (intptr_t)slot);
}

void q_graphicsscenecontextmenuevent_delete(void* self) {
    QGraphicsSceneContextMenuEvent_Delete((QGraphicsSceneContextMenuEvent*)(self));
}

QGraphicsSceneHoverEvent* q_graphicsscenehoverevent_new() {
    return QGraphicsSceneHoverEvent_new();
}

QGraphicsSceneHoverEvent* q_graphicsscenehoverevent_new2(int64_t typeVal) {
    return QGraphicsSceneHoverEvent_new2(typeVal);
}

QPointF* q_graphicsscenehoverevent_pos(void* self) {
    return QGraphicsSceneHoverEvent_Pos((QGraphicsSceneHoverEvent*)self);
}

void q_graphicsscenehoverevent_set_pos(void* self, void* pos) {
    QGraphicsSceneHoverEvent_SetPos((QGraphicsSceneHoverEvent*)self, (QPointF*)pos);
}

QPointF* q_graphicsscenehoverevent_scene_pos(void* self) {
    return QGraphicsSceneHoverEvent_ScenePos((QGraphicsSceneHoverEvent*)self);
}

void q_graphicsscenehoverevent_set_scene_pos(void* self, void* pos) {
    QGraphicsSceneHoverEvent_SetScenePos((QGraphicsSceneHoverEvent*)self, (QPointF*)pos);
}

QPoint* q_graphicsscenehoverevent_screen_pos(void* self) {
    return QGraphicsSceneHoverEvent_ScreenPos((QGraphicsSceneHoverEvent*)self);
}

void q_graphicsscenehoverevent_set_screen_pos(void* self, void* pos) {
    QGraphicsSceneHoverEvent_SetScreenPos((QGraphicsSceneHoverEvent*)self, (QPoint*)pos);
}

QPointF* q_graphicsscenehoverevent_last_pos(void* self) {
    return QGraphicsSceneHoverEvent_LastPos((QGraphicsSceneHoverEvent*)self);
}

void q_graphicsscenehoverevent_set_last_pos(void* self, void* pos) {
    QGraphicsSceneHoverEvent_SetLastPos((QGraphicsSceneHoverEvent*)self, (QPointF*)pos);
}

QPointF* q_graphicsscenehoverevent_last_scene_pos(void* self) {
    return QGraphicsSceneHoverEvent_LastScenePos((QGraphicsSceneHoverEvent*)self);
}

void q_graphicsscenehoverevent_set_last_scene_pos(void* self, void* pos) {
    QGraphicsSceneHoverEvent_SetLastScenePos((QGraphicsSceneHoverEvent*)self, (QPointF*)pos);
}

QPoint* q_graphicsscenehoverevent_last_screen_pos(void* self) {
    return QGraphicsSceneHoverEvent_LastScreenPos((QGraphicsSceneHoverEvent*)self);
}

void q_graphicsscenehoverevent_set_last_screen_pos(void* self, void* pos) {
    QGraphicsSceneHoverEvent_SetLastScreenPos((QGraphicsSceneHoverEvent*)self, (QPoint*)pos);
}

int64_t q_graphicsscenehoverevent_modifiers(void* self) {
    return QGraphicsSceneHoverEvent_Modifiers((QGraphicsSceneHoverEvent*)self);
}

void q_graphicsscenehoverevent_set_modifiers(void* self, int64_t modifiers) {
    QGraphicsSceneHoverEvent_SetModifiers((QGraphicsSceneHoverEvent*)self, modifiers);
}

QWidget* q_graphicsscenehoverevent_widget(void* self) {
    return QGraphicsSceneEvent_Widget((QGraphicsSceneEvent*)self);
}

void q_graphicsscenehoverevent_set_widget(void* self, void* widget) {
    QGraphicsSceneEvent_SetWidget((QGraphicsSceneEvent*)self, (QWidget*)widget);
}

uint64_t q_graphicsscenehoverevent_timestamp(void* self) {
    return QGraphicsSceneEvent_Timestamp((QGraphicsSceneEvent*)self);
}

void q_graphicsscenehoverevent_set_timestamp(void* self, uint64_t ts) {
    QGraphicsSceneEvent_SetTimestamp((QGraphicsSceneEvent*)self, ts);
}

int64_t q_graphicsscenehoverevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_graphicsscenehoverevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_graphicsscenehoverevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_graphicsscenehoverevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_graphicsscenehoverevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_graphicsscenehoverevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_graphicsscenehoverevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_graphicsscenehoverevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_graphicsscenehoverevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_graphicsscenehoverevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_graphicsscenehoverevent_set_accepted(void* self, bool accepted) {
    QGraphicsSceneHoverEvent_SetAccepted((QGraphicsSceneHoverEvent*)self, accepted);
}

void q_graphicsscenehoverevent_qbase_set_accepted(void* self, bool accepted) {
    QGraphicsSceneHoverEvent_QBaseSetAccepted((QGraphicsSceneHoverEvent*)self, accepted);
}

void q_graphicsscenehoverevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QGraphicsSceneHoverEvent_OnSetAccepted((QGraphicsSceneHoverEvent*)self, (intptr_t)slot);
}

QEvent* q_graphicsscenehoverevent_clone(void* self) {
    return QGraphicsSceneHoverEvent_Clone((QGraphicsSceneHoverEvent*)self);
}

QEvent* q_graphicsscenehoverevent_qbase_clone(void* self) {
    return QGraphicsSceneHoverEvent_QBaseClone((QGraphicsSceneHoverEvent*)self);
}

void q_graphicsscenehoverevent_on_clone(void* self, QEvent* (*slot)()) {
    QGraphicsSceneHoverEvent_OnClone((QGraphicsSceneHoverEvent*)self, (intptr_t)slot);
}

void q_graphicsscenehoverevent_delete(void* self) {
    QGraphicsSceneHoverEvent_Delete((QGraphicsSceneHoverEvent*)(self));
}

QGraphicsSceneHelpEvent* q_graphicsscenehelpevent_new() {
    return QGraphicsSceneHelpEvent_new();
}

QGraphicsSceneHelpEvent* q_graphicsscenehelpevent_new2(int64_t typeVal) {
    return QGraphicsSceneHelpEvent_new2(typeVal);
}

QPointF* q_graphicsscenehelpevent_scene_pos(void* self) {
    return QGraphicsSceneHelpEvent_ScenePos((QGraphicsSceneHelpEvent*)self);
}

void q_graphicsscenehelpevent_set_scene_pos(void* self, void* pos) {
    QGraphicsSceneHelpEvent_SetScenePos((QGraphicsSceneHelpEvent*)self, (QPointF*)pos);
}

QPoint* q_graphicsscenehelpevent_screen_pos(void* self) {
    return QGraphicsSceneHelpEvent_ScreenPos((QGraphicsSceneHelpEvent*)self);
}

void q_graphicsscenehelpevent_set_screen_pos(void* self, void* pos) {
    QGraphicsSceneHelpEvent_SetScreenPos((QGraphicsSceneHelpEvent*)self, (QPoint*)pos);
}

QWidget* q_graphicsscenehelpevent_widget(void* self) {
    return QGraphicsSceneEvent_Widget((QGraphicsSceneEvent*)self);
}

void q_graphicsscenehelpevent_set_widget(void* self, void* widget) {
    QGraphicsSceneEvent_SetWidget((QGraphicsSceneEvent*)self, (QWidget*)widget);
}

uint64_t q_graphicsscenehelpevent_timestamp(void* self) {
    return QGraphicsSceneEvent_Timestamp((QGraphicsSceneEvent*)self);
}

void q_graphicsscenehelpevent_set_timestamp(void* self, uint64_t ts) {
    QGraphicsSceneEvent_SetTimestamp((QGraphicsSceneEvent*)self, ts);
}

int64_t q_graphicsscenehelpevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_graphicsscenehelpevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_graphicsscenehelpevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_graphicsscenehelpevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_graphicsscenehelpevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_graphicsscenehelpevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_graphicsscenehelpevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_graphicsscenehelpevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_graphicsscenehelpevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_graphicsscenehelpevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_graphicsscenehelpevent_set_accepted(void* self, bool accepted) {
    QGraphicsSceneHelpEvent_SetAccepted((QGraphicsSceneHelpEvent*)self, accepted);
}

void q_graphicsscenehelpevent_qbase_set_accepted(void* self, bool accepted) {
    QGraphicsSceneHelpEvent_QBaseSetAccepted((QGraphicsSceneHelpEvent*)self, accepted);
}

void q_graphicsscenehelpevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QGraphicsSceneHelpEvent_OnSetAccepted((QGraphicsSceneHelpEvent*)self, (intptr_t)slot);
}

QEvent* q_graphicsscenehelpevent_clone(void* self) {
    return QGraphicsSceneHelpEvent_Clone((QGraphicsSceneHelpEvent*)self);
}

QEvent* q_graphicsscenehelpevent_qbase_clone(void* self) {
    return QGraphicsSceneHelpEvent_QBaseClone((QGraphicsSceneHelpEvent*)self);
}

void q_graphicsscenehelpevent_on_clone(void* self, QEvent* (*slot)()) {
    QGraphicsSceneHelpEvent_OnClone((QGraphicsSceneHelpEvent*)self, (intptr_t)slot);
}

void q_graphicsscenehelpevent_delete(void* self) {
    QGraphicsSceneHelpEvent_Delete((QGraphicsSceneHelpEvent*)(self));
}

QGraphicsSceneDragDropEvent* q_graphicsscenedragdropevent_new() {
    return QGraphicsSceneDragDropEvent_new();
}

QGraphicsSceneDragDropEvent* q_graphicsscenedragdropevent_new2(int64_t typeVal) {
    return QGraphicsSceneDragDropEvent_new2(typeVal);
}

QPointF* q_graphicsscenedragdropevent_pos(void* self) {
    return QGraphicsSceneDragDropEvent_Pos((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_set_pos(void* self, void* pos) {
    QGraphicsSceneDragDropEvent_SetPos((QGraphicsSceneDragDropEvent*)self, (QPointF*)pos);
}

QPointF* q_graphicsscenedragdropevent_scene_pos(void* self) {
    return QGraphicsSceneDragDropEvent_ScenePos((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_set_scene_pos(void* self, void* pos) {
    QGraphicsSceneDragDropEvent_SetScenePos((QGraphicsSceneDragDropEvent*)self, (QPointF*)pos);
}

QPoint* q_graphicsscenedragdropevent_screen_pos(void* self) {
    return QGraphicsSceneDragDropEvent_ScreenPos((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_set_screen_pos(void* self, void* pos) {
    QGraphicsSceneDragDropEvent_SetScreenPos((QGraphicsSceneDragDropEvent*)self, (QPoint*)pos);
}

int64_t q_graphicsscenedragdropevent_buttons(void* self) {
    return QGraphicsSceneDragDropEvent_Buttons((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_set_buttons(void* self, int64_t buttons) {
    QGraphicsSceneDragDropEvent_SetButtons((QGraphicsSceneDragDropEvent*)self, buttons);
}

int64_t q_graphicsscenedragdropevent_modifiers(void* self) {
    return QGraphicsSceneDragDropEvent_Modifiers((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_set_modifiers(void* self, int64_t modifiers) {
    QGraphicsSceneDragDropEvent_SetModifiers((QGraphicsSceneDragDropEvent*)self, modifiers);
}

int64_t q_graphicsscenedragdropevent_possible_actions(void* self) {
    return QGraphicsSceneDragDropEvent_PossibleActions((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_set_possible_actions(void* self, int64_t actions) {
    QGraphicsSceneDragDropEvent_SetPossibleActions((QGraphicsSceneDragDropEvent*)self, actions);
}

int64_t q_graphicsscenedragdropevent_proposed_action(void* self) {
    return QGraphicsSceneDragDropEvent_ProposedAction((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_set_proposed_action(void* self, int64_t action) {
    QGraphicsSceneDragDropEvent_SetProposedAction((QGraphicsSceneDragDropEvent*)self, action);
}

void q_graphicsscenedragdropevent_accept_proposed_action(void* self) {
    QGraphicsSceneDragDropEvent_AcceptProposedAction((QGraphicsSceneDragDropEvent*)self);
}

int64_t q_graphicsscenedragdropevent_drop_action(void* self) {
    return QGraphicsSceneDragDropEvent_DropAction((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_set_drop_action(void* self, int64_t action) {
    QGraphicsSceneDragDropEvent_SetDropAction((QGraphicsSceneDragDropEvent*)self, action);
}

QWidget* q_graphicsscenedragdropevent_source(void* self) {
    return QGraphicsSceneDragDropEvent_Source((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_set_source(void* self, void* source) {
    QGraphicsSceneDragDropEvent_SetSource((QGraphicsSceneDragDropEvent*)self, (QWidget*)source);
}

QMimeData* q_graphicsscenedragdropevent_mime_data(void* self) {
    return QGraphicsSceneDragDropEvent_MimeData((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_set_mime_data(void* self, void* data) {
    QGraphicsSceneDragDropEvent_SetMimeData((QGraphicsSceneDragDropEvent*)self, (QMimeData*)data);
}

QWidget* q_graphicsscenedragdropevent_widget(void* self) {
    return QGraphicsSceneEvent_Widget((QGraphicsSceneEvent*)self);
}

void q_graphicsscenedragdropevent_set_widget(void* self, void* widget) {
    QGraphicsSceneEvent_SetWidget((QGraphicsSceneEvent*)self, (QWidget*)widget);
}

uint64_t q_graphicsscenedragdropevent_timestamp(void* self) {
    return QGraphicsSceneEvent_Timestamp((QGraphicsSceneEvent*)self);
}

void q_graphicsscenedragdropevent_set_timestamp(void* self, uint64_t ts) {
    QGraphicsSceneEvent_SetTimestamp((QGraphicsSceneEvent*)self, ts);
}

int64_t q_graphicsscenedragdropevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_graphicsscenedragdropevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_graphicsscenedragdropevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_graphicsscenedragdropevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_graphicsscenedragdropevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_graphicsscenedragdropevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_graphicsscenedragdropevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_graphicsscenedragdropevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_graphicsscenedragdropevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_graphicsscenedragdropevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_graphicsscenedragdropevent_set_accepted(void* self, bool accepted) {
    QGraphicsSceneDragDropEvent_SetAccepted((QGraphicsSceneDragDropEvent*)self, accepted);
}

void q_graphicsscenedragdropevent_qbase_set_accepted(void* self, bool accepted) {
    QGraphicsSceneDragDropEvent_QBaseSetAccepted((QGraphicsSceneDragDropEvent*)self, accepted);
}

void q_graphicsscenedragdropevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QGraphicsSceneDragDropEvent_OnSetAccepted((QGraphicsSceneDragDropEvent*)self, (intptr_t)slot);
}

QEvent* q_graphicsscenedragdropevent_clone(void* self) {
    return QGraphicsSceneDragDropEvent_Clone((QGraphicsSceneDragDropEvent*)self);
}

QEvent* q_graphicsscenedragdropevent_qbase_clone(void* self) {
    return QGraphicsSceneDragDropEvent_QBaseClone((QGraphicsSceneDragDropEvent*)self);
}

void q_graphicsscenedragdropevent_on_clone(void* self, QEvent* (*slot)()) {
    QGraphicsSceneDragDropEvent_OnClone((QGraphicsSceneDragDropEvent*)self, (intptr_t)slot);
}

void q_graphicsscenedragdropevent_delete(void* self) {
    QGraphicsSceneDragDropEvent_Delete((QGraphicsSceneDragDropEvent*)(self));
}

QGraphicsSceneResizeEvent* q_graphicssceneresizeevent_new() {
    return QGraphicsSceneResizeEvent_new();
}

QSizeF* q_graphicssceneresizeevent_old_size(void* self) {
    return QGraphicsSceneResizeEvent_OldSize((QGraphicsSceneResizeEvent*)self);
}

void q_graphicssceneresizeevent_set_old_size(void* self, void* size) {
    QGraphicsSceneResizeEvent_SetOldSize((QGraphicsSceneResizeEvent*)self, (QSizeF*)size);
}

QSizeF* q_graphicssceneresizeevent_new_size(void* self) {
    return QGraphicsSceneResizeEvent_NewSize((QGraphicsSceneResizeEvent*)self);
}

void q_graphicssceneresizeevent_set_new_size(void* self, void* size) {
    QGraphicsSceneResizeEvent_SetNewSize((QGraphicsSceneResizeEvent*)self, (QSizeF*)size);
}

QWidget* q_graphicssceneresizeevent_widget(void* self) {
    return QGraphicsSceneEvent_Widget((QGraphicsSceneEvent*)self);
}

void q_graphicssceneresizeevent_set_widget(void* self, void* widget) {
    QGraphicsSceneEvent_SetWidget((QGraphicsSceneEvent*)self, (QWidget*)widget);
}

uint64_t q_graphicssceneresizeevent_timestamp(void* self) {
    return QGraphicsSceneEvent_Timestamp((QGraphicsSceneEvent*)self);
}

void q_graphicssceneresizeevent_set_timestamp(void* self, uint64_t ts) {
    QGraphicsSceneEvent_SetTimestamp((QGraphicsSceneEvent*)self, ts);
}

int64_t q_graphicssceneresizeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_graphicssceneresizeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_graphicssceneresizeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_graphicssceneresizeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_graphicssceneresizeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_graphicssceneresizeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_graphicssceneresizeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_graphicssceneresizeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_graphicssceneresizeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_graphicssceneresizeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_graphicssceneresizeevent_set_accepted(void* self, bool accepted) {
    QGraphicsSceneResizeEvent_SetAccepted((QGraphicsSceneResizeEvent*)self, accepted);
}

void q_graphicssceneresizeevent_qbase_set_accepted(void* self, bool accepted) {
    QGraphicsSceneResizeEvent_QBaseSetAccepted((QGraphicsSceneResizeEvent*)self, accepted);
}

void q_graphicssceneresizeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QGraphicsSceneResizeEvent_OnSetAccepted((QGraphicsSceneResizeEvent*)self, (intptr_t)slot);
}

QEvent* q_graphicssceneresizeevent_clone(void* self) {
    return QGraphicsSceneResizeEvent_Clone((QGraphicsSceneResizeEvent*)self);
}

QEvent* q_graphicssceneresizeevent_qbase_clone(void* self) {
    return QGraphicsSceneResizeEvent_QBaseClone((QGraphicsSceneResizeEvent*)self);
}

void q_graphicssceneresizeevent_on_clone(void* self, QEvent* (*slot)()) {
    QGraphicsSceneResizeEvent_OnClone((QGraphicsSceneResizeEvent*)self, (intptr_t)slot);
}

void q_graphicssceneresizeevent_delete(void* self) {
    QGraphicsSceneResizeEvent_Delete((QGraphicsSceneResizeEvent*)(self));
}

QGraphicsSceneMoveEvent* q_graphicsscenemoveevent_new() {
    return QGraphicsSceneMoveEvent_new();
}

QPointF* q_graphicsscenemoveevent_old_pos(void* self) {
    return QGraphicsSceneMoveEvent_OldPos((QGraphicsSceneMoveEvent*)self);
}

void q_graphicsscenemoveevent_set_old_pos(void* self, void* pos) {
    QGraphicsSceneMoveEvent_SetOldPos((QGraphicsSceneMoveEvent*)self, (QPointF*)pos);
}

QPointF* q_graphicsscenemoveevent_new_pos(void* self) {
    return QGraphicsSceneMoveEvent_NewPos((QGraphicsSceneMoveEvent*)self);
}

void q_graphicsscenemoveevent_set_new_pos(void* self, void* pos) {
    QGraphicsSceneMoveEvent_SetNewPos((QGraphicsSceneMoveEvent*)self, (QPointF*)pos);
}

QWidget* q_graphicsscenemoveevent_widget(void* self) {
    return QGraphicsSceneEvent_Widget((QGraphicsSceneEvent*)self);
}

void q_graphicsscenemoveevent_set_widget(void* self, void* widget) {
    QGraphicsSceneEvent_SetWidget((QGraphicsSceneEvent*)self, (QWidget*)widget);
}

uint64_t q_graphicsscenemoveevent_timestamp(void* self) {
    return QGraphicsSceneEvent_Timestamp((QGraphicsSceneEvent*)self);
}

void q_graphicsscenemoveevent_set_timestamp(void* self, uint64_t ts) {
    QGraphicsSceneEvent_SetTimestamp((QGraphicsSceneEvent*)self, ts);
}

int64_t q_graphicsscenemoveevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_graphicsscenemoveevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_graphicsscenemoveevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_graphicsscenemoveevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_graphicsscenemoveevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_graphicsscenemoveevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_graphicsscenemoveevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_graphicsscenemoveevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_graphicsscenemoveevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_graphicsscenemoveevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_graphicsscenemoveevent_set_accepted(void* self, bool accepted) {
    QGraphicsSceneMoveEvent_SetAccepted((QGraphicsSceneMoveEvent*)self, accepted);
}

void q_graphicsscenemoveevent_qbase_set_accepted(void* self, bool accepted) {
    QGraphicsSceneMoveEvent_QBaseSetAccepted((QGraphicsSceneMoveEvent*)self, accepted);
}

void q_graphicsscenemoveevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QGraphicsSceneMoveEvent_OnSetAccepted((QGraphicsSceneMoveEvent*)self, (intptr_t)slot);
}

QEvent* q_graphicsscenemoveevent_clone(void* self) {
    return QGraphicsSceneMoveEvent_Clone((QGraphicsSceneMoveEvent*)self);
}

QEvent* q_graphicsscenemoveevent_qbase_clone(void* self) {
    return QGraphicsSceneMoveEvent_QBaseClone((QGraphicsSceneMoveEvent*)self);
}

void q_graphicsscenemoveevent_on_clone(void* self, QEvent* (*slot)()) {
    QGraphicsSceneMoveEvent_OnClone((QGraphicsSceneMoveEvent*)self, (intptr_t)slot);
}

void q_graphicsscenemoveevent_delete(void* self) {
    QGraphicsSceneMoveEvent_Delete((QGraphicsSceneMoveEvent*)(self));
}
