#include "../libqbrush.hpp"
#include "../libqpalette.hpp"
#include "libkstatefulbrush.hpp"
#include "libkstatefulbrush.h"

KStatefulBrush* k_statefulbrush_new() {
    return KStatefulBrush_new();
}

KStatefulBrush* k_statefulbrush_new2(int32_t param1, int32_t param2) {
    return KStatefulBrush_new2(param1, param2);
}

KStatefulBrush* k_statefulbrush_new3(int32_t param1, int32_t param2) {
    return KStatefulBrush_new3(param1, param2);
}

KStatefulBrush* k_statefulbrush_new4(int32_t param1, int32_t param2) {
    return KStatefulBrush_new4(param1, param2);
}

KStatefulBrush* k_statefulbrush_new5(void* param1) {
    return KStatefulBrush_new5((QBrush*)param1);
}

KStatefulBrush* k_statefulbrush_new6(void* param1, void* background) {
    return KStatefulBrush_new6((QBrush*)param1, (QBrush*)background);
}

KStatefulBrush* k_statefulbrush_new7(void* param1) {
    return KStatefulBrush_new7((KStatefulBrush*)param1);
}

void k_statefulbrush_operator_assign(void* self, void* param1) {
    KStatefulBrush_OperatorAssign((KStatefulBrush*)self, (KStatefulBrush*)param1);
}

QBrush* k_statefulbrush_brush(void* self, int32_t param1) {
    return KStatefulBrush_Brush((KStatefulBrush*)self, param1);
}

QBrush* k_statefulbrush_brush2(void* self, void* param1) {
    return KStatefulBrush_Brush2((KStatefulBrush*)self, (QPalette*)param1);
}

void k_statefulbrush_delete(void* self) {
    KStatefulBrush_Delete((KStatefulBrush*)(self));
}
