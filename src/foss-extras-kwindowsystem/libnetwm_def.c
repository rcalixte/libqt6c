#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libnetwm_def.hpp"
#include "libnetwm_def.h"

NETPoint* k_netpoint_new(void* other) {
    return NETPoint_new((NETPoint*)other);
}

NETPoint* k_netpoint_new2(void* other) {
    return NETPoint_new2((NETPoint*)other);
}

NETPoint* k_netpoint_new3() {
    return NETPoint_new3();
}

NETPoint* k_netpoint_new4(void* p) {
    return NETPoint_new4((QPoint*)p);
}

NETPoint* k_netpoint_new5(void* param1) {
    return NETPoint_new5((NETPoint*)param1);
}

void k_netpoint_copy_assign(void* self, void* other) {
    NETPoint_CopyAssign((NETPoint*)self, (NETPoint*)other);
}

void k_netpoint_move_assign(void* self, void* other) {
    NETPoint_MoveAssign((NETPoint*)self, (NETPoint*)other);
}

QPoint* k_netpoint_to_point(void* self) {
    return NETPoint_ToPoint((NETPoint*)self);
}

int32_t k_netpoint_x(void* self) {
    return NETPoint_X((NETPoint*)self);
}

void k_netpoint_set_x(void* self, int x) {
    NETPoint_SetX((NETPoint*)self, x);
}

int32_t k_netpoint_y(void* self) {
    return NETPoint_Y((NETPoint*)self);
}

void k_netpoint_set_y(void* self, int y) {
    NETPoint_SetY((NETPoint*)self, y);
}

void k_netpoint_delete(void* self) {
    NETPoint_Delete((NETPoint*)(self));
}

NETSize* k_netsize_new(void* other) {
    return NETSize_new((NETSize*)other);
}

NETSize* k_netsize_new2(void* other) {
    return NETSize_new2((NETSize*)other);
}

NETSize* k_netsize_new3() {
    return NETSize_new3();
}

NETSize* k_netsize_new4(void* size) {
    return NETSize_new4((QSize*)size);
}

NETSize* k_netsize_new5(void* param1) {
    return NETSize_new5((NETSize*)param1);
}

void k_netsize_copy_assign(void* self, void* other) {
    NETSize_CopyAssign((NETSize*)self, (NETSize*)other);
}

void k_netsize_move_assign(void* self, void* other) {
    NETSize_MoveAssign((NETSize*)self, (NETSize*)other);
}

QSize* k_netsize_to_size(void* self) {
    return NETSize_ToSize((NETSize*)self);
}

int32_t k_netsize_width(void* self) {
    return NETSize_Width((NETSize*)self);
}

void k_netsize_set_width(void* self, int width) {
    NETSize_SetWidth((NETSize*)self, width);
}

int32_t k_netsize_height(void* self) {
    return NETSize_Height((NETSize*)self);
}

void k_netsize_set_height(void* self, int height) {
    NETSize_SetHeight((NETSize*)self, height);
}

void k_netsize_delete(void* self) {
    NETSize_Delete((NETSize*)(self));
}

NETRect* k_netrect_new(void* other) {
    return NETRect_new((NETRect*)other);
}

NETRect* k_netrect_new2(void* other) {
    return NETRect_new2((NETRect*)other);
}

NETRect* k_netrect_new3() {
    return NETRect_new3();
}

NETRect* k_netrect_new4(void* rect) {
    return NETRect_new4((QRect*)rect);
}

void k_netrect_copy_assign(void* self, void* other) {
    NETRect_CopyAssign((NETRect*)self, (NETRect*)other);
}

void k_netrect_move_assign(void* self, void* other) {
    NETRect_MoveAssign((NETRect*)self, (NETRect*)other);
}

QRect* k_netrect_to_rect(void* self) {
    return NETRect_ToRect((NETRect*)self);
}

NETPoint* k_netrect_pos(void* self) {
    return NETRect_Pos((NETRect*)self);
}

void k_netrect_set_pos(void* self, void* pos) {
    NETRect_SetPos((NETRect*)self, (NETPoint*)pos);
}

NETSize* k_netrect_size(void* self) {
    return NETRect_Size((NETRect*)self);
}

void k_netrect_set_size(void* self, void* size) {
    NETRect_SetSize((NETRect*)self, (NETSize*)size);
}

void k_netrect_delete(void* self) {
    NETRect_Delete((NETRect*)(self));
}

NETIcon* k_neticon_new(void* other) {
    return NETIcon_new((NETIcon*)other);
}

NETIcon* k_neticon_new2(void* other) {
    return NETIcon_new2((NETIcon*)other);
}

NETIcon* k_neticon_new3() {
    return NETIcon_new3();
}

void k_neticon_copy_assign(void* self, void* other) {
    NETIcon_CopyAssign((NETIcon*)self, (NETIcon*)other);
}

void k_neticon_move_assign(void* self, void* other) {
    NETIcon_MoveAssign((NETIcon*)self, (NETIcon*)other);
}

NETSize* k_neticon_size(void* self) {
    return NETIcon_Size((NETIcon*)self);
}

void k_neticon_set_size(void* self, void* size) {
    NETIcon_SetSize((NETIcon*)self, (NETSize*)size);
}

unsigned char* k_neticon_data(void* self) {
    return (unsigned char*)NETIcon_Data((NETIcon*)self);
}

void k_neticon_set_data(void* self, unsigned char* data) {
    NETIcon_SetData((NETIcon*)self, data);
}

void k_neticon_delete(void* self) {
    NETIcon_Delete((NETIcon*)(self));
}

NETExtendedStrut* k_netextendedstrut_new(void* other) {
    return NETExtendedStrut_new((NETExtendedStrut*)other);
}

NETExtendedStrut* k_netextendedstrut_new2(void* other) {
    return NETExtendedStrut_new2((NETExtendedStrut*)other);
}

NETExtendedStrut* k_netextendedstrut_new3() {
    return NETExtendedStrut_new3();
}

void k_netextendedstrut_copy_assign(void* self, void* other) {
    NETExtendedStrut_CopyAssign((NETExtendedStrut*)self, (NETExtendedStrut*)other);
}

void k_netextendedstrut_move_assign(void* self, void* other) {
    NETExtendedStrut_MoveAssign((NETExtendedStrut*)self, (NETExtendedStrut*)other);
}

int32_t k_netextendedstrut_left_width(void* self) {
    return NETExtendedStrut_LeftWidth((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_left_width(void* self, int left_width) {
    NETExtendedStrut_SetLeftWidth((NETExtendedStrut*)self, left_width);
}

int32_t k_netextendedstrut_left_start(void* self) {
    return NETExtendedStrut_LeftStart((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_left_start(void* self, int left_start) {
    NETExtendedStrut_SetLeftStart((NETExtendedStrut*)self, left_start);
}

int32_t k_netextendedstrut_left_end(void* self) {
    return NETExtendedStrut_LeftEnd((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_left_end(void* self, int left_end) {
    NETExtendedStrut_SetLeftEnd((NETExtendedStrut*)self, left_end);
}

int32_t k_netextendedstrut_right_width(void* self) {
    return NETExtendedStrut_RightWidth((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_right_width(void* self, int right_width) {
    NETExtendedStrut_SetRightWidth((NETExtendedStrut*)self, right_width);
}

int32_t k_netextendedstrut_right_start(void* self) {
    return NETExtendedStrut_RightStart((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_right_start(void* self, int right_start) {
    NETExtendedStrut_SetRightStart((NETExtendedStrut*)self, right_start);
}

int32_t k_netextendedstrut_right_end(void* self) {
    return NETExtendedStrut_RightEnd((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_right_end(void* self, int right_end) {
    NETExtendedStrut_SetRightEnd((NETExtendedStrut*)self, right_end);
}

int32_t k_netextendedstrut_top_width(void* self) {
    return NETExtendedStrut_TopWidth((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_top_width(void* self, int top_width) {
    NETExtendedStrut_SetTopWidth((NETExtendedStrut*)self, top_width);
}

int32_t k_netextendedstrut_top_start(void* self) {
    return NETExtendedStrut_TopStart((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_top_start(void* self, int top_start) {
    NETExtendedStrut_SetTopStart((NETExtendedStrut*)self, top_start);
}

int32_t k_netextendedstrut_top_end(void* self) {
    return NETExtendedStrut_TopEnd((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_top_end(void* self, int top_end) {
    NETExtendedStrut_SetTopEnd((NETExtendedStrut*)self, top_end);
}

int32_t k_netextendedstrut_bottom_width(void* self) {
    return NETExtendedStrut_BottomWidth((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_bottom_width(void* self, int bottom_width) {
    NETExtendedStrut_SetBottomWidth((NETExtendedStrut*)self, bottom_width);
}

int32_t k_netextendedstrut_bottom_start(void* self) {
    return NETExtendedStrut_BottomStart((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_bottom_start(void* self, int bottom_start) {
    NETExtendedStrut_SetBottomStart((NETExtendedStrut*)self, bottom_start);
}

int32_t k_netextendedstrut_bottom_end(void* self) {
    return NETExtendedStrut_BottomEnd((NETExtendedStrut*)self);
}

void k_netextendedstrut_set_bottom_end(void* self, int bottom_end) {
    NETExtendedStrut_SetBottomEnd((NETExtendedStrut*)self, bottom_end);
}

void k_netextendedstrut_delete(void* self) {
    NETExtendedStrut_Delete((NETExtendedStrut*)(self));
}

NETStrut* k_netstrut_new(void* other) {
    return NETStrut_new((NETStrut*)other);
}

NETStrut* k_netstrut_new2(void* other) {
    return NETStrut_new2((NETStrut*)other);
}

NETStrut* k_netstrut_new3() {
    return NETStrut_new3();
}

void k_netstrut_copy_assign(void* self, void* other) {
    NETStrut_CopyAssign((NETStrut*)self, (NETStrut*)other);
}

void k_netstrut_move_assign(void* self, void* other) {
    NETStrut_MoveAssign((NETStrut*)self, (NETStrut*)other);
}

int32_t k_netstrut_left(void* self) {
    return NETStrut_Left((NETStrut*)self);
}

void k_netstrut_set_left(void* self, int left) {
    NETStrut_SetLeft((NETStrut*)self, left);
}

int32_t k_netstrut_right(void* self) {
    return NETStrut_Right((NETStrut*)self);
}

void k_netstrut_set_right(void* self, int right) {
    NETStrut_SetRight((NETStrut*)self, right);
}

int32_t k_netstrut_top(void* self) {
    return NETStrut_Top((NETStrut*)self);
}

void k_netstrut_set_top(void* self, int top) {
    NETStrut_SetTop((NETStrut*)self, top);
}

int32_t k_netstrut_bottom(void* self) {
    return NETStrut_Bottom((NETStrut*)self);
}

void k_netstrut_set_bottom(void* self, int bottom) {
    NETStrut_SetBottom((NETStrut*)self, bottom);
}

void k_netstrut_delete(void* self) {
    NETStrut_Delete((NETStrut*)(self));
}

NETFullscreenMonitors* k_netfullscreenmonitors_new(void* other) {
    return NETFullscreenMonitors_new((NETFullscreenMonitors*)other);
}

NETFullscreenMonitors* k_netfullscreenmonitors_new2(void* other) {
    return NETFullscreenMonitors_new2((NETFullscreenMonitors*)other);
}

NETFullscreenMonitors* k_netfullscreenmonitors_new3() {
    return NETFullscreenMonitors_new3();
}

void k_netfullscreenmonitors_copy_assign(void* self, void* other) {
    NETFullscreenMonitors_CopyAssign((NETFullscreenMonitors*)self, (NETFullscreenMonitors*)other);
}

void k_netfullscreenmonitors_move_assign(void* self, void* other) {
    NETFullscreenMonitors_MoveAssign((NETFullscreenMonitors*)self, (NETFullscreenMonitors*)other);
}

int32_t k_netfullscreenmonitors_top(void* self) {
    return NETFullscreenMonitors_Top((NETFullscreenMonitors*)self);
}

void k_netfullscreenmonitors_set_top(void* self, int top) {
    NETFullscreenMonitors_SetTop((NETFullscreenMonitors*)self, top);
}

int32_t k_netfullscreenmonitors_bottom(void* self) {
    return NETFullscreenMonitors_Bottom((NETFullscreenMonitors*)self);
}

void k_netfullscreenmonitors_set_bottom(void* self, int bottom) {
    NETFullscreenMonitors_SetBottom((NETFullscreenMonitors*)self, bottom);
}

int32_t k_netfullscreenmonitors_left(void* self) {
    return NETFullscreenMonitors_Left((NETFullscreenMonitors*)self);
}

void k_netfullscreenmonitors_set_left(void* self, int left) {
    NETFullscreenMonitors_SetLeft((NETFullscreenMonitors*)self, left);
}

int32_t k_netfullscreenmonitors_right(void* self) {
    return NETFullscreenMonitors_Right((NETFullscreenMonitors*)self);
}

void k_netfullscreenmonitors_set_right(void* self, int right) {
    NETFullscreenMonitors_SetRight((NETFullscreenMonitors*)self, right);
}

bool k_netfullscreenmonitors_is_set(void* self) {
    return NETFullscreenMonitors_IsSet((NETFullscreenMonitors*)self);
}

void k_netfullscreenmonitors_delete(void* self) {
    NETFullscreenMonitors_Delete((NETFullscreenMonitors*)(self));
}

NET* k_net_new(void* other) {
    return NET_new((NET*)other);
}

NET* k_net_new2(void* other) {
    return NET_new2((NET*)other);
}

void k_net_copy_assign(void* self, void* other) {
    NET_CopyAssign((NET*)self, (NET*)other);
}

void k_net_move_assign(void* self, void* other) {
    NET_MoveAssign((NET*)self, (NET*)other);
}

int32_t k_net_timestamp_compare(uint64_t time1, uint64_t time2) {
    return NET_TimestampCompare(time1, time2);
}

int32_t k_net_timestamp_diff(uint64_t time1, uint64_t time2) {
    return NET_TimestampDiff(time1, time2);
}

void k_net_delete(void* self) {
    NET_Delete((NET*)(self));
}
