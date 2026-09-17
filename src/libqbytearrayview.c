#include "libqbytearrayview.hpp"
#include "libqbytearrayview.h"

intptr_t q_bytearrayview_max_size2() {
    return QByteArrayView_MaxSize2();
}

uint16_t q_qbytearrayview_q_checksum(const char* s, intptr_t _len, int32_t standard) {
    return qbytearrayview_QChecksum(s, _len, standard);
}
