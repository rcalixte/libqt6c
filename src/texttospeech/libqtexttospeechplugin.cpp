#include <QTextToSpeechPlugin>
#include <qtexttospeechplugin.h>
#include "libqtexttospeechplugin.hpp"
#include "libqtexttospeechplugin.hxx"

QTextToSpeechPlugin* QTextToSpeechPlugin_New() {
    return new QTextToSpeechPlugin();
}

void QTextToSpeechPlugin_OperatorAssign(QTextToSpeechPlugin* self, const QTextToSpeechPlugin* param1) {
    self->operator=(*param1);
}

void QTextToSpeechPlugin_Delete(QTextToSpeechPlugin* self) {
    delete self;
}
