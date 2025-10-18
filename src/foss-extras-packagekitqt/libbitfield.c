#include "libbitfield.hpp"
#include "libbitfield.h"

PackageKit__Bitfield* q_packagekit__bitfield_new() {
    return PackageKit__Bitfield_new();
}

PackageKit__Bitfield* q_packagekit__bitfield_new2(uint64_t val) {
    return PackageKit__Bitfield_new2(val);
}

PackageKit__Bitfield* q_packagekit__bitfield_new3(void* param1) {
    return PackageKit__Bitfield_new3((PackageKit__Bitfield*)param1);
}

uint64_t q_packagekit__bitfield_operator_bitwise_and(void* self, uint64_t mask) {
    return PackageKit__Bitfield_OperatorBitwiseAnd((PackageKit__Bitfield*)self, mask);
}

void q_packagekit__bitfield_operator_bitwise_and_assign(void* self, uint64_t mask) {
    PackageKit__Bitfield_OperatorBitwiseAndAssign((PackageKit__Bitfield*)self, mask);
}

uint64_t q_packagekit__bitfield_operator_bitwise_or(void* self, uint64_t mask) {
    return PackageKit__Bitfield_OperatorBitwiseOr((PackageKit__Bitfield*)self, mask);
}

void q_packagekit__bitfield_operator_bitwise_or_assign(void* self, uint64_t mask) {
    PackageKit__Bitfield_OperatorBitwiseOrAssign((PackageKit__Bitfield*)self, mask);
}

PackageKit__Bitfield* q_packagekit__bitfield_operator_bitwise_and2(void* self, void* mask) {
    return PackageKit__Bitfield_OperatorBitwiseAnd2((PackageKit__Bitfield*)self, (PackageKit__Bitfield*)mask);
}

void q_packagekit__bitfield_operator_bitwise_and_assign2(void* self, void* mask) {
    PackageKit__Bitfield_OperatorBitwiseAndAssign2((PackageKit__Bitfield*)self, (PackageKit__Bitfield*)mask);
}

PackageKit__Bitfield* q_packagekit__bitfield_operator_bitwise_or2(void* self, void* mask) {
    return PackageKit__Bitfield_OperatorBitwiseOr2((PackageKit__Bitfield*)self, (PackageKit__Bitfield*)mask);
}

void q_packagekit__bitfield_operator_bitwise_or_assign2(void* self, void* mask) {
    PackageKit__Bitfield_OperatorBitwiseOrAssign2((PackageKit__Bitfield*)self, (PackageKit__Bitfield*)mask);
}

void q_packagekit__bitfield_operator_assign(void* self, void* other) {
    PackageKit__Bitfield_OperatorAssign((PackageKit__Bitfield*)self, (PackageKit__Bitfield*)other);
}

bool q_packagekit__bitfield_operator_equal(void* self, void* other) {
    return PackageKit__Bitfield_OperatorEqual((PackageKit__Bitfield*)self, (PackageKit__Bitfield*)other);
}

void q_packagekit__bitfield_delete(void* self) {
    PackageKit__Bitfield_Delete((PackageKit__Bitfield*)(self));
}
