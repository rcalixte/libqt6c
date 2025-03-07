#pragma once
#ifndef SRCQT6C_LIBQLAYOUTITEM_H
#define SRCQT6C_LIBQLAYOUTITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqlayout.h"
#include "libqrect.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include "libqwidget.h"

QLayoutItem* q_layoutitem_new();
QLayoutItem* q_layoutitem_new2(void* param1);
QLayoutItem* q_layoutitem_new3(int64_t alignment);
QSize* q_layoutitem_size_hint(void* self);
void q_layoutitem_on_size_hint(void* self, QSize* (*slot)());
QSize* q_layoutitem_qbase_size_hint(void* self);
QSize* q_layoutitem_minimum_size(void* self);
void q_layoutitem_on_minimum_size(void* self, QSize* (*slot)());
QSize* q_layoutitem_qbase_minimum_size(void* self);
QSize* q_layoutitem_maximum_size(void* self);
void q_layoutitem_on_maximum_size(void* self, QSize* (*slot)());
QSize* q_layoutitem_qbase_maximum_size(void* self);
int64_t q_layoutitem_expanding_directions(void* self);
void q_layoutitem_on_expanding_directions(void* self, int64_t (*slot)());
int64_t q_layoutitem_qbase_expanding_directions(void* self);
void q_layoutitem_set_geometry(void* self, void* geometry);
void q_layoutitem_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_layoutitem_qbase_set_geometry(void* self, void* geometry);
QRect* q_layoutitem_geometry(void* self);
void q_layoutitem_on_geometry(void* self, QRect* (*slot)());
QRect* q_layoutitem_qbase_geometry(void* self);
bool q_layoutitem_is_empty(void* self);
void q_layoutitem_on_is_empty(void* self, bool (*slot)());
bool q_layoutitem_qbase_is_empty(void* self);
bool q_layoutitem_has_height_for_width(void* self);
void q_layoutitem_on_has_height_for_width(void* self, bool (*slot)());
bool q_layoutitem_qbase_has_height_for_width(void* self);
int32_t q_layoutitem_height_for_width(void* self, int param1);
void q_layoutitem_on_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_layoutitem_qbase_height_for_width(void* self, int param1);
int32_t q_layoutitem_minimum_height_for_width(void* self, int param1);
void q_layoutitem_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_layoutitem_qbase_minimum_height_for_width(void* self, int param1);
void q_layoutitem_invalidate(void* self);
void q_layoutitem_on_invalidate(void* self, void (*slot)());
void q_layoutitem_qbase_invalidate(void* self);
QWidget* q_layoutitem_widget(void* self);
void q_layoutitem_on_widget(void* self, QWidget* (*slot)());
QWidget* q_layoutitem_qbase_widget(void* self);
QLayout* q_layoutitem_layout(void* self);
void q_layoutitem_on_layout(void* self, QLayout* (*slot)());
QLayout* q_layoutitem_qbase_layout(void* self);
QSpacerItem* q_layoutitem_spacer_item(void* self);
void q_layoutitem_on_spacer_item(void* self, QSpacerItem* (*slot)());
QSpacerItem* q_layoutitem_qbase_spacer_item(void* self);
int64_t q_layoutitem_alignment(void* self);
void q_layoutitem_set_alignment(void* self, int64_t a);
int64_t q_layoutitem_control_types(void* self);
void q_layoutitem_on_control_types(void* self, int64_t (*slot)());
int64_t q_layoutitem_qbase_control_types(void* self);
void q_layoutitem_operator_assign(void* self, void* param1);
void q_layoutitem_on_operator_assign(void* self, void (*slot)(void*, void*));
void q_layoutitem_qbase_operator_assign(void* self, void* param1);
void q_layoutitem_delete(void* self);

QSpacerItem* q_spaceritem_new(int w, int h);
QSpacerItem* q_spaceritem_new2(void* param1);
QSpacerItem* q_spaceritem_new3(int w, int h, int64_t hData);
QSpacerItem* q_spaceritem_new4(int w, int h, int64_t hData, int64_t vData);
void q_spaceritem_change_size(void* self, int w, int h);
QSize* q_spaceritem_size_hint(void* self);
void q_spaceritem_on_size_hint(void* self, QSize* (*slot)());
QSize* q_spaceritem_qbase_size_hint(void* self);
QSize* q_spaceritem_minimum_size(void* self);
void q_spaceritem_on_minimum_size(void* self, QSize* (*slot)());
QSize* q_spaceritem_qbase_minimum_size(void* self);
QSize* q_spaceritem_maximum_size(void* self);
void q_spaceritem_on_maximum_size(void* self, QSize* (*slot)());
QSize* q_spaceritem_qbase_maximum_size(void* self);
int64_t q_spaceritem_expanding_directions(void* self);
void q_spaceritem_on_expanding_directions(void* self, int64_t (*slot)());
int64_t q_spaceritem_qbase_expanding_directions(void* self);
bool q_spaceritem_is_empty(void* self);
void q_spaceritem_on_is_empty(void* self, bool (*slot)());
bool q_spaceritem_qbase_is_empty(void* self);
void q_spaceritem_set_geometry(void* self, void* geometry);
void q_spaceritem_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_spaceritem_qbase_set_geometry(void* self, void* geometry);
QRect* q_spaceritem_geometry(void* self);
void q_spaceritem_on_geometry(void* self, QRect* (*slot)());
QRect* q_spaceritem_qbase_geometry(void* self);
QSpacerItem* q_spaceritem_spacer_item(void* self);
void q_spaceritem_on_spacer_item(void* self, QSpacerItem* (*slot)());
QSpacerItem* q_spaceritem_qbase_spacer_item(void* self);
QSizePolicy* q_spaceritem_size_policy(void* self);
void q_spaceritem_change_size3(void* self, int w, int h, int64_t hData);
void q_spaceritem_change_size4(void* self, int w, int h, int64_t hData, int64_t vData);
int64_t q_spaceritem_alignment(void* self);
void q_spaceritem_set_alignment(void* self, int64_t a);
bool q_spaceritem_has_height_for_width(void* self);
bool q_spaceritem_qbase_has_height_for_width(void* self);
void q_spaceritem_on_has_height_for_width(void* self, bool (*slot)());
int32_t q_spaceritem_height_for_width(void* self, int param1);
int32_t q_spaceritem_qbase_height_for_width(void* self, int param1);
void q_spaceritem_on_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_spaceritem_minimum_height_for_width(void* self, int param1);
int32_t q_spaceritem_qbase_minimum_height_for_width(void* self, int param1);
void q_spaceritem_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));
void q_spaceritem_invalidate(void* self);
void q_spaceritem_qbase_invalidate(void* self);
void q_spaceritem_on_invalidate(void* self, void (*slot)());
QWidget* q_spaceritem_widget(void* self);
QWidget* q_spaceritem_qbase_widget(void* self);
void q_spaceritem_on_widget(void* self, QWidget* (*slot)());
QLayout* q_spaceritem_layout(void* self);
QLayout* q_spaceritem_qbase_layout(void* self);
void q_spaceritem_on_layout(void* self, QLayout* (*slot)());
int64_t q_spaceritem_control_types(void* self);
int64_t q_spaceritem_qbase_control_types(void* self);
void q_spaceritem_on_control_types(void* self, int64_t (*slot)());
void q_spaceritem_delete(void* self);

QWidgetItem* q_widgetitem_new(void* w);
QSize* q_widgetitem_size_hint(void* self);
void q_widgetitem_on_size_hint(void* self, QSize* (*slot)());
QSize* q_widgetitem_qbase_size_hint(void* self);
QSize* q_widgetitem_minimum_size(void* self);
void q_widgetitem_on_minimum_size(void* self, QSize* (*slot)());
QSize* q_widgetitem_qbase_minimum_size(void* self);
QSize* q_widgetitem_maximum_size(void* self);
void q_widgetitem_on_maximum_size(void* self, QSize* (*slot)());
QSize* q_widgetitem_qbase_maximum_size(void* self);
int64_t q_widgetitem_expanding_directions(void* self);
void q_widgetitem_on_expanding_directions(void* self, int64_t (*slot)());
int64_t q_widgetitem_qbase_expanding_directions(void* self);
bool q_widgetitem_is_empty(void* self);
void q_widgetitem_on_is_empty(void* self, bool (*slot)());
bool q_widgetitem_qbase_is_empty(void* self);
void q_widgetitem_set_geometry(void* self, void* geometry);
void q_widgetitem_on_set_geometry(void* self, void (*slot)(void*, void*));
void q_widgetitem_qbase_set_geometry(void* self, void* geometry);
QRect* q_widgetitem_geometry(void* self);
void q_widgetitem_on_geometry(void* self, QRect* (*slot)());
QRect* q_widgetitem_qbase_geometry(void* self);
QWidget* q_widgetitem_widget(void* self);
void q_widgetitem_on_widget(void* self, QWidget* (*slot)());
QWidget* q_widgetitem_qbase_widget(void* self);
bool q_widgetitem_has_height_for_width(void* self);
void q_widgetitem_on_has_height_for_width(void* self, bool (*slot)());
bool q_widgetitem_qbase_has_height_for_width(void* self);
int32_t q_widgetitem_height_for_width(void* self, int param1);
void q_widgetitem_on_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_widgetitem_qbase_height_for_width(void* self, int param1);
int32_t q_widgetitem_minimum_height_for_width(void* self, int param1);
void q_widgetitem_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_widgetitem_qbase_minimum_height_for_width(void* self, int param1);
int64_t q_widgetitem_control_types(void* self);
void q_widgetitem_on_control_types(void* self, int64_t (*slot)());
int64_t q_widgetitem_qbase_control_types(void* self);
int64_t q_widgetitem_alignment(void* self);
void q_widgetitem_set_alignment(void* self, int64_t a);
void q_widgetitem_invalidate(void* self);
void q_widgetitem_qbase_invalidate(void* self);
void q_widgetitem_on_invalidate(void* self, void (*slot)());
QLayout* q_widgetitem_layout(void* self);
QLayout* q_widgetitem_qbase_layout(void* self);
void q_widgetitem_on_layout(void* self, QLayout* (*slot)());
QSpacerItem* q_widgetitem_spacer_item(void* self);
QSpacerItem* q_widgetitem_qbase_spacer_item(void* self);
void q_widgetitem_on_spacer_item(void* self, QSpacerItem* (*slot)());
void q_widgetitem_delete(void* self);

QWidgetItemV2* q_widgetitemv2_new(void* widget);
QSize* q_widgetitemv2_size_hint(void* self);
void q_widgetitemv2_on_size_hint(void* self, QSize* (*slot)());
QSize* q_widgetitemv2_qbase_size_hint(void* self);
QSize* q_widgetitemv2_minimum_size(void* self);
void q_widgetitemv2_on_minimum_size(void* self, QSize* (*slot)());
QSize* q_widgetitemv2_qbase_minimum_size(void* self);
QSize* q_widgetitemv2_maximum_size(void* self);
void q_widgetitemv2_on_maximum_size(void* self, QSize* (*slot)());
QSize* q_widgetitemv2_qbase_maximum_size(void* self);
int32_t q_widgetitemv2_height_for_width(void* self, int width);
void q_widgetitemv2_on_height_for_width(void* self, int32_t (*slot)(void*, int));
int32_t q_widgetitemv2_qbase_height_for_width(void* self, int width);
int64_t q_widgetitemv2_alignment(void* self);
void q_widgetitemv2_set_alignment(void* self, int64_t a);
int64_t q_widgetitemv2_expanding_directions(void* self);
int64_t q_widgetitemv2_qbase_expanding_directions(void* self);
void q_widgetitemv2_on_expanding_directions(void* self, int64_t (*slot)());
bool q_widgetitemv2_is_empty(void* self);
bool q_widgetitemv2_qbase_is_empty(void* self);
void q_widgetitemv2_on_is_empty(void* self, bool (*slot)());
void q_widgetitemv2_set_geometry(void* self, void* geometry);
void q_widgetitemv2_qbase_set_geometry(void* self, void* geometry);
void q_widgetitemv2_on_set_geometry(void* self, void (*slot)(void*, void*));
QRect* q_widgetitemv2_geometry(void* self);
QRect* q_widgetitemv2_qbase_geometry(void* self);
void q_widgetitemv2_on_geometry(void* self, QRect* (*slot)());
QWidget* q_widgetitemv2_widget(void* self);
QWidget* q_widgetitemv2_qbase_widget(void* self);
void q_widgetitemv2_on_widget(void* self, QWidget* (*slot)());
bool q_widgetitemv2_has_height_for_width(void* self);
bool q_widgetitemv2_qbase_has_height_for_width(void* self);
void q_widgetitemv2_on_has_height_for_width(void* self, bool (*slot)());
int32_t q_widgetitemv2_minimum_height_for_width(void* self, int param1);
int32_t q_widgetitemv2_qbase_minimum_height_for_width(void* self, int param1);
void q_widgetitemv2_on_minimum_height_for_width(void* self, int32_t (*slot)(void*, int));
int64_t q_widgetitemv2_control_types(void* self);
int64_t q_widgetitemv2_qbase_control_types(void* self);
void q_widgetitemv2_on_control_types(void* self, int64_t (*slot)());
void q_widgetitemv2_invalidate(void* self);
void q_widgetitemv2_qbase_invalidate(void* self);
void q_widgetitemv2_on_invalidate(void* self, void (*slot)());
QLayout* q_widgetitemv2_layout(void* self);
QLayout* q_widgetitemv2_qbase_layout(void* self);
void q_widgetitemv2_on_layout(void* self, QLayout* (*slot)());
QSpacerItem* q_widgetitemv2_spacer_item(void* self);
QSpacerItem* q_widgetitemv2_qbase_spacer_item(void* self);
void q_widgetitemv2_on_spacer_item(void* self, QSpacerItem* (*slot)());
void q_widgetitemv2_delete(void* self);

#endif
