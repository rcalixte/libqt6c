#include <string.h>
#include "libqscicommand.hpp"
#include "libqscicommand.h"

int64_t q_scicommand_command(void* self) {
    return QsciCommand_Command((QsciCommand*)self);
}

void q_scicommand_execute(void* self) {
    QsciCommand_Execute((QsciCommand*)self);
}

void q_scicommand_set_key(void* self, int key) {
    QsciCommand_SetKey((QsciCommand*)self, key);
}

void q_scicommand_set_alternate_key(void* self, int altkey) {
    QsciCommand_SetAlternateKey((QsciCommand*)self, altkey);
}

int32_t q_scicommand_key(void* self) {
    return QsciCommand_Key((QsciCommand*)self);
}

int32_t q_scicommand_alternate_key(void* self) {
    return QsciCommand_AlternateKey((QsciCommand*)self);
}

bool q_scicommand_valid_key(int key) {
    return QsciCommand_ValidKey(key);
}

const char* q_scicommand_description(void* self) {
    libqt_string _str = QsciCommand_Description((QsciCommand*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scicommand_delete(void* self) {
    QsciCommand_Delete((QsciCommand*)(self));
}
