#include "../libqjsonobject.hpp"
#include "libunicodeemoticon.hpp"
#include "libunicodeemoticonparser.hpp"
#include "libunicodeemoticonparser.h"

TextEmoticonsCore__UnicodeEmoticonParser* k_textemoticonscore__unicodeemoticonparser_new() {
    return TextEmoticonsCore__UnicodeEmoticonParser_new();
}

libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ k_textemoticonscore__unicodeemoticonparser_parse(void* self, void* o) {
    libqt_list _arr = TextEmoticonsCore__UnicodeEmoticonParser_Parse((TextEmoticonsCore__UnicodeEmoticonParser*)self, (QJsonObject*)o);
    return _arr;
}

int32_t k_textemoticonscore__unicodeemoticonparser_change_order(const char* name) {
    return TextEmoticonsCore__UnicodeEmoticonParser_ChangeOrder(qstring(name));
}

void k_textemoticonscore__unicodeemoticonparser_delete(void* self) {
    TextEmoticonsCore__UnicodeEmoticonParser_Delete((TextEmoticonsCore__UnicodeEmoticonParser*)(self));
}
