#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__EmoticonCategory
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticon
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsCore__UnicodeEmoticonManager
#include <unicodeemoticonmanager.h>
#include "libunicodeemoticonmanager.hpp"
#include "libunicodeemoticonmanager.hxx"

TextEmoticonsCore__UnicodeEmoticonManager* TextEmoticonsCore__UnicodeEmoticonManager_New() {
    return new VirtualTextEmoticonsCoreUnicodeEmoticonManager();
}

TextEmoticonsCore__UnicodeEmoticonManager* TextEmoticonsCore__UnicodeEmoticonManager_New2(QObject* parent) {
    return new VirtualTextEmoticonsCoreUnicodeEmoticonManager(parent);
}

QMetaObject* TextEmoticonsCore__UnicodeEmoticonManager_MetaObject(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEmoticonsCore__UnicodeEmoticonManager_Metacast(TextEmoticonsCore__UnicodeEmoticonManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEmoticonsCore__UnicodeEmoticonManager_Metacall(TextEmoticonsCore__UnicodeEmoticonManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

TextEmoticonsCore__UnicodeEmoticonManager* TextEmoticonsCore__UnicodeEmoticonManager_Self() {
    return TextEmoticonsCore::UnicodeEmoticonManager::self();
}

libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ TextEmoticonsCore__UnicodeEmoticonManager_UnicodeEmojiList(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    QList<TextEmoticonsCore::UnicodeEmoticon> _ret = self->unicodeEmojiList();
    // Convert QList<> from C++ memory to manually-managed C memory
    TextEmoticonsCore__UnicodeEmoticon** _arr = static_cast<TextEmoticonsCore__UnicodeEmoticon**>(malloc(sizeof(TextEmoticonsCore__UnicodeEmoticon*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new TextEmoticonsCore::UnicodeEmoticon(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of TextEmoticonsCore__UnicodeEmoticon* */ TextEmoticonsCore__UnicodeEmoticonManager_EmojisForCategory(const TextEmoticonsCore__UnicodeEmoticonManager* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    QList<TextEmoticonsCore::UnicodeEmoticon> _ret = self->emojisForCategory(category_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    TextEmoticonsCore__UnicodeEmoticon** _arr = static_cast<TextEmoticonsCore__UnicodeEmoticon**>(malloc(sizeof(TextEmoticonsCore__UnicodeEmoticon*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new TextEmoticonsCore::UnicodeEmoticon(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of TextEmoticonsCore__EmoticonCategory* */ TextEmoticonsCore__UnicodeEmoticonManager_Categories(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    QList<TextEmoticonsCore::EmoticonCategory> _ret = self->categories();
    // Convert QList<> from C++ memory to manually-managed C memory
    TextEmoticonsCore__EmoticonCategory** _arr = static_cast<TextEmoticonsCore__EmoticonCategory**>(malloc(sizeof(TextEmoticonsCore__EmoticonCategory*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new TextEmoticonsCore::EmoticonCategory(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

TextEmoticonsCore__UnicodeEmoticon* TextEmoticonsCore__UnicodeEmoticonManager_UnicodeEmoticonForEmoji(const TextEmoticonsCore__UnicodeEmoticonManager* self, const libqt_string emojiIdentifier) {
    QString emojiIdentifier_QString = QString::fromUtf8(emojiIdentifier.data, emojiIdentifier.len);
    return new TextEmoticonsCore::UnicodeEmoticon(self->unicodeEmoticonForEmoji(emojiIdentifier_QString));
}

int TextEmoticonsCore__UnicodeEmoticonManager_Count(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    return self->count();
}

// Base class handler implementation
QMetaObject* TextEmoticonsCore__UnicodeEmoticonManager_SuperMetaObject(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    return (QMetaObject*)self->TextEmoticonsCore::UnicodeEmoticonManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnMetaObject(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self)))
        vtextemoticonscoreunicodeemoticonmanager->textemoticonscore__unicodeemoticonmanager_metaobject_callback = reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEmoticonsCore__UnicodeEmoticonManager_SuperMetacast(TextEmoticonsCore__UnicodeEmoticonManager* self, const char* param1) {
    return self->TextEmoticonsCore::UnicodeEmoticonManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnMetacast(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))
        vtextemoticonscoreunicodeemoticonmanager->textemoticonscore__unicodeemoticonmanager_metacast_callback = reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEmoticonsCore__UnicodeEmoticonManager_SuperMetacall(TextEmoticonsCore__UnicodeEmoticonManager* self, int param1, int param2, void** param3) {
    return self->TextEmoticonsCore::UnicodeEmoticonManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnMetacall(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))
        vtextemoticonscoreunicodeemoticonmanager->textemoticonscore__unicodeemoticonmanager_metacall_callback = reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_Event(TextEmoticonsCore__UnicodeEmoticonManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_SuperEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QEvent* event) {
    return self->TextEmoticonsCore::UnicodeEmoticonManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))
        vtextemoticonscoreunicodeemoticonmanager->textemoticonscore__unicodeemoticonmanager_event_callback = reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_EventFilter(TextEmoticonsCore__UnicodeEmoticonManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_SuperEventFilter(TextEmoticonsCore__UnicodeEmoticonManager* self, QObject* watched, QEvent* event) {
    return self->TextEmoticonsCore::UnicodeEmoticonManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnEventFilter(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))
        vtextemoticonscoreunicodeemoticonmanager->textemoticonscore__unicodeemoticonmanager_eventfilter_callback = reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_TimerEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QTimerEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager) {
        vtextemoticonscoreunicodeemoticonmanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::UnicodeEmoticonManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_SuperTimerEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QTimerEvent* event) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self)) {
        vtextemoticonscoreunicodeemoticonmanager->TextEmoticonsCore::UnicodeEmoticonManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::UnicodeEmoticonManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnTimerEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))
        vtextemoticonscoreunicodeemoticonmanager->textemoticonscore__unicodeemoticonmanager_timerevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_ChildEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QChildEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager) {
        vtextemoticonscoreunicodeemoticonmanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::UnicodeEmoticonManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_SuperChildEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QChildEvent* event) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self)) {
        vtextemoticonscoreunicodeemoticonmanager->TextEmoticonsCore::UnicodeEmoticonManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::UnicodeEmoticonManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnChildEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))
        vtextemoticonscoreunicodeemoticonmanager->textemoticonscore__unicodeemoticonmanager_childevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_CustomEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QEvent* event) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager) {
        vtextemoticonscoreunicodeemoticonmanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::UnicodeEmoticonManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_SuperCustomEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, QEvent* event) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self)) {
        vtextemoticonscoreunicodeemoticonmanager->TextEmoticonsCore::UnicodeEmoticonManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::UnicodeEmoticonManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnCustomEvent(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))
        vtextemoticonscoreunicodeemoticonmanager->textemoticonscore__unicodeemoticonmanager_customevent_callback = reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager) {
        vtextemoticonscoreunicodeemoticonmanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::UnicodeEmoticonManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_SuperConnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self)) {
        vtextemoticonscoreunicodeemoticonmanager->TextEmoticonsCore::UnicodeEmoticonManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::UnicodeEmoticonManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnConnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))
        vtextemoticonscoreunicodeemoticonmanager->textemoticonscore__unicodeemoticonmanager_connectnotify_callback = reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self);
    if (vtextemoticonscoreunicodeemoticonmanager) {
        vtextemoticonscoreunicodeemoticonmanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsCore::UnicodeEmoticonManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsCore__UnicodeEmoticonManager_SuperDisconnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self)) {
        vtextemoticonscoreunicodeemoticonmanager->TextEmoticonsCore::UnicodeEmoticonManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsCore::UnicodeEmoticonManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsCore__UnicodeEmoticonManager_OnDisconnectNotify(TextEmoticonsCore__UnicodeEmoticonManager* self, intptr_t slot) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = dynamic_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))
        vtextemoticonscoreunicodeemoticonmanager->textemoticonscore__unicodeemoticonmanager_disconnectnotify_callback = reinterpret_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager::TextEmoticonsCore__UnicodeEmoticonManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextEmoticonsCore__UnicodeEmoticonManager_Sender(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))) {
        return vtextemoticonscoreunicodeemoticonmanager->VirtualTextEmoticonsCoreUnicodeEmoticonManager::sender();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::UnicodeEmoticonManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsCore__UnicodeEmoticonManager_SenderSignalIndex(const TextEmoticonsCore__UnicodeEmoticonManager* self) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))) {
        return vtextemoticonscoreunicodeemoticonmanager->VirtualTextEmoticonsCoreUnicodeEmoticonManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEmoticonsCore::UnicodeEmoticonManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsCore__UnicodeEmoticonManager_Receivers(const TextEmoticonsCore__UnicodeEmoticonManager* self, const char* signal) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))) {
        return vtextemoticonscoreunicodeemoticonmanager->VirtualTextEmoticonsCoreUnicodeEmoticonManager::receivers(signal);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::UnicodeEmoticonManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsCore__UnicodeEmoticonManager_IsSignalConnected(const TextEmoticonsCore__UnicodeEmoticonManager* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonscoreunicodeemoticonmanager = const_cast<VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(dynamic_cast<const VirtualTextEmoticonsCoreUnicodeEmoticonManager*>(self))) {
        return vtextemoticonscoreunicodeemoticonmanager->VirtualTextEmoticonsCoreUnicodeEmoticonManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEmoticonsCore::UnicodeEmoticonManager::isSignalConnected called without a directly constructed type");
}

void TextEmoticonsCore__UnicodeEmoticonManager_Delete(TextEmoticonsCore__UnicodeEmoticonManager* self) {
    delete self;
}
