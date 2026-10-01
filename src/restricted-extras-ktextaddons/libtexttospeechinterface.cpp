#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechWidget
#include <texttospeechinterface.h>
#include "libtexttospeechinterface.hpp"
#include "libtexttospeechinterface.hxx"

TextEditTextToSpeech__TextToSpeechInterface* TextEditTextToSpeech__TextToSpeechInterface_New(TextEditTextToSpeech__TextToSpeechWidget* textToSpeechWidget) {
    return new VirtualTextEditTextToSpeechTextToSpeechInterface(textToSpeechWidget);
}

TextEditTextToSpeech__TextToSpeechInterface* TextEditTextToSpeech__TextToSpeechInterface_New2(TextEditTextToSpeech__TextToSpeechWidget* textToSpeechWidget, QObject* parent) {
    return new VirtualTextEditTextToSpeechTextToSpeechInterface(textToSpeechWidget, parent);
}

QMetaObject* TextEditTextToSpeech__TextToSpeechInterface_MetaObject(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEditTextToSpeech__TextToSpeechInterface_Metacast(TextEditTextToSpeech__TextToSpeechInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEditTextToSpeech__TextToSpeechInterface_Metacall(TextEditTextToSpeech__TextToSpeechInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

bool TextEditTextToSpeech__TextToSpeechInterface_IsReady(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    return self->isReady();
}

void TextEditTextToSpeech__TextToSpeechInterface_Say(TextEditTextToSpeech__TextToSpeechInterface* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

double TextEditTextToSpeech__TextToSpeechInterface_Volume(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    return self->volume();
}

void TextEditTextToSpeech__TextToSpeechInterface_SetVolume(TextEditTextToSpeech__TextToSpeechInterface* self, double value) {
    self->setVolume(static_cast<double>(value));
}

void TextEditTextToSpeech__TextToSpeechInterface_ReloadSettings(TextEditTextToSpeech__TextToSpeechInterface* self) {
    self->reloadSettings();
}

// Base class handler implementation
QMetaObject* TextEditTextToSpeech__TextToSpeechInterface_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnMetaObject(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self)))
        vtextedittexttospeechtexttospeechinterface->textedittexttospeech__texttospeechinterface_metaobject_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechInterface_SuperMetacast(TextEditTextToSpeech__TextToSpeechInterface* self, const char* param1) {
    return self->TextEditTextToSpeech::TextToSpeechInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnMetacast(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))
        vtextedittexttospeechtexttospeechinterface->textedittexttospeech__texttospeechinterface_metacast_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechInterface_SuperMetacall(TextEditTextToSpeech__TextToSpeechInterface* self, int param1, int param2, void** param3) {
    return self->TextEditTextToSpeech::TextToSpeechInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnMetacall(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))
        vtextedittexttospeechtexttospeechinterface->textedittexttospeech__texttospeechinterface_metacall_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_Event(TextEditTextToSpeech__TextToSpeechInterface* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_SuperEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QEvent* event) {
    return self->TextEditTextToSpeech::TextToSpeechInterface::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnEvent(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))
        vtextedittexttospeechtexttospeechinterface->textedittexttospeech__texttospeechinterface_event_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_EventFilter(TextEditTextToSpeech__TextToSpeechInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_SuperEventFilter(TextEditTextToSpeech__TextToSpeechInterface* self, QObject* watched, QEvent* event) {
    return self->TextEditTextToSpeech::TextToSpeechInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnEventFilter(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))
        vtextedittexttospeechtexttospeechinterface->textedittexttospeech__texttospeechinterface_eventfilter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_TimerEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface) {
        vtextedittexttospeechtexttospeechinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QTimerEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self)) {
        vtextedittexttospeechtexttospeechinterface->TextEditTextToSpeech::TextToSpeechInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnTimerEvent(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))
        vtextedittexttospeechtexttospeechinterface->textedittexttospeech__texttospeechinterface_timerevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_ChildEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface) {
        vtextedittexttospeechtexttospeechinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_SuperChildEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QChildEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self)) {
        vtextedittexttospeechtexttospeechinterface->TextEditTextToSpeech::TextToSpeechInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnChildEvent(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))
        vtextedittexttospeechtexttospeechinterface->textedittexttospeech__texttospeechinterface_childevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_CustomEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface) {
        vtextedittexttospeechtexttospeechinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechInterface* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self)) {
        vtextedittexttospeechtexttospeechinterface->TextEditTextToSpeech::TextToSpeechInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnCustomEvent(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))
        vtextedittexttospeechtexttospeechinterface->textedittexttospeech__texttospeechinterface_customevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface) {
        vtextedittexttospeechtexttospeechinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self)) {
        vtextedittexttospeechtexttospeechinterface->TextEditTextToSpeech::TextToSpeechInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnConnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))
        vtextedittexttospeechtexttospeechinterface->textedittexttospeech__texttospeechinterface_connectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self);
    if (vtextedittexttospeechtexttospeechinterface) {
        vtextedittexttospeechtexttospeechinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechInterface_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self)) {
        vtextedittexttospeechtexttospeechinterface->TextEditTextToSpeech::TextToSpeechInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechInterface_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechInterface* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechinterface = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))
        vtextedittexttospeechtexttospeechinterface->textedittexttospeech__texttospeechinterface_disconnectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechInterface::TextEditTextToSpeech__TextToSpeechInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextEditTextToSpeech__TextToSpeechInterface_Sender(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    if (auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))) {
        return vtextedittexttospeechtexttospeechinterface->VirtualTextEditTextToSpeechTextToSpeechInterface::sender();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechInterface_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechInterface* self) {
    if (auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))) {
        return vtextedittexttospeechtexttospeechinterface->VirtualTextEditTextToSpeechTextToSpeechInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechInterface_Receivers(const TextEditTextToSpeech__TextToSpeechInterface* self, const char* signal) {
    if (auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))) {
        return vtextedittexttospeechtexttospeechinterface->VirtualTextEditTextToSpeechTextToSpeechInterface::receivers(signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechInterface_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechInterface* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechinterface = const_cast<VirtualTextEditTextToSpeechTextToSpeechInterface*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechInterface*>(self))) {
        return vtextedittexttospeechtexttospeechinterface->VirtualTextEditTextToSpeechTextToSpeechInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechInterface::isSignalConnected called without a directly constructed type");
}

void TextEditTextToSpeech__TextToSpeechInterface_Delete(TextEditTextToSpeech__TextToSpeechInterface* self) {
    delete self;
}
