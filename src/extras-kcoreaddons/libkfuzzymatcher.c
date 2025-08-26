#include "libkfuzzymatcher.hpp"
#include "libkfuzzymatcher.h"

KFuzzyMatcher__Result* k_fuzzymatcher__result_new(void* other) {
    return KFuzzyMatcher__Result_new((KFuzzyMatcher__Result*)other);
}

KFuzzyMatcher__Result* k_fuzzymatcher__result_new2(void* other) {
    return KFuzzyMatcher__Result_new2((KFuzzyMatcher__Result*)other);
}

void k_fuzzymatcher__result_copy_assign(void* self, void* other) {
    KFuzzyMatcher__Result_CopyAssign((KFuzzyMatcher__Result*)self, (KFuzzyMatcher__Result*)other);
}

void k_fuzzymatcher__result_move_assign(void* self, void* other) {
    KFuzzyMatcher__Result_MoveAssign((KFuzzyMatcher__Result*)self, (KFuzzyMatcher__Result*)other);
}

int32_t k_fuzzymatcher__result_score(void* self) {
    return KFuzzyMatcher__Result_Score((KFuzzyMatcher__Result*)self);
}

void k_fuzzymatcher__result_set_score(void* self, int score) {
    KFuzzyMatcher__Result_SetScore((KFuzzyMatcher__Result*)self, score);
}

bool k_fuzzymatcher__result_matched(void* self) {
    return KFuzzyMatcher__Result_Matched((KFuzzyMatcher__Result*)self);
}

void k_fuzzymatcher__result_set_matched(void* self, bool matched) {
    KFuzzyMatcher__Result_SetMatched((KFuzzyMatcher__Result*)self, matched);
}

void k_fuzzymatcher__result_delete(void* self) {
    KFuzzyMatcher__Result_Delete((KFuzzyMatcher__Result*)(self));
}

KFuzzyMatcher__Range* k_fuzzymatcher__range_new() {
    return KFuzzyMatcher__Range_new();
}

KFuzzyMatcher__Range* k_fuzzymatcher__range_new2(void* param1) {
    return KFuzzyMatcher__Range_new2((KFuzzyMatcher__Range*)param1);
}

int32_t k_fuzzymatcher__range_start(void* self) {
    return KFuzzyMatcher__Range_Start((KFuzzyMatcher__Range*)self);
}

void k_fuzzymatcher__range_set_start(void* self, int start) {
    KFuzzyMatcher__Range_SetStart((KFuzzyMatcher__Range*)self, start);
}

int32_t k_fuzzymatcher__range_length(void* self) {
    return KFuzzyMatcher__Range_Length((KFuzzyMatcher__Range*)self);
}

void k_fuzzymatcher__range_set_length(void* self, int length) {
    KFuzzyMatcher__Range_SetLength((KFuzzyMatcher__Range*)self, length);
}

void k_fuzzymatcher__range_delete(void* self) {
    KFuzzyMatcher__Range_Delete((KFuzzyMatcher__Range*)(self));
}
