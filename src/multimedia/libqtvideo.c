#include "../libqobjectdefs.hpp"
#include "libqtvideo.hpp"
#include "libqtvideo.h"

const QMetaObject* q_tvideo_get_enum_meta_object(int32_t param1) {
    return QtVideo_GetEnumMetaObject(param1);
}

const char* q_tvideo_get_enum_name(int32_t param1) {
    return QtVideo_GetEnumName(param1);
}
