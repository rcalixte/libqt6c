#include "libqtexttospeechplugin.hpp"
#include "libqtexttospeechplugin.h"

QTextToSpeechPlugin* q_texttospeechplugin_new() {
    return QTextToSpeechPlugin_New();
}

void q_texttospeechplugin_operator_assign(void* self, void* param1) {
    QTextToSpeechPlugin_OperatorAssign((QTextToSpeechPlugin*)self, (QTextToSpeechPlugin*)param1);
}

void q_texttospeechplugin_delete(void* self) {
    QTextToSpeechPlugin_Delete((QTextToSpeechPlugin*)(self));
}
