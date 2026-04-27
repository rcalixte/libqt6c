#include "libqtexttospeechplugin.hpp"
#include "libqtexttospeechplugin.h"

void q_texttospeechplugin_operator_assign(void* self, void* param1) {
    QTextToSpeechPlugin_OperatorAssign((QTextToSpeechPlugin*)self, (QTextToSpeechPlugin*)param1);
}

void q_texttospeechplugin_delete(void* self) {
    QTextToSpeechPlugin_Delete((QTextToSpeechPlugin*)(self));
}
