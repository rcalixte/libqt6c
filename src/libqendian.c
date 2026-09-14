#include "libqendian.hpp"
#include "libqendian.h"

uint64_t q_qendian_h_qbswap_helper(uint64_t source) {
    return qendian_h_QbswapHelper(source);
}

uint32_t q_qendian_h_qbswap_helper2(uint32_t source) {
    return qendian_h_QbswapHelper2(source);
}

uint16_t q_qendian_h_qbswap_helper3(uint16_t source) {
    return qendian_h_QbswapHelper3(source);
}

uint8_t q_qendian_h_qbswap_helper4(uint8_t source) {
    return qendian_h_QbswapHelper4(source);
}
