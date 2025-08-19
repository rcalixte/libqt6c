#include "../libqsettings.hpp"
#include "libqscicommand.hpp"
#include "libqscicommandset.hpp"
#include "libqscicommandset.h"

bool q_scicommandset_read_settings(void* self, void* qs) {
    return QsciCommandSet_ReadSettings((QsciCommandSet*)self, (QSettings*)qs);
}

bool q_scicommandset_write_settings(void* self, void* qs) {
    return QsciCommandSet_WriteSettings((QsciCommandSet*)self, (QSettings*)qs);
}

libqt_list /* of QsciCommand* */ q_scicommandset_commands(void* self) {
    libqt_list _arr = QsciCommandSet_Commands((QsciCommandSet*)self);
    return _arr;
}

void q_scicommandset_clear_keys(void* self) {
    QsciCommandSet_ClearKeys((QsciCommandSet*)self);
}

void q_scicommandset_clear_alternate_keys(void* self) {
    QsciCommandSet_ClearAlternateKeys((QsciCommandSet*)self);
}

QsciCommand* q_scicommandset_bound_to(void* self, int key) {
    return QsciCommandSet_BoundTo((QsciCommandSet*)self, key);
}

QsciCommand* q_scicommandset_find(void* self, int32_t command) {
    return QsciCommandSet_Find((QsciCommandSet*)self, command);
}

bool q_scicommandset_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciCommandSet_ReadSettings2((QsciCommandSet*)self, (QSettings*)qs, prefix);
}

bool q_scicommandset_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciCommandSet_WriteSettings2((QsciCommandSet*)self, (QSettings*)qs, prefix);
}
