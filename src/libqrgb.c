#include "libqrgb.hpp"
#include "libqrgb.h"

int32_t q_qrgb_h_q_red(uint32_t rgb) {
    return qrgb_h_QRed(rgb);
}

int32_t q_qrgb_h_q_green(uint32_t rgb) {
    return qrgb_h_QGreen(rgb);
}

int32_t q_qrgb_h_q_blue(uint32_t rgb) {
    return qrgb_h_QBlue(rgb);
}

int32_t q_qrgb_h_q_alpha(uint32_t rgb) {
    return qrgb_h_QAlpha(rgb);
}

uint32_t q_qrgb_h_q_rgb(int r, int g, int b) {
    return qrgb_h_QRgb(r, g, b);
}

uint32_t q_qrgb_h_q_rgba(int r, int g, int b, int a) {
    return qrgb_h_QRgba(r, g, b, a);
}

int32_t q_qrgb_h_q_gray(int r, int g, int b) {
    return qrgb_h_QGray(r, g, b);
}

int32_t q_qrgb_h_q_gray2(uint32_t rgb) {
    return qrgb_h_QGray2(rgb);
}

bool q_qrgb_h_q_is_gray(uint32_t rgb) {
    return qrgb_h_QIsGray(rgb);
}

uint32_t q_qrgb_h_q_premultiply(uint32_t x) {
    return qrgb_h_QPremultiply(x);
}

uint32_t q_qrgb_h_q_unpremultiply(uint32_t p) {
    return qrgb_h_QUnpremultiply(p);
}
